﻿#include "pch-cpp.hpp"






struct BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4;
struct Attribute_tFDA8EFEFB0711976D22474794576DAF28F7440AA;
struct EmbeddedAttribute_t8BDDAF1F91037A92898D95EE798AA3AF4D8D9686;
struct IsReadOnlyAttribute_tA578C716161FF468CAC25547D076FFED331DD5E6;
struct NativeIntegerAttribute_t80987D8E425EEDF1C26C9E7F7A8D34D1C5D2631F;
struct NonVersionableAttribute_tA3DDBC1E36556A09C3CEBAF8234FC6609A496D6D;
struct String_t;

IL2CPP_EXTERN_C RuntimeClass* BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4_il2cpp_TypeInfo_var;

struct BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
struct U3CModuleU3E_t68C90672D35148C72B410A31D56D66EA3268B614 
{
};
struct Attribute_tFDA8EFEFB0711976D22474794576DAF28F7440AA  : public RuntimeObject
{
};
struct Unsafe_t1B60DB2A3A2A631E537D045BDF121ECE5B06A3A0  : public RuntimeObject
{
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
struct EmbeddedAttribute_t8BDDAF1F91037A92898D95EE798AA3AF4D8D9686  : public Attribute_tFDA8EFEFB0711976D22474794576DAF28F7440AA
{
};
struct IsReadOnlyAttribute_tA578C716161FF468CAC25547D076FFED331DD5E6  : public Attribute_tFDA8EFEFB0711976D22474794576DAF28F7440AA
{
};
struct NativeIntegerAttribute_t80987D8E425EEDF1C26C9E7F7A8D34D1C5D2631F  : public Attribute_tFDA8EFEFB0711976D22474794576DAF28F7440AA
{
	BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4* ___TransformFlags;
};
struct NonVersionableAttribute_tA3DDBC1E36556A09C3CEBAF8234FC6609A496D6D  : public Attribute_tFDA8EFEFB0711976D22474794576DAF28F7440AA
{
};
struct UInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B 
{
	uint32_t ___m_value;
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
struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_StaticFields
{
	String_t* ___TrueString;
	String_t* ___FalseString;
};
#ifdef __clang__
#pragma clang diagnostic pop
#endif
struct BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4  : public RuntimeArray
{
	ALIGN_FIELD (8) bool m_Items[1];

	inline bool GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline bool* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, bool value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline bool GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline bool* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, bool value)
	{
		m_Items[index] = value;
	}
};



IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Attribute__ctor_m79ED1BF1EE36D1E417BA89A0D9F91F8AAD8D19E2 (Attribute_tFDA8EFEFB0711976D22474794576DAF28F7440AA* __this, const RuntimeMethod* method) ;
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Unsafe_CopyBlock_m8A0B5B43DE34182F40AECC9DA9F5D6B0B47F70CC (void* ___0_destination, void* ___1_source, uint32_t ___2_byteCount, const RuntimeMethod* method) 
{
	{
		void* L_0 = ___0_destination;
		void* L_1 = ___1_source;
		uint32_t L_2 = ___2_byteCount;
		il2cpp_codegen_memcpy(L_0, L_1, L_2);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Unsafe_CopyBlock_mEF42D5969E8E67B33612DE1A7DF7C5B99B0BE5FB (uint8_t* ___0_destination, uint8_t* ___1_source, uint32_t ___2_byteCount, const RuntimeMethod* method) 
{
	{
		uint8_t* L_0 = ___0_destination;
		uint8_t* L_1 = ___1_source;
		uint32_t L_2 = ___2_byteCount;
		il2cpp_codegen_memcpy(L_0, L_1, L_2);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Unsafe_CopyBlockUnaligned_m3433A5FAE4AA72EF30F86E5DF6C52EF12E43409A (void* ___0_destination, void* ___1_source, uint32_t ___2_byteCount, const RuntimeMethod* method) 
{
	{
		void* L_0 = ___0_destination;
		void* L_1 = ___1_source;
		uint32_t L_2 = ___2_byteCount;
		il2cpp_codegen_memcpy(L_0, L_1, L_2);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Unsafe_CopyBlockUnaligned_mDF58F6B66FE59AF2A00CE0E2B885DA6F2865BA8A (uint8_t* ___0_destination, uint8_t* ___1_source, uint32_t ___2_byteCount, const RuntimeMethod* method) 
{
	{
		uint8_t* L_0 = ___0_destination;
		uint8_t* L_1 = ___1_source;
		uint32_t L_2 = ___2_byteCount;
		il2cpp_codegen_memcpy(L_0, L_1, L_2);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Unsafe_InitBlock_mA1A3190362EDCC9E9801D92AC94C7067769DA922 (void* ___0_startAddress, uint8_t ___1_value, uint32_t ___2_byteCount, const RuntimeMethod* method) 
{
	{
		void* L_0 = ___0_startAddress;
		uint8_t L_1 = ___1_value;
		uint32_t L_2 = ___2_byteCount;
		il2cpp_codegen_memset(L_0, L_1, L_2);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Unsafe_InitBlock_m48443EAA693E41FE587368A1CDD1E365ED2BFE1E (uint8_t* ___0_startAddress, uint8_t ___1_value, uint32_t ___2_byteCount, const RuntimeMethod* method) 
{
	{
		uint8_t* L_0 = ___0_startAddress;
		uint8_t L_1 = ___1_value;
		uint32_t L_2 = ___2_byteCount;
		il2cpp_codegen_memset(L_0, L_1, L_2);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Unsafe_InitBlockUnaligned_m7622CF2152EE7AF62EF3B7E596C75A5F01D9D2ED (void* ___0_startAddress, uint8_t ___1_value, uint32_t ___2_byteCount, const RuntimeMethod* method) 
{
	{
		void* L_0 = ___0_startAddress;
		uint8_t L_1 = ___1_value;
		uint32_t L_2 = ___2_byteCount;
		il2cpp_codegen_memset(L_0, L_1, L_2);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Unsafe_InitBlockUnaligned_m4D17DB88E875AB1B32449D4C4B34FD53472E46F8 (uint8_t* ___0_startAddress, uint8_t ___1_value, uint32_t ___2_byteCount, const RuntimeMethod* method) 
{
	{
		uint8_t* L_0 = ___0_startAddress;
		uint8_t L_1 = ___1_value;
		uint32_t L_2 = ___2_byteCount;
		il2cpp_codegen_memset(L_0, L_1, L_2);
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NonVersionableAttribute__ctor_m0ADAC9DE3EE89069011DA00E4AF296F598A6B91E (NonVersionableAttribute_tA3DDBC1E36556A09C3CEBAF8234FC6609A496D6D* __this, const RuntimeMethod* method) 
{
	{
		Attribute__ctor_m79ED1BF1EE36D1E417BA89A0D9F91F8AAD8D19E2(__this, NULL);
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IsReadOnlyAttribute__ctor_mCDC1F0E3639B43913D9103DD3C2543F5C0E4B07F (IsReadOnlyAttribute_tA578C716161FF468CAC25547D076FFED331DD5E6* __this, const RuntimeMethod* method) 
{
	{
		Attribute__ctor_m79ED1BF1EE36D1E417BA89A0D9F91F8AAD8D19E2(__this, NULL);
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeIntegerAttribute__ctor_mBDAB5520BC98665A2B58370527D6BAF64917D0C1 (NativeIntegerAttribute_t80987D8E425EEDF1C26C9E7F7A8D34D1C5D2631F* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Attribute__ctor_m79ED1BF1EE36D1E417BA89A0D9F91F8AAD8D19E2(__this, NULL);
		BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4* L_0 = (BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4*)(BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4*)SZArrayNew(BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4_il2cpp_TypeInfo_var, (uint32_t)1);
		BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4* L_1 = L_0;
		NullCheck(L_1);
		(L_1)->SetAt(static_cast<il2cpp_array_size_t>(0), (bool)1);
		__this->___TransformFlags = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___TransformFlags), (void*)L_1);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeIntegerAttribute__ctor_m29737024AEF7D830F87DA49CA8AED4D7B71B5EF0 (NativeIntegerAttribute_t80987D8E425EEDF1C26C9E7F7A8D34D1C5D2631F* __this, BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4* ___0_A_0, const RuntimeMethod* method) 
{
	{
		Attribute__ctor_m79ED1BF1EE36D1E417BA89A0D9F91F8AAD8D19E2(__this, NULL);
		BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4* L_0 = ___0_A_0;
		__this->___TransformFlags = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___TransformFlags), (void*)L_0);
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EmbeddedAttribute__ctor_mD2BC23ADD852FC1DD7D00E1790D4877AEE78E6A3 (EmbeddedAttribute_t8BDDAF1F91037A92898D95EE798AA3AF4D8D9686* __this, const RuntimeMethod* method) 
{
	{
		Attribute__ctor_m79ED1BF1EE36D1E417BA89A0D9F91F8AAD8D19E2(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
