#include "pch-cpp.hpp"





template <typename T1>
struct VirtualActionInvoker1
{
	typedef void (*Action)(void*,T1,const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj,p1,invokeData.method);
	}
};
template <typename R, typename T1>
struct GenericVirtualFuncInvoker1
{
	typedef R (*Func)(void*,T1,const RuntimeMethod*);

	static inline R Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_virtual_invoke_data(method, obj, &invokeData);
		return ((Func)invokeData.methodPtr)(obj,p1,invokeData.method);
	}
};

struct DynamicArray_1_tE5A650707ED617C8B11E4B6F29F3207E02383467;
struct DynamicArray_1_t2A75BEDB4D41FF2FB6EC822B2CFBD037211F784D;
struct DynamicArray_1_tFD6392EE4EAA442D167A921C9964FD9C17FDCDE0;
struct GetPooledFunc_tE499AD01DC2555D363C65E5DF947D4B35E0008F8;
struct List_1_t4A27DCC9A4080D8DA642DEA4EFFEBA72D6471715;
struct ObjectPool_1_tF11864F05C33C2DB6AAE614D05951B55BB8BC340;
struct Property_2_tE9B27417C17E0D8EA0D6A88F71B3C9347F2332A3;
struct ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031;
struct CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB;
struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771;
struct IRenderGraphResourceU5BU5D_tF72B9471181CD494E8F4A0274F40A7A037FF44C7;
struct IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832;
struct PropertyPathPartU5BU5D_t7994D542F14DDDDEABB1792C335C20149399AEBB;
struct StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF;
struct StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248;
struct TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB;
struct __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC;
struct Binder_t91BFCE95A7057FADF4D8A1A342AFE52872246235;
struct Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3;
struct DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E;
struct EntityId_t982FBD037EAC5CA077B1602A7EA40E3523AA0FC8;
struct EventArgValue_t12B444AF86832453534803922BF5FCE39CFD0E85;
struct EventNoArgValue_t46A184A2C045B09833A69EDC6676BADFF987882D;
struct IDictionary_t6D03155AF1FA9083817AA5B6AD7DEEACC26AB220;
struct IProperty_t9DAAF3D1ACD042DA2D622152506F58CE625EF697;
struct IRenderGraphResource_t8C49F0158EDB9571FA4BDAF754E09A32E535C021;
struct IRenderGraphResourcePool_tBCC3743B6D9FE5AA6513FE6F643B1A51B7060D35;
struct Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C;
struct InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB;
struct MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553;
struct MethodInfo_t;
struct SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6;
struct String_t;
struct UInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF;
struct UnsafeQueueBlockHeader_t93BDD5BE3C4A0486BE2A07B68862CFF1F5870D9C;
struct UnsafeQueueData_t43073ABB3262F6905C43F9180FCBB71E301597C2;
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915;
struct Expression_t24E9476A15D0D7F6495CF8292DA48C63C871E4B7;
struct GetPropertyVisitor_t88183F280884F26458B42DAF173F005F3625F540;
struct RenderGraphResourcesData_t4E1A864AD7A36EC74B28D89C86E3A4D0997958CF;
struct ResourceCallback_tAD2AFD87AC5F4806D2DE0A543648F1FA25E52356;
struct ResourceCreateCallback_t801515B956F3C21C25B4DD6A4E4E01BBCF12E657;

IL2CPP_EXTERN_C RuntimeClass* Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ExpressionEvaluator_tF912A1FA6CB7EA697DFA7926E78D808A446B48F0_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral4EBC86E0EACFCA522AEB82874860D0E248D782A5;
IL2CPP_EXTERN_C const RuntimeMethod* DynamicArray_1_Resize_m71330886D4896ECE91617DB09FAF262B0E24B00B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GCHandle_get_Target_m481F9508DA5E384D33CD1F4450060DC56BBD4CD5_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* PrimitivesConverters_TryConvertPrimitiveOrString_TisDouble_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m29A9863FEB29DD171534C86E92808796F4F4451A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* PrimitivesConverters_TryConvertPrimitiveOrString_TisDouble_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m8FF415C41F9748700137EB247B2399BE6D3629AC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* PrimitivesConverters_TryConvertPrimitiveOrString_TisDouble_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_TisInt16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175_mA8FE0BB699034D9B22257B785821E09D95A69F6B_RuntimeMethod_var;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;
struct PropertyPathPart_tFB308743948D2298957DC1898D90AF2ACFED9DFF_marshaled_com;
struct PropertyPathPart_tFB308743948D2298957DC1898D90AF2ACFED9DFF_marshaled_pinvoke;

struct StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
struct DynamicArray_1_tE5A650707ED617C8B11E4B6F29F3207E02383467  : public RuntimeObject
{
	IRenderGraphResourceU5BU5D_tF72B9471181CD494E8F4A0274F40A7A037FF44C7* ___m_Array;
	int32_t ___U3CsizeU3Ek__BackingField;
};
struct DynamicArray_1_tFD6392EE4EAA442D167A921C9964FD9C17FDCDE0  : public RuntimeObject
{
	__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* ___m_Array;
	int32_t ___U3CsizeU3Ek__BackingField;
};
struct EventArgValueFactory_1_t5EDE0EECC96FA2988C288A18C183107B9C29A44D  : public RuntimeObject
{
};
struct Property_2_tE9B27417C17E0D8EA0D6A88F71B3C9347F2332A3  : public RuntimeObject
{
	List_1_t4A27DCC9A4080D8DA642DEA4EFFEBA72D6471715* ___m_Attributes;
};
struct EventArgValue_t12B444AF86832453534803922BF5FCE39CFD0E85  : public RuntimeObject
{
	EventArgValue_t12B444AF86832453534803922BF5FCE39CFD0E85* ___nextArg;
	int32_t ___argId;
	int32_t ___temporaryCount;
};
struct IRenderGraphResource_t8C49F0158EDB9571FA4BDAF754E09A32E535C021  : public RuntimeObject
{
	bool ___imported;
	bool ___shared;
	bool ___sharedExplicitRelease;
	bool ___requestFallBack;
	uint32_t ___writeCount;
	uint32_t ___readCount;
	int32_t ___cachedHash;
	int32_t ___transientPassIndex;
	int32_t ___sharedResourceLastFrameUsed;
	bool ___isBackBuffer;
};
struct IRenderGraphResourcePool_tBCC3743B6D9FE5AA6513FE6F643B1A51B7060D35  : public RuntimeObject
{
	bool ___U3CIntraFrameMemoryAliasingU3Ek__BackingField;
};
struct MemberInfo_t  : public RuntimeObject
{
};
struct String_t  : public RuntimeObject
{
	int32_t ____stringLength;
	Il2CppChar ____firstChar;
};
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F  : public RuntimeObject
{
};
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F_marshaled_pinvoke
{
};
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F_marshaled_com
{
};
struct Expression_t24E9476A15D0D7F6495CF8292DA48C63C871E4B7  : public RuntimeObject
{
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___rpnTokens;
	bool ___hasVariables;
};
struct MarshalledUnityObject_tA225A4A0AE6E49830C3C0142B2984549E0786A28  : public RuntimeObject
{
};
struct RenderGraphResourcesData_t4E1A864AD7A36EC74B28D89C86E3A4D0997958CF  : public RuntimeObject
{
	DynamicArray_1_tE5A650707ED617C8B11E4B6F29F3207E02383467* ___resourceArray;
	int32_t ___sharedResourcesCount;
	IRenderGraphResourcePool_tBCC3743B6D9FE5AA6513FE6F643B1A51B7060D35* ___pool;
	ResourceCreateCallback_t801515B956F3C21C25B4DD6A4E4E01BBCF12E657* ___createResourceCallback;
	ResourceCallback_tAD2AFD87AC5F4806D2DE0A543648F1FA25E52356* ___releaseResourceCallback;
};
struct PrimitivesConverters_t4AC0AF040C8B4B0C9C0C9A0A6F806521CFD84F27  : public RuntimeObject
{
};
struct NativeSlice_1_t72AA15A00D1B7CE9B7265E487D15133C9F091FD0 
{
	uint8_t* ___m_Buffer;
	int32_t ___m_Stride;
	int32_t ___m_Length;
};
struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22 
{
	bool ___m_value;
};
struct Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3 
{
	uint8_t ___m_value;
};
struct Char_t521A6F19B456D956AF452D926C32709DC03D6B17 
{
	Il2CppChar ___m_value;
};
struct Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F 
{
	double ___m_value;
};
struct Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2  : public ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F
{
};
struct Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2_marshaled_pinvoke
{
};
struct Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2_marshaled_com
{
};
struct Int16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175 
{
	int16_t ___m_value;
};
struct Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C 
{
	int32_t ___m_value;
};
struct Int64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3 
{
	int64_t ___m_value;
};
struct IntPtr_t 
{
	void* ___m_value;
};
struct SByte_tFEFFEF5D2FEBF5207950AE6FAC150FC53B668DB5 
{
	int8_t ___m_value;
};
struct Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C 
{
	float ___m_value;
};
struct UInt16_tF4C148C876015C212FD72652D0B6ED8CC247A455 
{
	uint16_t ___m_value;
};
struct UInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B 
{
	uint32_t ___m_value;
};
struct UInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF 
{
	uint64_t ___m_value;
};
struct UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926 
{
	union
	{
		#pragma pack(push, tp, 1)
		struct
		{
			uint8_t* ___values;
		};
		#pragma pack(pop, tp)
		struct
		{
			uint8_t* ___values_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___keys_OffsetPadding[8];
			uint8_t* ___keys;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___keys_OffsetPadding_forAlignmentOnly[8];
			uint8_t* ___keys_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___next_OffsetPadding[16];
			uint8_t* ___next;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___next_OffsetPadding_forAlignmentOnly[16];
			uint8_t* ___next_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___buckets_OffsetPadding[24];
			uint8_t* ___buckets;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___buckets_OffsetPadding_forAlignmentOnly[24];
			uint8_t* ___buckets_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___keyCapacity_OffsetPadding[32];
			int32_t ___keyCapacity;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___keyCapacity_OffsetPadding_forAlignmentOnly[32];
			int32_t ___keyCapacity_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___bucketCapacityMask_OffsetPadding[36];
			int32_t ___bucketCapacityMask;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___bucketCapacityMask_OffsetPadding_forAlignmentOnly[36];
			int32_t ___bucketCapacityMask_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___allocatedIndexLength_OffsetPadding[40];
			int32_t ___allocatedIndexLength;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___allocatedIndexLength_OffsetPadding_forAlignmentOnly[40];
			int32_t ___allocatedIndexLength_forAlignmentOnly;
		};
	};
};
struct UnsafeQueueBlockHeader_t93BDD5BE3C4A0486BE2A07B68862CFF1F5870D9C 
{
	UnsafeQueueBlockHeader_t93BDD5BE3C4A0486BE2A07B68862CFF1F5870D9C* ___m_NextBlock;
	int32_t ___m_NumItems;
};
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915 
{
	union
	{
		struct
		{
		};
		uint8_t Void_t4861ACF8F4594C3437BB48B6E56783494B843915__padding[1];
	};
};
struct AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 
{
	uint16_t ___Index;
	uint16_t ___Version;
};
struct ArgValueList_tF9404610631615CB400FD008E21A0CE700A1814C 
{
	EventArgValue_t12B444AF86832453534803922BF5FCE39CFD0E85* ___m_FirstArg;
	int32_t ___m_PrevLocalArgId;
};
struct ArgValueList_tF9404610631615CB400FD008E21A0CE700A1814C_marshaled_pinvoke
{
	EventArgValue_t12B444AF86832453534803922BF5FCE39CFD0E85* ___m_FirstArg;
	int32_t ___m_PrevLocalArgId;
};
struct ArgValueList_tF9404610631615CB400FD008E21A0CE700A1814C_marshaled_com
{
	EventArgValue_t12B444AF86832453534803922BF5FCE39CFD0E85* ___m_FirstArg;
	int32_t ___m_PrevLocalArgId;
};
struct Unmanaged_t06043455F062B5BBF755BE852B0A7AB1876E3310 
{
	union
	{
		struct
		{
		};
		uint8_t Unmanaged_t06043455F062B5BBF755BE852B0A7AB1876E3310__padding[1];
	};
};
struct HashMapHelper_1_t02163850B336A3F6BBE330638EECFA3CBFCB8CC4 
{
	uint8_t* ___Ptr;
	EntityId_t982FBD037EAC5CA077B1602A7EA40E3523AA0FC8* ___Keys;
	int32_t* ___Next;
	int32_t* ___Buckets;
	int32_t ___Count;
	int32_t ___Capacity;
	int32_t ___Log2MinGrowth;
	int32_t ___BucketCapacity;
	int32_t ___AllocatedIndex;
	int32_t ___FirstFreeIdx;
	int32_t ___SizeOfTValue;
	AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___Allocator;
};
struct HashMapHelper_1_t51F726D16732CD16EFBBB3DE324B481A05388D2B 
{
	uint8_t* ___Ptr;
	int32_t* ___Keys;
	int32_t* ___Next;
	int32_t* ___Buckets;
	int32_t ___Count;
	int32_t ___Capacity;
	int32_t ___Log2MinGrowth;
	int32_t ___BucketCapacity;
	int32_t ___AllocatedIndex;
	int32_t ___FirstFreeIdx;
	int32_t ___SizeOfTValue;
	AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___Allocator;
};
struct UnsafeQueue_1_t0323897433D8F18174111DB978F6D9EB951CB258 
{
	UnsafeQueueData_t43073ABB3262F6905C43F9180FCBB71E301597C2* ___m_Buffer;
	AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___m_AllocatorLabel;
};
struct UnsafeQueue_1_t0F79CBE5DEA60DE3AE33082C3F7F324FE9066ECD 
{
	UnsafeQueueData_t43073ABB3262F6905C43F9180FCBB71E301597C2* ___m_Buffer;
	AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___m_AllocatorLabel;
};
struct UnsafeQueue_1_t927BA8F9B687AB3656D5A6FFCD1AEE5BE72A5515 
{
	UnsafeQueueData_t43073ABB3262F6905C43F9180FCBB71E301597C2* ___m_Buffer;
	AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___m_AllocatorLabel;
};
struct UnsafeRingQueue_1_tAF3191C06795E5D904223D7CA3372A4D56B5B5B6 
{
	int32_t* ___Ptr;
	AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___Allocator;
	int32_t ___m_Capacity;
	int32_t ___m_Filled;
	int32_t ___m_Write;
	int32_t ___m_Read;
};
struct Delegate_t  : public RuntimeObject
{
	intptr_t ___method_ptr;
	intptr_t ___invoke_impl;
	RuntimeObject* ___m_target;
	intptr_t ___method;
	intptr_t ___delegate_trampoline;
	intptr_t ___extra_arg;
	intptr_t ___method_code;
	intptr_t ___interp_method;
	intptr_t ___interp_invoke_impl;
	MethodInfo_t* ___method_info;
	MethodInfo_t* ___original_method_info;
	DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E* ___data;
	bool ___method_is_virtual;
};
struct Delegate_t_marshaled_pinvoke
{
	intptr_t ___method_ptr;
	intptr_t ___invoke_impl;
	Il2CppIUnknown* ___m_target;
	intptr_t ___method;
	intptr_t ___delegate_trampoline;
	intptr_t ___extra_arg;
	intptr_t ___method_code;
	intptr_t ___interp_method;
	intptr_t ___interp_invoke_impl;
	MethodInfo_t* ___method_info;
	MethodInfo_t* ___original_method_info;
	DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E* ___data;
	int32_t ___method_is_virtual;
};
struct Delegate_t_marshaled_com
{
	intptr_t ___method_ptr;
	intptr_t ___invoke_impl;
	Il2CppIUnknown* ___m_target;
	intptr_t ___method;
	intptr_t ___delegate_trampoline;
	intptr_t ___extra_arg;
	intptr_t ___method_code;
	intptr_t ___interp_method;
	intptr_t ___interp_invoke_impl;
	MethodInfo_t* ___method_info;
	MethodInfo_t* ___original_method_info;
	DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E* ___data;
	int32_t ___method_is_virtual;
};
struct Exception_t  : public RuntimeObject
{
	String_t* ____className;
	String_t* ____message;
	RuntimeObject* ____data;
	Exception_t* ____innerException;
	String_t* ____helpURL;
	RuntimeObject* ____stackTrace;
	String_t* ____stackTraceString;
	String_t* ____remoteStackTraceString;
	int32_t ____remoteStackIndex;
	RuntimeObject* ____dynamicMethods;
	int32_t ____HResult;
	String_t* ____source;
	SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6* ____safeSerializationManager;
	StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF* ___captured_traces;
	IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832* ___native_trace_ips;
	int32_t ___caught_in_unmanaged;
};
struct Exception_t_marshaled_pinvoke
{
	char* ____className;
	char* ____message;
	RuntimeObject* ____data;
	Exception_t_marshaled_pinvoke* ____innerException;
	char* ____helpURL;
	Il2CppIUnknown* ____stackTrace;
	char* ____stackTraceString;
	char* ____remoteStackTraceString;
	int32_t ____remoteStackIndex;
	Il2CppIUnknown* ____dynamicMethods;
	int32_t ____HResult;
	char* ____source;
	SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6* ____safeSerializationManager;
	StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF* ___captured_traces;
	Il2CppSafeArray* ___native_trace_ips;
	int32_t ___caught_in_unmanaged;
};
struct Exception_t_marshaled_com
{
	Il2CppChar* ____className;
	Il2CppChar* ____message;
	RuntimeObject* ____data;
	Exception_t_marshaled_com* ____innerException;
	Il2CppChar* ____helpURL;
	Il2CppIUnknown* ____stackTrace;
	Il2CppChar* ____stackTraceString;
	Il2CppChar* ____remoteStackTraceString;
	int32_t ____remoteStackIndex;
	Il2CppIUnknown* ____dynamicMethods;
	int32_t ____HResult;
	Il2CppChar* ____source;
	SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6* ____safeSerializationManager;
	StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF* ___captured_traces;
	Il2CppSafeArray* ___native_trace_ips;
	int32_t ___caught_in_unmanaged;
};
struct GCHandle_tC44F6F72EE68BD4CFABA24309DA7A179D41127DC 
{
	intptr_t ___handle;
};
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C  : public RuntimeObject
{
	intptr_t ___m_CachedPtr;
};
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshaled_pinvoke
{
	intptr_t ___m_CachedPtr;
};
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshaled_com
{
	intptr_t ___m_CachedPtr;
};
struct PropertyPathPartKind_t82152825D88A0E450DDCE8503272A10595047F87 
{
	int32_t ___value__;
};
struct RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B 
{
	intptr_t ___value;
};
struct UnsafeBitArray_t74DFECCCA980372B6F29B9AA508ACC77A3D6B8D4 
{
	uint64_t* ___Ptr;
	int32_t ___Length;
	int32_t ___Capacity;
	AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___Allocator;
};
struct UnsafeQueueData_t43073ABB3262F6905C43F9180FCBB71E301597C2 
{
	intptr_t ___m_FirstBlock;
	intptr_t ___m_LastBlock;
	int32_t ___m_MaxItems;
	int32_t ___m_CurrentRead;
	uint8_t* ___m_CurrentWriteBlockTLS;
};
struct UntypedUnsafeList_tB7A46F76589C71832F1147292E5123FB99E199B2 
{
	void* ___Ptr;
	int32_t ___m_length;
	int32_t ___m_capacity;
	AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___Allocator;
	int32_t ___padding;
};
struct VisitReturnCode_t795FEB928E847C526F470080AA94B33FAC60BC75 
{
	int32_t ___value__;
};
struct MulticastDelegate_t  : public Delegate_t
{
	DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771* ___delegates;
};
struct MulticastDelegate_t_marshaled_pinvoke : public Delegate_t_marshaled_pinvoke
{
	Delegate_t_marshaled_pinvoke** ___delegates;
};
struct MulticastDelegate_t_marshaled_com : public Delegate_t_marshaled_com
{
	Delegate_t_marshaled_com** ___delegates;
};
struct PropertyPathPart_tFB308743948D2298957DC1898D90AF2ACFED9DFF 
{
	int32_t ___m_Kind;
	String_t* ___m_Name;
	int32_t ___m_Index;
	RuntimeObject* ___m_Key;
};
struct PropertyPathPart_tFB308743948D2298957DC1898D90AF2ACFED9DFF_marshaled_pinvoke
{
	int32_t ___m_Kind;
	char* ___m_Name;
	int32_t ___m_Index;
	Il2CppIUnknown* ___m_Key;
};
struct PropertyPathPart_tFB308743948D2298957DC1898D90AF2ACFED9DFF_marshaled_com
{
	int32_t ___m_Kind;
	Il2CppChar* ___m_Name;
	int32_t ___m_Index;
	Il2CppIUnknown* ___m_Key;
};
struct SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295  : public Exception_t
{
};
struct TempMeshAllocator_tD37C436C57799A8137298056D60932C14639361C 
{
	GCHandle_tC44F6F72EE68BD4CFABA24309DA7A179D41127DC ___m_Handle;
};
struct Type_t  : public MemberInfo_t
{
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B ____impl;
};
struct UnsafeText_t93F5D82C1FF7AB12B0E621B9D0EC9855D005FF67 
{
	UntypedUnsafeList_tB7A46F76589C71832F1147292E5123FB99E199B2 ___m_UntypedListData;
};
struct GetPooledFunc_tE499AD01DC2555D363C65E5DF947D4B35E0008F8  : public MulticastDelegate_t
{
};
struct InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
};
struct PropertyPath_tA523CA2740853534DF6C009C588464B45A6D0A79 
{
	PropertyPathPart_tFB308743948D2298957DC1898D90AF2ACFED9DFF ___m_Part0;
	PropertyPathPart_tFB308743948D2298957DC1898D90AF2ACFED9DFF ___m_Part1;
	PropertyPathPart_tFB308743948D2298957DC1898D90AF2ACFED9DFF ___m_Part2;
	PropertyPathPart_tFB308743948D2298957DC1898D90AF2ACFED9DFF ___m_Part3;
	PropertyPathPartU5BU5D_t7994D542F14DDDDEABB1792C335C20149399AEBB* ___m_AdditionalParts;
	int32_t ___U3CLengthU3Ek__BackingField;
};
struct PropertyPath_tA523CA2740853534DF6C009C588464B45A6D0A79_marshaled_pinvoke
{
	PropertyPathPart_tFB308743948D2298957DC1898D90AF2ACFED9DFF_marshaled_pinvoke ___m_Part0;
	PropertyPathPart_tFB308743948D2298957DC1898D90AF2ACFED9DFF_marshaled_pinvoke ___m_Part1;
	PropertyPathPart_tFB308743948D2298957DC1898D90AF2ACFED9DFF_marshaled_pinvoke ___m_Part2;
	PropertyPathPart_tFB308743948D2298957DC1898D90AF2ACFED9DFF_marshaled_pinvoke ___m_Part3;
	PropertyPathPart_tFB308743948D2298957DC1898D90AF2ACFED9DFF_marshaled_pinvoke* ___m_AdditionalParts;
	int32_t ___U3CLengthU3Ek__BackingField;
};
struct PropertyPath_tA523CA2740853534DF6C009C588464B45A6D0A79_marshaled_com
{
	PropertyPathPart_tFB308743948D2298957DC1898D90AF2ACFED9DFF_marshaled_com ___m_Part0;
	PropertyPathPart_tFB308743948D2298957DC1898D90AF2ACFED9DFF_marshaled_com ___m_Part1;
	PropertyPathPart_tFB308743948D2298957DC1898D90AF2ACFED9DFF_marshaled_com ___m_Part2;
	PropertyPathPart_tFB308743948D2298957DC1898D90AF2ACFED9DFF_marshaled_com ___m_Part3;
	PropertyPathPart_tFB308743948D2298957DC1898D90AF2ACFED9DFF_marshaled_com* ___m_AdditionalParts;
	int32_t ___U3CLengthU3Ek__BackingField;
};
struct TessellationJob_t6752B373FBA1C29E9EFF3B0E46A67057B5684B76 
{
	TempMeshAllocator_tD37C436C57799A8137298056D60932C14639361C ___allocator;
	NativeSlice_1_t72AA15A00D1B7CE9B7265E487D15133C9F091FD0 ___jobParameters;
};
struct PathVisitor_tCD0947C41CDBDB774D22D560E5FFA01EF61C4446  : public RuntimeObject
{
	int32_t ___m_PathIndex;
	PropertyPath_tA523CA2740853534DF6C009C588464B45A6D0A79 ___U3CPathU3Ek__BackingField;
	RuntimeObject* ___U3CPropertyU3Ek__BackingField;
	bool ___U3CReadonlyVisitU3Ek__BackingField;
	int32_t ___U3CReturnCodeU3Ek__BackingField;
};
struct GetPropertyVisitor_t88183F280884F26458B42DAF173F005F3625F540  : public PathVisitor_tCD0947C41CDBDB774D22D560E5FFA01EF61C4446
{
	RuntimeObject* ___Property;
};
struct EventArgValueFactory_1_t5EDE0EECC96FA2988C288A18C183107B9C29A44D_StaticFields
{
	GetPooledFunc_tE499AD01DC2555D363C65E5DF947D4B35E0008F8* ___GetPooled;
};
struct EventArgValue_t12B444AF86832453534803922BF5FCE39CFD0E85_StaticFields
{
	EventNoArgValue_t46A184A2C045B09833A69EDC6676BADFF987882D* ___None;
};
struct String_t_StaticFields
{
	String_t* ___Empty;
};
struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_StaticFields
{
	String_t* ___TrueString;
	String_t* ___FalseString;
};
struct Char_t521A6F19B456D956AF452D926C32709DC03D6B17_StaticFields
{
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___s_categoryForLatin1;
};
struct IntPtr_t_StaticFields
{
	intptr_t ___Zero;
};
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_StaticFields
{
	int32_t ___OffsetOfInstanceIDInCPlusPlusObject;
};
struct Type_t_StaticFields
{
	Binder_t91BFCE95A7057FADF4D8A1A342AFE52872246235* ___s_defaultBinder;
	Il2CppChar ___Delimiter;
	TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* ___EmptyTypes;
	RuntimeObject* ___Missing;
	MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553* ___FilterAttribute;
	MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553* ___FilterName;
	MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553* ___FilterNameIgnoreCase;
};
struct GetPropertyVisitor_t88183F280884F26458B42DAF173F005F3625F540_StaticFields
{
	ObjectPool_1_tF11864F05C33C2DB6AAE614D05951B55BB8BC340* ___Pool;
};
#ifdef __clang__
#pragma clang diagnostic pop
#endif
struct StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248  : public RuntimeArray
{
	ALIGN_FIELD (8) String_t* m_Items[1];

	inline String_t* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline String_t** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, String_t* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline String_t* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline String_t** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, String_t* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};


IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ExpressionEvaluator_EvaluateTokens_TisDouble_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_m791767867653D0CCE2BEFF83F336A41B5B3A718E (StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___0_tokens, double* ___1_value, int32_t ___2_index, int32_t ___3_count, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR HashMapHelper_1_t02163850B336A3F6BBE330638EECFA3CBFCB8CC4* Array_Resize_TisHashMapHelper_1_t02163850B336A3F6BBE330638EECFA3CBFCB8CC4_mAB4D8147B48337A05C319FEA2C8645B0DF7CC711 (HashMapHelper_1_t02163850B336A3F6BBE330638EECFA3CBFCB8CC4* ___0_oldPointer, int64_t ___1_oldCount, int64_t ___2_newCount, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___3_allocator, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR HashMapHelper_1_t51F726D16732CD16EFBBB3DE324B481A05388D2B* Array_Resize_TisHashMapHelper_1_t51F726D16732CD16EFBBB3DE324B481A05388D2B_m3411CCE45309DF743A524C406531532C4FC8CD72 (HashMapHelper_1_t51F726D16732CD16EFBBB3DE324B481A05388D2B* ___0_oldPointer, int64_t ___1_oldCount, int64_t ___2_newCount, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___3_allocator, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UnsafeQueue_1_t0323897433D8F18174111DB978F6D9EB951CB258* Array_Resize_TisUnsafeQueue_1_t0323897433D8F18174111DB978F6D9EB951CB258_m87C047C9A0252B77CBF08B5DDEF1D493A14DD276 (UnsafeQueue_1_t0323897433D8F18174111DB978F6D9EB951CB258* ___0_oldPointer, int64_t ___1_oldCount, int64_t ___2_newCount, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___3_allocator, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UnsafeQueue_1_t0F79CBE5DEA60DE3AE33082C3F7F324FE9066ECD* Array_Resize_TisUnsafeQueue_1_t0F79CBE5DEA60DE3AE33082C3F7F324FE9066ECD_mFF71C2DBFEFF6594159B5324E0EC19D878450E2E (UnsafeQueue_1_t0F79CBE5DEA60DE3AE33082C3F7F324FE9066ECD* ___0_oldPointer, int64_t ___1_oldCount, int64_t ___2_newCount, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___3_allocator, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UnsafeQueue_1_t927BA8F9B687AB3656D5A6FFCD1AEE5BE72A5515* Array_Resize_TisUnsafeQueue_1_t927BA8F9B687AB3656D5A6FFCD1AEE5BE72A5515_mCFE5759D51678924C8C9E90B0A2ABA0AEF5AB6F6 (UnsafeQueue_1_t927BA8F9B687AB3656D5A6FFCD1AEE5BE72A5515* ___0_oldPointer, int64_t ___1_oldCount, int64_t ___2_newCount, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___3_allocator, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UnsafeRingQueue_1_tAF3191C06795E5D904223D7CA3372A4D56B5B5B6* Array_Resize_TisUnsafeRingQueue_1_tAF3191C06795E5D904223D7CA3372A4D56B5B5B6_mCA2193874571CACB1B8D75FBD095B8AD29C6403A (UnsafeRingQueue_1_tAF3191C06795E5D904223D7CA3372A4D56B5B5B6* ___0_oldPointer, int64_t ___1_oldCount, int64_t ___2_newCount, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___3_allocator, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint8_t* Array_Resize_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m1767423622567D1059537F40EF99A5522126FBD0 (uint8_t* ___0_oldPointer, int64_t ___1_oldCount, int64_t ___2_newCount, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___3_allocator, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t* Array_Resize_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mEE512F558B8B16B19497E4DF8445518F289534BE (int32_t* ___0_oldPointer, int64_t ___1_oldCount, int64_t ___2_newCount, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___3_allocator, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint64_t* Array_Resize_TisUInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_mD3BD6186C5C7D5B3952897C2602B7C5BEA1A7E81 (uint64_t* ___0_oldPointer, int64_t ___1_oldCount, int64_t ___2_newCount, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___3_allocator, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UnsafeBitArray_t74DFECCCA980372B6F29B9AA508ACC77A3D6B8D4* Array_Resize_TisUnsafeBitArray_t74DFECCCA980372B6F29B9AA508ACC77A3D6B8D4_m61718F1D9CCF897E5BE50BB484C8D816C988DF6F (UnsafeBitArray_t74DFECCCA980372B6F29B9AA508ACC77A3D6B8D4* ___0_oldPointer, int64_t ___1_oldCount, int64_t ___2_newCount, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___3_allocator, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* Array_Resize_TisUnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926_m1576AD06CC03F6E9D06FC13A0F280519B1666726 (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___0_oldPointer, int64_t ___1_oldCount, int64_t ___2_newCount, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___3_allocator, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UnsafeQueueBlockHeader_t93BDD5BE3C4A0486BE2A07B68862CFF1F5870D9C* Array_Resize_TisUnsafeQueueBlockHeader_t93BDD5BE3C4A0486BE2A07B68862CFF1F5870D9C_mF6857EF793C9156A611EAA1E63A02352EFE46784 (UnsafeQueueBlockHeader_t93BDD5BE3C4A0486BE2A07B68862CFF1F5870D9C* ___0_oldPointer, int64_t ___1_oldCount, int64_t ___2_newCount, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___3_allocator, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UnsafeQueueData_t43073ABB3262F6905C43F9180FCBB71E301597C2* Array_Resize_TisUnsafeQueueData_t43073ABB3262F6905C43F9180FCBB71E301597C2_m1082D56F32F50ECA3CFFDB87DB3512F2CE7544F4 (UnsafeQueueData_t43073ABB3262F6905C43F9180FCBB71E301597C2* ___0_oldPointer, int64_t ___1_oldCount, int64_t ___2_newCount, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___3_allocator, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UnsafeText_t93F5D82C1FF7AB12B0E621B9D0EC9855D005FF67* Array_Resize_TisUnsafeText_t93F5D82C1FF7AB12B0E621B9D0EC9855D005FF67_m520F16927035702AB0DF9C30EE88686BDC346F21 (UnsafeText_t93F5D82C1FF7AB12B0E621B9D0EC9855D005FF67* ___0_oldPointer, int64_t ___1_oldCount, int64_t ___2_newCount, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___3_allocator, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR intptr_t MarshalledUnityObject_MarshalNotNull_TisIl2CppSharedGenericObject_mCE897EC9A79983B4B1E6E2C8342452256309044A_gshared_inline (Il2CppSharedGenericObject* ___0_obj, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t DynamicArray_1_get_size_m128222BE63C9931B08CD38DF32B858CD1CD4926D_fshared_inline (DynamicArray_1_tFD6392EE4EAA442D167A921C9964FD9C17FDCDE0* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DynamicArray_1_Resize_m97E71E435F74A3E3C7E1BC6E733A0AFB9816550D_gshared (DynamicArray_1_t2A75BEDB4D41FF2FB6EC822B2CFBD037211F784D* __this, int32_t ___0_newSize, bool ___1_keepContent, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Il2CppSharedGenericObject** DynamicArray_1_get_Item_mA2D6D01C2851B649C10AAB4D7F0EB01F2E0596EE_gshared (DynamicArray_1_t2A75BEDB4D41FF2FB6EC822B2CFBD037211F784D* __this, int32_t ___0_index, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_NO_INLINE IL2CPP_METHOD_ATTR Il2CppSharedGenericObject* Activator_CreateInstance_TisIl2CppSharedGenericObject_m4C74D3D65600820EB977E87AD08D24AF782C97C3_gshared (const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool* UnsafeUtility_As_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mFAC64123CDCBD55D7F3EBE960A434127DBAC2DB0_inline (bool* ___0_from, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PrimitivesConverters_TryConvertPrimitiveOrString_TisDouble_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m29A9863FEB29DD171534C86E92808796F4F4451A (double* ___0_source, bool* ___1_destination, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR uint8_t* UnsafeUtility_As_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m3DC6C8431AF46D3B4AD529D400BD9FD0DC961014_inline (uint8_t* ___0_from, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PrimitivesConverters_TryConvertPrimitiveOrString_TisDouble_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m8FF415C41F9748700137EB247B2399BE6D3629AC (double* ___0_source, uint8_t* ___1_destination, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int16_t* UnsafeUtility_As_TisInt16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175_TisInt16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175_m79136FE812DC030B796002F8D0127FADB3845447_inline (int16_t* ___0_from, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PrimitivesConverters_TryConvertPrimitiveOrString_TisDouble_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_TisInt16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175_mA8FE0BB699034D9B22257B785821E09D95A69F6B (double* ___0_source, int16_t* ___1_destination, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t* UnsafeUtility_As_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mA01EDB0408204DDC6EA94EEB45B7CBFFAD767783_inline (int32_t* ___0_from, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR GCHandle_tC44F6F72EE68BD4CFABA24309DA7A179D41127DC* UnsafeUtility_As_TisIntPtr_t_TisGCHandle_tC44F6F72EE68BD4CFABA24309DA7A179D41127DC_mD94F597CB91662C823496DA9FA9A7CF908734A78_inline (intptr_t* ___0_from, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Il2CppFullySharedGenericAny* UnsafeUtilityInternal_As_TisIl2CppFullySharedGenericAny_TisIl2CppFullySharedGenericAny_mE1CA751887466B801BE69083C2B0EA3EDE41FF9B_fshared_inline (Il2CppFullySharedGenericAny* ___0_from, const RuntimeMethod* method) ;

IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ArgValueList_Append_m8976AA1BA506B735A4B72719E16760B1D03EF650_inline (ArgValueList_tF9404610631615CB400FD008E21A0CE700A1814C* __this, EventArgValue_t12B444AF86832453534803922BF5FCE39CFD0E85* ___0_argValue, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ExpressionEvaluator_EvaluateTokens_TisDouble_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_m791767867653D0CCE2BEFF83F336A41B5B3A718E (StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___0_tokens, double* ___1_value, int32_t ___2_index, int32_t ___3_count, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR HashMapHelper_1_t02163850B336A3F6BBE330638EECFA3CBFCB8CC4* Array_Resize_TisHashMapHelper_1_t02163850B336A3F6BBE330638EECFA3CBFCB8CC4_mAB4D8147B48337A05C319FEA2C8645B0DF7CC711 (HashMapHelper_1_t02163850B336A3F6BBE330638EECFA3CBFCB8CC4* ___0_oldPointer, int64_t ___1_oldCount, int64_t ___2_newCount, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___3_allocator, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR HashMapHelper_1_t51F726D16732CD16EFBBB3DE324B481A05388D2B* Array_Resize_TisHashMapHelper_1_t51F726D16732CD16EFBBB3DE324B481A05388D2B_m3411CCE45309DF743A524C406531532C4FC8CD72 (HashMapHelper_1_t51F726D16732CD16EFBBB3DE324B481A05388D2B* ___0_oldPointer, int64_t ___1_oldCount, int64_t ___2_newCount, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___3_allocator, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UnsafeQueue_1_t0323897433D8F18174111DB978F6D9EB951CB258* Array_Resize_TisUnsafeQueue_1_t0323897433D8F18174111DB978F6D9EB951CB258_m87C047C9A0252B77CBF08B5DDEF1D493A14DD276 (UnsafeQueue_1_t0323897433D8F18174111DB978F6D9EB951CB258* ___0_oldPointer, int64_t ___1_oldCount, int64_t ___2_newCount, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___3_allocator, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UnsafeQueue_1_t0F79CBE5DEA60DE3AE33082C3F7F324FE9066ECD* Array_Resize_TisUnsafeQueue_1_t0F79CBE5DEA60DE3AE33082C3F7F324FE9066ECD_mFF71C2DBFEFF6594159B5324E0EC19D878450E2E (UnsafeQueue_1_t0F79CBE5DEA60DE3AE33082C3F7F324FE9066ECD* ___0_oldPointer, int64_t ___1_oldCount, int64_t ___2_newCount, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___3_allocator, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UnsafeQueue_1_t927BA8F9B687AB3656D5A6FFCD1AEE5BE72A5515* Array_Resize_TisUnsafeQueue_1_t927BA8F9B687AB3656D5A6FFCD1AEE5BE72A5515_mCFE5759D51678924C8C9E90B0A2ABA0AEF5AB6F6 (UnsafeQueue_1_t927BA8F9B687AB3656D5A6FFCD1AEE5BE72A5515* ___0_oldPointer, int64_t ___1_oldCount, int64_t ___2_newCount, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___3_allocator, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UnsafeRingQueue_1_tAF3191C06795E5D904223D7CA3372A4D56B5B5B6* Array_Resize_TisUnsafeRingQueue_1_tAF3191C06795E5D904223D7CA3372A4D56B5B5B6_mCA2193874571CACB1B8D75FBD095B8AD29C6403A (UnsafeRingQueue_1_tAF3191C06795E5D904223D7CA3372A4D56B5B5B6* ___0_oldPointer, int64_t ___1_oldCount, int64_t ___2_newCount, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___3_allocator, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint8_t* Array_Resize_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m1767423622567D1059537F40EF99A5522126FBD0 (uint8_t* ___0_oldPointer, int64_t ___1_oldCount, int64_t ___2_newCount, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___3_allocator, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t* Array_Resize_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mEE512F558B8B16B19497E4DF8445518F289534BE (int32_t* ___0_oldPointer, int64_t ___1_oldCount, int64_t ___2_newCount, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___3_allocator, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint64_t* Array_Resize_TisUInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_mD3BD6186C5C7D5B3952897C2602B7C5BEA1A7E81 (uint64_t* ___0_oldPointer, int64_t ___1_oldCount, int64_t ___2_newCount, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___3_allocator, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UnsafeBitArray_t74DFECCCA980372B6F29B9AA508ACC77A3D6B8D4* Array_Resize_TisUnsafeBitArray_t74DFECCCA980372B6F29B9AA508ACC77A3D6B8D4_m61718F1D9CCF897E5BE50BB484C8D816C988DF6F (UnsafeBitArray_t74DFECCCA980372B6F29B9AA508ACC77A3D6B8D4* ___0_oldPointer, int64_t ___1_oldCount, int64_t ___2_newCount, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___3_allocator, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* Array_Resize_TisUnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926_m1576AD06CC03F6E9D06FC13A0F280519B1666726 (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___0_oldPointer, int64_t ___1_oldCount, int64_t ___2_newCount, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___3_allocator, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UnsafeQueueBlockHeader_t93BDD5BE3C4A0486BE2A07B68862CFF1F5870D9C* Array_Resize_TisUnsafeQueueBlockHeader_t93BDD5BE3C4A0486BE2A07B68862CFF1F5870D9C_mF6857EF793C9156A611EAA1E63A02352EFE46784 (UnsafeQueueBlockHeader_t93BDD5BE3C4A0486BE2A07B68862CFF1F5870D9C* ___0_oldPointer, int64_t ___1_oldCount, int64_t ___2_newCount, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___3_allocator, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UnsafeQueueData_t43073ABB3262F6905C43F9180FCBB71E301597C2* Array_Resize_TisUnsafeQueueData_t43073ABB3262F6905C43F9180FCBB71E301597C2_m1082D56F32F50ECA3CFFDB87DB3512F2CE7544F4 (UnsafeQueueData_t43073ABB3262F6905C43F9180FCBB71E301597C2* ___0_oldPointer, int64_t ___1_oldCount, int64_t ___2_newCount, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___3_allocator, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UnsafeText_t93F5D82C1FF7AB12B0E621B9D0EC9855D005FF67* Array_Resize_TisUnsafeText_t93F5D82C1FF7AB12B0E621B9D0EC9855D005FF67_m520F16927035702AB0DF9C30EE88686BDC346F21 (UnsafeText_t93F5D82C1FF7AB12B0E621B9D0EC9855D005FF67* ___0_oldPointer, int64_t ___1_oldCount, int64_t ___2_newCount, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___3_allocator, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool IntPtr_op_Inequality_m90EFC9C4CAD9A33E309F2DDF98EE4E1DD253637B_inline (intptr_t ___0_value1, intptr_t ___1_value2, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GCHandle_tC44F6F72EE68BD4CFABA24309DA7A179D41127DC GCHandle_FromIntPtr_mA7848A4285D007CADC52B6272DB243C8FDFD5FAC (intptr_t ___0_value, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool GCHandle_get_IsAllocated_m241908103D8D867E11CCAB73C918729825E86843_inline (GCHandle_tC44F6F72EE68BD4CFABA24309DA7A179D41127DC* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* GCHandle_get_Target_m481F9508DA5E384D33CD1F4450060DC56BBD4CD5_inline (GCHandle_tC44F6F72EE68BD4CFABA24309DA7A179D41127DC* __this, const RuntimeMethod* method) ;
inline intptr_t MarshalledUnityObject_MarshalNotNull_TisIl2CppSharedGenericObject_mCE897EC9A79983B4B1E6E2C8342452256309044A_inline (Il2CppSharedGenericObject* ___0_obj, const RuntimeMethod* method)
{
	return ((  intptr_t (*) (Il2CppSharedGenericObject*, const RuntimeMethod*))MarshalledUnityObject_MarshalNotNull_TisIl2CppSharedGenericObject_mCE897EC9A79983B4B1E6E2C8342452256309044A_gshared_inline)(___0_obj, method);
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool IntPtr_op_Equality_m7D9CDCDE9DC2A0C2C614633F4921E90187FAB271_inline (intptr_t ___0_value1, intptr_t ___1_value2, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR GCHandle_tC44F6F72EE68BD4CFABA24309DA7A179D41127DC MarshalledUnityObject_FromIntPtrUnsafe_m1C5AE0FB7CD1978A8387B0081DB909BAAC2324C3_inline (intptr_t ___0_gcHandle, const RuntimeMethod* method) ;
inline int32_t DynamicArray_1_get_size_m0C78CDCD1FF6A1256C3382649AF82DE707BB6C16_inline (DynamicArray_1_tE5A650707ED617C8B11E4B6F29F3207E02383467* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (DynamicArray_1_tE5A650707ED617C8B11E4B6F29F3207E02383467*, const RuntimeMethod*))DynamicArray_1_get_size_m128222BE63C9931B08CD38DF32B858CD1CD4926D_fshared_inline)(__this, method);
}
inline void DynamicArray_1_Resize_m71330886D4896ECE91617DB09FAF262B0E24B00B (DynamicArray_1_tE5A650707ED617C8B11E4B6F29F3207E02383467* __this, int32_t ___0_newSize, bool ___1_keepContent, const RuntimeMethod* method)
{
	((  void (*) (DynamicArray_1_tE5A650707ED617C8B11E4B6F29F3207E02383467*, int32_t, bool, const RuntimeMethod*))DynamicArray_1_Resize_m97E71E435F74A3E3C7E1BC6E733A0AFB9816550D_gshared)(__this, ___0_newSize, ___1_keepContent, method);
}
inline IRenderGraphResource_t8C49F0158EDB9571FA4BDAF754E09A32E535C021** DynamicArray_1_get_Item_mEFCD58DBBE282DE955FAEF10ECACCF41D9E04869 (DynamicArray_1_tE5A650707ED617C8B11E4B6F29F3207E02383467* __this, int32_t ___0_index, const RuntimeMethod* method)
{
	return ((  IRenderGraphResource_t8C49F0158EDB9571FA4BDAF754E09A32E535C021** (*) (DynamicArray_1_tE5A650707ED617C8B11E4B6F29F3207E02383467*, int32_t, const RuntimeMethod*))DynamicArray_1_get_Item_mA2D6D01C2851B649C10AAB4D7F0EB01F2E0596EE_gshared)(__this, ___0_index, method);
}
inline Il2CppSharedGenericObject* Activator_CreateInstance_TisIl2CppSharedGenericObject_m4C74D3D65600820EB977E87AD08D24AF782C97C3 (const RuntimeMethod* method)
{
	return ((  Il2CppSharedGenericObject* (*) (const RuntimeMethod*))Activator_CreateInstance_TisIl2CppSharedGenericObject_m4C74D3D65600820EB977E87AD08D24AF782C97C3_gshared)(method);
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool* UnsafeUtility_As_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mFAC64123CDCBD55D7F3EBE960A434127DBAC2DB0_inline (bool* ___0_from, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Boolean_TryParse_m417053B6E8D3724D0EED9E87C90D143622158352 (String_t* ___0_value, bool* ___1_result, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Double_TryParse_m60AD55BC181D70F661BC2A2294E66B5466C3C018 (String_t* ___0_s, double* ___1_result, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PrimitivesConverters_TryConvertPrimitiveOrString_TisDouble_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m29A9863FEB29DD171534C86E92808796F4F4451A (double* ___0_source, bool* ___1_destination, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR uint8_t* UnsafeUtility_As_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m3DC6C8431AF46D3B4AD529D400BD9FD0DC961014_inline (uint8_t* ___0_from, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Byte_TryParse_mB1716E3B6714F20DF6C1FEDDC4A76AA78D5EA87B (String_t* ___0_s, uint8_t* ___1_result, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PrimitivesConverters_TryConvertPrimitiveOrString_TisDouble_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m8FF415C41F9748700137EB247B2399BE6D3629AC (double* ___0_source, uint8_t* ___1_destination, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int16_t* UnsafeUtility_As_TisInt16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175_TisInt16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175_m79136FE812DC030B796002F8D0127FADB3845447_inline (int16_t* ___0_from, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Int16_TryParse_m7190AF18437CE1B43990B99E5D992E31485E77AE (String_t* ___0_s, int16_t* ___1_result, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PrimitivesConverters_TryConvertPrimitiveOrString_TisDouble_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_TisInt16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175_mA8FE0BB699034D9B22257B785821E09D95A69F6B (double* ___0_source, int16_t* ___1_destination, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t* UnsafeUtility_As_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mA01EDB0408204DDC6EA94EEB45B7CBFFAD767783_inline (int32_t* ___0_from, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162 (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* __this, String_t* ___0_message, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool GCHandle_CanDereferenceHandle_mAAAC42D1268CEF3FDD040A3D1574773D08140579_inline (intptr_t ___0_handle, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* GCHandle_GetRef_mAC7E58E62417209DC41C99F66BA70F0C3AA18DA8_inline (intptr_t ___0_handle, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* GCHandle_GetTarget_mE0AF851834410E2AEA6285B2497751570236C794 (intptr_t ___0_handle, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR GCHandle_tC44F6F72EE68BD4CFABA24309DA7A179D41127DC* UnsafeUtility_As_TisIntPtr_t_TisGCHandle_tC44F6F72EE68BD4CFABA24309DA7A179D41127DC_mD94F597CB91662C823496DA9FA9A7CF908734A78_inline (intptr_t* ___0_from, const RuntimeMethod* method) ;
inline bool* UnsafeUtilityInternal_As_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mE3D9B5B2C16912294630A6DAD8928B960B7544E6_inline (bool* ___0_from, const RuntimeMethod* method)
{
	return ((  bool* (*) (bool*, const RuntimeMethod*))UnsafeUtilityInternal_As_TisIl2CppFullySharedGenericAny_TisIl2CppFullySharedGenericAny_mE1CA751887466B801BE69083C2B0EA3EDE41FF9B_fshared_inline)(___0_from, method);
}
inline uint8_t* UnsafeUtilityInternal_As_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m5A66C1A526E263EC6778FF3879A6E62C618542C4_inline (uint8_t* ___0_from, const RuntimeMethod* method)
{
	return ((  uint8_t* (*) (uint8_t*, const RuntimeMethod*))UnsafeUtilityInternal_As_TisIl2CppFullySharedGenericAny_TisIl2CppFullySharedGenericAny_mE1CA751887466B801BE69083C2B0EA3EDE41FF9B_fshared_inline)(___0_from, method);
}
inline int16_t* UnsafeUtilityInternal_As_TisInt16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175_TisInt16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175_mD165D6F44825CD0E42C9C1F6248DB1E67976F9C2_inline (int16_t* ___0_from, const RuntimeMethod* method)
{
	return ((  int16_t* (*) (int16_t*, const RuntimeMethod*))UnsafeUtilityInternal_As_TisIl2CppFullySharedGenericAny_TisIl2CppFullySharedGenericAny_mE1CA751887466B801BE69083C2B0EA3EDE41FF9B_fshared_inline)(___0_from, method);
}
inline int32_t* UnsafeUtilityInternal_As_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mE69F70BA8B1ACDD13A1618C8AD81256FE391509A_inline (int32_t* ___0_from, const RuntimeMethod* method)
{
	return ((  int32_t* (*) (int32_t*, const RuntimeMethod*))UnsafeUtilityInternal_As_TisIl2CppFullySharedGenericAny_TisIl2CppFullySharedGenericAny_mE1CA751887466B801BE69083C2B0EA3EDE41FF9B_fshared_inline)(___0_from, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void* IntPtr_op_Explicit_m2728CBA081E79B97DDCF1D4FAD77B309CA1E94BF (intptr_t ___0_value, const RuntimeMethod* method) ;
inline GCHandle_tC44F6F72EE68BD4CFABA24309DA7A179D41127DC* UnsafeUtilityInternal_As_TisIntPtr_t_TisGCHandle_tC44F6F72EE68BD4CFABA24309DA7A179D41127DC_mD43127D5F7AA6EB4B52E5C30BA53F29843E9E9A2_inline (intptr_t* ___0_from, const RuntimeMethod* method)
{
	return ((  GCHandle_tC44F6F72EE68BD4CFABA24309DA7A179D41127DC* (*) (intptr_t*, const RuntimeMethod*))UnsafeUtilityInternal_As_TisIl2CppFullySharedGenericAny_TisIl2CppFullySharedGenericAny_mE1CA751887466B801BE69083C2B0EA3EDE41FF9B_fshared_inline)(___0_from, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArgValueList_Add_TisIl2CppFullySharedGenericAny_m0D6300DE8C6137BBAD89B2406012CFFC3906EB9F_fshared (ArgValueList_tF9404610631615CB400FD008E21A0CE700A1814C* __this, int32_t ___0_argId, Il2CppFullySharedGenericAny* ___1_value, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	CHECKED_LOCAL(EventArgValueFactory_1_t6B423EEA90D8B52839436D098320ECFEEF43974D_StaticInit);
	{
		CHECKED_LOCAL_INIT(EventArgValueFactory_1_t6B423EEA90D8B52839436D098320ECFEEF43974D_StaticInit,(il2cpp_rgctx_data(method->rgctx_data, 0)),il2cpp_codegen_runtime_class_init_inline);
		GetPooledFunc_tE499AD01DC2555D363C65E5DF947D4B35E0008F8* L_0 = ((EventArgValueFactory_1_t5EDE0EECC96FA2988C288A18C183107B9C29A44D_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->rgctx_data, 0)))->___GetPooled;
		int32_t L_1 = ___0_argId;
		Il2CppFullySharedGenericAny* L_2 = ___1_value;
		NullCheck(L_0);
		EventArgValue_t12B444AF86832453534803922BF5FCE39CFD0E85* L_3;
		L_3 = ((  EventArgValue_t12B444AF86832453534803922BF5FCE39CFD0E85* (*) (GetPooledFunc_tE499AD01DC2555D363C65E5DF947D4B35E0008F8*, int32_t, Il2CppFullySharedGenericAny*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 1)))(L_0, L_1, L_2, NULL);
		ArgValueList_Append_m8976AA1BA506B735A4B72719E16760B1D03EF650_inline(__this, L_3, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ArgValueList_FindByValue_TisIl2CppSharedGenericObject_mECA0BE1B058B973E86ECA1DEE922955C6F82EA49_gshared (ArgValueList_tF9404610631615CB400FD008E21A0CE700A1814C* __this, Il2CppSharedGenericObject** ___0_value, EventArgValue_t12B444AF86832453534803922BF5FCE39CFD0E85** ___1_arg, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	{
		EventArgValue_t12B444AF86832453534803922BF5FCE39CFD0E85** L_0 = ___1_arg;
		EventArgValue_t12B444AF86832453534803922BF5FCE39CFD0E85* L_1 = __this->___m_FirstArg;
		*(((RuntimeObject**)L_0)) = ((RuntimeObject*)L_1);
		Il2CppCodeGenWriteBarrier((void**)((RuntimeObject**)L_0), (void*)((RuntimeObject*)L_1));
		goto IL_001f;
	}

IL_000a:
	{
		EventArgValue_t12B444AF86832453534803922BF5FCE39CFD0E85** L_2 = ___1_arg;
		EventArgValue_t12B444AF86832453534803922BF5FCE39CFD0E85* L_3 = *(L_2);
		Il2CppSharedGenericObject** L_4 = ___0_value;
		NullCheck(L_3);
		bool L_5;
		L_5 = GenericVirtualFuncInvoker1< bool, Il2CppSharedGenericObject** >::Invoke(il2cpp_rgctx_method(method->rgctx_data, 0), L_3, L_4);
		if (!L_5)
		{
			goto IL_0016;
		}
	}
	{
		return (bool)1;
	}

IL_0016:
	{
		EventArgValue_t12B444AF86832453534803922BF5FCE39CFD0E85** L_6 = ___1_arg;
		EventArgValue_t12B444AF86832453534803922BF5FCE39CFD0E85** L_7 = ___1_arg;
		EventArgValue_t12B444AF86832453534803922BF5FCE39CFD0E85* L_8 = *(L_7);
		NullCheck(L_8);
		EventArgValue_t12B444AF86832453534803922BF5FCE39CFD0E85* L_9 = L_8->___nextArg;
		*(((RuntimeObject**)L_6)) = ((RuntimeObject*)L_9);
		Il2CppCodeGenWriteBarrier((void**)((RuntimeObject**)L_6), (void*)((RuntimeObject*)L_9));
	}

IL_001f:
	{
		EventArgValue_t12B444AF86832453534803922BF5FCE39CFD0E85** L_10 = ___1_arg;
		EventArgValue_t12B444AF86832453534803922BF5FCE39CFD0E85* L_11 = *(L_10);
		if (L_11)
		{
			goto IL_000a;
		}
	}
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ArgValueList_FindByValue_TisIl2CppFullySharedGenericAny_m7FAA297B30D50285924DE115AC5E3A1FC33FA3B2_fshared (ArgValueList_tF9404610631615CB400FD008E21A0CE700A1814C* __this, Il2CppFullySharedGenericAny* ___0_value, EventArgValue_t12B444AF86832453534803922BF5FCE39CFD0E85** ___1_arg, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	{
		EventArgValue_t12B444AF86832453534803922BF5FCE39CFD0E85** L_0 = ___1_arg;
		EventArgValue_t12B444AF86832453534803922BF5FCE39CFD0E85* L_1 = __this->___m_FirstArg;
		*(((RuntimeObject**)L_0)) = ((RuntimeObject*)L_1);
		Il2CppCodeGenWriteBarrier((void**)((RuntimeObject**)L_0), (void*)((RuntimeObject*)L_1));
		goto IL_001f;
	}

IL_000a:
	{
		EventArgValue_t12B444AF86832453534803922BF5FCE39CFD0E85** L_2 = ___1_arg;
		EventArgValue_t12B444AF86832453534803922BF5FCE39CFD0E85* L_3 = *(L_2);
		Il2CppFullySharedGenericAny* L_4 = ___0_value;
		NullCheck(L_3);
		bool L_5;
		L_5 = GenericVirtualFuncInvoker1< bool, Il2CppFullySharedGenericAny* >::Invoke(il2cpp_rgctx_method(method->rgctx_data, 0), L_3, L_4);
		if (!L_5)
		{
			goto IL_0016;
		}
	}
	{
		return (bool)1;
	}

IL_0016:
	{
		EventArgValue_t12B444AF86832453534803922BF5FCE39CFD0E85** L_6 = ___1_arg;
		EventArgValue_t12B444AF86832453534803922BF5FCE39CFD0E85** L_7 = ___1_arg;
		EventArgValue_t12B444AF86832453534803922BF5FCE39CFD0E85* L_8 = *(L_7);
		NullCheck(L_8);
		EventArgValue_t12B444AF86832453534803922BF5FCE39CFD0E85* L_9 = L_8->___nextArg;
		*(((RuntimeObject**)L_6)) = ((RuntimeObject*)L_9);
		Il2CppCodeGenWriteBarrier((void**)((RuntimeObject**)L_6), (void*)((RuntimeObject*)L_9));
	}

IL_001f:
	{
		EventArgValue_t12B444AF86832453534803922BF5FCE39CFD0E85** L_10 = ___1_arg;
		EventArgValue_t12B444AF86832453534803922BF5FCE39CFD0E85* L_11 = *(L_10);
		if (L_11)
		{
			goto IL_000a;
		}
	}
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Expression_Evaluate_TisDouble_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_m078E1EC84AFDC45614AC23E12723A0B785941D40 (Expression_t24E9476A15D0D7F6495CF8292DA48C63C871E4B7* __this, double* ___0_value, int32_t ___1_index, int32_t ___2_count, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ExpressionEvaluator_tF912A1FA6CB7EA697DFA7926E78D808A446B48F0_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	CHECKED_LOCAL(ExpressionEvaluator_tF912A1FA6CB7EA697DFA7926E78D808A446B48F0_StaticInit);
	{
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_0 = __this->___rpnTokens;
		double* L_1 = ___0_value;
		int32_t L_2 = ___1_index;
		int32_t L_3 = ___2_count;
		CHECKED_LOCAL_INIT(ExpressionEvaluator_tF912A1FA6CB7EA697DFA7926E78D808A446B48F0_StaticInit,(ExpressionEvaluator_tF912A1FA6CB7EA697DFA7926E78D808A446B48F0_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		bool L_4;
		L_4 = ExpressionEvaluator_EvaluateTokens_TisDouble_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_m791767867653D0CCE2BEFF83F336A41B5B3A718E(L_0, L_1, L_2, L_3, NULL);
		return L_4;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Expression_Evaluate_TisIl2CppFullySharedGenericAny_mC962ADA59143EB4298C3AE46F923C4552B01A4CC_fshared (Expression_t24E9476A15D0D7F6495CF8292DA48C63C871E4B7* __this, Il2CppFullySharedGenericAny* ___0_value, int32_t ___1_index, int32_t ___2_count, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ExpressionEvaluator_tF912A1FA6CB7EA697DFA7926E78D808A446B48F0_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	CHECKED_LOCAL(ExpressionEvaluator_tF912A1FA6CB7EA697DFA7926E78D808A446B48F0_StaticInit);
	{
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_0 = __this->___rpnTokens;
		Il2CppFullySharedGenericAny* L_1 = ___0_value;
		int32_t L_2 = ___1_index;
		int32_t L_3 = ___2_count;
		CHECKED_LOCAL_INIT(ExpressionEvaluator_tF912A1FA6CB7EA697DFA7926E78D808A446B48F0_StaticInit,(ExpressionEvaluator_tF912A1FA6CB7EA697DFA7926E78D808A446B48F0_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		bool L_4;
		L_4 = ((  bool (*) (StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*, Il2CppFullySharedGenericAny*, int32_t, int32_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 0)))(L_0, L_1, L_2, L_3, il2cpp_rgctx_method(method->rgctx_data, 0));
		return L_4;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Unmanaged_Free_TisHashMapHelper_1_t02163850B336A3F6BBE330638EECFA3CBFCB8CC4_m1F2E37212086F85A441145A7B080D43DC4AE96E4 (HashMapHelper_1_t02163850B336A3F6BBE330638EECFA3CBFCB8CC4* ___0_pointer, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___1_allocator, const RuntimeMethod* method) 
{
	{
		HashMapHelper_1_t02163850B336A3F6BBE330638EECFA3CBFCB8CC4* L_0 = ___0_pointer;
		uintptr_t L_1 = (il2cpp_codegen_conv<uintptr_t,int32_t,int32_t,false,false>(0,NULL));
		if ((!(((uintptr_t)L_0) == ((uintptr_t)L_1))))
		{
			goto IL_0006;
		}
	}
	{
		return;
	}

IL_0006:
	{
		HashMapHelper_1_t02163850B336A3F6BBE330638EECFA3CBFCB8CC4* L_2 = ___0_pointer;
		int64_t L_3 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(1,NULL));
		int64_t L_4 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(0,NULL));
		AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 L_5 = ___1_allocator;
		HashMapHelper_1_t02163850B336A3F6BBE330638EECFA3CBFCB8CC4* L_6;
		L_6 = Array_Resize_TisHashMapHelper_1_t02163850B336A3F6BBE330638EECFA3CBFCB8CC4_mAB4D8147B48337A05C319FEA2C8645B0DF7CC711(L_2, L_3, L_4, L_5, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Unmanaged_Free_TisHashMapHelper_1_t51F726D16732CD16EFBBB3DE324B481A05388D2B_m805FE99DED95E176759F6DBEF0B7B3120EB67B47 (HashMapHelper_1_t51F726D16732CD16EFBBB3DE324B481A05388D2B* ___0_pointer, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___1_allocator, const RuntimeMethod* method) 
{
	{
		HashMapHelper_1_t51F726D16732CD16EFBBB3DE324B481A05388D2B* L_0 = ___0_pointer;
		uintptr_t L_1 = (il2cpp_codegen_conv<uintptr_t,int32_t,int32_t,false,false>(0,NULL));
		if ((!(((uintptr_t)L_0) == ((uintptr_t)L_1))))
		{
			goto IL_0006;
		}
	}
	{
		return;
	}

IL_0006:
	{
		HashMapHelper_1_t51F726D16732CD16EFBBB3DE324B481A05388D2B* L_2 = ___0_pointer;
		int64_t L_3 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(1,NULL));
		int64_t L_4 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(0,NULL));
		AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 L_5 = ___1_allocator;
		HashMapHelper_1_t51F726D16732CD16EFBBB3DE324B481A05388D2B* L_6;
		L_6 = Array_Resize_TisHashMapHelper_1_t51F726D16732CD16EFBBB3DE324B481A05388D2B_m3411CCE45309DF743A524C406531532C4FC8CD72(L_2, L_3, L_4, L_5, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Unmanaged_Free_TisUnsafeQueue_1_t0323897433D8F18174111DB978F6D9EB951CB258_m2DE439768C1ED8207B310B087BA22C4E1344C151 (UnsafeQueue_1_t0323897433D8F18174111DB978F6D9EB951CB258* ___0_pointer, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___1_allocator, const RuntimeMethod* method) 
{
	{
		UnsafeQueue_1_t0323897433D8F18174111DB978F6D9EB951CB258* L_0 = ___0_pointer;
		uintptr_t L_1 = (il2cpp_codegen_conv<uintptr_t,int32_t,int32_t,false,false>(0,NULL));
		if ((!(((uintptr_t)L_0) == ((uintptr_t)L_1))))
		{
			goto IL_0006;
		}
	}
	{
		return;
	}

IL_0006:
	{
		UnsafeQueue_1_t0323897433D8F18174111DB978F6D9EB951CB258* L_2 = ___0_pointer;
		int64_t L_3 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(1,NULL));
		int64_t L_4 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(0,NULL));
		AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 L_5 = ___1_allocator;
		UnsafeQueue_1_t0323897433D8F18174111DB978F6D9EB951CB258* L_6;
		L_6 = Array_Resize_TisUnsafeQueue_1_t0323897433D8F18174111DB978F6D9EB951CB258_m87C047C9A0252B77CBF08B5DDEF1D493A14DD276(L_2, L_3, L_4, L_5, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Unmanaged_Free_TisUnsafeQueue_1_t0F79CBE5DEA60DE3AE33082C3F7F324FE9066ECD_mB86B15E6FADCADAB896DC5E3BD7AAEC58C9518AD (UnsafeQueue_1_t0F79CBE5DEA60DE3AE33082C3F7F324FE9066ECD* ___0_pointer, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___1_allocator, const RuntimeMethod* method) 
{
	{
		UnsafeQueue_1_t0F79CBE5DEA60DE3AE33082C3F7F324FE9066ECD* L_0 = ___0_pointer;
		uintptr_t L_1 = (il2cpp_codegen_conv<uintptr_t,int32_t,int32_t,false,false>(0,NULL));
		if ((!(((uintptr_t)L_0) == ((uintptr_t)L_1))))
		{
			goto IL_0006;
		}
	}
	{
		return;
	}

IL_0006:
	{
		UnsafeQueue_1_t0F79CBE5DEA60DE3AE33082C3F7F324FE9066ECD* L_2 = ___0_pointer;
		int64_t L_3 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(1,NULL));
		int64_t L_4 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(0,NULL));
		AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 L_5 = ___1_allocator;
		UnsafeQueue_1_t0F79CBE5DEA60DE3AE33082C3F7F324FE9066ECD* L_6;
		L_6 = Array_Resize_TisUnsafeQueue_1_t0F79CBE5DEA60DE3AE33082C3F7F324FE9066ECD_mFF71C2DBFEFF6594159B5324E0EC19D878450E2E(L_2, L_3, L_4, L_5, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Unmanaged_Free_TisUnsafeQueue_1_t927BA8F9B687AB3656D5A6FFCD1AEE5BE72A5515_mFB4A1A237BB767044B89C477162FEB4ADEBE20D2 (UnsafeQueue_1_t927BA8F9B687AB3656D5A6FFCD1AEE5BE72A5515* ___0_pointer, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___1_allocator, const RuntimeMethod* method) 
{
	{
		UnsafeQueue_1_t927BA8F9B687AB3656D5A6FFCD1AEE5BE72A5515* L_0 = ___0_pointer;
		uintptr_t L_1 = (il2cpp_codegen_conv<uintptr_t,int32_t,int32_t,false,false>(0,NULL));
		if ((!(((uintptr_t)L_0) == ((uintptr_t)L_1))))
		{
			goto IL_0006;
		}
	}
	{
		return;
	}

IL_0006:
	{
		UnsafeQueue_1_t927BA8F9B687AB3656D5A6FFCD1AEE5BE72A5515* L_2 = ___0_pointer;
		int64_t L_3 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(1,NULL));
		int64_t L_4 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(0,NULL));
		AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 L_5 = ___1_allocator;
		UnsafeQueue_1_t927BA8F9B687AB3656D5A6FFCD1AEE5BE72A5515* L_6;
		L_6 = Array_Resize_TisUnsafeQueue_1_t927BA8F9B687AB3656D5A6FFCD1AEE5BE72A5515_mCFE5759D51678924C8C9E90B0A2ABA0AEF5AB6F6(L_2, L_3, L_4, L_5, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Unmanaged_Free_TisUnsafeRingQueue_1_tAF3191C06795E5D904223D7CA3372A4D56B5B5B6_m1EEF7F2F65542F10C73B042CE442EB5F8FA73473 (UnsafeRingQueue_1_tAF3191C06795E5D904223D7CA3372A4D56B5B5B6* ___0_pointer, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___1_allocator, const RuntimeMethod* method) 
{
	{
		UnsafeRingQueue_1_tAF3191C06795E5D904223D7CA3372A4D56B5B5B6* L_0 = ___0_pointer;
		uintptr_t L_1 = (il2cpp_codegen_conv<uintptr_t,int32_t,int32_t,false,false>(0,NULL));
		if ((!(((uintptr_t)L_0) == ((uintptr_t)L_1))))
		{
			goto IL_0006;
		}
	}
	{
		return;
	}

IL_0006:
	{
		UnsafeRingQueue_1_tAF3191C06795E5D904223D7CA3372A4D56B5B5B6* L_2 = ___0_pointer;
		int64_t L_3 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(1,NULL));
		int64_t L_4 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(0,NULL));
		AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 L_5 = ___1_allocator;
		UnsafeRingQueue_1_tAF3191C06795E5D904223D7CA3372A4D56B5B5B6* L_6;
		L_6 = Array_Resize_TisUnsafeRingQueue_1_tAF3191C06795E5D904223D7CA3372A4D56B5B5B6_mCA2193874571CACB1B8D75FBD095B8AD29C6403A(L_2, L_3, L_4, L_5, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Unmanaged_Free_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m1C432B8FDFC847D68ECC57BF4C911BA784284271 (uint8_t* ___0_pointer, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___1_allocator, const RuntimeMethod* method) 
{
	{
		uint8_t* L_0 = ___0_pointer;
		uintptr_t L_1 = (il2cpp_codegen_conv<uintptr_t,int32_t,int32_t,false,false>(0,NULL));
		if ((!(((uintptr_t)L_0) == ((uintptr_t)L_1))))
		{
			goto IL_0006;
		}
	}
	{
		return;
	}

IL_0006:
	{
		uint8_t* L_2 = ___0_pointer;
		int64_t L_3 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(1,NULL));
		int64_t L_4 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(0,NULL));
		AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 L_5 = ___1_allocator;
		uint8_t* L_6;
		L_6 = Array_Resize_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m1767423622567D1059537F40EF99A5522126FBD0(L_2, L_3, L_4, L_5, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Unmanaged_Free_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mBDAC644D78CB577E5C3CEF18A59DB392CB645A4C (int32_t* ___0_pointer, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___1_allocator, const RuntimeMethod* method) 
{
	{
		int32_t* L_0 = ___0_pointer;
		uintptr_t L_1 = (il2cpp_codegen_conv<uintptr_t,int32_t,int32_t,false,false>(0,NULL));
		if ((!(((uintptr_t)L_0) == ((uintptr_t)L_1))))
		{
			goto IL_0006;
		}
	}
	{
		return;
	}

IL_0006:
	{
		int32_t* L_2 = ___0_pointer;
		int64_t L_3 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(1,NULL));
		int64_t L_4 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(0,NULL));
		AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 L_5 = ___1_allocator;
		int32_t* L_6;
		L_6 = Array_Resize_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mEE512F558B8B16B19497E4DF8445518F289534BE(L_2, L_3, L_4, L_5, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Unmanaged_Free_TisUInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_mEE0CCF17012BE1CA95605693A9DC3BC6AACCFB64 (uint64_t* ___0_pointer, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___1_allocator, const RuntimeMethod* method) 
{
	{
		uint64_t* L_0 = ___0_pointer;
		uintptr_t L_1 = (il2cpp_codegen_conv<uintptr_t,int32_t,int32_t,false,false>(0,NULL));
		if ((!(((uintptr_t)L_0) == ((uintptr_t)L_1))))
		{
			goto IL_0006;
		}
	}
	{
		return;
	}

IL_0006:
	{
		uint64_t* L_2 = ___0_pointer;
		int64_t L_3 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(1,NULL));
		int64_t L_4 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(0,NULL));
		AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 L_5 = ___1_allocator;
		uint64_t* L_6;
		L_6 = Array_Resize_TisUInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_mD3BD6186C5C7D5B3952897C2602B7C5BEA1A7E81(L_2, L_3, L_4, L_5, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Unmanaged_Free_TisUnsafeBitArray_t74DFECCCA980372B6F29B9AA508ACC77A3D6B8D4_mE3F6373EC4A8E7ED5EA452E3A5738529668CD99E (UnsafeBitArray_t74DFECCCA980372B6F29B9AA508ACC77A3D6B8D4* ___0_pointer, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___1_allocator, const RuntimeMethod* method) 
{
	{
		UnsafeBitArray_t74DFECCCA980372B6F29B9AA508ACC77A3D6B8D4* L_0 = ___0_pointer;
		uintptr_t L_1 = (il2cpp_codegen_conv<uintptr_t,int32_t,int32_t,false,false>(0,NULL));
		if ((!(((uintptr_t)L_0) == ((uintptr_t)L_1))))
		{
			goto IL_0006;
		}
	}
	{
		return;
	}

IL_0006:
	{
		UnsafeBitArray_t74DFECCCA980372B6F29B9AA508ACC77A3D6B8D4* L_2 = ___0_pointer;
		int64_t L_3 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(1,NULL));
		int64_t L_4 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(0,NULL));
		AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 L_5 = ___1_allocator;
		UnsafeBitArray_t74DFECCCA980372B6F29B9AA508ACC77A3D6B8D4* L_6;
		L_6 = Array_Resize_TisUnsafeBitArray_t74DFECCCA980372B6F29B9AA508ACC77A3D6B8D4_m61718F1D9CCF897E5BE50BB484C8D816C988DF6F(L_2, L_3, L_4, L_5, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Unmanaged_Free_TisUnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926_m22827025CA779A0BDA69EEF4AB67F77D1070C655 (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___0_pointer, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___1_allocator, const RuntimeMethod* method) 
{
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_0 = ___0_pointer;
		uintptr_t L_1 = (il2cpp_codegen_conv<uintptr_t,int32_t,int32_t,false,false>(0,NULL));
		if ((!(((uintptr_t)L_0) == ((uintptr_t)L_1))))
		{
			goto IL_0006;
		}
	}
	{
		return;
	}

IL_0006:
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_2 = ___0_pointer;
		int64_t L_3 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(1,NULL));
		int64_t L_4 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(0,NULL));
		AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 L_5 = ___1_allocator;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_6;
		L_6 = Array_Resize_TisUnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926_m1576AD06CC03F6E9D06FC13A0F280519B1666726(L_2, L_3, L_4, L_5, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Unmanaged_Free_TisUnsafeQueueBlockHeader_t93BDD5BE3C4A0486BE2A07B68862CFF1F5870D9C_m096E2AEE0566600497706AAD1E2B8CF599A2EFDB (UnsafeQueueBlockHeader_t93BDD5BE3C4A0486BE2A07B68862CFF1F5870D9C* ___0_pointer, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___1_allocator, const RuntimeMethod* method) 
{
	{
		UnsafeQueueBlockHeader_t93BDD5BE3C4A0486BE2A07B68862CFF1F5870D9C* L_0 = ___0_pointer;
		uintptr_t L_1 = (il2cpp_codegen_conv<uintptr_t,int32_t,int32_t,false,false>(0,NULL));
		if ((!(((uintptr_t)L_0) == ((uintptr_t)L_1))))
		{
			goto IL_0006;
		}
	}
	{
		return;
	}

IL_0006:
	{
		UnsafeQueueBlockHeader_t93BDD5BE3C4A0486BE2A07B68862CFF1F5870D9C* L_2 = ___0_pointer;
		int64_t L_3 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(1,NULL));
		int64_t L_4 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(0,NULL));
		AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 L_5 = ___1_allocator;
		UnsafeQueueBlockHeader_t93BDD5BE3C4A0486BE2A07B68862CFF1F5870D9C* L_6;
		L_6 = Array_Resize_TisUnsafeQueueBlockHeader_t93BDD5BE3C4A0486BE2A07B68862CFF1F5870D9C_mF6857EF793C9156A611EAA1E63A02352EFE46784(L_2, L_3, L_4, L_5, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Unmanaged_Free_TisUnsafeQueueData_t43073ABB3262F6905C43F9180FCBB71E301597C2_m2B126798068B361AB653416A8345288E9A242B22 (UnsafeQueueData_t43073ABB3262F6905C43F9180FCBB71E301597C2* ___0_pointer, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___1_allocator, const RuntimeMethod* method) 
{
	{
		UnsafeQueueData_t43073ABB3262F6905C43F9180FCBB71E301597C2* L_0 = ___0_pointer;
		uintptr_t L_1 = (il2cpp_codegen_conv<uintptr_t,int32_t,int32_t,false,false>(0,NULL));
		if ((!(((uintptr_t)L_0) == ((uintptr_t)L_1))))
		{
			goto IL_0006;
		}
	}
	{
		return;
	}

IL_0006:
	{
		UnsafeQueueData_t43073ABB3262F6905C43F9180FCBB71E301597C2* L_2 = ___0_pointer;
		int64_t L_3 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(1,NULL));
		int64_t L_4 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(0,NULL));
		AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 L_5 = ___1_allocator;
		UnsafeQueueData_t43073ABB3262F6905C43F9180FCBB71E301597C2* L_6;
		L_6 = Array_Resize_TisUnsafeQueueData_t43073ABB3262F6905C43F9180FCBB71E301597C2_m1082D56F32F50ECA3CFFDB87DB3512F2CE7544F4(L_2, L_3, L_4, L_5, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Unmanaged_Free_TisUnsafeText_t93F5D82C1FF7AB12B0E621B9D0EC9855D005FF67_m43022B9CFB1F8C5AB5994140793058FD355CCF84 (UnsafeText_t93F5D82C1FF7AB12B0E621B9D0EC9855D005FF67* ___0_pointer, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___1_allocator, const RuntimeMethod* method) 
{
	{
		UnsafeText_t93F5D82C1FF7AB12B0E621B9D0EC9855D005FF67* L_0 = ___0_pointer;
		uintptr_t L_1 = (il2cpp_codegen_conv<uintptr_t,int32_t,int32_t,false,false>(0,NULL));
		if ((!(((uintptr_t)L_0) == ((uintptr_t)L_1))))
		{
			goto IL_0006;
		}
	}
	{
		return;
	}

IL_0006:
	{
		UnsafeText_t93F5D82C1FF7AB12B0E621B9D0EC9855D005FF67* L_2 = ___0_pointer;
		int64_t L_3 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(1,NULL));
		int64_t L_4 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(0,NULL));
		AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 L_5 = ___1_allocator;
		UnsafeText_t93F5D82C1FF7AB12B0E621B9D0EC9855D005FF67* L_6;
		L_6 = Array_Resize_TisUnsafeText_t93F5D82C1FF7AB12B0E621B9D0EC9855D005FF67_m520F16927035702AB0DF9C30EE88686BDC346F21(L_2, L_3, L_4, L_5, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Unmanaged_Free_TisIl2CppFullySharedGenericStruct_mC5E4D92A647D08D8B3B7CCF667B40D0ECD8ACB83_fshared (Il2CppFullySharedGenericStruct* ___0_pointer, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___1_allocator, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	{
		Il2CppFullySharedGenericStruct* L_0 = ___0_pointer;
		uintptr_t L_1 = (il2cpp_codegen_conv<uintptr_t,int32_t,int32_t,false,false>(0,NULL));
		if ((!(((uintptr_t)L_0) == ((uintptr_t)L_1))))
		{
			goto IL_0006;
		}
	}
	{
		return;
	}

IL_0006:
	{
		Il2CppFullySharedGenericStruct* L_2 = ___0_pointer;
		int64_t L_3 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(1,NULL));
		int64_t L_4 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(0,NULL));
		AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 L_5 = ___1_allocator;
		Il2CppFullySharedGenericStruct* L_6;
		L_6 = ((  Il2CppFullySharedGenericStruct* (*) (Il2CppFullySharedGenericStruct*, int64_t, int64_t, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 0)))(L_2, L_3, L_4, L_5, il2cpp_rgctx_method(method->rgctx_data, 0));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_NO_INLINE IL2CPP_METHOD_ATTR Il2CppSharedGenericObject* TessellationJob_ExtractHandle_TisIl2CppSharedGenericObject_mD102DA01666768738FD7FAD18FADC6A286BD57C3_gshared (TessellationJob_t6752B373FBA1C29E9EFF3B0E46A67057B5684B76* IL2CPP_PARAMETER_RESTRICT __this, intptr_t ___0_handlePtr, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	GCHandle_tC44F6F72EE68BD4CFABA24309DA7A179D41127DC V_0;
	memset((&V_0), 0, sizeof(V_0));
	GCHandle_tC44F6F72EE68BD4CFABA24309DA7A179D41127DC V_1;
	memset((&V_1), 0, sizeof(V_1));
	Il2CppSharedGenericObject* V_2 = NULL;
	GCHandle_tC44F6F72EE68BD4CFABA24309DA7A179D41127DC G_B3_0;
	memset((&G_B3_0), 0, sizeof(G_B3_0));
	{
		intptr_t L_0 = ___0_handlePtr;
		bool L_1;
		L_1 = IntPtr_op_Inequality_m90EFC9C4CAD9A33E309F2DDF98EE4E1DD253637B_inline(L_0, 0, NULL);
		if (L_1)
		{
			goto IL_0018;
		}
	}
	{
		il2cpp_codegen_initobj((&V_1), sizeof(GCHandle_tC44F6F72EE68BD4CFABA24309DA7A179D41127DC));
		GCHandle_tC44F6F72EE68BD4CFABA24309DA7A179D41127DC L_2 = V_1;
		G_B3_0 = L_2;
		goto IL_001e;
	}

IL_0018:
	{
		intptr_t L_3 = ___0_handlePtr;
		GCHandle_tC44F6F72EE68BD4CFABA24309DA7A179D41127DC L_4;
		L_4 = GCHandle_FromIntPtr_mA7848A4285D007CADC52B6272DB243C8FDFD5FAC(L_3, NULL);
		G_B3_0 = L_4;
	}

IL_001e:
	{
		V_0 = G_B3_0;
		bool L_5;
		L_5 = GCHandle_get_IsAllocated_m241908103D8D867E11CCAB73C918729825E86843_inline((&V_0), NULL);
		if (L_5)
		{
			goto IL_0032;
		}
	}
	{
		il2cpp_codegen_initobj((&V_2), sizeof(Il2CppSharedGenericObject*));
		Il2CppSharedGenericObject* L_6 = V_2;
		return L_6;
	}

IL_0032:
	{
		RuntimeObject* L_7;
		L_7 = GCHandle_get_Target_m481F9508DA5E384D33CD1F4450060DC56BBD4CD5_inline((&V_0), NULL);
		return ((Il2CppSharedGenericObject*)IsInst((RuntimeObject*)L_7, il2cpp_rgctx_data(method->rgctx_data, 0)));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t MarshalledUnityObject_Marshal_TisIl2CppSharedGenericObject_m35CB06885EF5600EDBB840B54EDAF3A806896DBB_gshared (Il2CppSharedGenericObject* ___0_obj, const RuntimeMethod* method) 
{
	{
		Il2CppSharedGenericObject* L_0 = ___0_obj;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		return 0;
	}

IL_000e:
	{
		Il2CppSharedGenericObject* L_1 = ___0_obj;
		intptr_t L_2;
		L_2 = MarshalledUnityObject_MarshalNotNull_TisIl2CppSharedGenericObject_mCE897EC9A79983B4B1E6E2C8342452256309044A_inline(L_1, NULL);
		return L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t MarshalledUnityObject_MarshalNotNull_TisIl2CppSharedGenericObject_mCE897EC9A79983B4B1E6E2C8342452256309044A_gshared (Il2CppSharedGenericObject* ___0_obj, const RuntimeMethod* method) 
{
	{
		Il2CppSharedGenericObject* L_0 = ___0_obj;
		NullCheck(L_0);
		intptr_t L_1 = ((Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)L_0)->___m_CachedPtr;
		return L_1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Il2CppSharedGenericObject* MarshalledUnityObject_Unmarshal_TisIl2CppSharedGenericObject_mDFF812844C3A315BA334E9FD102E4EE28E2847B1_gshared (intptr_t ___0_gcHandlePtr, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	GCHandle_tC44F6F72EE68BD4CFABA24309DA7A179D41127DC V_0;
	memset((&V_0), 0, sizeof(V_0));
	Il2CppSharedGenericObject* V_1 = NULL;
	{
		intptr_t L_0 = ___0_gcHandlePtr;
		bool L_1;
		L_1 = IntPtr_op_Equality_m7D9CDCDE9DC2A0C2C614633F4921E90187FAB271_inline(L_0, 0, NULL);
		if (!L_1)
		{
			goto IL_0017;
		}
	}
	{
		il2cpp_codegen_initobj((&V_1), sizeof(Il2CppSharedGenericObject*));
		Il2CppSharedGenericObject* L_2 = V_1;
		return L_2;
	}

IL_0017:
	{
		intptr_t L_3 = ___0_gcHandlePtr;
		GCHandle_tC44F6F72EE68BD4CFABA24309DA7A179D41127DC L_4;
		L_4 = MarshalledUnityObject_FromIntPtrUnsafe_m1C5AE0FB7CD1978A8387B0081DB909BAAC2324C3_inline(L_3, NULL);
		V_0 = L_4;
		RuntimeObject* L_5;
		L_5 = GCHandle_get_Target_m481F9508DA5E384D33CD1F4450060DC56BBD4CD5_inline((&V_0), NULL);
		return ((Il2CppSharedGenericObject*)Castclass((RuntimeObject*)L_5, il2cpp_rgctx_data(method->rgctx_data, 0)));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GetPropertyVisitor_VisitPath_TisIl2CppFullySharedGenericAny_TisIl2CppFullySharedGenericAny_m48D5F231D141FE04D8C4AA045C484BDF9928EBC0_fshared (GetPropertyVisitor_t88183F280884F26458B42DAF173F005F3625F540* __this, Property_2_tE9B27417C17E0D8EA0D6A88F71B3C9347F2332A3* ___0_property, Il2CppFullySharedGenericAny* ___1_container, Il2CppFullySharedGenericAny* ___2_value, const RuntimeMethod* method) 
{
	{
		Property_2_tE9B27417C17E0D8EA0D6A88F71B3C9347F2332A3* L_0 = ___0_property;
		__this->___Property = (RuntimeObject*)L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___Property), (void*)(RuntimeObject*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t RenderGraphResourcesData_AddNewRenderGraphResource_TisIl2CppSharedGenericObject_mBB87A5C94B2E32833D752DA290821E94102810F7_gshared (RenderGraphResourcesData_t4E1A864AD7A36EC74B28D89C86E3A4D0997958CF* __this, Il2CppSharedGenericObject** ___0_outRes, bool ___1_pooledResource, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DynamicArray_1_Resize_m71330886D4896ECE91617DB09FAF262B0E24B00B_RuntimeMethod_var);
		il2cpp_rgctx_method_init(method);
	}
	int32_t V_0 = 0;
	RuntimeObject* G_B4_0 = NULL;
	RuntimeObject* G_B3_0 = NULL;
	IRenderGraphResourcePool_tBCC3743B6D9FE5AA6513FE6F643B1A51B7060D35* G_B5_0 = NULL;
	RuntimeObject* G_B5_1 = NULL;
	{
		DynamicArray_1_tE5A650707ED617C8B11E4B6F29F3207E02383467* L_0 = __this->___resourceArray;
		NullCheck(L_0);
		int32_t L_1;
		L_1 = DynamicArray_1_get_size_m0C78CDCD1FF6A1256C3382649AF82DE707BB6C16_inline(L_0, NULL);
		V_0 = L_1;
		DynamicArray_1_tE5A650707ED617C8B11E4B6F29F3207E02383467* L_2 = __this->___resourceArray;
		DynamicArray_1_tE5A650707ED617C8B11E4B6F29F3207E02383467* L_3 = __this->___resourceArray;
		NullCheck(L_3);
		int32_t L_4;
		L_4 = DynamicArray_1_get_size_m0C78CDCD1FF6A1256C3382649AF82DE707BB6C16_inline(L_3, NULL);
		NullCheck(L_2);
		DynamicArray_1_Resize_m71330886D4896ECE91617DB09FAF262B0E24B00B(L_2, ((int32_t)il2cpp_codegen_add(L_4, 1)), (bool)1, DynamicArray_1_Resize_m71330886D4896ECE91617DB09FAF262B0E24B00B_RuntimeMethod_var);
		DynamicArray_1_tE5A650707ED617C8B11E4B6F29F3207E02383467* L_5 = __this->___resourceArray;
		int32_t L_6 = V_0;
		NullCheck(L_5);
		IRenderGraphResource_t8C49F0158EDB9571FA4BDAF754E09A32E535C021** L_7;
		L_7 = DynamicArray_1_get_Item_mEFCD58DBBE282DE955FAEF10ECACCF41D9E04869(L_5, L_6, NULL);
		IRenderGraphResource_t8C49F0158EDB9571FA4BDAF754E09A32E535C021* L_8 = *(L_7);
		if (L_8)
		{
			goto IL_004b;
		}
	}
	{
		DynamicArray_1_tE5A650707ED617C8B11E4B6F29F3207E02383467* L_9 = __this->___resourceArray;
		int32_t L_10 = V_0;
		NullCheck(L_9);
		IRenderGraphResource_t8C49F0158EDB9571FA4BDAF754E09A32E535C021** L_11;
		L_11 = DynamicArray_1_get_Item_mEFCD58DBBE282DE955FAEF10ECACCF41D9E04869(L_9, L_10, NULL);
		Il2CppSharedGenericObject* L_12;
		L_12 = Activator_CreateInstance_TisIl2CppSharedGenericObject_m4C74D3D65600820EB977E87AD08D24AF782C97C3(il2cpp_rgctx_method(method->rgctx_data, 0));
		*(((RuntimeObject**)L_11)) = ((RuntimeObject*)L_12);
		Il2CppCodeGenWriteBarrier((void**)((RuntimeObject**)L_11), (void*)((RuntimeObject*)L_12));
	}

IL_004b:
	{
		Il2CppSharedGenericObject** L_13 = ___0_outRes;
		DynamicArray_1_tE5A650707ED617C8B11E4B6F29F3207E02383467* L_14 = __this->___resourceArray;
		int32_t L_15 = V_0;
		NullCheck(L_14);
		IRenderGraphResource_t8C49F0158EDB9571FA4BDAF754E09A32E535C021** L_16;
		L_16 = DynamicArray_1_get_Item_mEFCD58DBBE282DE955FAEF10ECACCF41D9E04869(L_14, L_15, NULL);
		IRenderGraphResource_t8C49F0158EDB9571FA4BDAF754E09A32E535C021* L_17 = *(L_16);
		*(Il2CppSharedGenericObject**)L_13 = ((Il2CppSharedGenericObject*)IsInst((RuntimeObject*)L_17, il2cpp_rgctx_data(method->rgctx_data, 1)));
		Il2CppCodeGenWriteBarrier((void**)(Il2CppSharedGenericObject**)L_13, (void*)((Il2CppSharedGenericObject*)IsInst((RuntimeObject*)L_17, il2cpp_rgctx_data(method->rgctx_data, 1))));
		Il2CppSharedGenericObject** L_18 = ___0_outRes;
		Il2CppSharedGenericObject* L_19 = (*(Il2CppSharedGenericObject**)L_18);
		bool L_20 = ___1_pooledResource;
		if (L_20)
		{
			G_B4_0 = ((RuntimeObject*)(L_19));
			goto IL_0079;
		}
		G_B3_0 = ((RuntimeObject*)(L_19));
	}
	{
		G_B5_0 = ((IRenderGraphResourcePool_tBCC3743B6D9FE5AA6513FE6F643B1A51B7060D35*)(NULL));
		G_B5_1 = G_B3_0;
		goto IL_007f;
	}

IL_0079:
	{
		IRenderGraphResourcePool_tBCC3743B6D9FE5AA6513FE6F643B1A51B7060D35* L_21 = __this->___pool;
		G_B5_0 = L_21;
		G_B5_1 = G_B4_0;
	}

IL_007f:
	{
		NullCheck((IRenderGraphResource_t8C49F0158EDB9571FA4BDAF754E09A32E535C021*)G_B5_1);
		VirtualActionInvoker1< IRenderGraphResourcePool_tBCC3743B6D9FE5AA6513FE6F643B1A51B7060D35* >::Invoke(4, (IRenderGraphResource_t8C49F0158EDB9571FA4BDAF754E09A32E535C021*)G_B5_1, G_B5_0);
		int32_t L_22 = V_0;
		return L_22;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PrimitivesConverters_DoConvert_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m9027343AE2D5E12E783D960A500BBA8FE5195BBC (bool* ___0_source, const RuntimeMethod* method) 
{
	uint8_t V_0 = 0x0;
	Il2CppChar V_1 = 0x0;
	double V_2 = 0.0;
	int16_t V_3 = 0;
	int32_t V_4 = 0;
	int64_t V_5 = 0;
	int8_t V_6 = 0x0;
	float V_7 = 0.0f;
	String_t* V_8 = NULL;
	uint16_t V_9 = 0;
	uint32_t V_10 = 0;
	uint64_t V_11 = 0;
	{
	}
	{
		bool* L_0 = ___0_source;
		bool* L_1;
		L_1 = UnsafeUtility_As_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mFAC64123CDCBD55D7F3EBE960A434127DBAC2DB0_inline(L_0, NULL);
		bool L_2 = (*(bool*)L_1);
		return L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PrimitivesConverters_DoConvert_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m149761E33DBB5938797158CD2267777889249D20 (uint8_t* ___0_source, const RuntimeMethod* method) 
{
	bool V_0 = false;
	Il2CppChar V_1 = 0x0;
	double V_2 = 0.0;
	int16_t V_3 = 0;
	int32_t V_4 = 0;
	int64_t V_5 = 0;
	int8_t V_6 = 0x0;
	float V_7 = 0.0f;
	String_t* V_8 = NULL;
	uint16_t V_9 = 0;
	uint32_t V_10 = 0;
	uint64_t V_11 = 0;
	{
	}
	{
		uint8_t* L_0 = ___0_source;
		int32_t L_1 = ((int32_t)*(L_0));
		V_0 = (bool)((!(((uint32_t)L_1) <= ((uint32_t)0)))? 1 : 0);
		bool* L_2;
		L_2 = UnsafeUtility_As_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mFAC64123CDCBD55D7F3EBE960A434127DBAC2DB0_inline((&V_0), NULL);
		bool L_3 = (*(bool*)L_2);
		return L_3;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PrimitivesConverters_DoConvert_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m3DF4ED5D8E7966448749B0EF4789CF9D28790956 (Il2CppChar* ___0_source, const RuntimeMethod* method) 
{
	bool V_0 = false;
	uint8_t V_1 = 0x0;
	double V_2 = 0.0;
	int16_t V_3 = 0;
	int32_t V_4 = 0;
	int64_t V_5 = 0;
	int8_t V_6 = 0x0;
	float V_7 = 0.0f;
	String_t* V_8 = NULL;
	uint16_t V_9 = 0;
	uint32_t V_10 = 0;
	uint64_t V_11 = 0;
	{
	}
	{
		Il2CppChar* L_0 = ___0_source;
		int32_t L_1 = ((int32_t)*(((uint16_t*)L_0)));
		V_0 = (bool)((!(((uint32_t)L_1) <= ((uint32_t)0)))? 1 : 0);
		bool* L_2;
		L_2 = UnsafeUtility_As_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mFAC64123CDCBD55D7F3EBE960A434127DBAC2DB0_inline((&V_0), NULL);
		bool L_3 = (*(bool*)L_2);
		return L_3;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PrimitivesConverters_DoConvert_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mC66F7E13FEF3C2A3380BBC07D08F03A8782D33CB (double* ___0_source, const RuntimeMethod* method) 
{
	bool V_0 = false;
	uint8_t V_1 = 0x0;
	Il2CppChar V_2 = 0x0;
	int16_t V_3 = 0;
	int32_t V_4 = 0;
	int64_t V_5 = 0;
	int8_t V_6 = 0x0;
	float V_7 = 0.0f;
	String_t* V_8 = NULL;
	uint16_t V_9 = 0;
	uint32_t V_10 = 0;
	uint64_t V_11 = 0;
	{
	}
	{
		double* L_0 = ___0_source;
		double L_1 = *(L_0);
		V_0 = (bool)((((int32_t)((((double)L_1) == ((double)(0.0)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool* L_2;
		L_2 = UnsafeUtility_As_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mFAC64123CDCBD55D7F3EBE960A434127DBAC2DB0_inline((&V_0), NULL);
		bool L_3 = (*(bool*)L_2);
		return L_3;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PrimitivesConverters_DoConvert_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m89D52A31D7F2F05F0D17A850C58C0C5F8E030B6B (int16_t* ___0_source, const RuntimeMethod* method) 
{
	bool V_0 = false;
	uint8_t V_1 = 0x0;
	Il2CppChar V_2 = 0x0;
	double V_3 = 0.0;
	int32_t V_4 = 0;
	int64_t V_5 = 0;
	int8_t V_6 = 0x0;
	float V_7 = 0.0f;
	String_t* V_8 = NULL;
	uint16_t V_9 = 0;
	uint32_t V_10 = 0;
	uint64_t V_11 = 0;
	{
	}
	{
		int16_t* L_0 = ___0_source;
		int32_t L_1 = ((int32_t)*(L_0));
		V_0 = (bool)((!(((uint32_t)L_1) <= ((uint32_t)0)))? 1 : 0);
		bool* L_2;
		L_2 = UnsafeUtility_As_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mFAC64123CDCBD55D7F3EBE960A434127DBAC2DB0_inline((&V_0), NULL);
		bool L_3 = (*(bool*)L_2);
		return L_3;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PrimitivesConverters_DoConvert_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m25B619AFC89D9688CFC7B2569ED069D7C20C2994 (int32_t* ___0_source, const RuntimeMethod* method) 
{
	bool V_0 = false;
	uint8_t V_1 = 0x0;
	Il2CppChar V_2 = 0x0;
	double V_3 = 0.0;
	int16_t V_4 = 0;
	int32_t V_5 = 0;
	int64_t V_6 = 0;
	int8_t V_7 = 0x0;
	float V_8 = 0.0f;
	String_t* V_9 = NULL;
	uint16_t V_10 = 0;
	uint32_t V_11 = 0;
	uint64_t V_12 = 0;
	{
	}
	{
		int32_t* L_0 = ___0_source;
		int32_t L_1 = *(L_0);
		V_0 = (bool)((!(((uint32_t)L_1) <= ((uint32_t)0)))? 1 : 0);
		bool* L_2;
		L_2 = UnsafeUtility_As_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mFAC64123CDCBD55D7F3EBE960A434127DBAC2DB0_inline((&V_0), NULL);
		bool L_3 = (*(bool*)L_2);
		return L_3;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PrimitivesConverters_DoConvert_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mAC18983A5F1A6A7A790401C2B2FD83531E72EBF6 (int64_t* ___0_source, const RuntimeMethod* method) 
{
	bool V_0 = false;
	uint8_t V_1 = 0x0;
	Il2CppChar V_2 = 0x0;
	double V_3 = 0.0;
	int16_t V_4 = 0;
	int32_t V_5 = 0;
	int64_t V_6 = 0;
	int8_t V_7 = 0x0;
	float V_8 = 0.0f;
	String_t* V_9 = NULL;
	uint16_t V_10 = 0;
	uint32_t V_11 = 0;
	uint64_t V_12 = 0;
	{
	}
	{
		int64_t* L_0 = ___0_source;
		int64_t L_1 = *(L_0);
		int64_t L_2 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(0,NULL));
		V_0 = (bool)((!(((uint64_t)L_1) <= ((uint64_t)L_2)))? 1 : 0);
		bool* L_3;
		L_3 = UnsafeUtility_As_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mFAC64123CDCBD55D7F3EBE960A434127DBAC2DB0_inline((&V_0), NULL);
		bool L_4 = (*(bool*)L_3);
		return L_4;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PrimitivesConverters_DoConvert_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m09B0F2B814F11B8AE2E0C98B2DFC66B096AED85F (int8_t* ___0_source, const RuntimeMethod* method) 
{
	bool V_0 = false;
	uint8_t V_1 = 0x0;
	Il2CppChar V_2 = 0x0;
	double V_3 = 0.0;
	int16_t V_4 = 0;
	int32_t V_5 = 0;
	int64_t V_6 = 0;
	int8_t V_7 = 0x0;
	float V_8 = 0.0f;
	String_t* V_9 = NULL;
	uint16_t V_10 = 0;
	uint32_t V_11 = 0;
	uint64_t V_12 = 0;
	{
	}
	{
		int8_t* L_0 = ___0_source;
		int32_t L_1 = ((int32_t)*(L_0));
		V_0 = (bool)((!(((uint32_t)L_1) <= ((uint32_t)0)))? 1 : 0);
		bool* L_2;
		L_2 = UnsafeUtility_As_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mFAC64123CDCBD55D7F3EBE960A434127DBAC2DB0_inline((&V_0), NULL);
		bool L_3 = (*(bool*)L_2);
		return L_3;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PrimitivesConverters_DoConvert_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m036744F72FE967803E4F56F626BD5921C272FE91 (float* ___0_source, const RuntimeMethod* method) 
{
	bool V_0 = false;
	uint8_t V_1 = 0x0;
	Il2CppChar V_2 = 0x0;
	double V_3 = 0.0;
	int16_t V_4 = 0;
	int32_t V_5 = 0;
	int64_t V_6 = 0;
	int8_t V_7 = 0x0;
	float V_8 = 0.0f;
	String_t* V_9 = NULL;
	uint16_t V_10 = 0;
	uint32_t V_11 = 0;
	uint64_t V_12 = 0;
	{
	}
	{
		float* L_0 = ___0_source;
		float L_1 = *(L_0);
		V_0 = (bool)((((int32_t)((((float)L_1) == ((float)(0.0f)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool* L_2;
		L_2 = UnsafeUtility_As_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mFAC64123CDCBD55D7F3EBE960A434127DBAC2DB0_inline((&V_0), NULL);
		bool L_3 = (*(bool*)L_2);
		return L_3;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PrimitivesConverters_DoConvert_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m12F65C97A5D3B2BEDA547C8B1D5B8507A2FB1A2E (String_t** ___0_source, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PrimitivesConverters_TryConvertPrimitiveOrString_TisDouble_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m29A9863FEB29DD171534C86E92808796F4F4451A_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	CHECKED_LOCAL(Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_StaticInit);
	bool V_0 = false;
	double V_1 = 0.0;
	bool V_2 = false;
	bool V_3 = false;
	uint8_t V_4 = 0x0;
	double V_5 = 0.0;
	uint8_t V_6 = 0x0;
	Il2CppChar V_7 = 0x0;
	double V_8 = 0.0;
	int16_t V_9 = 0;
	double V_10 = 0.0;
	int16_t V_11 = 0;
	int32_t V_12 = 0;
	double V_13 = 0.0;
	int32_t V_14 = 0;
	int64_t V_15 = 0;
	double V_16 = 0.0;
	int64_t V_17 = 0;
	int8_t V_18 = 0x0;
	double V_19 = 0.0;
	int8_t V_20 = 0x0;
	float V_21 = 0.0f;
	double V_22 = 0.0;
	float V_23 = 0.0f;
	uint16_t V_24 = 0;
	double V_25 = 0.0;
	uint16_t V_26 = 0;
	uint32_t V_27 = 0;
	double V_28 = 0.0;
	uint32_t V_29 = 0;
	uint64_t V_30 = 0;
	double V_31 = 0.0;
	uint64_t V_32 = 0;
	{
	}
	{
		String_t** L_0 = ___0_source;
		String_t* L_1 = *(L_0);
		CHECKED_LOCAL_INIT(Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_StaticInit,(Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		bool L_2;
		L_2 = Boolean_TryParse_m417053B6E8D3724D0EED9E87C90D143622158352(L_1, (&V_0), NULL);
		if (!L_2)
		{
			goto IL_0033;
		}
	}
	{
		bool* L_3;
		L_3 = UnsafeUtility_As_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mFAC64123CDCBD55D7F3EBE960A434127DBAC2DB0_inline((&V_0), NULL);
		bool L_4 = (*(bool*)L_3);
		return L_4;
	}

IL_0033:
	{
		String_t** L_5 = ___0_source;
		String_t* L_6 = *(L_5);
		bool L_7;
		L_7 = Double_TryParse_m60AD55BC181D70F661BC2A2294E66B5466C3C018(L_6, (&V_1), NULL);
		if (!L_7)
		{
			goto IL_0049;
		}
	}
	{
		bool L_8;
		L_8 = PrimitivesConverters_TryConvertPrimitiveOrString_TisDouble_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m29A9863FEB29DD171534C86E92808796F4F4451A((&V_1), (&V_2), PrimitivesConverters_TryConvertPrimitiveOrString_TisDouble_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m29A9863FEB29DD171534C86E92808796F4F4451A_RuntimeMethod_var);
		if (L_8)
		{
			goto IL_0053;
		}
	}

IL_0049:
	{
		il2cpp_codegen_initobj((&V_3), sizeof(bool));
		bool L_9 = V_3;
		return L_9;
	}

IL_0053:
	{
		bool* L_10;
		L_10 = UnsafeUtility_As_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mFAC64123CDCBD55D7F3EBE960A434127DBAC2DB0_inline((&V_2), NULL);
		bool L_11 = (*(bool*)L_10);
		return L_11;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PrimitivesConverters_DoConvert_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m37E4ADE675B732C53AA44A131ECDDDB9117C2FEF (uint16_t* ___0_source, const RuntimeMethod* method) 
{
	bool V_0 = false;
	uint8_t V_1 = 0x0;
	Il2CppChar V_2 = 0x0;
	double V_3 = 0.0;
	int16_t V_4 = 0;
	int32_t V_5 = 0;
	int64_t V_6 = 0;
	int8_t V_7 = 0x0;
	float V_8 = 0.0f;
	String_t* V_9 = NULL;
	uint16_t V_10 = 0;
	uint32_t V_11 = 0;
	uint64_t V_12 = 0;
	{
	}
	{
		uint16_t* L_0 = ___0_source;
		int32_t L_1 = ((int32_t)*(L_0));
		V_0 = (bool)((!(((uint32_t)L_1) <= ((uint32_t)0)))? 1 : 0);
		bool* L_2;
		L_2 = UnsafeUtility_As_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mFAC64123CDCBD55D7F3EBE960A434127DBAC2DB0_inline((&V_0), NULL);
		bool L_3 = (*(bool*)L_2);
		return L_3;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PrimitivesConverters_DoConvert_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m1C45A7B312AAB20E4018482DD63528AE0FA8AD7F (uint32_t* ___0_source, const RuntimeMethod* method) 
{
	bool V_0 = false;
	uint8_t V_1 = 0x0;
	Il2CppChar V_2 = 0x0;
	double V_3 = 0.0;
	int16_t V_4 = 0;
	int32_t V_5 = 0;
	int64_t V_6 = 0;
	int8_t V_7 = 0x0;
	float V_8 = 0.0f;
	String_t* V_9 = NULL;
	uint16_t V_10 = 0;
	uint32_t V_11 = 0;
	uint64_t V_12 = 0;
	{
	}
	{
		uint32_t* L_0 = ___0_source;
		int32_t L_1 = ((int32_t)*(L_0));
		V_0 = (bool)((!(((uint32_t)L_1) <= ((uint32_t)0)))? 1 : 0);
		bool* L_2;
		L_2 = UnsafeUtility_As_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mFAC64123CDCBD55D7F3EBE960A434127DBAC2DB0_inline((&V_0), NULL);
		bool L_3 = (*(bool*)L_2);
		return L_3;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PrimitivesConverters_DoConvert_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mA24D1584B8259D1400DB72B059F6E272F648CD46 (uint64_t* ___0_source, const RuntimeMethod* method) 
{
	bool V_0 = false;
	uint8_t V_1 = 0x0;
	Il2CppChar V_2 = 0x0;
	double V_3 = 0.0;
	int16_t V_4 = 0;
	int32_t V_5 = 0;
	int64_t V_6 = 0;
	int8_t V_7 = 0x0;
	float V_8 = 0.0f;
	String_t* V_9 = NULL;
	uint16_t V_10 = 0;
	uint32_t V_11 = 0;
	{
	}
	{
		uint64_t* L_0 = ___0_source;
		int64_t L_1 = *(((int64_t*)L_0));
		int64_t L_2 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(0,NULL));
		V_0 = (bool)((!(((uint64_t)L_1) <= ((uint64_t)L_2)))? 1 : 0);
		bool* L_3;
		L_3 = UnsafeUtility_As_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mFAC64123CDCBD55D7F3EBE960A434127DBAC2DB0_inline((&V_0), NULL);
		bool L_4 = (*(bool*)L_3);
		return L_4;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint8_t PrimitivesConverters_DoConvert_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m1D9F1B7A5D81F7D975583BEDDD47FB3FF700DB66 (bool* ___0_source, const RuntimeMethod* method) 
{
	uint8_t V_0 = 0x0;
	Il2CppChar V_1 = 0x0;
	double V_2 = 0.0;
	int16_t V_3 = 0;
	int32_t V_4 = 0;
	int64_t V_5 = 0;
	int8_t V_6 = 0x0;
	float V_7 = 0.0f;
	String_t* V_8 = NULL;
	uint16_t V_9 = 0;
	uint32_t V_10 = 0;
	uint64_t V_11 = 0;
	{
		goto IL_0027;
	}

IL_0027:
	{
	}
	{
		bool* L_0 = ___0_source;
		int32_t L_1 = ((int32_t)*(((uint8_t*)L_0)));
		uint8_t L_2 = (il2cpp_codegen_conv<uint8_t,int32_t,int32_t,false,false>(((!(((uint32_t)L_1) <= ((uint32_t)0)))? 1 : 0),NULL));
		V_0 = L_2;
		uint8_t* L_3;
		L_3 = UnsafeUtility_As_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m3DC6C8431AF46D3B4AD529D400BD9FD0DC961014_inline((&V_0), NULL);
		uint8_t L_4 = (*(uint8_t*)L_3);
		return L_4;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint8_t PrimitivesConverters_DoConvert_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_mF5EB901165BBA1DD14FB0BA192EDCEEAB74270AA (uint8_t* ___0_source, const RuntimeMethod* method) 
{
	bool V_0 = false;
	Il2CppChar V_1 = 0x0;
	double V_2 = 0.0;
	int16_t V_3 = 0;
	int32_t V_4 = 0;
	int64_t V_5 = 0;
	int8_t V_6 = 0x0;
	float V_7 = 0.0f;
	String_t* V_8 = NULL;
	uint16_t V_9 = 0;
	uint32_t V_10 = 0;
	uint64_t V_11 = 0;
	{
		goto IL_002e;
	}

IL_002e:
	{
	}
	{
		uint8_t* L_0 = ___0_source;
		uint8_t* L_1;
		L_1 = UnsafeUtility_As_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m3DC6C8431AF46D3B4AD529D400BD9FD0DC961014_inline(L_0, NULL);
		uint8_t L_2 = (*(uint8_t*)L_1);
		return L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint8_t PrimitivesConverters_DoConvert_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m32C9CA058130C3CD23CF459833CA0B683CB2CA25 (Il2CppChar* ___0_source, const RuntimeMethod* method) 
{
	bool V_0 = false;
	uint8_t V_1 = 0x0;
	double V_2 = 0.0;
	int16_t V_3 = 0;
	int32_t V_4 = 0;
	int64_t V_5 = 0;
	int8_t V_6 = 0x0;
	float V_7 = 0.0f;
	String_t* V_8 = NULL;
	uint16_t V_9 = 0;
	uint32_t V_10 = 0;
	uint64_t V_11 = 0;
	{
		goto IL_002e;
	}

IL_002e:
	{
	}
	{
		Il2CppChar* L_0 = ___0_source;
		int32_t L_1 = ((int32_t)*(((uint16_t*)L_0)));
		uint8_t L_2 = (il2cpp_codegen_conv<uint8_t,int32_t,int32_t,false,false>(L_1,NULL));
		V_1 = L_2;
		uint8_t* L_3;
		L_3 = UnsafeUtility_As_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m3DC6C8431AF46D3B4AD529D400BD9FD0DC961014_inline((&V_1), NULL);
		uint8_t L_4 = (*(uint8_t*)L_3);
		return L_4;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint8_t PrimitivesConverters_DoConvert_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_mE3256829F19143C84DDFB7DE5E99CADED21B525F (double* ___0_source, const RuntimeMethod* method) 
{
	bool V_0 = false;
	uint8_t V_1 = 0x0;
	Il2CppChar V_2 = 0x0;
	int16_t V_3 = 0;
	int32_t V_4 = 0;
	int64_t V_5 = 0;
	int8_t V_6 = 0x0;
	float V_7 = 0.0f;
	String_t* V_8 = NULL;
	uint16_t V_9 = 0;
	uint32_t V_10 = 0;
	uint64_t V_11 = 0;
	{
		goto IL_0039;
	}

IL_0039:
	{
	}
	{
		double* L_0 = ___0_source;
		double L_1 = *(L_0);
		uint8_t L_2 = (il2cpp_codegen_conv<uint8_t,double,double,false,false>(L_1,NULL));
		V_1 = L_2;
		uint8_t* L_3;
		L_3 = UnsafeUtility_As_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m3DC6C8431AF46D3B4AD529D400BD9FD0DC961014_inline((&V_1), NULL);
		uint8_t L_4 = (*(uint8_t*)L_3);
		return L_4;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint8_t PrimitivesConverters_DoConvert_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_mEBDD863AA99BCA43774A0D46CFD65779C2371387 (int16_t* ___0_source, const RuntimeMethod* method) 
{
	bool V_0 = false;
	uint8_t V_1 = 0x0;
	Il2CppChar V_2 = 0x0;
	double V_3 = 0.0;
	int32_t V_4 = 0;
	int64_t V_5 = 0;
	int8_t V_6 = 0x0;
	float V_7 = 0.0f;
	String_t* V_8 = NULL;
	uint16_t V_9 = 0;
	uint32_t V_10 = 0;
	uint64_t V_11 = 0;
	{
		goto IL_002e;
	}

IL_002e:
	{
	}
	{
		int16_t* L_0 = ___0_source;
		int32_t L_1 = ((int32_t)*(L_0));
		uint8_t L_2 = (il2cpp_codegen_conv<uint8_t,int32_t,int32_t,false,false>(L_1,NULL));
		V_1 = L_2;
		uint8_t* L_3;
		L_3 = UnsafeUtility_As_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m3DC6C8431AF46D3B4AD529D400BD9FD0DC961014_inline((&V_1), NULL);
		uint8_t L_4 = (*(uint8_t*)L_3);
		return L_4;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint8_t PrimitivesConverters_DoConvert_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m99856D60B28AB7F7BB78FB2CC353B0449B439D26 (int32_t* ___0_source, const RuntimeMethod* method) 
{
	bool V_0 = false;
	uint8_t V_1 = 0x0;
	Il2CppChar V_2 = 0x0;
	double V_3 = 0.0;
	int16_t V_4 = 0;
	int32_t V_5 = 0;
	int64_t V_6 = 0;
	int8_t V_7 = 0x0;
	float V_8 = 0.0f;
	String_t* V_9 = NULL;
	uint16_t V_10 = 0;
	uint32_t V_11 = 0;
	uint64_t V_12 = 0;
	{
		goto IL_002e;
	}

IL_002e:
	{
	}
	{
		int32_t* L_0 = ___0_source;
		int32_t L_1 = *(L_0);
		uint8_t L_2 = (il2cpp_codegen_conv<uint8_t,int32_t,int32_t,false,false>(L_1,NULL));
		V_1 = L_2;
		uint8_t* L_3;
		L_3 = UnsafeUtility_As_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m3DC6C8431AF46D3B4AD529D400BD9FD0DC961014_inline((&V_1), NULL);
		uint8_t L_4 = (*(uint8_t*)L_3);
		return L_4;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint8_t PrimitivesConverters_DoConvert_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_mB68AB17BB4FA9B0767863E482CD15EFB7471C208 (int64_t* ___0_source, const RuntimeMethod* method) 
{
	bool V_0 = false;
	uint8_t V_1 = 0x0;
	Il2CppChar V_2 = 0x0;
	double V_3 = 0.0;
	int16_t V_4 = 0;
	int32_t V_5 = 0;
	int64_t V_6 = 0;
	int8_t V_7 = 0x0;
	float V_8 = 0.0f;
	String_t* V_9 = NULL;
	uint16_t V_10 = 0;
	uint32_t V_11 = 0;
	uint64_t V_12 = 0;
	{
		goto IL_002f;
	}

IL_002f:
	{
	}
	{
		int64_t* L_0 = ___0_source;
		int64_t L_1 = *(L_0);
		uint8_t L_2 = (il2cpp_codegen_conv<uint8_t,int64_t,int64_t,false,false>(L_1,NULL));
		V_1 = L_2;
		uint8_t* L_3;
		L_3 = UnsafeUtility_As_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m3DC6C8431AF46D3B4AD529D400BD9FD0DC961014_inline((&V_1), NULL);
		uint8_t L_4 = (*(uint8_t*)L_3);
		return L_4;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint8_t PrimitivesConverters_DoConvert_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m28268368C65727EB799EFC8BA63007367C1CA714 (int8_t* ___0_source, const RuntimeMethod* method) 
{
	bool V_0 = false;
	uint8_t V_1 = 0x0;
	Il2CppChar V_2 = 0x0;
	double V_3 = 0.0;
	int16_t V_4 = 0;
	int32_t V_5 = 0;
	int64_t V_6 = 0;
	int8_t V_7 = 0x0;
	float V_8 = 0.0f;
	String_t* V_9 = NULL;
	uint16_t V_10 = 0;
	uint32_t V_11 = 0;
	uint64_t V_12 = 0;
	{
		goto IL_002e;
	}

IL_002e:
	{
	}
	{
		int8_t* L_0 = ___0_source;
		int32_t L_1 = ((int32_t)*(L_0));
		uint8_t L_2 = (il2cpp_codegen_conv<uint8_t,int32_t,int32_t,false,false>(L_1,NULL));
		V_1 = L_2;
		uint8_t* L_3;
		L_3 = UnsafeUtility_As_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m3DC6C8431AF46D3B4AD529D400BD9FD0DC961014_inline((&V_1), NULL);
		uint8_t L_4 = (*(uint8_t*)L_3);
		return L_4;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint8_t PrimitivesConverters_DoConvert_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_mF577073B6AEC787E4E861B6BB90E3007081CE686 (float* ___0_source, const RuntimeMethod* method) 
{
	bool V_0 = false;
	uint8_t V_1 = 0x0;
	Il2CppChar V_2 = 0x0;
	double V_3 = 0.0;
	int16_t V_4 = 0;
	int32_t V_5 = 0;
	int64_t V_6 = 0;
	int8_t V_7 = 0x0;
	float V_8 = 0.0f;
	String_t* V_9 = NULL;
	uint16_t V_10 = 0;
	uint32_t V_11 = 0;
	uint64_t V_12 = 0;
	{
		goto IL_0035;
	}

IL_0035:
	{
	}
	{
		float* L_0 = ___0_source;
		float L_1 = *(L_0);
		uint8_t L_2 = (il2cpp_codegen_conv<uint8_t,float,float,false,false>(L_1,NULL));
		V_1 = L_2;
		uint8_t* L_3;
		L_3 = UnsafeUtility_As_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m3DC6C8431AF46D3B4AD529D400BD9FD0DC961014_inline((&V_1), NULL);
		uint8_t L_4 = (*(uint8_t*)L_3);
		return L_4;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint8_t PrimitivesConverters_DoConvert_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m9B13901D54CB804F0D654765920805B858783F96 (String_t** ___0_source, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PrimitivesConverters_TryConvertPrimitiveOrString_TisDouble_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m8FF415C41F9748700137EB247B2399BE6D3629AC_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	double V_1 = 0.0;
	bool V_2 = false;
	uint8_t V_3 = 0x0;
	uint8_t V_4 = 0x0;
	double V_5 = 0.0;
	uint8_t V_6 = 0x0;
	Il2CppChar V_7 = 0x0;
	double V_8 = 0.0;
	int16_t V_9 = 0;
	double V_10 = 0.0;
	int16_t V_11 = 0;
	int32_t V_12 = 0;
	double V_13 = 0.0;
	int32_t V_14 = 0;
	int64_t V_15 = 0;
	double V_16 = 0.0;
	int64_t V_17 = 0;
	int8_t V_18 = 0x0;
	double V_19 = 0.0;
	int8_t V_20 = 0x0;
	float V_21 = 0.0f;
	double V_22 = 0.0;
	float V_23 = 0.0f;
	uint16_t V_24 = 0;
	double V_25 = 0.0;
	uint16_t V_26 = 0;
	uint32_t V_27 = 0;
	double V_28 = 0.0;
	uint32_t V_29 = 0;
	uint64_t V_30 = 0;
	double V_31 = 0.0;
	uint64_t V_32 = 0;
	{
		goto IL_0060;
	}

IL_0060:
	{
	}
	{
		String_t** L_0 = ___0_source;
		String_t* L_1 = *(L_0);
		bool L_2;
		L_2 = Byte_TryParse_mB1716E3B6714F20DF6C1FEDDC4A76AA78D5EA87B(L_1, (&V_4), NULL);
		if (!L_2)
		{
			goto IL_0093;
		}
	}
	{
		uint8_t* L_3;
		L_3 = UnsafeUtility_As_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m3DC6C8431AF46D3B4AD529D400BD9FD0DC961014_inline((&V_4), NULL);
		uint8_t L_4 = (*(uint8_t*)L_3);
		return L_4;
	}

IL_0093:
	{
		String_t** L_5 = ___0_source;
		String_t* L_6 = *(L_5);
		bool L_7;
		L_7 = Double_TryParse_m60AD55BC181D70F661BC2A2294E66B5466C3C018(L_6, (&V_5), NULL);
		if (!L_7)
		{
			goto IL_00a9;
		}
	}
	{
		bool L_8;
		L_8 = PrimitivesConverters_TryConvertPrimitiveOrString_TisDouble_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m8FF415C41F9748700137EB247B2399BE6D3629AC((&V_5), (&V_6), PrimitivesConverters_TryConvertPrimitiveOrString_TisDouble_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m8FF415C41F9748700137EB247B2399BE6D3629AC_RuntimeMethod_var);
		if (L_8)
		{
			goto IL_00b3;
		}
	}

IL_00a9:
	{
		il2cpp_codegen_initobj((&V_3), sizeof(uint8_t));
		uint8_t L_9 = V_3;
		return L_9;
	}

IL_00b3:
	{
		uint8_t* L_10;
		L_10 = UnsafeUtility_As_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m3DC6C8431AF46D3B4AD529D400BD9FD0DC961014_inline((&V_6), NULL);
		uint8_t L_11 = (*(uint8_t*)L_10);
		return L_11;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint8_t PrimitivesConverters_DoConvert_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_mEF91E40B8997E8935DD25485CAA881E55AEC97A1 (uint16_t* ___0_source, const RuntimeMethod* method) 
{
	bool V_0 = false;
	uint8_t V_1 = 0x0;
	Il2CppChar V_2 = 0x0;
	double V_3 = 0.0;
	int16_t V_4 = 0;
	int32_t V_5 = 0;
	int64_t V_6 = 0;
	int8_t V_7 = 0x0;
	float V_8 = 0.0f;
	String_t* V_9 = NULL;
	uint16_t V_10 = 0;
	uint32_t V_11 = 0;
	uint64_t V_12 = 0;
	{
		goto IL_002e;
	}

IL_002e:
	{
	}
	{
		uint16_t* L_0 = ___0_source;
		int32_t L_1 = ((int32_t)*(L_0));
		uint8_t L_2 = (il2cpp_codegen_conv<uint8_t,int32_t,int32_t,false,false>(L_1,NULL));
		V_1 = L_2;
		uint8_t* L_3;
		L_3 = UnsafeUtility_As_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m3DC6C8431AF46D3B4AD529D400BD9FD0DC961014_inline((&V_1), NULL);
		uint8_t L_4 = (*(uint8_t*)L_3);
		return L_4;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint8_t PrimitivesConverters_DoConvert_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_mC7AB336EA1F27C4E4B76DF6C6CA656D88C1FAFDC (uint32_t* ___0_source, const RuntimeMethod* method) 
{
	bool V_0 = false;
	uint8_t V_1 = 0x0;
	Il2CppChar V_2 = 0x0;
	double V_3 = 0.0;
	int16_t V_4 = 0;
	int32_t V_5 = 0;
	int64_t V_6 = 0;
	int8_t V_7 = 0x0;
	float V_8 = 0.0f;
	String_t* V_9 = NULL;
	uint16_t V_10 = 0;
	uint32_t V_11 = 0;
	uint64_t V_12 = 0;
	{
		goto IL_002e;
	}

IL_002e:
	{
	}
	{
		uint32_t* L_0 = ___0_source;
		int32_t L_1 = ((int32_t)*(L_0));
		uint8_t L_2 = (il2cpp_codegen_conv<uint8_t,int32_t,int32_t,false,false>(L_1,NULL));
		V_1 = L_2;
		uint8_t* L_3;
		L_3 = UnsafeUtility_As_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m3DC6C8431AF46D3B4AD529D400BD9FD0DC961014_inline((&V_1), NULL);
		uint8_t L_4 = (*(uint8_t*)L_3);
		return L_4;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint8_t PrimitivesConverters_DoConvert_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_mB41620C809A0702F408476A836BD8B081C5F5F76 (uint64_t* ___0_source, const RuntimeMethod* method) 
{
	bool V_0 = false;
	uint8_t V_1 = 0x0;
	Il2CppChar V_2 = 0x0;
	double V_3 = 0.0;
	int16_t V_4 = 0;
	int32_t V_5 = 0;
	int64_t V_6 = 0;
	int8_t V_7 = 0x0;
	float V_8 = 0.0f;
	String_t* V_9 = NULL;
	uint16_t V_10 = 0;
	uint32_t V_11 = 0;
	{
		goto IL_002f;
	}

IL_002f:
	{
	}
	{
		uint64_t* L_0 = ___0_source;
		int64_t L_1 = *(((int64_t*)L_0));
		uint8_t L_2 = (il2cpp_codegen_conv<uint8_t,int64_t,int64_t,false,false>(L_1,NULL));
		V_1 = L_2;
		uint8_t* L_3;
		L_3 = UnsafeUtility_As_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m3DC6C8431AF46D3B4AD529D400BD9FD0DC961014_inline((&V_1), NULL);
		uint8_t L_4 = (*(uint8_t*)L_3);
		return L_4;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int16_t PrimitivesConverters_DoConvert_TisInt16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175_m6E60594E5DEC517F2531110144CDFDEDF3B46D44 (bool* ___0_source, const RuntimeMethod* method) 
{
	uint8_t V_0 = 0x0;
	Il2CppChar V_1 = 0x0;
	double V_2 = 0.0;
	int16_t V_3 = 0;
	int32_t V_4 = 0;
	int64_t V_5 = 0;
	int8_t V_6 = 0x0;
	float V_7 = 0.0f;
	String_t* V_8 = NULL;
	uint16_t V_9 = 0;
	uint32_t V_10 = 0;
	uint64_t V_11 = 0;
	{
		goto IL_0027;
	}

IL_0027:
	{
		goto IL_0056;
	}

IL_0056:
	{
		goto IL_0085;
	}

IL_0085:
	{
		goto IL_00c6;
	}

IL_00c6:
	{
	}
	{
		bool* L_0 = ___0_source;
		int32_t L_1 = ((int32_t)*(((uint8_t*)L_0)));
		int16_t L_2 = (il2cpp_codegen_conv<int16_t,int32_t,int32_t,false,false>(((!(((uint32_t)L_1) <= ((uint32_t)0)))? 1 : 0),NULL));
		V_3 = L_2;
		int16_t* L_3;
		L_3 = UnsafeUtility_As_TisInt16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175_TisInt16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175_m79136FE812DC030B796002F8D0127FADB3845447_inline((&V_3), NULL);
		int16_t L_4 = (*(int16_t*)L_3);
		return L_4;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int16_t PrimitivesConverters_DoConvert_TisInt16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175_m36404D92937D0B2561E062BBE4E25C940050A1A1 (uint8_t* ___0_source, const RuntimeMethod* method) 
{
	bool V_0 = false;
	Il2CppChar V_1 = 0x0;
	double V_2 = 0.0;
	int16_t V_3 = 0;
	int32_t V_4 = 0;
	int64_t V_5 = 0;
	int8_t V_6 = 0x0;
	float V_7 = 0.0f;
	String_t* V_8 = NULL;
	uint16_t V_9 = 0;
	uint32_t V_10 = 0;
	uint64_t V_11 = 0;
	{
		goto IL_002e;
	}

IL_002e:
	{
		goto IL_0055;
	}

IL_0055:
	{
		goto IL_0080;
	}

IL_0080:
	{
		goto IL_00ac;
	}

IL_00ac:
	{
	}
	{
		uint8_t* L_0 = ___0_source;
		int32_t L_1 = ((int32_t)*(L_0));
		V_3 = (int16_t)L_1;
		int16_t* L_2;
		L_2 = UnsafeUtility_As_TisInt16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175_TisInt16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175_m79136FE812DC030B796002F8D0127FADB3845447_inline((&V_3), NULL);
		int16_t L_3 = (*(int16_t*)L_2);
		return L_3;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int16_t PrimitivesConverters_DoConvert_TisInt16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175_mC89F76CF2D698A8804F5D0C32B85D4416489CBC6 (Il2CppChar* ___0_source, const RuntimeMethod* method) 
{
	bool V_0 = false;
	uint8_t V_1 = 0x0;
	double V_2 = 0.0;
	int16_t V_3 = 0;
	int32_t V_4 = 0;
	int64_t V_5 = 0;
	int8_t V_6 = 0x0;
	float V_7 = 0.0f;
	String_t* V_8 = NULL;
	uint16_t V_9 = 0;
	uint32_t V_10 = 0;
	uint64_t V_11 = 0;
	{
		goto IL_002e;
	}

IL_002e:
	{
		goto IL_005a;
	}

IL_005a:
	{
		goto IL_0081;
	}

IL_0081:
	{
		goto IL_00ad;
	}

IL_00ad:
	{
	}
	{
		Il2CppChar* L_0 = ___0_source;
		int32_t L_1 = ((int32_t)*(((uint16_t*)L_0)));
		int16_t L_2 = (il2cpp_codegen_conv<int16_t,int32_t,int32_t,false,false>(L_1,NULL));
		V_3 = L_2;
		int16_t* L_3;
		L_3 = UnsafeUtility_As_TisInt16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175_TisInt16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175_m79136FE812DC030B796002F8D0127FADB3845447_inline((&V_3), NULL);
		int16_t L_4 = (*(int16_t*)L_3);
		return L_4;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int16_t PrimitivesConverters_DoConvert_TisInt16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175_m61F002EF5AA8EEF49CA1792FB9A9B872483BB11A (double* ___0_source, const RuntimeMethod* method) 
{
	bool V_0 = false;
	uint8_t V_1 = 0x0;
	Il2CppChar V_2 = 0x0;
	int16_t V_3 = 0;
	int32_t V_4 = 0;
	int64_t V_5 = 0;
	int8_t V_6 = 0x0;
	float V_7 = 0.0f;
	String_t* V_8 = NULL;
	uint16_t V_9 = 0;
	uint32_t V_10 = 0;
	uint64_t V_11 = 0;
	{
		goto IL_0039;
	}

IL_0039:
	{
		goto IL_0065;
	}

IL_0065:
	{
		goto IL_0091;
	}

IL_0091:
	{
		goto IL_00b8;
	}

IL_00b8:
	{
	}
	{
		double* L_0 = ___0_source;
		double L_1 = *(L_0);
		int16_t L_2 = (il2cpp_codegen_conv<int16_t,double,double,false,false>(L_1,NULL));
		V_3 = L_2;
		int16_t* L_3;
		L_3 = UnsafeUtility_As_TisInt16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175_TisInt16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175_m79136FE812DC030B796002F8D0127FADB3845447_inline((&V_3), NULL);
		int16_t L_4 = (*(int16_t*)L_3);
		return L_4;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int16_t PrimitivesConverters_DoConvert_TisInt16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175_m357408DC24E9B4D52D25E4FC9C357B90C9561CEA (int16_t* ___0_source, const RuntimeMethod* method) 
{
	bool V_0 = false;
	uint8_t V_1 = 0x0;
	Il2CppChar V_2 = 0x0;
	double V_3 = 0.0;
	int32_t V_4 = 0;
	int64_t V_5 = 0;
	int8_t V_6 = 0x0;
	float V_7 = 0.0f;
	String_t* V_8 = NULL;
	uint16_t V_9 = 0;
	uint32_t V_10 = 0;
	uint64_t V_11 = 0;
	{
		goto IL_002e;
	}

IL_002e:
	{
		goto IL_005a;
	}

IL_005a:
	{
		goto IL_0086;
	}

IL_0086:
	{
		goto IL_00b2;
	}

IL_00b2:
	{
	}
	{
		int16_t* L_0 = ___0_source;
		int16_t* L_1;
		L_1 = UnsafeUtility_As_TisInt16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175_TisInt16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175_m79136FE812DC030B796002F8D0127FADB3845447_inline(L_0, NULL);
		int16_t L_2 = (*(int16_t*)L_1);
		return L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int16_t PrimitivesConverters_DoConvert_TisInt16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175_m2D87E1001C55934B1C40EED8283546AABC8CE415 (int32_t* ___0_source, const RuntimeMethod* method) 
{
	bool V_0 = false;
	uint8_t V_1 = 0x0;
	Il2CppChar V_2 = 0x0;
	double V_3 = 0.0;
	int16_t V_4 = 0;
	int32_t V_5 = 0;
	int64_t V_6 = 0;
	int8_t V_7 = 0x0;
	float V_8 = 0.0f;
	String_t* V_9 = NULL;
	uint16_t V_10 = 0;
	uint32_t V_11 = 0;
	uint64_t V_12 = 0;
	{
		goto IL_002e;
	}

IL_002e:
	{
		goto IL_005a;
	}

IL_005a:
	{
		goto IL_0086;
	}

IL_0086:
	{
		goto IL_00b2;
	}

IL_00b2:
	{
	}
	{
		int32_t* L_0 = ___0_source;
		int32_t L_1 = *(L_0);
		int16_t L_2 = (il2cpp_codegen_conv<int16_t,int32_t,int32_t,false,false>(L_1,NULL));
		V_4 = L_2;
		int16_t* L_3;
		L_3 = UnsafeUtility_As_TisInt16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175_TisInt16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175_m79136FE812DC030B796002F8D0127FADB3845447_inline((&V_4), NULL);
		int16_t L_4 = (*(int16_t*)L_3);
		return L_4;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int16_t PrimitivesConverters_DoConvert_TisInt16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175_m735A2CBCC13B3AA11C78900371EF6E39BDF35391 (int64_t* ___0_source, const RuntimeMethod* method) 
{
	bool V_0 = false;
	uint8_t V_1 = 0x0;
	Il2CppChar V_2 = 0x0;
	double V_3 = 0.0;
	int16_t V_4 = 0;
	int32_t V_5 = 0;
	int64_t V_6 = 0;
	int8_t V_7 = 0x0;
	float V_8 = 0.0f;
	String_t* V_9 = NULL;
	uint16_t V_10 = 0;
	uint32_t V_11 = 0;
	uint64_t V_12 = 0;
	{
		goto IL_002f;
	}

IL_002f:
	{
		goto IL_005b;
	}

IL_005b:
	{
		goto IL_0087;
	}

IL_0087:
	{
		goto IL_00b3;
	}

IL_00b3:
	{
	}
	{
		int64_t* L_0 = ___0_source;
		int64_t L_1 = *(L_0);
		int16_t L_2 = (il2cpp_codegen_conv<int16_t,int64_t,int64_t,false,false>(L_1,NULL));
		V_4 = L_2;
		int16_t* L_3;
		L_3 = UnsafeUtility_As_TisInt16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175_TisInt16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175_m79136FE812DC030B796002F8D0127FADB3845447_inline((&V_4), NULL);
		int16_t L_4 = (*(int16_t*)L_3);
		return L_4;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int16_t PrimitivesConverters_DoConvert_TisInt16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175_m7AF0B381F56CC5465F2216F7940A389B17F1BE44 (int8_t* ___0_source, const RuntimeMethod* method) 
{
	bool V_0 = false;
	uint8_t V_1 = 0x0;
	Il2CppChar V_2 = 0x0;
	double V_3 = 0.0;
	int16_t V_4 = 0;
	int32_t V_5 = 0;
	int64_t V_6 = 0;
	int8_t V_7 = 0x0;
	float V_8 = 0.0f;
	String_t* V_9 = NULL;
	uint16_t V_10 = 0;
	uint32_t V_11 = 0;
	uint64_t V_12 = 0;
	{
		goto IL_002e;
	}

IL_002e:
	{
		goto IL_005a;
	}

IL_005a:
	{
		goto IL_0086;
	}

IL_0086:
	{
		goto IL_00b2;
	}

IL_00b2:
	{
	}
	{
		int8_t* L_0 = ___0_source;
		int32_t L_1 = ((int32_t)*(L_0));
		V_4 = (int16_t)L_1;
		int16_t* L_2;
		L_2 = UnsafeUtility_As_TisInt16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175_TisInt16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175_m79136FE812DC030B796002F8D0127FADB3845447_inline((&V_4), NULL);
		int16_t L_3 = (*(int16_t*)L_2);
		return L_3;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int16_t PrimitivesConverters_DoConvert_TisInt16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175_mD7B3BE426F3B3B3CDACACFF64F5A589D860AA9A5 (float* ___0_source, const RuntimeMethod* method) 
{
	bool V_0 = false;
	uint8_t V_1 = 0x0;
	Il2CppChar V_2 = 0x0;
	double V_3 = 0.0;
	int16_t V_4 = 0;
	int32_t V_5 = 0;
	int64_t V_6 = 0;
	int8_t V_7 = 0x0;
	float V_8 = 0.0f;
	String_t* V_9 = NULL;
	uint16_t V_10 = 0;
	uint32_t V_11 = 0;
	uint64_t V_12 = 0;
	{
		goto IL_0035;
	}

IL_0035:
	{
		goto IL_0061;
	}

IL_0061:
	{
		goto IL_008d;
	}

IL_008d:
	{
		goto IL_00b9;
	}

IL_00b9:
	{
	}
	{
		float* L_0 = ___0_source;
		float L_1 = *(L_0);
		int16_t L_2 = (il2cpp_codegen_conv<int16_t,float,float,false,false>(L_1,NULL));
		V_4 = L_2;
		int16_t* L_3;
		L_3 = UnsafeUtility_As_TisInt16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175_TisInt16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175_m79136FE812DC030B796002F8D0127FADB3845447_inline((&V_4), NULL);
		int16_t L_4 = (*(int16_t*)L_3);
		return L_4;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int16_t PrimitivesConverters_DoConvert_TisInt16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175_m23024E942AA8C622D5DAE15C237F39DFED1C9EB1 (String_t** ___0_source, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PrimitivesConverters_TryConvertPrimitiveOrString_TisDouble_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_TisInt16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175_mA8FE0BB699034D9B22257B785821E09D95A69F6B_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	double V_1 = 0.0;
	bool V_2 = false;
	int16_t V_3 = 0;
	uint8_t V_4 = 0x0;
	double V_5 = 0.0;
	uint8_t V_6 = 0x0;
	Il2CppChar V_7 = 0x0;
	double V_8 = 0.0;
	int16_t V_9 = 0;
	double V_10 = 0.0;
	int16_t V_11 = 0;
	int32_t V_12 = 0;
	double V_13 = 0.0;
	int32_t V_14 = 0;
	int64_t V_15 = 0;
	double V_16 = 0.0;
	int64_t V_17 = 0;
	int8_t V_18 = 0x0;
	double V_19 = 0.0;
	int8_t V_20 = 0x0;
	float V_21 = 0.0f;
	double V_22 = 0.0;
	float V_23 = 0.0f;
	uint16_t V_24 = 0;
	double V_25 = 0.0;
	uint16_t V_26 = 0;
	uint32_t V_27 = 0;
	double V_28 = 0.0;
	uint32_t V_29 = 0;
	uint64_t V_30 = 0;
	double V_31 = 0.0;
	uint64_t V_32 = 0;
	{
		goto IL_0060;
	}

IL_0060:
	{
		goto IL_00c0;
	}

IL_00c0:
	{
		goto IL_00fe;
	}

IL_00fe:
	{
		goto IL_013b;
	}

IL_013b:
	{
	}
	{
		String_t** L_0 = ___0_source;
		String_t* L_1 = *(L_0);
		bool L_2;
		L_2 = Int16_TryParse_m7190AF18437CE1B43990B99E5D992E31485E77AE(L_1, (&V_9), NULL);
		if (!L_2)
		{
			goto IL_016e;
		}
	}
	{
		int16_t* L_3;
		L_3 = UnsafeUtility_As_TisInt16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175_TisInt16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175_m79136FE812DC030B796002F8D0127FADB3845447_inline((&V_9), NULL);
		int16_t L_4 = (*(int16_t*)L_3);
		return L_4;
	}

IL_016e:
	{
		String_t** L_5 = ___0_source;
		String_t* L_6 = *(L_5);
		bool L_7;
		L_7 = Double_TryParse_m60AD55BC181D70F661BC2A2294E66B5466C3C018(L_6, (&V_10), NULL);
		if (!L_7)
		{
			goto IL_0184;
		}
	}
	{
		bool L_8;
		L_8 = PrimitivesConverters_TryConvertPrimitiveOrString_TisDouble_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_TisInt16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175_mA8FE0BB699034D9B22257B785821E09D95A69F6B((&V_10), (&V_11), PrimitivesConverters_TryConvertPrimitiveOrString_TisDouble_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_TisInt16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175_mA8FE0BB699034D9B22257B785821E09D95A69F6B_RuntimeMethod_var);
		if (L_8)
		{
			goto IL_018e;
		}
	}

IL_0184:
	{
		il2cpp_codegen_initobj((&V_3), sizeof(int16_t));
		int16_t L_9 = V_3;
		return L_9;
	}

IL_018e:
	{
		int16_t* L_10;
		L_10 = UnsafeUtility_As_TisInt16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175_TisInt16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175_m79136FE812DC030B796002F8D0127FADB3845447_inline((&V_11), NULL);
		int16_t L_11 = (*(int16_t*)L_10);
		return L_11;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int16_t PrimitivesConverters_DoConvert_TisInt16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175_m910896B40C39D028FE5CFADA8DBA89C5D4FC8373 (uint16_t* ___0_source, const RuntimeMethod* method) 
{
	bool V_0 = false;
	uint8_t V_1 = 0x0;
	Il2CppChar V_2 = 0x0;
	double V_3 = 0.0;
	int16_t V_4 = 0;
	int32_t V_5 = 0;
	int64_t V_6 = 0;
	int8_t V_7 = 0x0;
	float V_8 = 0.0f;
	String_t* V_9 = NULL;
	uint16_t V_10 = 0;
	uint32_t V_11 = 0;
	uint64_t V_12 = 0;
	{
		goto IL_002e;
	}

IL_002e:
	{
		goto IL_005a;
	}

IL_005a:
	{
		goto IL_0085;
	}

IL_0085:
	{
		goto IL_00b1;
	}

IL_00b1:
	{
	}
	{
		uint16_t* L_0 = ___0_source;
		int32_t L_1 = ((int32_t)*(L_0));
		int16_t L_2 = (il2cpp_codegen_conv<int16_t,int32_t,int32_t,false,false>(L_1,NULL));
		V_4 = L_2;
		int16_t* L_3;
		L_3 = UnsafeUtility_As_TisInt16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175_TisInt16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175_m79136FE812DC030B796002F8D0127FADB3845447_inline((&V_4), NULL);
		int16_t L_4 = (*(int16_t*)L_3);
		return L_4;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int16_t PrimitivesConverters_DoConvert_TisInt16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175_m775651F8B4510B623623FCADCDB411E592AEAB58 (uint32_t* ___0_source, const RuntimeMethod* method) 
{
	bool V_0 = false;
	uint8_t V_1 = 0x0;
	Il2CppChar V_2 = 0x0;
	double V_3 = 0.0;
	int16_t V_4 = 0;
	int32_t V_5 = 0;
	int64_t V_6 = 0;
	int8_t V_7 = 0x0;
	float V_8 = 0.0f;
	String_t* V_9 = NULL;
	uint16_t V_10 = 0;
	uint32_t V_11 = 0;
	uint64_t V_12 = 0;
	{
		goto IL_002e;
	}

IL_002e:
	{
		goto IL_005a;
	}

IL_005a:
	{
		goto IL_0086;
	}

IL_0086:
	{
		goto IL_00b3;
	}

IL_00b3:
	{
	}
	{
		uint32_t* L_0 = ___0_source;
		int32_t L_1 = ((int32_t)*(L_0));
		int16_t L_2 = (il2cpp_codegen_conv<int16_t,int32_t,int32_t,false,false>(L_1,NULL));
		V_4 = L_2;
		int16_t* L_3;
		L_3 = UnsafeUtility_As_TisInt16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175_TisInt16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175_m79136FE812DC030B796002F8D0127FADB3845447_inline((&V_4), NULL);
		int16_t L_4 = (*(int16_t*)L_3);
		return L_4;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int16_t PrimitivesConverters_DoConvert_TisInt16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175_m7CA02E105A0F30056979FA76D0583D986CD17568 (uint64_t* ___0_source, const RuntimeMethod* method) 
{
	bool V_0 = false;
	uint8_t V_1 = 0x0;
	Il2CppChar V_2 = 0x0;
	double V_3 = 0.0;
	int16_t V_4 = 0;
	int32_t V_5 = 0;
	int64_t V_6 = 0;
	int8_t V_7 = 0x0;
	float V_8 = 0.0f;
	String_t* V_9 = NULL;
	uint16_t V_10 = 0;
	uint32_t V_11 = 0;
	{
		goto IL_002f;
	}

IL_002f:
	{
		goto IL_005b;
	}

IL_005b:
	{
		goto IL_0087;
	}

IL_0087:
	{
		goto IL_00b4;
	}

IL_00b4:
	{
	}
	{
		uint64_t* L_0 = ___0_source;
		int64_t L_1 = *(((int64_t*)L_0));
		int16_t L_2 = (il2cpp_codegen_conv<int16_t,int64_t,int64_t,false,false>(L_1,NULL));
		V_4 = L_2;
		int16_t* L_3;
		L_3 = UnsafeUtility_As_TisInt16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175_TisInt16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175_m79136FE812DC030B796002F8D0127FADB3845447_inline((&V_4), NULL);
		int16_t L_4 = (*(int16_t*)L_3);
		return L_4;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t PrimitivesConverters_DoConvert_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m07ACB6100E86EE24267B2CA3FA47E7E3D723771A (bool* ___0_source, const RuntimeMethod* method) 
{
	uint8_t V_0 = 0x0;
	Il2CppChar V_1 = 0x0;
	double V_2 = 0.0;
	int16_t V_3 = 0;
	int32_t V_4 = 0;
	int64_t V_5 = 0;
	int8_t V_6 = 0x0;
	float V_7 = 0.0f;
	String_t* V_8 = NULL;
	uint16_t V_9 = 0;
	uint32_t V_10 = 0;
	uint64_t V_11 = 0;
	{
		goto IL_0027;
	}

IL_0027:
	{
		goto IL_0056;
	}

IL_0056:
	{
		goto IL_0085;
	}

IL_0085:
	{
		goto IL_00c6;
	}

IL_00c6:
	{
		goto IL_00f5;
	}

IL_00f5:
	{
	}
	{
		bool* L_0 = ___0_source;
		int32_t L_1 = ((int32_t)*(((uint8_t*)L_0)));
		V_4 = ((!(((uint32_t)L_1) <= ((uint32_t)0)))? 1 : 0);
		int32_t* L_2;
		L_2 = UnsafeUtility_As_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mA01EDB0408204DDC6EA94EEB45B7CBFFAD767783_inline((&V_4), NULL);
		int32_t L_3 = (*(int32_t*)L_2);
		return L_3;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ArgValueList_Append_m8976AA1BA506B735A4B72719E16760B1D03EF650_inline (ArgValueList_tF9404610631615CB400FD008E21A0CE700A1814C* __this, EventArgValue_t12B444AF86832453534803922BF5FCE39CFD0E85* ___0_argValue, const RuntimeMethod* method) 
{
	{
		EventArgValue_t12B444AF86832453534803922BF5FCE39CFD0E85* L_0 = ___0_argValue;
		EventArgValue_t12B444AF86832453534803922BF5FCE39CFD0E85* L_1 = __this->___m_FirstArg;
		NullCheck(L_0);
		L_0->___nextArg = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&L_0->___nextArg), (void*)L_1);
		EventArgValue_t12B444AF86832453534803922BF5FCE39CFD0E85* L_2 = ___0_argValue;
		__this->___m_FirstArg = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_FirstArg), (void*)L_2);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool IntPtr_op_Inequality_m90EFC9C4CAD9A33E309F2DDF98EE4E1DD253637B_inline (intptr_t ___0_value1, intptr_t ___1_value2, const RuntimeMethod* method) 
{
	{
		intptr_t L_0 = ___0_value1;
		intptr_t L_1 = ___1_value2;
		return (bool)((((int32_t)((((intptr_t)L_0) == ((intptr_t)L_1))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool GCHandle_get_IsAllocated_m241908103D8D867E11CCAB73C918729825E86843_inline (GCHandle_tC44F6F72EE68BD4CFABA24309DA7A179D41127DC* __this, const RuntimeMethod* method) 
{
	{
		intptr_t L_0 = __this->___handle;
		bool L_1;
		L_1 = IntPtr_op_Inequality_m90EFC9C4CAD9A33E309F2DDF98EE4E1DD253637B_inline(L_0, 0, NULL);
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* GCHandle_get_Target_m481F9508DA5E384D33CD1F4450060DC56BBD4CD5_inline (GCHandle_tC44F6F72EE68BD4CFABA24309DA7A179D41127DC* __this, const RuntimeMethod* method) 
{
	{
		bool L_0;
		L_0 = GCHandle_get_IsAllocated_m241908103D8D867E11CCAB73C918729825E86843_inline(__this, NULL);
		if (L_0)
		{
			goto IL_0013;
		}
	}
	{
		InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_1 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var)));
		InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral4EBC86E0EACFCA522AEB82874860D0E248D782A5)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&GCHandle_get_Target_m481F9508DA5E384D33CD1F4450060DC56BBD4CD5_RuntimeMethod_var)));
	}

IL_0013:
	{
		intptr_t L_2 = __this->___handle;
		bool L_3;
		L_3 = GCHandle_CanDereferenceHandle_mAAAC42D1268CEF3FDD040A3D1574773D08140579_inline(L_2, NULL);
		if (!L_3)
		{
			goto IL_002c;
		}
	}
	{
		intptr_t L_4 = __this->___handle;
		RuntimeObject* L_5;
		L_5 = GCHandle_GetRef_mAC7E58E62417209DC41C99F66BA70F0C3AA18DA8_inline(L_4, NULL);
		return L_5;
	}

IL_002c:
	{
		intptr_t L_6 = __this->___handle;
		RuntimeObject* L_7;
		L_7 = GCHandle_GetTarget_mE0AF851834410E2AEA6285B2497751570236C794(L_6, NULL);
		return L_7;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool IntPtr_op_Equality_m7D9CDCDE9DC2A0C2C614633F4921E90187FAB271_inline (intptr_t ___0_value1, intptr_t ___1_value2, const RuntimeMethod* method) 
{
	{
		intptr_t L_0 = ___0_value1;
		intptr_t L_1 = ___1_value2;
		return (bool)((((intptr_t)L_0) == ((intptr_t)L_1))? 1 : 0);
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR GCHandle_tC44F6F72EE68BD4CFABA24309DA7A179D41127DC MarshalledUnityObject_FromIntPtrUnsafe_m1C5AE0FB7CD1978A8387B0081DB909BAAC2324C3_inline (intptr_t ___0_gcHandle, const RuntimeMethod* method) 
{
	{
		GCHandle_tC44F6F72EE68BD4CFABA24309DA7A179D41127DC* L_0;
		L_0 = UnsafeUtility_As_TisIntPtr_t_TisGCHandle_tC44F6F72EE68BD4CFABA24309DA7A179D41127DC_mD94F597CB91662C823496DA9FA9A7CF908734A78_inline((&___0_gcHandle), NULL);
		GCHandle_tC44F6F72EE68BD4CFABA24309DA7A179D41127DC L_1 = (*(GCHandle_tC44F6F72EE68BD4CFABA24309DA7A179D41127DC*)L_0);
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR intptr_t MarshalledUnityObject_MarshalNotNull_TisIl2CppSharedGenericObject_mCE897EC9A79983B4B1E6E2C8342452256309044A_gshared_inline (Il2CppSharedGenericObject* ___0_obj, const RuntimeMethod* method) 
{
	{
		Il2CppSharedGenericObject* L_0 = ___0_obj;
		NullCheck(L_0);
		intptr_t L_1 = ((Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)L_0)->___m_CachedPtr;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t DynamicArray_1_get_size_m128222BE63C9931B08CD38DF32B858CD1CD4926D_fshared_inline (DynamicArray_1_tFD6392EE4EAA442D167A921C9964FD9C17FDCDE0* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->___U3CsizeU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool* UnsafeUtility_As_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mFAC64123CDCBD55D7F3EBE960A434127DBAC2DB0_inline (bool* ___0_from, const RuntimeMethod* method) 
{
	{
		bool* L_0 = ___0_from;
		bool* L_1;
		L_1 = UnsafeUtilityInternal_As_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mE3D9B5B2C16912294630A6DAD8928B960B7544E6_inline(L_0, NULL);
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR uint8_t* UnsafeUtility_As_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m3DC6C8431AF46D3B4AD529D400BD9FD0DC961014_inline (uint8_t* ___0_from, const RuntimeMethod* method) 
{
	{
		uint8_t* L_0 = ___0_from;
		uint8_t* L_1;
		L_1 = UnsafeUtilityInternal_As_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m5A66C1A526E263EC6778FF3879A6E62C618542C4_inline(L_0, NULL);
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int16_t* UnsafeUtility_As_TisInt16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175_TisInt16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175_m79136FE812DC030B796002F8D0127FADB3845447_inline (int16_t* ___0_from, const RuntimeMethod* method) 
{
	{
		int16_t* L_0 = ___0_from;
		int16_t* L_1;
		L_1 = UnsafeUtilityInternal_As_TisInt16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175_TisInt16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175_mD165D6F44825CD0E42C9C1F6248DB1E67976F9C2_inline(L_0, NULL);
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t* UnsafeUtility_As_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mA01EDB0408204DDC6EA94EEB45B7CBFFAD767783_inline (int32_t* ___0_from, const RuntimeMethod* method) 
{
	{
		int32_t* L_0 = ___0_from;
		int32_t* L_1;
		L_1 = UnsafeUtilityInternal_As_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mE69F70BA8B1ACDD13A1618C8AD81256FE391509A_inline(L_0, NULL);
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool GCHandle_CanDereferenceHandle_mAAAC42D1268CEF3FDD040A3D1574773D08140579_inline (intptr_t ___0_handle, const RuntimeMethod* method) 
{
	{
		intptr_t L_0 = ___0_handle;
		intptr_t L_1 = (il2cpp_codegen_conv<intptr_t,int32_t,int32_t,false,false>(1,NULL));
		intptr_t L_2 = (il2cpp_codegen_conv<intptr_t,int32_t,int32_t,false,false>(0,NULL));
		return (bool)((((intptr_t)((intptr_t)(L_0&L_1))) == ((intptr_t)L_2))? 1 : 0);
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* GCHandle_GetRef_mAC7E58E62417209DC41C99F66BA70F0C3AA18DA8_inline (intptr_t ___0_handle, const RuntimeMethod* method) 
{
	{
		intptr_t L_0 = ___0_handle;
		void* L_1;
		L_1 = IntPtr_op_Explicit_m2728CBA081E79B97DDCF1D4FAD77B309CA1E94BF(L_0, NULL);
		RuntimeObject** L_2;
		L_2 = il2cpp_unsafe_as_ref<RuntimeObject*>((intptr_t*)L_1);
		RuntimeObject* L_3 = *(L_2);
		return L_3;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR GCHandle_tC44F6F72EE68BD4CFABA24309DA7A179D41127DC* UnsafeUtility_As_TisIntPtr_t_TisGCHandle_tC44F6F72EE68BD4CFABA24309DA7A179D41127DC_mD94F597CB91662C823496DA9FA9A7CF908734A78_inline (intptr_t* ___0_from, const RuntimeMethod* method) 
{
	{
		intptr_t* L_0 = ___0_from;
		GCHandle_tC44F6F72EE68BD4CFABA24309DA7A179D41127DC* L_1;
		L_1 = UnsafeUtilityInternal_As_TisIntPtr_t_TisGCHandle_tC44F6F72EE68BD4CFABA24309DA7A179D41127DC_mD43127D5F7AA6EB4B52E5C30BA53F29843E9E9A2_inline(L_0, NULL);
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Il2CppFullySharedGenericAny* UnsafeUtilityInternal_As_TisIl2CppFullySharedGenericAny_TisIl2CppFullySharedGenericAny_mE1CA751887466B801BE69083C2B0EA3EDE41FF9B_fshared_inline (Il2CppFullySharedGenericAny* ___0_from, const RuntimeMethod* method) 
{
	{
		Il2CppFullySharedGenericAny* L_0 = ___0_from;
		return (Il2CppFullySharedGenericAny*)(L_0);
	}
}
