#import <UIKit/UIKit.h>

// Short haptic tick for Sfx.Tap; Handheld.Vibrate on iOS is one long buzz.
extern "C" void BobHapticTap(int strength)
{
    UIImpactFeedbackStyle style = strength >= 2 ? UIImpactFeedbackStyleHeavy
                                : strength == 1 ? UIImpactFeedbackStyleMedium
                                                : UIImpactFeedbackStyleLight;
    UIImpactFeedbackGenerator *generator = [[UIImpactFeedbackGenerator alloc] initWithStyle:style];
    [generator impactOccurred];
}
