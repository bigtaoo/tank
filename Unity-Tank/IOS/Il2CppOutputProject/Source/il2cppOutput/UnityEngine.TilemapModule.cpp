﻿#include "pch-cpp.hpp"





template <typename T1, typename T2>
struct VirtualActionInvoker2
{
	typedef void (*Action)(void*, T1, T2, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
	}
};
template <typename T1, typename T2, typename T3>
struct VirtualActionInvoker3
{
	typedef void (*Action)(void*, T1, T2, T3, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2, T3 p3)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, p1, p2, p3, invokeData.method);
	}
};
template <typename R, typename T1, typename T2, typename T3>
struct VirtualFuncInvoker3
{
	typedef R (*Func)(void*, T1, T2, T3, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2, T3 p3)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, p3, invokeData.method);
	}
};

struct Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87;
struct Action_1_tE96F2DDA71AE56E61CEEC5974B6503D38835E57D;
struct Action_2_t0302727DEEDCFCC692E80AEEC31B8066AE8C5550;
struct Action_2_t156C43F079E7E68155FCDCD12DC77DD11AEF7E3C;
struct Action_2_tC05151F65CF4D95A1C7A5EE21DFEE184110056B2;
struct Action_2_t2E142A840461CBB0D9C4B088F1310607E995A8A1;
struct CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB;
struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771;
struct IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832;
struct ObjectU5BU5D_tD4BF1BEC72A31DF6611C0B8FA3112AF128FC3F8A;
struct SpriteU5BU5D_tCEE379E10CAD9DBFA770B331480592548ED0EA1B;
struct StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF;
struct TileBaseU5BU5D_t4BA5139AFA510FA0FDD6B5F2954ABB77EBA12FB7;
struct TileChangeDataU5BU5D_t5DE74D19BDE89021FB95C861E05CBDE852AED8BD;
struct Vector3IntU5BU5D_t7A7C64EB93B0E0C1989C82C3D0A003294FC6EC5E;
struct SyncTileU5BU5D_t9B4B242D002401F11525388BC75BDAB6A45714FF;
struct AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C;
struct Delegate_t;
struct DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E;
struct Exception_t;
struct GameObject_t76FEDD663AB33C991A9C9A23129337651094216F;
struct Grid_t4C0ACF986206D18240E35155E01B5A97DAA651FE;
struct GridLayout_tAD661B1E1E57C16BE21C8C13432EA04FE1F0418B;
struct IAsyncResult_t7B9B5A0ECB35DCEC31B8A8122C37D687369253B5;
struct IDictionary_t6D03155AF1FA9083817AA5B6AD7DEEACC26AB220;
struct ITilemap_tCD8B9C2D6A80DB1DFE9C934D91EACE6B8A018164;
struct InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB;
struct MethodInfo_t;
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C;
struct SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6;
struct ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A;
struct Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99;
struct SpriteAtlas_t7B9620FBFBE1CCB781F2ED24A3B2DD37734F66A8;
struct String_t;
struct Tile_t33119F106CFC3DC767E7D9306A958AAE12133490;
struct TileBase_t07019BD771D35E8EA68118157D6EEE4C770CF0F9;
struct Tilemap_t18C4166D0AC702D5BFC0C411FA73C4B61D9D1751;
struct TilemapRenderer_t1A45FD335E86172CFBB77D657E1D6705A477A6CB;
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915;

IL2CPP_EXTERN_C RuntimeClass* Action_1_tE96F2DDA71AE56E61CEEC5974B6503D38835E57D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Action_2_t2E142A840461CBB0D9C4B088F1310607E995A8A1_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Action_2_tC05151F65CF4D95A1C7A5EE21DFEE184110056B2_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Exception_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ITilemap_tCD8B9C2D6A80DB1DFE9C934D91EACE6B8A018164_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* TileBaseU5BU5D_t4BA5139AFA510FA0FDD6B5F2954ABB77EBA12FB7_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* TileBase_t07019BD771D35E8EA68118157D6EEE4C770CF0F9_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* TileData_tFB814629D010ABD175127C0BE96FD96EA606E00F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Tilemap_t18C4166D0AC702D5BFC0C411FA73C4B61D9D1751_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeField* SyncTile_t0F06ED3A2623F91411C6F4773D87AB58EAD4EC2C____m_Tile_FieldInfo_var;
IL2CPP_EXTERN_C RuntimeField* TileAnimationData_tB7419BC111545576349DD19CAB0DEFD240CAF149____m_AnimatedSprites_FieldInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral4EBC86E0EACFCA522AEB82874860D0E248D782A5;
IL2CPP_EXTERN_C const RuntimeMethod* GCHandle_get_Target_m481F9508DA5E384D33CD1F4450060DC56BBD4CD5_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* MarshalledUnityObject_MarshalNotNull_TisTilemapRenderer_t1A45FD335E86172CFBB77D657E1D6705A477A6CB_m90A6BD70FCFCC009E37CFC2B6DFD690A08042489_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* MarshalledUnityObject_MarshalNotNull_TisTilemap_t18C4166D0AC702D5BFC0C411FA73C4B61D9D1751_m82D224678369601467142F86AEE1B6684056544D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* MarshalledUnityObject_Marshal_TisObject_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_m965B12ED56AA1618C042D16D10B1BA3BFD98FF4D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* MarshalledUnityObject_Marshal_TisSpriteAtlas_t7B9620FBFBE1CCB781F2ED24A3B2DD37734F66A8_m599B052593B0725CFCE967619492F19EFDA31A68_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m5C4C6FA53CA05FE88CA7926E8B1C0DF717B63550_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisTileData_tFB814629D010ABD175127C0BE96FD96EA606E00F_mD61DE9D9D0F7E928CED8EA63A59BD8BE1276D07C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisVector3Int_t65CB06F557251D18A37BD71F3655BA836A357376_m68CCE7D85BD452D727A41279CA4D553EE8B627FF_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* NativeArray_1_Copy_m4515C6A6B64476716833B9C22AAE07185976AF24_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* NativeArray_1_Dispose_mAB8B3AE6332BF29F21711643D4FFE57E30E1E055_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* NativeArray_1__ctor_m29DAD3F6139353D219E363E2C63BC183CBC778E2_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* NativeArray_1_get_IsCreated_mE992FB4B97CD24CAF70D23773821AE2687DC4A30_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Span_1_GetPinnableReference_mBE1FB81DA3F0ACBFCC01E850CAEB91A5FF5FCDEE_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Span_1__ctor_m2FF12B712FEDB8173F74807DC6FF2C18126FF8CF_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Span_1_get_Length_mF4C43881CB4622B68DB84785142C44ADE93E85D7_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TilemapRenderer_OnSpriteAtlasRegistered_m4348D78754045C8B10CEA76195A313790F412ED1_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Unmarshal_UnmarshalUnityObject_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_mD415D118B2B7811AFB468A2908F39E62F9EF1A8D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Unmarshal_UnmarshalUnityObject_TisGrid_t4C0ACF986206D18240E35155E01B5A97DAA651FE_mB3EAF529CC1C671A1129F570DEB6DA256E2E4B4E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Unmarshal_UnmarshalUnityObject_TisObject_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_m27ACA708E2D42A879C8C665663669217265002CF_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Unmarshal_UnmarshalUnityObject_TisSprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99_m8BC0361DEF1936E61A85920BE6C78419B7F7AC44_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* UnsafeUtility_As_TisIntPtr_t_TisGCHandle_tC44F6F72EE68BD4CFABA24309DA7A179D41127DC_mD94F597CB91662C823496DA9FA9A7CF908734A78_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeType* SyncTile_t0F06ED3A2623F91411C6F4773D87AB58EAD4EC2C_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* TileAnimationData_tB7419BC111545576349DD19CAB0DEFD240CAF149_0_0_0_var;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C;;
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshaled_com;
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshaled_com;;
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshaled_pinvoke;
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshaled_pinvoke;;

struct ObjectU5BU5D_tD4BF1BEC72A31DF6611C0B8FA3112AF128FC3F8A;
struct SpriteU5BU5D_tCEE379E10CAD9DBFA770B331480592548ED0EA1B;
struct TileBaseU5BU5D_t4BA5139AFA510FA0FDD6B5F2954ABB77EBA12FB7;
struct TileChangeDataU5BU5D_t5DE74D19BDE89021FB95C861E05CBDE852AED8BD;
struct Vector3IntU5BU5D_t7A7C64EB93B0E0C1989C82C3D0A003294FC6EC5E;
struct SyncTileU5BU5D_t9B4B242D002401F11525388BC75BDAB6A45714FF;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
struct U3CModuleU3E_t5E8190EE43F4DF5D80E8A6651A0469A8FD445F94 
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
struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22 
{
	bool ___m_value;
};
struct Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3 
{
	uint8_t ___m_value;
};
struct Color_tD001788D726C3A7F1379BEED0260B9591F440C1F 
{
	float ___r;
	float ___g;
	float ___b;
	float ___a;
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
struct Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C 
{
	int32_t ___m_value;
};
struct IntPtr_t 
{
	void* ___m_value;
};
struct ManagedSpanWrapper_tE7FC4BBB631B130757F8DEB15853D98FD3D5DC0E 
{
	void* ___begin;
	int32_t ___length;
};
struct Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 
{
	float ___m00;
	float ___m10;
	float ___m20;
	float ___m30;
	float ___m01;
	float ___m11;
	float ___m21;
	float ___m31;
	float ___m02;
	float ___m12;
	float ___m22;
	float ___m32;
	float ___m03;
	float ___m13;
	float ___m23;
	float ___m33;
};
struct Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C 
{
	float ___m_value;
};
struct Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 
{
	float ___x;
	float ___y;
	float ___z;
};
struct Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376 
{
	int32_t ___m_X;
	int32_t ___m_Y;
	int32_t ___m_Z;
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
struct SyncTileCallbackSettings_tBBB8B7336BDE6E578C7A7B1D322A9B1273A76CDA 
{
	bool ___hasSyncTileCallback;
	bool ___hasPositionsChangedCallback;
	bool ___isBufferSyncTile;
};
struct SyncTileCallbackSettings_tBBB8B7336BDE6E578C7A7B1D322A9B1273A76CDA_marshaled_pinvoke
{
	int32_t ___hasSyncTileCallback;
	int32_t ___hasPositionsChangedCallback;
	int32_t ___isBufferSyncTile;
};
struct SyncTileCallbackSettings_tBBB8B7336BDE6E578C7A7B1D322A9B1273A76CDA_marshaled_com
{
	int32_t ___hasSyncTileCallback;
	int32_t ___hasPositionsChangedCallback;
	int32_t ___isBufferSyncTile;
};
struct ByReference_1_t05909623F1CBB30E5AF69C769FF0964BE661E134 
{
	intptr_t ____value;
};
struct Allocator_t996642592271AAD9EE688F142741D512C07B5824 
{
	int32_t ___value__;
};
struct Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_Center;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_Extents;
};
struct BoundsInt_t4E757DE5EFF9FCB42000F173360DDC63B5585485 
{
	Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376 ___m_Position;
	Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376 ___m_Size;
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
struct NativeArrayOptions_t3E979EEF4B4840228A7692A97DA07553C6465F1D 
{
	int32_t ___value__;
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
struct TileAnimationFlags_tA70AD7E12D667AA759A54CBC19A42FCAF5BB2B79 
{
	int32_t ___value__;
};
struct TileFlags_tDCEE980FCB6A2159202B4C8096C11452E318D2A9 
{
	int32_t ___value__;
};
struct RawData_t37CAF2D3F74B7723974ED7CEEE9B297D8FA64ED0  : public RuntimeObject
{
	intptr_t ___Bounds;
	intptr_t ___Count;
	uint8_t ___Data;
};
struct RawData_t37CAF2D3F74B7723974ED7CEEE9B297D8FA64ED0_marshaled_pinvoke
{
	intptr_t ___Bounds;
	intptr_t ___Count;
	uint8_t ___Data;
};
struct RawData_t37CAF2D3F74B7723974ED7CEEE9B297D8FA64ED0_marshaled_com
{
	intptr_t ___Bounds;
	intptr_t ___Count;
	uint8_t ___Data;
};
struct ColliderType_t4C26FB284A330CAD69E47FFD734C9C778E077692 
{
	int32_t ___value__;
};
struct Orientation_tE25B3520AB60FFA9186E6B4AD2B69AC9E91DB346 
{
	int32_t ___value__;
};
struct NativeArray_1_tA833EB7E3E1C9AF82C37976AD964B8D4BAC38B2C 
{
	void* ___m_Buffer;
	int32_t ___m_Length;
	int32_t ___m_AllocatorLabel;
};
struct NativeArray_1_t1520D9CD4959D9455C36ED19E490DBDC32B6EF5C 
{
	void* ___m_Buffer;
	int32_t ___m_Length;
	int32_t ___m_AllocatorLabel;
};
struct NativeArray_1_t245D7224A42D1A32B87C64E49B7B434585EC91EF 
{
	void* ___m_Buffer;
	int32_t ___m_Length;
	int32_t ___m_AllocatorLabel;
};
struct Span_1_tC29EC1099E0CDA9241D8A63482E444F1E1FE1FDA 
{
	ByReference_1_t05909623F1CBB30E5AF69C769FF0964BE661E134 ____pointer;
	int32_t ____length;
};
struct Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};
struct GameObject_t76FEDD663AB33C991A9C9A23129337651094216F  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
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
struct ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};
struct ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A_marshaled_pinvoke : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshaled_pinvoke
{
};
struct ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A_marshaled_com : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshaled_com
{
};
struct Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};
struct SpriteAtlas_t7B9620FBFBE1CCB781F2ED24A3B2DD37734F66A8  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};
struct SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295  : public Exception_t
{
};
struct TileAnimationData_tB7419BC111545576349DD19CAB0DEFD240CAF149 
{
	SpriteU5BU5D_tCEE379E10CAD9DBFA770B331480592548ED0EA1B* ___m_AnimatedSprites;
	float ___m_AnimationSpeed;
	float ___m_AnimationStartTime;
	int32_t ___m_Flags;
};
struct TileAnimationData_tB7419BC111545576349DD19CAB0DEFD240CAF149_marshaled_pinvoke
{
	SpriteU5BU5D_tCEE379E10CAD9DBFA770B331480592548ED0EA1B* ___m_AnimatedSprites;
	float ___m_AnimationSpeed;
	float ___m_AnimationStartTime;
	int32_t ___m_Flags;
};
struct TileAnimationData_tB7419BC111545576349DD19CAB0DEFD240CAF149_marshaled_com
{
	SpriteU5BU5D_tCEE379E10CAD9DBFA770B331480592548ED0EA1B* ___m_AnimatedSprites;
	float ___m_AnimationSpeed;
	float ___m_AnimationStartTime;
	int32_t ___m_Flags;
};
struct TileChangeData_t6035410A63723928DB7B86A0880351354ADB635E 
{
	Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376 ___m_Position;
	Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___m_TileAsset;
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_Color;
	Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___m_Transform;
};
struct TileChangeData_t6035410A63723928DB7B86A0880351354ADB635E_marshaled_pinvoke
{
	Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376 ___m_Position;
	Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshaled_pinvoke ___m_TileAsset;
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_Color;
	Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___m_Transform;
};
struct TileChangeData_t6035410A63723928DB7B86A0880351354ADB635E_marshaled_com
{
	Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376 ___m_Position;
	Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshaled_com* ___m_TileAsset;
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_Color;
	Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___m_Transform;
};
struct TileData_tFB814629D010ABD175127C0BE96FD96EA606E00F 
{
	int32_t ___m_Sprite;
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_Color;
	Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___m_Transform;
	int32_t ___m_GameObject;
	int32_t ___m_Flags;
	int32_t ___m_ColliderType;
};
struct TileDataNative_tAD277F2C587DC35577654A4C111ECE2C4114C528 
{
	int32_t ___m_Sprite;
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_Color;
	Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___m_Transform;
	int32_t ___m_GameObject;
	int32_t ___m_Flags;
	int32_t ___m_ColliderType;
};
struct Action_1_tE96F2DDA71AE56E61CEEC5974B6503D38835E57D  : public MulticastDelegate_t
{
};
struct Action_2_t0302727DEEDCFCC692E80AEEC31B8066AE8C5550  : public MulticastDelegate_t
{
};
struct Action_2_t156C43F079E7E68155FCDCD12DC77DD11AEF7E3C  : public MulticastDelegate_t
{
};
struct Action_2_tC05151F65CF4D95A1C7A5EE21DFEE184110056B2  : public MulticastDelegate_t
{
};
struct Action_2_t2E142A840461CBB0D9C4B088F1310607E995A8A1  : public MulticastDelegate_t
{
};
struct Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};
struct ITilemap_tCD8B9C2D6A80DB1DFE9C934D91EACE6B8A018164  : public RuntimeObject
{
	Tilemap_t18C4166D0AC702D5BFC0C411FA73C4B61D9D1751* ___m_Tilemap;
	bool ___m_AddToList;
	int32_t ___m_RefreshCount;
	NativeArray_1_t245D7224A42D1A32B87C64E49B7B434585EC91EF ___m_RefreshPos;
};
struct InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
};
struct Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};
struct TileBase_t07019BD771D35E8EA68118157D6EEE4C770CF0F9  : public ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A
{
};
struct SyncTile_t0F06ED3A2623F91411C6F4773D87AB58EAD4EC2C 
{
	Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376 ___m_Position;
	TileBase_t07019BD771D35E8EA68118157D6EEE4C770CF0F9* ___m_Tile;
	TileData_tFB814629D010ABD175127C0BE96FD96EA606E00F ___m_TileData;
};
struct SyncTile_t0F06ED3A2623F91411C6F4773D87AB58EAD4EC2C_marshaled_pinvoke
{
	Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376 ___m_Position;
	TileBase_t07019BD771D35E8EA68118157D6EEE4C770CF0F9* ___m_Tile;
	TileData_tFB814629D010ABD175127C0BE96FD96EA606E00F ___m_TileData;
};
struct SyncTile_t0F06ED3A2623F91411C6F4773D87AB58EAD4EC2C_marshaled_com
{
	Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376 ___m_Position;
	TileBase_t07019BD771D35E8EA68118157D6EEE4C770CF0F9* ___m_Tile;
	TileData_tFB814629D010ABD175127C0BE96FD96EA606E00F ___m_TileData;
};
struct GridLayout_tAD661B1E1E57C16BE21C8C13432EA04FE1F0418B  : public Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA
{
};
struct Tile_t33119F106CFC3DC767E7D9306A958AAE12133490  : public TileBase_t07019BD771D35E8EA68118157D6EEE4C770CF0F9
{
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_Sprite;
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_Color;
	Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___m_Transform;
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___m_InstancedGameObject;
	int32_t ___m_Flags;
	int32_t ___m_ColliderType;
};
struct TilemapRenderer_t1A45FD335E86172CFBB77D657E1D6705A477A6CB  : public Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF
{
};
struct Grid_t4C0ACF986206D18240E35155E01B5A97DAA651FE  : public GridLayout_tAD661B1E1E57C16BE21C8C13432EA04FE1F0418B
{
};
struct Tilemap_t18C4166D0AC702D5BFC0C411FA73C4B61D9D1751  : public GridLayout_tAD661B1E1E57C16BE21C8C13432EA04FE1F0418B
{
	bool ___m_BufferSyncTile;
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
struct IntPtr_t_StaticFields
{
	intptr_t ___Zero;
};
struct Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6_StaticFields
{
	Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___zeroMatrix;
	Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___identityMatrix;
};
struct Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_StaticFields
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___zeroVector;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___oneVector;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___upVector;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___downVector;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___leftVector;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___rightVector;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___forwardVector;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___backVector;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___positiveInfinityVector;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___negativeInfinityVector;
};
struct Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376_StaticFields
{
	Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376 ___s_Zero;
	Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376 ___s_One;
	Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376 ___s_Up;
	Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376 ___s_Down;
	Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376 ___s_Left;
	Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376 ___s_Right;
	Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376 ___s_Forward;
	Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376 ___s_Back;
};
struct Exception_t_StaticFields
{
	RuntimeObject* ___s_EDILock;
};
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_StaticFields
{
	int32_t ___OffsetOfInstanceIDInCPlusPlusObject;
};
struct TileData_tFB814629D010ABD175127C0BE96FD96EA606E00F_StaticFields
{
	TileData_tFB814629D010ABD175127C0BE96FD96EA606E00F ___Default;
};
struct ITilemap_tCD8B9C2D6A80DB1DFE9C934D91EACE6B8A018164_StaticFields
{
	ITilemap_tCD8B9C2D6A80DB1DFE9C934D91EACE6B8A018164* ___s_Instance;
};
struct Tilemap_t18C4166D0AC702D5BFC0C411FA73C4B61D9D1751_StaticFields
{
	Action_2_t2E142A840461CBB0D9C4B088F1310607E995A8A1* ___tilemapTileChanged;
	Action_2_tC05151F65CF4D95A1C7A5EE21DFEE184110056B2* ___tilemapPositionsChanged;
	Action_2_tC05151F65CF4D95A1C7A5EE21DFEE184110056B2* ___loopEndedForTileAnimation;
};
#ifdef __clang__
#pragma clang diagnostic pop
#endif
struct SyncTileU5BU5D_t9B4B242D002401F11525388BC75BDAB6A45714FF  : public RuntimeArray
{
	ALIGN_FIELD (8) SyncTile_t0F06ED3A2623F91411C6F4773D87AB58EAD4EC2C m_Items[1];

	inline SyncTile_t0F06ED3A2623F91411C6F4773D87AB58EAD4EC2C GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline SyncTile_t0F06ED3A2623F91411C6F4773D87AB58EAD4EC2C* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, SyncTile_t0F06ED3A2623F91411C6F4773D87AB58EAD4EC2C value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___m_Tile), (void*)NULL);
	}
	inline SyncTile_t0F06ED3A2623F91411C6F4773D87AB58EAD4EC2C GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline SyncTile_t0F06ED3A2623F91411C6F4773D87AB58EAD4EC2C* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, SyncTile_t0F06ED3A2623F91411C6F4773D87AB58EAD4EC2C value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___m_Tile), (void*)NULL);
	}
};
struct ObjectU5BU5D_tD4BF1BEC72A31DF6611C0B8FA3112AF128FC3F8A  : public RuntimeArray
{
	ALIGN_FIELD (8) Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* m_Items[1];

	inline Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
struct TileBaseU5BU5D_t4BA5139AFA510FA0FDD6B5F2954ABB77EBA12FB7  : public RuntimeArray
{
	ALIGN_FIELD (8) TileBase_t07019BD771D35E8EA68118157D6EEE4C770CF0F9* m_Items[1];

	inline TileBase_t07019BD771D35E8EA68118157D6EEE4C770CF0F9* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline TileBase_t07019BD771D35E8EA68118157D6EEE4C770CF0F9** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, TileBase_t07019BD771D35E8EA68118157D6EEE4C770CF0F9* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline TileBase_t07019BD771D35E8EA68118157D6EEE4C770CF0F9* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline TileBase_t07019BD771D35E8EA68118157D6EEE4C770CF0F9** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, TileBase_t07019BD771D35E8EA68118157D6EEE4C770CF0F9* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
struct Vector3IntU5BU5D_t7A7C64EB93B0E0C1989C82C3D0A003294FC6EC5E  : public RuntimeArray
{
	ALIGN_FIELD (8) Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376 m_Items[1];

	inline Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376 GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376 value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376 GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376 value)
	{
		m_Items[index] = value;
	}
};
struct TileChangeDataU5BU5D_t5DE74D19BDE89021FB95C861E05CBDE852AED8BD  : public RuntimeArray
{
	ALIGN_FIELD (8) TileChangeData_t6035410A63723928DB7B86A0880351354ADB635E m_Items[1];

	inline TileChangeData_t6035410A63723928DB7B86A0880351354ADB635E GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline TileChangeData_t6035410A63723928DB7B86A0880351354ADB635E* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, TileChangeData_t6035410A63723928DB7B86A0880351354ADB635E value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___m_TileAsset), (void*)NULL);
	}
	inline TileChangeData_t6035410A63723928DB7B86A0880351354ADB635E GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline TileChangeData_t6035410A63723928DB7B86A0880351354ADB635E* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, TileChangeData_t6035410A63723928DB7B86A0880351354ADB635E value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___m_TileAsset), (void*)NULL);
	}
};
struct SpriteU5BU5D_tCEE379E10CAD9DBFA770B331480592548ED0EA1B  : public RuntimeArray
{
	ALIGN_FIELD (8) Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* m_Items[1];

	inline Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};

IL2CPP_EXTERN_C void Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshal_pinvoke(const Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C& unmarshaled, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshaled_pinvoke& marshaled);
IL2CPP_EXTERN_C void Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshal_pinvoke_back(const Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshaled_pinvoke& marshaled, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C& unmarshaled);
IL2CPP_EXTERN_C void Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshal_pinvoke_cleanup(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshaled_pinvoke& marshaled);
IL2CPP_EXTERN_C void Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshal_com(const Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C& unmarshaled, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshaled_com& marshaled);
IL2CPP_EXTERN_C void Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshal_com_back(const Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshaled_com& marshaled, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C& unmarshaled);
IL2CPP_EXTERN_C void Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshal_com_cleanup(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshaled_com& marshaled);

IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeArray_1__ctor_m29DAD3F6139353D219E363E2C63BC183CBC778E2_gshared (NativeArray_1_t245D7224A42D1A32B87C64E49B7B434585EC91EF* __this, int32_t ___0_length, int32_t ___1_allocator, int32_t ___2_options, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeArray_1_Copy_m4515C6A6B64476716833B9C22AAE07185976AF24_gshared (NativeArray_1_t245D7224A42D1A32B87C64E49B7B434585EC91EF ___0_src, NativeArray_1_t245D7224A42D1A32B87C64E49B7B434585EC91EF ___1_dst, int32_t ___2_length, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeArray_1_Dispose_mAB8B3AE6332BF29F21711643D4FFE57E30E1E055_gshared (NativeArray_1_t245D7224A42D1A32B87C64E49B7B434585EC91EF* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool NativeArray_1_get_IsCreated_mE992FB4B97CD24CAF70D23773821AE2687DC4A30_gshared_inline (NativeArray_1_t245D7224A42D1A32B87C64E49B7B434585EC91EF* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_tA833EB7E3E1C9AF82C37976AD964B8D4BAC38B2C NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m5C4C6FA53CA05FE88CA7926E8B1C0DF717B63550_gshared (void* ___0_dataPointer, int32_t ___1_length, int32_t ___2_allocator, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_t245D7224A42D1A32B87C64E49B7B434585EC91EF NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisVector3Int_t65CB06F557251D18A37BD71F3655BA836A357376_m68CCE7D85BD452D727A41279CA4D553EE8B627FF_gshared (void* ___0_dataPointer, int32_t ___1_length, int32_t ___2_allocator, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_t1520D9CD4959D9455C36ED19E490DBDC32B6EF5C NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisTileData_tFB814629D010ABD175127C0BE96FD96EA606E00F_mD61DE9D9D0F7E928CED8EA63A59BD8BE1276D07C_gshared (void* ___0_dataPointer, int32_t ___1_length, int32_t ___2_allocator, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Action_2_Invoke_m7B85C2674B1EB0681F20E9C5AF3D19563459CBC0_gshared_inline (Action_2_t0302727DEEDCFCC692E80AEEC31B8066AE8C5550* __this, RuntimeObject* ___0_arg1, NativeArray_1_t245D7224A42D1A32B87C64E49B7B434585EC91EF ___1_arg2, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Action_2_Invoke_m7BFCE0BBCF67689D263059B56A8D79161B698587_gshared_inline (Action_2_t156C43F079E7E68155FCDCD12DC77DD11AEF7E3C* __this, RuntimeObject* ___0_arg1, RuntimeObject* ___1_arg2, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR intptr_t MarshalledUnityObject_MarshalNotNull_TisRuntimeObject_mEB1AA6B672D00242BB9DCE007056EC0E9C8DB075_gshared_inline (RuntimeObject* ___0_obj, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* Unmarshal_UnmarshalUnityObject_TisRuntimeObject_m2B04FEB8E4BB254DD6F827F3111C91F2AF16D04A_gshared_inline (intptr_t ___0_gcHandlePtr, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Span_1__ctor_m2FF12B712FEDB8173F74807DC6FF2C18126FF8CF_gshared_inline (Span_1_tC29EC1099E0CDA9241D8A63482E444F1E1FE1FDA* __this, Vector3IntU5BU5D_t7A7C64EB93B0E0C1989C82C3D0A003294FC6EC5E* ___0_array, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376* Span_1_GetPinnableReference_mBE1FB81DA3F0ACBFCC01E850CAEB91A5FF5FCDEE_gshared (Span_1_tC29EC1099E0CDA9241D8A63482E444F1E1FE1FDA* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Span_1_get_Length_mF4C43881CB4622B68DB84785142C44ADE93E85D7_gshared_inline (Span_1_tC29EC1099E0CDA9241D8A63482E444F1E1FE1FDA* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR intptr_t MarshalledUnityObject_Marshal_TisRuntimeObject_m286B34400A212037E8EBD53DBFEAD7D23CDE8051_gshared_inline (RuntimeObject* ___0_obj, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action_1__ctor_m2E1DFA67718FC1A0B6E5DFEB78831FFE9C059EB4_gshared (Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR GCHandle_tC44F6F72EE68BD4CFABA24309DA7A179D41127DC* UnsafeUtility_As_TisIntPtr_t_TisGCHandle_tC44F6F72EE68BD4CFABA24309DA7A179D41127DC_mD94F597CB91662C823496DA9FA9A7CF908734A78_gshared_inline (intptr_t* ___0_from, const RuntimeMethod* method) ;

IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2 (RuntimeObject* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Math_Max_m530EBA549AFD98CFC2BD29FE86C6376E67DF11CF (int32_t ___0_val1, int32_t ___1_val2, const RuntimeMethod* method) ;
inline void NativeArray_1__ctor_m29DAD3F6139353D219E363E2C63BC183CBC778E2 (NativeArray_1_t245D7224A42D1A32B87C64E49B7B434585EC91EF* __this, int32_t ___0_length, int32_t ___1_allocator, int32_t ___2_options, const RuntimeMethod* method)
{
	((  void (*) (NativeArray_1_t245D7224A42D1A32B87C64E49B7B434585EC91EF*, int32_t, int32_t, int32_t, const RuntimeMethod*))NativeArray_1__ctor_m29DAD3F6139353D219E363E2C63BC183CBC778E2_gshared)(__this, ___0_length, ___1_allocator, ___2_options, method);
}
inline void NativeArray_1_Copy_m4515C6A6B64476716833B9C22AAE07185976AF24 (NativeArray_1_t245D7224A42D1A32B87C64E49B7B434585EC91EF ___0_src, NativeArray_1_t245D7224A42D1A32B87C64E49B7B434585EC91EF ___1_dst, int32_t ___2_length, const RuntimeMethod* method)
{
	((  void (*) (NativeArray_1_t245D7224A42D1A32B87C64E49B7B434585EC91EF, NativeArray_1_t245D7224A42D1A32B87C64E49B7B434585EC91EF, int32_t, const RuntimeMethod*))NativeArray_1_Copy_m4515C6A6B64476716833B9C22AAE07185976AF24_gshared)(___0_src, ___1_dst, ___2_length, method);
}
inline void NativeArray_1_Dispose_mAB8B3AE6332BF29F21711643D4FFE57E30E1E055 (NativeArray_1_t245D7224A42D1A32B87C64E49B7B434585EC91EF* __this, const RuntimeMethod* method)
{
	((  void (*) (NativeArray_1_t245D7224A42D1A32B87C64E49B7B434585EC91EF*, const RuntimeMethod*))NativeArray_1_Dispose_mAB8B3AE6332BF29F21711643D4FFE57E30E1E055_gshared)(__this, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Tilemap_RefreshTile_mEF4F94212FD9B311431DFFAFE092A4A6EBA580DF (Tilemap_t18C4166D0AC702D5BFC0C411FA73C4B61D9D1751* __this, Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376 ___0_position, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ITilemap__ctor_m3281F6903F18F9B867E6B81E18BCCD0828084258 (ITilemap_tCD8B9C2D6A80DB1DFE9C934D91EACE6B8A018164* __this, const RuntimeMethod* method) ;
inline bool NativeArray_1_get_IsCreated_mE992FB4B97CD24CAF70D23773821AE2687DC4A30_inline (NativeArray_1_t245D7224A42D1A32B87C64E49B7B434585EC91EF* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (NativeArray_1_t245D7224A42D1A32B87C64E49B7B434585EC91EF*, const RuntimeMethod*))NativeArray_1_get_IsCreated_mE992FB4B97CD24CAF70D23773821AE2687DC4A30_gshared_inline)(__this, method);
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void* IntPtr_ToPointer_m1A0612EED3A1C8B8850BE2943CFC42523064B4F6_inline (intptr_t* __this, const RuntimeMethod* method) ;
inline NativeArray_1_tA833EB7E3E1C9AF82C37976AD964B8D4BAC38B2C NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m5C4C6FA53CA05FE88CA7926E8B1C0DF717B63550 (void* ___0_dataPointer, int32_t ___1_length, int32_t ___2_allocator, const RuntimeMethod* method)
{
	return ((  NativeArray_1_tA833EB7E3E1C9AF82C37976AD964B8D4BAC38B2C (*) (void*, int32_t, int32_t, const RuntimeMethod*))NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m5C4C6FA53CA05FE88CA7926E8B1C0DF717B63550_gshared)(___0_dataPointer, ___1_length, ___2_allocator, method);
}
inline NativeArray_1_t245D7224A42D1A32B87C64E49B7B434585EC91EF NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisVector3Int_t65CB06F557251D18A37BD71F3655BA836A357376_m68CCE7D85BD452D727A41279CA4D553EE8B627FF (void* ___0_dataPointer, int32_t ___1_length, int32_t ___2_allocator, const RuntimeMethod* method)
{
	return ((  NativeArray_1_t245D7224A42D1A32B87C64E49B7B434585EC91EF (*) (void*, int32_t, int32_t, const RuntimeMethod*))NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisVector3Int_t65CB06F557251D18A37BD71F3655BA836A357376_m68CCE7D85BD452D727A41279CA4D553EE8B627FF_gshared)(___0_dataPointer, ___1_length, ___2_allocator, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* Object_ForceLoadFromInstanceID_mDC03EC6F7745D8194DF5A7A0C50188228F3E95B6 (int32_t ___0_instanceID, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Tilemap_RefreshTilesNative_mD73E77DFD7C808A3665CA8389F728CBC08A52232 (Tilemap_t18C4166D0AC702D5BFC0C411FA73C4B61D9D1751* __this, void* ___0_positions, int32_t ___1_count, const RuntimeMethod* method) ;
inline NativeArray_1_t1520D9CD4959D9455C36ED19E490DBDC32B6EF5C NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisTileData_tFB814629D010ABD175127C0BE96FD96EA606E00F_mD61DE9D9D0F7E928CED8EA63A59BD8BE1276D07C (void* ___0_dataPointer, int32_t ___1_length, int32_t ___2_allocator, const RuntimeMethod* method)
{
	return ((  NativeArray_1_t1520D9CD4959D9455C36ED19E490DBDC32B6EF5C (*) (void*, int32_t, int32_t, const RuntimeMethod*))NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisTileData_tFB814629D010ABD175127C0BE96FD96EA606E00F_mD61DE9D9D0F7E928CED8EA63A59BD8BE1276D07C_gshared)(___0_dataPointer, ___1_length, ___2_allocator, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TileData_set_sprite_m3566544847F9C9C27EDB154324B6FBDB446EFE94 (TileData_tFB814629D010ABD175127C0BE96FD96EA606E00F* __this, Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TileData_set_color_m5E759823878243A226EF46419FAD7C0CC3D5F40A (TileData_tFB814629D010ABD175127C0BE96FD96EA606E00F* __this, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TileData_set_transform_m71074A780C066292F940002A7165658E9CC01F9F (TileData_tFB814629D010ABD175127C0BE96FD96EA606E00F* __this, Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TileData_set_gameObject_m1CE5B2AAAB5BF5AEF36EBAF2BCE23E4D2E5A9E09 (TileData_tFB814629D010ABD175127C0BE96FD96EA606E00F* __this, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TileData_set_flags_mEB46B1364D6DB7F77C2E1E43AFD31381B291BD30 (TileData_tFB814629D010ABD175127C0BE96FD96EA606E00F* __this, int32_t ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TileData_set_colliderType_mE12359ADEF5F42CC0B635DCBAEC3035F0526FA96 (TileData_tFB814629D010ABD175127C0BE96FD96EA606E00F* __this, int32_t ___0_value, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F Color_get_white_m068F5AF879B0FCA584E3693F762EA41BB65532C6_inline (const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 Matrix4x4_get_identity_m6568A73831F3E2D587420D20FF423959D7D8AB56_inline (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TileBase__ctor_mBFD0A0ACF9DB1F08783B9F3F35D4E61C9205D4A2 (TileBase_t07019BD771D35E8EA68118157D6EEE4C770CF0F9* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ITilemap_RefreshTile_m4C4B0A062A13E986BD20AA87F056982D67FAF69D (ITilemap_tCD8B9C2D6A80DB1DFE9C934D91EACE6B8A018164* __this, Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376 ___0_position, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ScriptableObject__ctor_mD037FDB0B487295EA47F79A4DB1BF1846C9087FF (ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Delegate_t* Delegate_Combine_m1F725AEF318BE6F0426863490691A6F4606E7D00 (Delegate_t* ___0_a, Delegate_t* ___1_b, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Delegate_t* Delegate_Remove_m8B7DD5661308FA972E23CA1CC3FC9CEB355504E3 (Delegate_t* ___0_source, Delegate_t* ___1_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Tilemap_HasSyncTileCallback_m522AE13C1DEBDDA7EBC7C9BAF1302EB75EF3A0EB (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Tilemap_SendAndClearSyncTileBuffer_m08E46EDA97D453F5A365E3DC1BBEBB6F74301067 (Tilemap_t18C4166D0AC702D5BFC0C411FA73C4B61D9D1751* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Tilemap_HasLoopEndedForTileAnimationCallback_m6A4AA954E8521E7BFC71B0A44B60DFDE7F7F51BD (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Tilemap_SendLoopEndedForTileAnimationCallback_m8D1E624097F94B218E9675EC3AA121C0F22CB6BA (Tilemap_t18C4166D0AC702D5BFC0C411FA73C4B61D9D1751* __this, NativeArray_1_t245D7224A42D1A32B87C64E49B7B434585EC91EF ___0_positions, const RuntimeMethod* method) ;
inline void Action_2_Invoke_m63AB8CDF184F8712FFDF64CD49CFAFF2FC9DF03D_inline (Action_2_tC05151F65CF4D95A1C7A5EE21DFEE184110056B2* __this, Tilemap_t18C4166D0AC702D5BFC0C411FA73C4B61D9D1751* ___0_arg1, NativeArray_1_t245D7224A42D1A32B87C64E49B7B434585EC91EF ___1_arg2, const RuntimeMethod* method)
{
	((  void (*) (Action_2_tC05151F65CF4D95A1C7A5EE21DFEE184110056B2*, Tilemap_t18C4166D0AC702D5BFC0C411FA73C4B61D9D1751*, NativeArray_1_t245D7224A42D1A32B87C64E49B7B434585EC91EF, const RuntimeMethod*))Action_2_Invoke_m7B85C2674B1EB0681F20E9C5AF3D19563459CBC0_gshared_inline)(__this, ___0_arg1, ___1_arg2, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_LogException_mD4CF3A9C64D8D4BA0570D529E705D134A9A5E498 (Exception_t* ___0_exception, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___1_context, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Tilemap_SendTilemapTileChangedCallback_m66E5D12B134C48E57EF4C1B29658CD61B75366EF (Tilemap_t18C4166D0AC702D5BFC0C411FA73C4B61D9D1751* __this, SyncTileU5BU5D_t9B4B242D002401F11525388BC75BDAB6A45714FF* ___0_syncTiles, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Tilemap_HasPositionsChangedCallback_mD02A9A567086C4F60CA7B4733EAFD173289857FF (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Tilemap_SendTilemapPositionsChangedCallback_m8F1D0E0F18A797349A83465F5E68DF01972D75D4 (Tilemap_t18C4166D0AC702D5BFC0C411FA73C4B61D9D1751* __this, NativeArray_1_t245D7224A42D1A32B87C64E49B7B434585EC91EF ___0_positions, const RuntimeMethod* method) ;
inline void Action_2_Invoke_m66A9645921ABEA3CFC0BB0DB828D756440BDF41D_inline (Action_2_t2E142A840461CBB0D9C4B088F1310607E995A8A1* __this, Tilemap_t18C4166D0AC702D5BFC0C411FA73C4B61D9D1751* ___0_arg1, SyncTileU5BU5D_t9B4B242D002401F11525388BC75BDAB6A45714FF* ___1_arg2, const RuntimeMethod* method)
{
	((  void (*) (Action_2_t2E142A840461CBB0D9C4B088F1310607E995A8A1*, Tilemap_t18C4166D0AC702D5BFC0C411FA73C4B61D9D1751*, SyncTileU5BU5D_t9B4B242D002401F11525388BC75BDAB6A45714FF*, const RuntimeMethod*))Action_2_Invoke_m7BFCE0BBCF67689D263059B56A8D79161B698587_gshared_inline)(__this, ___0_arg1, ___1_arg2, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Tilemap_add_tilemapTileChanged_mEED794BBD361501749622D5EB6E0362F16F2E100 (Action_2_t2E142A840461CBB0D9C4B088F1310607E995A8A1* ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Tilemap_remove_tilemapTileChanged_m5C38616AEBA01E6D988E27A8EC0BECDE7AC7F66D (Action_2_t2E142A840461CBB0D9C4B088F1310607E995A8A1* ___0_value, const RuntimeMethod* method) ;
inline intptr_t MarshalledUnityObject_MarshalNotNull_TisTilemap_t18C4166D0AC702D5BFC0C411FA73C4B61D9D1751_m82D224678369601467142F86AEE1B6684056544D_inline (Tilemap_t18C4166D0AC702D5BFC0C411FA73C4B61D9D1751* ___0_obj, const RuntimeMethod* method)
{
	return ((  intptr_t (*) (Tilemap_t18C4166D0AC702D5BFC0C411FA73C4B61D9D1751*, const RuntimeMethod*))MarshalledUnityObject_MarshalNotNull_TisRuntimeObject_mEB1AA6B672D00242BB9DCE007056EC0E9C8DB075_gshared_inline)(___0_obj, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThrowHelper_ThrowNullReferenceException_mA9C7629D32240EE0218631933DAC647668CA63CF (RuntimeObject* ___0_obj, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t Tilemap_get_layoutGrid_Injected_m97844AF3F6F465A1751C66C700C0AD7533816CE5 (intptr_t ___0__unity_self, const RuntimeMethod* method) ;
inline Grid_t4C0ACF986206D18240E35155E01B5A97DAA651FE* Unmarshal_UnmarshalUnityObject_TisGrid_t4C0ACF986206D18240E35155E01B5A97DAA651FE_mB3EAF529CC1C671A1129F570DEB6DA256E2E4B4E_inline (intptr_t ___0_gcHandlePtr, const RuntimeMethod* method)
{
	return ((  Grid_t4C0ACF986206D18240E35155E01B5A97DAA651FE* (*) (intptr_t, const RuntimeMethod*))Unmarshal_UnmarshalUnityObject_TisRuntimeObject_m2B04FEB8E4BB254DD6F827F3111C91F2AF16D04A_gshared_inline)(___0_gcHandlePtr, method);
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3Int_op_Implicit_m13297B1F6D07F1E46C0627EAAB8413E637FCA442_inline (Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376 ___0_v, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 GridLayout_CellToLocalInterpolated_mE1FC35F36111BD0881573C6F51C37239BF3BD621 (GridLayout_tAD661B1E1E57C16BE21C8C13432EA04FE1F0418B* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_cellPosition, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Tilemap_get_tileAnchor_mD3C7F2A024DC43019CEB93682307ED41EC3329E4 (Tilemap_t18C4166D0AC702D5BFC0C411FA73C4B61D9D1751* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_a, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___1_b, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 GridLayout_LocalToWorld_m4714A4DAF4FF9545E9CCB3A8ACB5731A498D9CA6 (GridLayout_tAD661B1E1E57C16BE21C8C13432EA04FE1F0418B* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_localPosition, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376 Tilemap_get_origin_mB5E10582CFAA76144BB44DECAADB84E904D02E55 (Tilemap_t18C4166D0AC702D5BFC0C411FA73C4B61D9D1751* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376 Tilemap_get_size_m8B9F0C2CC3CD37626AE921047DA5DC239B3F00EA (Tilemap_t18C4166D0AC702D5BFC0C411FA73C4B61D9D1751* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void BoundsInt__ctor_m93F7EDF326B3BA01465FA229F6CEED0ED48D32FF_inline (BoundsInt_t4E757DE5EFF9FCB42000F173360DDC63B5585485* __this, Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376 ___0_position, Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376 ___1_size, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Tilemap_get_localBounds_Injected_m152CE43998D57709D7DE44792575A54CA32684EF (intptr_t ___0__unity_self, Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3* ___1_ret, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Tilemap_get_localFrameBounds_Injected_m0253F8D05490C85058310D075E2C2EA5679D7D20 (intptr_t ___0__unity_self, Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3* ___1_ret, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Tilemap_get_animationFrameRate_Injected_m853E4D792F977520F9AF25B875050F0E160CCF45 (intptr_t ___0__unity_self, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Tilemap_set_animationFrameRate_Injected_m9D0FC3D1E26113F6242D44A86F8C36DDB2D72835 (intptr_t ___0__unity_self, float ___1_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Tilemap_get_color_Injected_m85B6020D39FE8EE7E8AF3130DE34879D6EA13CF4 (intptr_t ___0__unity_self, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* ___1_ret, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Tilemap_set_color_Injected_m09DB4716FFCD96ECBDA1BB38AAACB797470C5A34 (intptr_t ___0__unity_self, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* ___1_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Tilemap_get_origin_Injected_mE1614FE27564626B3726F24F6CC284204A1BDEA2 (intptr_t ___0__unity_self, Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376* ___1_ret, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Tilemap_set_origin_Injected_m75FCF12FAA633BE94169CBFA14F75092E6017EDF (intptr_t ___0__unity_self, Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376* ___1_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Tilemap_get_size_Injected_mE4A4FAFA70C3B5BA87CF8E64CD0BCCB8E11323EA (intptr_t ___0__unity_self, Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376* ___1_ret, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Tilemap_set_size_Injected_m9BC8598EC2320E1FBE4BEAC3200F44F6954E77B4 (intptr_t ___0__unity_self, Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376* ___1_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Tilemap_get_tileAnchor_Injected_m7D8067BA5CD69E8B8807AFD721E9BD732E5B8187 (intptr_t ___0__unity_self, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* ___1_ret, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Tilemap_set_tileAnchor_Injected_m26B585516E24D4DB3E2D09E7FDEDE7A29CC1AF5C (intptr_t ___0__unity_self, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* ___1_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Tilemap_get_orientation_Injected_mB207D5A6B766F40945FAB8150275D9771516D0FD (intptr_t ___0__unity_self, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Tilemap_set_orientation_Injected_m415007E87297A6E6C010ADE04E8F9DA48EADC26E (intptr_t ___0__unity_self, int32_t ___1_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Tilemap_get_orientationMatrix_Injected_mD54025C0654F2E07D74364E44A287136074F8646 (intptr_t ___0__unity_self, Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6* ___1_ret, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Tilemap_set_orientationMatrix_Injected_m25193FD97D463A5BC2F96CB9BF806C0CC7381E66 (intptr_t ___0__unity_self, Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6* ___1_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t Tilemap_GetTileAsset_Injected_mC4D3F18DDF3496564747BCD4E56631E21456093C (intptr_t ___0__unity_self, Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376* ___1_position, const RuntimeMethod* method) ;
inline Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* Unmarshal_UnmarshalUnityObject_TisObject_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_m27ACA708E2D42A879C8C665663669217265002CF_inline (intptr_t ___0_gcHandlePtr, const RuntimeMethod* method)
{
	return ((  Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* (*) (intptr_t, const RuntimeMethod*))Unmarshal_UnmarshalUnityObject_TisRuntimeObject_m2B04FEB8E4BB254DD6F827F3111C91F2AF16D04A_gshared_inline)(___0_gcHandlePtr, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* Tilemap_GetTileAsset_m3B9C96C2E2488141C4F6EBD52C6D807C801C6922 (Tilemap_t18C4166D0AC702D5BFC0C411FA73C4B61D9D1751* __this, Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376 ___0_position, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ObjectU5BU5D_tD4BF1BEC72A31DF6611C0B8FA3112AF128FC3F8A* Tilemap_GetTileAssetsBlock_Injected_mED14CACED7FEAFE71FDC9C468DDC0B628AE29EC5 (intptr_t ___0__unity_self, Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376* ___1_position, Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376* ___2_blockDimensions, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376 BoundsInt_get_min_m68D854200F7ED4AED677ECC53F26AA0834A715AE_inline (BoundsInt_t4E757DE5EFF9FCB42000F173360DDC63B5585485* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376 BoundsInt_get_size_mE7C4A0C3BF45CEA7A28ABF98E2C15CB69EF3A32C_inline (BoundsInt_t4E757DE5EFF9FCB42000F173360DDC63B5585485* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ObjectU5BU5D_tD4BF1BEC72A31DF6611C0B8FA3112AF128FC3F8A* Tilemap_GetTileAssetsBlock_m28BAE62DD83EFD00528A150B7728880DACAC0026 (Tilemap_t18C4166D0AC702D5BFC0C411FA73C4B61D9D1751* __this, Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376 ___0_position, Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376 ___1_blockDimensions, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Tilemap_GetTileAssetsBlockNonAlloc_Injected_mCD0F743A63D39979C36B66FF12C70C27BDC7F69A (intptr_t ___0__unity_self, Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376* ___1_startPosition, Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376* ___2_endPosition, ObjectU5BU5D_tD4BF1BEC72A31DF6611C0B8FA3112AF128FC3F8A* ___3_tiles, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Tilemap_GetTileAssetsBlockNonAlloc_m2BAA311398DE9C0B1590D662482FF292931B575F (Tilemap_t18C4166D0AC702D5BFC0C411FA73C4B61D9D1751* __this, Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376 ___0_startPosition, Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376 ___1_endPosition, ObjectU5BU5D_tD4BF1BEC72A31DF6611C0B8FA3112AF128FC3F8A* ___2_tiles, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Tilemap_GetTilesRangeCount_Injected_mAB929B5EFCEEB5E61DC537B4E486AB8861B5FE0D (intptr_t ___0__unity_self, Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376* ___1_startPosition, Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376* ___2_endPosition, const RuntimeMethod* method) ;
inline void Span_1__ctor_m2FF12B712FEDB8173F74807DC6FF2C18126FF8CF_inline (Span_1_tC29EC1099E0CDA9241D8A63482E444F1E1FE1FDA* __this, Vector3IntU5BU5D_t7A7C64EB93B0E0C1989C82C3D0A003294FC6EC5E* ___0_array, const RuntimeMethod* method)
{
	((  void (*) (Span_1_tC29EC1099E0CDA9241D8A63482E444F1E1FE1FDA*, Vector3IntU5BU5D_t7A7C64EB93B0E0C1989C82C3D0A003294FC6EC5E*, const RuntimeMethod*))Span_1__ctor_m2FF12B712FEDB8173F74807DC6FF2C18126FF8CF_gshared_inline)(__this, ___0_array, method);
}
inline Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376* Span_1_GetPinnableReference_mBE1FB81DA3F0ACBFCC01E850CAEB91A5FF5FCDEE (Span_1_tC29EC1099E0CDA9241D8A63482E444F1E1FE1FDA* __this, const RuntimeMethod* method)
{
	return ((  Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376* (*) (Span_1_tC29EC1099E0CDA9241D8A63482E444F1E1FE1FDA*, const RuntimeMethod*))Span_1_GetPinnableReference_mBE1FB81DA3F0ACBFCC01E850CAEB91A5FF5FCDEE_gshared)(__this, method);
}
inline int32_t Span_1_get_Length_mF4C43881CB4622B68DB84785142C44ADE93E85D7_inline (Span_1_tC29EC1099E0CDA9241D8A63482E444F1E1FE1FDA* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (Span_1_tC29EC1099E0CDA9241D8A63482E444F1E1FE1FDA*, const RuntimeMethod*))Span_1_get_Length_mF4C43881CB4622B68DB84785142C44ADE93E85D7_gshared_inline)(__this, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ManagedSpanWrapper__ctor_mB29647A21BB87EA4DF859E5C2FA2207F47E525D2 (ManagedSpanWrapper_tE7FC4BBB631B130757F8DEB15853D98FD3D5DC0E* __this, void* ___0_begin, int32_t ___1_length, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Tilemap_GetTileAssetsRangeNonAlloc_Injected_m4FA52158CABD751788603E21E7F0D75EE50272D5 (intptr_t ___0__unity_self, Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376* ___1_startPosition, Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376* ___2_endPosition, ManagedSpanWrapper_tE7FC4BBB631B130757F8DEB15853D98FD3D5DC0E* ___3_positions, ObjectU5BU5D_tD4BF1BEC72A31DF6611C0B8FA3112AF128FC3F8A* ___4_tiles, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Tilemap_GetTileAssetsRangeNonAlloc_mA42F628851793097696368EEA780D0240112D3DE (Tilemap_t18C4166D0AC702D5BFC0C411FA73C4B61D9D1751* __this, Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376 ___0_startPosition, Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376 ___1_endPosition, Vector3IntU5BU5D_t7A7C64EB93B0E0C1989C82C3D0A003294FC6EC5E* ___2_positions, ObjectU5BU5D_tD4BF1BEC72A31DF6611C0B8FA3112AF128FC3F8A* ___3_tiles, const RuntimeMethod* method) ;
inline intptr_t MarshalledUnityObject_Marshal_TisObject_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_m965B12ED56AA1618C042D16D10B1BA3BFD98FF4D_inline (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___0_obj, const RuntimeMethod* method)
{
	return ((  intptr_t (*) (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*, const RuntimeMethod*))MarshalledUnityObject_Marshal_TisRuntimeObject_m286B34400A212037E8EBD53DBFEAD7D23CDE8051_gshared_inline)(___0_obj, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Tilemap_SetTileAsset_Injected_mC24A398B065AFB28E88A51F38DA4762DD5DCBD4E (intptr_t ___0__unity_self, Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376* ___1_position, intptr_t ___2_tile, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Tilemap_SetTileAsset_m88D70B08B3D291F99EB34F01136C2D4EEBE45D4B (Tilemap_t18C4166D0AC702D5BFC0C411FA73C4B61D9D1751* __this, Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376 ___0_position, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___1_tile, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Tilemap_SetTileAssets_Injected_m072FC87A90CB630183F01F0FE4FAB6C2F4F44B71 (intptr_t ___0__unity_self, ManagedSpanWrapper_tE7FC4BBB631B130757F8DEB15853D98FD3D5DC0E* ___1_positionArray, ObjectU5BU5D_tD4BF1BEC72A31DF6611C0B8FA3112AF128FC3F8A* ___2_tileArray, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Tilemap_SetTileAssets_m80E6341D44AE4E50942B6A4A8E66CC45F8BEDAD5 (Tilemap_t18C4166D0AC702D5BFC0C411FA73C4B61D9D1751* __this, Vector3IntU5BU5D_t7A7C64EB93B0E0C1989C82C3D0A003294FC6EC5E* ___0_positionArray, ObjectU5BU5D_tD4BF1BEC72A31DF6611C0B8FA3112AF128FC3F8A* ___1_tileArray, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Tilemap_INTERNAL_CALL_SetTileAssetsBlock_Injected_m86571CE6952742F14BBBBB18360F31B7B52B3C38 (intptr_t ___0__unity_self, Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376* ___1_position, Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376* ___2_blockDimensions, ObjectU5BU5D_tD4BF1BEC72A31DF6611C0B8FA3112AF128FC3F8A* ___3_tileArray, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Tilemap_INTERNAL_CALL_SetTileAssetsBlock_mD20C1320B3C36E2A5F79BFF9A6B9EAABF3AF5437 (Tilemap_t18C4166D0AC702D5BFC0C411FA73C4B61D9D1751* __this, Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376 ___0_position, Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376 ___1_blockDimensions, ObjectU5BU5D_tD4BF1BEC72A31DF6611C0B8FA3112AF128FC3F8A* ___2_tileArray, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Tilemap_SetTile_Injected_mEB24C9A9DBCD23CF1890837188E9015086316B99 (intptr_t ___0__unity_self, TileChangeData_t6035410A63723928DB7B86A0880351354ADB635E* ___1_tileChangeData, bool ___2_ignoreLockFlags, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Tilemap_SetTiles_Injected_m05404BFADA3F2F390411859BBE122FE1BE17436E (intptr_t ___0__unity_self, TileChangeDataU5BU5D_t5DE74D19BDE89021FB95C861E05CBDE852AED8BD* ___1_tileChangeDataArray, bool ___2_ignoreLockFlags, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___0_x, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___1_y, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Tilemap_RefreshTile_Injected_m9EF6875C16B8F425284A6E681CD466C09B753643 (intptr_t ___0__unity_self, Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376* ___1_position, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Tilemap_RefreshTilesNative_Injected_m1CA76F21817AE189F616BA8585D219973222FAF6 (intptr_t ___0__unity_self, void* ___1_positions, int32_t ___2_count, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Tilemap_RefreshAllTiles_Injected_m5F81411F270FA246D9A5664AD077E338FA20A538 (intptr_t ___0__unity_self, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Tilemap_SwapTileAsset_Injected_mFB60CB58E79E2F53020F95587EAE1427452EFFFB (intptr_t ___0__unity_self, intptr_t ___1_changeTile, intptr_t ___2_newTile, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Tilemap_SwapTileAsset_m8185544F41428C07809B2F7DCFC4DD808083C287 (Tilemap_t18C4166D0AC702D5BFC0C411FA73C4B61D9D1751* __this, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___0_changeTile, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___1_newTile, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Tilemap_ContainsTileAsset_Injected_mD121FECCF0534A4E18211435B341593657DB0A37 (intptr_t ___0__unity_self, intptr_t ___1_tileAsset, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Tilemap_ContainsTileAsset_m14064994385EE754CE7CCF34CE8FB8E5AB299282 (Tilemap_t18C4166D0AC702D5BFC0C411FA73C4B61D9D1751* __this, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___0_tileAsset, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Tilemap_GetUsedTilesCount_Injected_mF9233C510EFA2441B71C2648A0FB4EF03D07E8D1 (intptr_t ___0__unity_self, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Tilemap_GetUsedSpritesCount_Injected_m48D2A88CE16787F87CB937C7F716E0F688BCE6DE (intptr_t ___0__unity_self, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Tilemap_Internal_GetUsedTilesNonAlloc_m79F745C755C26362833B0F0CC8C5846547EF5C4F (Tilemap_t18C4166D0AC702D5BFC0C411FA73C4B61D9D1751* __this, ObjectU5BU5D_tD4BF1BEC72A31DF6611C0B8FA3112AF128FC3F8A* ___0_usedTiles, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Tilemap_Internal_GetUsedSpritesNonAlloc_mCDD01ECE51A344C6224D34F199A9F553AF086784 (Tilemap_t18C4166D0AC702D5BFC0C411FA73C4B61D9D1751* __this, ObjectU5BU5D_tD4BF1BEC72A31DF6611C0B8FA3112AF128FC3F8A* ___0_usedSprites, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Tilemap_Internal_GetUsedTilesNonAlloc_Injected_m56C0D831A7D75EAF3FC3B3360D82EF7921C947C2 (intptr_t ___0__unity_self, ObjectU5BU5D_tD4BF1BEC72A31DF6611C0B8FA3112AF128FC3F8A* ___1_usedTiles, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Tilemap_Internal_GetUsedSpritesNonAlloc_Injected_mA87DD54DC56FF5C69E8A57348EB81739718660D6 (intptr_t ___0__unity_self, ObjectU5BU5D_tD4BF1BEC72A31DF6611C0B8FA3112AF128FC3F8A* ___1_usedSprites, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t Tilemap_GetSprite_Injected_m67336B8364F5F92D2B6245817ED20E37567AE9D8 (intptr_t ___0__unity_self, Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376* ___1_position, const RuntimeMethod* method) ;
inline Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* Unmarshal_UnmarshalUnityObject_TisSprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99_m8BC0361DEF1936E61A85920BE6C78419B7F7AC44_inline (intptr_t ___0_gcHandlePtr, const RuntimeMethod* method)
{
	return ((  Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* (*) (intptr_t, const RuntimeMethod*))Unmarshal_UnmarshalUnityObject_TisRuntimeObject_m2B04FEB8E4BB254DD6F827F3111C91F2AF16D04A_gshared_inline)(___0_gcHandlePtr, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Tilemap_GetTransformMatrix_Injected_m59B5C148BB6892F5C5399E02F5C633FBE04CED78 (intptr_t ___0__unity_self, Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376* ___1_position, Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6* ___2_ret, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Tilemap_SetTransformMatrix_Injected_m197A37112BEF96BA9CF51A160980284A8318CD8C (intptr_t ___0__unity_self, Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376* ___1_position, Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6* ___2_transform, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Tilemap_GetColor_Injected_mB3E8126997379DCE2AB718A9DCB0F31BFFBEEC1D (intptr_t ___0__unity_self, Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376* ___1_position, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* ___2_ret, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Tilemap_SetColor_Injected_m6BF57E69D72A7BB95EF7E9FA5D9D1AA0CDA4F6A7 (intptr_t ___0__unity_self, Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376* ___1_position, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* ___2_color, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Tilemap_GetTileFlags_Injected_m19EEBBB6362FF9D726E57631AADFC18164B855DF (intptr_t ___0__unity_self, Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376* ___1_position, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Tilemap_SetTileFlags_Injected_m876C1BCE881905255A31AFB2AFC64006748AA12D (intptr_t ___0__unity_self, Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376* ___1_position, int32_t ___2_flags, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Tilemap_AddTileFlags_Injected_mF50DC65964283AB92DCEA38CC985D679E0D8F235 (intptr_t ___0__unity_self, Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376* ___1_position, int32_t ___2_flags, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Tilemap_RemoveTileFlags_Injected_m21DD54BF71A798AD3999C550C43B1903ADA901DE (intptr_t ___0__unity_self, Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376* ___1_position, int32_t ___2_flags, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t Tilemap_GetInstantiatedObject_Injected_mE2BD4C1D554D05A0A3D01F39D09FEC6F28112CE0 (intptr_t ___0__unity_self, Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376* ___1_position, const RuntimeMethod* method) ;
inline GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* Unmarshal_UnmarshalUnityObject_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_mD415D118B2B7811AFB468A2908F39E62F9EF1A8D_inline (intptr_t ___0_gcHandlePtr, const RuntimeMethod* method)
{
	return ((  GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* (*) (intptr_t, const RuntimeMethod*))Unmarshal_UnmarshalUnityObject_TisRuntimeObject_m2B04FEB8E4BB254DD6F827F3111C91F2AF16D04A_gshared_inline)(___0_gcHandlePtr, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t Tilemap_GetObjectToInstantiate_Injected_m5CF717101E10826DF66F9E3D9BD230282A121A60 (intptr_t ___0__unity_self, Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376* ___1_position, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Tilemap_SetColliderType_Injected_mA9E4B30849CCE0226CA27BFF68C4286487ADB18B (intptr_t ___0__unity_self, Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376* ___1_position, int32_t ___2_colliderType, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Tilemap_GetColliderType_Injected_mD6E392F148DC084125275E12A03C2E0B42E07D6C (intptr_t ___0__unity_self, Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376* ___1_position, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Tilemap_GetAnimationFrameCount_Injected_mAF45E7378AF109E32B924085710E174A29DE236C (intptr_t ___0__unity_self, Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376* ___1_position, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Tilemap_GetAnimationFrame_Injected_m4CC1097F39278541A72A97DB6FFFA451107C23F6 (intptr_t ___0__unity_self, Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376* ___1_position, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Tilemap_SetAnimationFrame_Injected_m85AE283348CB6CBF35B3FA15815F3EB7937DCDCB (intptr_t ___0__unity_self, Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376* ___1_position, int32_t ___2_frame, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Tilemap_GetAnimationTime_Injected_m38B7728CC960C0431B8338AFE938F9F7DE2C9554 (intptr_t ___0__unity_self, Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376* ___1_position, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Tilemap_SetAnimationTime_Injected_m0C256A070D39F445FB925205911E2899209B51AC (intptr_t ___0__unity_self, Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376* ___1_position, float ___2_time, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Tilemap_GetTileAnimationFlags_Injected_m992567070B9B60DB58572FBF2A6B2949AC442488 (intptr_t ___0__unity_self, Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376* ___1_position, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Tilemap_SetTileAnimationFlags_Injected_mA8BE1B6A0277BA38CC0713DB8B1FAB99D042035D (intptr_t ___0__unity_self, Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376* ___1_position, int32_t ___2_flags, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Tilemap_AddTileAnimationFlags_Injected_m8A13EECFEC34A5FA206390B957CA57D8501699F2 (intptr_t ___0__unity_self, Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376* ___1_position, int32_t ___2_flags, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Tilemap_RemoveTileAnimationFlags_Injected_mB5FA3B46001B459474499CB3C64C8CB30645A21C (intptr_t ___0__unity_self, Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376* ___1_position, int32_t ___2_flags, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Tilemap_FloodFillTileAsset_mE662F8026F3FA9E054D58640727D57417CD33A9F (Tilemap_t18C4166D0AC702D5BFC0C411FA73C4B61D9D1751* __this, Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376 ___0_position, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___1_tile, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Tilemap_FloodFillTileAsset_Injected_mFC743B9ECBE9055BDB19FD7E44D0776E97866439 (intptr_t ___0__unity_self, Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376* ___1_position, intptr_t ___2_tile, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Tilemap_BoxFillTileAsset_mE880ED900FEA8679D2FAB08810A660402EF5A640 (Tilemap_t18C4166D0AC702D5BFC0C411FA73C4B61D9D1751* __this, Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376 ___0_position, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___1_tile, int32_t ___2_startX, int32_t ___3_startY, int32_t ___4_endX, int32_t ___5_endY, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Tilemap_BoxFillTileAsset_Injected_m2E23DAD50DC56125C62E74EB984D1AC7D8745450 (intptr_t ___0__unity_self, Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376* ___1_position, intptr_t ___2_tile, int32_t ___3_startX, int32_t ___4_startY, int32_t ___5_endX, int32_t ___6_endY, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Vector3Int_get_x_m21C268D2AA4C03CE35AA49DF6155347C9748054C_inline (Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Vector3Int_get_y_m42F43000F85D356557CAF03442273E7AA08F7F72_inline (Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Vector3Int_get_z_m96E180F866145E373F42358F2371EFF446F08AED_inline (Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Tilemap_InsertCells_mD674C03ECC2F720959DD5140FA70D610355274F3 (Tilemap_t18C4166D0AC702D5BFC0C411FA73C4B61D9D1751* __this, Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376 ___0_position, int32_t ___1_numColumns, int32_t ___2_numRows, int32_t ___3_numLayers, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Tilemap_InsertCells_Injected_m73ACF06850B17EE349FB12E73FEFB4C526214E44 (intptr_t ___0__unity_self, Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376* ___1_position, int32_t ___2_numColumns, int32_t ___3_numRows, int32_t ___4_numLayers, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Tilemap_DeleteCells_mF179BB21D0E8F5977ABF28FA370FB219CF2EAD6F (Tilemap_t18C4166D0AC702D5BFC0C411FA73C4B61D9D1751* __this, Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376 ___0_position, int32_t ___1_numColumns, int32_t ___2_numRows, int32_t ___3_numLayers, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Tilemap_DeleteCells_Injected_mA8D2B41C2A84B561C2254F369C8FB17EB08E0A36 (intptr_t ___0__unity_self, Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376* ___1_position, int32_t ___2_numColumns, int32_t ___3_numRows, int32_t ___4_numLayers, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Tilemap_ClearAllTiles_Injected_mA1907919D0EAE3FCD14370073669922F0944E530 (intptr_t ___0__unity_self, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Tilemap_ResizeBounds_Injected_m5574726944E3196E55444859A53F560639582DF6 (intptr_t ___0__unity_self, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Tilemap_CompressBounds_Injected_mD5EF633DD65236DC9C32EA5CBFA0F12A7C73BC52 (intptr_t ___0__unity_self, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Tilemap_HandleLoopEndedForTileAnimationCallback_m7BA8FF295BA812311BF3854DB2978EAE03B2F9C1 (Tilemap_t18C4166D0AC702D5BFC0C411FA73C4B61D9D1751* __this, int32_t ___0_count, intptr_t ___1_positionsIntPtr, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Tilemap_get_bufferSyncTile_m5506F240CC262FD454CFF9B547F16530F9506B1D (Tilemap_t18C4166D0AC702D5BFC0C411FA73C4B61D9D1751* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Tilemap_SendAndClearSyncTileBuffer_Injected_mC6E388BB41E30116BEA65C7A0855BC918930FBC4 (intptr_t ___0__unity_self, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Tilemap_HandleSyncTileCallback_mF1D8059E6F8ED90041313259D5DCFC3DBEB8750A (Tilemap_t18C4166D0AC702D5BFC0C411FA73C4B61D9D1751* __this, SyncTileU5BU5D_t9B4B242D002401F11525388BC75BDAB6A45714FF* ___0_syncTiles, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Tilemap_HandlePositionsChangedCallback_mCEC3B01A5328F6C83163C25CE9EDCD87E5895CD0 (Tilemap_t18C4166D0AC702D5BFC0C411FA73C4B61D9D1751* __this, int32_t ___0_count, intptr_t ___1_positionsIntPtr, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GridLayout__ctor_m9266D2F9A58091E4214E9E5B69C0E5350F344828 (GridLayout_tAD661B1E1E57C16BE21C8C13432EA04FE1F0418B* __this, const RuntimeMethod* method) ;
inline void Action_1__ctor_mDAEB7161DF624FDF6A3DA3C6BE40319FFC05A2E3 (Action_1_tE96F2DDA71AE56E61CEEC5974B6503D38835E57D* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method)
{
	((  void (*) (Action_1_tE96F2DDA71AE56E61CEEC5974B6503D38835E57D*, RuntimeObject*, intptr_t, const RuntimeMethod*))Action_1__ctor_m2E1DFA67718FC1A0B6E5DFEB78831FFE9C059EB4_gshared)(__this, ___0_object, ___1_method, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpriteAtlasManager_add_atlasRegistered_mA46A6A347F25B2E03DB4FD8044B93B4FD8ED50A5 (Action_1_tE96F2DDA71AE56E61CEEC5974B6503D38835E57D* ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpriteAtlasManager_remove_atlasRegistered_m67E745D3503463E3DB9CC12C157ABB4F469ABE79 (Action_1_tE96F2DDA71AE56E61CEEC5974B6503D38835E57D* ___0_value, const RuntimeMethod* method) ;
inline intptr_t MarshalledUnityObject_MarshalNotNull_TisTilemapRenderer_t1A45FD335E86172CFBB77D657E1D6705A477A6CB_m90A6BD70FCFCC009E37CFC2B6DFD690A08042489_inline (TilemapRenderer_t1A45FD335E86172CFBB77D657E1D6705A477A6CB* ___0_obj, const RuntimeMethod* method)
{
	return ((  intptr_t (*) (TilemapRenderer_t1A45FD335E86172CFBB77D657E1D6705A477A6CB*, const RuntimeMethod*))MarshalledUnityObject_MarshalNotNull_TisRuntimeObject_mEB1AA6B672D00242BB9DCE007056EC0E9C8DB075_gshared_inline)(___0_obj, method);
}
inline intptr_t MarshalledUnityObject_Marshal_TisSpriteAtlas_t7B9620FBFBE1CCB781F2ED24A3B2DD37734F66A8_m599B052593B0725CFCE967619492F19EFDA31A68_inline (SpriteAtlas_t7B9620FBFBE1CCB781F2ED24A3B2DD37734F66A8* ___0_obj, const RuntimeMethod* method)
{
	return ((  intptr_t (*) (SpriteAtlas_t7B9620FBFBE1CCB781F2ED24A3B2DD37734F66A8*, const RuntimeMethod*))MarshalledUnityObject_Marshal_TisRuntimeObject_m286B34400A212037E8EBD53DBFEAD7D23CDE8051_gshared_inline)(___0_obj, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TilemapRenderer_OnSpriteAtlasRegistered_Injected_mEA941D5042FADDC2E5457247D2DF55324C143D9A (intptr_t ___0__unity_self, intptr_t ___1_atlas, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Object_GetInstanceID_m554FF4073C9465F3835574CC084E68AAEEC6CC6A (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TileData_tFB814629D010ABD175127C0BE96FD96EA606E00F TileData_CreateDefault_m13A39001A47B60635B10FFD06AD65082CBB7D12D (const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Color__ctor_m3786F0D6E510D9CFA544523A955870BD2A514C8C_inline (Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* __this, float ___0_r, float ___1_g, float ___2_b, float ___3_a, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, float ___0_x, float ___1_y, float ___2_z, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t BoundsInt_get_xMin_m255A25A18122FF0155AB965564DC10E916DB8DF1_inline (BoundsInt_t4E757DE5EFF9FCB42000F173360DDC63B5585485* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t BoundsInt_get_yMin_m36BB6D14F979D5C332475B737045E612907304EE_inline (BoundsInt_t4E757DE5EFF9FCB42000F173360DDC63B5585485* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t BoundsInt_get_zMin_mD407CC67476B50EEFD1ED07A51FC3588616E4E3C_inline (BoundsInt_t4E757DE5EFF9FCB42000F173360DDC63B5585485* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3Int__ctor_mE06A86999D16FA579A7F2142B872AB7E3695C9E0_inline (Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376* __this, int32_t ___0_x, int32_t ___1_y, int32_t ___2_z, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool IntPtr_op_Equality_m7D9CDCDE9DC2A0C2C614633F4921E90187FAB271_inline (intptr_t ___0_value1, intptr_t ___1_value2, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR GCHandle_tC44F6F72EE68BD4CFABA24309DA7A179D41127DC Unmarshal_FromIntPtrUnsafe_mB304834C5EC431CC0FBE13C6BB97066F222BC55C_inline (intptr_t ___0_gcHandle, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* GCHandle_get_Target_m481F9508DA5E384D33CD1F4450060DC56BBD4CD5_inline (GCHandle_tC44F6F72EE68BD4CFABA24309DA7A179D41127DC* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR uint8_t* Array_GetRawSzArrayData_m2F8F5B2A381AEF971F12866D9C0A6C4FBA59F6BB_inline (RuntimeArray* __this, const RuntimeMethod* method) ;
inline intptr_t MarshalledUnityObject_MarshalNotNull_TisRuntimeObject_mEB1AA6B672D00242BB9DCE007056EC0E9C8DB075_inline (RuntimeObject* ___0_obj, const RuntimeMethod* method)
{
	return ((  intptr_t (*) (RuntimeObject*, const RuntimeMethod*))MarshalledUnityObject_MarshalNotNull_TisRuntimeObject_mEB1AA6B672D00242BB9DCE007056EC0E9C8DB075_gshared_inline)(___0_obj, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Math_Min_m53C488772A34D53917BCA2A491E79A0A5356ED52 (int32_t ___0_val1, int32_t ___1_val2, const RuntimeMethod* method) ;
inline GCHandle_tC44F6F72EE68BD4CFABA24309DA7A179D41127DC* UnsafeUtility_As_TisIntPtr_t_TisGCHandle_tC44F6F72EE68BD4CFABA24309DA7A179D41127DC_mD94F597CB91662C823496DA9FA9A7CF908734A78_inline (intptr_t* ___0_from, const RuntimeMethod* method)
{
	return ((  GCHandle_tC44F6F72EE68BD4CFABA24309DA7A179D41127DC* (*) (intptr_t*, const RuntimeMethod*))UnsafeUtility_As_TisIntPtr_t_TisGCHandle_tC44F6F72EE68BD4CFABA24309DA7A179D41127DC_mD94F597CB91662C823496DA9FA9A7CF908734A78_gshared_inline)(___0_from, method);
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool GCHandle_get_IsAllocated_m241908103D8D867E11CCAB73C918729825E86843_inline (GCHandle_tC44F6F72EE68BD4CFABA24309DA7A179D41127DC* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162 (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* __this, String_t* ___0_message, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool GCHandle_CanDereferenceHandle_mAAAC42D1268CEF3FDD040A3D1574773D08140579_inline (intptr_t ___0_handle, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* GCHandle_GetRef_mAC7E58E62417209DC41C99F66BA70F0C3AA18DA8_inline (intptr_t ___0_handle, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* GCHandle_GetTarget_mE0AF851834410E2AEA6285B2497751570236C794 (intptr_t ___0_handle, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool IntPtr_op_Inequality_m90EFC9C4CAD9A33E309F2DDF98EE4E1DD253637B_inline (intptr_t ___0_value1, intptr_t ___1_value2, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void* IntPtr_op_Explicit_m2728CBA081E79B97DDCF1D4FAD77B309CA1E94BF (intptr_t ___0_value, const RuntimeMethod* method) ;
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ITilemap__ctor_m3281F6903F18F9B867E6B81E18BCCD0828084258 (ITilemap_tCD8B9C2D6A80DB1DFE9C934D91EACE6B8A018164* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ITilemap_RefreshTile_m4C4B0A062A13E986BD20AA87F056982D67FAF69D (ITilemap_tCD8B9C2D6A80DB1DFE9C934D91EACE6B8A018164* __this, Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376 ___0_position, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeArray_1_Copy_m4515C6A6B64476716833B9C22AAE07185976AF24_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeArray_1_Dispose_mAB8B3AE6332BF29F21711643D4FFE57E30E1E055_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeArray_1__ctor_m29DAD3F6139353D219E363E2C63BC183CBC778E2_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	NativeArray_1_t245D7224A42D1A32B87C64E49B7B434585EC91EF V_2;
	memset((&V_2), 0, sizeof(V_2));
	int32_t V_3 = 0;
	{
		bool L_0 = __this->___m_AddToList;
		V_0 = L_0;
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_008e;
		}
	}
	{
		int32_t L_2 = __this->___m_RefreshCount;
		NativeArray_1_t245D7224A42D1A32B87C64E49B7B434585EC91EF* L_3 = (NativeArray_1_t245D7224A42D1A32B87C64E49B7B434585EC91EF*)(&__this->___m_RefreshPos);
		int32_t L_4;
		L_4 = IL2CPP_NATIVEARRAY_GET_LENGTH((L_3)->___m_Length);
		V_1 = (bool)((((int32_t)((((int32_t)L_2) < ((int32_t)L_4))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_5 = V_1;
		if (!L_5)
		{
			goto IL_006d;
		}
	}
	{
		int32_t L_6 = __this->___m_RefreshCount;
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		int32_t L_7;
		L_7 = Math_Max_m530EBA549AFD98CFC2BD29FE86C6376E67DF11CF(1, ((int32_t)il2cpp_codegen_multiply(L_6, 2)), NULL);
		NativeArray_1__ctor_m29DAD3F6139353D219E363E2C63BC183CBC778E2((&V_2), L_7, 2, 1, NativeArray_1__ctor_m29DAD3F6139353D219E363E2C63BC183CBC778E2_RuntimeMethod_var);
		NativeArray_1_t245D7224A42D1A32B87C64E49B7B434585EC91EF L_8 = __this->___m_RefreshPos;
		NativeArray_1_t245D7224A42D1A32B87C64E49B7B434585EC91EF L_9 = V_2;
		NativeArray_1_t245D7224A42D1A32B87C64E49B7B434585EC91EF* L_10 = (NativeArray_1_t245D7224A42D1A32B87C64E49B7B434585EC91EF*)(&__this->___m_RefreshPos);
		int32_t L_11;
		L_11 = IL2CPP_NATIVEARRAY_GET_LENGTH((L_10)->___m_Length);
		NativeArray_1_Copy_m4515C6A6B64476716833B9C22AAE07185976AF24(L_8, L_9, L_11, NativeArray_1_Copy_m4515C6A6B64476716833B9C22AAE07185976AF24_RuntimeMethod_var);
		NativeArray_1_t245D7224A42D1A32B87C64E49B7B434585EC91EF* L_12 = (NativeArray_1_t245D7224A42D1A32B87C64E49B7B434585EC91EF*)(&__this->___m_RefreshPos);
		NativeArray_1_Dispose_mAB8B3AE6332BF29F21711643D4FFE57E30E1E055(L_12, NativeArray_1_Dispose_mAB8B3AE6332BF29F21711643D4FFE57E30E1E055_RuntimeMethod_var);
		NativeArray_1_t245D7224A42D1A32B87C64E49B7B434585EC91EF L_13 = V_2;
		__this->___m_RefreshPos = L_13;
	}

IL_006d:
	{
		NativeArray_1_t245D7224A42D1A32B87C64E49B7B434585EC91EF* L_14 = (NativeArray_1_t245D7224A42D1A32B87C64E49B7B434585EC91EF*)(&__this->___m_RefreshPos);
		int32_t L_15 = __this->___m_RefreshCount;
		V_3 = L_15;
		int32_t L_16 = V_3;
		__this->___m_RefreshCount = ((int32_t)il2cpp_codegen_add(L_16, 1));
		int32_t L_17 = V_3;
		Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376 L_18 = ___0_position;
		IL2CPP_NATIVEARRAY_SET_ITEM(Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376, (L_14)->___m_Buffer, L_17, (L_18));
		goto IL_009b;
	}

IL_008e:
	{
		Tilemap_t18C4166D0AC702D5BFC0C411FA73C4B61D9D1751* L_19 = __this->___m_Tilemap;
		Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376 L_20 = ___0_position;
		NullCheck(L_19);
		Tilemap_RefreshTile_mEF4F94212FD9B311431DFFAFE092A4A6EBA580DF(L_19, L_20, NULL);
	}

IL_009b:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ITilemap_tCD8B9C2D6A80DB1DFE9C934D91EACE6B8A018164* ITilemap_CreateInstance_m63D3D1EDDCA86A1F1A116A2205D798AD2BAF3E96 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ITilemap_tCD8B9C2D6A80DB1DFE9C934D91EACE6B8A018164_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	ITilemap_tCD8B9C2D6A80DB1DFE9C934D91EACE6B8A018164* V_0 = NULL;
	{
		ITilemap_tCD8B9C2D6A80DB1DFE9C934D91EACE6B8A018164* L_0 = (ITilemap_tCD8B9C2D6A80DB1DFE9C934D91EACE6B8A018164*)il2cpp_codegen_object_new(ITilemap_tCD8B9C2D6A80DB1DFE9C934D91EACE6B8A018164_il2cpp_TypeInfo_var);
		ITilemap__ctor_m3281F6903F18F9B867E6B81E18BCCD0828084258(L_0, NULL);
		((ITilemap_tCD8B9C2D6A80DB1DFE9C934D91EACE6B8A018164_StaticFields*)il2cpp_codegen_static_fields_for(ITilemap_tCD8B9C2D6A80DB1DFE9C934D91EACE6B8A018164_il2cpp_TypeInfo_var))->___s_Instance = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((ITilemap_tCD8B9C2D6A80DB1DFE9C934D91EACE6B8A018164_StaticFields*)il2cpp_codegen_static_fields_for(ITilemap_tCD8B9C2D6A80DB1DFE9C934D91EACE6B8A018164_il2cpp_TypeInfo_var))->___s_Instance), (void*)L_0);
		ITilemap_tCD8B9C2D6A80DB1DFE9C934D91EACE6B8A018164* L_1 = ((ITilemap_tCD8B9C2D6A80DB1DFE9C934D91EACE6B8A018164_StaticFields*)il2cpp_codegen_static_fields_for(ITilemap_tCD8B9C2D6A80DB1DFE9C934D91EACE6B8A018164_il2cpp_TypeInfo_var))->___s_Instance;
		V_0 = L_1;
		goto IL_0013;
	}

IL_0013:
	{
		ITilemap_tCD8B9C2D6A80DB1DFE9C934D91EACE6B8A018164* L_2 = V_0;
		return L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ITilemap_FindAllRefreshPositions_m681FAC77C526640B18549097C961C85EA5846CCC (ITilemap_tCD8B9C2D6A80DB1DFE9C934D91EACE6B8A018164* ___0_tilemap, int32_t ___1_count, intptr_t ___2_oldTilesIntPtr, intptr_t ___3_newTilesIntPtr, intptr_t ___4_positionsIntPtr, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m5C4C6FA53CA05FE88CA7926E8B1C0DF717B63550_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisVector3Int_t65CB06F557251D18A37BD71F3655BA836A357376_m68CCE7D85BD452D727A41279CA4D553EE8B627FF_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeArray_1_Dispose_mAB8B3AE6332BF29F21711643D4FFE57E30E1E055_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeArray_1__ctor_m29DAD3F6139353D219E363E2C63BC183CBC778E2_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeArray_1_get_IsCreated_mE992FB4B97CD24CAF70D23773821AE2687DC4A30_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TileBase_t07019BD771D35E8EA68118157D6EEE4C770CF0F9_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	void* V_0 = NULL;
	void* V_1 = NULL;
	void* V_2 = NULL;
	NativeArray_1_tA833EB7E3E1C9AF82C37976AD964B8D4BAC38B2C V_3;
	memset((&V_3), 0, sizeof(V_3));
	NativeArray_1_tA833EB7E3E1C9AF82C37976AD964B8D4BAC38B2C V_4;
	memset((&V_4), 0, sizeof(V_4));
	NativeArray_1_t245D7224A42D1A32B87C64E49B7B434585EC91EF V_5;
	memset((&V_5), 0, sizeof(V_5));
	bool V_6 = false;
	int32_t V_7 = 0;
	int32_t V_8 = 0;
	int32_t V_9 = 0;
	Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376 V_10;
	memset((&V_10), 0, sizeof(V_10));
	bool V_11 = false;
	TileBase_t07019BD771D35E8EA68118157D6EEE4C770CF0F9* V_12 = NULL;
	bool V_13 = false;
	TileBase_t07019BD771D35E8EA68118157D6EEE4C770CF0F9* V_14 = NULL;
	bool V_15 = false;
	int32_t G_B3_0 = 0;
	{
		ITilemap_tCD8B9C2D6A80DB1DFE9C934D91EACE6B8A018164* L_0 = ___0_tilemap;
		NullCheck(L_0);
		L_0->___m_AddToList = (bool)1;
		ITilemap_tCD8B9C2D6A80DB1DFE9C934D91EACE6B8A018164* L_1 = ___0_tilemap;
		NullCheck(L_1);
		NativeArray_1_t245D7224A42D1A32B87C64E49B7B434585EC91EF L_2 = L_1->___m_RefreshPos;
		ITilemap_tCD8B9C2D6A80DB1DFE9C934D91EACE6B8A018164* L_3 = ___0_tilemap;
		NullCheck(L_3);
		NativeArray_1_t245D7224A42D1A32B87C64E49B7B434585EC91EF* L_4 = (NativeArray_1_t245D7224A42D1A32B87C64E49B7B434585EC91EF*)(&L_3->___m_RefreshPos);
		bool L_5;
		L_5 = NativeArray_1_get_IsCreated_mE992FB4B97CD24CAF70D23773821AE2687DC4A30_inline(L_4, NativeArray_1_get_IsCreated_mE992FB4B97CD24CAF70D23773821AE2687DC4A30_RuntimeMethod_var);
		if (!L_5)
		{
			goto IL_002c;
		}
	}
	{
		ITilemap_tCD8B9C2D6A80DB1DFE9C934D91EACE6B8A018164* L_6 = ___0_tilemap;
		NullCheck(L_6);
		NativeArray_1_t245D7224A42D1A32B87C64E49B7B434585EC91EF* L_7 = (NativeArray_1_t245D7224A42D1A32B87C64E49B7B434585EC91EF*)(&L_6->___m_RefreshPos);
		int32_t L_8;
		L_8 = IL2CPP_NATIVEARRAY_GET_LENGTH((L_7)->___m_Length);
		int32_t L_9 = ___1_count;
		G_B3_0 = ((((int32_t)L_8) < ((int32_t)L_9))? 1 : 0);
		goto IL_002d;
	}

IL_002c:
	{
		G_B3_0 = 1;
	}

IL_002d:
	{
		V_6 = (bool)G_B3_0;
		bool L_10 = V_6;
		if (!L_10)
		{
			goto IL_0048;
		}
	}
	{
		ITilemap_tCD8B9C2D6A80DB1DFE9C934D91EACE6B8A018164* L_11 = ___0_tilemap;
		int32_t L_12 = ___1_count;
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		int32_t L_13;
		L_13 = Math_Max_m530EBA549AFD98CFC2BD29FE86C6376E67DF11CF(((int32_t)16), L_12, NULL);
		NativeArray_1_t245D7224A42D1A32B87C64E49B7B434585EC91EF L_14;
		memset((&L_14), 0, sizeof(L_14));
		NativeArray_1__ctor_m29DAD3F6139353D219E363E2C63BC183CBC778E2((&L_14), L_13, 2, 1, NativeArray_1__ctor_m29DAD3F6139353D219E363E2C63BC183CBC778E2_RuntimeMethod_var);
		NullCheck(L_11);
		L_11->___m_RefreshPos = L_14;
	}

IL_0048:
	{
		ITilemap_tCD8B9C2D6A80DB1DFE9C934D91EACE6B8A018164* L_15 = ___0_tilemap;
		NullCheck(L_15);
		L_15->___m_RefreshCount = 0;
		void* L_16;
		L_16 = IntPtr_ToPointer_m1A0612EED3A1C8B8850BE2943CFC42523064B4F6_inline((&___2_oldTilesIntPtr), NULL);
		V_0 = L_16;
		void* L_17;
		L_17 = IntPtr_ToPointer_m1A0612EED3A1C8B8850BE2943CFC42523064B4F6_inline((&___3_newTilesIntPtr), NULL);
		V_1 = L_17;
		void* L_18;
		L_18 = IntPtr_ToPointer_m1A0612EED3A1C8B8850BE2943CFC42523064B4F6_inline((&___4_positionsIntPtr), NULL);
		V_2 = L_18;
		void* L_19 = V_0;
		int32_t L_20 = ___1_count;
		NativeArray_1_tA833EB7E3E1C9AF82C37976AD964B8D4BAC38B2C L_21;
		L_21 = NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m5C4C6FA53CA05FE88CA7926E8B1C0DF717B63550(L_19, L_20, 0, NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m5C4C6FA53CA05FE88CA7926E8B1C0DF717B63550_RuntimeMethod_var);
		V_3 = L_21;
		void* L_22 = V_1;
		int32_t L_23 = ___1_count;
		NativeArray_1_tA833EB7E3E1C9AF82C37976AD964B8D4BAC38B2C L_24;
		L_24 = NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m5C4C6FA53CA05FE88CA7926E8B1C0DF717B63550(L_22, L_23, 0, NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m5C4C6FA53CA05FE88CA7926E8B1C0DF717B63550_RuntimeMethod_var);
		V_4 = L_24;
		void* L_25 = V_2;
		int32_t L_26 = ___1_count;
		NativeArray_1_t245D7224A42D1A32B87C64E49B7B434585EC91EF L_27;
		L_27 = NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisVector3Int_t65CB06F557251D18A37BD71F3655BA836A357376_m68CCE7D85BD452D727A41279CA4D553EE8B627FF(L_25, L_26, 0, NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisVector3Int_t65CB06F557251D18A37BD71F3655BA836A357376_m68CCE7D85BD452D727A41279CA4D553EE8B627FF_RuntimeMethod_var);
		V_5 = L_27;
		V_7 = 0;
		goto IL_00fe;
	}

IL_0089:
	{
		int32_t L_28 = V_7;
		int32_t L_29;
		L_29 = IL2CPP_NATIVEARRAY_GET_ITEM(int32_t, ((&V_3))->___m_Buffer, L_28);
		V_8 = L_29;
		int32_t L_30 = V_7;
		int32_t L_31;
		L_31 = IL2CPP_NATIVEARRAY_GET_ITEM(int32_t, ((&V_4))->___m_Buffer, L_30);
		V_9 = L_31;
		int32_t L_32 = V_7;
		Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376 L_33;
		L_33 = IL2CPP_NATIVEARRAY_GET_ITEM(Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376, ((&V_5))->___m_Buffer, L_32);
		V_10 = L_33;
		int32_t L_34 = V_8;
		V_11 = (bool)((!(((uint32_t)L_34) <= ((uint32_t)0)))? 1 : 0);
		bool L_35 = V_11;
		if (!L_35)
		{
			goto IL_00d1;
		}
	}
	{
		int32_t L_36 = V_8;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_37;
		L_37 = Object_ForceLoadFromInstanceID_mDC03EC6F7745D8194DF5A7A0C50188228F3E95B6(L_36, NULL);
		V_12 = ((TileBase_t07019BD771D35E8EA68118157D6EEE4C770CF0F9*)CastclassClass((RuntimeObject*)L_37, TileBase_t07019BD771D35E8EA68118157D6EEE4C770CF0F9_il2cpp_TypeInfo_var));
		TileBase_t07019BD771D35E8EA68118157D6EEE4C770CF0F9* L_38 = V_12;
		Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376 L_39 = V_10;
		ITilemap_tCD8B9C2D6A80DB1DFE9C934D91EACE6B8A018164* L_40 = ___0_tilemap;
		NullCheck(L_38);
		VirtualActionInvoker2< Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376, ITilemap_tCD8B9C2D6A80DB1DFE9C934D91EACE6B8A018164* >::Invoke(4, L_38, L_39, L_40);
	}

IL_00d1:
	{
		int32_t L_41 = V_9;
		V_13 = (bool)((!(((uint32_t)L_41) <= ((uint32_t)0)))? 1 : 0);
		bool L_42 = V_13;
		if (!L_42)
		{
			goto IL_00f7;
		}
	}
	{
		int32_t L_43 = V_9;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_44;
		L_44 = Object_ForceLoadFromInstanceID_mDC03EC6F7745D8194DF5A7A0C50188228F3E95B6(L_43, NULL);
		V_14 = ((TileBase_t07019BD771D35E8EA68118157D6EEE4C770CF0F9*)CastclassClass((RuntimeObject*)L_44, TileBase_t07019BD771D35E8EA68118157D6EEE4C770CF0F9_il2cpp_TypeInfo_var));
		TileBase_t07019BD771D35E8EA68118157D6EEE4C770CF0F9* L_45 = V_14;
		Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376 L_46 = V_10;
		ITilemap_tCD8B9C2D6A80DB1DFE9C934D91EACE6B8A018164* L_47 = ___0_tilemap;
		NullCheck(L_45);
		VirtualActionInvoker2< Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376, ITilemap_tCD8B9C2D6A80DB1DFE9C934D91EACE6B8A018164* >::Invoke(4, L_45, L_46, L_47);
	}

IL_00f7:
	{
		int32_t L_48 = V_7;
		V_7 = ((int32_t)il2cpp_codegen_add(L_48, 1));
	}

IL_00fe:
	{
		int32_t L_49 = V_7;
		int32_t L_50 = ___1_count;
		V_15 = (bool)((((int32_t)L_49) < ((int32_t)L_50))? 1 : 0);
		bool L_51 = V_15;
		if (L_51)
		{
			goto IL_0089;
		}
	}
	{
		ITilemap_tCD8B9C2D6A80DB1DFE9C934D91EACE6B8A018164* L_52 = ___0_tilemap;
		NullCheck(L_52);
		Tilemap_t18C4166D0AC702D5BFC0C411FA73C4B61D9D1751* L_53 = L_52->___m_Tilemap;
		ITilemap_tCD8B9C2D6A80DB1DFE9C934D91EACE6B8A018164* L_54 = ___0_tilemap;
		NullCheck(L_54);
		NativeArray_1_t245D7224A42D1A32B87C64E49B7B434585EC91EF* L_55 = (NativeArray_1_t245D7224A42D1A32B87C64E49B7B434585EC91EF*)(&L_54->___m_RefreshPos);
		void* L_56 = L_55->___m_Buffer;
		ITilemap_tCD8B9C2D6A80DB1DFE9C934D91EACE6B8A018164* L_57 = ___0_tilemap;
		NullCheck(L_57);
		int32_t L_58 = L_57->___m_RefreshCount;
		NullCheck(L_53);
		Tilemap_RefreshTilesNative_mD73E77DFD7C808A3665CA8389F728CBC08A52232(L_53, L_56, L_58, NULL);
		ITilemap_tCD8B9C2D6A80DB1DFE9C934D91EACE6B8A018164* L_59 = ___0_tilemap;
		NullCheck(L_59);
		NativeArray_1_t245D7224A42D1A32B87C64E49B7B434585EC91EF* L_60 = (NativeArray_1_t245D7224A42D1A32B87C64E49B7B434585EC91EF*)(&L_59->___m_RefreshPos);
		NativeArray_1_Dispose_mAB8B3AE6332BF29F21711643D4FFE57E30E1E055(L_60, NativeArray_1_Dispose_mAB8B3AE6332BF29F21711643D4FFE57E30E1E055_RuntimeMethod_var);
		ITilemap_tCD8B9C2D6A80DB1DFE9C934D91EACE6B8A018164* L_61 = ___0_tilemap;
		NullCheck(L_61);
		L_61->___m_AddToList = (bool)0;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ITilemap_GetAllTileData_m3B6CF200F925322F951314FE8336C581A782F804 (ITilemap_tCD8B9C2D6A80DB1DFE9C934D91EACE6B8A018164* ___0_tilemap, int32_t ___1_count, intptr_t ___2_tilesIntPtr, intptr_t ___3_positionsIntPtr, intptr_t ___4_outTileDataIntPtr, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m5C4C6FA53CA05FE88CA7926E8B1C0DF717B63550_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisTileData_tFB814629D010ABD175127C0BE96FD96EA606E00F_mD61DE9D9D0F7E928CED8EA63A59BD8BE1276D07C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisVector3Int_t65CB06F557251D18A37BD71F3655BA836A357376_m68CCE7D85BD452D727A41279CA4D553EE8B627FF_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TileBase_t07019BD771D35E8EA68118157D6EEE4C770CF0F9_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TileData_tFB814629D010ABD175127C0BE96FD96EA606E00F_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	void* V_0 = NULL;
	void* V_1 = NULL;
	void* V_2 = NULL;
	NativeArray_1_tA833EB7E3E1C9AF82C37976AD964B8D4BAC38B2C V_3;
	memset((&V_3), 0, sizeof(V_3));
	NativeArray_1_t245D7224A42D1A32B87C64E49B7B434585EC91EF V_4;
	memset((&V_4), 0, sizeof(V_4));
	NativeArray_1_t1520D9CD4959D9455C36ED19E490DBDC32B6EF5C V_5;
	memset((&V_5), 0, sizeof(V_5));
	int32_t V_6 = 0;
	TileData_tFB814629D010ABD175127C0BE96FD96EA606E00F V_7;
	memset((&V_7), 0, sizeof(V_7));
	int32_t V_8 = 0;
	bool V_9 = false;
	TileBase_t07019BD771D35E8EA68118157D6EEE4C770CF0F9* V_10 = NULL;
	bool V_11 = false;
	{
		void* L_0;
		L_0 = IntPtr_ToPointer_m1A0612EED3A1C8B8850BE2943CFC42523064B4F6_inline((&___2_tilesIntPtr), NULL);
		V_0 = L_0;
		void* L_1;
		L_1 = IntPtr_ToPointer_m1A0612EED3A1C8B8850BE2943CFC42523064B4F6_inline((&___3_positionsIntPtr), NULL);
		V_1 = L_1;
		void* L_2;
		L_2 = IntPtr_ToPointer_m1A0612EED3A1C8B8850BE2943CFC42523064B4F6_inline((&___4_outTileDataIntPtr), NULL);
		V_2 = L_2;
		void* L_3 = V_0;
		int32_t L_4 = ___1_count;
		NativeArray_1_tA833EB7E3E1C9AF82C37976AD964B8D4BAC38B2C L_5;
		L_5 = NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m5C4C6FA53CA05FE88CA7926E8B1C0DF717B63550(L_3, L_4, 0, NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m5C4C6FA53CA05FE88CA7926E8B1C0DF717B63550_RuntimeMethod_var);
		V_3 = L_5;
		void* L_6 = V_1;
		int32_t L_7 = ___1_count;
		NativeArray_1_t245D7224A42D1A32B87C64E49B7B434585EC91EF L_8;
		L_8 = NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisVector3Int_t65CB06F557251D18A37BD71F3655BA836A357376_m68CCE7D85BD452D727A41279CA4D553EE8B627FF(L_6, L_7, 0, NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisVector3Int_t65CB06F557251D18A37BD71F3655BA836A357376_m68CCE7D85BD452D727A41279CA4D553EE8B627FF_RuntimeMethod_var);
		V_4 = L_8;
		void* L_9 = V_2;
		int32_t L_10 = ___1_count;
		NativeArray_1_t1520D9CD4959D9455C36ED19E490DBDC32B6EF5C L_11;
		L_11 = NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisTileData_tFB814629D010ABD175127C0BE96FD96EA606E00F_mD61DE9D9D0F7E928CED8EA63A59BD8BE1276D07C(L_9, L_10, 0, NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisTileData_tFB814629D010ABD175127C0BE96FD96EA606E00F_mD61DE9D9D0F7E928CED8EA63A59BD8BE1276D07C_RuntimeMethod_var);
		V_5 = L_11;
		V_6 = 0;
		goto IL_0090;
	}

IL_003b:
	{
		il2cpp_codegen_runtime_class_init_inline(TileData_tFB814629D010ABD175127C0BE96FD96EA606E00F_il2cpp_TypeInfo_var);
		TileData_tFB814629D010ABD175127C0BE96FD96EA606E00F L_12 = ((TileData_tFB814629D010ABD175127C0BE96FD96EA606E00F_StaticFields*)il2cpp_codegen_static_fields_for(TileData_tFB814629D010ABD175127C0BE96FD96EA606E00F_il2cpp_TypeInfo_var))->___Default;
		V_7 = L_12;
		int32_t L_13 = V_6;
		int32_t L_14;
		L_14 = IL2CPP_NATIVEARRAY_GET_ITEM(int32_t, ((&V_3))->___m_Buffer, L_13);
		V_8 = L_14;
		int32_t L_15 = V_8;
		V_9 = (bool)((!(((uint32_t)L_15) <= ((uint32_t)0)))? 1 : 0);
		bool L_16 = V_9;
		if (!L_16)
		{
			goto IL_007d;
		}
	}
	{
		int32_t L_17 = V_8;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_18;
		L_18 = Object_ForceLoadFromInstanceID_mDC03EC6F7745D8194DF5A7A0C50188228F3E95B6(L_17, NULL);
		V_10 = ((TileBase_t07019BD771D35E8EA68118157D6EEE4C770CF0F9*)CastclassClass((RuntimeObject*)L_18, TileBase_t07019BD771D35E8EA68118157D6EEE4C770CF0F9_il2cpp_TypeInfo_var));
		TileBase_t07019BD771D35E8EA68118157D6EEE4C770CF0F9* L_19 = V_10;
		int32_t L_20 = V_6;
		Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376 L_21;
		L_21 = IL2CPP_NATIVEARRAY_GET_ITEM(Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376, ((&V_4))->___m_Buffer, L_20);
		ITilemap_tCD8B9C2D6A80DB1DFE9C934D91EACE6B8A018164* L_22 = ___0_tilemap;
		NullCheck(L_19);
		VirtualActionInvoker3< Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376, ITilemap_tCD8B9C2D6A80DB1DFE9C934D91EACE6B8A018164*, TileData_tFB814629D010ABD175127C0BE96FD96EA606E00F* >::Invoke(5, L_19, L_21, L_22, (&V_7));
	}

IL_007d:
	{
		int32_t L_23 = V_6;
		TileData_tFB814629D010ABD175127C0BE96FD96EA606E00F L_24 = V_7;
		IL2CPP_NATIVEARRAY_SET_ITEM(TileData_tFB814629D010ABD175127C0BE96FD96EA606E00F, ((&V_5))->___m_Buffer, L_23, (L_24));
		int32_t L_25 = V_6;
		V_6 = ((int32_t)il2cpp_codegen_add(L_25, 1));
	}

IL_0090:
	{
		int32_t L_26 = V_6;
		int32_t L_27 = ___1_count;
		V_11 = (bool)((((int32_t)L_26) < ((int32_t)L_27))? 1 : 0);
		bool L_28 = V_11;
		if (L_28)
		{
			goto IL_003b;
		}
	}
	{
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* Tile_get_sprite_m3324CBA00505C3C95DA57FC3A6F8B0D5FA2EF553 (Tile_t33119F106CFC3DC767E7D9306A958AAE12133490* __this, const RuntimeMethod* method) 
{
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* V_0 = NULL;
	{
		Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* L_0 = __this->___m_Sprite;
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* L_1 = V_0;
		return L_1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Tile_set_sprite_mD9F351775FDFDFFA0FCC40121B4C54D566052D18 (Tile_t33119F106CFC3DC767E7D9306A958AAE12133490* __this, Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___0_value, const RuntimeMethod* method) 
{
	{
		Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* L_0 = ___0_value;
		__this->___m_Sprite = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_Sprite), (void*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F Tile_get_color_mD50E790F486A1E64757E9471D48BA42FC9ECCE4C (Tile_t33119F106CFC3DC767E7D9306A958AAE12133490* __this, const RuntimeMethod* method) 
{
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_0 = __this->___m_Color;
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_1 = V_0;
		return L_1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Tile_set_color_m9D76C21865CA89F39FF56C112CB13AFD45CD8B69 (Tile_t33119F106CFC3DC767E7D9306A958AAE12133490* __this, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___0_value, const RuntimeMethod* method) 
{
	{
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_0 = ___0_value;
		__this->___m_Color = L_0;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 Tile_get_transform_mFA119A0C353E4E75C92C8BE829C6BDFA40F17643 (Tile_t33119F106CFC3DC767E7D9306A958AAE12133490* __this, const RuntimeMethod* method) 
{
	Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 L_0 = __this->___m_Transform;
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 L_1 = V_0;
		return L_1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Tile_set_transform_m2E46927D29823DBDC3B7B36E013845006075EB02 (Tile_t33119F106CFC3DC767E7D9306A958AAE12133490* __this, Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___0_value, const RuntimeMethod* method) 
{
	{
		Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 L_0 = ___0_value;
		__this->___m_Transform = L_0;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* Tile_get_gameObject_m8B1B09FD1B6B5A0402D63D3AFF139C6078754077 (Tile_t33119F106CFC3DC767E7D9306A958AAE12133490* __this, const RuntimeMethod* method) 
{
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* V_0 = NULL;
	{
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = __this->___m_InstancedGameObject;
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_1 = V_0;
		return L_1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Tile_set_gameObject_mD4C82AFCA4B96D44BE5549CFF9E0F36218A4ECE9 (Tile_t33119F106CFC3DC767E7D9306A958AAE12133490* __this, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___0_value, const RuntimeMethod* method) 
{
	{
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = ___0_value;
		__this->___m_InstancedGameObject = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_InstancedGameObject), (void*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Tile_get_flags_m4AC2E9F8CF43DB83E9F8389EFDF7E6111E5A9806 (Tile_t33119F106CFC3DC767E7D9306A958AAE12133490* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = __this->___m_Flags;
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		int32_t L_1 = V_0;
		return L_1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Tile_set_flags_mE221D85F2B767EC5C3D473266CB7AABD66674DEA (Tile_t33119F106CFC3DC767E7D9306A958AAE12133490* __this, int32_t ___0_value, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___0_value;
		__this->___m_Flags = L_0;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Tile_get_colliderType_mDB7A2E3BEF055617F6AC198841938B79C289E967 (Tile_t33119F106CFC3DC767E7D9306A958AAE12133490* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = __this->___m_ColliderType;
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		int32_t L_1 = V_0;
		return L_1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Tile_set_colliderType_m21E434F55E4CC8AEB867E7FCF88821EFFC9CEB3F (Tile_t33119F106CFC3DC767E7D9306A958AAE12133490* __this, int32_t ___0_value, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___0_value;
		__this->___m_ColliderType = L_0;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Tile_GetTileData_m187B4A0A655AAB70CC8EC203F78E4777ABB96D4E (Tile_t33119F106CFC3DC767E7D9306A958AAE12133490* __this, Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376 ___0_position, ITilemap_tCD8B9C2D6A80DB1DFE9C934D91EACE6B8A018164* ___1_tilemap, TileData_tFB814629D010ABD175127C0BE96FD96EA606E00F* ___2_tileData, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TileData_tFB814629D010ABD175127C0BE96FD96EA606E00F_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		TileData_tFB814629D010ABD175127C0BE96FD96EA606E00F* L_0 = ___2_tileData;
		Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* L_1 = __this->___m_Sprite;
		il2cpp_codegen_runtime_class_init_inline(TileData_tFB814629D010ABD175127C0BE96FD96EA606E00F_il2cpp_TypeInfo_var);
		TileData_set_sprite_m3566544847F9C9C27EDB154324B6FBDB446EFE94(L_0, L_1, NULL);
		TileData_tFB814629D010ABD175127C0BE96FD96EA606E00F* L_2 = ___2_tileData;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_3 = __this->___m_Color;
		TileData_set_color_m5E759823878243A226EF46419FAD7C0CC3D5F40A(L_2, L_3, NULL);
		TileData_tFB814629D010ABD175127C0BE96FD96EA606E00F* L_4 = ___2_tileData;
		Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 L_5 = __this->___m_Transform;
		TileData_set_transform_m71074A780C066292F940002A7165658E9CC01F9F(L_4, L_5, NULL);
		TileData_tFB814629D010ABD175127C0BE96FD96EA606E00F* L_6 = ___2_tileData;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_7 = __this->___m_InstancedGameObject;
		TileData_set_gameObject_m1CE5B2AAAB5BF5AEF36EBAF2BCE23E4D2E5A9E09(L_6, L_7, NULL);
		TileData_tFB814629D010ABD175127C0BE96FD96EA606E00F* L_8 = ___2_tileData;
		int32_t L_9 = __this->___m_Flags;
		TileData_set_flags_mEB46B1364D6DB7F77C2E1E43AFD31381B291BD30(L_8, L_9, NULL);
		TileData_tFB814629D010ABD175127C0BE96FD96EA606E00F* L_10 = ___2_tileData;
		int32_t L_11 = __this->___m_ColliderType;
		TileData_set_colliderType_mE12359ADEF5F42CC0B635DCBAEC3035F0526FA96(L_10, L_11, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Tile__ctor_m1680C25E80E5ACCB156133C14199BD5BFE00EA5E (Tile_t33119F106CFC3DC767E7D9306A958AAE12133490* __this, const RuntimeMethod* method) 
{
	{
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_0;
		L_0 = Color_get_white_m068F5AF879B0FCA584E3693F762EA41BB65532C6_inline(NULL);
		__this->___m_Color = L_0;
		Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 L_1;
		L_1 = Matrix4x4_get_identity_m6568A73831F3E2D587420D20FF423959D7D8AB56_inline(NULL);
		__this->___m_Transform = L_1;
		__this->___m_Flags = 1;
		__this->___m_ColliderType = 1;
		TileBase__ctor_mBFD0A0ACF9DB1F08783B9F3F35D4E61C9205D4A2(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TileBase_RefreshTile_m7302220B588658247D635871B92DBFF7708E2224 (TileBase_t07019BD771D35E8EA68118157D6EEE4C770CF0F9* __this, Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376 ___0_position, ITilemap_tCD8B9C2D6A80DB1DFE9C934D91EACE6B8A018164* ___1_tilemap, const RuntimeMethod* method) 
{
	{
		ITilemap_tCD8B9C2D6A80DB1DFE9C934D91EACE6B8A018164* L_0 = ___1_tilemap;
		Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376 L_1 = ___0_position;
		NullCheck(L_0);
		ITilemap_RefreshTile_m4C4B0A062A13E986BD20AA87F056982D67FAF69D(L_0, L_1, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TileBase_GetTileData_m04B3B474F4DBF88997FF29ABA115A2FFB91BAF81 (TileBase_t07019BD771D35E8EA68118157D6EEE4C770CF0F9* __this, Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376 ___0_position, ITilemap_tCD8B9C2D6A80DB1DFE9C934D91EACE6B8A018164* ___1_tilemap, TileData_tFB814629D010ABD175127C0BE96FD96EA606E00F* ___2_tileData, const RuntimeMethod* method) 
{
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TileData_tFB814629D010ABD175127C0BE96FD96EA606E00F TileBase_GetTileDataNoRef_m657510B6853906E397D8FC7E6F1A8B2DC4B34397 (TileBase_t07019BD771D35E8EA68118157D6EEE4C770CF0F9* __this, Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376 ___0_position, ITilemap_tCD8B9C2D6A80DB1DFE9C934D91EACE6B8A018164* ___1_tilemap, const RuntimeMethod* method) 
{
	TileData_tFB814629D010ABD175127C0BE96FD96EA606E00F V_0;
	memset((&V_0), 0, sizeof(V_0));
	TileData_tFB814629D010ABD175127C0BE96FD96EA606E00F V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		il2cpp_codegen_initobj((&V_0), sizeof(TileData_tFB814629D010ABD175127C0BE96FD96EA606E00F));
		Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376 L_0 = ___0_position;
		ITilemap_tCD8B9C2D6A80DB1DFE9C934D91EACE6B8A018164* L_1 = ___1_tilemap;
		VirtualActionInvoker3< Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376, ITilemap_tCD8B9C2D6A80DB1DFE9C934D91EACE6B8A018164*, TileData_tFB814629D010ABD175127C0BE96FD96EA606E00F* >::Invoke(5, __this, L_0, L_1, (&V_0));
		TileData_tFB814629D010ABD175127C0BE96FD96EA606E00F L_2 = V_0;
		V_1 = L_2;
		goto IL_0018;
	}

IL_0018:
	{
		TileData_tFB814629D010ABD175127C0BE96FD96EA606E00F L_3 = V_1;
		return L_3;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TileBase_GetTileAnimationData_m8E1C84B8BC0B38E978ECEE6C7AD50D7D8BF810FE (TileBase_t07019BD771D35E8EA68118157D6EEE4C770CF0F9* __this, Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376 ___0_position, ITilemap_tCD8B9C2D6A80DB1DFE9C934D91EACE6B8A018164* ___1_tilemap, TileAnimationData_tB7419BC111545576349DD19CAB0DEFD240CAF149* ___2_tileAnimationData, const RuntimeMethod* method) 
{
	bool V_0 = false;
	{
		V_0 = (bool)0;
		goto IL_0005;
	}

IL_0005:
	{
		bool L_0 = V_0;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TileAnimationData_tB7419BC111545576349DD19CAB0DEFD240CAF149 TileBase_GetTileAnimationDataNoRef_m061D2FB92E28E5C2379385827F78C22719287D97 (TileBase_t07019BD771D35E8EA68118157D6EEE4C770CF0F9* __this, Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376 ___0_position, ITilemap_tCD8B9C2D6A80DB1DFE9C934D91EACE6B8A018164* ___1_tilemap, const RuntimeMethod* method) 
{
	TileAnimationData_tB7419BC111545576349DD19CAB0DEFD240CAF149 V_0;
	memset((&V_0), 0, sizeof(V_0));
	TileAnimationData_tB7419BC111545576349DD19CAB0DEFD240CAF149 V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		il2cpp_codegen_initobj((&V_0), sizeof(TileAnimationData_tB7419BC111545576349DD19CAB0DEFD240CAF149));
		Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376 L_0 = ___0_position;
		ITilemap_tCD8B9C2D6A80DB1DFE9C934D91EACE6B8A018164* L_1 = ___1_tilemap;
		bool L_2;
		L_2 = VirtualFuncInvoker3< bool, Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376, ITilemap_tCD8B9C2D6A80DB1DFE9C934D91EACE6B8A018164*, TileAnimationData_tB7419BC111545576349DD19CAB0DEFD240CAF149* >::Invoke(6, __this, L_0, L_1, (&V_0));
		TileAnimationData_tB7419BC111545576349DD19CAB0DEFD240CAF149 L_3 = V_0;
		V_1 = L_3;
		goto IL_0018;
	}

IL_0018:
	{
		TileAnimationData_tB7419BC111545576349DD19CAB0DEFD240CAF149 L_4 = V_1;
		return L_4;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TileBase_GetTileAnimationDataRef_m10D856F55369986224F166E8EEF5633EB8EBA5C3 (TileBase_t07019BD771D35E8EA68118157D6EEE4C770CF0F9* __this, Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376 ___0_position, ITilemap_tCD8B9C2D6A80DB1DFE9C934D91EACE6B8A018164* ___1_tilemap, TileAnimationData_tB7419BC111545576349DD19CAB0DEFD240CAF149* ___2_tileAnimationData, bool* ___3_hasAnimation, const RuntimeMethod* method) 
{
	{
		bool* L_0 = ___3_hasAnimation;
		Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376 L_1 = ___0_position;
		ITilemap_tCD8B9C2D6A80DB1DFE9C934D91EACE6B8A018164* L_2 = ___1_tilemap;
		TileAnimationData_tB7419BC111545576349DD19CAB0DEFD240CAF149* L_3 = ___2_tileAnimationData;
		bool L_4;
		L_4 = VirtualFuncInvoker3< bool, Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376, ITilemap_tCD8B9C2D6A80DB1DFE9C934D91EACE6B8A018164*, TileAnimationData_tB7419BC111545576349DD19CAB0DEFD240CAF149* >::Invoke(6, __this, L_1, L_2, L_3);
		*((int8_t*)L_0) = (int8_t)L_4;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TileBase_StartUp_mBAF37DBB4DCC7BDB384352D93AB609CEB0E2E78B (TileBase_t07019BD771D35E8EA68118157D6EEE4C770CF0F9* __this, Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376 ___0_position, ITilemap_tCD8B9C2D6A80DB1DFE9C934D91EACE6B8A018164* ___1_tilemap, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___2_go, const RuntimeMethod* method) 
{
	bool V_0 = false;
	{
		V_0 = (bool)0;
		goto IL_0005;
	}

IL_0005:
	{
		bool L_0 = V_0;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TileBase_StartUpRef_mB00DB38868F87645811DE4784F57278388FAEEF9 (TileBase_t07019BD771D35E8EA68118157D6EEE4C770CF0F9* __this, Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376 ___0_position, ITilemap_tCD8B9C2D6A80DB1DFE9C934D91EACE6B8A018164* ___1_tilemap, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___2_go, bool* ___3_startUpInvokedByUser, const RuntimeMethod* method) 
{
	{
		bool* L_0 = ___3_startUpInvokedByUser;
		Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376 L_1 = ___0_position;
		ITilemap_tCD8B9C2D6A80DB1DFE9C934D91EACE6B8A018164* L_2 = ___1_tilemap;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_3 = ___2_go;
		bool L_4;
		L_4 = VirtualFuncInvoker3< bool, Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376, ITilemap_tCD8B9C2D6A80DB1DFE9C934D91EACE6B8A018164*, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* >::Invoke(7, __this, L_1, L_2, L_3);
		*((int8_t*)L_0) = (int8_t)L_4;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TileBase__ctor_mBFD0A0ACF9DB1F08783B9F3F35D4E61C9205D4A2 (TileBase_t07019BD771D35E8EA68118157D6EEE4C770CF0F9* __this, const RuntimeMethod* method) 
{
	{
		ScriptableObject__ctor_mD037FDB0B487295EA47F79A4DB1BF1846C9087FF(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Tilemap_add_tilemapTileChanged_mEED794BBD361501749622D5EB6E0362F16F2E100 (Action_2_t2E142A840461CBB0D9C4B088F1310607E995A8A1* ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_2_t2E142A840461CBB0D9C4B088F1310607E995A8A1_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Tilemap_t18C4166D0AC702D5BFC0C411FA73C4B61D9D1751_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Action_2_t2E142A840461CBB0D9C4B088F1310607E995A8A1* V_0 = NULL;
	Action_2_t2E142A840461CBB0D9C4B088F1310607E995A8A1* V_1 = NULL;
	Action_2_t2E142A840461CBB0D9C4B088F1310607E995A8A1* V_2 = NULL;
	{
		Action_2_t2E142A840461CBB0D9C4B088F1310607E995A8A1* L_0 = ((Tilemap_t18C4166D0AC702D5BFC0C411FA73C4B61D9D1751_StaticFields*)il2cpp_codegen_static_fields_for(Tilemap_t18C4166D0AC702D5BFC0C411FA73C4B61D9D1751_il2cpp_TypeInfo_var))->___tilemapTileChanged;
		V_0 = L_0;
	}

IL_0006:
	{
		Action_2_t2E142A840461CBB0D9C4B088F1310607E995A8A1* L_1 = V_0;
		V_1 = L_1;
		Action_2_t2E142A840461CBB0D9C4B088F1310607E995A8A1* L_2 = V_1;
		Action_2_t2E142A840461CBB0D9C4B088F1310607E995A8A1* L_3 = ___0_value;
		Delegate_t* L_4;
		L_4 = Delegate_Combine_m1F725AEF318BE6F0426863490691A6F4606E7D00(L_2, L_3, NULL);
		V_2 = ((Action_2_t2E142A840461CBB0D9C4B088F1310607E995A8A1*)Castclass((RuntimeObject*)L_4, Action_2_t2E142A840461CBB0D9C4B088F1310607E995A8A1_il2cpp_TypeInfo_var));
		Action_2_t2E142A840461CBB0D9C4B088F1310607E995A8A1* L_5 = V_2;
		Action_2_t2E142A840461CBB0D9C4B088F1310607E995A8A1* L_6 = V_1;
		Action_2_t2E142A840461CBB0D9C4B088F1310607E995A8A1* L_7;
		L_7 = InterlockedCompareExchangeImpl<Action_2_t2E142A840461CBB0D9C4B088F1310607E995A8A1*>((&((Tilemap_t18C4166D0AC702D5BFC0C411FA73C4B61D9D1751_StaticFields*)il2cpp_codegen_static_fields_for(Tilemap_t18C4166D0AC702D5BFC0C411FA73C4B61D9D1751_il2cpp_TypeInfo_var))->___tilemapTileChanged), L_5, L_6);
		V_0 = L_7;
		Action_2_t2E142A840461CBB0D9C4B088F1310607E995A8A1* L_8 = V_0;
		Action_2_t2E142A840461CBB0D9C4B088F1310607E995A8A1* L_9 = V_1;
		if ((!(((RuntimeObject*)(Action_2_t2E142A840461CBB0D9C4B088F1310607E995A8A1*)L_8) == ((RuntimeObject*)(Action_2_t2E142A840461CBB0D9C4B088F1310607E995A8A1*)L_9))))
		{
			goto IL_0006;
		}
	}
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Tilemap_remove_tilemapTileChanged_m5C38616AEBA01E6D988E27A8EC0BECDE7AC7F66D (Action_2_t2E142A840461CBB0D9C4B088F1310607E995A8A1* ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_2_t2E142A840461CBB0D9C4B088F1310607E995A8A1_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Tilemap_t18C4166D0AC702D5BFC0C411FA73C4B61D9D1751_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Action_2_t2E142A840461CBB0D9C4B088F1310607E995A8A1* V_0 = NULL;
	Action_2_t2E142A840461CBB0D9C4B088F1310607E995A8A1* V_1 = NULL;
	Action_2_t2E142A840461CBB0D9C4B088F1310607E995A8A1* V_2 = NULL;
	{
		Action_2_t2E142A840461CBB0D9C4B088F1310607E995A8A1* L_0 = ((Tilemap_t18C4166D0AC702D5BFC0C411FA73C4B61D9D1751_StaticFields*)il2cpp_codegen_static_fields_for(Tilemap_t18C4166D0AC702D5BFC0C411FA73C4B61D9D1751_il2cpp_TypeInfo_var))->___tilemapTileChanged;
		V_0 = L_0;
	}

IL_0006:
	{
		Action_2_t2E142A840461CBB0D9C4B088F1310607E995A8A1* L_1 = V_0;
		V_1 = L_1;
		Action_2_t2E142A840461CBB0D9C4B088F1310607E995A8A1* L_2 = V_1;
		Action_2_t2E142A840461CBB0D9C4B088F1310607E995A8A1* L_3 = ___0_value;
		Delegate_t* L_4;
		L_4 = Delegate_Remove_m8B7DD5661308FA972E23CA1CC3FC9CEB355504E3(L_2, L_3, NULL);
		V_2 = ((Action_2_t2E142A840461CBB0D9C4B088F1310607E995A8A1*)Castclass((RuntimeObject*)L_4, Action_2_t2E142A840461CBB0D9C4B088F1310607E995A8A1_il2cpp_TypeInfo_var));
		Action_2_t2E142A840461CBB0D9C4B088F1310607E995A8A1* L_5 = V_2;
		Action_2_t2E142A840461CBB0D9C4B088F1310607E995A8A1* L_6 = V_1;
		Action_2_t2E142A840461CBB0D9C4B088F1310607E995A8A1* L_7;
		L_7 = InterlockedCompareExchangeImpl<Action_2_t2E142A840461CBB0D9C4B088F1310607E995A8A1*>((&((Tilemap_t18C4166D0AC702D5BFC0C411FA73C4B61D9D1751_StaticFields*)il2cpp_codegen_static_fields_for(Tilemap_t18C4166D0AC702D5BFC0C411FA73C4B61D9D1751_il2cpp_TypeInfo_var))->___tilemapTileChanged), L_5, L_6);
		V_0 = L_7;
		Action_2_t2E142A840461CBB0D9C4B088F1310607E995A8A1* L_8 = V_0;
		Action_2_t2E142A840461CBB0D9C4B088F1310607E995A8A1* L_9 = V_1;
		if ((!(((RuntimeObject*)(Action_2_t2E142A840461CBB0D9C4B088F1310607E995A8A1*)L_8) == ((RuntimeObject*)(Action_2_t2E142A840461CBB0D9C4B088F1310607E995A8A1*)L_9))))
		{
			goto IL_0006;
		}
	}
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Tilemap_add_tilemapPositionsChanged_m4870F364AB7AF0C9F0AB10486830041DC6EF627C (Action_2_tC05151F65CF4D95A1C7A5EE21DFEE184110056B2* ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_2_tC05151F65CF4D95A1C7A5EE21DFEE184110056B2_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Tilemap_t18C4166D0AC702D5BFC0C411FA73C4B61D9D1751_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Action_2_tC05151F65CF4D95A1C7A5EE21DFEE184110056B2* V_0 = NULL;
	Action_2_tC05151F65CF4D95A1C7A5EE21DFEE184110056B2* V_1 = NULL;
	Action_2_tC05151F65CF4D95A1C7A5EE21DFEE184110056B2* V_2 = NULL;
	{
		Action_2_tC05151F65CF4D95A1C7A5EE21DFEE184110056B2* L_0 = ((Tilemap_t18C4166D0AC702D5BFC0C411FA73C4B61D9D1751_StaticFields*)il2cpp_codegen_static_fields_for(Tilemap_t18C4166D0AC702D5BFC0C411FA73C4B61D9D1751_il2cpp_TypeInfo_var))->___tilemapPositionsChanged;
		V_0 = L_0;
	}

IL_0006:
	{
		Action_2_tC05151F65CF4D95A1C7A5EE21DFEE184110056B2* L_1 = V_0;
		V_1 = L_1;
		Action_2_tC05151F65CF4D95A1C7A5EE21DFEE184110056B2* L_2 = V_1;
		Action_2_tC05151F65CF4D95A1C7A5EE21DFEE184110056B2* L_3 = ___0_value;
		Delegate_t* L_4;
		L_4 = Delegate_Combine_m1F725AEF318BE6F0426863490691A6F4606E7D00(L_2, L_3, NULL);
		V_2 = ((Action_2_tC05151F65CF4D95A1C7A5EE21DFEE184110056B2*)Castclass((RuntimeObject*)L_4, Action_2_tC05151F65CF4D95A1C7A5EE21DFEE184110056B2_il2cpp_TypeInfo_var));
		Action_2_tC05151F65CF4D95A1C7A5EE21DFEE184110056B2* L_5 = V_2;
		Action_2_tC05151F65CF4D95A1C7A5EE21DFEE184110056B2* L_6 = V_1;
		Action_2_tC05151F65CF4D95A1C7A5EE21DFEE184110056B2* L_7;
		L_7 = InterlockedCompareExchangeImpl<Action_2_tC05151F65CF4D95A1C7A5EE21DFEE184110056B2*>((&((Tilemap_t18C4166D0AC702D5BFC0C411FA73C4B61D9D1751_StaticFields*)il2cpp_codegen_static_fields_for(Tilemap_t18C4166D0AC702D5BFC0C411FA73C4B61D9D1751_il2cpp_TypeInfo_var))->___tilemapPositionsChanged), L_5, L_6);
		V_0 = L_7;
		Action_2_tC05151F65CF4D95A1C7A5EE21DFEE184110056B2* L_8 = V_0;
		Action_2_tC05151F65CF4D95A1C7A5EE21DFEE184110056B2* L_9 = V_1;
		if ((!(((RuntimeObject*)(Action_2_tC05151F65CF4D95A1C7A5EE21DFEE184110056B2*)L_8) == ((RuntimeObject*)(Action_2_tC05151F65CF4D95A1C7A5EE21DFEE184110056B2*)L_9))))
		{
			goto IL_0006;
		}
	}
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Tilemap_remove_tilemapPositionsChanged_mA60BF9DFD34C66C03EF5510E1E6BF0B80DA70B39 (Action_2_tC05151F65CF4D95A1C7A5EE21DFEE184110056B2* ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_2_tC05151F65CF4D95A1C7A5EE21DFEE184110056B2_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Tilemap_t18C4166D0AC702D5BFC0C411FA73C4B61D9D1751_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Action_2_tC05151F65CF4D95A1C7A5EE21DFEE184110056B2* V_0 = NULL;
	Action_2_tC05151F65CF4D95A1C7A5EE21DFEE184110056B2* V_1 = NULL;
	Action_2_tC05151F65CF4D95A1C7A5EE21DFEE184110056B2* V_2 = NULL;
	{
		Action_2_tC05151F65CF4D95A1C7A5EE21DFEE184110056B2* L_0 = ((Tilemap_t18C4166D0AC702D5BFC0C411FA73C4B61D9D1751_StaticFields*)il2cpp_codegen_static_fields_for(Tilemap_t18C4166D0AC702D5BFC0C411FA73C4B61D9D1751_il2cpp_TypeInfo_var))->___tilemapPositionsChanged;
		V_0 = L_0;
	}

IL_0006:
	{
		Action_2_tC05151F65CF4D95A1C7A5EE21DFEE184110056B2* L_1 = V_0;
		V_1 = L_1;
		Action_2_tC05151F65CF4D95A1C7A5EE21DFEE184110056B2* L_2 = V_1;
		Action_2_tC05151F65CF4D95A1C7A5EE21DFEE184110056B2* L_3 = ___0_value;
		Delegate_t* L_4;
		L_4 = Delegate_Remove_m8B7DD5661308FA972E23CA1CC3FC9CEB355504E3(L_2, L_3, NULL);
		V_2 = ((Action_2_tC05151F65CF4D95A1C7A5EE21DFEE184110056B2*)Castclass((RuntimeObject*)L_4, Action_2_tC05151F65CF4D95A1C7A5EE21DFEE184110056B2_il2cpp_TypeInfo_var));
		Action_2_tC05151F65CF4D95A1C7A5EE21DFEE184110056B2* L_5 = V_2;
		Action_2_tC05151F65CF4D95A1C7A5EE21DFEE184110056B2* L_6 = V_1;
		Action_2_tC05151F65CF4D95A1C7A5EE21DFEE184110056B2* L_7;
		L_7 = InterlockedCompareExchangeImpl<Action_2_tC05151F65CF4D95A1C7A5EE21DFEE184110056B2*>((&((Tilemap_t18C4166D0AC702D5BFC0C411FA73C4B61D9D1751_StaticFields*)il2cpp_codegen_static_fields_for(Tilemap_t18C4166D0AC702D5BFC0C411FA73C4B61D9D1751_il2cpp_TypeInfo_var))->___tilemapPositionsChanged), L_5, L_6);
		V_0 = L_7;
		Action_2_tC05151F65CF4D95A1C7A5EE21DFEE184110056B2* L_8 = V_0;
		Action_2_tC05151F65CF4D95A1C7A5EE21DFEE184110056B2* L_9 = V_1;
		if ((!(((RuntimeObject*)(Action_2_tC05151F65CF4D95A1C7A5EE21DFEE184110056B2*)L_8) == ((RuntimeObject*)(Action_2_tC05151F65CF4D95A1C7A5EE21DFEE184110056B2*)L_9))))
		{
			goto IL_0006;
		}
	}
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Tilemap_add_loopEndedForTileAnimation_m4854DD8D6415BA214AD6B91CDAC8D4F8EDAF7733 (Action_2_tC05151F65CF4D95A1C7A5EE21DFEE184110056B2* ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_2_tC05151F65CF4D95A1C7A5EE21DFEE184110056B2_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Tilemap_t18C4166D0AC702D5BFC0C411FA73C4B61D9D1751_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Action_2_tC05151F65CF4D95A1C7A5EE21DFEE184110056B2* V_0 = NULL;
	Action_2_tC05151F65CF4D95A1C7A5EE21DFEE184110056B2* V_1 = NULL;
	Action_2_tC05151F65CF4D95A1C7A5EE21DFEE184110056B2* V_2 = NULL;
	{
		Action_2_tC05151F65CF4D95A1C7A5EE21DFEE184110056B2* L_0 = ((Tilemap_t18C4166D0AC702D5BFC0C411FA73C4B61D9D1751_StaticFields*)il2cpp_codegen_static_fields_for(Tilemap_t18C4166D0AC702D5BFC0C411FA73C4B61D9D1751_il2cpp_TypeInfo_var))->___loopEndedForTileAnimation;
		V_0 = L_0;
	}

IL_0006:
	{
		Action_2_tC05151F65CF4D95A1C7A5EE21DFEE184110056B2* L_1 = V_0;
		V_1 = L_1;
		Action_2_tC05151F65CF4D95A1C7A5EE21DFEE184110056B2* L_2 = V_1;
		Action_2_tC05151F65CF4D95A1C7A5EE21DFEE184110056B2* L_3 = ___0_value;
		Delegate_t* L_4;
		L_4 = Delegate_Combine_m1F725AEF318BE6F0426863490691A6F4606E7D00(L_2, L_3, NULL);
		V_2 = ((Action_2_tC05151F65CF4D95A1C7A5EE21DFEE184110056B2*)Castclass((RuntimeObject*)L_4, Action_2_tC05151F65CF4D95A1C7A5EE21DFEE184110056B2_il2cpp_TypeInfo_var));
		Action_2_tC05151F65CF4D95A1C7A5EE21DFEE184110056B2* L_5 = V_2;
		Action_2_tC05151F65CF4D95A1C7A5EE21DFEE184110056B2* L_6 = V_1;
		Action_2_tC05151F65CF4D95A1C7A5EE21DFEE184110056B2* L_7;
		L_7 = InterlockedCompareExchangeImpl<Action_2_tC05151F65CF4D95A1C7A5EE21DFEE184110056B2*>((&((Tilemap_t18C4166D0AC702D5BFC0C411FA73C4B61D9D1751_StaticFields*)il2cpp_codegen_static_fields_for(Tilemap_t18C4166D0AC702D5BFC0C411FA73C4B61D9D1751_il2cpp_TypeInfo_var))->___loopEndedForTileAnimation), L_5, L_6);
		V_0 = L_7;
		Action_2_tC05151F65CF4D95A1C7A5EE21DFEE184110056B2* L_8 = V_0;
		Action_2_tC05151F65CF4D95A1C7A5EE21DFEE184110056B2* L_9 = V_1;
		if ((!(((RuntimeObject*)(Action_2_tC05151F65CF4D95A1C7A5EE21DFEE184110056B2*)L_8) == ((RuntimeObject*)(Action_2_tC05151F65CF4D95A1C7A5EE21DFEE184110056B2*)L_9))))
		{
			goto IL_0006;
		}
	}
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Tilemap_remove_loopEndedForTileAnimation_m623511A1793CC58005B5CE9AB515A24695E8C243 (Action_2_tC05151F65CF4D95A1C7A5EE21DFEE184110056B2* ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_2_tC05151F65CF4D95A1C7A5EE21DFEE184110056B2_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Tilemap_t18C4166D0AC702D5BFC0C411FA73C4B61D9D1751_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Action_2_tC05151F65CF4D95A1C7A5EE21DFEE184110056B2* V_0 = NULL;
	Action_2_tC05151F65CF4D95A1C7A5EE21DFEE184110056B2* V_1 = NULL;
	Action_2_tC05151F65CF4D95A1C7A5EE21DFEE184110056B2* V_2 = NULL;
	{
		Action_2_tC05151F65CF4D95A1C7A5EE21DFEE184110056B2* L_0 = ((Tilemap_t18C4166D0AC702D5BFC0C411FA73C4B61D9D1751_StaticFields*)il2cpp_codegen_static_fields_for(Tilemap_t18C4166D0AC702D5BFC0C411FA73C4B61D9D1751_il2cpp_TypeInfo_var))->___loopEndedForTileAnimation;
		V_0 = L_0;
	}

IL_0006:
	{
		Action_2_tC05151F65CF4D95A1C7A5EE21DFEE184110056B2* L_1 = V_0;
		V_1 = L_1;
		Action_2_tC05151F65CF4D95A1C7A5EE21DFEE184110056B2* L_2 = V_1;
		Action_2_tC05151F65CF4D95A1C7A5EE21DFEE184110056B2* L_3 = ___0_value;
		Delegate_t* L_4;
		L_4 = Delegate_Remove_m8B7DD5661308FA972E23CA1CC3FC9CEB355504E3(L_2, L_3, NULL);
		V_2 = ((Action_2_tC05151F65CF4D95A1C7A5EE21DFEE184110056B2*)Castclass((RuntimeObject*)L_4, Action_2_tC05151F65CF4D95A1C7A5EE21DFEE184110056B2_il2cpp_TypeInfo_var));
		Action_2_tC05151F65CF4D95A1C7A5EE21DFEE184110056B2* L_5 = V_2;
		Action_2_tC05151F65CF4D95A1C7A5EE21DFEE184110056B2* L_6 = V_1;
		Action_2_tC05151F65CF4D95A1C7A5EE21DFEE184110056B2* L_7;
		L_7 = InterlockedCompareExchangeImpl<Action_2_tC05151F65CF4D95A1C7A5EE21DFEE184110056B2*>((&((Tilemap_t18C4166D0AC702D5BFC0C411FA73C4B61D9D1751_StaticFields*)il2cpp_codegen_static_fields_for(Tilemap_t18C4166D0AC702D5BFC0C411FA73C4B61D9D1751_il2cpp_TypeInfo_var))->___loopEndedForTileAnimation), L_5, L_6);
		V_0 = L_7;
		Action_2_tC05151F65CF4D95A1C7A5EE21DFEE184110056B2* L_8 = V_0;
		Action_2_tC05151F65CF4D95A1C7A5EE21DFEE184110056B2* L_9 = V_1;
		if ((!(((RuntimeObject*)(Action_2_tC05151F65CF4D95A1C7A5EE21DFEE184110056B2*)L_8) == ((RuntimeObject*)(Action_2_tC05151F65CF4D95A1C7A5EE21DFEE184110056B2*)L_9))))
		{
			goto IL_0006;
		}
	}
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Tilemap_get_bufferSyncTile_m5506F240CC262FD454CFF9B547F16530F9506B1D (Tilemap_t18C4166D0AC702D5BFC0C411FA73C4B61D9D1751* __this, const RuntimeMethod* method) 
{
	bool V_0 = false;
	{
		bool L_0 = __this->___m_BufferSyncTile;
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		bool L_1 = V_0;
		return L_1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Tilemap_set_bufferSyncTile_m45F411D20BA3FBDDDAE1E569F274F24638A45758 (Tilemap_t18C4166D0AC702D5BFC0C411FA73C4B61D9D1751* __this, bool ___0_value, const RuntimeMethod* method) 
{
	bool V_0 = false;
	int32_t G_B4_0 = 0;
	{
		bool L_0 = ___0_value;
		if (L_0)
		{
			goto IL_0014;
		}
	}
	{
		bool L_1 = __this->___m_BufferSyncTile;
		bool L_2 = ___0_value;
		if ((((int32_t)L_1) == ((int32_t)L_2)))
		{
			goto IL_0014;
		}
	}
	{
		bool L_3;
		L_3 = Tilemap_HasSyncTileCallback_m522AE13C1DEBDDA7EBC7C9BAF1302EB75EF3A0EB(NULL);
		G_B4_0 = ((int32_t)(L_3));
		goto IL_0015;
	}

IL_0014:
	{
		G_B4_0 = 0;
	}

IL_0015:
	{
		V_0 = (bool)G_B4_0;
		bool L_4 = V_0;
		if (!L_4)
		{
			goto IL_0020;
		}
	}
	{
		Tilemap_SendAndClearSyncTileBuffer_m08E46EDA97D453F5A365E3DC1BBEBB6F74301067(__this, NULL);
	}

IL_0020:
	{
		bool L_5 = ___0_value;
		__this->___m_BufferSyncTile = L_5;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Tilemap_HasLoopEndedForTileAnimationCallback_m6A4AA954E8521E7BFC71B0A44B60DFDE7F7F51BD (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Tilemap_t18C4166D0AC702D5BFC0C411FA73C4B61D9D1751_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		Action_2_tC05151F65CF4D95A1C7A5EE21DFEE184110056B2* L_0 = ((Tilemap_t18C4166D0AC702D5BFC0C411FA73C4B61D9D1751_StaticFields*)il2cpp_codegen_static_fields_for(Tilemap_t18C4166D0AC702D5BFC0C411FA73C4B61D9D1751_il2cpp_TypeInfo_var))->___loopEndedForTileAnimation;
		V_0 = (bool)((!(((RuntimeObject*)(Action_2_tC05151F65CF4D95A1C7A5EE21DFEE184110056B2*)L_0) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		goto IL_000c;
	}

IL_000c:
	{
		bool L_1 = V_0;
		return L_1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Tilemap_HandleLoopEndedForTileAnimationCallback_m7BA8FF295BA812311BF3854DB2978EAE03B2F9C1 (Tilemap_t18C4166D0AC702D5BFC0C411FA73C4B61D9D1751* __this, int32_t ___0_count, intptr_t ___1_positionsIntPtr, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisVector3Int_t65CB06F557251D18A37BD71F3655BA836A357376_m68CCE7D85BD452D727A41279CA4D553EE8B627FF_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	void* V_0 = NULL;
	NativeArray_1_t245D7224A42D1A32B87C64E49B7B434585EC91EF V_1;
	memset((&V_1), 0, sizeof(V_1));
	bool V_2 = false;
	{
		bool L_0;
		L_0 = Tilemap_HasLoopEndedForTileAnimationCallback_m6A4AA954E8521E7BFC71B0A44B60DFDE7F7F51BD(NULL);
		V_2 = (bool)((((int32_t)L_0) == ((int32_t)0))? 1 : 0);
		bool L_1 = V_2;
		if (!L_1)
		{
			goto IL_000f;
		}
	}
	{
		goto IL_0028;
	}

IL_000f:
	{
		void* L_2;
		L_2 = IntPtr_ToPointer_m1A0612EED3A1C8B8850BE2943CFC42523064B4F6_inline((&___1_positionsIntPtr), NULL);
		V_0 = L_2;
		void* L_3 = V_0;
		int32_t L_4 = ___0_count;
		NativeArray_1_t245D7224A42D1A32B87C64E49B7B434585EC91EF L_5;
		L_5 = NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisVector3Int_t65CB06F557251D18A37BD71F3655BA836A357376_m68CCE7D85BD452D727A41279CA4D553EE8B627FF(L_3, L_4, 0, NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisVector3Int_t65CB06F557251D18A37BD71F3655BA836A357376_m68CCE7D85BD452D727A41279CA4D553EE8B627FF_RuntimeMethod_var);
		V_1 = L_5;
		NativeArray_1_t245D7224A42D1A32B87C64E49B7B434585EC91EF L_6 = V_1;
		Tilemap_SendLoopEndedForTileAnimationCallback_m8D1E624097F94B218E9675EC3AA121C0F22CB6BA(__this, L_6, NULL);
	}

IL_0028:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Tilemap_SendLoopEndedForTileAnimationCallback_m8D1E624097F94B218E9675EC3AA121C0F22CB6BA (Tilemap_t18C4166D0AC702D5BFC0C411FA73C4B61D9D1751* __this, NativeArray_1_t245D7224A42D1A32B87C64E49B7B434585EC91EF ___0_positions, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Tilemap_t18C4166D0AC702D5BFC0C411FA73C4B61D9D1751_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Exception_t* V_0 = NULL;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	{
	}
	try
	{
		Action_2_tC05151F65CF4D95A1C7A5EE21DFEE184110056B2* L_0 = ((Tilemap_t18C4166D0AC702D5BFC0C411FA73C4B61D9D1751_StaticFields*)il2cpp_codegen_static_fields_for(Tilemap_t18C4166D0AC702D5BFC0C411FA73C4B61D9D1751_il2cpp_TypeInfo_var))->___loopEndedForTileAnimation;
		NativeArray_1_t245D7224A42D1A32B87C64E49B7B434585EC91EF L_1 = ___0_positions;
		NullCheck(L_0);
		Action_2_Invoke_m63AB8CDF184F8712FFDF64CD49CFAFF2FC9DF03D_inline(L_0, __this, L_1, NULL);
		goto IL_001f;
	}
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0012;
		}
		throw e;
	}

CATCH_0012:
	{
		Exception_t* L_2 = ((Exception_t*)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t*));;
		V_0 = L_2;
		Exception_t* L_3 = V_0;
		il2cpp_codegen_runtime_class_init_inline(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var)));
		Debug_LogException_mD4CF3A9C64D8D4BA0570D529E705D134A9A5E498(L_3, __this, NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION(Exception_t*);
		goto IL_001f;
	}

IL_001f:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Tilemap_HasSyncTileCallback_m522AE13C1DEBDDA7EBC7C9BAF1302EB75EF3A0EB (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Tilemap_t18C4166D0AC702D5BFC0C411FA73C4B61D9D1751_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		Action_2_t2E142A840461CBB0D9C4B088F1310607E995A8A1* L_0 = ((Tilemap_t18C4166D0AC702D5BFC0C411FA73C4B61D9D1751_StaticFields*)il2cpp_codegen_static_fields_for(Tilemap_t18C4166D0AC702D5BFC0C411FA73C4B61D9D1751_il2cpp_TypeInfo_var))->___tilemapTileChanged;
		V_0 = (bool)((!(((RuntimeObject*)(Action_2_t2E142A840461CBB0D9C4B088F1310607E995A8A1*)L_0) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		goto IL_000c;
	}

IL_000c:
	{
		bool L_1 = V_0;
		return L_1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Tilemap_HasPositionsChangedCallback_mD02A9A567086C4F60CA7B4733EAFD173289857FF (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Tilemap_t18C4166D0AC702D5BFC0C411FA73C4B61D9D1751_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		Action_2_tC05151F65CF4D95A1C7A5EE21DFEE184110056B2* L_0 = ((Tilemap_t18C4166D0AC702D5BFC0C411FA73C4B61D9D1751_StaticFields*)il2cpp_codegen_static_fields_for(Tilemap_t18C4166D0AC702D5BFC0C411FA73C4B61D9D1751_il2cpp_TypeInfo_var))->___tilemapPositionsChanged;
		V_0 = (bool)((!(((RuntimeObject*)(Action_2_tC05151F65CF4D95A1C7A5EE21DFEE184110056B2*)L_0) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		goto IL_000c;
	}

IL_000c:
	{
		bool L_1 = V_0;
		return L_1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Tilemap_HandleSyncTileCallback_mF1D8059E6F8ED90041313259D5DCFC3DBEB8750A (Tilemap_t18C4166D0AC702D5BFC0C411FA73C4B61D9D1751* __this, SyncTileU5BU5D_t9B4B242D002401F11525388BC75BDAB6A45714FF* ___0_syncTiles, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Tilemap_t18C4166D0AC702D5BFC0C411FA73C4B61D9D1751_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		Action_2_t2E142A840461CBB0D9C4B088F1310607E995A8A1* L_0 = ((Tilemap_t18C4166D0AC702D5BFC0C411FA73C4B61D9D1751_StaticFields*)il2cpp_codegen_static_fields_for(Tilemap_t18C4166D0AC702D5BFC0C411FA73C4B61D9D1751_il2cpp_TypeInfo_var))->___tilemapTileChanged;
		V_0 = (bool)((((RuntimeObject*)(Action_2_t2E142A840461CBB0D9C4B088F1310607E995A8A1*)L_0) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_000f;
		}
	}
	{
		goto IL_0017;
	}

IL_000f:
	{
		SyncTileU5BU5D_t9B4B242D002401F11525388BC75BDAB6A45714FF* L_2 = ___0_syncTiles;
		Tilemap_SendTilemapTileChangedCallback_m66E5D12B134C48E57EF4C1B29658CD61B75366EF(__this, L_2, NULL);
	}

IL_0017:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Tilemap_HandlePositionsChangedCallback_mCEC3B01A5328F6C83163C25CE9EDCD87E5895CD0 (Tilemap_t18C4166D0AC702D5BFC0C411FA73C4B61D9D1751* __this, int32_t ___0_count, intptr_t ___1_positionsIntPtr, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisVector3Int_t65CB06F557251D18A37BD71F3655BA836A357376_m68CCE7D85BD452D727A41279CA4D553EE8B627FF_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	void* V_0 = NULL;
	NativeArray_1_t245D7224A42D1A32B87C64E49B7B434585EC91EF V_1;
	memset((&V_1), 0, sizeof(V_1));
	bool V_2 = false;
	{
		bool L_0;
		L_0 = Tilemap_HasPositionsChangedCallback_mD02A9A567086C4F60CA7B4733EAFD173289857FF(NULL);
		V_2 = (bool)((((int32_t)L_0) == ((int32_t)0))? 1 : 0);
		bool L_1 = V_2;
		if (!L_1)
		{
			goto IL_000f;
		}
	}
	{
		goto IL_0028;
	}

IL_000f:
	{
		void* L_2;
		L_2 = IntPtr_ToPointer_m1A0612EED3A1C8B8850BE2943CFC42523064B4F6_inline((&___1_positionsIntPtr), NULL);
		V_0 = L_2;
		void* L_3 = V_0;
		int32_t L_4 = ___0_count;
		NativeArray_1_t245D7224A42D1A32B87C64E49B7B434585EC91EF L_5;
		L_5 = NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisVector3Int_t65CB06F557251D18A37BD71F3655BA836A357376_m68CCE7D85BD452D727A41279CA4D553EE8B627FF(L_3, L_4, 0, NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisVector3Int_t65CB06F557251D18A37BD71F3655BA836A357376_m68CCE7D85BD452D727A41279CA4D553EE8B627FF_RuntimeMethod_var);
		V_1 = L_5;
		NativeArray_1_t245D7224A42D1A32B87C64E49B7B434585EC91EF L_6 = V_1;
		Tilemap_SendTilemapPositionsChangedCallback_m8F1D0E0F18A797349A83465F5E68DF01972D75D4(__this, L_6, NULL);
	}

IL_0028:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Tilemap_SendTilemapTileChangedCallback_m66E5D12B134C48E57EF4C1B29658CD61B75366EF (Tilemap_t18C4166D0AC702D5BFC0C411FA73C4B61D9D1751* __this, SyncTileU5BU5D_t9B4B242D002401F11525388BC75BDAB6A45714FF* ___0_syncTiles, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Tilemap_t18C4166D0AC702D5BFC0C411FA73C4B61D9D1751_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Exception_t* V_0 = NULL;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	{
	}
	try
	{
		Action_2_t2E142A840461CBB0D9C4B088F1310607E995A8A1* L_0 = ((Tilemap_t18C4166D0AC702D5BFC0C411FA73C4B61D9D1751_StaticFields*)il2cpp_codegen_static_fields_for(Tilemap_t18C4166D0AC702D5BFC0C411FA73C4B61D9D1751_il2cpp_TypeInfo_var))->___tilemapTileChanged;
		SyncTileU5BU5D_t9B4B242D002401F11525388BC75BDAB6A45714FF* L_1 = ___0_syncTiles;
		NullCheck(L_0);
		Action_2_Invoke_m66A9645921ABEA3CFC0BB0DB828D756440BDF41D_inline(L_0, __this, L_1, NULL);
		goto IL_001f;
	}
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0012;
		}
		throw e;
	}

CATCH_0012:
	{
		Exception_t* L_2 = ((Exception_t*)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t*));;
		V_0 = L_2;
		Exception_t* L_3 = V_0;
		il2cpp_codegen_runtime_class_init_inline(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var)));
		Debug_LogException_mD4CF3A9C64D8D4BA0570D529E705D134A9A5E498(L_3, __this, NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION(Exception_t*);
		goto IL_001f;
	}

IL_001f:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Tilemap_SendTilemapPositionsChangedCallback_m8F1D0E0F18A797349A83465F5E68DF01972D75D4 (Tilemap_t18C4166D0AC702D5BFC0C411FA73C4B61D9D1751* __this, NativeArray_1_t245D7224A42D1A32B87C64E49B7B434585EC91EF ___0_positions, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Tilemap_t18C4166D0AC702D5BFC0C411FA73C4B61D9D1751_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Exception_t* V_0 = NULL;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	{
	}
	try
	{
		Action_2_tC05151F65CF4D95A1C7A5EE21DFEE184110056B2* L_0 = ((Tilemap_t18C4166D0AC702D5BFC0C411FA73C4B61D9D1751_StaticFields*)il2cpp_codegen_static_fields_for(Tilemap_t18C4166D0AC702D5BFC0C411FA73C4B61D9D1751_il2cpp_TypeInfo_var))->___tilemapPositionsChanged;
		NativeArray_1_t245D7224A42D1A32B87C64E49B7B434585EC91EF L_1 = ___0_positions;
		NullCheck(L_0);
		Action_2_Invoke_m63AB8CDF184F8712FFDF64CD49CFAFF2FC9DF03D_inline(L_0, __this, L_1, NULL);
		goto IL_001f;
	}
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0012;
		}
		throw e;
	}

CATCH_0012:
	{
		Exception_t* L_2 = ((Exception_t*)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t*));;
		V_0 = L_2;
		Exception_t* L_3 = V_0;
		il2cpp_codegen_runtime_class_init_inline(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var)));
		Debug_LogException_mD4CF3A9C64D8D4BA0570D529E705D134A9A5E498(L_3, __this, NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION(Exception_t*);
		goto IL_001f;
	}

IL_001f:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Tilemap_SetSyncTileCallback_mCC1B70B13C24FE10FEBBCB4EC00CD4A89310A7D7 (Action_2_t2E142A840461CBB0D9C4B088F1310607E995A8A1* ___0_callback, const RuntimeMethod* method) 
{
	{
		Action_2_t2E142A840461CBB0D9C4B088F1310607E995A8A1* L_0 = ___0_callback;
		Tilemap_add_tilemapTileChanged_mEED794BBD361501749622D5EB6E0362F16F2E100(L_0, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Tilemap_RemoveSyncTileCallback_m84CC8497745CE12E2F39EE72D6BF10405DC3DC15 (Action_2_t2E142A840461CBB0D9C4B088F1310607E995A8A1* ___0_callback, const RuntimeMethod* method) 
{
	{
		Action_2_t2E142A840461CBB0D9C4B088F1310607E995A8A1* L_0 = ___0_callback;
		Tilemap_remove_tilemapTileChanged_m5C38616AEBA01E6D988E27A8EC0BECDE7AC7F66D(L_0, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Grid_t4C0ACF986206D18240E35155E01B5A97DAA651FE* Tilemap_get_layoutGrid_m84B3A21E3E9744E83DBD07448DBD8C01CE0E257E (Tilemap_t18C4166D0AC702D5BFC0C411FA73C4B61D9D1751* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MarshalledUnityObject_MarshalNotNull_TisTilemap_t18C4166D0AC702D5BFC0C411FA73C4B61D9D1751_m82D224678369601467142F86AEE1B6684056544D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Unmarshal_UnmarshalUnityObject_TisGrid_t4C0ACF986206D18240E35155E01B5A97DAA651FE_mB3EAF529CC1C671A1129F570DEB6DA256E2E4B4E_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	intptr_t G_B2_0;
	memset((&G_B2_0), 0, sizeof(G_B2_0));
	intptr_t G_B1_0;
	memset((&G_B1_0), 0, sizeof(G_B1_0));
	{
		intptr_t L_0;
		L_0 = MarshalledUnityObject_MarshalNotNull_TisTilemap_t18C4166D0AC702D5BFC0C411FA73C4B61D9D1751_m82D224678369601467142F86AEE1B6684056544D_inline(__this, MarshalledUnityObject_MarshalNotNull_TisTilemap_t18C4166D0AC702D5BFC0C411FA73C4B61D9D1751_m82D224678369601467142F86AEE1B6684056544D_RuntimeMethod_var);
		intptr_t L_1 = L_0;
		if (L_1)
		{
			G_B2_0 = L_1;
			goto IL_000f;
		}
		G_B1_0 = L_1;
	}
	{
		ThrowHelper_ThrowNullReferenceException_mA9C7629D32240EE0218631933DAC647668CA63CF(__this, NULL);
		G_B2_0 = G_B1_0;
	}

IL_000f:
	{
		intptr_t L_2;
		L_2 = Tilemap_get_layoutGrid_Injected_m97844AF3F6F465A1751C66C700C0AD7533816CE5(G_B2_0, NULL);
		Grid_t4C0ACF986206D18240E35155E01B5A97DAA651FE* L_3;
		L_3 = Unmarshal_UnmarshalUnityObject_TisGrid_t4C0ACF986206D18240E35155E01B5A97DAA651FE_mB3EAF529CC1C671A1129F570DEB6DA256E2E4B4E_inline(L_2, Unmarshal_UnmarshalUnityObject_TisGrid_t4C0ACF986206D18240E35155E01B5A97DAA651FE_mB3EAF529CC1C671A1129F570DEB6DA256E2E4B4E_RuntimeMethod_var);
		return L_3;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Tilemap_GetCellCenterLocal_m108918F862E23ECE7B0ED7AF2CF21A767F52124A (Tilemap_t18C4166D0AC702D5BFC0C411FA73C4B61D9D1751* __this, Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376 ___0_position, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376 L_0 = ___0_position;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1;
		L_1 = Vector3Int_op_Implicit_m13297B1F6D07F1E46C0627EAAB8413E637FCA442_inline(L_0, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2;
		L_2 = GridLayout_CellToLocalInterpolated_mE1FC35F36111BD0881573C6F51C37239BF3BD621(__this, L_1, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3;
		L_3 = Tilemap_get_tileAnchor_mD3C7F2A024DC43019CEB93682307ED41EC3329E4(__this, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4;
		L_4 = GridLayout_CellToLocalInterpolated_mE1FC35F36111BD0881573C6F51C37239BF3BD621(__this, L_3, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_5;
		L_5 = Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline(L_2, L_4, NULL);
		V_0 = L_5;
		goto IL_0021;
	}

IL_0021:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = V_0;
		return L_6;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Tilemap_GetCellCenterWorld_m567FBE8E0822C9A75681D3B95AD9FDDF3C43A4F3 (Tilemap_t18C4166D0AC702D5BFC0C411FA73C4B61D9D1751* __this, Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376 ___0_position, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376 L_0 = ___0_position;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1;
		L_1 = Vector3Int_op_Implicit_m13297B1F6D07F1E46C0627EAAB8413E637FCA442_inline(L_0, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2;
		L_2 = GridLayout_CellToLocalInterpolated_mE1FC35F36111BD0881573C6F51C37239BF3BD621(__this, L_1, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3;
		L_3 = Tilemap_get_tileAnchor_mD3C7F2A024DC43019CEB93682307ED41EC3329E4(__this, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4;
		L_4 = GridLayout_CellToLocalInterpolated_mE1FC35F36111BD0881573C6F51C37239BF3BD621(__this, L_3, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_5;
		L_5 = Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline(L_2, L_4, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6;
		L_6 = GridLayout_LocalToWorld_m4714A4DAF4FF9545E9CCB3A8ACB5731A498D9CA6(__this, L_5, NULL);
		V_0 = L_6;
		goto IL_0027;
	}

IL_0027:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_7 = V_0;
		return L_7;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BoundsInt_t4E757DE5EFF9FCB42000F173360DDC63B5585485 Tilemap_get_cellBounds_m2C1EDCFFD145175A83457B4F7A88CEA037DF8EB9 (Tilemap_t18C4166D0AC702D5BFC0C411FA73C4B61D9D1751* __this, const RuntimeMethod* method) 
{
	BoundsInt_t4E757DE5EFF9FCB42000F173360DDC63B5585485 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376 L_0;
		L_0 = Tilemap_get_origin_mB5E10582CFAA76144BB44DECAADB84E904D02E55(__this, NULL);
		Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376 L_1;
		L_1 = Tilemap_get_size_m8B9F0C2CC3CD37626AE921047DA5DC239B3F00EA(__this, NULL);
		BoundsInt_t4E757DE5EFF9FCB42000F173360DDC63B5585485 L_2;
		memset((&L_2), 0, sizeof(L_2));
		BoundsInt__ctor_m93F7EDF326B3BA01465FA229F6CEED0ED48D32FF_inline((&L_2), L_0, L_1, NULL);
		V_0 = L_2;
		goto IL_0015;
	}

IL_0015:
	{
		BoundsInt_t4E757DE5EFF9FCB42000F173360DDC63B5585485 L_3 = V_0;
		return L_3;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3 Tilemap_get_localBounds_m6188638F4F369F32E16D25AB71AFC41691A95342 (Tilemap_t18C4166D0AC702D5BFC0C411FA73C4B61D9D1751* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MarshalledUnityObject_MarshalNotNull_TisTilemap_t18C4166D0AC702D5BFC0C411FA73C4B61D9D1751_m82D224678369601467142F86AEE1B6684056544D_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3 V_0;
	memset((&V_0), 0, sizeof(V_0));
	intptr_t G_B2_0;
	memset((&G_B2_0), 0, sizeof(G_B2_0));
	intptr_t G_B1_0;
	memset((&G_B1_0), 0, sizeof(G_B1_0));
	{
		intptr_t L_0;
		L_0 = MarshalledUnityObject_MarshalNotNull_TisTilemap_t18C4166D0AC702D5BFC0C411FA73C4B61D9D1751_m82D224678369601467142F86AEE1B6684056544D_inline(__this, MarshalledUnityObject_MarshalNotNull_TisTilemap_t18C4166D0AC702D5BFC0C411FA73C4B61D9D1751_m82D224678369601467142F86AEE1B6684056544D_RuntimeMethod_var);
		intptr_t L_1 = L_0;
		if (L_1)
		{
			G_B2_0 = L_1;
			goto IL_000f;
		}
		G_B1_0 = L_1;
	}
	{
		ThrowHelper_ThrowNullReferenceException_mA9C7629D32240EE0218631933DAC647668CA63CF(__this, NULL);
		G_B2_0 = G_B1_0;
	}

IL_000f:
	{
		Tilemap_get_localBounds_Injected_m152CE43998D57709D7DE44792575A54CA32684EF(G_B2_0, (&V_0), NULL);
		Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3 L_2 = V_0;
		return L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3 Tilemap_get_localFrameBounds_mA6650197618602764BC071D494CD32442B01B82E (Tilemap_t18C4166D0AC702D5BFC0C411FA73C4B61D9D1751* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MarshalledUnityObject_MarshalNotNull_TisTilemap_t18C4166D0AC702D5BFC0C411FA73C4B61D9D1751_m82D224678369601467142F86AEE1B6684056544D_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3 V_0;
	memset((&V_0), 0, sizeof(V_0));
	intptr_t G_B2_0;
	memset((&G_B2_0), 0, sizeof(G_B2_0));
	intptr_t G_B1_0;
	memset((&G_B1_0), 0, sizeof(G_B1_0));
	{
		intptr_t L_0;
		L_0 = MarshalledUnityObject_MarshalNotNull_TisTilemap_t18C4166D0AC702D5BFC0C411FA73C4B61D9D1751_m82D224678369601467142F86AEE1B6684056544D_inline(__this, MarshalledUnityObject_MarshalNotNull_TisTilemap_t18C4166D0AC702D5BFC0C411FA73C4B61D9D1751_m82D224678369601467142F86AEE1B6684056544D_RuntimeMethod_var);
		intptr_t L_1 = L_0;
		if (L_1)
		{
			G_B2_0 = L_1;
			goto IL_000f;
		}
		G_B1_0 = L_1;
	}
	{
		ThrowHelper_ThrowNullReferenceException_mA9C7629D32240EE0218631933DAC647668CA63CF(__this, NULL);
		G_B2_0 = G_B1_0;
	}

IL_000f:
	{
		Tilemap_get_localFrameBounds_Injected_m0253F8D05490C85058310D075E2C2EA5679D7D20(G_B2_0, (&V_0), NULL);
		Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3 L_2 = V_0;
		return L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Tilemap_get_animationFrameRate_m391ACF664A9239DCB5A3344AE6A27A6D924234AE (Tilemap_t18C4166D0AC702D5BFC0C411FA73C4B61D9D1751* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MarshalledUnityObject_MarshalNotNull_TisTilemap_t18C4166D0AC702D5BFC0C411FA73C4B61D9D1751_m82D224678369601467142F86AEE1B6684056544D_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	intptr_t G_B2_0;
	memset((&G_B2_0), 0, sizeof(G_B2_0));
	intptr_t G_B1_0;
	memset((&G_B1_0), 0, sizeof(G_B1_0));
	{
		intptr_t L_0;
		L_0 = MarshalledUnityObject_MarshalNotNull_TisTilemap_t18C4166D0AC702D5BFC0C411FA73C4B61D9D1751_m82D224678369601467142F86AEE1B6684056544D_inline(__this, MarshalledUnityObject_MarshalNotNull_TisTilemap_t18C4166D0AC702D5BFC0C411FA73C4B61D9D1751_m82D224678369601467142F86AEE1B6684056544D_RuntimeMethod_var);
		intptr_t L_1 = L_0;
		if (L_1)
		{
			G_B2_0 = L_1;
			goto IL_000f;
		}
		G_B1_0 = L_1;
	}
	{
		ThrowHelper_ThrowNullReferenceException_mA9C7629D32240EE0218631933DAC647668CA63CF(__this, NULL);
		G_B2_0 = G_B1_0;
	}

IL_000f:
	{
		float L_2;
		L_2 = Tilemap_get_animationFrameRate_Injected_m853E4D792F977520F9AF25B875050F0E160CCF45(G_B2_0, NULL);
		return L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Tilemap_set_animationFrameRate_m38571B9C6F0E7ED975531118CA4240730C44F55F (Tilemap_t18C4166D0AC702D5BFC0C411FA73C4B61D9D1751* __this, float ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MarshalledUnityObject_MarshalNotNull_TisTilemap_t18C4166D0AC702D5BFC0C411FA73C4B61D9D1751_m82D224678369601467142F86AEE1B6684056544D_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	intptr_t G_B2_0;
	memset((&G_B2_0), 0, sizeof(G_B2_0));
	intptr_t G_B1_0;
	memset((&G_B1_0), 0, sizeof(G_B1_0));
	{
		intptr_t L_0;
		L_0 = MarshalledUnityObject_MarshalNotNull_TisTilemap_t18C4166D0AC702D5BFC0C411FA73C4B61D9D1751_m82D224678369601467142F86AEE1B6684056544D_inline(__this, MarshalledUnityObject_MarshalNotNull_TisTilemap_t18C4166D0AC702D5BFC0C411FA73C4B61D9D1751_m82D224678369601467142F86AEE1B6684056544D_RuntimeMethod_var);
		intptr_t L_1 = L_0;
		if (L_1)
		{
			G_B2_0 = L_1;
			goto IL_000f;
		}
		G_B1_0 = L_1;
	}
	{
		ThrowHelper_ThrowNullReferenceException_mA9C7629D32240EE0218631933DAC647668CA63CF(__this, NULL);
		G_B2_0 = G_B1_0;
	}

IL_000f:
	{
		float L_2 = ___0_value;
		Tilemap_set_animationFrameRate_Injected_m9D0FC3D1E26113F6242D44A86F8C36DDB2D72835(G_B2_0, L_2, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F Tilemap_get_color_mCA6C50E1BFAD7110551D2A261C2A0508CBDA7B93 (Tilemap_t18C4166D0AC702D5BFC0C411FA73C4B61D9D1751* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MarshalledUnityObject_MarshalNotNull_TisTilemap_t18C4166D0AC702D5BFC0C411FA73C4B61D9D1751_m82D224678369601467142F86AEE1B6684056544D_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F V_0;
	memset((&V_0), 0, sizeof(V_0));
	intptr_t G_B2_0;
	memset((&G_B2_0), 0, sizeof(G_B2_0));
	intptr_t G_B1_0;
	memset((&G_B1_0), 0, sizeof(G_B1_0));
	{
		intptr_t L_0;
		L_0 = MarshalledUnityObject_MarshalNotNull_TisTilemap_t18C4166D0AC702D5BFC0C411FA73C4B61D9D1751_m82D224678369601467142F86AEE1B6684056544D_inline(__this, MarshalledUnityObject_MarshalNotNull_TisTilemap_t18C4166D0AC702D5BFC0C411FA73C4B61D9D1751_m82D224678369601467142F86AEE1B6684056544D_RuntimeMethod_var);
		intptr_t L_1 = L_0;
		if (L_1)
		{
			G_B2_0 = L_1;
			goto IL_000f;
		}
		G_B1_0 = L_1;
	}
	{
		ThrowHelper_ThrowNullReferenceException_mA9C7629D32240EE0218631933DAC647668CA63CF(__this, NULL);
		G_B2_0 = G_B1_0;
	}

IL_000f:
	{
		Tilemap_get_color_Injected_m85B6020D39FE8EE7E8AF3130DE34879D6EA13CF4(G_B2_0, (&V_0), NULL);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_2 = V_0;
		return L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Tilemap_set_color_m27BC001757EF2950802916FAAF2BE86BEFEBF577 (Tilemap_t18C4166D0AC702D5BFC0C411FA73C4B61D9D1751* __this, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MarshalledUnityObject_MarshalNotNull_TisTilemap_t18C4166D0AC702D5BFC0C411FA73C4B61D9D1751_m82D224678369601467142F86AEE1B6684056544D_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	intptr_t G_B2_0;
	memset((&G_B2_0), 0, sizeof(G_B2_0));
	intptr_t G_B1_0;
	memset((&G_B1_0), 0, sizeof(G_B1_0));
	{
		intptr_t L_0;
		L_0 = MarshalledUnityObject_MarshalNotNull_TisTilemap_t18C4166D0AC702D5BFC0C411FA73C4B61D9D1751_m82D224678369601467142F86AEE1B6684056544D_inline(__this, MarshalledUnityObject_MarshalNotNull_TisTilemap_t18C4166D0AC702D5BFC0C411FA73C4B61D9D1751_m82D224678369601467142F86AEE1B6684056544D_RuntimeMethod_var);
		intptr_t L_1 = L_0;
		if (L_1)
		{
			G_B2_0 = L_1;
			goto IL_000f;
		}
		G_B1_0 = L_1;
	}
	{
		ThrowHelper_ThrowNullReferenceException_mA9C7629D32240EE0218631933DAC647668CA63CF(__this, NULL);
		G_B2_0 = G_B1_0;
	}

IL_000f:
	{
		Tilemap_set_color_Injected_m09DB4716FFCD96ECBDA1BB38AAACB797470C5A34(G_B2_0, (&___0_value), NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376 Tilemap_get_origin_mB5E10582CFAA76144BB44DECAADB84E904D02E55 (Tilemap_t18C4166D0AC702D5BFC0C411FA73C4B61D9D1751* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MarshalledUnityObject_MarshalNotNull_TisTilemap_t18C4166D0AC702D5BFC0C411FA73C4B61D9D1751_m82D224678369601467142F86AEE1B6684056544D_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376 V_0;
	memset((&V_0), 0, sizeof(V_0));
	intptr_t G_B2_0;
	memset((&G_B2_0), 0, sizeof(G_B2_0));
	intptr_t G_B1_0;
	memset((&G_B1_0), 0, sizeof(G_B1_0));
	{
		intptr_t L_0;
		L_0 = MarshalledUnityObject_MarshalNotNull_TisTilemap_t18C4166D0AC702D5BFC0C411FA73C4B61D9D1751_m82D224678369601467142F86AEE1B6684056544D_inline(__this, MarshalledUnityObject_MarshalNotNull_TisTilemap_t18C4166D0AC702D5BFC0C411FA73C4B61D9D1751_m82D224678369601467142F86AEE1B6684056544D_RuntimeMethod_var);
		intptr_t L_1 = L_0;
		if (L_1)
		{
			G_B2_0 = L_1;
			goto IL_000f;
		}
		G_B1_0 = L_1;
	}
	{
		ThrowHelper_ThrowNullReferenceException_mA9C7629D32240EE0218631933DAC647668CA63CF(__this, NULL);
		G_B2_0 = G_B1_0;
	}

IL_000f:
	{
		Tilemap_get_origin_Injected_mE1614FE27564626B3726F24F6CC284204A1BDEA2(G_B2_0, (&V_0), NULL);
		Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376 L_2 = V_0;
		return L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Tilemap_set_origin_mA02F4D6E5E74AC5AC9026F9C044A8D581345560A (Tilemap_t18C4166D0AC702D5BFC0C411FA73C4B61D9D1751* __this, Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376 ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MarshalledUnityObject_MarshalNotNull_TisTilemap_t18C4166D0AC702D5BFC0C411FA73C4B61D9D1751_m82D224678369601467142F86AEE1B6684056544D_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	intptr_t G_B2_0;
	memset((&G_B2_0), 0, sizeof(G_B2_0));
	intptr_t G_B1_0;
	memset((&G_B1_0), 0, sizeof(G_B1_0));
	{
		intptr_t L_0;
		L_0 = MarshalledUnityObject_MarshalNotNull_TisTilemap_t18C4166D0AC702D5BFC0C411FA73C4B61D9D1751_m82D224678369601467142F86AEE1B6684056544D_inline(__this, MarshalledUnityObject_MarshalNotNull_TisTilemap_t18C4166D0AC702D5BFC0C411FA73C4B61D9D1751_m82D224678369601467142F86AEE1B6684056544D_RuntimeMethod_var);
		intptr_t L_1 = L_0;
		if (L_1)
		{
			G_B2_0 = L_1;
			goto IL_000f;
		}
		G_B1_0 = L_1;
	}
	{
		ThrowHelper_ThrowNullReferenceException_mA9C7629D32240EE0218631933DAC647668CA63CF(__this, NULL);
		G_B2_0 = G_B1_0;
	}

IL_000f:
	{
		Tilemap_set_origin_Injected_m75FCF12FAA633BE94169CBFA14F75092E6017EDF(G_B2_0, (&___0_value), NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376 Tilemap_get_size_m8B9F0C2CC3CD37626AE921047DA5DC239B3F00EA (Tilemap_t18C4166D0AC702D5BFC0C411FA73C4B61D9D1751* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MarshalledUnityObject_MarshalNotNull_TisTilemap_t18C4166D0AC702D5BFC0C411FA73C4B61D9D1751_m82D224678369601467142F86AEE1B6684056544D_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376 V_0;
	memset((&V_0), 0, sizeof(V_0));
	intptr_t G_B2_0;
	memset((&G_B2_0), 0, sizeof(G_B2_0));
	intptr_t G_B1_0;
	memset((&G_B1_0), 0, sizeof(G_B1_0));
	{
		intptr_t L_0;
		L_0 = MarshalledUnityObject_MarshalNotNull_TisTilemap_t18C4166D0AC702D5BFC0C411FA73C4B61D9D1751_m82D224678369601467142F86AEE1B6684056544D_inline(__this, MarshalledUnityObject_MarshalNotNull_TisTilemap_t18C4166D0AC702D5BFC0C411FA73C4B61D9D1751_m82D224678369601467142F86AEE1B6684056544D_RuntimeMethod_var);
		intptr_t L_1 = L_0;
		if (L_1)
		{
			G_B2_0 = L_1;
			goto IL_000f;
		}
		G_B1_0 = L_1;
	}
	{
		ThrowHelper_ThrowNullReferenceException_mA9C7629D32240EE0218631933DAC647668CA63CF(__this, NULL);
		G_B2_0 = G_B1_0;
	}

IL_000f:
	{
		Tilemap_get_size_Injected_mE4A4FAFA70C3B5BA87CF8E64CD0BCCB8E11323EA(G_B2_0, (&V_0), NULL);
		Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376 L_2 = V_0;
		return L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Tilemap_set_size_m83996A5DFE30566272FD3D29E17944510A61F7C6 (Tilemap_t18C4166D0AC702D5BFC0C411FA73C4B61D9D1751* __this, Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376 ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MarshalledUnityObject_MarshalNotNull_TisTilemap_t18C4166D0AC702D5BFC0C411FA73C4B61D9D1751_m82D224678369601467142F86AEE1B6684056544D_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	intptr_t G_B2_0;
	memset((&G_B2_0), 0, sizeof(G_B2_0));
	intptr_t G_B1_0;
	memset((&G_B1_0), 0, sizeof(G_B1_0));
	{
		intptr_t L_0;
		L_0 = MarshalledUnityObject_MarshalNotNull_TisTilemap_t18C4166D0AC702D5BFC0C411FA73C4B61D9D1751_m82D224678369601467142F86AEE1B6684056544D_inline(__this, MarshalledUnityObject_MarshalNotNull_TisTilemap_t18C4166D0AC702D5BFC0C411FA73C4B61D9D1751_m82D224678369601467142F86AEE1B6684056544D_RuntimeMethod_var);
		intptr_t L_1 = L_0;
		if (L_1)
		{
			G_B2_0 = L_1;
			goto IL_000f;
		}
		G_B1_0 = L_1;
	}
	{
		ThrowHelper_ThrowNullReferenceException_mA9C7629D32240EE0218631933DAC647668CA63CF(__this, NULL);
		G_B2_0 = G_B1_0;
	}

IL_000f:
	{
		Tilemap_set_size_Injected_m9BC8598EC2320E1FBE4BEAC3200F44F6954E77B4(G_B2_0, (&___0_value), NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Tilemap_get_tileAnchor_mD3C7F2A024DC43019CEB93682307ED41EC3329E4 (Tilemap_t18C4166D0AC702D5BFC0C411FA73C4B61D9D1751* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MarshalledUnityObject_MarshalNotNull_TisTilemap_t18C4166D0AC702D5BFC0C411FA73C4B61D9D1751_m82D224678369601467142F86AEE1B6684056544D_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	intptr_t G_B2_0;
	memset((&G_B2_0), 0, sizeof(G_B2_0));
	intptr_t G_B1_0;
	memset((&G_B1_0), 0, sizeof(G_B1_0));
	{
		intptr_t L_0;
		L_0 = MarshalledUnityObject_MarshalNotNull_TisTilemap_t18C4166D0AC702D5BFC0C411FA73C4B61D9D1751_m82D224678369601467142F86AEE1B6684056544D_inline(__this, MarshalledUnityObject_MarshalNotNull_TisTilemap_t18C4166D0AC702D5BFC0C411FA73C4B61D9D1751_m82D224678369601467142F86AEE1B6684056544D_RuntimeMethod_var);
		intptr_t L_1 = L_0;
		if (L_1)
		{
			G_B2_0 = L_1;
			goto IL_000f;
		}
		G_B1_0 = L_1;
	}
	{
		ThrowHelper_ThrowNullReferenceException_mA9C7629D32240EE0218631933DAC647668CA63CF(__this, NULL);
		G_B2_0 = G_B1_0;
	}

IL_000f:
	{
		Tilemap_get_tileAnchor_Injected_m7D8067BA5CD69E8B8807AFD721E9BD732E5B8187(G_B2_0, (&V_0), NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = V_0;
		return L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Tilemap_set_tileAnchor_m0B89DD209FCB7B2B47C3B434E6D73BFF77A3D817 (Tilemap_t18C4166D0AC702D5BFC0C411FA73C4B61D9D1751* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MarshalledUnityObject_MarshalNotNull_TisTilemap_t18C4166D0AC702D5BFC0C411FA73C4B61D9D1751_m82D224678369601467142F86AEE1B6684056544D_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	intptr_t G_B2_0;
	memset((&G_B2_0), 0, sizeof(G_B2_0));
	intptr_t G_B1_0;
	memset((&G_B1_0), 0, sizeof(G_B1_0));
	{
		intptr_t L_0;
		L_0 = MarshalledUnityObject_MarshalNotNull_TisTilemap_t18C4166D0AC702D5BFC0C411FA73C4B61D9D1751_m82D224678369601467142F86AEE1B6684056544D_inline(__this, MarshalledUnityObject_MarshalNotNull_TisTilemap_t18C4166D0AC702D5BFC0C411FA73C4B61D9D1751_m82D224678369601467142F86AEE1B6684056544D_RuntimeMethod_var);
		intptr_t L_1 = L_0;
		if (L_1)
		{
			G_B2_0 = L_1;
			goto IL_000f;
		}
		G_B1_0 = L_1;
	}
	{
		ThrowHelper_ThrowNullReferenceException_mA9C7629D32240EE0218631933DAC647668CA63CF(__this, NULL);
		G_B2_0 = G_B1_0;
	}

IL_000f:
	{
		Tilemap_set_tileAnchor_Injected_m26B585516E24D4DB3E2D09E7FDEDE7A29CC1AF5C(G_B2_0, (&___0_value), NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Tilemap_get_orientation_m711F644B1523FA2D94AE0069C949C82C0579DA17 (Tilemap_t18C4166D0AC702D5BFC0C411FA73C4B61D9D1751* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MarshalledUnityObject_MarshalNotNull_TisTilemap_t18C4166D0AC702D5BFC0C411FA73C4B61D9D1751_m82D224678369601467142F86AEE1B6684056544D_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	intptr_t G_B2_0;
	memset((&G_B2_0), 0, sizeof(G_B2_0));
	intptr_t G_B1_0;
	memset((&G_B1_0), 0, sizeof(G_B1_0));
	{
		intptr_t L_0;
		L_0 = MarshalledUnityObject_MarshalNotNull_TisTilemap_t18C4166D0AC702D5BFC0C411FA73C4B61D9D1751_m82D224678369601467142F86AEE1B6684056544D_inline(__this, MarshalledUnityObject_MarshalNotNull_TisTilemap_t18C4166D0AC702D5BFC0C411FA73C4B61D9D1751_m82D224678369601467142F86AEE1B6684056544D_RuntimeMethod_var);
		intptr_t L_1 = L_0;
		if (L_1)
		{
			G_B2_0 = L_1;
			goto IL_000f;
		}
		G_B1_0 = L_1;
	}
	{
		ThrowHelper_ThrowNullReferenceException_mA9C7629D32240EE0218631933DAC647668CA63CF(__this, NULL);
		G_B2_0 = G_B1_0;
	}

IL_000f:
	{
		int32_t L_2;
		L_2 = Tilemap_get_orientation_Injected_mB207D5A6B766F40945FAB8150275D9771516D0FD(G_B2_0, NULL);
		return L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Tilemap_set_orientation_m77F1E6BA44321F1B2607F24028BB8A99D939FD7C (Tilemap_t18C4166D0AC702D5BFC0C411FA73C4B61D9D1751* __this, int32_t ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MarshalledUnityObject_MarshalNotNull_TisTilemap_t18C4166D0AC702D5BFC0C411FA73C4B61D9D1751_m82D224678369601467142F86AEE1B6684056544D_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	intptr_t G_B2_0;
	memset((&G_B2_0), 0, sizeof(G_B2_0));
	intptr_t G_B1_0;
	memset((&G_B1_0), 0, sizeof(G_B1_0));
	{
		intptr_t L_0;
		L_0 = MarshalledUnityObject_MarshalNotNull_TisTilemap_t18C4166D0AC702D5BFC0C411FA73C4B61D9D1751_m82D224678369601467142F86AEE1B6684056544D_inline(__this, MarshalledUnityObject_MarshalNotNull_TisTilemap_t18C4166D0AC702D5BFC0C411FA73C4B61D9D1751_m82D224678369601467142F86AEE1B6684056544D_RuntimeMethod_var);
		intptr_t L_1 = L_0;
		if (L_1)
		{
			G_B2_0 = L_1;
			goto IL_000f;
		}
		G_B1_0 = L_1;
	}
	{
		ThrowHelper_ThrowNullReferenceException_mA9C7629D32240EE0218631933DAC647668CA63CF(__this, NULL);
		G_B2_0 = G_B1_0;
	}

IL_000f:
	{
		int32_t L_2 = ___0_value;
		Tilemap_set_orientation_Injected_m415007E87297A6E6C010ADE04E8F9DA48EADC26E(G_B2_0, L_2, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 Tilemap_get_orientationMatrix_mF63DF1E4FC7E4B7DE10CE67DFDBB130262784F24 (Tilemap_t18C4166D0AC702D5BFC0C411FA73C4B61D9D1751* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MarshalledUnityObject_MarshalNotNull_TisTilemap_t18C4166D0AC702D5BFC0C411FA73C4B61D9D1751_m82D224678369601467142F86AEE1B6684056544D_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 V_0;
	memset((&V_0), 0, sizeof(V_0));
	intptr_t G_B2_0;
	memset((&G_B2_0), 0, sizeof(G_B2_0));
	intptr_t G_B1_0;
	memset((&G_B1_0), 0, sizeof(G_B1_0));
	{
		intptr_t L_0;
		L_0 = MarshalledUnityObject_MarshalNotNull_TisTilemap_t18C4166D0AC702D5BFC0C411FA73C4B61D9D1751_m82D224678369601467142F86AEE1B6684056544D_inline(__this, MarshalledUnityObject_MarshalNotNull_TisTilemap_t18C4166D0AC702D5BFC0C411FA73C4B61D9D1751_m82D224678369601467142F86AEE1B6684056544D_RuntimeMethod_var);
		intptr_t L_1 = L_0;
		if (L_1)
		{
			G_B2_0 = L_1;
			goto IL_000f;
		}
		G_B1_0 = L_1;
	}
	{
		ThrowHelper_ThrowNullReferenceException_mA9C7629D32240EE0218631933DAC647668CA63CF(__this, NULL);
		G_B2_0 = G_B1_0;
	}

IL_000f:
	{
		Tilemap_get_orientationMatrix_Injected_mD54025C0654F2E07D74364E44A287136074F8646(G_B2_0, (&V_0), NULL);
		Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 L_2 = V_0;
		return L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Tilemap_set_orientationMatrix_m92B5E5D5135DFFAAAE61EFC7FA72934B1FA33D47 (Tilemap_t18C4166D0AC702D5BFC0C411FA73C4B61D9D1751* __this, Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MarshalledUnityObject_MarshalNotNull_TisTilemap_t18C4166D0AC702D5BFC0C411FA73C4B61D9D1751_m82D224678369601467142F86AEE1B6684056544D_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	intptr_t G_B2_0;
	memset((&G_B2_0), 0, sizeof(G_B2_0));
	intptr_t G_B1_0;
	memset((&G_B1_0), 0, sizeof(G_B1_0));
	{
		intptr_t L_0;
		L_0 = MarshalledUnityObject_MarshalNotNull_TisTilemap_t18C4166D0AC702D5BFC0C411FA73C4B61D9D1751_m82D224678369601467142F86AEE1B6684056544D_inline(__this, MarshalledUnityObject_MarshalNotNull_TisTilemap_t18C4166D0AC702D5BFC0C411FA73C4B61D9D1751_m82D224678369601467142F86AEE1B6684056544D_RuntimeMethod_var);
		intptr_t L_1 = L_0;
		if (L_1)
		{
			G_B2_0 = L_1;
			goto IL_000f;
		}
		G_B1_0 = L_1;
	}
	{
		ThrowHelper_ThrowNullReferenceException_mA9C7629D32240EE0218631933DAC647668CA63CF(__this, NULL);
		G_B2_0 = G_B1_0;
	}

IL_000f:
	{
		Tilemap_set_orientationMatrix_Injected_m25193FD97D463A5BC2F96CB9BF806C0CC7381E66(G_B2_0, (&___0_value), NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* Tilemap_GetTileAsset_m3B9C96C2E2488141C4F6EBD52C6D807C801C6922 (Tilemap_t18C4166D0AC702D5BFC0C411FA73C4B61D9D1751* __this, Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376 ___0_position, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MarshalledUnityObject_MarshalNotNull_TisTilemap_t18C4166D0AC702D5BFC0C411FA73C4B61D9D1751_m82D224678369601467142F86AEE1B6684056544D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Unmarshal_UnmarshalUnityObject_TisObject_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_m27ACA708E2D42A879C8C665663669217265002CF_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	intptr_t G_B2_0;
	memset((&G_B2_0), 0, sizeof(G_B2_0));
	intptr_t G_B1_0;
	memset((&G_B1_0), 0, sizeof(G_B1_0));
	{
		intptr_t L_0;
		L_0 = MarshalledUnityObject_MarshalNotNull_TisTilemap_t18C4166D0AC702D5BFC0C411FA73C4B61D9D1751_m82D224678369601467142F86AEE1B6684056544D_inline(__this, MarshalledUnityObject_MarshalNotNull_TisTilemap_t18C4166D0AC702D5BFC0C411FA73C4B61D9D1751_m82D224678369601467142F86AEE1B6684056544D_RuntimeMethod_var);
		intptr_t L_1 = L_0;
		if (L_1)
		{
			G_B2_0 = L_1;
			goto IL_000f;
		}
		G_B1_0 = L_1;
	}
	{
		ThrowHelper_ThrowNullReferenceException_mA9C7629D32240EE0218631933DAC647668CA63CF(__this, NULL);
		G_B2_0 = G_B1_0;
	}

IL_000f:
	{
		intptr_t L_2;
		L_2 = Tilemap_GetTileAsset_Injected_mC4D3F18DDF3496564747BCD4E56631E21456093C(G_B2_0, (&___0_position), NULL);
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_3;
		L_3 = Unmarshal_UnmarshalUnityObject_TisObject_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_m27ACA708E2D42A879C8C665663669217265002CF_inline(L_2, Unmarshal_UnmarshalUnityObject_TisObject_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_m27ACA708E2D42A879C8C665663669217265002CF_RuntimeMethod_var);
		return L_3;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TileBase_t07019BD771D35E8EA68118157D6EEE4C770CF0F9* Tilemap_GetTile_m8500FBFF853C9E813810929BD29D7A866B516225 (Tilemap_t18C4166D0AC702D5BFC0C411FA73C4B61D9D1751* __this, Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376 ___0_position, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TileBase_t07019BD771D35E8EA68118157D6EEE4C770CF0F9_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	TileBase_t07019BD771D35E8EA68118157D6EEE4C770CF0F9* V_0 = NULL;
	{
		Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376 L_0 = ___0_position;
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_1;
		L_1 = Tilemap_GetTileAsset_m3B9C96C2E2488141C4F6EBD52C6D807C801C6922(__this, L_0, NULL);
		V_0 = ((TileBase_t07019BD771D35E8EA68118157D6EEE4C770CF0F9*)IsInstClass((RuntimeObject*)L_1, TileBase_t07019BD771D35E8EA68118157D6EEE4C770CF0F9_il2cpp_TypeInfo_var));
		goto IL_0010;
	}

IL_0010:
	{
		TileBase_t07019BD771D35E8EA68118157D6EEE4C770CF0F9* L_2 = V_0;
		return L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ObjectU5BU5D_tD4BF1BEC72A31DF6611C0B8FA3112AF128FC3F8A* Tilemap_GetTileAssetsBlock_m28BAE62DD83EFD00528A150B7728880DACAC0026 (Tilemap_t18C4166D0AC702D5BFC0C411FA73C4B61D9D1751* __this, Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376 ___0_position, Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376 ___1_blockDimensions, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MarshalledUnityObject_MarshalNotNull_TisTilemap_t18C4166D0AC702D5BFC0C411FA73C4B61D9D1751_m82D224678369601467142F86AEE1B6684056544D_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	intptr_t G_B2_0;
	memset((&G_B2_0), 0, sizeof(G_B2_0));
	intptr_t G_B1_0;
	memset((&G_B1_0), 0, sizeof(G_B1_0));
	{
		intptr_t L_0;
		L_0 = MarshalledUnityObject_MarshalNotNull_TisTilemap_t18C4166D0AC702D5BFC0C411FA73C4B61D9D1751_m82D224678369601467142F86AEE1B6684056544D_inline(__this, MarshalledUnityObject_MarshalNotNull_TisTilemap_t18C4166D0AC702D5BFC0C411FA73C4B61D9D1751_m82D224678369601467142F86AEE1B6684056544D_RuntimeMethod_var);
		intptr_t L_1 = L_0;
		if (L_1)
		{
			G_B2_0 = L_1;
			goto IL_000f;
		}
		G_B1_0 = L_1;
	}
	{
		ThrowHelper_ThrowNullReferenceException_mA9C7629D32240EE0218631933DAC647668CA63CF(__this, NULL);
		G_B2_0 = G_B1_0;
	}

IL_000f:
	{
		ObjectU5BU5D_tD4BF1BEC72A31DF6611C0B8FA3112AF128FC3F8A* L_2;
		L_2 = Tilemap_GetTileAssetsBlock_Injected_mED14CACED7FEAFE71FDC9C468DDC0B628AE29EC5(G_B2_0, (&___0_position), (&___1_blockDimensions), NULL);
		return L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TileBaseU5BU5D_t4BA5139AFA510FA0FDD6B5F2954ABB77EBA12FB7* Tilemap_GetTilesBlock_mC108BEC2990B85024511A1B531D534843DEC2052 (Tilemap_t18C4166D0AC702D5BFC0C411FA73C4B61D9D1751* __this, BoundsInt_t4E757DE5EFF9FCB42000F173360DDC63B5585485 ___0_bounds, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TileBaseU5BU5D_t4BA5139AFA510FA0FDD6B5F2954ABB77EBA12FB7_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TileBase_t07019BD771D35E8EA68118157D6EEE4C770CF0F9_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	ObjectU5BU5D_tD4BF1BEC72A31DF6611C0B8FA3112AF128FC3F8A* V_0 = NULL;
	TileBaseU5BU5D_t4BA5139AFA510FA0FDD6B5F2954ABB77EBA12FB7* V_1 = NULL;
	int32_t V_2 = 0;
	bool V_3 = false;
	TileBaseU5BU5D_t4BA5139AFA510FA0FDD6B5F2954ABB77EBA12FB7* V_4 = NULL;
	{
		Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376 L_0;
		L_0 = BoundsInt_get_min_m68D854200F7ED4AED677ECC53F26AA0834A715AE_inline((&___0_bounds), NULL);
		Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376 L_1;
		L_1 = BoundsInt_get_size_mE7C4A0C3BF45CEA7A28ABF98E2C15CB69EF3A32C_inline((&___0_bounds), NULL);
		ObjectU5BU5D_tD4BF1BEC72A31DF6611C0B8FA3112AF128FC3F8A* L_2;
		L_2 = Tilemap_GetTileAssetsBlock_m28BAE62DD83EFD00528A150B7728880DACAC0026(__this, L_0, L_1, NULL);
		V_0 = L_2;
		ObjectU5BU5D_tD4BF1BEC72A31DF6611C0B8FA3112AF128FC3F8A* L_3 = V_0;
		NullCheck(L_3);
		TileBaseU5BU5D_t4BA5139AFA510FA0FDD6B5F2954ABB77EBA12FB7* L_4 = (TileBaseU5BU5D_t4BA5139AFA510FA0FDD6B5F2954ABB77EBA12FB7*)(TileBaseU5BU5D_t4BA5139AFA510FA0FDD6B5F2954ABB77EBA12FB7*)SZArrayNew(TileBaseU5BU5D_t4BA5139AFA510FA0FDD6B5F2954ABB77EBA12FB7_il2cpp_TypeInfo_var, (uint32_t)((int32_t)(((RuntimeArray*)L_3)->max_length)));
		V_1 = L_4;
		V_2 = 0;
		goto IL_0034;
	}

IL_0023:
	{
		TileBaseU5BU5D_t4BA5139AFA510FA0FDD6B5F2954ABB77EBA12FB7* L_5 = V_1;
		int32_t L_6 = V_2;
		ObjectU5BU5D_tD4BF1BEC72A31DF6611C0B8FA3112AF128FC3F8A* L_7 = V_0;
		int32_t L_8 = V_2;
		NullCheck(L_7);
		int32_t L_9 = L_8;
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_10 = (L_7)->GetAt(static_cast<il2cpp_array_size_t>(L_9));
		NullCheck(L_5);
		ArrayElementTypeCheck (L_5, ((TileBase_t07019BD771D35E8EA68118157D6EEE4C770CF0F9*)CastclassClass((RuntimeObject*)L_10, TileBase_t07019BD771D35E8EA68118157D6EEE4C770CF0F9_il2cpp_TypeInfo_var)));
		(L_5)->SetAt(static_cast<il2cpp_array_size_t>(L_6), (TileBase_t07019BD771D35E8EA68118157D6EEE4C770CF0F9*)((TileBase_t07019BD771D35E8EA68118157D6EEE4C770CF0F9*)CastclassClass((RuntimeObject*)L_10, TileBase_t07019BD771D35E8EA68118157D6EEE4C770CF0F9_il2cpp_TypeInfo_var)));
		int32_t L_11 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_11, 1));
	}

IL_0034:
	{
		int32_t L_12 = V_2;
		ObjectU5BU5D_tD4BF1BEC72A31DF6611C0B8FA3112AF128FC3F8A* L_13 = V_0;
		NullCheck(L_13);
		V_3 = (bool)((((int32_t)L_12) < ((int32_t)((int32_t)(((RuntimeArray*)L_13)->max_length))))? 1 : 0);
		bool L_14 = V_3;
		if (L_14)
		{
			goto IL_0023;
		}
	}
	{
		TileBaseU5BU5D_t4BA5139AFA510FA0FDD6B5F2954ABB77EBA12FB7* L_15 = V_1;
		V_4 = L_15;
		goto IL_0043;
	}

IL_0043:
	{
		TileBaseU5BU5D_t4BA5139AFA510FA0FDD6B5F2954ABB77EBA12FB7* L_16 = V_4;
		return L_16;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Tilemap_GetTileAssetsBlockNonAlloc_m2BAA311398DE9C0B1590D662482FF292931B575F (Tilemap_t18C4166D0AC702D5BFC0C411FA73C4B61D9D1751* __this, Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376 ___0_startPosition, Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376 ___1_endPosition, ObjectU5BU5D_tD4BF1BEC72A31DF6611C0B8FA3112AF128FC3F8A* ___2_tiles, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MarshalledUnityObject_MarshalNotNull_TisTilemap_t18C4166D0AC702D5BFC0C411FA73C4B61D9D1751_m82D224678369601467142F86AEE1B6684056544D_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	intptr_t G_B2_0;
	memset((&G_B2_0), 0, sizeof(G_B2_0));
	intptr_t G_B1_0;
	memset((&G_B1_0), 0, sizeof(G_B1_0));
	{
		intptr_t L_0;
		L_0 = MarshalledUnityObject_MarshalNotNull_TisTilemap_t18C4166D0AC702D5BFC0C411FA73C4B61D9D1751_m82D224678369601467142F86AEE1B6684056544D_inline(__this, MarshalledUnityObject_MarshalNotNull_TisTilemap_t18C4166D0AC702D5BFC0C411FA73C4B61D9D1751_m82D224678369601467142F86AEE1B6684056544D_RuntimeMethod_var);
		intptr_t L_1 = L_0;
		if (L_1)
		{
			G_B2_0 = L_1;
			goto IL_000f;
		}
		G_B1_0 = L_1;
	}
	{
		ThrowHelper_ThrowNullReferenceException_mA9C7629D32240EE0218631933DAC647668CA63CF(__this, NULL);
		G_B2_0 = G_B1_0;
	}

IL_000f:
	{
		ObjectU5BU5D_tD4BF1BEC72A31DF6611C0B8FA3112AF128FC3F8A* L_2 = ___2_tiles;
		int32_t L_3;
		L_3 = Tilemap_GetTileAssetsBlockNonAlloc_Injected_mCD0F743A63D39979C36B66FF12C70C27BDC7F69A(G_B2_0, (&___0_startPosition), (&___1_endPosition), L_2, NULL);
		return L_3;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Tilemap_GetTilesBlockNonAlloc_m07991C1F81371CA6D8451A26CC426316F37DB279 (Tilemap_t18C4166D0AC702D5BFC0C411FA73C4B61D9D1751* __this, BoundsInt_t4E757DE5EFF9FCB42000F173360DDC63B5585485 ___0_bounds, TileBaseU5BU5D_t4BA5139AFA510FA0FDD6B5F2954ABB77EBA12FB7* ___1_tiles, const RuntimeMethod* method) 
{
	ObjectU5BU5D_tD4BF1BEC72A31DF6611C0B8FA3112AF128FC3F8A* V_0 = NULL;
	int32_t V_1 = 0;
	{
		Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376 L_0;
		L_0 = BoundsInt_get_min_m68D854200F7ED4AED677ECC53F26AA0834A715AE_inline((&___0_bounds), NULL);
		Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376 L_1;
		L_1 = BoundsInt_get_size_mE7C4A0C3BF45CEA7A28ABF98E2C15CB69EF3A32C_inline((&___0_bounds), NULL);
		TileBaseU5BU5D_t4BA5139AFA510FA0FDD6B5F2954ABB77EBA12FB7* L_2 = ___1_tiles;
		V_0 = (ObjectU5BU5D_tD4BF1BEC72A31DF6611C0B8FA3112AF128FC3F8A*)L_2;
		ObjectU5BU5D_tD4BF1BEC72A31DF6611C0B8FA3112AF128FC3F8A* L_3 = V_0;
		int32_t L_4;
		L_4 = Tilemap_GetTileAssetsBlockNonAlloc_m2BAA311398DE9C0B1590D662482FF292931B575F(__this, L_0, L_1, L_3, NULL);
		V_1 = L_4;
		goto IL_001b;
	}

IL_001b:
	{
		int32_t L_5 = V_1;
		return L_5;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Tilemap_GetTilesRangeCount_m6FE6DDC849E6040A3F2FF6A8361440071C1432DF (Tilemap_t18C4166D0AC702D5BFC0C411FA73C4B61D9D1751* __this, Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376 ___0_startPosition, Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376 ___1_endPosition, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MarshalledUnityObject_MarshalNotNull_TisTilemap_t18C4166D0AC702D5BFC0C411FA73C4B61D9D1751_m82D224678369601467142F86AEE1B6684056544D_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	intptr_t G_B2_0;
	memset((&G_B2_0), 0, sizeof(G_B2_0));
	intptr_t G_B1_0;
	memset((&G_B1_0), 0, sizeof(G_B1_0));
	{
		intptr_t L_0;
		L_0 = MarshalledUnityObject_MarshalNotNull_TisTilemap_t18C4166D0AC702D5BFC0C411FA73C4B61D9D1751_m82D224678369601467142F86AEE1B6684056544D_inline(__this, MarshalledUnityObject_MarshalNotNull_TisTilemap_t18C4166D0AC702D5BFC0C411FA73C4B61D9D1751_m82D224678369601467142F86AEE1B6684056544D_RuntimeMethod_var);
		intptr_t L_1 = L_0;
		if (L_1)
		{
			G_B2_0 = L_1;
			goto IL_000f;
		}
		G_B1_0 = L_1;
	}
	{
		ThrowHelper_ThrowNullReferenceException_mA9C7629D32240EE0218631933DAC647668CA63CF(__this, NULL);
		G_B2_0 = G_B1_0;
	}

IL_000f:
	{
		int32_t L_2;
		L_2 = Tilemap_GetTilesRangeCount_Injected_mAB929B5EFCEEB5E61DC537B4E486AB8861B5FE0D(G_B2_0, (&___0_startPosition), (&___1_endPosition), NULL);
		return L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Tilemap_GetTileAssetsRangeNonAlloc_mA42F628851793097696368EEA780D0240112D3DE (Tilemap_t18C4166D0AC702D5BFC0C411FA73C4B61D9D1751* __this, Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376 ___0_startPosition, Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376 ___1_endPosition, Vector3IntU5BU5D_t7A7C64EB93B0E0C1989C82C3D0A003294FC6EC5E* ___2_positions, ObjectU5BU5D_tD4BF1BEC72A31DF6611C0B8FA3112AF128FC3F8A* ___3_tiles, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MarshalledUnityObject_MarshalNotNull_TisTilemap_t18C4166D0AC702D5BFC0C411FA73C4B61D9D1751_m82D224678369601467142F86AEE1B6684056544D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Span_1_GetPinnableReference_mBE1FB81DA3F0ACBFCC01E850CAEB91A5FF5FCDEE_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Span_1__ctor_m2FF12B712FEDB8173F74807DC6FF2C18126FF8CF_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Span_1_get_Length_mF4C43881CB4622B68DB84785142C44ADE93E85D7_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	Span_1_tC29EC1099E0CDA9241D8A63482E444F1E1FE1FDA V_0;
	memset((&V_0), 0, sizeof(V_0));
	Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376* V_1 = NULL;
	ManagedSpanWrapper_tE7FC4BBB631B130757F8DEB15853D98FD3D5DC0E V_2;
	memset((&V_2), 0, sizeof(V_2));
	intptr_t G_B2_0;
	memset((&G_B2_0), 0, sizeof(G_B2_0));
	intptr_t G_B1_0;
	memset((&G_B1_0), 0, sizeof(G_B1_0));
	{
		intptr_t L_0;
		L_0 = MarshalledUnityObject_MarshalNotNull_TisTilemap_t18C4166D0AC702D5BFC0C411FA73C4B61D9D1751_m82D224678369601467142F86AEE1B6684056544D_inline(__this, MarshalledUnityObject_MarshalNotNull_TisTilemap_t18C4166D0AC702D5BFC0C411FA73C4B61D9D1751_m82D224678369601467142F86AEE1B6684056544D_RuntimeMethod_var);
		intptr_t L_1 = L_0;
		if (L_1)
		{
			G_B2_0 = L_1;
			goto IL_000f;
		}
		G_B1_0 = L_1;
	}
	{
		ThrowHelper_ThrowNullReferenceException_mA9C7629D32240EE0218631933DAC647668CA63CF(__this, NULL);
		G_B2_0 = G_B1_0;
	}

IL_000f:
	{
		Vector3IntU5BU5D_t7A7C64EB93B0E0C1989C82C3D0A003294FC6EC5E* L_2 = ___2_positions;
		Span_1__ctor_m2FF12B712FEDB8173F74807DC6FF2C18126FF8CF_inline((&V_0), L_2, Span_1__ctor_m2FF12B712FEDB8173F74807DC6FF2C18126FF8CF_RuntimeMethod_var);
		Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376* L_3;
		L_3 = Span_1_GetPinnableReference_mBE1FB81DA3F0ACBFCC01E850CAEB91A5FF5FCDEE((&V_0), Span_1_GetPinnableReference_mBE1FB81DA3F0ACBFCC01E850CAEB91A5FF5FCDEE_RuntimeMethod_var);
		V_1 = L_3;
		Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376* L_4 = V_1;
		int32_t L_5;
		L_5 = Span_1_get_Length_mF4C43881CB4622B68DB84785142C44ADE93E85D7_inline((&V_0), Span_1_get_Length_mF4C43881CB4622B68DB84785142C44ADE93E85D7_RuntimeMethod_var);
		ManagedSpanWrapper__ctor_mB29647A21BB87EA4DF859E5C2FA2207F47E525D2((&V_2), (void*)((uintptr_t)L_4), L_5, NULL);
		ObjectU5BU5D_tD4BF1BEC72A31DF6611C0B8FA3112AF128FC3F8A* L_6 = ___3_tiles;
		int32_t L_7;
		L_7 = Tilemap_GetTileAssetsRangeNonAlloc_Injected_m4FA52158CABD751788603E21E7F0D75EE50272D5(G_B2_0, (&___0_startPosition), (&___1_endPosition), (&V_2), L_6, NULL);
		V_1 = (Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376*)((uintptr_t)0);
		return L_7;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Tilemap_GetTilesRangeNonAlloc_mB8576F4124BA4C95D37A1670F70DAD3ED344F52F (Tilemap_t18C4166D0AC702D5BFC0C411FA73C4B61D9D1751* __this, Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376 ___0_startPosition, Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376 ___1_endPosition, Vector3IntU5BU5D_t7A7C64EB93B0E0C1989C82C3D0A003294FC6EC5E* ___2_positions, TileBaseU5BU5D_t4BA5139AFA510FA0FDD6B5F2954ABB77EBA12FB7* ___3_tiles, const RuntimeMethod* method) 
{
	ObjectU5BU5D_tD4BF1BEC72A31DF6611C0B8FA3112AF128FC3F8A* V_0 = NULL;
	int32_t V_1 = 0;
	{
		Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376 L_0 = ___0_startPosition;
		Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376 L_1 = ___1_endPosition;
		Vector3IntU5BU5D_t7A7C64EB93B0E0C1989C82C3D0A003294FC6EC5E* L_2 = ___2_positions;
		TileBaseU5BU5D_t4BA5139AFA510FA0FDD6B5F2954ABB77EBA12FB7* L_3 = ___3_tiles;
		V_0 = (ObjectU5BU5D_tD4BF1BEC72A31DF6611C0B8FA3112AF128FC3F8A*)L_3;
		ObjectU5BU5D_tD4BF1BEC72A31DF6611C0B8FA3112AF128FC3F8A* L_4 = V_0;
		int32_t L_5;
		L_5 = Tilemap_GetTileAssetsRangeNonAlloc_mA42F628851793097696368EEA780D0240112D3DE(__this, L_0, L_1, L_2, L_4, NULL);
		V_1 = L_5;
		goto IL_0011;
	}

IL_0011:
	{
		int32_t L_6 = V_1;
		return L_6;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Tilemap_SetTileAsset_m88D70B08B3D291F99EB34F01136C2D4EEBE45D4B (Tilemap_t18C4166D0AC702D5BFC0C411FA73C4B61D9D1751* __this, Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376 ___0_position, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___1_tile, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MarshalledUnityObject_MarshalNotNull_TisTilemap_t18C4166D0AC702D5BFC0C411FA73C4B61D9D1751_m82D224678369601467142F86AEE1B6684056544D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MarshalledUnityObject_Marshal_TisObject_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_m965B12ED56AA1618C042D16D10B1BA3BFD98FF4D_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	intptr_t G_B2_0;
	memset((&G_B2_0), 0, sizeof(G_B2_0));
	intptr_t G_B1_0;
	memset((&G_B1_0), 0, sizeof(G_B1_0));
	{
		intptr_t L_0;
		L_0 = MarshalledUnityObject_MarshalNotNull_TisTilemap_t18C4166D0AC702D5BFC0C411FA73C4B61D9D1751_m82D224678369601467142F86AEE1B6684056544D_inline(__this, MarshalledUnityObject_MarshalNotNull_TisTilemap_t18C4166D0AC702D5BFC0C411FA73C4B61D9D1751_m82D224678369601467142F86AEE1B6684056544D_RuntimeMethod_var);
		intptr_t L_1 = L_0;
		if (L_1)
		{
			G_B2_0 = L_1;
			goto IL_000f;
		}
		G_B1_0 = L_1;
	}
	{
		ThrowHelper_ThrowNullReferenceException_mA9C7629D32240EE0218631933DAC647668CA63CF(__this, NULL);
		G_B2_0 = G_B1_0;
	}

IL_000f:
	{
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_2 = ___1_tile;
		intptr_t L_3;
		L_3 = MarshalledUnityObject_Marshal_TisObject_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_m965B12ED56AA1618C042D16D10B1BA3BFD98FF4D_inline(L_2, MarshalledUnityObject_Marshal_TisObject_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_m965B12ED56AA1618C042D16D10B1BA3BFD98FF4D_RuntimeMethod_var);
		Tilemap_SetTileAsset_Injected_mC24A398B065AFB28E88A51F38DA4762DD5DCBD4E(G_B2_0, (&___0_position), L_3, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Tilemap_SetTile_m880BD0CC6B69A4B15495C4FBD2CBEA50D1BE23BA (Tilemap_t18C4166D0AC702D5BFC0C411FA73C4B61D9D1751* __this, Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376 ___0_position, TileBase_t07019BD771D35E8EA68118157D6EEE4C770CF0F9* ___1_tile, const RuntimeMethod* method) 
{
	{
		Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376 L_0 = ___0_position;
		TileBase_t07019BD771D35E8EA68118157D6EEE4C770CF0F9* L_1 = ___1_tile;
		Tilemap_SetTileAsset_m88D70B08B3D291F99EB34F01136C2D4EEBE45D4B(__this, L_0, L_1, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Tilemap_SetTileAssets_m80E6341D44AE4E50942B6A4A8E66CC45F8BEDAD5 (Tilemap_t18C4166D0AC702D5BFC0C411FA73C4B61D9D1751* __this, Vector3IntU5BU5D_t7A7C64EB93B0E0C1989C82C3D0A003294FC6EC5E* ___0_positionArray, ObjectU5BU5D_tD4BF1BEC72A31DF6611C0B8FA3112AF128FC3F8A* ___1_tileArray, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MarshalledUnityObject_MarshalNotNull_TisTilemap_t18C4166D0AC702D5BFC0C411FA73C4B61D9D1751_m82D224678369601467142F86AEE1B6684056544D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Span_1_GetPinnableReference_mBE1FB81DA3F0ACBFCC01E850CAEB91A5FF5FCDEE_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Span_1__ctor_m2FF12B712FEDB8173F74807DC6FF2C18126FF8CF_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Span_1_get_Length_mF4C43881CB4622B68DB84785142C44ADE93E85D7_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	Span_1_tC29EC1099E0CDA9241D8A63482E444F1E1FE1FDA V_0;
	memset((&V_0), 0, sizeof(V_0));
	Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376* V_1 = NULL;
	ManagedSpanWrapper_tE7FC4BBB631B130757F8DEB15853D98FD3D5DC0E V_2;
	memset((&V_2), 0, sizeof(V_2));
	intptr_t G_B2_0;
	memset((&G_B2_0), 0, sizeof(G_B2_0));
	intptr_t G_B1_0;
	memset((&G_B1_0), 0, sizeof(G_B1_0));
	{
		intptr_t L_0;
		L_0 = MarshalledUnityObject_MarshalNotNull_TisTilemap_t18C4166D0AC702D5BFC0C411FA73C4B61D9D1751_m82D224678369601467142F86AEE1B6684056544D_inline(__this, MarshalledUnityObject_MarshalNotNull_TisTilemap_t18C4166D0AC702D5BFC0C411FA73C4B61D9D1751_m82D224678369601467142F86AEE1B6684056544D_RuntimeMethod_var);
		intptr_t L_1 = L_0;
		if (L_1)
		{
			G_B2_0 = L_1;
			goto IL_000f;
		}
		G_B1_0 = L_1;
	}
	{
		ThrowHelper_ThrowNullReferenceException_mA9C7629D32240EE0218631933DAC647668CA63CF(__this, NULL);
		G_B2_0 = G_B1_0;
	}

IL_000f:
	{
		Vector3IntU5BU5D_t7A7C64EB93B0E0C1989C82C3D0A003294FC6EC5E* L_2 = ___0_positionArray;
		Span_1__ctor_m2FF12B712FEDB8173F74807DC6FF2C18126FF8CF_inline((&V_0), L_2, Span_1__ctor_m2FF12B712FEDB8173F74807DC6FF2C18126FF8CF_RuntimeMethod_var);
		Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376* L_3;
		L_3 = Span_1_GetPinnableReference_mBE1FB81DA3F0ACBFCC01E850CAEB91A5FF5FCDEE((&V_0), Span_1_GetPinnableReference_mBE1FB81DA3F0ACBFCC01E850CAEB91A5FF5FCDEE_RuntimeMethod_var);
		V_1 = L_3;
		Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376* L_4 = V_1;
		int32_t L_5;
		L_5 = Span_1_get_Length_mF4C43881CB4622B68DB84785142C44ADE93E85D7_inline((&V_0), Span_1_get_Length_mF4C43881CB4622B68DB84785142C44ADE93E85D7_RuntimeMethod_var);
		ManagedSpanWrapper__ctor_mB29647A21BB87EA4DF859E5C2FA2207F47E525D2((&V_2), (void*)((uintptr_t)L_4), L_5, NULL);
		ObjectU5BU5D_tD4BF1BEC72A31DF6611C0B8FA3112AF128FC3F8A* L_6 = ___1_tileArray;
		Tilemap_SetTileAssets_Injected_m072FC87A90CB630183F01F0FE4FAB6C2F4F44B71(G_B2_0, (&V_2), L_6, NULL);
		V_1 = (Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376*)((uintptr_t)0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Tilemap_SetTiles_m640756E2253F1E6B5351B686862F6867D351C714 (Tilemap_t18C4166D0AC702D5BFC0C411FA73C4B61D9D1751* __this, Vector3IntU5BU5D_t7A7C64EB93B0E0C1989C82C3D0A003294FC6EC5E* ___0_positionArray, TileBaseU5BU5D_t4BA5139AFA510FA0FDD6B5F2954ABB77EBA12FB7* ___1_tileArray, const RuntimeMethod* method) 
{
	ObjectU5BU5D_tD4BF1BEC72A31DF6611C0B8FA3112AF128FC3F8A* V_0 = NULL;
	{
		Vector3IntU5BU5D_t7A7C64EB93B0E0C1989C82C3D0A003294FC6EC5E* L_0 = ___0_positionArray;
		TileBaseU5BU5D_t4BA5139AFA510FA0FDD6B5F2954ABB77EBA12FB7* L_1 = ___1_tileArray;
		V_0 = (ObjectU5BU5D_tD4BF1BEC72A31DF6611C0B8FA3112AF128FC3F8A*)L_1;
		ObjectU5BU5D_tD4BF1BEC72A31DF6611C0B8FA3112AF128FC3F8A* L_2 = V_0;
		Tilemap_SetTileAssets_m80E6341D44AE4E50942B6A4A8E66CC45F8BEDAD5(__this, L_0, L_2, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Tilemap_INTERNAL_CALL_SetTileAssetsBlock_mD20C1320B3C36E2A5F79BFF9A6B9EAABF3AF5437 (Tilemap_t18C4166D0AC702D5BFC0C411FA73C4B61D9D1751* __this, Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376 ___0_position, Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376 ___1_blockDimensions, ObjectU5BU5D_tD4BF1BEC72A31DF6611C0B8FA3112AF128FC3F8A* ___2_tileArray, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MarshalledUnityObject_MarshalNotNull_TisTilemap_t18C4166D0AC702D5BFC0C411FA73C4B61D9D1751_m82D224678369601467142F86AEE1B6684056544D_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	intptr_t G_B2_0;
	memset((&G_B2_0), 0, sizeof(G_B2_0));
	intptr_t G_B1_0;
	memset((&G_B1_0), 0, sizeof(G_B1_0));
	{
		intptr_t L_0;
		L_0 = MarshalledUnityObject_MarshalNotNull_TisTilemap_t18C4166D0AC702D5BFC0C411FA73C4B61D9D1751_m82D224678369601467142F86AEE1B6684056544D_inline(__this, MarshalledUnityObject_MarshalNotNull_TisTilemap_t18C4166D0AC702D5BFC0C411FA73C4B61D9D1751_m82D224678369601467142F86AEE1B6684056544D_RuntimeMethod_var);
		intptr_t L_1 = L_0;
		if (L_1)
		{
			G_B2_0 = L_1;
			goto IL_000f;
		}
		G_B1_0 = L_1;
	}
	{
		ThrowHelper_ThrowNullReferenceException_mA9C7629D32240EE0218631933DAC647668CA63CF(__this, NULL);
		G_B2_0 = G_B1_0;
	}

IL_000f:
	{
		ObjectU5BU5D_tD4BF1BEC72A31DF6611C0B8FA3112AF128FC3F8A* L_2 = ___2_tileArray;
		Tilemap_INTERNAL_CALL_SetTileAssetsBlock_Injected_m86571CE6952742F14BBBBB18360F31B7B52B3C38(G_B2_0, (&___0_position), (&___1_blockDimensions), L_2, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Tilemap_SetTilesBlock_m5BCE73C279E736DC854CB5D5240933605F5C7FE0 (Tilemap_t18C4166D0AC702D5BFC0C411FA73C4B61D9D1751* __this, BoundsInt_t4E757DE5EFF9FCB42000F173360DDC63B5585485 ___0_position, TileBaseU5BU5D_t4BA5139AFA510FA0FDD6B5F2954ABB77EBA12FB7* ___1_tileArray, const RuntimeMethod* method) 
{
	ObjectU5BU5D_tD4BF1BEC72A31DF6611C0B8FA3112AF128FC3F8A* V_0 = NULL;
	{
		Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376 L_0;
		L_0 = BoundsInt_get_min_m68D854200F7ED4AED677ECC53F26AA0834A715AE_inline((&___0_position), NULL);
		Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376 L_1;
		L_1 = BoundsInt_get_size_mE7C4A0C3BF45CEA7A28ABF98E2C15CB69EF3A32C_inline((&___0_position), NULL);
		TileBaseU5BU5D_t4BA5139AFA510FA0FDD6B5F2954ABB77EBA12FB7* L_2 = ___1_tileArray;
		V_0 = (ObjectU5BU5D_tD4BF1BEC72A31DF6611C0B8FA3112AF128FC3F8A*)L_2;
		ObjectU5BU5D_tD4BF1BEC72A31DF6611C0B8FA3112AF128FC3F8A* L_3 = V_0;
		Tilemap_INTERNAL_CALL_SetTileAssetsBlock_mD20C1320B3C36E2A5F79BFF9A6B9EAABF3AF5437(__this, L_0, L_1, L_3, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Tilemap_SetTile_mE616C36D859B495BED0154C448FFAE16E5D2BE5D (Tilemap_t18C4166D0AC702D5BFC0C411FA73C4B61D9D1751* __this, TileChangeData_t6035410A63723928DB7B86A0880351354ADB635E ___0_tileChangeData, bool ___1_ignoreLockFlags, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MarshalledUnityObject_MarshalNotNull_TisTilemap_t18C4166D0AC702D5BFC0C411FA73C4B61D9D1751_m82D224678369601467142F86AEE1B6684056544D_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	intptr_t G_B2_0;
	memset((&G_B2_0), 0, sizeof(G_B2_0));
	intptr_t G_B1_0;
	memset((&G_B1_0), 0, sizeof(G_B1_0));
	{
		intptr_t L_0;
		L_0 = MarshalledUnityObject_MarshalNotNull_TisTilemap_t18C4166D0AC702D5BFC0C411FA73C4B61D9D1751_m82D224678369601467142F86AEE1B6684056544D_inline(__this, MarshalledUnityObject_MarshalNotNull_TisTilemap_t18C4166D0AC702D5BFC0C411FA73C4B61D9D1751_m82D224678369601467142F86AEE1B6684056544D_RuntimeMethod_var);
		intptr_t L_1 = L_0;
		if (L_1)
		{
			G_B2_0 = L_1;
			goto IL_000f;
		}
		G_B1_0 = L_1;
	}
	{
		ThrowHelper_ThrowNullReferenceException_mA9C7629D32240EE0218631933DAC647668CA63CF(__this, NULL);
		G_B2_0 = G_B1_0;
	}

IL_000f:
	{
		bool L_2 = ___1_ignoreLockFlags;
		Tilemap_SetTile_Injected_mEB24C9A9DBCD23CF1890837188E9015086316B99(G_B2_0, (&___0_tileChangeData), L_2, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Tilemap_SetTiles_m4924C2A405E6EE00FA5D57E4EFDBA6DA0E291C80 (Tilemap_t18C4166D0AC702D5BFC0C411FA73C4B61D9D1751* __this, TileChangeDataU5BU5D_t5DE74D19BDE89021FB95C861E05CBDE852AED8BD* ___0_tileChangeDataArray, bool ___1_ignoreLockFlags, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MarshalledUnityObject_MarshalNotNull_TisTilemap_t18C4166D0AC702D5BFC0C411FA73C4B61D9D1751_m82D224678369601467142F86AEE1B6684056544D_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	intptr_t G_B2_0;
	memset((&G_B2_0), 0, sizeof(G_B2_0));
	intptr_t G_B1_0;
	memset((&G_B1_0), 0, sizeof(G_B1_0));
	{
		intptr_t L_0;
		L_0 = MarshalledUnityObject_MarshalNotNull_TisTilemap_t18C4166D0AC702D5BFC0C411FA73C4B61D9D1751_m82D224678369601467142F86AEE1B6684056544D_inline(__this, MarshalledUnityObject_MarshalNotNull_TisTilemap_t18C4166D0AC702D5BFC0C411FA73C4B61D9D1751_m82D224678369601467142F86AEE1B6684056544D_RuntimeMethod_var);
		intptr_t L_1 = L_0;
		if (L_1)
		{
			G_B2_0 = L_1;
			goto IL_000f;
		}
		G_B1_0 = L_1;
	}
	{
		ThrowHelper_ThrowNullReferenceException_mA9C7629D32240EE0218631933DAC647668CA63CF(__this, NULL);
		G_B2_0 = G_B1_0;
	}

IL_000f:
	{
		TileChangeDataU5BU5D_t5DE74D19BDE89021FB95C861E05CBDE852AED8BD* L_2 = ___0_tileChangeDataArray;
		bool L_3 = ___1_ignoreLockFlags;
		Tilemap_SetTiles_Injected_m05404BFADA3F2F390411859BBE122FE1BE17436E(G_B2_0, L_2, L_3, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Tilemap_HasTile_mC868AB1BEA16A2C686BF5CC3C3267780791804F6 (Tilemap_t18C4166D0AC702D5BFC0C411FA73C4B61D9D1751* __this, Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376 ___0_position, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376 L_0 = ___0_position;
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_1;
		L_1 = Tilemap_GetTileAsset_m3B9C96C2E2488141C4F6EBD52C6D807C801C6922(__this, L_0, NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_2;
		L_2 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_1, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		V_0 = L_2;
		goto IL_0011;
	}

IL_0011:
	{
		bool L_3 = V_0;
		return L_3;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Tilemap_RefreshTile_mEF4F94212FD9B311431DFFAFE092A4A6EBA580DF (Tilemap_t18C4166D0AC702D5BFC0C411FA73C4B61D9D1751* __this, Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376 ___0_position, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MarshalledUnityObject_MarshalNotNull_TisTilemap_t18C4166D0AC702D5BFC0C411FA73C4B61D9D1751_m82D224678369601467142F86AEE1B6684056544D_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	intptr_t G_B2_0;
	memset((&G_B2_0), 0, sizeof(G_B2_0));
	intptr_t G_B1_0;
	memset((&G_B1_0), 0, sizeof(G_B1_0));
	{
		intptr_t L_0;
		L_0 = MarshalledUnityObject_MarshalNotNull_TisTilemap_t18C4166D0AC702D5BFC0C411FA73C4B61D9D1751_m82D224678369601467142F86AEE1B6684056544D_inline(__this, MarshalledUnityObject_MarshalNotNull_TisTilemap_t18C4166D0AC702D5BFC0C411FA73C4B61D9D1751_m82D224678369601467142F86AEE1B6684056544D_RuntimeMethod_var);
		intptr_t L_1 = L_0;
		if (L_1)
		{
			G_B2_0 = L_1;
			goto IL_000f;
		}
		G_B1_0 = L_1;
	}
	{
		ThrowHelper_ThrowNullReferenceException_mA9C7629D32240EE0218631933DAC647668CA63CF(__this, NULL);
		G_B2_0 = G_B1_0;
	}

IL_000f:
	{
		Tilemap_RefreshTile_Injected_m9EF6875C16B8F425284A6E681CD466C09B753643(G_B2_0, (&___0_position), NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Tilemap_RefreshTilesNative_mD73E77DFD7C808A3665CA8389F728CBC08A52232 (Tilemap_t18C4166D0AC702D5BFC0C411FA73C4B61D9D1751* __this, void* ___0_positions, int32_t ___1_count, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MarshalledUnityObject_MarshalNotNull_TisTilemap_t18C4166D0AC702D5BFC0C411FA73C4B61D9D1751_m82D224678369601467142F86AEE1B6684056544D_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	intptr_t G_B2_0;
	memset((&G_B2_0), 0, sizeof(G_B2_0));
	intptr_t G_B1_0;
	memset((&G_B1_0), 0, sizeof(G_B1_0));
	{
		intptr_t L_0;
		L_0 = MarshalledUnityObject_MarshalNotNull_TisTilemap_t18C4166D0AC702D5BFC0C411FA73C4B61D9D1751_m82D224678369601467142F86AEE1B6684056544D_inline(__this, MarshalledUnityObject_MarshalNotNull_TisTilemap_t18C4166D0AC702D5BFC0C411FA73C4B61D9D1751_m82D224678369601467142F86AEE1B6684056544D_RuntimeMethod_var);
		intptr_t L_1 = L_0;
		if (L_1)
		{
			G_B2_0 = L_1;
			goto IL_000f;
		}
		G_B1_0 = L_1;
	}
	{
		ThrowHelper_ThrowNullReferenceException_mA9C7629D32240EE0218631933DAC647668CA63CF(__this, NULL);
		G_B2_0 = G_B1_0;
	}

IL_000f:
	{
		void* L_2 = ___0_positions;
		int32_t L_3 = ___1_count;
		Tilemap_RefreshTilesNative_Injected_m1CA76F21817AE189F616BA8585D219973222FAF6(G_B2_0, L_2, L_3, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Tilemap_RefreshAllTiles_mA64BB2AFE77727C6358ACDA467A7B082A0034A9E (Tilemap_t18C4166D0AC702D5BFC0C411FA73C4B61D9D1751* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MarshalledUnityObject_MarshalNotNull_TisTilemap_t18C4166D0AC702D5BFC0C411FA73C4B61D9D1751_m82D224678369601467142F86AEE1B6684056544D_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	intptr_t G_B2_0;
	memset((&G_B2_0), 0, sizeof(G_B2_0));
	intptr_t G_B1_0;
	memset((&G_B1_0), 0, sizeof(G_B1_0));
	{
		intptr_t L_0;
		L_0 = MarshalledUnityObject_MarshalNotNull_TisTilemap_t18C4166D0AC702D5BFC0C411FA73C4B61D9D1751_m82D224678369601467142F86AEE1B6684056544D_inline(__this, MarshalledUnityObject_MarshalNotNull_TisTilemap_t18C4166D0AC702D5BFC0C411FA73C4B61D9D1751_m82D224678369601467142F86AEE1B6684056544D_RuntimeMethod_var);
		intptr_t L_1 = L_0;
		if (L_1)
		{
			G_B2_0 = L_1;
			goto IL_000f;
		}
		G_B1_0 = L_1;
	}
	{
		ThrowHelper_ThrowNullReferenceException_mA9C7629D32240EE0218631933DAC647668CA63CF(__this, NULL);
		G_B2_0 = G_B1_0;
	}

IL_000f:
	{
		Tilemap_RefreshAllTiles_Injected_m5F81411F270FA246D9A5664AD077E338FA20A538(G_B2_0, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Tilemap_SwapTileAsset_m8185544F41428C07809B2F7DCFC4DD808083C287 (Tilemap_t18C4166D0AC702D5BFC0C411FA73C4B61D9D1751* __this, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___0_changeTile, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___1_newTile, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MarshalledUnityObject_MarshalNotNull_TisTilemap_t18C4166D0AC702D5BFC0C411FA73C4B61D9D1751_m82D224678369601467142F86AEE1B6684056544D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MarshalledUnityObject_Marshal_TisObject_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_m965B12ED56AA1618C042D16D10B1BA3BFD98FF4D_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	intptr_t G_B2_0;
	memset((&G_B2_0), 0, sizeof(G_B2_0));
	intptr_t G_B1_0;
	memset((&G_B1_0), 0, sizeof(G_B1_0));
	{
		intptr_t L_0;
		L_0 = MarshalledUnityObject_MarshalNotNull_TisTilemap_t18C4166D0AC702D5BFC0C411FA73C4B61D9D1751_m82D224678369601467142F86AEE1B6684056544D_inline(__this, MarshalledUnityObject_MarshalNotNull_TisTilemap_t18C4166D0AC702D5BFC0C411FA73C4B61D9D1751_m82D224678369601467142F86AEE1B6684056544D_RuntimeMethod_var);
		intptr_t L_1 = L_0;
		if (L_1)
		{
			G_B2_0 = L_1;
			goto IL_000f;
		}
		G_B1_0 = L_1;
	}
	{
		ThrowHelper_ThrowNullReferenceException_mA9C7629D32240EE0218631933DAC647668CA63CF(__this, NULL);
		G_B2_0 = G_B1_0;
	}

IL_000f:
	{
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_2 = ___0_changeTile;
		intptr_t L_3;
		L_3 = MarshalledUnityObject_Marshal_TisObject_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_m965B12ED56AA1618C042D16D10B1BA3BFD98FF4D_inline(L_2, MarshalledUnityObject_Marshal_TisObject_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_m965B12ED56AA1618C042D16D10B1BA3BFD98FF4D_RuntimeMethod_var);
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_4 = ___1_newTile;
		intptr_t L_5;
		L_5 = MarshalledUnityObject_Marshal_TisObject_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_m965B12ED56AA1618C042D16D10B1BA3BFD98FF4D_inline(L_4, MarshalledUnityObject_Marshal_TisObject_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_m965B12ED56AA1618C042D16D10B1BA3BFD98FF4D_RuntimeMethod_var);
		Tilemap_SwapTileAsset_Injected_mFB60CB58E79E2F53020F95587EAE1427452EFFFB(G_B2_0, L_3, L_5, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Tilemap_SwapTile_mF22407A415D515F4FF044D6562C56F76EC14A1F2 (Tilemap_t18C4166D0AC702D5BFC0C411FA73C4B61D9D1751* __this, TileBase_t07019BD771D35E8EA68118157D6EEE4C770CF0F9* ___0_changeTile, TileBase_t07019BD771D35E8EA68118157D6EEE4C770CF0F9* ___1_newTile, const RuntimeMethod* method) 
{
	{
		TileBase_t07019BD771D35E8EA68118157D6EEE4C770CF0F9* L_0 = ___0_changeTile;
		TileBase_t07019BD771D35E8EA68118157D6EEE4C770CF0F9* L_1 = ___1_newTile;
		Tilemap_SwapTileAsset_m8185544F41428C07809B2F7DCFC4DD808083C287(__this, L_0, L_1, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Tilemap_ContainsTileAsset_m14064994385EE754CE7CCF34CE8FB8E5AB299282 (Tilemap_t18C4166D0AC702D5BFC0C411FA73C4B61D9D1751* __this, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___0_tileAsset, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MarshalledUnityObject_MarshalNotNull_TisTilemap_t18C4166D0AC702D5BFC0C411FA73C4B61D9D1751_m82D224678369601467142F86AEE1B6684056544D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MarshalledUnityObject_Marshal_TisObject_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_m965B12ED56AA1618C042D16D10B1BA3BFD98FF4D_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	intptr_t G_B2_0;
	memset((&G_B2_0), 0, sizeof(G_B2_0));
	intptr_t G_B1_0;
	memset((&G_B1_0), 0, sizeof(G_B1_0));
	{
		intptr_t L_0;
		L_0 = MarshalledUnityObject_MarshalNotNull_TisTilemap_t18C4166D0AC702D5BFC0C411FA73C4B61D9D1751_m82D224678369601467142F86AEE1B6684056544D_inline(__this, MarshalledUnityObject_MarshalNotNull_TisTilemap_t18C4166D0AC702D5BFC0C411FA73C4B61D9D1751_m82D224678369601467142F86AEE1B6684056544D_RuntimeMethod_var);
		intptr_t L_1 = L_0;
		if (L_1)
		{
			G_B2_0 = L_1;
			goto IL_000f;
		}
		G_B1_0 = L_1;
	}
	{
		ThrowHelper_ThrowNullReferenceException_mA9C7629D32240EE0218631933DAC647668CA63CF(__this, NULL);
		G_B2_0 = G_B1_0;
	}

IL_000f:
	{
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_2 = ___0_tileAsset;
		intptr_t L_3;
		L_3 = MarshalledUnityObject_Marshal_TisObject_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_m965B12ED56AA1618C042D16D10B1BA3BFD98FF4D_inline(L_2, MarshalledUnityObject_Marshal_TisObject_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_m965B12ED56AA1618C042D16D10B1BA3BFD98FF4D_RuntimeMethod_var);
		bool L_4;
		L_4 = Tilemap_ContainsTileAsset_Injected_mD121FECCF0534A4E18211435B341593657DB0A37(G_B2_0, L_3, NULL);
		return L_4;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Tilemap_ContainsTile_mF736DC44D65279BFF1A13A1B3D0860E0FF27B65D (Tilemap_t18C4166D0AC702D5BFC0C411FA73C4B61D9D1751* __this, TileBase_t07019BD771D35E8EA68118157D6EEE4C770CF0F9* ___0_tileAsset, const RuntimeMethod* method) 
{
	bool V_0 = false;
	{
		TileBase_t07019BD771D35E8EA68118157D6EEE4C770CF0F9* L_0 = ___0_tileAsset;
		bool L_1;
		L_1 = Tilemap_ContainsTileAsset_m14064994385EE754CE7CCF34CE8FB8E5AB299282(__this, L_0, NULL);
		V_0 = L_1;
		goto IL_000b;
	}

IL_000b:
	{
		bool L_2 = V_0;
		return L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Tilemap_GetUsedTilesCount_mF75EB807D49AEF1AA1748984D238B55946A4DD4A (Tilemap_t18C4166D0AC702D5BFC0C411FA73C4B61D9D1751* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MarshalledUnityObject_MarshalNotNull_TisTilemap_t18C4166D0AC702D5BFC0C411FA73C4B61D9D1751_m82D224678369601467142F86AEE1B6684056544D_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	intptr_t G_B2_0;
	memset((&G_B2_0), 0, sizeof(G_B2_0));
	intptr_t G_B1_0;
	memset((&G_B1_0), 0, sizeof(G_B1_0));
	{
		intptr_t L_0;
		L_0 = MarshalledUnityObject_MarshalNotNull_TisTilemap_t18C4166D0AC702D5BFC0C411FA73C4B61D9D1751_m82D224678369601467142F86AEE1B6684056544D_inline(__this, MarshalledUnityObject_MarshalNotNull_TisTilemap_t18C4166D0AC702D5BFC0C411FA73C4B61D9D1751_m82D224678369601467142F86AEE1B6684056544D_RuntimeMethod_var);
		intptr_t L_1 = L_0;
		if (L_1)
		{
			G_B2_0 = L_1;
			goto IL_000f;
		}
		G_B1_0 = L_1;
	}
	{
		ThrowHelper_ThrowNullReferenceException_mA9C7629D32240EE0218631933DAC647668CA63CF(__this, NULL);
		G_B2_0 = G_B1_0;
	}

IL_000f:
	{
		int32_t L_2;
		L_2 = Tilemap_GetUsedTilesCount_Injected_mF9233C510EFA2441B71C2648A0FB4EF03D07E8D1(G_B2_0, NULL);
		return L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Tilemap_GetUsedSpritesCount_m387E8F4A641C83F8E9B5692FD5425CAB654DCC45 (Tilemap_t18C4166D0AC702D5BFC0C411FA73C4B61D9D1751* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MarshalledUnityObject_MarshalNotNull_TisTilemap_t18C4166D0AC702D5BFC0C411FA73C4B61D9D1751_m82D224678369601467142F86AEE1B6684056544D_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	intptr_t G_B2_0;
	memset((&G_B2_0), 0, sizeof(G_B2_0));
	intptr_t G_B1_0;
	memset((&G_B1_0), 0, sizeof(G_B1_0));
	{
		intptr_t L_0;
		L_0 = MarshalledUnityObject_MarshalNotNull_TisTilemap_t18C4166D0AC702D5BFC0C411FA73C4B61D9D1751_m82D224678369601467142F86AEE1B6684056544D_inline(__this, MarshalledUnityObject_MarshalNotNull_TisTilemap_t18C4166D0AC702D5BFC0C411FA73C4B61D9D1751_m82D224678369601467142F86AEE1B6684056544D_RuntimeMethod_var);
		intptr_t L_1 = L_0;
		if (L_1)
		{
			G_B2_0 = L_1;
			goto IL_000f;
		}
		G_B1_0 = L_1;
	}
	{
		ThrowHelper_ThrowNullReferenceException_mA9C7629D32240EE0218631933DAC647668CA63CF(__this, NULL);
		G_B2_0 = G_B1_0;
	}

IL_000f:
	{
		int32_t L_2;
		L_2 = Tilemap_GetUsedSpritesCount_Injected_m48D2A88CE16787F87CB937C7F716E0F688BCE6DE(G_B2_0, NULL);
		return L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Tilemap_GetUsedTilesNonAlloc_m4FEDE5F12A7A1333A4A2082637CFEC76B7903E14 (Tilemap_t18C4166D0AC702D5BFC0C411FA73C4B61D9D1751* __this, TileBaseU5BU5D_t4BA5139AFA510FA0FDD6B5F2954ABB77EBA12FB7* ___0_usedTiles, const RuntimeMethod* method) 
{
	ObjectU5BU5D_tD4BF1BEC72A31DF6611C0B8FA3112AF128FC3F8A* V_0 = NULL;
	int32_t V_1 = 0;
	{
		TileBaseU5BU5D_t4BA5139AFA510FA0FDD6B5F2954ABB77EBA12FB7* L_0 = ___0_usedTiles;
		V_0 = (ObjectU5BU5D_tD4BF1BEC72A31DF6611C0B8FA3112AF128FC3F8A*)L_0;
		ObjectU5BU5D_tD4BF1BEC72A31DF6611C0B8FA3112AF128FC3F8A* L_1 = V_0;
		int32_t L_2;
		L_2 = Tilemap_Internal_GetUsedTilesNonAlloc_m79F745C755C26362833B0F0CC8C5846547EF5C4F(__this, L_1, NULL);
		V_1 = L_2;
		goto IL_000d;
	}

IL_000d:
	{
		int32_t L_3 = V_1;
		return L_3;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Tilemap_GetUsedSpritesNonAlloc_m1E4C3E0C152EFA240A79EC1DCD1CF62502951582 (Tilemap_t18C4166D0AC702D5BFC0C411FA73C4B61D9D1751* __this, SpriteU5BU5D_tCEE379E10CAD9DBFA770B331480592548ED0EA1B* ___0_usedSprites, const RuntimeMethod* method) 
{
	ObjectU5BU5D_tD4BF1BEC72A31DF6611C0B8FA3112AF128FC3F8A* V_0 = NULL;
	int32_t V_1 = 0;
	{
		SpriteU5BU5D_tCEE379E10CAD9DBFA770B331480592548ED0EA1B* L_0 = ___0_usedSprites;
		V_0 = (ObjectU5BU5D_tD4BF1BEC72A31DF6611C0B8FA3112AF128FC3F8A*)L_0;
		ObjectU5BU5D_tD4BF1BEC72A31DF6611C0B8FA3112AF128FC3F8A* L_1 = V_0;
		int32_t L_2;
		L_2 = Tilemap_Internal_GetUsedSpritesNonAlloc_mCDD01ECE51A344C6224D34F199A9F553AF086784(__this, L_1, NULL);
		V_1 = L_2;
		goto IL_000d;
	}

IL_000d:
	{
		int32_t L_3 = V_1;
		return L_3;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Tilemap_Internal_GetUsedTilesNonAlloc_m79F745C755C26362833B0F0CC8C5846547EF5C4F (Tilemap_t18C4166D0AC702D5BFC0C411FA73C4B61D9D1751* __this, ObjectU5BU5D_tD4BF1BEC72A31DF6611C0B8FA3112AF128FC3F8A* ___0_usedTiles, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MarshalledUnityObject_MarshalNotNull_TisTilemap_t18C4166D0AC702D5BFC0C411FA73C4B61D9D1751_m82D224678369601467142F86AEE1B6684056544D_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	intptr_t G_B2_0;
	memset((&G_B2_0), 0, sizeof(G_B2_0));
	intptr_t G_B1_0;
	memset((&G_B1_0), 0, sizeof(G_B1_0));
	{
		intptr_t L_0;
		L_0 = MarshalledUnityObject_MarshalNotNull_TisTilemap_t18C4166D0AC702D5BFC0C411FA73C4B61D9D1751_m82D224678369601467142F86AEE1B6684056544D_inline(__this, MarshalledUnityObject_MarshalNotNull_TisTilemap_t18C4166D0AC702D5BFC0C411FA73C4B61D9D1751_m82D224678369601467142F86AEE1B6684056544D_RuntimeMethod_var);
		intptr_t L_1 = L_0;
		if (L_1)
		{
			G_B2_0 = L_1;
			goto IL_000f;
		}
		G_B1_0 = L_1;
	}
	{
		ThrowHelper_ThrowNullReferenceException_mA9C7629D32240EE0218631933DAC647668CA63CF(__this, NULL);
		G_B2_0 = G_B1_0;
	}

IL_000f:
	{
		ObjectU5BU5D_tD4BF1BEC72A31DF6611C0B8FA3112AF128FC3F8A* L_2 = ___0_usedTiles;
		int32_t L_3;
		L_3 = Tilemap_Internal_GetUsedTilesNonAlloc_Injected_m56C0D831A7D75EAF3FC3B3360D82EF7921C947C2(G_B2_0, L_2, NULL);
		return L_3;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Tilemap_Internal_GetUsedSpritesNonAlloc_mCDD01ECE51A344C6224D34F199A9F553AF086784 (Tilemap_t18C4166D0AC702D5BFC0C411FA73C4B61D9D1751* __this, ObjectU5BU5D_tD4BF1BEC72A31DF6611C0B8FA3112AF128FC3F8A* ___0_usedSprites, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MarshalledUnityObject_MarshalNotNull_TisTilemap_t18C4166D0AC702D5BFC0C411FA73C4B61D9D1751_m82D224678369601467142F86AEE1B6684056544D_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	intptr_t G_B2_0;
	memset((&G_B2_0), 0, sizeof(G_B2_0));
	intptr_t G_B1_0;
	memset((&G_B1_0), 0, sizeof(G_B1_0));
	{
		intptr_t L_0;
		L_0 = MarshalledUnityObject_MarshalNotNull_TisTilemap_t18C4166D0AC702D5BFC0C411FA73C4B61D9D1751_m82D224678369601467142F86AEE1B6684056544D_inline(__this, MarshalledUnityObject_MarshalNotNull_TisTilemap_t18C4166D0AC702D5BFC0C411FA73C4B61D9D1751_m82D224678369601467142F86AEE1B6684056544D_RuntimeMethod_var);
		intptr_t L_1 = L_0;
		if (L_1)
		{
			G_B2_0 = L_1;
			goto IL_000f;
		}
		G_B1_0 = L_1;
	}
	{
		ThrowHelper_ThrowNullReferenceException_mA9C7629D32240EE0218631933DAC647668CA63CF(__this, NULL);
		G_B2_0 = G_B1_0;
	}

IL_000f:
	{
		ObjectU5BU5D_tD4BF1BEC72A31DF6611C0B8FA3112AF128FC3F8A* L_2 = ___0_usedSprites;
		int32_t L_3;
		L_3 = Tilemap_Internal_GetUsedSpritesNonAlloc_Injected_mA87DD54DC56FF5C69E8A57348EB81739718660D6(G_B2_0, L_2, NULL);
		return L_3;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* Tilemap_GetSprite_mF670E851C6BF5A3173758A2723D10F7E01000AD4 (Tilemap_t18C4166D0AC702D5BFC0C411FA73C4B61D9D1751* __this, Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376 ___0_position, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MarshalledUnityObject_MarshalNotNull_TisTilemap_t18C4166D0AC702D5BFC0C411FA73C4B61D9D1751_m82D224678369601467142F86AEE1B6684056544D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Unmarshal_UnmarshalUnityObject_TisSprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99_m8BC0361DEF1936E61A85920BE6C78419B7F7AC44_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	intptr_t G_B2_0;
	memset((&G_B2_0), 0, sizeof(G_B2_0));
	intptr_t G_B1_0;
	memset((&G_B1_0), 0, sizeof(G_B1_0));
	{
		intptr_t L_0;
		L_0 = MarshalledUnityObject_MarshalNotNull_TisTilemap_t18C4166D0AC702D5BFC0C411FA73C4B61D9D1751_m82D224678369601467142F86AEE1B6684056544D_inline(__this, MarshalledUnityObject_MarshalNotNull_TisTilemap_t18C4166D0AC702D5BFC0C411FA73C4B61D9D1751_m82D224678369601467142F86AEE1B6684056544D_RuntimeMethod_var);
		intptr_t L_1 = L_0;
		if (L_1)
		{
			G_B2_0 = L_1;
			goto IL_000f;
		}
		G_B1_0 = L_1;
	}
	{
		ThrowHelper_ThrowNullReferenceException_mA9C7629D32240EE0218631933DAC647668CA63CF(__this, NULL);
		G_B2_0 = G_B1_0;
	}

IL_000f:
	{
		intptr_t L_2;
		L_2 = Tilemap_GetSprite_Injected_m67336B8364F5F92D2B6245817ED20E37567AE9D8(G_B2_0, (&___0_position), NULL);
		Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* L_3;
		L_3 = Unmarshal_UnmarshalUnityObject_TisSprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99_m8BC0361DEF1936E61A85920BE6C78419B7F7AC44_inline(L_2, Unmarshal_UnmarshalUnityObject_TisSprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99_m8BC0361DEF1936E61A85920BE6C78419B7F7AC44_RuntimeMethod_var);
		return L_3;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 Tilemap_GetTransformMatrix_mD2D0E0922FF1AB8478FB8ECEE0CD219FB4801D45 (Tilemap_t18C4166D0AC702D5BFC0C411FA73C4B61D9D1751* __this, Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376 ___0_position, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MarshalledUnityObject_MarshalNotNull_TisTilemap_t18C4166D0AC702D5BFC0C411FA73C4B61D9D1751_m82D224678369601467142F86AEE1B6684056544D_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 V_0;
	memset((&V_0), 0, sizeof(V_0));
	intptr_t G_B2_0;
	memset((&G_B2_0), 0, sizeof(G_B2_0));
	intptr_t G_B1_0;
	memset((&G_B1_0), 0, sizeof(G_B1_0));
	{
		intptr_t L_0;
		L_0 = MarshalledUnityObject_MarshalNotNull_TisTilemap_t18C4166D0AC702D5BFC0C411FA73C4B61D9D1751_m82D224678369601467142F86AEE1B6684056544D_inline(__this, MarshalledUnityObject_MarshalNotNull_TisTilemap_t18C4166D0AC702D5BFC0C411FA73C4B61D9D1751_m82D224678369601467142F86AEE1B6684056544D_RuntimeMethod_var);
		intptr_t L_1 = L_0;
		if (L_1)
		{
			G_B2_0 = L_1;
			goto IL_000f;
		}
		G_B1_0 = L_1;
	}
	{
		ThrowHelper_ThrowNullReferenceException_mA9C7629D32240EE0218631933DAC647668CA63CF(__this, NULL);
		G_B2_0 = G_B1_0;
	}

IL_000f:
	{
		Tilemap_GetTransformMatrix_Injected_m59B5C148BB6892F5C5399E02F5C633FBE04CED78(G_B2_0, (&___0_position), (&V_0), NULL);
		Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 L_2 = V_0;
		return L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Tilemap_SetTransformMatrix_mDE5369FA4AE0968EE5911677081D57F253890780 (Tilemap_t18C4166D0AC702D5BFC0C411FA73C4B61D9D1751* __this, Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376 ___0_position, Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___1_transform, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MarshalledUnityObject_MarshalNotNull_TisTilemap_t18C4166D0AC702D5BFC0C411FA73C4B61D9D1751_m82D224678369601467142F86AEE1B6684056544D_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	intptr_t G_B2_0;
	memset((&G_B2_0), 0, sizeof(G_B2_0));
	intptr_t G_B1_0;
	memset((&G_B1_0), 0, sizeof(G_B1_0));
	{
		intptr_t L_0;
		L_0 = MarshalledUnityObject_MarshalNotNull_TisTilemap_t18C4166D0AC702D5BFC0C411FA73C4B61D9D1751_m82D224678369601467142F86AEE1B6684056544D_inline(__this, MarshalledUnityObject_MarshalNotNull_TisTilemap_t18C4166D0AC702D5BFC0C411FA73C4B61D9D1751_m82D224678369601467142F86AEE1B6684056544D_RuntimeMethod_var);
		intptr_t L_1 = L_0;
		if (L_1)
		{
			G_B2_0 = L_1;
			goto IL_000f;
		}
		G_B1_0 = L_1;
	}
	{
		ThrowHelper_ThrowNullReferenceException_mA9C7629D32240EE0218631933DAC647668CA63CF(__this, NULL);
		G_B2_0 = G_B1_0;
	}

IL_000f:
	{
		Tilemap_SetTransformMatrix_Injected_m197A37112BEF96BA9CF51A160980284A8318CD8C(G_B2_0, (&___0_position), (&___1_transform), NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F Tilemap_GetColor_m988A369F124E34CB104F51F4F505C989097FFB22 (Tilemap_t18C4166D0AC702D5BFC0C411FA73C4B61D9D1751* __this, Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376 ___0_position, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MarshalledUnityObject_MarshalNotNull_TisTilemap_t18C4166D0AC702D5BFC0C411FA73C4B61D9D1751_m82D224678369601467142F86AEE1B6684056544D_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F V_0;
	memset((&V_0), 0, sizeof(V_0));
	intptr_t G_B2_0;
	memset((&G_B2_0), 0, sizeof(G_B2_0));
	intptr_t G_B1_0;
	memset((&G_B1_0), 0, sizeof(G_B1_0));
	{
		intptr_t L_0;
		L_0 = MarshalledUnityObject_MarshalNotNull_TisTilemap_t18C4166D0AC702D5BFC0C411FA73C4B61D9D1751_m82D224678369601467142F86AEE1B6684056544D_inline(__this, MarshalledUnityObject_MarshalNotNull_TisTilemap_t18C4166D0AC702D5BFC0C411FA73C4B61D9D1751_m82D224678369601467142F86AEE1B6684056544D_RuntimeMethod_var);
		intptr_t L_1 = L_0;
		if (L_1)
		{
			G_B2_0 = L_1;
			goto IL_000f;
		}
		G_B1_0 = L_1;
	}
	{
		ThrowHelper_ThrowNullReferenceException_mA9C7629D32240EE0218631933DAC647668CA63CF(__this, NULL);
		G_B2_0 = G_B1_0;
	}

IL_000f:
	{
		Tilemap_GetColor_Injected_mB3E8126997379DCE2AB718A9DCB0F31BFFBEEC1D(G_B2_0, (&___0_position), (&V_0), NULL);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_2 = V_0;
		return L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Tilemap_SetColor_mAD8F9AF56705F031E26DA66C337DBA265C3F664C (Tilemap_t18C4166D0AC702D5BFC0C411FA73C4B61D9D1751* __this, Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376 ___0_position, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___1_color, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MarshalledUnityObject_MarshalNotNull_TisTilemap_t18C4166D0AC702D5BFC0C411FA73C4B61D9D1751_m82D224678369601467142F86AEE1B6684056544D_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	intptr_t G_B2_0;
	memset((&G_B2_0), 0, sizeof(G_B2_0));
	intptr_t G_B1_0;
	memset((&G_B1_0), 0, sizeof(G_B1_0));
	{
		intptr_t L_0;
		L_0 = MarshalledUnityObject_MarshalNotNull_TisTilemap_t18C4166D0AC702D5BFC0C411FA73C4B61D9D1751_m82D224678369601467142F86AEE1B6684056544D_inline(__this, MarshalledUnityObject_MarshalNotNull_TisTilemap_t18C4166D0AC702D5BFC0C411FA73C4B61D9D1751_m82D224678369601467142F86AEE1B6684056544D_RuntimeMethod_var);
		intptr_t L_1 = L_0;
		if (L_1)
		{
			G_B2_0 = L_1;
			goto IL_000f;
		}
		G_B1_0 = L_1;
	}
	{
		ThrowHelper_ThrowNullReferenceException_mA9C7629D32240EE0218631933DAC647668CA63CF(__this, NULL);
		G_B2_0 = G_B1_0;
	}

IL_000f:
	{
		Tilemap_SetColor_Injected_m6BF57E69D72A7BB95EF7E9FA5D9D1AA0CDA4F6A7(G_B2_0, (&___0_position), (&___1_color), NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Tilemap_GetTileFlags_mE872A14709B173A779297DBD8BA9CA090C8B6670 (Tilemap_t18C4166D0AC702D5BFC0C411FA73C4B61D9D1751* __this, Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376 ___0_position, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MarshalledUnityObject_MarshalNotNull_TisTilemap_t18C4166D0AC702D5BFC0C411FA73C4B61D9D1751_m82D224678369601467142F86AEE1B6684056544D_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	intptr_t G_B2_0;
	memset((&G_B2_0), 0, sizeof(G_B2_0));
	intptr_t G_B1_0;
	memset((&G_B1_0), 0, sizeof(G_B1_0));
	{
		intptr_t L_0;
		L_0 = MarshalledUnityObject_MarshalNotNull_TisTilemap_t18C4166D0AC702D5BFC0C411FA73C4B61D9D1751_m82D224678369601467142F86AEE1B6684056544D_inline(__this, MarshalledUnityObject_MarshalNotNull_TisTilemap_t18C4166D0AC702D5BFC0C411FA73C4B61D9D1751_m82D224678369601467142F86AEE1B6684056544D_RuntimeMethod_var);
		intptr_t L_1 = L_0;
		if (L_1)
		{
			G_B2_0 = L_1;
			goto IL_000f;
		}
		G_B1_0 = L_1;
	}
	{
		ThrowHelper_ThrowNullReferenceException_mA9C7629D32240EE0218631933DAC647668CA63CF(__this, NULL);
		G_B2_0 = G_B1_0;
	}

IL_000f:
	{
		int32_t L_2;
		L_2 = Tilemap_GetTileFlags_Injected_m19EEBBB6362FF9D726E57631AADFC18164B855DF(G_B2_0, (&___0_position), NULL);
		return L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Tilemap_SetTileFlags_m7BD0C9773D97AE412E082DE2B1E1254A5C760CCD (Tilemap_t18C4166D0AC702D5BFC0C411FA73C4B61D9D1751* __this, Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376 ___0_position, int32_t ___1_flags, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MarshalledUnityObject_MarshalNotNull_TisTilemap_t18C4166D0AC702D5BFC0C411FA73C4B61D9D1751_m82D224678369601467142F86AEE1B6684056544D_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	intptr_t G_B2_0;
	memset((&G_B2_0), 0, sizeof(G_B2_0));
	intptr_t G_B1_0;
	memset((&G_B1_0), 0, sizeof(G_B1_0));
	{
		intptr_t L_0;
		L_0 = MarshalledUnityObject_MarshalNotNull_TisTilemap_t18C4166D0AC702D5BFC0C411FA73C4B61D9D1751_m82D224678369601467142F86AEE1B6684056544D_inline(__this, MarshalledUnityObject_MarshalNotNull_TisTilemap_t18C4166D0AC702D5BFC0C411FA73C4B61D9D1751_m82D224678369601467142F86AEE1B6684056544D_RuntimeMethod_var);
		intptr_t L_1 = L_0;
		if (L_1)
		{
			G_B2_0 = L_1;
			goto IL_000f;
		}
		G_B1_0 = L_1;
	}
	{
		ThrowHelper_ThrowNullReferenceException_mA9C7629D32240EE0218631933DAC647668CA63CF(__this, NULL);
		G_B2_0 = G_B1_0;
	}

IL_000f:
	{
		int32_t L_2 = ___1_flags;
		Tilemap_SetTileFlags_Injected_m876C1BCE881905255A31AFB2AFC64006748AA12D(G_B2_0, (&___0_position), L_2, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Tilemap_AddTileFlags_m5E441CD29076AE8DFD96124C163304B13B186F6D (Tilemap_t18C4166D0AC702D5BFC0C411FA73C4B61D9D1751* __this, Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376 ___0_position, int32_t ___1_flags, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MarshalledUnityObject_MarshalNotNull_TisTilemap_t18C4166D0AC702D5BFC0C411FA73C4B61D9D1751_m82D224678369601467142F86AEE1B6684056544D_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	intptr_t G_B2_0;
	memset((&G_B2_0), 0, sizeof(G_B2_0));
	intptr_t G_B1_0;
	memset((&G_B1_0), 0, sizeof(G_B1_0));
	{
		intptr_t L_0;
		L_0 = MarshalledUnityObject_MarshalNotNull_TisTilemap_t18C4166D0AC702D5BFC0C411FA73C4B61D9D1751_m82D224678369601467142F86AEE1B6684056544D_inline(__this, MarshalledUnityObject_MarshalNotNull_TisTilemap_t18C4166D0AC702D5BFC0C411FA73C4B61D9D1751_m82D224678369601467142F86AEE1B6684056544D_RuntimeMethod_var);
		intptr_t L_1 = L_0;
		if (L_1)
		{
			G_B2_0 = L_1;
			goto IL_000f;
		}
		G_B1_0 = L_1;
	}
	{
		ThrowHelper_ThrowNullReferenceException_mA9C7629D32240EE0218631933DAC647668CA63CF(__this, NULL);
		G_B2_0 = G_B1_0;
	}

IL_000f:
	{
		int32_t L_2 = ___1_flags;
		Tilemap_AddTileFlags_Injected_mF50DC65964283AB92DCEA38CC985D679E0D8F235(G_B2_0, (&___0_position), L_2, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Tilemap_RemoveTileFlags_m26D2614D61FC658D32B482BD9434CC3A3400AA1A (Tilemap_t18C4166D0AC702D5BFC0C411FA73C4B61D9D1751* __this, Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376 ___0_position, int32_t ___1_flags, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MarshalledUnityObject_MarshalNotNull_TisTilemap_t18C4166D0AC702D5BFC0C411FA73C4B61D9D1751_m82D224678369601467142F86AEE1B6684056544D_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	intptr_t G_B2_0;
	memset((&G_B2_0), 0, sizeof(G_B2_0));
	intptr_t G_B1_0;
	memset((&G_B1_0), 0, sizeof(G_B1_0));
	{
		intptr_t L_0;
		L_0 = MarshalledUnityObject_MarshalNotNull_TisTilemap_t18C4166D0AC702D5BFC0C411FA73C4B61D9D1751_m82D224678369601467142F86AEE1B6684056544D_inline(__this, MarshalledUnityObject_MarshalNotNull_TisTilemap_t18C4166D0AC702D5BFC0C411FA73C4B61D9D1751_m82D224678369601467142F86AEE1B6684056544D_RuntimeMethod_var);
		intptr_t L_1 = L_0;
		if (L_1)
		{
			G_B2_0 = L_1;
			goto IL_000f;
		}
		G_B1_0 = L_1;
	}
	{
		ThrowHelper_ThrowNullReferenceException_mA9C7629D32240EE0218631933DAC647668CA63CF(__this, NULL);
		G_B2_0 = G_B1_0;
	}

IL_000f:
	{
		int32_t L_2 = ___1_flags;
		Tilemap_RemoveTileFlags_Injected_m21DD54BF71A798AD3999C550C43B1903ADA901DE(G_B2_0, (&___0_position), L_2, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* Tilemap_GetInstantiatedObject_m2B87C2D1D2C2A34B5A9199FFA9D8B551B2F481BE (Tilemap_t18C4166D0AC702D5BFC0C411FA73C4B61D9D1751* __this, Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376 ___0_position, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MarshalledUnityObject_MarshalNotNull_TisTilemap_t18C4166D0AC702D5BFC0C411FA73C4B61D9D1751_m82D224678369601467142F86AEE1B6684056544D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Unmarshal_UnmarshalUnityObject_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_mD415D118B2B7811AFB468A2908F39E62F9EF1A8D_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	intptr_t G_B2_0;
	memset((&G_B2_0), 0, sizeof(G_B2_0));
	intptr_t G_B1_0;
	memset((&G_B1_0), 0, sizeof(G_B1_0));
	{
		intptr_t L_0;
		L_0 = MarshalledUnityObject_MarshalNotNull_TisTilemap_t18C4166D0AC702D5BFC0C411FA73C4B61D9D1751_m82D224678369601467142F86AEE1B6684056544D_inline(__this, MarshalledUnityObject_MarshalNotNull_TisTilemap_t18C4166D0AC702D5BFC0C411FA73C4B61D9D1751_m82D224678369601467142F86AEE1B6684056544D_RuntimeMethod_var);
		intptr_t L_1 = L_0;
		if (L_1)
		{
			G_B2_0 = L_1;
			goto IL_000f;
		}
		G_B1_0 = L_1;
	}
	{
		ThrowHelper_ThrowNullReferenceException_mA9C7629D32240EE0218631933DAC647668CA63CF(__this, NULL);
		G_B2_0 = G_B1_0;
	}

IL_000f:
	{
		intptr_t L_2;
		L_2 = Tilemap_GetInstantiatedObject_Injected_mE2BD4C1D554D05A0A3D01F39D09FEC6F28112CE0(G_B2_0, (&___0_position), NULL);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_3;
		L_3 = Unmarshal_UnmarshalUnityObject_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_mD415D118B2B7811AFB468A2908F39E62F9EF1A8D_inline(L_2, Unmarshal_UnmarshalUnityObject_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_mD415D118B2B7811AFB468A2908F39E62F9EF1A8D_RuntimeMethod_var);
		return L_3;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* Tilemap_GetObjectToInstantiate_mFC2C5CEADF9702FA5859F85BD7CB897A538BCAA7 (Tilemap_t18C4166D0AC702D5BFC0C411FA73C4B61D9D1751* __this, Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376 ___0_position, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MarshalledUnityObject_MarshalNotNull_TisTilemap_t18C4166D0AC702D5BFC0C411FA73C4B61D9D1751_m82D224678369601467142F86AEE1B6684056544D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Unmarshal_UnmarshalUnityObject_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_mD415D118B2B7811AFB468A2908F39E62F9EF1A8D_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	intptr_t G_B2_0;
	memset((&G_B2_0), 0, sizeof(G_B2_0));
	intptr_t G_B1_0;
	memset((&G_B1_0), 0, sizeof(G_B1_0));
	{
		intptr_t L_0;
		L_0 = MarshalledUnityObject_MarshalNotNull_TisTilemap_t18C4166D0AC702D5BFC0C411FA73C4B61D9D1751_m82D224678369601467142F86AEE1B6684056544D_inline(__this, MarshalledUnityObject_MarshalNotNull_TisTilemap_t18C4166D0AC702D5BFC0C411FA73C4B61D9D1751_m82D224678369601467142F86AEE1B6684056544D_RuntimeMethod_var);
		intptr_t L_1 = L_0;
		if (L_1)
		{
			G_B2_0 = L_1;
			goto IL_000f;
		}
		G_B1_0 = L_1;
	}
	{
		ThrowHelper_ThrowNullReferenceException_mA9C7629D32240EE0218631933DAC647668CA63CF(__this, NULL);
		G_B2_0 = G_B1_0;
	}

IL_000f:
	{
		intptr_t L_2;
		L_2 = Tilemap_GetObjectToInstantiate_Injected_m5CF717101E10826DF66F9E3D9BD230282A121A60(G_B2_0, (&___0_position), NULL);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_3;
		L_3 = Unmarshal_UnmarshalUnityObject_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_mD415D118B2B7811AFB468A2908F39E62F9EF1A8D_inline(L_2, Unmarshal_UnmarshalUnityObject_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_mD415D118B2B7811AFB468A2908F39E62F9EF1A8D_RuntimeMethod_var);
		return L_3;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Tilemap_SetColliderType_m7E4FAC8E760652936672988F7296033F7EE99175 (Tilemap_t18C4166D0AC702D5BFC0C411FA73C4B61D9D1751* __this, Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376 ___0_position, int32_t ___1_colliderType, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MarshalledUnityObject_MarshalNotNull_TisTilemap_t18C4166D0AC702D5BFC0C411FA73C4B61D9D1751_m82D224678369601467142F86AEE1B6684056544D_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	intptr_t G_B2_0;
	memset((&G_B2_0), 0, sizeof(G_B2_0));
	intptr_t G_B1_0;
	memset((&G_B1_0), 0, sizeof(G_B1_0));
	{
		intptr_t L_0;
		L_0 = MarshalledUnityObject_MarshalNotNull_TisTilemap_t18C4166D0AC702D5BFC0C411FA73C4B61D9D1751_m82D224678369601467142F86AEE1B6684056544D_inline(__this, MarshalledUnityObject_MarshalNotNull_TisTilemap_t18C4166D0AC702D5BFC0C411FA73C4B61D9D1751_m82D224678369601467142F86AEE1B6684056544D_RuntimeMethod_var);
		intptr_t L_1 = L_0;
		if (L_1)
		{
			G_B2_0 = L_1;
			goto IL_000f;
		}
		G_B1_0 = L_1;
	}
	{
		ThrowHelper_ThrowNullReferenceException_mA9C7629D32240EE0218631933DAC647668CA63CF(__this, NULL);
		G_B2_0 = G_B1_0;
	}

IL_000f:
	{
		int32_t L_2 = ___1_colliderType;
		Tilemap_SetColliderType_Injected_mA9E4B30849CCE0226CA27BFF68C4286487ADB18B(G_B2_0, (&___0_position), L_2, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Tilemap_GetColliderType_mFA84D9B33D481FBDFB0FEED69E75A059CF253360 (Tilemap_t18C4166D0AC702D5BFC0C411FA73C4B61D9D1751* __this, Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376 ___0_position, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MarshalledUnityObject_MarshalNotNull_TisTilemap_t18C4166D0AC702D5BFC0C411FA73C4B61D9D1751_m82D224678369601467142F86AEE1B6684056544D_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	intptr_t G_B2_0;
	memset((&G_B2_0), 0, sizeof(G_B2_0));
	intptr_t G_B1_0;
	memset((&G_B1_0), 0, sizeof(G_B1_0));
	{
		intptr_t L_0;
		L_0 = MarshalledUnityObject_MarshalNotNull_TisTilemap_t18C4166D0AC702D5BFC0C411FA73C4B61D9D1751_m82D224678369601467142F86AEE1B6684056544D_inline(__this, MarshalledUnityObject_MarshalNotNull_TisTilemap_t18C4166D0AC702D5BFC0C411FA73C4B61D9D1751_m82D224678369601467142F86AEE1B6684056544D_RuntimeMethod_var);
		intptr_t L_1 = L_0;
		if (L_1)
		{
			G_B2_0 = L_1;
			goto IL_000f;
		}
		G_B1_0 = L_1;
	}
	{
		ThrowHelper_ThrowNullReferenceException_mA9C7629D32240EE0218631933DAC647668CA63CF(__this, NULL);
		G_B2_0 = G_B1_0;
	}

IL_000f:
	{
		int32_t L_2;
		L_2 = Tilemap_GetColliderType_Injected_mD6E392F148DC084125275E12A03C2E0B42E07D6C(G_B2_0, (&___0_position), NULL);
		return L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Tilemap_GetAnimationFrameCount_m44F67E33E32B280FCC06D4A60956019D08AC999E (Tilemap_t18C4166D0AC702D5BFC0C411FA73C4B61D9D1751* __this, Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376 ___0_position, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MarshalledUnityObject_MarshalNotNull_TisTilemap_t18C4166D0AC702D5BFC0C411FA73C4B61D9D1751_m82D224678369601467142F86AEE1B6684056544D_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	intptr_t G_B2_0;
	memset((&G_B2_0), 0, sizeof(G_B2_0));
	intptr_t G_B1_0;
	memset((&G_B1_0), 0, sizeof(G_B1_0));
	{
		intptr_t L_0;
		L_0 = MarshalledUnityObject_MarshalNotNull_TisTilemap_t18C4166D0AC702D5BFC0C411FA73C4B61D9D1751_m82D224678369601467142F86AEE1B6684056544D_inline(__this, MarshalledUnityObject_MarshalNotNull_TisTilemap_t18C4166D0AC702D5BFC0C411FA73C4B61D9D1751_m82D224678369601467142F86AEE1B6684056544D_RuntimeMethod_var);
		intptr_t L_1 = L_0;
		if (L_1)
		{
			G_B2_0 = L_1;
			goto IL_000f;
		}
		G_B1_0 = L_1;
	}
	{
		ThrowHelper_ThrowNullReferenceException_mA9C7629D32240EE0218631933DAC647668CA63CF(__this, NULL);
		G_B2_0 = G_B1_0;
	}

IL_000f:
	{
		int32_t L_2;
		L_2 = Tilemap_GetAnimationFrameCount_Injected_mAF45E7378AF109E32B924085710E174A29DE236C(G_B2_0, (&___0_position), NULL);
		return L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Tilemap_GetAnimationFrame_m5673F18913E65476A5A5649C3F87D4A7E99D86E8 (Tilemap_t18C4166D0AC702D5BFC0C411FA73C4B61D9D1751* __this, Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376 ___0_position, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MarshalledUnityObject_MarshalNotNull_TisTilemap_t18C4166D0AC702D5BFC0C411FA73C4B61D9D1751_m82D224678369601467142F86AEE1B6684056544D_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	intptr_t G_B2_0;
	memset((&G_B2_0), 0, sizeof(G_B2_0));
	intptr_t G_B1_0;
	memset((&G_B1_0), 0, sizeof(G_B1_0));
	{
		intptr_t L_0;
		L_0 = MarshalledUnityObject_MarshalNotNull_TisTilemap_t18C4166D0AC702D5BFC0C411FA73C4B61D9D1751_m82D224678369601467142F86AEE1B6684056544D_inline(__this, MarshalledUnityObject_MarshalNotNull_TisTilemap_t18C4166D0AC702D5BFC0C411FA73C4B61D9D1751_m82D224678369601467142F86AEE1B6684056544D_RuntimeMethod_var);
		intptr_t L_1 = L_0;
		if (L_1)
		{
			G_B2_0 = L_1;
			goto IL_000f;
		}
		G_B1_0 = L_1;
	}
	{
		ThrowHelper_ThrowNullReferenceException_mA9C7629D32240EE0218631933DAC647668CA63CF(__this, NULL);
		G_B2_0 = G_B1_0;
	}

IL_000f:
	{
		int32_t L_2;
		L_2 = Tilemap_GetAnimationFrame_Injected_m4CC1097F39278541A72A97DB6FFFA451107C23F6(G_B2_0, (&___0_position), NULL);
		return L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Tilemap_SetAnimationFrame_mB2FE463E151972FB400B38E13115E70D356C13F9 (Tilemap_t18C4166D0AC702D5BFC0C411FA73C4B61D9D1751* __this, Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376 ___0_position, int32_t ___1_frame, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MarshalledUnityObject_MarshalNotNull_TisTilemap_t18C4166D0AC702D5BFC0C411FA73C4B61D9D1751_m82D224678369601467142F86AEE1B6684056544D_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	intptr_t G_B2_0;
	memset((&G_B2_0), 0, sizeof(G_B2_0));
	intptr_t G_B1_0;
	memset((&G_B1_0), 0, sizeof(G_B1_0));
	{
		intptr_t L_0;
		L_0 = MarshalledUnityObject_MarshalNotNull_TisTilemap_t18C4166D0AC702D5BFC0C411FA73C4B61D9D1751_m82D224678369601467142F86AEE1B6684056544D_inline(__this, MarshalledUnityObject_MarshalNotNull_TisTilemap_t18C4166D0AC702D5BFC0C411FA73C4B61D9D1751_m82D224678369601467142F86AEE1B6684056544D_RuntimeMethod_var);
		intptr_t L_1 = L_0;
		if (L_1)
		{
			G_B2_0 = L_1;
			goto IL_000f;
		}
		G_B1_0 = L_1;
	}
	{
		ThrowHelper_ThrowNullReferenceException_mA9C7629D32240EE0218631933DAC647668CA63CF(__this, NULL);
		G_B2_0 = G_B1_0;
	}

IL_000f:
	{
		int32_t L_2 = ___1_frame;
		Tilemap_SetAnimationFrame_Injected_m85AE283348CB6CBF35B3FA15815F3EB7937DCDCB(G_B2_0, (&___0_position), L_2, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Tilemap_GetAnimationTime_mB1BDC7AB2397D90B03D323C3569D400F894CE4DB (Tilemap_t18C4166D0AC702D5BFC0C411FA73C4B61D9D1751* __this, Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376 ___0_position, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MarshalledUnityObject_MarshalNotNull_TisTilemap_t18C4166D0AC702D5BFC0C411FA73C4B61D9D1751_m82D224678369601467142F86AEE1B6684056544D_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	intptr_t G_B2_0;
	memset((&G_B2_0), 0, sizeof(G_B2_0));
	intptr_t G_B1_0;
	memset((&G_B1_0), 0, sizeof(G_B1_0));
	{
		intptr_t L_0;
		L_0 = MarshalledUnityObject_MarshalNotNull_TisTilemap_t18C4166D0AC702D5BFC0C411FA73C4B61D9D1751_m82D224678369601467142F86AEE1B6684056544D_inline(__this, MarshalledUnityObject_MarshalNotNull_TisTilemap_t18C4166D0AC702D5BFC0C411FA73C4B61D9D1751_m82D224678369601467142F86AEE1B6684056544D_RuntimeMethod_var);
		intptr_t L_1 = L_0;
		if (L_1)
		{
			G_B2_0 = L_1;
			goto IL_000f;
		}
		G_B1_0 = L_1;
	}
	{
		ThrowHelper_ThrowNullReferenceException_mA9C7629D32240EE0218631933DAC647668CA63CF(__this, NULL);
		G_B2_0 = G_B1_0;
	}

IL_000f:
	{
		float L_2;
		L_2 = Tilemap_GetAnimationTime_Injected_m38B7728CC960C0431B8338AFE938F9F7DE2C9554(G_B2_0, (&___0_position), NULL);
		return L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Tilemap_SetAnimationTime_m184310DDFC5FEB60D42C4D3CEA786A406CD60D4A (Tilemap_t18C4166D0AC702D5BFC0C411FA73C4B61D9D1751* __this, Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376 ___0_position, float ___1_time, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MarshalledUnityObject_MarshalNotNull_TisTilemap_t18C4166D0AC702D5BFC0C411FA73C4B61D9D1751_m82D224678369601467142F86AEE1B6684056544D_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	intptr_t G_B2_0;
	memset((&G_B2_0), 0, sizeof(G_B2_0));
	intptr_t G_B1_0;
	memset((&G_B1_0), 0, sizeof(G_B1_0));
	{
		intptr_t L_0;
		L_0 = MarshalledUnityObject_MarshalNotNull_TisTilemap_t18C4166D0AC702D5BFC0C411FA73C4B61D9D1751_m82D224678369601467142F86AEE1B6684056544D_inline(__this, MarshalledUnityObject_MarshalNotNull_TisTilemap_t18C4166D0AC702D5BFC0C411FA73C4B61D9D1751_m82D224678369601467142F86AEE1B6684056544D_RuntimeMethod_var);
		intptr_t L_1 = L_0;
		if (L_1)
		{
			G_B2_0 = L_1;
			goto IL_000f;
		}
		G_B1_0 = L_1;
	}
	{
		ThrowHelper_ThrowNullReferenceException_mA9C7629D32240EE0218631933DAC647668CA63CF(__this, NULL);
		G_B2_0 = G_B1_0;
	}

IL_000f:
	{
		float L_2 = ___1_time;
		Tilemap_SetAnimationTime_Injected_m0C256A070D39F445FB925205911E2899209B51AC(G_B2_0, (&___0_position), L_2, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Tilemap_GetTileAnimationFlags_mEAAD44097328B4CBE061F0C6156B521D351B8F85 (Tilemap_t18C4166D0AC702D5BFC0C411FA73C4B61D9D1751* __this, Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376 ___0_position, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MarshalledUnityObject_MarshalNotNull_TisTilemap_t18C4166D0AC702D5BFC0C411FA73C4B61D9D1751_m82D224678369601467142F86AEE1B6684056544D_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	intptr_t G_B2_0;
	memset((&G_B2_0), 0, sizeof(G_B2_0));
	intptr_t G_B1_0;
	memset((&G_B1_0), 0, sizeof(G_B1_0));
	{
		intptr_t L_0;
		L_0 = MarshalledUnityObject_MarshalNotNull_TisTilemap_t18C4166D0AC702D5BFC0C411FA73C4B61D9D1751_m82D224678369601467142F86AEE1B6684056544D_inline(__this, MarshalledUnityObject_MarshalNotNull_TisTilemap_t18C4166D0AC702D5BFC0C411FA73C4B61D9D1751_m82D224678369601467142F86AEE1B6684056544D_RuntimeMethod_var);
		intptr_t L_1 = L_0;
		if (L_1)
		{
			G_B2_0 = L_1;
			goto IL_000f;
		}
		G_B1_0 = L_1;
	}
	{
		ThrowHelper_ThrowNullReferenceException_mA9C7629D32240EE0218631933DAC647668CA63CF(__this, NULL);
		G_B2_0 = G_B1_0;
	}

IL_000f:
	{
		int32_t L_2;
		L_2 = Tilemap_GetTileAnimationFlags_Injected_m992567070B9B60DB58572FBF2A6B2949AC442488(G_B2_0, (&___0_position), NULL);
		return L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Tilemap_SetTileAnimationFlags_mEA9A69719D5AE7EA413E6C6DF43584E74093C37F (Tilemap_t18C4166D0AC702D5BFC0C411FA73C4B61D9D1751* __this, Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376 ___0_position, int32_t ___1_flags, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MarshalledUnityObject_MarshalNotNull_TisTilemap_t18C4166D0AC702D5BFC0C411FA73C4B61D9D1751_m82D224678369601467142F86AEE1B6684056544D_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	intptr_t G_B2_0;
	memset((&G_B2_0), 0, sizeof(G_B2_0));
	intptr_t G_B1_0;
	memset((&G_B1_0), 0, sizeof(G_B1_0));
	{
		intptr_t L_0;
		L_0 = MarshalledUnityObject_MarshalNotNull_TisTilemap_t18C4166D0AC702D5BFC0C411FA73C4B61D9D1751_m82D224678369601467142F86AEE1B6684056544D_inline(__this, MarshalledUnityObject_MarshalNotNull_TisTilemap_t18C4166D0AC702D5BFC0C411FA73C4B61D9D1751_m82D224678369601467142F86AEE1B6684056544D_RuntimeMethod_var);
		intptr_t L_1 = L_0;
		if (L_1)
		{
			G_B2_0 = L_1;
			goto IL_000f;
		}
		G_B1_0 = L_1;
	}
	{
		ThrowHelper_ThrowNullReferenceException_mA9C7629D32240EE0218631933DAC647668CA63CF(__this, NULL);
		G_B2_0 = G_B1_0;
	}

IL_000f:
	{
		int32_t L_2 = ___1_flags;
		Tilemap_SetTileAnimationFlags_Injected_mA8BE1B6A0277BA38CC0713DB8B1FAB99D042035D(G_B2_0, (&___0_position), L_2, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Tilemap_AddTileAnimationFlags_mC983F01D0CB63718816E5F0B6A257FE57DAB287D (Tilemap_t18C4166D0AC702D5BFC0C411FA73C4B61D9D1751* __this, Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376 ___0_position, int32_t ___1_flags, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MarshalledUnityObject_MarshalNotNull_TisTilemap_t18C4166D0AC702D5BFC0C411FA73C4B61D9D1751_m82D224678369601467142F86AEE1B6684056544D_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	intptr_t G_B2_0;
	memset((&G_B2_0), 0, sizeof(G_B2_0));
	intptr_t G_B1_0;
	memset((&G_B1_0), 0, sizeof(G_B1_0));
	{
		intptr_t L_0;
		L_0 = MarshalledUnityObject_MarshalNotNull_TisTilemap_t18C4166D0AC702D5BFC0C411FA73C4B61D9D1751_m82D224678369601467142F86AEE1B6684056544D_inline(__this, MarshalledUnityObject_MarshalNotNull_TisTilemap_t18C4166D0AC702D5BFC0C411FA73C4B61D9D1751_m82D224678369601467142F86AEE1B6684056544D_RuntimeMethod_var);
		intptr_t L_1 = L_0;
		if (L_1)
		{
			G_B2_0 = L_1;
			goto IL_000f;
		}
		G_B1_0 = L_1;
	}
	{
		ThrowHelper_ThrowNullReferenceException_mA9C7629D32240EE0218631933DAC647668CA63CF(__this, NULL);
		G_B2_0 = G_B1_0;
	}

IL_000f:
	{
		int32_t L_2 = ___1_flags;
		Tilemap_AddTileAnimationFlags_Injected_m8A13EECFEC34A5FA206390B957CA57D8501699F2(G_B2_0, (&___0_position), L_2, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Tilemap_RemoveTileAnimationFlags_mD8BAD515F3F479EE2EC99A38DBFA962ABE11E410 (Tilemap_t18C4166D0AC702D5BFC0C411FA73C4B61D9D1751* __this, Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376 ___0_position, int32_t ___1_flags, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MarshalledUnityObject_MarshalNotNull_TisTilemap_t18C4166D0AC702D5BFC0C411FA73C4B61D9D1751_m82D224678369601467142F86AEE1B6684056544D_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	intptr_t G_B2_0;
	memset((&G_B2_0), 0, sizeof(G_B2_0));
	intptr_t G_B1_0;
	memset((&G_B1_0), 0, sizeof(G_B1_0));
	{
		intptr_t L_0;
		L_0 = MarshalledUnityObject_MarshalNotNull_TisTilemap_t18C4166D0AC702D5BFC0C411FA73C4B61D9D1751_m82D224678369601467142F86AEE1B6684056544D_inline(__this, MarshalledUnityObject_MarshalNotNull_TisTilemap_t18C4166D0AC702D5BFC0C411FA73C4B61D9D1751_m82D224678369601467142F86AEE1B6684056544D_RuntimeMethod_var);
		intptr_t L_1 = L_0;
		if (L_1)
		{
			G_B2_0 = L_1;
			goto IL_000f;
		}
		G_B1_0 = L_1;
	}
	{
		ThrowHelper_ThrowNullReferenceException_mA9C7629D32240EE0218631933DAC647668CA63CF(__this, NULL);
		G_B2_0 = G_B1_0;
	}

IL_000f:
	{
		int32_t L_2 = ___1_flags;
		Tilemap_RemoveTileAnimationFlags_Injected_mB5FA3B46001B459474499CB3C64C8CB30645A21C(G_B2_0, (&___0_position), L_2, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Tilemap_FloodFill_m946D30945658B425C405D8A84DB275B96249FF6B (Tilemap_t18C4166D0AC702D5BFC0C411FA73C4B61D9D1751* __this, Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376 ___0_position, TileBase_t07019BD771D35E8EA68118157D6EEE4C770CF0F9* ___1_tile, const RuntimeMethod* method) 
{
	{
		Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376 L_0 = ___0_position;
		TileBase_t07019BD771D35E8EA68118157D6EEE4C770CF0F9* L_1 = ___1_tile;
		Tilemap_FloodFillTileAsset_mE662F8026F3FA9E054D58640727D57417CD33A9F(__this, L_0, L_1, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Tilemap_FloodFillTileAsset_mE662F8026F3FA9E054D58640727D57417CD33A9F (Tilemap_t18C4166D0AC702D5BFC0C411FA73C4B61D9D1751* __this, Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376 ___0_position, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___1_tile, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MarshalledUnityObject_MarshalNotNull_TisTilemap_t18C4166D0AC702D5BFC0C411FA73C4B61D9D1751_m82D224678369601467142F86AEE1B6684056544D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MarshalledUnityObject_Marshal_TisObject_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_m965B12ED56AA1618C042D16D10B1BA3BFD98FF4D_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	intptr_t G_B2_0;
	memset((&G_B2_0), 0, sizeof(G_B2_0));
	intptr_t G_B1_0;
	memset((&G_B1_0), 0, sizeof(G_B1_0));
	{
		intptr_t L_0;
		L_0 = MarshalledUnityObject_MarshalNotNull_TisTilemap_t18C4166D0AC702D5BFC0C411FA73C4B61D9D1751_m82D224678369601467142F86AEE1B6684056544D_inline(__this, MarshalledUnityObject_MarshalNotNull_TisTilemap_t18C4166D0AC702D5BFC0C411FA73C4B61D9D1751_m82D224678369601467142F86AEE1B6684056544D_RuntimeMethod_var);
		intptr_t L_1 = L_0;
		if (L_1)
		{
			G_B2_0 = L_1;
			goto IL_000f;
		}
		G_B1_0 = L_1;
	}
	{
		ThrowHelper_ThrowNullReferenceException_mA9C7629D32240EE0218631933DAC647668CA63CF(__this, NULL);
		G_B2_0 = G_B1_0;
	}

IL_000f:
	{
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_2 = ___1_tile;
		intptr_t L_3;
		L_3 = MarshalledUnityObject_Marshal_TisObject_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_m965B12ED56AA1618C042D16D10B1BA3BFD98FF4D_inline(L_2, MarshalledUnityObject_Marshal_TisObject_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_m965B12ED56AA1618C042D16D10B1BA3BFD98FF4D_RuntimeMethod_var);
		Tilemap_FloodFillTileAsset_Injected_mFC743B9ECBE9055BDB19FD7E44D0776E97866439(G_B2_0, (&___0_position), L_3, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Tilemap_BoxFill_mBBCC977A18778B3A8C670FABDB81E488D07D829C (Tilemap_t18C4166D0AC702D5BFC0C411FA73C4B61D9D1751* __this, Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376 ___0_position, TileBase_t07019BD771D35E8EA68118157D6EEE4C770CF0F9* ___1_tile, int32_t ___2_startX, int32_t ___3_startY, int32_t ___4_endX, int32_t ___5_endY, const RuntimeMethod* method) 
{
	{
		Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376 L_0 = ___0_position;
		TileBase_t07019BD771D35E8EA68118157D6EEE4C770CF0F9* L_1 = ___1_tile;
		int32_t L_2 = ___2_startX;
		int32_t L_3 = ___3_startY;
		int32_t L_4 = ___4_endX;
		int32_t L_5 = ___5_endY;
		Tilemap_BoxFillTileAsset_mE880ED900FEA8679D2FAB08810A660402EF5A640(__this, L_0, L_1, L_2, L_3, L_4, L_5, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Tilemap_BoxFillTileAsset_mE880ED900FEA8679D2FAB08810A660402EF5A640 (Tilemap_t18C4166D0AC702D5BFC0C411FA73C4B61D9D1751* __this, Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376 ___0_position, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___1_tile, int32_t ___2_startX, int32_t ___3_startY, int32_t ___4_endX, int32_t ___5_endY, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MarshalledUnityObject_MarshalNotNull_TisTilemap_t18C4166D0AC702D5BFC0C411FA73C4B61D9D1751_m82D224678369601467142F86AEE1B6684056544D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MarshalledUnityObject_Marshal_TisObject_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_m965B12ED56AA1618C042D16D10B1BA3BFD98FF4D_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	intptr_t G_B2_0;
	memset((&G_B2_0), 0, sizeof(G_B2_0));
	intptr_t G_B1_0;
	memset((&G_B1_0), 0, sizeof(G_B1_0));
	{
		intptr_t L_0;
		L_0 = MarshalledUnityObject_MarshalNotNull_TisTilemap_t18C4166D0AC702D5BFC0C411FA73C4B61D9D1751_m82D224678369601467142F86AEE1B6684056544D_inline(__this, MarshalledUnityObject_MarshalNotNull_TisTilemap_t18C4166D0AC702D5BFC0C411FA73C4B61D9D1751_m82D224678369601467142F86AEE1B6684056544D_RuntimeMethod_var);
		intptr_t L_1 = L_0;
		if (L_1)
		{
			G_B2_0 = L_1;
			goto IL_000f;
		}
		G_B1_0 = L_1;
	}
	{
		ThrowHelper_ThrowNullReferenceException_mA9C7629D32240EE0218631933DAC647668CA63CF(__this, NULL);
		G_B2_0 = G_B1_0;
	}

IL_000f:
	{
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_2 = ___1_tile;
		intptr_t L_3;
		L_3 = MarshalledUnityObject_Marshal_TisObject_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_m965B12ED56AA1618C042D16D10B1BA3BFD98FF4D_inline(L_2, MarshalledUnityObject_Marshal_TisObject_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_m965B12ED56AA1618C042D16D10B1BA3BFD98FF4D_RuntimeMethod_var);
		int32_t L_4 = ___2_startX;
		int32_t L_5 = ___3_startY;
		int32_t L_6 = ___4_endX;
		int32_t L_7 = ___5_endY;
		Tilemap_BoxFillTileAsset_Injected_m2E23DAD50DC56125C62E74EB984D1AC7D8745450(G_B2_0, (&___0_position), L_3, L_4, L_5, L_6, L_7, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Tilemap_InsertCells_mC8B2BEA451DF07D3C024AA9E6E524A4707F6A2C8 (Tilemap_t18C4166D0AC702D5BFC0C411FA73C4B61D9D1751* __this, Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376 ___0_position, Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376 ___1_insertCells, const RuntimeMethod* method) 
{
	{
		Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376 L_0 = ___0_position;
		int32_t L_1;
		L_1 = Vector3Int_get_x_m21C268D2AA4C03CE35AA49DF6155347C9748054C_inline((&___1_insertCells), NULL);
		int32_t L_2;
		L_2 = Vector3Int_get_y_m42F43000F85D356557CAF03442273E7AA08F7F72_inline((&___1_insertCells), NULL);
		int32_t L_3;
		L_3 = Vector3Int_get_z_m96E180F866145E373F42358F2371EFF446F08AED_inline((&___1_insertCells), NULL);
		Tilemap_InsertCells_mD674C03ECC2F720959DD5140FA70D610355274F3(__this, L_0, L_1, L_2, L_3, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Tilemap_InsertCells_mD674C03ECC2F720959DD5140FA70D610355274F3 (Tilemap_t18C4166D0AC702D5BFC0C411FA73C4B61D9D1751* __this, Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376 ___0_position, int32_t ___1_numColumns, int32_t ___2_numRows, int32_t ___3_numLayers, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MarshalledUnityObject_MarshalNotNull_TisTilemap_t18C4166D0AC702D5BFC0C411FA73C4B61D9D1751_m82D224678369601467142F86AEE1B6684056544D_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	intptr_t G_B2_0;
	memset((&G_B2_0), 0, sizeof(G_B2_0));
	intptr_t G_B1_0;
	memset((&G_B1_0), 0, sizeof(G_B1_0));
	{
		intptr_t L_0;
		L_0 = MarshalledUnityObject_MarshalNotNull_TisTilemap_t18C4166D0AC702D5BFC0C411FA73C4B61D9D1751_m82D224678369601467142F86AEE1B6684056544D_inline(__this, MarshalledUnityObject_MarshalNotNull_TisTilemap_t18C4166D0AC702D5BFC0C411FA73C4B61D9D1751_m82D224678369601467142F86AEE1B6684056544D_RuntimeMethod_var);
		intptr_t L_1 = L_0;
		if (L_1)
		{
			G_B2_0 = L_1;
			goto IL_000f;
		}
		G_B1_0 = L_1;
	}
	{
		ThrowHelper_ThrowNullReferenceException_mA9C7629D32240EE0218631933DAC647668CA63CF(__this, NULL);
		G_B2_0 = G_B1_0;
	}

IL_000f:
	{
		int32_t L_2 = ___1_numColumns;
		int32_t L_3 = ___2_numRows;
		int32_t L_4 = ___3_numLayers;
		Tilemap_InsertCells_Injected_m73ACF06850B17EE349FB12E73FEFB4C526214E44(G_B2_0, (&___0_position), L_2, L_3, L_4, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Tilemap_DeleteCells_m59A5953C64C3870D3829152BD1B7A4F03FDC73F0 (Tilemap_t18C4166D0AC702D5BFC0C411FA73C4B61D9D1751* __this, Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376 ___0_position, Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376 ___1_deleteCells, const RuntimeMethod* method) 
{
	{
		Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376 L_0 = ___0_position;
		int32_t L_1;
		L_1 = Vector3Int_get_x_m21C268D2AA4C03CE35AA49DF6155347C9748054C_inline((&___1_deleteCells), NULL);
		int32_t L_2;
		L_2 = Vector3Int_get_y_m42F43000F85D356557CAF03442273E7AA08F7F72_inline((&___1_deleteCells), NULL);
		int32_t L_3;
		L_3 = Vector3Int_get_z_m96E180F866145E373F42358F2371EFF446F08AED_inline((&___1_deleteCells), NULL);
		Tilemap_DeleteCells_mF179BB21D0E8F5977ABF28FA370FB219CF2EAD6F(__this, L_0, L_1, L_2, L_3, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Tilemap_DeleteCells_mF179BB21D0E8F5977ABF28FA370FB219CF2EAD6F (Tilemap_t18C4166D0AC702D5BFC0C411FA73C4B61D9D1751* __this, Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376 ___0_position, int32_t ___1_numColumns, int32_t ___2_numRows, int32_t ___3_numLayers, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MarshalledUnityObject_MarshalNotNull_TisTilemap_t18C4166D0AC702D5BFC0C411FA73C4B61D9D1751_m82D224678369601467142F86AEE1B6684056544D_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	intptr_t G_B2_0;
	memset((&G_B2_0), 0, sizeof(G_B2_0));
	intptr_t G_B1_0;
	memset((&G_B1_0), 0, sizeof(G_B1_0));
	{
		intptr_t L_0;
		L_0 = MarshalledUnityObject_MarshalNotNull_TisTilemap_t18C4166D0AC702D5BFC0C411FA73C4B61D9D1751_m82D224678369601467142F86AEE1B6684056544D_inline(__this, MarshalledUnityObject_MarshalNotNull_TisTilemap_t18C4166D0AC702D5BFC0C411FA73C4B61D9D1751_m82D224678369601467142F86AEE1B6684056544D_RuntimeMethod_var);
		intptr_t L_1 = L_0;
		if (L_1)
		{
			G_B2_0 = L_1;
			goto IL_000f;
		}
		G_B1_0 = L_1;
	}
	{
		ThrowHelper_ThrowNullReferenceException_mA9C7629D32240EE0218631933DAC647668CA63CF(__this, NULL);
		G_B2_0 = G_B1_0;
	}

IL_000f:
	{
		int32_t L_2 = ___1_numColumns;
		int32_t L_3 = ___2_numRows;
		int32_t L_4 = ___3_numLayers;
		Tilemap_DeleteCells_Injected_mA8D2B41C2A84B561C2254F369C8FB17EB08E0A36(G_B2_0, (&___0_position), L_2, L_3, L_4, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Tilemap_ClearAllTiles_m440B00506358103B65F7A2FE3B3AC44F621FE5B6 (Tilemap_t18C4166D0AC702D5BFC0C411FA73C4B61D9D1751* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MarshalledUnityObject_MarshalNotNull_TisTilemap_t18C4166D0AC702D5BFC0C411FA73C4B61D9D1751_m82D224678369601467142F86AEE1B6684056544D_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	intptr_t G_B2_0;
	memset((&G_B2_0), 0, sizeof(G_B2_0));
	intptr_t G_B1_0;
	memset((&G_B1_0), 0, sizeof(G_B1_0));
	{
		intptr_t L_0;
		L_0 = MarshalledUnityObject_MarshalNotNull_TisTilemap_t18C4166D0AC702D5BFC0C411FA73C4B61D9D1751_m82D224678369601467142F86AEE1B6684056544D_inline(__this, MarshalledUnityObject_MarshalNotNull_TisTilemap_t18C4166D0AC702D5BFC0C411FA73C4B61D9D1751_m82D224678369601467142F86AEE1B6684056544D_RuntimeMethod_var);
		intptr_t L_1 = L_0;
		if (L_1)
		{
			G_B2_0 = L_1;
			goto IL_000f;
		}
		G_B1_0 = L_1;
	}
	{
		ThrowHelper_ThrowNullReferenceException_mA9C7629D32240EE0218631933DAC647668CA63CF(__this, NULL);
		G_B2_0 = G_B1_0;
	}

IL_000f:
	{
		Tilemap_ClearAllTiles_Injected_mA1907919D0EAE3FCD14370073669922F0944E530(G_B2_0, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Tilemap_ResizeBounds_m1D31DCE27D7A86B496D4025323210BDC90058C48 (Tilemap_t18C4166D0AC702D5BFC0C411FA73C4B61D9D1751* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MarshalledUnityObject_MarshalNotNull_TisTilemap_t18C4166D0AC702D5BFC0C411FA73C4B61D9D1751_m82D224678369601467142F86AEE1B6684056544D_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	intptr_t G_B2_0;
	memset((&G_B2_0), 0, sizeof(G_B2_0));
	intptr_t G_B1_0;
	memset((&G_B1_0), 0, sizeof(G_B1_0));
	{
		intptr_t L_0;
		L_0 = MarshalledUnityObject_MarshalNotNull_TisTilemap_t18C4166D0AC702D5BFC0C411FA73C4B61D9D1751_m82D224678369601467142F86AEE1B6684056544D_inline(__this, MarshalledUnityObject_MarshalNotNull_TisTilemap_t18C4166D0AC702D5BFC0C411FA73C4B61D9D1751_m82D224678369601467142F86AEE1B6684056544D_RuntimeMethod_var);
		intptr_t L_1 = L_0;
		if (L_1)
		{
			G_B2_0 = L_1;
			goto IL_000f;
		}
		G_B1_0 = L_1;
	}
	{
		ThrowHelper_ThrowNullReferenceException_mA9C7629D32240EE0218631933DAC647668CA63CF(__this, NULL);
		G_B2_0 = G_B1_0;
	}

IL_000f:
	{
		Tilemap_ResizeBounds_Injected_m5574726944E3196E55444859A53F560639582DF6(G_B2_0, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Tilemap_CompressBounds_m18C02BCE7B7EFF644D5B7B7EC8E6E0CC7B46E531 (Tilemap_t18C4166D0AC702D5BFC0C411FA73C4B61D9D1751* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MarshalledUnityObject_MarshalNotNull_TisTilemap_t18C4166D0AC702D5BFC0C411FA73C4B61D9D1751_m82D224678369601467142F86AEE1B6684056544D_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	intptr_t G_B2_0;
	memset((&G_B2_0), 0, sizeof(G_B2_0));
	intptr_t G_B1_0;
	memset((&G_B1_0), 0, sizeof(G_B1_0));
	{
		intptr_t L_0;
		L_0 = MarshalledUnityObject_MarshalNotNull_TisTilemap_t18C4166D0AC702D5BFC0C411FA73C4B61D9D1751_m82D224678369601467142F86AEE1B6684056544D_inline(__this, MarshalledUnityObject_MarshalNotNull_TisTilemap_t18C4166D0AC702D5BFC0C411FA73C4B61D9D1751_m82D224678369601467142F86AEE1B6684056544D_RuntimeMethod_var);
		intptr_t L_1 = L_0;
		if (L_1)
		{
			G_B2_0 = L_1;
			goto IL_000f;
		}
		G_B1_0 = L_1;
	}
	{
		ThrowHelper_ThrowNullReferenceException_mA9C7629D32240EE0218631933DAC647668CA63CF(__this, NULL);
		G_B2_0 = G_B1_0;
	}

IL_000f:
	{
		Tilemap_CompressBounds_Injected_mD5EF633DD65236DC9C32EA5CBFA0F12A7C73BC52(G_B2_0, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Tilemap_GetLoopEndedForTileAnimationCallbackSettings_mB19F0933D4E0BCBD4EC9BE836B064D25997FDDC8 (Tilemap_t18C4166D0AC702D5BFC0C411FA73C4B61D9D1751* __this, bool* ___0_hasEndLoopForTileAnimationCallback, const RuntimeMethod* method) 
{
	{
		bool* L_0 = ___0_hasEndLoopForTileAnimationCallback;
		bool L_1;
		L_1 = Tilemap_HasLoopEndedForTileAnimationCallback_m6A4AA954E8521E7BFC71B0A44B60DFDE7F7F51BD(NULL);
		*((int8_t*)L_0) = (int8_t)L_1;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Tilemap_DoLoopEndedForTileAnimationCallback_m30B429EAB1964CD0CD09E3043AA926DE715B2763 (Tilemap_t18C4166D0AC702D5BFC0C411FA73C4B61D9D1751* __this, int32_t ___0_count, intptr_t ___1_positionsIntPtr, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___0_count;
		intptr_t L_1 = ___1_positionsIntPtr;
		Tilemap_HandleLoopEndedForTileAnimationCallback_m7BA8FF295BA812311BF3854DB2978EAE03B2F9C1(__this, L_0, L_1, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Tilemap_GetSyncTileCallbackSettings_m1630BBFA37F85D2E29E73EA92DB13C700CC86B29 (Tilemap_t18C4166D0AC702D5BFC0C411FA73C4B61D9D1751* __this, SyncTileCallbackSettings_tBBB8B7336BDE6E578C7A7B1D322A9B1273A76CDA* ___0_settings, const RuntimeMethod* method) 
{
	{
		SyncTileCallbackSettings_tBBB8B7336BDE6E578C7A7B1D322A9B1273A76CDA* L_0 = ___0_settings;
		bool L_1;
		L_1 = Tilemap_HasSyncTileCallback_m522AE13C1DEBDDA7EBC7C9BAF1302EB75EF3A0EB(NULL);
		L_0->___hasSyncTileCallback = L_1;
		SyncTileCallbackSettings_tBBB8B7336BDE6E578C7A7B1D322A9B1273A76CDA* L_2 = ___0_settings;
		bool L_3;
		L_3 = Tilemap_HasPositionsChangedCallback_mD02A9A567086C4F60CA7B4733EAFD173289857FF(NULL);
		L_2->___hasPositionsChangedCallback = L_3;
		SyncTileCallbackSettings_tBBB8B7336BDE6E578C7A7B1D322A9B1273A76CDA* L_4 = ___0_settings;
		bool L_5;
		L_5 = Tilemap_get_bufferSyncTile_m5506F240CC262FD454CFF9B547F16530F9506B1D(__this, NULL);
		L_4->___isBufferSyncTile = L_5;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Tilemap_SendAndClearSyncTileBuffer_m08E46EDA97D453F5A365E3DC1BBEBB6F74301067 (Tilemap_t18C4166D0AC702D5BFC0C411FA73C4B61D9D1751* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MarshalledUnityObject_MarshalNotNull_TisTilemap_t18C4166D0AC702D5BFC0C411FA73C4B61D9D1751_m82D224678369601467142F86AEE1B6684056544D_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	intptr_t G_B2_0;
	memset((&G_B2_0), 0, sizeof(G_B2_0));
	intptr_t G_B1_0;
	memset((&G_B1_0), 0, sizeof(G_B1_0));
	{
		intptr_t L_0;
		L_0 = MarshalledUnityObject_MarshalNotNull_TisTilemap_t18C4166D0AC702D5BFC0C411FA73C4B61D9D1751_m82D224678369601467142F86AEE1B6684056544D_inline(__this, MarshalledUnityObject_MarshalNotNull_TisTilemap_t18C4166D0AC702D5BFC0C411FA73C4B61D9D1751_m82D224678369601467142F86AEE1B6684056544D_RuntimeMethod_var);
		intptr_t L_1 = L_0;
		if (L_1)
		{
			G_B2_0 = L_1;
			goto IL_000f;
		}
		G_B1_0 = L_1;
	}
	{
		ThrowHelper_ThrowNullReferenceException_mA9C7629D32240EE0218631933DAC647668CA63CF(__this, NULL);
		G_B2_0 = G_B1_0;
	}

IL_000f:
	{
		Tilemap_SendAndClearSyncTileBuffer_Injected_mC6E388BB41E30116BEA65C7A0855BC918930FBC4(G_B2_0, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Tilemap_DoSyncTileCallback_m7BF07E7C678E7A55BDF116FA7C5BEF29963402A2 (Tilemap_t18C4166D0AC702D5BFC0C411FA73C4B61D9D1751* __this, SyncTileU5BU5D_t9B4B242D002401F11525388BC75BDAB6A45714FF* ___0_syncTiles, const RuntimeMethod* method) 
{
	{
		SyncTileU5BU5D_t9B4B242D002401F11525388BC75BDAB6A45714FF* L_0 = ___0_syncTiles;
		Tilemap_HandleSyncTileCallback_mF1D8059E6F8ED90041313259D5DCFC3DBEB8750A(__this, L_0, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Tilemap_DoPositionsChangedCallback_mCD3C79A37783BB7DD22454981E0B51394B7990F4 (Tilemap_t18C4166D0AC702D5BFC0C411FA73C4B61D9D1751* __this, int32_t ___0_count, intptr_t ___1_positionsIntPtr, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___0_count;
		intptr_t L_1 = ___1_positionsIntPtr;
		Tilemap_HandlePositionsChangedCallback_mCEC3B01A5328F6C83163C25CE9EDCD87E5895CD0(__this, L_0, L_1, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Tilemap__ctor_m1D0F3884F418FC0D39DE07F85E356B9A733F138C (Tilemap_t18C4166D0AC702D5BFC0C411FA73C4B61D9D1751* __this, const RuntimeMethod* method) 
{
	{
		GridLayout__ctor_m9266D2F9A58091E4214E9E5B69C0E5350F344828(__this, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t Tilemap_get_layoutGrid_Injected_m97844AF3F6F465A1751C66C700C0AD7533816CE5 (intptr_t ___0__unity_self, const RuntimeMethod* method) 
{
	typedef intptr_t (*Tilemap_get_layoutGrid_Injected_m97844AF3F6F465A1751C66C700C0AD7533816CE5_ftn) (intptr_t);
	static Tilemap_get_layoutGrid_Injected_m97844AF3F6F465A1751C66C700C0AD7533816CE5_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Tilemap_get_layoutGrid_Injected_m97844AF3F6F465A1751C66C700C0AD7533816CE5_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Tilemaps.Tilemap::get_layoutGrid_Injected(System.IntPtr)");
	intptr_t icallRetVal = _il2cpp_icall_func(___0__unity_self);
	return icallRetVal;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Tilemap_get_localBounds_Injected_m152CE43998D57709D7DE44792575A54CA32684EF (intptr_t ___0__unity_self, Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3* ___1_ret, const RuntimeMethod* method) 
{
	typedef void (*Tilemap_get_localBounds_Injected_m152CE43998D57709D7DE44792575A54CA32684EF_ftn) (intptr_t, Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3*);
	static Tilemap_get_localBounds_Injected_m152CE43998D57709D7DE44792575A54CA32684EF_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Tilemap_get_localBounds_Injected_m152CE43998D57709D7DE44792575A54CA32684EF_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Tilemaps.Tilemap::get_localBounds_Injected(System.IntPtr,UnityEngine.Bounds&)");
	_il2cpp_icall_func(___0__unity_self, ___1_ret);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Tilemap_get_localFrameBounds_Injected_m0253F8D05490C85058310D075E2C2EA5679D7D20 (intptr_t ___0__unity_self, Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3* ___1_ret, const RuntimeMethod* method) 
{
	typedef void (*Tilemap_get_localFrameBounds_Injected_m0253F8D05490C85058310D075E2C2EA5679D7D20_ftn) (intptr_t, Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3*);
	static Tilemap_get_localFrameBounds_Injected_m0253F8D05490C85058310D075E2C2EA5679D7D20_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Tilemap_get_localFrameBounds_Injected_m0253F8D05490C85058310D075E2C2EA5679D7D20_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Tilemaps.Tilemap::get_localFrameBounds_Injected(System.IntPtr,UnityEngine.Bounds&)");
	_il2cpp_icall_func(___0__unity_self, ___1_ret);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Tilemap_get_animationFrameRate_Injected_m853E4D792F977520F9AF25B875050F0E160CCF45 (intptr_t ___0__unity_self, const RuntimeMethod* method) 
{
	typedef float (*Tilemap_get_animationFrameRate_Injected_m853E4D792F977520F9AF25B875050F0E160CCF45_ftn) (intptr_t);
	static Tilemap_get_animationFrameRate_Injected_m853E4D792F977520F9AF25B875050F0E160CCF45_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Tilemap_get_animationFrameRate_Injected_m853E4D792F977520F9AF25B875050F0E160CCF45_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Tilemaps.Tilemap::get_animationFrameRate_Injected(System.IntPtr)");
	float icallRetVal = _il2cpp_icall_func(___0__unity_self);
	return icallRetVal;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Tilemap_set_animationFrameRate_Injected_m9D0FC3D1E26113F6242D44A86F8C36DDB2D72835 (intptr_t ___0__unity_self, float ___1_value, const RuntimeMethod* method) 
{
	typedef void (*Tilemap_set_animationFrameRate_Injected_m9D0FC3D1E26113F6242D44A86F8C36DDB2D72835_ftn) (intptr_t, float);
	static Tilemap_set_animationFrameRate_Injected_m9D0FC3D1E26113F6242D44A86F8C36DDB2D72835_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Tilemap_set_animationFrameRate_Injected_m9D0FC3D1E26113F6242D44A86F8C36DDB2D72835_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Tilemaps.Tilemap::set_animationFrameRate_Injected(System.IntPtr,System.Single)");
	_il2cpp_icall_func(___0__unity_self, ___1_value);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Tilemap_get_color_Injected_m85B6020D39FE8EE7E8AF3130DE34879D6EA13CF4 (intptr_t ___0__unity_self, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* ___1_ret, const RuntimeMethod* method) 
{
	typedef void (*Tilemap_get_color_Injected_m85B6020D39FE8EE7E8AF3130DE34879D6EA13CF4_ftn) (intptr_t, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F*);
	static Tilemap_get_color_Injected_m85B6020D39FE8EE7E8AF3130DE34879D6EA13CF4_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Tilemap_get_color_Injected_m85B6020D39FE8EE7E8AF3130DE34879D6EA13CF4_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Tilemaps.Tilemap::get_color_Injected(System.IntPtr,UnityEngine.Color&)");
	_il2cpp_icall_func(___0__unity_self, ___1_ret);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Tilemap_set_color_Injected_m09DB4716FFCD96ECBDA1BB38AAACB797470C5A34 (intptr_t ___0__unity_self, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* ___1_value, const RuntimeMethod* method) 
{
	typedef void (*Tilemap_set_color_Injected_m09DB4716FFCD96ECBDA1BB38AAACB797470C5A34_ftn) (intptr_t, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F*);
	static Tilemap_set_color_Injected_m09DB4716FFCD96ECBDA1BB38AAACB797470C5A34_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Tilemap_set_color_Injected_m09DB4716FFCD96ECBDA1BB38AAACB797470C5A34_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Tilemaps.Tilemap::set_color_Injected(System.IntPtr,UnityEngine.Color&)");
	_il2cpp_icall_func(___0__unity_self, ___1_value);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Tilemap_get_origin_Injected_mE1614FE27564626B3726F24F6CC284204A1BDEA2 (intptr_t ___0__unity_self, Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376* ___1_ret, const RuntimeMethod* method) 
{
	typedef void (*Tilemap_get_origin_Injected_mE1614FE27564626B3726F24F6CC284204A1BDEA2_ftn) (intptr_t, Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376*);
	static Tilemap_get_origin_Injected_mE1614FE27564626B3726F24F6CC284204A1BDEA2_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Tilemap_get_origin_Injected_mE1614FE27564626B3726F24F6CC284204A1BDEA2_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Tilemaps.Tilemap::get_origin_Injected(System.IntPtr,UnityEngine.Vector3Int&)");
	_il2cpp_icall_func(___0__unity_self, ___1_ret);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Tilemap_set_origin_Injected_m75FCF12FAA633BE94169CBFA14F75092E6017EDF (intptr_t ___0__unity_self, Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376* ___1_value, const RuntimeMethod* method) 
{
	typedef void (*Tilemap_set_origin_Injected_m75FCF12FAA633BE94169CBFA14F75092E6017EDF_ftn) (intptr_t, Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376*);
	static Tilemap_set_origin_Injected_m75FCF12FAA633BE94169CBFA14F75092E6017EDF_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Tilemap_set_origin_Injected_m75FCF12FAA633BE94169CBFA14F75092E6017EDF_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Tilemaps.Tilemap::set_origin_Injected(System.IntPtr,UnityEngine.Vector3Int&)");
	_il2cpp_icall_func(___0__unity_self, ___1_value);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Tilemap_get_size_Injected_mE4A4FAFA70C3B5BA87CF8E64CD0BCCB8E11323EA (intptr_t ___0__unity_self, Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376* ___1_ret, const RuntimeMethod* method) 
{
	typedef void (*Tilemap_get_size_Injected_mE4A4FAFA70C3B5BA87CF8E64CD0BCCB8E11323EA_ftn) (intptr_t, Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376*);
	static Tilemap_get_size_Injected_mE4A4FAFA70C3B5BA87CF8E64CD0BCCB8E11323EA_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Tilemap_get_size_Injected_mE4A4FAFA70C3B5BA87CF8E64CD0BCCB8E11323EA_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Tilemaps.Tilemap::get_size_Injected(System.IntPtr,UnityEngine.Vector3Int&)");
	_il2cpp_icall_func(___0__unity_self, ___1_ret);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Tilemap_set_size_Injected_m9BC8598EC2320E1FBE4BEAC3200F44F6954E77B4 (intptr_t ___0__unity_self, Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376* ___1_value, const RuntimeMethod* method) 
{
	typedef void (*Tilemap_set_size_Injected_m9BC8598EC2320E1FBE4BEAC3200F44F6954E77B4_ftn) (intptr_t, Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376*);
	static Tilemap_set_size_Injected_m9BC8598EC2320E1FBE4BEAC3200F44F6954E77B4_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Tilemap_set_size_Injected_m9BC8598EC2320E1FBE4BEAC3200F44F6954E77B4_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Tilemaps.Tilemap::set_size_Injected(System.IntPtr,UnityEngine.Vector3Int&)");
	_il2cpp_icall_func(___0__unity_self, ___1_value);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Tilemap_get_tileAnchor_Injected_m7D8067BA5CD69E8B8807AFD721E9BD732E5B8187 (intptr_t ___0__unity_self, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* ___1_ret, const RuntimeMethod* method) 
{
	typedef void (*Tilemap_get_tileAnchor_Injected_m7D8067BA5CD69E8B8807AFD721E9BD732E5B8187_ftn) (intptr_t, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2*);
	static Tilemap_get_tileAnchor_Injected_m7D8067BA5CD69E8B8807AFD721E9BD732E5B8187_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Tilemap_get_tileAnchor_Injected_m7D8067BA5CD69E8B8807AFD721E9BD732E5B8187_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Tilemaps.Tilemap::get_tileAnchor_Injected(System.IntPtr,UnityEngine.Vector3&)");
	_il2cpp_icall_func(___0__unity_self, ___1_ret);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Tilemap_set_tileAnchor_Injected_m26B585516E24D4DB3E2D09E7FDEDE7A29CC1AF5C (intptr_t ___0__unity_self, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* ___1_value, const RuntimeMethod* method) 
{
	typedef void (*Tilemap_set_tileAnchor_Injected_m26B585516E24D4DB3E2D09E7FDEDE7A29CC1AF5C_ftn) (intptr_t, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2*);
	static Tilemap_set_tileAnchor_Injected_m26B585516E24D4DB3E2D09E7FDEDE7A29CC1AF5C_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Tilemap_set_tileAnchor_Injected_m26B585516E24D4DB3E2D09E7FDEDE7A29CC1AF5C_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Tilemaps.Tilemap::set_tileAnchor_Injected(System.IntPtr,UnityEngine.Vector3&)");
	_il2cpp_icall_func(___0__unity_self, ___1_value);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Tilemap_get_orientation_Injected_mB207D5A6B766F40945FAB8150275D9771516D0FD (intptr_t ___0__unity_self, const RuntimeMethod* method) 
{
	typedef int32_t (*Tilemap_get_orientation_Injected_mB207D5A6B766F40945FAB8150275D9771516D0FD_ftn) (intptr_t);
	static Tilemap_get_orientation_Injected_mB207D5A6B766F40945FAB8150275D9771516D0FD_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Tilemap_get_orientation_Injected_mB207D5A6B766F40945FAB8150275D9771516D0FD_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Tilemaps.Tilemap::get_orientation_Injected(System.IntPtr)");
	int32_t icallRetVal = _il2cpp_icall_func(___0__unity_self);
	return icallRetVal;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Tilemap_set_orientation_Injected_m415007E87297A6E6C010ADE04E8F9DA48EADC26E (intptr_t ___0__unity_self, int32_t ___1_value, const RuntimeMethod* method) 
{
	typedef void (*Tilemap_set_orientation_Injected_m415007E87297A6E6C010ADE04E8F9DA48EADC26E_ftn) (intptr_t, int32_t);
	static Tilemap_set_orientation_Injected_m415007E87297A6E6C010ADE04E8F9DA48EADC26E_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Tilemap_set_orientation_Injected_m415007E87297A6E6C010ADE04E8F9DA48EADC26E_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Tilemaps.Tilemap::set_orientation_Injected(System.IntPtr,UnityEngine.Tilemaps.Tilemap/Orientation)");
	_il2cpp_icall_func(___0__unity_self, ___1_value);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Tilemap_get_orientationMatrix_Injected_mD54025C0654F2E07D74364E44A287136074F8646 (intptr_t ___0__unity_self, Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6* ___1_ret, const RuntimeMethod* method) 
{
	typedef void (*Tilemap_get_orientationMatrix_Injected_mD54025C0654F2E07D74364E44A287136074F8646_ftn) (intptr_t, Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6*);
	static Tilemap_get_orientationMatrix_Injected_mD54025C0654F2E07D74364E44A287136074F8646_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Tilemap_get_orientationMatrix_Injected_mD54025C0654F2E07D74364E44A287136074F8646_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Tilemaps.Tilemap::get_orientationMatrix_Injected(System.IntPtr,UnityEngine.Matrix4x4&)");
	_il2cpp_icall_func(___0__unity_self, ___1_ret);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Tilemap_set_orientationMatrix_Injected_m25193FD97D463A5BC2F96CB9BF806C0CC7381E66 (intptr_t ___0__unity_self, Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6* ___1_value, const RuntimeMethod* method) 
{
	typedef void (*Tilemap_set_orientationMatrix_Injected_m25193FD97D463A5BC2F96CB9BF806C0CC7381E66_ftn) (intptr_t, Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6*);
	static Tilemap_set_orientationMatrix_Injected_m25193FD97D463A5BC2F96CB9BF806C0CC7381E66_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Tilemap_set_orientationMatrix_Injected_m25193FD97D463A5BC2F96CB9BF806C0CC7381E66_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Tilemaps.Tilemap::set_orientationMatrix_Injected(System.IntPtr,UnityEngine.Matrix4x4&)");
	_il2cpp_icall_func(___0__unity_self, ___1_value);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t Tilemap_GetTileAsset_Injected_mC4D3F18DDF3496564747BCD4E56631E21456093C (intptr_t ___0__unity_self, Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376* ___1_position, const RuntimeMethod* method) 
{
	typedef intptr_t (*Tilemap_GetTileAsset_Injected_mC4D3F18DDF3496564747BCD4E56631E21456093C_ftn) (intptr_t, Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376*);
	static Tilemap_GetTileAsset_Injected_mC4D3F18DDF3496564747BCD4E56631E21456093C_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Tilemap_GetTileAsset_Injected_mC4D3F18DDF3496564747BCD4E56631E21456093C_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Tilemaps.Tilemap::GetTileAsset_Injected(System.IntPtr,UnityEngine.Vector3Int&)");
	intptr_t icallRetVal = _il2cpp_icall_func(___0__unity_self, ___1_position);
	return icallRetVal;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ObjectU5BU5D_tD4BF1BEC72A31DF6611C0B8FA3112AF128FC3F8A* Tilemap_GetTileAssetsBlock_Injected_mED14CACED7FEAFE71FDC9C468DDC0B628AE29EC5 (intptr_t ___0__unity_self, Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376* ___1_position, Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376* ___2_blockDimensions, const RuntimeMethod* method) 
{
	typedef ObjectU5BU5D_tD4BF1BEC72A31DF6611C0B8FA3112AF128FC3F8A* (*Tilemap_GetTileAssetsBlock_Injected_mED14CACED7FEAFE71FDC9C468DDC0B628AE29EC5_ftn) (intptr_t, Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376*, Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376*);
	static Tilemap_GetTileAssetsBlock_Injected_mED14CACED7FEAFE71FDC9C468DDC0B628AE29EC5_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Tilemap_GetTileAssetsBlock_Injected_mED14CACED7FEAFE71FDC9C468DDC0B628AE29EC5_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Tilemaps.Tilemap::GetTileAssetsBlock_Injected(System.IntPtr,UnityEngine.Vector3Int&,UnityEngine.Vector3Int&)");
	ObjectU5BU5D_tD4BF1BEC72A31DF6611C0B8FA3112AF128FC3F8A* icallRetVal = _il2cpp_icall_func(___0__unity_self, ___1_position, ___2_blockDimensions);
	return icallRetVal;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Tilemap_GetTileAssetsBlockNonAlloc_Injected_mCD0F743A63D39979C36B66FF12C70C27BDC7F69A (intptr_t ___0__unity_self, Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376* ___1_startPosition, Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376* ___2_endPosition, ObjectU5BU5D_tD4BF1BEC72A31DF6611C0B8FA3112AF128FC3F8A* ___3_tiles, const RuntimeMethod* method) 
{
	typedef int32_t (*Tilemap_GetTileAssetsBlockNonAlloc_Injected_mCD0F743A63D39979C36B66FF12C70C27BDC7F69A_ftn) (intptr_t, Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376*, Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376*, ObjectU5BU5D_tD4BF1BEC72A31DF6611C0B8FA3112AF128FC3F8A*);
	static Tilemap_GetTileAssetsBlockNonAlloc_Injected_mCD0F743A63D39979C36B66FF12C70C27BDC7F69A_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Tilemap_GetTileAssetsBlockNonAlloc_Injected_mCD0F743A63D39979C36B66FF12C70C27BDC7F69A_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Tilemaps.Tilemap::GetTileAssetsBlockNonAlloc_Injected(System.IntPtr,UnityEngine.Vector3Int&,UnityEngine.Vector3Int&,UnityEngine.Object[])");
	int32_t icallRetVal = _il2cpp_icall_func(___0__unity_self, ___1_startPosition, ___2_endPosition, ___3_tiles);
	return icallRetVal;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Tilemap_GetTilesRangeCount_Injected_mAB929B5EFCEEB5E61DC537B4E486AB8861B5FE0D (intptr_t ___0__unity_self, Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376* ___1_startPosition, Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376* ___2_endPosition, const RuntimeMethod* method) 
{
	typedef int32_t (*Tilemap_GetTilesRangeCount_Injected_mAB929B5EFCEEB5E61DC537B4E486AB8861B5FE0D_ftn) (intptr_t, Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376*, Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376*);
	static Tilemap_GetTilesRangeCount_Injected_mAB929B5EFCEEB5E61DC537B4E486AB8861B5FE0D_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Tilemap_GetTilesRangeCount_Injected_mAB929B5EFCEEB5E61DC537B4E486AB8861B5FE0D_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Tilemaps.Tilemap::GetTilesRangeCount_Injected(System.IntPtr,UnityEngine.Vector3Int&,UnityEngine.Vector3Int&)");
	int32_t icallRetVal = _il2cpp_icall_func(___0__unity_self, ___1_startPosition, ___2_endPosition);
	return icallRetVal;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Tilemap_GetTileAssetsRangeNonAlloc_Injected_m4FA52158CABD751788603E21E7F0D75EE50272D5 (intptr_t ___0__unity_self, Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376* ___1_startPosition, Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376* ___2_endPosition, ManagedSpanWrapper_tE7FC4BBB631B130757F8DEB15853D98FD3D5DC0E* ___3_positions, ObjectU5BU5D_tD4BF1BEC72A31DF6611C0B8FA3112AF128FC3F8A* ___4_tiles, const RuntimeMethod* method) 
{
	typedef int32_t (*Tilemap_GetTileAssetsRangeNonAlloc_Injected_m4FA52158CABD751788603E21E7F0D75EE50272D5_ftn) (intptr_t, Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376*, Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376*, ManagedSpanWrapper_tE7FC4BBB631B130757F8DEB15853D98FD3D5DC0E*, ObjectU5BU5D_tD4BF1BEC72A31DF6611C0B8FA3112AF128FC3F8A*);
	static Tilemap_GetTileAssetsRangeNonAlloc_Injected_m4FA52158CABD751788603E21E7F0D75EE50272D5_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Tilemap_GetTileAssetsRangeNonAlloc_Injected_m4FA52158CABD751788603E21E7F0D75EE50272D5_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Tilemaps.Tilemap::GetTileAssetsRangeNonAlloc_Injected(System.IntPtr,UnityEngine.Vector3Int&,UnityEngine.Vector3Int&,UnityEngine.Bindings.ManagedSpanWrapper&,UnityEngine.Object[])");
	int32_t icallRetVal = _il2cpp_icall_func(___0__unity_self, ___1_startPosition, ___2_endPosition, ___3_positions, ___4_tiles);
	return icallRetVal;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Tilemap_SetTileAsset_Injected_mC24A398B065AFB28E88A51F38DA4762DD5DCBD4E (intptr_t ___0__unity_self, Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376* ___1_position, intptr_t ___2_tile, const RuntimeMethod* method) 
{
	typedef void (*Tilemap_SetTileAsset_Injected_mC24A398B065AFB28E88A51F38DA4762DD5DCBD4E_ftn) (intptr_t, Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376*, intptr_t);
	static Tilemap_SetTileAsset_Injected_mC24A398B065AFB28E88A51F38DA4762DD5DCBD4E_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Tilemap_SetTileAsset_Injected_mC24A398B065AFB28E88A51F38DA4762DD5DCBD4E_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Tilemaps.Tilemap::SetTileAsset_Injected(System.IntPtr,UnityEngine.Vector3Int&,System.IntPtr)");
	_il2cpp_icall_func(___0__unity_self, ___1_position, ___2_tile);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Tilemap_SetTileAssets_Injected_m072FC87A90CB630183F01F0FE4FAB6C2F4F44B71 (intptr_t ___0__unity_self, ManagedSpanWrapper_tE7FC4BBB631B130757F8DEB15853D98FD3D5DC0E* ___1_positionArray, ObjectU5BU5D_tD4BF1BEC72A31DF6611C0B8FA3112AF128FC3F8A* ___2_tileArray, const RuntimeMethod* method) 
{
	typedef void (*Tilemap_SetTileAssets_Injected_m072FC87A90CB630183F01F0FE4FAB6C2F4F44B71_ftn) (intptr_t, ManagedSpanWrapper_tE7FC4BBB631B130757F8DEB15853D98FD3D5DC0E*, ObjectU5BU5D_tD4BF1BEC72A31DF6611C0B8FA3112AF128FC3F8A*);
	static Tilemap_SetTileAssets_Injected_m072FC87A90CB630183F01F0FE4FAB6C2F4F44B71_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Tilemap_SetTileAssets_Injected_m072FC87A90CB630183F01F0FE4FAB6C2F4F44B71_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Tilemaps.Tilemap::SetTileAssets_Injected(System.IntPtr,UnityEngine.Bindings.ManagedSpanWrapper&,UnityEngine.Object[])");
	_il2cpp_icall_func(___0__unity_self, ___1_positionArray, ___2_tileArray);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Tilemap_INTERNAL_CALL_SetTileAssetsBlock_Injected_m86571CE6952742F14BBBBB18360F31B7B52B3C38 (intptr_t ___0__unity_self, Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376* ___1_position, Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376* ___2_blockDimensions, ObjectU5BU5D_tD4BF1BEC72A31DF6611C0B8FA3112AF128FC3F8A* ___3_tileArray, const RuntimeMethod* method) 
{
	typedef void (*Tilemap_INTERNAL_CALL_SetTileAssetsBlock_Injected_m86571CE6952742F14BBBBB18360F31B7B52B3C38_ftn) (intptr_t, Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376*, Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376*, ObjectU5BU5D_tD4BF1BEC72A31DF6611C0B8FA3112AF128FC3F8A*);
	static Tilemap_INTERNAL_CALL_SetTileAssetsBlock_Injected_m86571CE6952742F14BBBBB18360F31B7B52B3C38_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Tilemap_INTERNAL_CALL_SetTileAssetsBlock_Injected_m86571CE6952742F14BBBBB18360F31B7B52B3C38_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Tilemaps.Tilemap::INTERNAL_CALL_SetTileAssetsBlock_Injected(System.IntPtr,UnityEngine.Vector3Int&,UnityEngine.Vector3Int&,UnityEngine.Object[])");
	_il2cpp_icall_func(___0__unity_self, ___1_position, ___2_blockDimensions, ___3_tileArray);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Tilemap_SetTile_Injected_mEB24C9A9DBCD23CF1890837188E9015086316B99 (intptr_t ___0__unity_self, TileChangeData_t6035410A63723928DB7B86A0880351354ADB635E* ___1_tileChangeData, bool ___2_ignoreLockFlags, const RuntimeMethod* method) 
{
	typedef void (*Tilemap_SetTile_Injected_mEB24C9A9DBCD23CF1890837188E9015086316B99_ftn) (intptr_t, TileChangeData_t6035410A63723928DB7B86A0880351354ADB635E*, bool);
	static Tilemap_SetTile_Injected_mEB24C9A9DBCD23CF1890837188E9015086316B99_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Tilemap_SetTile_Injected_mEB24C9A9DBCD23CF1890837188E9015086316B99_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Tilemaps.Tilemap::SetTile_Injected(System.IntPtr,UnityEngine.Tilemaps.TileChangeData&,System.Boolean)");
	_il2cpp_icall_func(___0__unity_self, ___1_tileChangeData, ___2_ignoreLockFlags);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Tilemap_SetTiles_Injected_m05404BFADA3F2F390411859BBE122FE1BE17436E (intptr_t ___0__unity_self, TileChangeDataU5BU5D_t5DE74D19BDE89021FB95C861E05CBDE852AED8BD* ___1_tileChangeDataArray, bool ___2_ignoreLockFlags, const RuntimeMethod* method) 
{
	typedef void (*Tilemap_SetTiles_Injected_m05404BFADA3F2F390411859BBE122FE1BE17436E_ftn) (intptr_t, TileChangeDataU5BU5D_t5DE74D19BDE89021FB95C861E05CBDE852AED8BD*, bool);
	static Tilemap_SetTiles_Injected_m05404BFADA3F2F390411859BBE122FE1BE17436E_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Tilemap_SetTiles_Injected_m05404BFADA3F2F390411859BBE122FE1BE17436E_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Tilemaps.Tilemap::SetTiles_Injected(System.IntPtr,UnityEngine.Tilemaps.TileChangeData[],System.Boolean)");
	_il2cpp_icall_func(___0__unity_self, ___1_tileChangeDataArray, ___2_ignoreLockFlags);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Tilemap_RefreshTile_Injected_m9EF6875C16B8F425284A6E681CD466C09B753643 (intptr_t ___0__unity_self, Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376* ___1_position, const RuntimeMethod* method) 
{
	typedef void (*Tilemap_RefreshTile_Injected_m9EF6875C16B8F425284A6E681CD466C09B753643_ftn) (intptr_t, Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376*);
	static Tilemap_RefreshTile_Injected_m9EF6875C16B8F425284A6E681CD466C09B753643_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Tilemap_RefreshTile_Injected_m9EF6875C16B8F425284A6E681CD466C09B753643_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Tilemaps.Tilemap::RefreshTile_Injected(System.IntPtr,UnityEngine.Vector3Int&)");
	_il2cpp_icall_func(___0__unity_self, ___1_position);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Tilemap_RefreshTilesNative_Injected_m1CA76F21817AE189F616BA8585D219973222FAF6 (intptr_t ___0__unity_self, void* ___1_positions, int32_t ___2_count, const RuntimeMethod* method) 
{
	typedef void (*Tilemap_RefreshTilesNative_Injected_m1CA76F21817AE189F616BA8585D219973222FAF6_ftn) (intptr_t, void*, int32_t);
	static Tilemap_RefreshTilesNative_Injected_m1CA76F21817AE189F616BA8585D219973222FAF6_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Tilemap_RefreshTilesNative_Injected_m1CA76F21817AE189F616BA8585D219973222FAF6_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Tilemaps.Tilemap::RefreshTilesNative_Injected(System.IntPtr,System.Void*,System.Int32)");
	_il2cpp_icall_func(___0__unity_self, ___1_positions, ___2_count);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Tilemap_RefreshAllTiles_Injected_m5F81411F270FA246D9A5664AD077E338FA20A538 (intptr_t ___0__unity_self, const RuntimeMethod* method) 
{
	typedef void (*Tilemap_RefreshAllTiles_Injected_m5F81411F270FA246D9A5664AD077E338FA20A538_ftn) (intptr_t);
	static Tilemap_RefreshAllTiles_Injected_m5F81411F270FA246D9A5664AD077E338FA20A538_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Tilemap_RefreshAllTiles_Injected_m5F81411F270FA246D9A5664AD077E338FA20A538_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Tilemaps.Tilemap::RefreshAllTiles_Injected(System.IntPtr)");
	_il2cpp_icall_func(___0__unity_self);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Tilemap_SwapTileAsset_Injected_mFB60CB58E79E2F53020F95587EAE1427452EFFFB (intptr_t ___0__unity_self, intptr_t ___1_changeTile, intptr_t ___2_newTile, const RuntimeMethod* method) 
{
	typedef void (*Tilemap_SwapTileAsset_Injected_mFB60CB58E79E2F53020F95587EAE1427452EFFFB_ftn) (intptr_t, intptr_t, intptr_t);
	static Tilemap_SwapTileAsset_Injected_mFB60CB58E79E2F53020F95587EAE1427452EFFFB_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Tilemap_SwapTileAsset_Injected_mFB60CB58E79E2F53020F95587EAE1427452EFFFB_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Tilemaps.Tilemap::SwapTileAsset_Injected(System.IntPtr,System.IntPtr,System.IntPtr)");
	_il2cpp_icall_func(___0__unity_self, ___1_changeTile, ___2_newTile);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Tilemap_ContainsTileAsset_Injected_mD121FECCF0534A4E18211435B341593657DB0A37 (intptr_t ___0__unity_self, intptr_t ___1_tileAsset, const RuntimeMethod* method) 
{
	typedef bool (*Tilemap_ContainsTileAsset_Injected_mD121FECCF0534A4E18211435B341593657DB0A37_ftn) (intptr_t, intptr_t);
	static Tilemap_ContainsTileAsset_Injected_mD121FECCF0534A4E18211435B341593657DB0A37_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Tilemap_ContainsTileAsset_Injected_mD121FECCF0534A4E18211435B341593657DB0A37_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Tilemaps.Tilemap::ContainsTileAsset_Injected(System.IntPtr,System.IntPtr)");
	bool icallRetVal = _il2cpp_icall_func(___0__unity_self, ___1_tileAsset);
	return icallRetVal;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Tilemap_GetUsedTilesCount_Injected_mF9233C510EFA2441B71C2648A0FB4EF03D07E8D1 (intptr_t ___0__unity_self, const RuntimeMethod* method) 
{
	typedef int32_t (*Tilemap_GetUsedTilesCount_Injected_mF9233C510EFA2441B71C2648A0FB4EF03D07E8D1_ftn) (intptr_t);
	static Tilemap_GetUsedTilesCount_Injected_mF9233C510EFA2441B71C2648A0FB4EF03D07E8D1_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Tilemap_GetUsedTilesCount_Injected_mF9233C510EFA2441B71C2648A0FB4EF03D07E8D1_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Tilemaps.Tilemap::GetUsedTilesCount_Injected(System.IntPtr)");
	int32_t icallRetVal = _il2cpp_icall_func(___0__unity_self);
	return icallRetVal;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Tilemap_GetUsedSpritesCount_Injected_m48D2A88CE16787F87CB937C7F716E0F688BCE6DE (intptr_t ___0__unity_self, const RuntimeMethod* method) 
{
	typedef int32_t (*Tilemap_GetUsedSpritesCount_Injected_m48D2A88CE16787F87CB937C7F716E0F688BCE6DE_ftn) (intptr_t);
	static Tilemap_GetUsedSpritesCount_Injected_m48D2A88CE16787F87CB937C7F716E0F688BCE6DE_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Tilemap_GetUsedSpritesCount_Injected_m48D2A88CE16787F87CB937C7F716E0F688BCE6DE_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Tilemaps.Tilemap::GetUsedSpritesCount_Injected(System.IntPtr)");
	int32_t icallRetVal = _il2cpp_icall_func(___0__unity_self);
	return icallRetVal;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Tilemap_Internal_GetUsedTilesNonAlloc_Injected_m56C0D831A7D75EAF3FC3B3360D82EF7921C947C2 (intptr_t ___0__unity_self, ObjectU5BU5D_tD4BF1BEC72A31DF6611C0B8FA3112AF128FC3F8A* ___1_usedTiles, const RuntimeMethod* method) 
{
	typedef int32_t (*Tilemap_Internal_GetUsedTilesNonAlloc_Injected_m56C0D831A7D75EAF3FC3B3360D82EF7921C947C2_ftn) (intptr_t, ObjectU5BU5D_tD4BF1BEC72A31DF6611C0B8FA3112AF128FC3F8A*);
	static Tilemap_Internal_GetUsedTilesNonAlloc_Injected_m56C0D831A7D75EAF3FC3B3360D82EF7921C947C2_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Tilemap_Internal_GetUsedTilesNonAlloc_Injected_m56C0D831A7D75EAF3FC3B3360D82EF7921C947C2_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Tilemaps.Tilemap::Internal_GetUsedTilesNonAlloc_Injected(System.IntPtr,UnityEngine.Object[])");
	int32_t icallRetVal = _il2cpp_icall_func(___0__unity_self, ___1_usedTiles);
	return icallRetVal;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Tilemap_Internal_GetUsedSpritesNonAlloc_Injected_mA87DD54DC56FF5C69E8A57348EB81739718660D6 (intptr_t ___0__unity_self, ObjectU5BU5D_tD4BF1BEC72A31DF6611C0B8FA3112AF128FC3F8A* ___1_usedSprites, const RuntimeMethod* method) 
{
	typedef int32_t (*Tilemap_Internal_GetUsedSpritesNonAlloc_Injected_mA87DD54DC56FF5C69E8A57348EB81739718660D6_ftn) (intptr_t, ObjectU5BU5D_tD4BF1BEC72A31DF6611C0B8FA3112AF128FC3F8A*);
	static Tilemap_Internal_GetUsedSpritesNonAlloc_Injected_mA87DD54DC56FF5C69E8A57348EB81739718660D6_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Tilemap_Internal_GetUsedSpritesNonAlloc_Injected_mA87DD54DC56FF5C69E8A57348EB81739718660D6_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Tilemaps.Tilemap::Internal_GetUsedSpritesNonAlloc_Injected(System.IntPtr,UnityEngine.Object[])");
	int32_t icallRetVal = _il2cpp_icall_func(___0__unity_self, ___1_usedSprites);
	return icallRetVal;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t Tilemap_GetSprite_Injected_m67336B8364F5F92D2B6245817ED20E37567AE9D8 (intptr_t ___0__unity_self, Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376* ___1_position, const RuntimeMethod* method) 
{
	typedef intptr_t (*Tilemap_GetSprite_Injected_m67336B8364F5F92D2B6245817ED20E37567AE9D8_ftn) (intptr_t, Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376*);
	static Tilemap_GetSprite_Injected_m67336B8364F5F92D2B6245817ED20E37567AE9D8_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Tilemap_GetSprite_Injected_m67336B8364F5F92D2B6245817ED20E37567AE9D8_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Tilemaps.Tilemap::GetSprite_Injected(System.IntPtr,UnityEngine.Vector3Int&)");
	intptr_t icallRetVal = _il2cpp_icall_func(___0__unity_self, ___1_position);
	return icallRetVal;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Tilemap_GetTransformMatrix_Injected_m59B5C148BB6892F5C5399E02F5C633FBE04CED78 (intptr_t ___0__unity_self, Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376* ___1_position, Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6* ___2_ret, const RuntimeMethod* method) 
{
	typedef void (*Tilemap_GetTransformMatrix_Injected_m59B5C148BB6892F5C5399E02F5C633FBE04CED78_ftn) (intptr_t, Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376*, Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6*);
	static Tilemap_GetTransformMatrix_Injected_m59B5C148BB6892F5C5399E02F5C633FBE04CED78_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Tilemap_GetTransformMatrix_Injected_m59B5C148BB6892F5C5399E02F5C633FBE04CED78_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Tilemaps.Tilemap::GetTransformMatrix_Injected(System.IntPtr,UnityEngine.Vector3Int&,UnityEngine.Matrix4x4&)");
	_il2cpp_icall_func(___0__unity_self, ___1_position, ___2_ret);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Tilemap_SetTransformMatrix_Injected_m197A37112BEF96BA9CF51A160980284A8318CD8C (intptr_t ___0__unity_self, Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376* ___1_position, Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6* ___2_transform, const RuntimeMethod* method) 
{
	typedef void (*Tilemap_SetTransformMatrix_Injected_m197A37112BEF96BA9CF51A160980284A8318CD8C_ftn) (intptr_t, Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376*, Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6*);
	static Tilemap_SetTransformMatrix_Injected_m197A37112BEF96BA9CF51A160980284A8318CD8C_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Tilemap_SetTransformMatrix_Injected_m197A37112BEF96BA9CF51A160980284A8318CD8C_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Tilemaps.Tilemap::SetTransformMatrix_Injected(System.IntPtr,UnityEngine.Vector3Int&,UnityEngine.Matrix4x4&)");
	_il2cpp_icall_func(___0__unity_self, ___1_position, ___2_transform);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Tilemap_GetColor_Injected_mB3E8126997379DCE2AB718A9DCB0F31BFFBEEC1D (intptr_t ___0__unity_self, Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376* ___1_position, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* ___2_ret, const RuntimeMethod* method) 
{
	typedef void (*Tilemap_GetColor_Injected_mB3E8126997379DCE2AB718A9DCB0F31BFFBEEC1D_ftn) (intptr_t, Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376*, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F*);
	static Tilemap_GetColor_Injected_mB3E8126997379DCE2AB718A9DCB0F31BFFBEEC1D_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Tilemap_GetColor_Injected_mB3E8126997379DCE2AB718A9DCB0F31BFFBEEC1D_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Tilemaps.Tilemap::GetColor_Injected(System.IntPtr,UnityEngine.Vector3Int&,UnityEngine.Color&)");
	_il2cpp_icall_func(___0__unity_self, ___1_position, ___2_ret);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Tilemap_SetColor_Injected_m6BF57E69D72A7BB95EF7E9FA5D9D1AA0CDA4F6A7 (intptr_t ___0__unity_self, Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376* ___1_position, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* ___2_color, const RuntimeMethod* method) 
{
	typedef void (*Tilemap_SetColor_Injected_m6BF57E69D72A7BB95EF7E9FA5D9D1AA0CDA4F6A7_ftn) (intptr_t, Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376*, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F*);
	static Tilemap_SetColor_Injected_m6BF57E69D72A7BB95EF7E9FA5D9D1AA0CDA4F6A7_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Tilemap_SetColor_Injected_m6BF57E69D72A7BB95EF7E9FA5D9D1AA0CDA4F6A7_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Tilemaps.Tilemap::SetColor_Injected(System.IntPtr,UnityEngine.Vector3Int&,UnityEngine.Color&)");
	_il2cpp_icall_func(___0__unity_self, ___1_position, ___2_color);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Tilemap_GetTileFlags_Injected_m19EEBBB6362FF9D726E57631AADFC18164B855DF (intptr_t ___0__unity_self, Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376* ___1_position, const RuntimeMethod* method) 
{
	typedef int32_t (*Tilemap_GetTileFlags_Injected_m19EEBBB6362FF9D726E57631AADFC18164B855DF_ftn) (intptr_t, Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376*);
	static Tilemap_GetTileFlags_Injected_m19EEBBB6362FF9D726E57631AADFC18164B855DF_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Tilemap_GetTileFlags_Injected_m19EEBBB6362FF9D726E57631AADFC18164B855DF_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Tilemaps.Tilemap::GetTileFlags_Injected(System.IntPtr,UnityEngine.Vector3Int&)");
	int32_t icallRetVal = _il2cpp_icall_func(___0__unity_self, ___1_position);
	return icallRetVal;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Tilemap_SetTileFlags_Injected_m876C1BCE881905255A31AFB2AFC64006748AA12D (intptr_t ___0__unity_self, Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376* ___1_position, int32_t ___2_flags, const RuntimeMethod* method) 
{
	typedef void (*Tilemap_SetTileFlags_Injected_m876C1BCE881905255A31AFB2AFC64006748AA12D_ftn) (intptr_t, Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376*, int32_t);
	static Tilemap_SetTileFlags_Injected_m876C1BCE881905255A31AFB2AFC64006748AA12D_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Tilemap_SetTileFlags_Injected_m876C1BCE881905255A31AFB2AFC64006748AA12D_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Tilemaps.Tilemap::SetTileFlags_Injected(System.IntPtr,UnityEngine.Vector3Int&,UnityEngine.Tilemaps.TileFlags)");
	_il2cpp_icall_func(___0__unity_self, ___1_position, ___2_flags);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Tilemap_AddTileFlags_Injected_mF50DC65964283AB92DCEA38CC985D679E0D8F235 (intptr_t ___0__unity_self, Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376* ___1_position, int32_t ___2_flags, const RuntimeMethod* method) 
{
	typedef void (*Tilemap_AddTileFlags_Injected_mF50DC65964283AB92DCEA38CC985D679E0D8F235_ftn) (intptr_t, Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376*, int32_t);
	static Tilemap_AddTileFlags_Injected_mF50DC65964283AB92DCEA38CC985D679E0D8F235_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Tilemap_AddTileFlags_Injected_mF50DC65964283AB92DCEA38CC985D679E0D8F235_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Tilemaps.Tilemap::AddTileFlags_Injected(System.IntPtr,UnityEngine.Vector3Int&,UnityEngine.Tilemaps.TileFlags)");
	_il2cpp_icall_func(___0__unity_self, ___1_position, ___2_flags);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Tilemap_RemoveTileFlags_Injected_m21DD54BF71A798AD3999C550C43B1903ADA901DE (intptr_t ___0__unity_self, Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376* ___1_position, int32_t ___2_flags, const RuntimeMethod* method) 
{
	typedef void (*Tilemap_RemoveTileFlags_Injected_m21DD54BF71A798AD3999C550C43B1903ADA901DE_ftn) (intptr_t, Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376*, int32_t);
	static Tilemap_RemoveTileFlags_Injected_m21DD54BF71A798AD3999C550C43B1903ADA901DE_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Tilemap_RemoveTileFlags_Injected_m21DD54BF71A798AD3999C550C43B1903ADA901DE_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Tilemaps.Tilemap::RemoveTileFlags_Injected(System.IntPtr,UnityEngine.Vector3Int&,UnityEngine.Tilemaps.TileFlags)");
	_il2cpp_icall_func(___0__unity_self, ___1_position, ___2_flags);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t Tilemap_GetInstantiatedObject_Injected_mE2BD4C1D554D05A0A3D01F39D09FEC6F28112CE0 (intptr_t ___0__unity_self, Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376* ___1_position, const RuntimeMethod* method) 
{
	typedef intptr_t (*Tilemap_GetInstantiatedObject_Injected_mE2BD4C1D554D05A0A3D01F39D09FEC6F28112CE0_ftn) (intptr_t, Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376*);
	static Tilemap_GetInstantiatedObject_Injected_mE2BD4C1D554D05A0A3D01F39D09FEC6F28112CE0_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Tilemap_GetInstantiatedObject_Injected_mE2BD4C1D554D05A0A3D01F39D09FEC6F28112CE0_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Tilemaps.Tilemap::GetInstantiatedObject_Injected(System.IntPtr,UnityEngine.Vector3Int&)");
	intptr_t icallRetVal = _il2cpp_icall_func(___0__unity_self, ___1_position);
	return icallRetVal;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t Tilemap_GetObjectToInstantiate_Injected_m5CF717101E10826DF66F9E3D9BD230282A121A60 (intptr_t ___0__unity_self, Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376* ___1_position, const RuntimeMethod* method) 
{
	typedef intptr_t (*Tilemap_GetObjectToInstantiate_Injected_m5CF717101E10826DF66F9E3D9BD230282A121A60_ftn) (intptr_t, Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376*);
	static Tilemap_GetObjectToInstantiate_Injected_m5CF717101E10826DF66F9E3D9BD230282A121A60_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Tilemap_GetObjectToInstantiate_Injected_m5CF717101E10826DF66F9E3D9BD230282A121A60_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Tilemaps.Tilemap::GetObjectToInstantiate_Injected(System.IntPtr,UnityEngine.Vector3Int&)");
	intptr_t icallRetVal = _il2cpp_icall_func(___0__unity_self, ___1_position);
	return icallRetVal;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Tilemap_SetColliderType_Injected_mA9E4B30849CCE0226CA27BFF68C4286487ADB18B (intptr_t ___0__unity_self, Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376* ___1_position, int32_t ___2_colliderType, const RuntimeMethod* method) 
{
	typedef void (*Tilemap_SetColliderType_Injected_mA9E4B30849CCE0226CA27BFF68C4286487ADB18B_ftn) (intptr_t, Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376*, int32_t);
	static Tilemap_SetColliderType_Injected_mA9E4B30849CCE0226CA27BFF68C4286487ADB18B_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Tilemap_SetColliderType_Injected_mA9E4B30849CCE0226CA27BFF68C4286487ADB18B_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Tilemaps.Tilemap::SetColliderType_Injected(System.IntPtr,UnityEngine.Vector3Int&,UnityEngine.Tilemaps.Tile/ColliderType)");
	_il2cpp_icall_func(___0__unity_self, ___1_position, ___2_colliderType);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Tilemap_GetColliderType_Injected_mD6E392F148DC084125275E12A03C2E0B42E07D6C (intptr_t ___0__unity_self, Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376* ___1_position, const RuntimeMethod* method) 
{
	typedef int32_t (*Tilemap_GetColliderType_Injected_mD6E392F148DC084125275E12A03C2E0B42E07D6C_ftn) (intptr_t, Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376*);
	static Tilemap_GetColliderType_Injected_mD6E392F148DC084125275E12A03C2E0B42E07D6C_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Tilemap_GetColliderType_Injected_mD6E392F148DC084125275E12A03C2E0B42E07D6C_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Tilemaps.Tilemap::GetColliderType_Injected(System.IntPtr,UnityEngine.Vector3Int&)");
	int32_t icallRetVal = _il2cpp_icall_func(___0__unity_self, ___1_position);
	return icallRetVal;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Tilemap_GetAnimationFrameCount_Injected_mAF45E7378AF109E32B924085710E174A29DE236C (intptr_t ___0__unity_self, Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376* ___1_position, const RuntimeMethod* method) 
{
	typedef int32_t (*Tilemap_GetAnimationFrameCount_Injected_mAF45E7378AF109E32B924085710E174A29DE236C_ftn) (intptr_t, Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376*);
	static Tilemap_GetAnimationFrameCount_Injected_mAF45E7378AF109E32B924085710E174A29DE236C_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Tilemap_GetAnimationFrameCount_Injected_mAF45E7378AF109E32B924085710E174A29DE236C_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Tilemaps.Tilemap::GetAnimationFrameCount_Injected(System.IntPtr,UnityEngine.Vector3Int&)");
	int32_t icallRetVal = _il2cpp_icall_func(___0__unity_self, ___1_position);
	return icallRetVal;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Tilemap_GetAnimationFrame_Injected_m4CC1097F39278541A72A97DB6FFFA451107C23F6 (intptr_t ___0__unity_self, Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376* ___1_position, const RuntimeMethod* method) 
{
	typedef int32_t (*Tilemap_GetAnimationFrame_Injected_m4CC1097F39278541A72A97DB6FFFA451107C23F6_ftn) (intptr_t, Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376*);
	static Tilemap_GetAnimationFrame_Injected_m4CC1097F39278541A72A97DB6FFFA451107C23F6_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Tilemap_GetAnimationFrame_Injected_m4CC1097F39278541A72A97DB6FFFA451107C23F6_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Tilemaps.Tilemap::GetAnimationFrame_Injected(System.IntPtr,UnityEngine.Vector3Int&)");
	int32_t icallRetVal = _il2cpp_icall_func(___0__unity_self, ___1_position);
	return icallRetVal;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Tilemap_SetAnimationFrame_Injected_m85AE283348CB6CBF35B3FA15815F3EB7937DCDCB (intptr_t ___0__unity_self, Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376* ___1_position, int32_t ___2_frame, const RuntimeMethod* method) 
{
	typedef void (*Tilemap_SetAnimationFrame_Injected_m85AE283348CB6CBF35B3FA15815F3EB7937DCDCB_ftn) (intptr_t, Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376*, int32_t);
	static Tilemap_SetAnimationFrame_Injected_m85AE283348CB6CBF35B3FA15815F3EB7937DCDCB_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Tilemap_SetAnimationFrame_Injected_m85AE283348CB6CBF35B3FA15815F3EB7937DCDCB_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Tilemaps.Tilemap::SetAnimationFrame_Injected(System.IntPtr,UnityEngine.Vector3Int&,System.Int32)");
	_il2cpp_icall_func(___0__unity_self, ___1_position, ___2_frame);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Tilemap_GetAnimationTime_Injected_m38B7728CC960C0431B8338AFE938F9F7DE2C9554 (intptr_t ___0__unity_self, Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376* ___1_position, const RuntimeMethod* method) 
{
	typedef float (*Tilemap_GetAnimationTime_Injected_m38B7728CC960C0431B8338AFE938F9F7DE2C9554_ftn) (intptr_t, Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376*);
	static Tilemap_GetAnimationTime_Injected_m38B7728CC960C0431B8338AFE938F9F7DE2C9554_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Tilemap_GetAnimationTime_Injected_m38B7728CC960C0431B8338AFE938F9F7DE2C9554_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Tilemaps.Tilemap::GetAnimationTime_Injected(System.IntPtr,UnityEngine.Vector3Int&)");
	float icallRetVal = _il2cpp_icall_func(___0__unity_self, ___1_position);
	return icallRetVal;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Tilemap_SetAnimationTime_Injected_m0C256A070D39F445FB925205911E2899209B51AC (intptr_t ___0__unity_self, Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376* ___1_position, float ___2_time, const RuntimeMethod* method) 
{
	typedef void (*Tilemap_SetAnimationTime_Injected_m0C256A070D39F445FB925205911E2899209B51AC_ftn) (intptr_t, Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376*, float);
	static Tilemap_SetAnimationTime_Injected_m0C256A070D39F445FB925205911E2899209B51AC_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Tilemap_SetAnimationTime_Injected_m0C256A070D39F445FB925205911E2899209B51AC_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Tilemaps.Tilemap::SetAnimationTime_Injected(System.IntPtr,UnityEngine.Vector3Int&,System.Single)");
	_il2cpp_icall_func(___0__unity_self, ___1_position, ___2_time);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Tilemap_GetTileAnimationFlags_Injected_m992567070B9B60DB58572FBF2A6B2949AC442488 (intptr_t ___0__unity_self, Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376* ___1_position, const RuntimeMethod* method) 
{
	typedef int32_t (*Tilemap_GetTileAnimationFlags_Injected_m992567070B9B60DB58572FBF2A6B2949AC442488_ftn) (intptr_t, Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376*);
	static Tilemap_GetTileAnimationFlags_Injected_m992567070B9B60DB58572FBF2A6B2949AC442488_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Tilemap_GetTileAnimationFlags_Injected_m992567070B9B60DB58572FBF2A6B2949AC442488_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Tilemaps.Tilemap::GetTileAnimationFlags_Injected(System.IntPtr,UnityEngine.Vector3Int&)");
	int32_t icallRetVal = _il2cpp_icall_func(___0__unity_self, ___1_position);
	return icallRetVal;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Tilemap_SetTileAnimationFlags_Injected_mA8BE1B6A0277BA38CC0713DB8B1FAB99D042035D (intptr_t ___0__unity_self, Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376* ___1_position, int32_t ___2_flags, const RuntimeMethod* method) 
{
	typedef void (*Tilemap_SetTileAnimationFlags_Injected_mA8BE1B6A0277BA38CC0713DB8B1FAB99D042035D_ftn) (intptr_t, Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376*, int32_t);
	static Tilemap_SetTileAnimationFlags_Injected_mA8BE1B6A0277BA38CC0713DB8B1FAB99D042035D_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Tilemap_SetTileAnimationFlags_Injected_mA8BE1B6A0277BA38CC0713DB8B1FAB99D042035D_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Tilemaps.Tilemap::SetTileAnimationFlags_Injected(System.IntPtr,UnityEngine.Vector3Int&,UnityEngine.Tilemaps.TileAnimationFlags)");
	_il2cpp_icall_func(___0__unity_self, ___1_position, ___2_flags);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Tilemap_AddTileAnimationFlags_Injected_m8A13EECFEC34A5FA206390B957CA57D8501699F2 (intptr_t ___0__unity_self, Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376* ___1_position, int32_t ___2_flags, const RuntimeMethod* method) 
{
	typedef void (*Tilemap_AddTileAnimationFlags_Injected_m8A13EECFEC34A5FA206390B957CA57D8501699F2_ftn) (intptr_t, Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376*, int32_t);
	static Tilemap_AddTileAnimationFlags_Injected_m8A13EECFEC34A5FA206390B957CA57D8501699F2_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Tilemap_AddTileAnimationFlags_Injected_m8A13EECFEC34A5FA206390B957CA57D8501699F2_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Tilemaps.Tilemap::AddTileAnimationFlags_Injected(System.IntPtr,UnityEngine.Vector3Int&,UnityEngine.Tilemaps.TileAnimationFlags)");
	_il2cpp_icall_func(___0__unity_self, ___1_position, ___2_flags);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Tilemap_RemoveTileAnimationFlags_Injected_mB5FA3B46001B459474499CB3C64C8CB30645A21C (intptr_t ___0__unity_self, Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376* ___1_position, int32_t ___2_flags, const RuntimeMethod* method) 
{
	typedef void (*Tilemap_RemoveTileAnimationFlags_Injected_mB5FA3B46001B459474499CB3C64C8CB30645A21C_ftn) (intptr_t, Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376*, int32_t);
	static Tilemap_RemoveTileAnimationFlags_Injected_mB5FA3B46001B459474499CB3C64C8CB30645A21C_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Tilemap_RemoveTileAnimationFlags_Injected_mB5FA3B46001B459474499CB3C64C8CB30645A21C_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Tilemaps.Tilemap::RemoveTileAnimationFlags_Injected(System.IntPtr,UnityEngine.Vector3Int&,UnityEngine.Tilemaps.TileAnimationFlags)");
	_il2cpp_icall_func(___0__unity_self, ___1_position, ___2_flags);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Tilemap_FloodFillTileAsset_Injected_mFC743B9ECBE9055BDB19FD7E44D0776E97866439 (intptr_t ___0__unity_self, Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376* ___1_position, intptr_t ___2_tile, const RuntimeMethod* method) 
{
	typedef void (*Tilemap_FloodFillTileAsset_Injected_mFC743B9ECBE9055BDB19FD7E44D0776E97866439_ftn) (intptr_t, Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376*, intptr_t);
	static Tilemap_FloodFillTileAsset_Injected_mFC743B9ECBE9055BDB19FD7E44D0776E97866439_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Tilemap_FloodFillTileAsset_Injected_mFC743B9ECBE9055BDB19FD7E44D0776E97866439_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Tilemaps.Tilemap::FloodFillTileAsset_Injected(System.IntPtr,UnityEngine.Vector3Int&,System.IntPtr)");
	_il2cpp_icall_func(___0__unity_self, ___1_position, ___2_tile);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Tilemap_BoxFillTileAsset_Injected_m2E23DAD50DC56125C62E74EB984D1AC7D8745450 (intptr_t ___0__unity_self, Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376* ___1_position, intptr_t ___2_tile, int32_t ___3_startX, int32_t ___4_startY, int32_t ___5_endX, int32_t ___6_endY, const RuntimeMethod* method) 
{
	typedef void (*Tilemap_BoxFillTileAsset_Injected_m2E23DAD50DC56125C62E74EB984D1AC7D8745450_ftn) (intptr_t, Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376*, intptr_t, int32_t, int32_t, int32_t, int32_t);
	static Tilemap_BoxFillTileAsset_Injected_m2E23DAD50DC56125C62E74EB984D1AC7D8745450_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Tilemap_BoxFillTileAsset_Injected_m2E23DAD50DC56125C62E74EB984D1AC7D8745450_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Tilemaps.Tilemap::BoxFillTileAsset_Injected(System.IntPtr,UnityEngine.Vector3Int&,System.IntPtr,System.Int32,System.Int32,System.Int32,System.Int32)");
	_il2cpp_icall_func(___0__unity_self, ___1_position, ___2_tile, ___3_startX, ___4_startY, ___5_endX, ___6_endY);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Tilemap_InsertCells_Injected_m73ACF06850B17EE349FB12E73FEFB4C526214E44 (intptr_t ___0__unity_self, Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376* ___1_position, int32_t ___2_numColumns, int32_t ___3_numRows, int32_t ___4_numLayers, const RuntimeMethod* method) 
{
	typedef void (*Tilemap_InsertCells_Injected_m73ACF06850B17EE349FB12E73FEFB4C526214E44_ftn) (intptr_t, Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376*, int32_t, int32_t, int32_t);
	static Tilemap_InsertCells_Injected_m73ACF06850B17EE349FB12E73FEFB4C526214E44_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Tilemap_InsertCells_Injected_m73ACF06850B17EE349FB12E73FEFB4C526214E44_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Tilemaps.Tilemap::InsertCells_Injected(System.IntPtr,UnityEngine.Vector3Int&,System.Int32,System.Int32,System.Int32)");
	_il2cpp_icall_func(___0__unity_self, ___1_position, ___2_numColumns, ___3_numRows, ___4_numLayers);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Tilemap_DeleteCells_Injected_mA8D2B41C2A84B561C2254F369C8FB17EB08E0A36 (intptr_t ___0__unity_self, Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376* ___1_position, int32_t ___2_numColumns, int32_t ___3_numRows, int32_t ___4_numLayers, const RuntimeMethod* method) 
{
	typedef void (*Tilemap_DeleteCells_Injected_mA8D2B41C2A84B561C2254F369C8FB17EB08E0A36_ftn) (intptr_t, Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376*, int32_t, int32_t, int32_t);
	static Tilemap_DeleteCells_Injected_mA8D2B41C2A84B561C2254F369C8FB17EB08E0A36_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Tilemap_DeleteCells_Injected_mA8D2B41C2A84B561C2254F369C8FB17EB08E0A36_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Tilemaps.Tilemap::DeleteCells_Injected(System.IntPtr,UnityEngine.Vector3Int&,System.Int32,System.Int32,System.Int32)");
	_il2cpp_icall_func(___0__unity_self, ___1_position, ___2_numColumns, ___3_numRows, ___4_numLayers);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Tilemap_ClearAllTiles_Injected_mA1907919D0EAE3FCD14370073669922F0944E530 (intptr_t ___0__unity_self, const RuntimeMethod* method) 
{
	typedef void (*Tilemap_ClearAllTiles_Injected_mA1907919D0EAE3FCD14370073669922F0944E530_ftn) (intptr_t);
	static Tilemap_ClearAllTiles_Injected_mA1907919D0EAE3FCD14370073669922F0944E530_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Tilemap_ClearAllTiles_Injected_mA1907919D0EAE3FCD14370073669922F0944E530_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Tilemaps.Tilemap::ClearAllTiles_Injected(System.IntPtr)");
	_il2cpp_icall_func(___0__unity_self);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Tilemap_ResizeBounds_Injected_m5574726944E3196E55444859A53F560639582DF6 (intptr_t ___0__unity_self, const RuntimeMethod* method) 
{
	typedef void (*Tilemap_ResizeBounds_Injected_m5574726944E3196E55444859A53F560639582DF6_ftn) (intptr_t);
	static Tilemap_ResizeBounds_Injected_m5574726944E3196E55444859A53F560639582DF6_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Tilemap_ResizeBounds_Injected_m5574726944E3196E55444859A53F560639582DF6_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Tilemaps.Tilemap::ResizeBounds_Injected(System.IntPtr)");
	_il2cpp_icall_func(___0__unity_self);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Tilemap_CompressBounds_Injected_mD5EF633DD65236DC9C32EA5CBFA0F12A7C73BC52 (intptr_t ___0__unity_self, const RuntimeMethod* method) 
{
	typedef void (*Tilemap_CompressBounds_Injected_mD5EF633DD65236DC9C32EA5CBFA0F12A7C73BC52_ftn) (intptr_t);
	static Tilemap_CompressBounds_Injected_mD5EF633DD65236DC9C32EA5CBFA0F12A7C73BC52_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Tilemap_CompressBounds_Injected_mD5EF633DD65236DC9C32EA5CBFA0F12A7C73BC52_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Tilemaps.Tilemap::CompressBounds_Injected(System.IntPtr)");
	_il2cpp_icall_func(___0__unity_self);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Tilemap_SendAndClearSyncTileBuffer_Injected_mC6E388BB41E30116BEA65C7A0855BC918930FBC4 (intptr_t ___0__unity_self, const RuntimeMethod* method) 
{
	typedef void (*Tilemap_SendAndClearSyncTileBuffer_Injected_mC6E388BB41E30116BEA65C7A0855BC918930FBC4_ftn) (intptr_t);
	static Tilemap_SendAndClearSyncTileBuffer_Injected_mC6E388BB41E30116BEA65C7A0855BC918930FBC4_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Tilemap_SendAndClearSyncTileBuffer_Injected_mC6E388BB41E30116BEA65C7A0855BC918930FBC4_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Tilemaps.Tilemap::SendAndClearSyncTileBuffer_Injected(System.IntPtr)");
	_il2cpp_icall_func(___0__unity_self);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
IL2CPP_EXTERN_C void SyncTile_t0F06ED3A2623F91411C6F4773D87AB58EAD4EC2C_marshal_pinvoke(const SyncTile_t0F06ED3A2623F91411C6F4773D87AB58EAD4EC2C& unmarshaled, SyncTile_t0F06ED3A2623F91411C6F4773D87AB58EAD4EC2C_marshaled_pinvoke& marshaled)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SyncTile_t0F06ED3A2623F91411C6F4773D87AB58EAD4EC2C_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SyncTile_t0F06ED3A2623F91411C6F4773D87AB58EAD4EC2C____m_Tile_FieldInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Exception_t* ___m_TileException = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field '%s' of type '%s': Reference type field marshaling is not supported.", SyncTile_t0F06ED3A2623F91411C6F4773D87AB58EAD4EC2C____m_Tile_FieldInfo_var, SyncTile_t0F06ED3A2623F91411C6F4773D87AB58EAD4EC2C_0_0_0_var);
	IL2CPP_RAISE_MANAGED_EXCEPTION(___m_TileException, NULL);
}
IL2CPP_EXTERN_C void SyncTile_t0F06ED3A2623F91411C6F4773D87AB58EAD4EC2C_marshal_pinvoke_back(const SyncTile_t0F06ED3A2623F91411C6F4773D87AB58EAD4EC2C_marshaled_pinvoke& marshaled, SyncTile_t0F06ED3A2623F91411C6F4773D87AB58EAD4EC2C& unmarshaled)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SyncTile_t0F06ED3A2623F91411C6F4773D87AB58EAD4EC2C_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SyncTile_t0F06ED3A2623F91411C6F4773D87AB58EAD4EC2C____m_Tile_FieldInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Exception_t* ___m_TileException = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field '%s' of type '%s': Reference type field marshaling is not supported.", SyncTile_t0F06ED3A2623F91411C6F4773D87AB58EAD4EC2C____m_Tile_FieldInfo_var, SyncTile_t0F06ED3A2623F91411C6F4773D87AB58EAD4EC2C_0_0_0_var);
	IL2CPP_RAISE_MANAGED_EXCEPTION(___m_TileException, NULL);
}
IL2CPP_EXTERN_C void SyncTile_t0F06ED3A2623F91411C6F4773D87AB58EAD4EC2C_marshal_pinvoke_cleanup(SyncTile_t0F06ED3A2623F91411C6F4773D87AB58EAD4EC2C_marshaled_pinvoke& marshaled)
{
}
IL2CPP_EXTERN_C void SyncTile_t0F06ED3A2623F91411C6F4773D87AB58EAD4EC2C_marshal_com(const SyncTile_t0F06ED3A2623F91411C6F4773D87AB58EAD4EC2C& unmarshaled, SyncTile_t0F06ED3A2623F91411C6F4773D87AB58EAD4EC2C_marshaled_com& marshaled)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SyncTile_t0F06ED3A2623F91411C6F4773D87AB58EAD4EC2C_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SyncTile_t0F06ED3A2623F91411C6F4773D87AB58EAD4EC2C____m_Tile_FieldInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Exception_t* ___m_TileException = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field '%s' of type '%s': Reference type field marshaling is not supported.", SyncTile_t0F06ED3A2623F91411C6F4773D87AB58EAD4EC2C____m_Tile_FieldInfo_var, SyncTile_t0F06ED3A2623F91411C6F4773D87AB58EAD4EC2C_0_0_0_var);
	IL2CPP_RAISE_MANAGED_EXCEPTION(___m_TileException, NULL);
}
IL2CPP_EXTERN_C void SyncTile_t0F06ED3A2623F91411C6F4773D87AB58EAD4EC2C_marshal_com_back(const SyncTile_t0F06ED3A2623F91411C6F4773D87AB58EAD4EC2C_marshaled_com& marshaled, SyncTile_t0F06ED3A2623F91411C6F4773D87AB58EAD4EC2C& unmarshaled)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SyncTile_t0F06ED3A2623F91411C6F4773D87AB58EAD4EC2C_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SyncTile_t0F06ED3A2623F91411C6F4773D87AB58EAD4EC2C____m_Tile_FieldInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Exception_t* ___m_TileException = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field '%s' of type '%s': Reference type field marshaling is not supported.", SyncTile_t0F06ED3A2623F91411C6F4773D87AB58EAD4EC2C____m_Tile_FieldInfo_var, SyncTile_t0F06ED3A2623F91411C6F4773D87AB58EAD4EC2C_0_0_0_var);
	IL2CPP_RAISE_MANAGED_EXCEPTION(___m_TileException, NULL);
}
IL2CPP_EXTERN_C void SyncTile_t0F06ED3A2623F91411C6F4773D87AB58EAD4EC2C_marshal_com_cleanup(SyncTile_t0F06ED3A2623F91411C6F4773D87AB58EAD4EC2C_marshaled_com& marshaled)
{
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
IL2CPP_EXTERN_C void SyncTileCallbackSettings_tBBB8B7336BDE6E578C7A7B1D322A9B1273A76CDA_marshal_pinvoke(const SyncTileCallbackSettings_tBBB8B7336BDE6E578C7A7B1D322A9B1273A76CDA& unmarshaled, SyncTileCallbackSettings_tBBB8B7336BDE6E578C7A7B1D322A9B1273A76CDA_marshaled_pinvoke& marshaled)
{
	marshaled.___hasSyncTileCallback = static_cast<int32_t>(unmarshaled.___hasSyncTileCallback);
	marshaled.___hasPositionsChangedCallback = static_cast<int32_t>(unmarshaled.___hasPositionsChangedCallback);
	marshaled.___isBufferSyncTile = static_cast<int32_t>(unmarshaled.___isBufferSyncTile);
}
IL2CPP_EXTERN_C void SyncTileCallbackSettings_tBBB8B7336BDE6E578C7A7B1D322A9B1273A76CDA_marshal_pinvoke_back(const SyncTileCallbackSettings_tBBB8B7336BDE6E578C7A7B1D322A9B1273A76CDA_marshaled_pinvoke& marshaled, SyncTileCallbackSettings_tBBB8B7336BDE6E578C7A7B1D322A9B1273A76CDA& unmarshaled)
{
	bool unmarshaledhasSyncTileCallback_temp_0 = false;
	unmarshaledhasSyncTileCallback_temp_0 = static_cast<bool>(marshaled.___hasSyncTileCallback);
	unmarshaled.___hasSyncTileCallback = unmarshaledhasSyncTileCallback_temp_0;
	bool unmarshaledhasPositionsChangedCallback_temp_1 = false;
	unmarshaledhasPositionsChangedCallback_temp_1 = static_cast<bool>(marshaled.___hasPositionsChangedCallback);
	unmarshaled.___hasPositionsChangedCallback = unmarshaledhasPositionsChangedCallback_temp_1;
	bool unmarshaledisBufferSyncTile_temp_2 = false;
	unmarshaledisBufferSyncTile_temp_2 = static_cast<bool>(marshaled.___isBufferSyncTile);
	unmarshaled.___isBufferSyncTile = unmarshaledisBufferSyncTile_temp_2;
}
IL2CPP_EXTERN_C void SyncTileCallbackSettings_tBBB8B7336BDE6E578C7A7B1D322A9B1273A76CDA_marshal_pinvoke_cleanup(SyncTileCallbackSettings_tBBB8B7336BDE6E578C7A7B1D322A9B1273A76CDA_marshaled_pinvoke& marshaled)
{
}
IL2CPP_EXTERN_C void SyncTileCallbackSettings_tBBB8B7336BDE6E578C7A7B1D322A9B1273A76CDA_marshal_com(const SyncTileCallbackSettings_tBBB8B7336BDE6E578C7A7B1D322A9B1273A76CDA& unmarshaled, SyncTileCallbackSettings_tBBB8B7336BDE6E578C7A7B1D322A9B1273A76CDA_marshaled_com& marshaled)
{
	marshaled.___hasSyncTileCallback = static_cast<int32_t>(unmarshaled.___hasSyncTileCallback);
	marshaled.___hasPositionsChangedCallback = static_cast<int32_t>(unmarshaled.___hasPositionsChangedCallback);
	marshaled.___isBufferSyncTile = static_cast<int32_t>(unmarshaled.___isBufferSyncTile);
}
IL2CPP_EXTERN_C void SyncTileCallbackSettings_tBBB8B7336BDE6E578C7A7B1D322A9B1273A76CDA_marshal_com_back(const SyncTileCallbackSettings_tBBB8B7336BDE6E578C7A7B1D322A9B1273A76CDA_marshaled_com& marshaled, SyncTileCallbackSettings_tBBB8B7336BDE6E578C7A7B1D322A9B1273A76CDA& unmarshaled)
{
	bool unmarshaledhasSyncTileCallback_temp_0 = false;
	unmarshaledhasSyncTileCallback_temp_0 = static_cast<bool>(marshaled.___hasSyncTileCallback);
	unmarshaled.___hasSyncTileCallback = unmarshaledhasSyncTileCallback_temp_0;
	bool unmarshaledhasPositionsChangedCallback_temp_1 = false;
	unmarshaledhasPositionsChangedCallback_temp_1 = static_cast<bool>(marshaled.___hasPositionsChangedCallback);
	unmarshaled.___hasPositionsChangedCallback = unmarshaledhasPositionsChangedCallback_temp_1;
	bool unmarshaledisBufferSyncTile_temp_2 = false;
	unmarshaledisBufferSyncTile_temp_2 = static_cast<bool>(marshaled.___isBufferSyncTile);
	unmarshaled.___isBufferSyncTile = unmarshaledisBufferSyncTile_temp_2;
}
IL2CPP_EXTERN_C void SyncTileCallbackSettings_tBBB8B7336BDE6E578C7A7B1D322A9B1273A76CDA_marshal_com_cleanup(SyncTileCallbackSettings_tBBB8B7336BDE6E578C7A7B1D322A9B1273A76CDA_marshaled_com& marshaled)
{
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TilemapRenderer_RegisterSpriteAtlasRegistered_m5D7676A05B0B16ABCCF4CEE57BA9E28FA4D171BC (TilemapRenderer_t1A45FD335E86172CFBB77D657E1D6705A477A6CB* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_tE96F2DDA71AE56E61CEEC5974B6503D38835E57D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TilemapRenderer_OnSpriteAtlasRegistered_m4348D78754045C8B10CEA76195A313790F412ED1_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Action_1_tE96F2DDA71AE56E61CEEC5974B6503D38835E57D* L_0 = (Action_1_tE96F2DDA71AE56E61CEEC5974B6503D38835E57D*)il2cpp_codegen_object_new(Action_1_tE96F2DDA71AE56E61CEEC5974B6503D38835E57D_il2cpp_TypeInfo_var);
		Action_1__ctor_mDAEB7161DF624FDF6A3DA3C6BE40319FFC05A2E3(L_0, __this, (intptr_t)((void*)TilemapRenderer_OnSpriteAtlasRegistered_m4348D78754045C8B10CEA76195A313790F412ED1_RuntimeMethod_var), NULL);
		SpriteAtlasManager_add_atlasRegistered_mA46A6A347F25B2E03DB4FD8044B93B4FD8ED50A5(L_0, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TilemapRenderer_UnregisterSpriteAtlasRegistered_mFE33C972CF738A50A631203D0DD7E325AADFCB08 (TilemapRenderer_t1A45FD335E86172CFBB77D657E1D6705A477A6CB* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_tE96F2DDA71AE56E61CEEC5974B6503D38835E57D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TilemapRenderer_OnSpriteAtlasRegistered_m4348D78754045C8B10CEA76195A313790F412ED1_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Action_1_tE96F2DDA71AE56E61CEEC5974B6503D38835E57D* L_0 = (Action_1_tE96F2DDA71AE56E61CEEC5974B6503D38835E57D*)il2cpp_codegen_object_new(Action_1_tE96F2DDA71AE56E61CEEC5974B6503D38835E57D_il2cpp_TypeInfo_var);
		Action_1__ctor_mDAEB7161DF624FDF6A3DA3C6BE40319FFC05A2E3(L_0, __this, (intptr_t)((void*)TilemapRenderer_OnSpriteAtlasRegistered_m4348D78754045C8B10CEA76195A313790F412ED1_RuntimeMethod_var), NULL);
		SpriteAtlasManager_remove_atlasRegistered_m67E745D3503463E3DB9CC12C157ABB4F469ABE79(L_0, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TilemapRenderer_OnSpriteAtlasRegistered_m4348D78754045C8B10CEA76195A313790F412ED1 (TilemapRenderer_t1A45FD335E86172CFBB77D657E1D6705A477A6CB* __this, SpriteAtlas_t7B9620FBFBE1CCB781F2ED24A3B2DD37734F66A8* ___0_atlas, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MarshalledUnityObject_MarshalNotNull_TisTilemapRenderer_t1A45FD335E86172CFBB77D657E1D6705A477A6CB_m90A6BD70FCFCC009E37CFC2B6DFD690A08042489_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MarshalledUnityObject_Marshal_TisSpriteAtlas_t7B9620FBFBE1CCB781F2ED24A3B2DD37734F66A8_m599B052593B0725CFCE967619492F19EFDA31A68_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	intptr_t G_B2_0;
	memset((&G_B2_0), 0, sizeof(G_B2_0));
	intptr_t G_B1_0;
	memset((&G_B1_0), 0, sizeof(G_B1_0));
	{
		intptr_t L_0;
		L_0 = MarshalledUnityObject_MarshalNotNull_TisTilemapRenderer_t1A45FD335E86172CFBB77D657E1D6705A477A6CB_m90A6BD70FCFCC009E37CFC2B6DFD690A08042489_inline(__this, MarshalledUnityObject_MarshalNotNull_TisTilemapRenderer_t1A45FD335E86172CFBB77D657E1D6705A477A6CB_m90A6BD70FCFCC009E37CFC2B6DFD690A08042489_RuntimeMethod_var);
		intptr_t L_1 = L_0;
		if (L_1)
		{
			G_B2_0 = L_1;
			goto IL_000f;
		}
		G_B1_0 = L_1;
	}
	{
		ThrowHelper_ThrowNullReferenceException_mA9C7629D32240EE0218631933DAC647668CA63CF(__this, NULL);
		G_B2_0 = G_B1_0;
	}

IL_000f:
	{
		SpriteAtlas_t7B9620FBFBE1CCB781F2ED24A3B2DD37734F66A8* L_2 = ___0_atlas;
		intptr_t L_3;
		L_3 = MarshalledUnityObject_Marshal_TisSpriteAtlas_t7B9620FBFBE1CCB781F2ED24A3B2DD37734F66A8_m599B052593B0725CFCE967619492F19EFDA31A68_inline(L_2, MarshalledUnityObject_Marshal_TisSpriteAtlas_t7B9620FBFBE1CCB781F2ED24A3B2DD37734F66A8_m599B052593B0725CFCE967619492F19EFDA31A68_RuntimeMethod_var);
		TilemapRenderer_OnSpriteAtlasRegistered_Injected_mEA941D5042FADDC2E5457247D2DF55324C143D9A(G_B2_0, L_3, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TilemapRenderer_OnSpriteAtlasRegistered_Injected_mEA941D5042FADDC2E5457247D2DF55324C143D9A (intptr_t ___0__unity_self, intptr_t ___1_atlas, const RuntimeMethod* method) 
{
	typedef void (*TilemapRenderer_OnSpriteAtlasRegistered_Injected_mEA941D5042FADDC2E5457247D2DF55324C143D9A_ftn) (intptr_t, intptr_t);
	static TilemapRenderer_OnSpriteAtlasRegistered_Injected_mEA941D5042FADDC2E5457247D2DF55324C143D9A_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (TilemapRenderer_OnSpriteAtlasRegistered_Injected_mEA941D5042FADDC2E5457247D2DF55324C143D9A_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Tilemaps.TilemapRenderer::OnSpriteAtlasRegistered_Injected(System.IntPtr,System.IntPtr)");
	_il2cpp_icall_func(___0__unity_self, ___1_atlas);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TileData_set_sprite_m3566544847F9C9C27EDB154324B6FBDB446EFE94 (TileData_tFB814629D010ABD175127C0BE96FD96EA606E00F* __this, Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	TileData_tFB814629D010ABD175127C0BE96FD96EA606E00F* G_B2_0 = NULL;
	TileData_tFB814629D010ABD175127C0BE96FD96EA606E00F* G_B1_0 = NULL;
	int32_t G_B3_0 = 0;
	TileData_tFB814629D010ABD175127C0BE96FD96EA606E00F* G_B3_1 = NULL;
	{
		Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* L_0 = ___0_value;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_0, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (L_1)
		{
			G_B2_0 = __this;
			goto IL_000e;
		}
		G_B1_0 = __this;
	}
	{
		G_B3_0 = 0;
		G_B3_1 = G_B1_0;
		goto IL_0014;
	}

IL_000e:
	{
		Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* L_2 = ___0_value;
		NullCheck(L_2);
		int32_t L_3;
		L_3 = Object_GetInstanceID_m554FF4073C9465F3835574CC084E68AAEEC6CC6A(L_2, NULL);
		G_B3_0 = L_3;
		G_B3_1 = G_B2_0;
	}

IL_0014:
	{
		G_B3_1->___m_Sprite = G_B3_0;
		return;
	}
}
IL2CPP_EXTERN_C  void TileData_set_sprite_m3566544847F9C9C27EDB154324B6FBDB446EFE94_AdjustorThunk (RuntimeObject* __this, Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___0_value, const RuntimeMethod* method)
{
	TileData_tFB814629D010ABD175127C0BE96FD96EA606E00F* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<TileData_tFB814629D010ABD175127C0BE96FD96EA606E00F*>(__this + _offset);
	TileData_set_sprite_m3566544847F9C9C27EDB154324B6FBDB446EFE94(_thisAdjusted, ___0_value, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TileData_set_color_m5E759823878243A226EF46419FAD7C0CC3D5F40A (TileData_tFB814629D010ABD175127C0BE96FD96EA606E00F* __this, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___0_value, const RuntimeMethod* method) 
{
	{
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_0 = ___0_value;
		__this->___m_Color = L_0;
		return;
	}
}
IL2CPP_EXTERN_C  void TileData_set_color_m5E759823878243A226EF46419FAD7C0CC3D5F40A_AdjustorThunk (RuntimeObject* __this, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___0_value, const RuntimeMethod* method)
{
	TileData_tFB814629D010ABD175127C0BE96FD96EA606E00F* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<TileData_tFB814629D010ABD175127C0BE96FD96EA606E00F*>(__this + _offset);
	TileData_set_color_m5E759823878243A226EF46419FAD7C0CC3D5F40A(_thisAdjusted, ___0_value, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TileData_set_transform_m71074A780C066292F940002A7165658E9CC01F9F (TileData_tFB814629D010ABD175127C0BE96FD96EA606E00F* __this, Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___0_value, const RuntimeMethod* method) 
{
	{
		Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 L_0 = ___0_value;
		__this->___m_Transform = L_0;
		return;
	}
}
IL2CPP_EXTERN_C  void TileData_set_transform_m71074A780C066292F940002A7165658E9CC01F9F_AdjustorThunk (RuntimeObject* __this, Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___0_value, const RuntimeMethod* method)
{
	TileData_tFB814629D010ABD175127C0BE96FD96EA606E00F* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<TileData_tFB814629D010ABD175127C0BE96FD96EA606E00F*>(__this + _offset);
	TileData_set_transform_m71074A780C066292F940002A7165658E9CC01F9F(_thisAdjusted, ___0_value, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TileData_set_gameObject_m1CE5B2AAAB5BF5AEF36EBAF2BCE23E4D2E5A9E09 (TileData_tFB814629D010ABD175127C0BE96FD96EA606E00F* __this, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	TileData_tFB814629D010ABD175127C0BE96FD96EA606E00F* G_B2_0 = NULL;
	TileData_tFB814629D010ABD175127C0BE96FD96EA606E00F* G_B1_0 = NULL;
	int32_t G_B3_0 = 0;
	TileData_tFB814629D010ABD175127C0BE96FD96EA606E00F* G_B3_1 = NULL;
	{
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = ___0_value;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_0, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (L_1)
		{
			G_B2_0 = __this;
			goto IL_000e;
		}
		G_B1_0 = __this;
	}
	{
		G_B3_0 = 0;
		G_B3_1 = G_B1_0;
		goto IL_0014;
	}

IL_000e:
	{
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_2 = ___0_value;
		NullCheck(L_2);
		int32_t L_3;
		L_3 = Object_GetInstanceID_m554FF4073C9465F3835574CC084E68AAEEC6CC6A(L_2, NULL);
		G_B3_0 = L_3;
		G_B3_1 = G_B2_0;
	}

IL_0014:
	{
		G_B3_1->___m_GameObject = G_B3_0;
		return;
	}
}
IL2CPP_EXTERN_C  void TileData_set_gameObject_m1CE5B2AAAB5BF5AEF36EBAF2BCE23E4D2E5A9E09_AdjustorThunk (RuntimeObject* __this, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___0_value, const RuntimeMethod* method)
{
	TileData_tFB814629D010ABD175127C0BE96FD96EA606E00F* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<TileData_tFB814629D010ABD175127C0BE96FD96EA606E00F*>(__this + _offset);
	TileData_set_gameObject_m1CE5B2AAAB5BF5AEF36EBAF2BCE23E4D2E5A9E09(_thisAdjusted, ___0_value, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TileData_set_flags_mEB46B1364D6DB7F77C2E1E43AFD31381B291BD30 (TileData_tFB814629D010ABD175127C0BE96FD96EA606E00F* __this, int32_t ___0_value, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___0_value;
		__this->___m_Flags = L_0;
		return;
	}
}
IL2CPP_EXTERN_C  void TileData_set_flags_mEB46B1364D6DB7F77C2E1E43AFD31381B291BD30_AdjustorThunk (RuntimeObject* __this, int32_t ___0_value, const RuntimeMethod* method)
{
	TileData_tFB814629D010ABD175127C0BE96FD96EA606E00F* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<TileData_tFB814629D010ABD175127C0BE96FD96EA606E00F*>(__this + _offset);
	TileData_set_flags_mEB46B1364D6DB7F77C2E1E43AFD31381B291BD30(_thisAdjusted, ___0_value, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TileData_set_colliderType_mE12359ADEF5F42CC0B635DCBAEC3035F0526FA96 (TileData_tFB814629D010ABD175127C0BE96FD96EA606E00F* __this, int32_t ___0_value, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___0_value;
		__this->___m_ColliderType = L_0;
		return;
	}
}
IL2CPP_EXTERN_C  void TileData_set_colliderType_mE12359ADEF5F42CC0B635DCBAEC3035F0526FA96_AdjustorThunk (RuntimeObject* __this, int32_t ___0_value, const RuntimeMethod* method)
{
	TileData_tFB814629D010ABD175127C0BE96FD96EA606E00F* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<TileData_tFB814629D010ABD175127C0BE96FD96EA606E00F*>(__this + _offset);
	TileData_set_colliderType_mE12359ADEF5F42CC0B635DCBAEC3035F0526FA96(_thisAdjusted, ___0_value, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TileData_tFB814629D010ABD175127C0BE96FD96EA606E00F TileData_CreateDefault_m13A39001A47B60635B10FFD06AD65082CBB7D12D (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TileData_tFB814629D010ABD175127C0BE96FD96EA606E00F_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	TileData_tFB814629D010ABD175127C0BE96FD96EA606E00F V_0;
	memset((&V_0), 0, sizeof(V_0));
	TileData_tFB814629D010ABD175127C0BE96FD96EA606E00F V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		il2cpp_codegen_initobj((&V_0), sizeof(TileData_tFB814629D010ABD175127C0BE96FD96EA606E00F));
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_0;
		L_0 = Color_get_white_m068F5AF879B0FCA584E3693F762EA41BB65532C6_inline(NULL);
		il2cpp_codegen_runtime_class_init_inline(TileData_tFB814629D010ABD175127C0BE96FD96EA606E00F_il2cpp_TypeInfo_var);
		TileData_set_color_m5E759823878243A226EF46419FAD7C0CC3D5F40A((&V_0), L_0, NULL);
		Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 L_1;
		L_1 = Matrix4x4_get_identity_m6568A73831F3E2D587420D20FF423959D7D8AB56_inline(NULL);
		TileData_set_transform_m71074A780C066292F940002A7165658E9CC01F9F((&V_0), L_1, NULL);
		TileData_set_flags_mEB46B1364D6DB7F77C2E1E43AFD31381B291BD30((&V_0), 0, NULL);
		TileData_set_colliderType_mE12359ADEF5F42CC0B635DCBAEC3035F0526FA96((&V_0), 0, NULL);
		TileData_tFB814629D010ABD175127C0BE96FD96EA606E00F L_2 = V_0;
		V_1 = L_2;
		goto IL_0039;
	}

IL_0039:
	{
		TileData_tFB814629D010ABD175127C0BE96FD96EA606E00F L_3 = V_1;
		return L_3;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TileData__cctor_mE2F5A802075C68DE978E46092DC8BF465182934A (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TileData_tFB814629D010ABD175127C0BE96FD96EA606E00F_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		TileData_tFB814629D010ABD175127C0BE96FD96EA606E00F L_0;
		L_0 = TileData_CreateDefault_m13A39001A47B60635B10FFD06AD65082CBB7D12D(NULL);
		((TileData_tFB814629D010ABD175127C0BE96FD96EA606E00F_StaticFields*)il2cpp_codegen_static_fields_for(TileData_tFB814629D010ABD175127C0BE96FD96EA606E00F_il2cpp_TypeInfo_var))->___Default = L_0;
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif


IL2CPP_EXTERN_C void TileChangeData_t6035410A63723928DB7B86A0880351354ADB635E_marshal_pinvoke(const TileChangeData_t6035410A63723928DB7B86A0880351354ADB635E& unmarshaled, TileChangeData_t6035410A63723928DB7B86A0880351354ADB635E_marshaled_pinvoke& marshaled)
{
	marshaled.___m_Position = unmarshaled.___m_Position;
	if (unmarshaled.___m_TileAsset != NULL)
	{
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshal_pinvoke(*unmarshaled.___m_TileAsset, marshaled.___m_TileAsset);
	}
	marshaled.___m_Color = unmarshaled.___m_Color;
	marshaled.___m_Transform = unmarshaled.___m_Transform;
}
IL2CPP_EXTERN_C void TileChangeData_t6035410A63723928DB7B86A0880351354ADB635E_marshal_pinvoke_back(const TileChangeData_t6035410A63723928DB7B86A0880351354ADB635E_marshaled_pinvoke& marshaled, TileChangeData_t6035410A63723928DB7B86A0880351354ADB635E& unmarshaled)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376 unmarshaledm_Position_temp_0;
	memset((&unmarshaledm_Position_temp_0), 0, sizeof(unmarshaledm_Position_temp_0));
	unmarshaledm_Position_temp_0 = marshaled.___m_Position;
	unmarshaled.___m_Position = unmarshaledm_Position_temp_0;
	unmarshaled.___m_TileAsset = (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)il2cpp_codegen_object_new(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
	Il2CppCodeGenWriteBarrier((void**)(&unmarshaled.___m_TileAsset), (void*)(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)il2cpp_codegen_object_new(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var));
	Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshal_pinvoke_back(marshaled.___m_TileAsset, *unmarshaled.___m_TileAsset);
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F unmarshaledm_Color_temp_2;
	memset((&unmarshaledm_Color_temp_2), 0, sizeof(unmarshaledm_Color_temp_2));
	unmarshaledm_Color_temp_2 = marshaled.___m_Color;
	unmarshaled.___m_Color = unmarshaledm_Color_temp_2;
	Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 unmarshaledm_Transform_temp_3;
	memset((&unmarshaledm_Transform_temp_3), 0, sizeof(unmarshaledm_Transform_temp_3));
	unmarshaledm_Transform_temp_3 = marshaled.___m_Transform;
	unmarshaled.___m_Transform = unmarshaledm_Transform_temp_3;
}
IL2CPP_EXTERN_C void TileChangeData_t6035410A63723928DB7B86A0880351354ADB635E_marshal_pinvoke_cleanup(TileChangeData_t6035410A63723928DB7B86A0880351354ADB635E_marshaled_pinvoke& marshaled)
{
	Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshal_pinvoke_cleanup(marshaled.___m_TileAsset);
}


IL2CPP_EXTERN_C void TileChangeData_t6035410A63723928DB7B86A0880351354ADB635E_marshal_com(const TileChangeData_t6035410A63723928DB7B86A0880351354ADB635E& unmarshaled, TileChangeData_t6035410A63723928DB7B86A0880351354ADB635E_marshaled_com& marshaled)
{
	marshaled.___m_Position = unmarshaled.___m_Position;
	if (unmarshaled.___m_TileAsset != NULL)
	{
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshal_com(*unmarshaled.___m_TileAsset, *marshaled.___m_TileAsset);
	}
	marshaled.___m_Color = unmarshaled.___m_Color;
	marshaled.___m_Transform = unmarshaled.___m_Transform;
}
IL2CPP_EXTERN_C void TileChangeData_t6035410A63723928DB7B86A0880351354ADB635E_marshal_com_back(const TileChangeData_t6035410A63723928DB7B86A0880351354ADB635E_marshaled_com& marshaled, TileChangeData_t6035410A63723928DB7B86A0880351354ADB635E& unmarshaled)
{
	Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376 unmarshaledm_Position_temp_0;
	memset((&unmarshaledm_Position_temp_0), 0, sizeof(unmarshaledm_Position_temp_0));
	unmarshaledm_Position_temp_0 = marshaled.___m_Position;
	unmarshaled.___m_Position = unmarshaledm_Position_temp_0;
	if (unmarshaled.___m_TileAsset != NULL)
	{
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshal_com_back(*marshaled.___m_TileAsset, *unmarshaled.___m_TileAsset);
	}
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F unmarshaledm_Color_temp_2;
	memset((&unmarshaledm_Color_temp_2), 0, sizeof(unmarshaledm_Color_temp_2));
	unmarshaledm_Color_temp_2 = marshaled.___m_Color;
	unmarshaled.___m_Color = unmarshaledm_Color_temp_2;
	Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 unmarshaledm_Transform_temp_3;
	memset((&unmarshaledm_Transform_temp_3), 0, sizeof(unmarshaledm_Transform_temp_3));
	unmarshaledm_Transform_temp_3 = marshaled.___m_Transform;
	unmarshaled.___m_Transform = unmarshaledm_Transform_temp_3;
}
IL2CPP_EXTERN_C void TileChangeData_t6035410A63723928DB7B86A0880351354ADB635E_marshal_com_cleanup(TileChangeData_t6035410A63723928DB7B86A0880351354ADB635E_marshaled_com& marshaled)
{
	if (marshaled.___m_TileAsset != NULL)
	{
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshal_com_cleanup(*marshaled.___m_TileAsset);
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
IL2CPP_EXTERN_C void TileAnimationData_tB7419BC111545576349DD19CAB0DEFD240CAF149_marshal_pinvoke(const TileAnimationData_tB7419BC111545576349DD19CAB0DEFD240CAF149& unmarshaled, TileAnimationData_tB7419BC111545576349DD19CAB0DEFD240CAF149_marshaled_pinvoke& marshaled)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TileAnimationData_tB7419BC111545576349DD19CAB0DEFD240CAF149_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TileAnimationData_tB7419BC111545576349DD19CAB0DEFD240CAF149____m_AnimatedSprites_FieldInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Exception_t* ___m_AnimatedSpritesException = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field '%s' of type '%s': Reference type field marshaling is not supported.", TileAnimationData_tB7419BC111545576349DD19CAB0DEFD240CAF149____m_AnimatedSprites_FieldInfo_var, TileAnimationData_tB7419BC111545576349DD19CAB0DEFD240CAF149_0_0_0_var);
	IL2CPP_RAISE_MANAGED_EXCEPTION(___m_AnimatedSpritesException, NULL);
}
IL2CPP_EXTERN_C void TileAnimationData_tB7419BC111545576349DD19CAB0DEFD240CAF149_marshal_pinvoke_back(const TileAnimationData_tB7419BC111545576349DD19CAB0DEFD240CAF149_marshaled_pinvoke& marshaled, TileAnimationData_tB7419BC111545576349DD19CAB0DEFD240CAF149& unmarshaled)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TileAnimationData_tB7419BC111545576349DD19CAB0DEFD240CAF149_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TileAnimationData_tB7419BC111545576349DD19CAB0DEFD240CAF149____m_AnimatedSprites_FieldInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Exception_t* ___m_AnimatedSpritesException = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field '%s' of type '%s': Reference type field marshaling is not supported.", TileAnimationData_tB7419BC111545576349DD19CAB0DEFD240CAF149____m_AnimatedSprites_FieldInfo_var, TileAnimationData_tB7419BC111545576349DD19CAB0DEFD240CAF149_0_0_0_var);
	IL2CPP_RAISE_MANAGED_EXCEPTION(___m_AnimatedSpritesException, NULL);
}
IL2CPP_EXTERN_C void TileAnimationData_tB7419BC111545576349DD19CAB0DEFD240CAF149_marshal_pinvoke_cleanup(TileAnimationData_tB7419BC111545576349DD19CAB0DEFD240CAF149_marshaled_pinvoke& marshaled)
{
}
IL2CPP_EXTERN_C void TileAnimationData_tB7419BC111545576349DD19CAB0DEFD240CAF149_marshal_com(const TileAnimationData_tB7419BC111545576349DD19CAB0DEFD240CAF149& unmarshaled, TileAnimationData_tB7419BC111545576349DD19CAB0DEFD240CAF149_marshaled_com& marshaled)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TileAnimationData_tB7419BC111545576349DD19CAB0DEFD240CAF149_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TileAnimationData_tB7419BC111545576349DD19CAB0DEFD240CAF149____m_AnimatedSprites_FieldInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Exception_t* ___m_AnimatedSpritesException = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field '%s' of type '%s': Reference type field marshaling is not supported.", TileAnimationData_tB7419BC111545576349DD19CAB0DEFD240CAF149____m_AnimatedSprites_FieldInfo_var, TileAnimationData_tB7419BC111545576349DD19CAB0DEFD240CAF149_0_0_0_var);
	IL2CPP_RAISE_MANAGED_EXCEPTION(___m_AnimatedSpritesException, NULL);
}
IL2CPP_EXTERN_C void TileAnimationData_tB7419BC111545576349DD19CAB0DEFD240CAF149_marshal_com_back(const TileAnimationData_tB7419BC111545576349DD19CAB0DEFD240CAF149_marshaled_com& marshaled, TileAnimationData_tB7419BC111545576349DD19CAB0DEFD240CAF149& unmarshaled)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TileAnimationData_tB7419BC111545576349DD19CAB0DEFD240CAF149_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TileAnimationData_tB7419BC111545576349DD19CAB0DEFD240CAF149____m_AnimatedSprites_FieldInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Exception_t* ___m_AnimatedSpritesException = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field '%s' of type '%s': Reference type field marshaling is not supported.", TileAnimationData_tB7419BC111545576349DD19CAB0DEFD240CAF149____m_AnimatedSprites_FieldInfo_var, TileAnimationData_tB7419BC111545576349DD19CAB0DEFD240CAF149_0_0_0_var);
	IL2CPP_RAISE_MANAGED_EXCEPTION(___m_AnimatedSpritesException, NULL);
}
IL2CPP_EXTERN_C void TileAnimationData_tB7419BC111545576349DD19CAB0DEFD240CAF149_marshal_com_cleanup(TileAnimationData_tB7419BC111545576349DD19CAB0DEFD240CAF149_marshaled_com& marshaled)
{
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void* IntPtr_ToPointer_m1A0612EED3A1C8B8850BE2943CFC42523064B4F6_inline (intptr_t* __this, const RuntimeMethod* method) 
{
	{
		intptr_t L_0 = *__this;
		return (void*)(L_0);
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F Color_get_white_m068F5AF879B0FCA584E3693F762EA41BB65532C6_inline (const RuntimeMethod* method) 
{
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_0;
		memset((&L_0), 0, sizeof(L_0));
		Color__ctor_m3786F0D6E510D9CFA544523A955870BD2A514C8C_inline((&L_0), (1.0f), (1.0f), (1.0f), (1.0f), NULL);
		V_0 = L_0;
		goto IL_001d;
	}

IL_001d:
	{
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 Matrix4x4_get_identity_m6568A73831F3E2D587420D20FF423959D7D8AB56_inline (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 L_0 = ((Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6_StaticFields*)il2cpp_codegen_static_fields_for(Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6_il2cpp_TypeInfo_var))->___identityMatrix;
		V_0 = L_0;
		goto IL_0009;
	}

IL_0009:
	{
		Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3Int_op_Implicit_m13297B1F6D07F1E46C0627EAAB8413E637FCA442_inline (Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376 ___0_v, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0;
		L_0 = Vector3Int_get_x_m21C268D2AA4C03CE35AA49DF6155347C9748054C_inline((&___0_v), NULL);
		int32_t L_1;
		L_1 = Vector3Int_get_y_m42F43000F85D356557CAF03442273E7AA08F7F72_inline((&___0_v), NULL);
		int32_t L_2;
		L_2 = Vector3Int_get_z_m96E180F866145E373F42358F2371EFF446F08AED_inline((&___0_v), NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3;
		memset((&L_3), 0, sizeof(L_3));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_3), ((float)L_0), ((float)L_1), ((float)L_2), NULL);
		V_0 = L_3;
		goto IL_0021;
	}

IL_0021:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = V_0;
		return L_4;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_a, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___1_b, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___0_a;
		float L_1 = L_0.___x;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = ___1_b;
		float L_3 = L_2.___x;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = ___0_a;
		float L_5 = L_4.___y;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ___1_b;
		float L_7 = L_6.___y;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8 = ___0_a;
		float L_9 = L_8.___z;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = ___1_b;
		float L_11 = L_10.___z;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_12;
		memset((&L_12), 0, sizeof(L_12));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_12), ((float)il2cpp_codegen_add(L_1, L_3)), ((float)il2cpp_codegen_add(L_5, L_7)), ((float)il2cpp_codegen_add(L_9, L_11)), NULL);
		V_0 = L_12;
		goto IL_0030;
	}

IL_0030:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_13 = V_0;
		return L_13;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void BoundsInt__ctor_m93F7EDF326B3BA01465FA229F6CEED0ED48D32FF_inline (BoundsInt_t4E757DE5EFF9FCB42000F173360DDC63B5585485* __this, Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376 ___0_position, Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376 ___1_size, const RuntimeMethod* method) 
{
	{
		Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376 L_0 = ___0_position;
		__this->___m_Position = L_0;
		Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376 L_1 = ___1_size;
		__this->___m_Size = L_1;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376 BoundsInt_get_min_m68D854200F7ED4AED677ECC53F26AA0834A715AE_inline (BoundsInt_t4E757DE5EFF9FCB42000F173360DDC63B5585485* __this, const RuntimeMethod* method) 
{
	Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0;
		L_0 = BoundsInt_get_xMin_m255A25A18122FF0155AB965564DC10E916DB8DF1_inline(__this, NULL);
		int32_t L_1;
		L_1 = BoundsInt_get_yMin_m36BB6D14F979D5C332475B737045E612907304EE_inline(__this, NULL);
		int32_t L_2;
		L_2 = BoundsInt_get_zMin_mD407CC67476B50EEFD1ED07A51FC3588616E4E3C_inline(__this, NULL);
		Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376 L_3;
		memset((&L_3), 0, sizeof(L_3));
		Vector3Int__ctor_mE06A86999D16FA579A7F2142B872AB7E3695C9E0_inline((&L_3), L_0, L_1, L_2, NULL);
		V_0 = L_3;
		goto IL_001b;
	}

IL_001b:
	{
		Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376 L_4 = V_0;
		return L_4;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376 BoundsInt_get_size_mE7C4A0C3BF45CEA7A28ABF98E2C15CB69EF3A32C_inline (BoundsInt_t4E757DE5EFF9FCB42000F173360DDC63B5585485* __this, const RuntimeMethod* method) 
{
	Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376 L_0 = __this->___m_Size;
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376 L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Vector3Int_get_x_m21C268D2AA4C03CE35AA49DF6155347C9748054C_inline (Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = __this->___m_X;
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		int32_t L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Vector3Int_get_y_m42F43000F85D356557CAF03442273E7AA08F7F72_inline (Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = __this->___m_Y;
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		int32_t L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Vector3Int_get_z_m96E180F866145E373F42358F2371EFF446F08AED_inline (Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = __this->___m_Z;
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		int32_t L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool NativeArray_1_get_IsCreated_mE992FB4B97CD24CAF70D23773821AE2687DC4A30_gshared_inline (NativeArray_1_t245D7224A42D1A32B87C64E49B7B434585EC91EF* __this, const RuntimeMethod* method) 
{
	{
		void* L_0 = __this->___m_Buffer;
		return (bool)((((int32_t)((((intptr_t)L_0) == ((intptr_t)((uintptr_t)0)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Action_2_Invoke_m7B85C2674B1EB0681F20E9C5AF3D19563459CBC0_gshared_inline (Action_2_t0302727DEEDCFCC692E80AEEC31B8066AE8C5550* __this, RuntimeObject* ___0_arg1, NativeArray_1_t245D7224A42D1A32B87C64E49B7B434585EC91EF ___1_arg2, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, RuntimeObject*, NativeArray_1_t245D7224A42D1A32B87C64E49B7B434585EC91EF, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl)((Il2CppObject*)__this->___method_code, ___0_arg1, ___1_arg2, reinterpret_cast<RuntimeMethod*>(__this->___method));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Action_2_Invoke_m7BFCE0BBCF67689D263059B56A8D79161B698587_gshared_inline (Action_2_t156C43F079E7E68155FCDCD12DC77DD11AEF7E3C* __this, RuntimeObject* ___0_arg1, RuntimeObject* ___1_arg2, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, RuntimeObject*, RuntimeObject*, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl)((Il2CppObject*)__this->___method_code, ___0_arg1, ___1_arg2, reinterpret_cast<RuntimeMethod*>(__this->___method));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR intptr_t MarshalledUnityObject_MarshalNotNull_TisRuntimeObject_mEB1AA6B672D00242BB9DCE007056EC0E9C8DB075_gshared_inline (RuntimeObject* ___0_obj, const RuntimeMethod* method) 
{
	intptr_t V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		RuntimeObject* L_0 = ___0_obj;
		NullCheck(L_0);
		intptr_t L_1 = ((Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)L_0)->___m_CachedPtr;
		V_0 = L_1;
		goto IL_000f;
	}

IL_000f:
	{
		intptr_t L_2 = V_0;
		return L_2;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* Unmarshal_UnmarshalUnityObject_TisRuntimeObject_m2B04FEB8E4BB254DD6F827F3111C91F2AF16D04A_gshared_inline (intptr_t ___0_gcHandlePtr, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	GCHandle_tC44F6F72EE68BD4CFABA24309DA7A179D41127DC V_0;
	memset((&V_0), 0, sizeof(V_0));
	RuntimeObject* V_1 = NULL;
	bool V_2 = false;
	RuntimeObject* V_3 = NULL;
	RuntimeObject* V_4 = NULL;
	{
		intptr_t L_0 = ___0_gcHandlePtr;
		bool L_1;
		L_1 = IntPtr_op_Equality_m7D9CDCDE9DC2A0C2C614633F4921E90187FAB271_inline(L_0, 0, NULL);
		V_2 = L_1;
		bool L_2 = V_2;
		if (!L_2)
		{
			goto IL_001d;
		}
	}
	{
		il2cpp_codegen_initobj((&V_3), sizeof(RuntimeObject*));
		RuntimeObject* L_3 = V_3;
		V_4 = L_3;
		goto IL_0036;
	}

IL_001d:
	{
		intptr_t L_4 = ___0_gcHandlePtr;
		GCHandle_tC44F6F72EE68BD4CFABA24309DA7A179D41127DC L_5;
		L_5 = Unmarshal_FromIntPtrUnsafe_mB304834C5EC431CC0FBE13C6BB97066F222BC55C_inline(L_4, NULL);
		V_0 = L_5;
		RuntimeObject* L_6;
		L_6 = GCHandle_get_Target_m481F9508DA5E384D33CD1F4450060DC56BBD4CD5_inline((&V_0), NULL);
		V_1 = ((RuntimeObject*)Castclass((RuntimeObject*)L_6, il2cpp_rgctx_data(method->rgctx_data, 0)));
		RuntimeObject* L_7 = V_1;
		V_4 = L_7;
		goto IL_0036;
	}

IL_0036:
	{
		RuntimeObject* L_8 = V_4;
		return L_8;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Span_1__ctor_m2FF12B712FEDB8173F74807DC6FF2C18126FF8CF_gshared_inline (Span_1_tC29EC1099E0CDA9241D8A63482E444F1E1FE1FDA* __this, Vector3IntU5BU5D_t7A7C64EB93B0E0C1989C82C3D0A003294FC6EC5E* ___0_array, const RuntimeMethod* method) 
{
	Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3IntU5BU5D_t7A7C64EB93B0E0C1989C82C3D0A003294FC6EC5E* L_0 = ___0_array;
		if (L_0)
		{
			goto IL_000b;
		}
	}
	{
		il2cpp_codegen_initobj(__this, sizeof(Span_1_tC29EC1099E0CDA9241D8A63482E444F1E1FE1FDA));
		return;
	}

IL_000b:
	{
		il2cpp_codegen_initobj((&V_0), sizeof(Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376));
		goto IL_0037;
	}

IL_0037:
	{
		Vector3IntU5BU5D_t7A7C64EB93B0E0C1989C82C3D0A003294FC6EC5E* L_2 = ___0_array;
		NullCheck((RuntimeArray*)L_2);
		uint8_t* L_3;
		L_3 = Array_GetRawSzArrayData_m2F8F5B2A381AEF971F12866D9C0A6C4FBA59F6BB_inline((RuntimeArray*)L_2, NULL);
		Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376* L_4;
		L_4 = il2cpp_unsafe_as_ref<Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376>(L_3);
		ByReference_1_t05909623F1CBB30E5AF69C769FF0964BE661E134 L_5;
		memset((&L_5), 0, sizeof(L_5));
		il2cpp_codegen_by_reference_constructor((Il2CppByReference*)(&L_5), L_4);
		__this->____pointer = L_5;
		Vector3IntU5BU5D_t7A7C64EB93B0E0C1989C82C3D0A003294FC6EC5E* L_6 = ___0_array;
		NullCheck(L_6);
		__this->____length = ((int32_t)(((RuntimeArray*)L_6)->max_length));
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Span_1_get_Length_mF4C43881CB4622B68DB84785142C44ADE93E85D7_gshared_inline (Span_1_tC29EC1099E0CDA9241D8A63482E444F1E1FE1FDA* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____length;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR intptr_t MarshalledUnityObject_Marshal_TisRuntimeObject_m286B34400A212037E8EBD53DBFEAD7D23CDE8051_gshared_inline (RuntimeObject* ___0_obj, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	bool V_0 = false;
	intptr_t V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		RuntimeObject* L_0 = ___0_obj;
		V_0 = (bool)((((RuntimeObject*)(RuntimeObject*)L_0) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0016;
		}
	}
	{
		V_1 = 0;
		goto IL_001f;
	}

IL_0016:
	{
		RuntimeObject* L_2 = ___0_obj;
		intptr_t L_3;
		L_3 = MarshalledUnityObject_MarshalNotNull_TisRuntimeObject_mEB1AA6B672D00242BB9DCE007056EC0E9C8DB075_inline(L_2, il2cpp_rgctx_method(method->rgctx_data, 1));
		V_1 = L_3;
		goto IL_001f;
	}

IL_001f:
	{
		intptr_t L_4 = V_1;
		return L_4;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Color__ctor_m3786F0D6E510D9CFA544523A955870BD2A514C8C_inline (Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* __this, float ___0_r, float ___1_g, float ___2_b, float ___3_a, const RuntimeMethod* method) 
{
	{
		float L_0 = ___0_r;
		__this->___r = L_0;
		float L_1 = ___1_g;
		__this->___g = L_1;
		float L_2 = ___2_b;
		__this->___b = L_2;
		float L_3 = ___3_a;
		__this->___a = L_3;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, float ___0_x, float ___1_y, float ___2_z, const RuntimeMethod* method) 
{
	{
		float L_0 = ___0_x;
		__this->___x = L_0;
		float L_1 = ___1_y;
		__this->___y = L_1;
		float L_2 = ___2_z;
		__this->___z = L_2;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t BoundsInt_get_xMin_m255A25A18122FF0155AB965564DC10E916DB8DF1_inline (BoundsInt_t4E757DE5EFF9FCB42000F173360DDC63B5585485* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376* L_0 = (Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376*)(&__this->___m_Position);
		int32_t L_1;
		L_1 = Vector3Int_get_x_m21C268D2AA4C03CE35AA49DF6155347C9748054C_inline(L_0, NULL);
		Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376* L_2 = (Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376*)(&__this->___m_Position);
		int32_t L_3;
		L_3 = Vector3Int_get_x_m21C268D2AA4C03CE35AA49DF6155347C9748054C_inline(L_2, NULL);
		Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376* L_4 = (Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376*)(&__this->___m_Size);
		int32_t L_5;
		L_5 = Vector3Int_get_x_m21C268D2AA4C03CE35AA49DF6155347C9748054C_inline(L_4, NULL);
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		int32_t L_6;
		L_6 = Math_Min_m53C488772A34D53917BCA2A491E79A0A5356ED52(L_1, ((int32_t)il2cpp_codegen_add(L_3, L_5)), NULL);
		V_0 = L_6;
		goto IL_002b;
	}

IL_002b:
	{
		int32_t L_7 = V_0;
		return L_7;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t BoundsInt_get_yMin_m36BB6D14F979D5C332475B737045E612907304EE_inline (BoundsInt_t4E757DE5EFF9FCB42000F173360DDC63B5585485* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376* L_0 = (Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376*)(&__this->___m_Position);
		int32_t L_1;
		L_1 = Vector3Int_get_y_m42F43000F85D356557CAF03442273E7AA08F7F72_inline(L_0, NULL);
		Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376* L_2 = (Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376*)(&__this->___m_Position);
		int32_t L_3;
		L_3 = Vector3Int_get_y_m42F43000F85D356557CAF03442273E7AA08F7F72_inline(L_2, NULL);
		Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376* L_4 = (Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376*)(&__this->___m_Size);
		int32_t L_5;
		L_5 = Vector3Int_get_y_m42F43000F85D356557CAF03442273E7AA08F7F72_inline(L_4, NULL);
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		int32_t L_6;
		L_6 = Math_Min_m53C488772A34D53917BCA2A491E79A0A5356ED52(L_1, ((int32_t)il2cpp_codegen_add(L_3, L_5)), NULL);
		V_0 = L_6;
		goto IL_002b;
	}

IL_002b:
	{
		int32_t L_7 = V_0;
		return L_7;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t BoundsInt_get_zMin_mD407CC67476B50EEFD1ED07A51FC3588616E4E3C_inline (BoundsInt_t4E757DE5EFF9FCB42000F173360DDC63B5585485* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376* L_0 = (Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376*)(&__this->___m_Position);
		int32_t L_1;
		L_1 = Vector3Int_get_z_m96E180F866145E373F42358F2371EFF446F08AED_inline(L_0, NULL);
		Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376* L_2 = (Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376*)(&__this->___m_Position);
		int32_t L_3;
		L_3 = Vector3Int_get_z_m96E180F866145E373F42358F2371EFF446F08AED_inline(L_2, NULL);
		Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376* L_4 = (Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376*)(&__this->___m_Size);
		int32_t L_5;
		L_5 = Vector3Int_get_z_m96E180F866145E373F42358F2371EFF446F08AED_inline(L_4, NULL);
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		int32_t L_6;
		L_6 = Math_Min_m53C488772A34D53917BCA2A491E79A0A5356ED52(L_1, ((int32_t)il2cpp_codegen_add(L_3, L_5)), NULL);
		V_0 = L_6;
		goto IL_002b;
	}

IL_002b:
	{
		int32_t L_7 = V_0;
		return L_7;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3Int__ctor_mE06A86999D16FA579A7F2142B872AB7E3695C9E0_inline (Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376* __this, int32_t ___0_x, int32_t ___1_y, int32_t ___2_z, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___0_x;
		__this->___m_X = L_0;
		int32_t L_1 = ___1_y;
		__this->___m_Y = L_1;
		int32_t L_2 = ___2_z;
		__this->___m_Z = L_2;
		return;
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR GCHandle_tC44F6F72EE68BD4CFABA24309DA7A179D41127DC Unmarshal_FromIntPtrUnsafe_mB304834C5EC431CC0FBE13C6BB97066F222BC55C_inline (intptr_t ___0_gcHandle, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnsafeUtility_As_TisIntPtr_t_TisGCHandle_tC44F6F72EE68BD4CFABA24309DA7A179D41127DC_mD94F597CB91662C823496DA9FA9A7CF908734A78_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	GCHandle_tC44F6F72EE68BD4CFABA24309DA7A179D41127DC V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		GCHandle_tC44F6F72EE68BD4CFABA24309DA7A179D41127DC* L_0;
		L_0 = UnsafeUtility_As_TisIntPtr_t_TisGCHandle_tC44F6F72EE68BD4CFABA24309DA7A179D41127DC_mD94F597CB91662C823496DA9FA9A7CF908734A78_inline((&___0_gcHandle), UnsafeUtility_As_TisIntPtr_t_TisGCHandle_tC44F6F72EE68BD4CFABA24309DA7A179D41127DC_mD94F597CB91662C823496DA9FA9A7CF908734A78_RuntimeMethod_var);
		GCHandle_tC44F6F72EE68BD4CFABA24309DA7A179D41127DC L_1 = (*(GCHandle_tC44F6F72EE68BD4CFABA24309DA7A179D41127DC*)L_0);
		V_0 = L_1;
		goto IL_0010;
	}

IL_0010:
	{
		GCHandle_tC44F6F72EE68BD4CFABA24309DA7A179D41127DC L_2 = V_0;
		return L_2;
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR uint8_t* Array_GetRawSzArrayData_m2F8F5B2A381AEF971F12866D9C0A6C4FBA59F6BB_inline (RuntimeArray* __this, const RuntimeMethod* method) 
{
	{
		RawData_t37CAF2D3F74B7723974ED7CEEE9B297D8FA64ED0* L_0;
		L_0 = il2cpp_unsafe_as<RawData_t37CAF2D3F74B7723974ED7CEEE9B297D8FA64ED0*>(__this);
		NullCheck(L_0);
		uint8_t* L_1 = (uint8_t*)(&L_0->___Data);
		return L_1;
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool GCHandle_CanDereferenceHandle_mAAAC42D1268CEF3FDD040A3D1574773D08140579_inline (intptr_t ___0_handle, const RuntimeMethod* method) 
{
	{
		intptr_t L_0 = ___0_handle;
		return (bool)((((intptr_t)((intptr_t)(L_0&((intptr_t)1)))) == ((intptr_t)((intptr_t)0)))? 1 : 0);
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
		RuntimeObject* L_3 = *((RuntimeObject**)L_2);
		return L_3;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR GCHandle_tC44F6F72EE68BD4CFABA24309DA7A179D41127DC* UnsafeUtility_As_TisIntPtr_t_TisGCHandle_tC44F6F72EE68BD4CFABA24309DA7A179D41127DC_mD94F597CB91662C823496DA9FA9A7CF908734A78_gshared_inline (intptr_t* ___0_from, const RuntimeMethod* method) 
{
	{
		intptr_t* L_0 = ___0_from;
		return (GCHandle_tC44F6F72EE68BD4CFABA24309DA7A179D41127DC*)(L_0);
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
