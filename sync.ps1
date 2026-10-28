# Copies the latest Unity iOS export (Bob > Export iOS Xcode project) into this repo, then commit and push.
robocopy "G:\Unity\Projects\bobcontrol\Builds\iOS" "$PSScriptRoot" /MIR /XD .git .github /XF .gitattributes .gitignore sync.ps1 /NFL /NDL /NJH /NP
