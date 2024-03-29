﻿#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>
#include <stdint.h>


struct VirtualActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename T1>
struct VirtualActionInvoker1
{
	typedef void (*Action)(void*, T1, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
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
template <typename R>
struct VirtualFuncInvoker0
{
	typedef R (*Func)(void*, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename R, typename T1>
struct VirtualFuncInvoker1
{
	typedef R (*Func)(void*, T1, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
template <typename R, typename T1, typename T2>
struct VirtualFuncInvoker2
{
	typedef R (*Func)(void*, T1, T2, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
	}
};
template <typename T1>
struct GenericVirtualActionInvoker1
{
	typedef void (*Action)(void*, T1, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_virtual_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
struct InterfaceActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename T1>
struct InterfaceActionInvoker1
{
	typedef void (*Action)(void*, T1, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
template <typename R>
struct InterfaceFuncInvoker0
{
	typedef R (*Func)(void*, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		return ((Func)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename T1>
struct GenericInterfaceActionInvoker1
{
	typedef void (*Action)(void*, T1, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_interface_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
template <typename T1, typename T2>
struct InvokerActionInvoker2;
template <typename T1, typename T2>
struct InvokerActionInvoker2<T1*, T2>
{
	static inline void Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1, T2 p2)
	{
		void* params[2] = { p1, &p2 };
		method->invoker_method(methodPtr, method, obj, params, NULL);
	}
};
template <typename T1, typename T2, typename T3>
struct InvokerActionInvoker3;
template <typename T1, typename T2, typename T3>
struct InvokerActionInvoker3<T1*, T2*, T3>
{
	static inline void Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1, T2* p2, T3 p3)
	{
		void* params[3] = { p1, p2, &p3 };
		method->invoker_method(methodPtr, method, obj, params, NULL);
	}
};

// System.Action`1<System.Collections.Generic.Dictionary`2<System.String,System.String>>
struct Action_1_tE974880775FC548AAD9D5D87454AA897D3B56023;
// System.Action`1<System.Text.StringBuilder>
struct Action_1_t9E1712DA0A3123C126566BD722BF0E60F1E0AAD6;
// System.Action`1<Meta.WitAi.WitRequest>
struct Action_1_tEE33A71F533D86EBC6A768BBF5F08D7A5AA0DA35;
// System.Action`3<System.Int32,System.Single[],System.Single>
struct Action_3_t014775F97068AFC7018FE805CA856B7C5CF281F8;
// System.Action`3<System.Int32,System.Object,System.Single>
struct Action_3_t041F9EB77535247CDCF010C1F285CCCEFE9E2F04;
// Meta.WitAi.Data.RingBuffer`1/ByteDataWriter<System.Byte>
struct ByteDataWriter_t42C70174C8038884885A93F156C878EC779F882D;
// System.Collections.Concurrent.ConcurrentQueue`1<System.Action>
struct ConcurrentQueue_1_tC8B0BCCEA7ED64CA00454B9EB2F35771723A00D3;
// System.Collections.Generic.Dictionary`2<System.Object,System.Object>
struct Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA;
// System.Collections.Generic.Dictionary`2<System.String,System.Collections.Generic.List`1<Meta.Conduit.InvocationContext>>
struct Dictionary_2_t27637911D95F8F26CB00E5FF60BB5EA9DCEEEFC1;
// System.Collections.Generic.Dictionary`2<System.String,System.Collections.Generic.List`1<System.String>>
struct Dictionary_2_t79BA378F246EFA4AD0AFFA017D788423CACA8638;
// System.Collections.Generic.Dictionary`2<System.String,System.String>
struct Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83;
// System.Collections.Generic.Dictionary`2<System.String,System.Type>
struct Dictionary_2_t0E98B58821A879161B744DA2602DA878A7E5C58A;
// System.Collections.Generic.Dictionary`2<System.String,Meta.WitAi.Json.WitResponseNode>
struct Dictionary_2_tC2F17B4EBFD9F0FDFFCDED4E70FD0B5EBA0CF7EE;
// System.Collections.Generic.Dictionary`2<System.Text.RegularExpressions.Regex/CachedCodeEntryKey,System.Text.RegularExpressions.Regex/CachedCodeEntry>
struct Dictionary_2_t5B5B38BB06341F50E1C75FB53208A2A66CAE57F7;
// System.Func`1<System.Boolean>
struct Func_1_t2BE7F58348C9CC544A8973B3A9E55541DE43C457;
// System.Func`2<System.Object,System.Object>
struct Func_2_tACBF5A1656250800CE861707354491F0611F6624;
// System.Func`2<Meta.WitAi.Events.SpeechEvents,UnityEngine.Events.UnityEvent`1<System.Object>>
struct Func_2_tF288A256AA0632950A529954419DA3E50DEB972B;
// System.Func`2<Meta.WitAi.Events.SpeechEvents,UnityEngine.Events.UnityEvent`1<System.Single>>
struct Func_2_t0F30FACC4CABFFD27DDEBE31FB321AA523A06B7D;
// System.Func`2<Meta.WitAi.Events.SpeechEvents,UnityEngine.Events.UnityEvent`1<System.String>>
struct Func_2_tD49A9546076918B07593787D23EE9245E84C1AD0;
// System.Func`2<Meta.WitAi.Events.SpeechEvents,UnityEngine.Events.UnityEvent`1<Meta.WitAi.Requests.VoiceServiceRequest>>
struct Func_2_tD24D6BC507F5AA415E63472DF1247E49582D7A1F;
// System.Func`2<Meta.WitAi.Events.SpeechEvents,UnityEngine.Events.UnityEvent`1<Meta.WitAi.WitRequest>>
struct Func_2_tC95346D56902FBF6D1621BDE4F2039F61F917F52;
// System.Func`2<Meta.WitAi.Events.SpeechEvents,UnityEngine.Events.UnityEvent`1<Meta.WitAi.Configuration.WitRequestOptions>>
struct Func_2_tCD773FD80F11C1399B4604D1EB19BB7436356388;
// System.Func`2<Meta.WitAi.Events.SpeechEvents,UnityEngine.Events.UnityEvent`1<Meta.WitAi.Json.WitResponseNode>>
struct Func_2_t5DC062A102C3300E4BF548012A747BB3E0A5BA57;
// System.Func`2<Meta.WitAi.Events.SpeechEvents,UnityEngine.Events.UnityEvent`2<System.Object,System.Object>>
struct Func_2_tEC4A317B4B6A5981E09F1F82B534DAC20D627027;
// System.Func`2<Meta.WitAi.Events.SpeechEvents,UnityEngine.Events.UnityEvent`2<System.String,System.String>>
struct Func_2_tB18F1F7AE9EDB9705E036A284B88C5F3613A7F78;
// System.Func`2<Meta.WitAi.Events.SpeechEvents,UnityEngine.Events.UnityEvent>
struct Func_2_tDCA29CF738B0C5F51018D3D7FCBCC1BCF5EF829A;
// System.Func`2<System.UriBuilder,System.UriBuilder>
struct Func_2_t50F3AB8094AE0A06CD522F06E80D6A35B9E1BD62;
// System.Collections.Generic.HashSet`1<UnityEngine.Component>
struct HashSet_1_tF0A60E739EB979571381F8FB075B6B90F6FA6F8D;
// System.Collections.Generic.HashSet`1<System.Object>
struct HashSet_1_t2F33BEB06EEA4A872E2FAF464382422AA39AE885;
// System.Collections.Generic.HashSet`1<Meta.WitAi.Events.SpeechEvents>
struct HashSet_1_tA2DD82C656859A8F953FE80E0E7CFAA242AFFEB7;
// System.Collections.Generic.HashSet`1<System.String>
struct HashSet_1_tEFC6605F7DE53F71946C33FD371E53C3100F2178;
// System.Collections.Generic.HashSet`1<Meta.WitAi.Requests.VoiceServiceRequest>
struct HashSet_1_tCF8F4C898D9D97CDE054CF1276B78134DEEC70AE;
// System.Collections.Generic.IEnumerable`1<System.Object>
struct IEnumerable_1_tF95C9E01A913DD50575531C8305932628663D9E9;
// System.Collections.Generic.IEnumerable`1<System.String>
struct IEnumerable_1_t349E66EC5F09B881A8E52EE40A1AB9EC60E08E44;
// System.Collections.Generic.IEnumerable`1<Meta.WitAi.Data.Entities.WitDynamicEntity>
struct IEnumerable_1_t2D634810B70BA60D058556A5B02CC70943B13FBD;
// System.Collections.Generic.IEnumerator`1<Meta.WitAi.Data.Entities.WitDynamicEntity>
struct IEnumerator_1_t709344B44EB10AADCDAB1765E9ABBE3252E7E3E5;
// System.Collections.Generic.IEqualityComparer`1<UnityEngine.Component>
struct IEqualityComparer_1_t5F1247344658B7771C2EFA9A56F3195BF2EFD422;
// System.Collections.Generic.IEqualityComparer`1<System.Object>
struct IEqualityComparer_1_t2CA7720C7ADCCDECD3B02E45878B4478619D5347;
// System.Collections.Generic.IEqualityComparer`1<Meta.WitAi.Events.SpeechEvents>
struct IEqualityComparer_1_tD63B99F3B4F9F005B5DB1959E3AC0691FC2D081E;
// System.Collections.Generic.IEqualityComparer`1<System.String>
struct IEqualityComparer_1_tAE94C8F24AD5B94D4EE85CA9FC59E3409D41CAF7;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.Object,System.Object>
struct KeyCollection_tB45A861D090B15129521119AE48ED3813820A974;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.String,System.Collections.Generic.List`1<System.String>>
struct KeyCollection_tAF09DE3ACAF1ABD7544A92CFC2787E520703246E;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.String,System.String>
struct KeyCollection_t2EDD317F5771E575ACB63527B5AFB71291040342;
// System.Collections.Generic.List`1<Meta.Conduit.ManifestAction>
struct List_1_t5AF4A4A0124C0DD93C82F7CD5DA1CE941F4356DD;
// System.Collections.Generic.List`1<Meta.Conduit.ManifestEntity>
struct List_1_t1C87799537DA2AA3C5852C495E8A76986C29EF21;
// System.Collections.Generic.List`1<Meta.Conduit.ManifestErrorHandler>
struct List_1_tA7D4E27AD78BE05A7E20460DC12F7F34BBDDD177;
// System.Collections.Generic.List`1<System.Object>
struct List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D;
// System.Collections.Generic.List`1<System.String>
struct List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD;
// System.Collections.Generic.List`1<Meta.WitAi.Data.Entities.WitDynamicEntity>
struct List_1_t6D090AF9EB273D470FE30798680167DEBB0CC11B;
// System.Collections.Generic.List`1<Meta.WitAi.Data.Info.WitEntityKeywordInfo>
struct List_1_t4F3133982BFC53A2508E8212590377CE60E9596C;
// System.Collections.Generic.List`1<Meta.WitAi.Json.WitResponseNode>
struct List_1_t9CEE2998D6E0D27CA64916B517759F8657596864;
// Meta.WitAi.Data.RingBuffer`1/Marker<System.Byte>
struct Marker_t80D0133ECCCB8414D295FFD7C3FB9E6E564F5E42;
// Meta.Voice.NLPAudioRequest`4<System.Object,System.Object,System.Object,System.Object>
struct NLPAudioRequest_4_tB6B029BFDAEFFA17E2FA29CA64C51F87D70DE9CA;
// Meta.Voice.NLPAudioRequest`4<Meta.WitAi.Requests.VoiceServiceRequestEvent,Meta.WitAi.Configuration.WitRequestOptions,Meta.WitAi.Requests.VoiceServiceRequestEvents,Meta.WitAi.Requests.VoiceServiceRequestResults>
struct NLPAudioRequest_4_tB9AEC6E5E0DE9E86BAEA62F8FF35242BB6640C25;
// Meta.Voice.NLPRequest`4<System.Object,System.Object,System.Object,System.Object>
struct NLPRequest_4_t79F59B9AB3FBFADB04B729AEF19245FE89658855;
// Meta.Voice.NLPRequest`4<Meta.WitAi.Requests.VoiceServiceRequestEvent,Meta.WitAi.Configuration.WitRequestOptions,Meta.WitAi.Requests.VoiceServiceRequestEvents,Meta.WitAi.Requests.VoiceServiceRequestResults>
struct NLPRequest_4_t7177BC2349443FF686C2D98FDB887CA5744C4323;
// Meta.WitAi.Data.RingBuffer`1/OnDataAdded<System.Byte>
struct OnDataAdded_t60B4E07A9B4244E018EC7EA53FCA71F62C0A0D12;
// System.Predicate`1<System.Object>
struct Predicate_1_t8342C85FF4E41CD1F7024AC0CDC3E5312A32CB12;
// System.Predicate`1<Meta.WitAi.Data.Entities.WitDynamicEntity>
struct Predicate_1_t39557AE2C0B3C676DB62FADB5D71DD45826B8572;
// Meta.WitAi.Requests.VRequest/RequestCompleteDelegate`1<System.Object>
struct RequestCompleteDelegate_1_t336E76112EC94D50E34938D06BC1F55D2227D738;
// Meta.WitAi.Requests.VRequest/RequestCompleteDelegate`1<UnityEngine.Networking.UnityWebRequest>
struct RequestCompleteDelegate_1_t5AF447A591A5097051D3A5AFBB764165380A9835;
// Meta.WitAi.Requests.VRequest/RequestCompleteDelegate`1<Meta.WitAi.Json.WitResponseNode>
struct RequestCompleteDelegate_1_tDB32EFF5395222142E2DE478401516FF7916E807;
// Meta.WitAi.Data.RingBuffer`1<System.Byte>
struct RingBuffer_1_t553FDAA382235F13BBC8000565860BFE1438D276;
// UnityEngine.Events.UnityAction`1<System.Object>
struct UnityAction_1_t9C30BCD020745BF400CBACF22C6F34ADBA2DDA6A;
// UnityEngine.Events.UnityAction`1<System.Single>
struct UnityAction_1_tAEFA3C1C529F0E1AD7C7C7AFC88822D359E7AC90;
// UnityEngine.Events.UnityAction`1<System.String>
struct UnityAction_1_t690494F0E492A2098660E28B8EB7D71B2C69BE1B;
// UnityEngine.Events.UnityAction`1<Meta.WitAi.Requests.VoiceServiceRequest>
struct UnityAction_1_t47424DEBAD5E8E58E4A0DD7FD64A5834C41F7896;
// UnityEngine.Events.UnityAction`1<Meta.WitAi.Data.VoiceSession>
struct UnityAction_1_tF266B43F3B48247A8143BA850AC13FFC634512E9;
// UnityEngine.Events.UnityAction`1<Meta.WitAi.Json.WitResponseNode>
struct UnityAction_1_t7814257576DA9D92A82FF91BA3EE537553AC1BC8;
// UnityEngine.Events.UnityEvent`1<System.String[]>
struct UnityEvent_1_t477222AA4CE1BE0F15900D352218F0A842BF5EFD;
// UnityEngine.Events.UnityEvent`1<System.Object>
struct UnityEvent_1_t3CE03B42D5873C0C0E0692BEE72E1E6D5399F205;
// UnityEngine.Events.UnityEvent`1<System.Single>
struct UnityEvent_1_tDD811EB8F49CEE97BA6DF59344DFE6C6F42553D4;
// UnityEngine.Events.UnityEvent`1<System.String>
struct UnityEvent_1_tC9859540CF1468306CAB6D758C0A0D95DBCEC257;
// UnityEngine.Events.UnityEvent`1<Meta.WitAi.Requests.VoiceServiceRequest>
struct UnityEvent_1_t2AED438DE5FAF741875343B8663599EC1EC222E2;
// UnityEngine.Events.UnityEvent`1<Meta.WitAi.Data.VoiceSession>
struct UnityEvent_1_t7ED997BF6FDFAAFDDB2D9E2EDE55BE3DF55284AA;
// UnityEngine.Events.UnityEvent`1<Meta.WitAi.WitRequest>
struct UnityEvent_1_tD140963BF887A3E18CDB90439A9DD6FE5438B8B8;
// UnityEngine.Events.UnityEvent`1<Meta.WitAi.Configuration.WitRequestOptions>
struct UnityEvent_1_tB2107CA265B68A4E479CAFA0530DAE8251E03F58;
// UnityEngine.Events.UnityEvent`1<Meta.WitAi.Json.WitResponseClass>
struct UnityEvent_1_t5B716A16BF3DD47CC6FE568AA000E45B91A8B272;
// UnityEngine.Events.UnityEvent`1<Meta.WitAi.Json.WitResponseNode>
struct UnityEvent_1_t3DC4F1FBCED8AF76C18EC16A2B55C43FBAE5E62D;
// UnityEngine.Events.UnityEvent`2<System.Int64,System.Double>
struct UnityEvent_2_t8D8E787461BECB35F2627E8001A36D825CA99A97;
// UnityEngine.Events.UnityEvent`2<System.Object,System.Object>
struct UnityEvent_2_t77BDA795C84FBEFE9D3AE3DCA619B97A9F423961;
// UnityEngine.Events.UnityEvent`2<System.String,System.String>
struct UnityEvent_2_t71C350611CC2C5B350589972D791938B5D41AB50;
// UnityEngine.Events.UnityEvent`2<Meta.WitAi.Json.WitResponseNode,System.String>
struct UnityEvent_2_tC20F7D1BD03FC3DA58A01B3056D1D0B674961AF9;
// UnityEngine.Events.UnityEvent`3<System.Byte[],System.Int32,System.Int32>
struct UnityEvent_3_tF81A842A1D8D9B002F73DF6003CE7C3ACF40171F;
// UnityEngine.Events.UnityEvent`3<System.Object,System.Int32,System.Int32>
struct UnityEvent_3_tD7E14BDD38F12B63EFECBD1604C666F9AF100EAA;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.String,System.Collections.Generic.List`1<System.String>>
struct ValueCollection_tBA7D94F600201BDFFC90880B77DA2D76ED7EBB59;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.String,System.String>
struct ValueCollection_t238D0D2427C6B841A01F522A41540165A2C4AE76;
// Meta.Voice.VoiceRequest`4<System.Object,System.Object,System.Object,System.Object>
struct VoiceRequest_4_t6799EEA3F92FAD2873D8E4F7650667AA90E2F95B;
// Meta.Voice.VoiceRequest`4<Meta.WitAi.Requests.VoiceServiceRequestEvent,Meta.WitAi.Configuration.WitRequestOptions,Meta.WitAi.Requests.VoiceServiceRequestEvents,Meta.WitAi.Requests.VoiceServiceRequestResults>
struct VoiceRequest_4_t635CDB7E63C5322E9D11D83B63A401260F8BAA8C;
// System.WeakReference`1<System.Text.RegularExpressions.RegexReplacement>
struct WeakReference_1_tDC6E83496181D1BAFA3B89CBC00BCD0B64450257;
// Meta.WitAi.Data.Entities.WitEntityDataBase`1<System.Int32>
struct WitEntityDataBase_1_t46F92AF5EC7866816B6CD6D417773D4FFE270507;
// Meta.WitAi.Data.Entities.WitEntityDataBase`1<System.Object>
struct WitEntityDataBase_1_t3ECCF60AD343C4AF152B57E138A9D0F8A8D94C0A;
// Meta.WitAi.Data.Entities.WitEntityDataBase`1<System.Single>
struct WitEntityDataBase_1_t90E9F0FB214EED844AD8DD1A97EA3C1FD1EED960;
// Meta.WitAi.Data.Entities.WitEntityDataBase`1<System.String>
struct WitEntityDataBase_1_t76EEB2E002923316F752746DDB37569F5D39FEB4;
// Meta.WitAi.Data.RingBuffer`1/ByteDataWriter<System.Byte>[]
struct ByteDataWriterU5BU5D_t65BFCE3A23A6A9D43E7311E07FE38BAD340ADA5B;
// System.Collections.Generic.Dictionary`2/Entry<System.String,System.Collections.Generic.List`1<System.String>>[]
struct EntryU5BU5D_t7D363C4258705E5C759DC3C7A84AD08784EEBE95;
// System.Collections.Generic.Dictionary`2/Entry<System.String,System.String>[]
struct EntryU5BU5D_t1AF33AD0B7330843448956EC4277517081658AE7;
// System.Collections.Generic.HashSet`1/Slot<UnityEngine.Component>[]
struct SlotU5BU5D_t77D4E8A0D0306C32C9CE0497F8584A1D53D52593;
// System.Collections.Generic.HashSet`1/Slot<System.Object>[]
struct SlotU5BU5D_tF596AD324082C553DB364C768406A40BB3C85343;
// System.Collections.Generic.HashSet`1/Slot<Meta.WitAi.Events.SpeechEvents>[]
struct SlotU5BU5D_tD6E04FA7A4C777C010C5B26FE41134993003B11E;
// System.Collections.Generic.HashSet`1/Slot<System.String>[]
struct SlotU5BU5D_t8B8EE191EEC1575F1F0CAC91A208DBFDF2821D01;
// System.Int32[][]
struct Int32U5BU5DU5BU5D_t179D865D5B30EFCBC50F82C9774329C15943466E;
// System.Byte[]
struct ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031;
// Meta.WitAi.CallbackHandlers.ConfidenceRange[]
struct ConfidenceRangeU5BU5D_t436B72D1C2A21AE91F57767E7CCA104C79700583;
// System.Delegate[]
struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771;
// Meta.WitAi.CallbackHandlers.FormattedValueEvents[]
struct FormattedValueEventsU5BU5D_t0E1D60C2D6BF5C4DCF75ABCAF224658107EF33F5;
// UnityEngine.GameObject[]
struct GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF;
// System.Int32[]
struct Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C;
// System.IntPtr[]
struct IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832;
// Meta.WitAi.Json.JsonConverter[]
struct JsonConverterU5BU5D_tF117D3A16A2A7AAC2A66A7EDCD32E3F48B704DDA;
// System.Object[]
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;
// System.Single[]
struct SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF;
// System.String[]
struct StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248;
// System.Type[]
struct TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB;
// Meta.WitAi.CallbackHandlers.ValuePathMatcher[]
struct ValuePathMatcherU5BU5D_tDC6C5FBC8AD9CDC953975B35F515F2F1EC24066E;
// Meta.WitAi.Data.Configuration.WitConfigurationAssetData[]
struct WitConfigurationAssetDataU5BU5D_t700D5FE01B115D42C19FDAB600E6E52D045BAB9C;
// Meta.WitAi.Data.Entities.WitDynamicEntitiesData[]
struct WitDynamicEntitiesDataU5BU5D_t04480B2CB2C361B83EA9E1237F827D9287EBDD36;
// Meta.WitAi.Data.Entities.WitDynamicEntity[]
struct WitDynamicEntityU5BU5D_tAF932D5132E6589F964FB76D2FB82BFA9E0EDB7F;
// Meta.WitAi.Data.Info.WitEntityInfo[]
struct WitEntityInfoU5BU5D_tB0A63D23CECFD14157CB1D03E656D3CFCCFF3499;
// Meta.WitAi.Data.Info.WitEntityKeywordInfo[]
struct WitEntityKeywordInfoU5BU5D_tF62D7B36A857239604E3BF89B6088F63129EF811;
// Meta.WitAi.Data.Intents.WitIntentData[]
struct WitIntentDataU5BU5D_tA1E1A7F9E9C566D8BA4049F086E2ECD245E7ABF4;
// Meta.WitAi.Data.Info.WitIntentInfo[]
struct WitIntentInfoU5BU5D_t95D033231DE201B282D0C427BFF8E50F9C51D086;
// Meta.WitAi.Data.Info.WitTraitInfo[]
struct WitTraitInfoU5BU5D_tB790BA9F9C3B601ED9CD568A23C330D1EDF596D2;
// Meta.WitAi.Data.Info.WitVersionTagInfo[]
struct WitVersionTagInfoU5BU5D_t84FAB6A032C1C9E9B3BF7E4C95D3A8C84D26C637;
// Meta.WitAi.Data.Info.WitVoiceInfo[]
struct WitVoiceInfoU5BU5D_tDC3B4221779AC23CB86E3690D68414110CB627EC;
// Meta.WitAi.Requests.VoiceServiceRequestOptions/QueryParam[]
struct QueryParamU5BU5D_tECB106E0E9D39573F239DA1C256E0922C6DDFE10;
// System.Action
struct Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07;
// System.AsyncCallback
struct AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C;
// Meta.WitAi.Data.AudioBuffer
struct AudioBuffer_t8F78C90BB0306EE2F5C4787B5D6ACF16EEF33E72;
// Meta.WitAi.Data.AudioBufferConfiguration
struct AudioBufferConfiguration_tB38ABF06828B3927593D6E28F41EC838EFE9B8B3;
// Meta.WitAi.Events.AudioBufferEvents
struct AudioBufferEvents_t464B32397852A58D1333411135D8AB9CF2F6C233;
// UnityEngine.AudioClip
struct AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20;
// Meta.WitAi.Events.AudioDurationTrackerFinishedEvent
struct AudioDurationTrackerFinishedEvent_t23E275CDD44C7923B60C067FAFF9FA926AB30647;
// Meta.WitAi.Data.AudioEncoding
struct AudioEncoding_t98ED2D092A9829C604C73C3B611E2FC987413EE4;
// Meta.WitAi.Events.UnityEventListeners.AudioEventListener
struct AudioEventListener_t39E39D7138664E757F322BB01CE82890433659AB;
// UnityEngine.Behaviour
struct Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA;
// System.Reflection.Binder
struct Binder_t91BFCE95A7057FADF4D8A1A342AFE52872246235;
// System.Text.RegularExpressions.Capture
struct Capture_tE11B735186DAFEE5F7A3BF5A739E9CCCE99DC24A;
// System.Text.RegularExpressions.CaptureCollection
struct CaptureCollection_t38405272BD6A6DA77CD51487FD39624C6E95CC93;
// UnityEngine.Component
struct Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3;
// Meta.WitAi.CallbackHandlers.ConfidenceRange
struct ConfidenceRange_tE0A93D2F39AE1C9E6340C39D30A9201709B737E8;
// UnityEngine.Coroutine
struct Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B;
// Meta.WitAi.Interfaces.CustomTranscriptionProvider
struct CustomTranscriptionProvider_tC6EABF251A11EFEBE5A8AD8D77CEBF14FB1009C5;
// System.Delegate
struct Delegate_t;
// System.DelegateData
struct DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E;
// Meta.WitAi.Data.Entities.DynamicEntityDataProvider
struct DynamicEntityDataProvider_t08403B46CC5ED6B8FE0A88755E81A267057EDE3F;
// Meta.WitAi.Data.Entities.DynamicEntityKeywordRegistry
struct DynamicEntityKeywordRegistry_t610EF6621FA40BD297502CD7A30337A625A57C28;
// Meta.WitAi.Data.Entities.DynamicEntityProvider
struct DynamicEntityProvider_t3AFDF18CD9BD247F0B9B129A02A611841AA373C3;
// Meta.WitAi.Events.EventCategoryAttribute
struct EventCategoryAttribute_t589C967400362B59FE256F9DDEDC9ABB013BD883;
// Meta.WitAi.Events.EventRegistry
struct EventRegistry_t712584F20910AAA2A4A85A34835BC58574C441FE;
// System.Text.RegularExpressions.ExclusiveReference
struct ExclusiveReference_t411F04D4CC440EB7399290027E1BBABEF4C28837;
// Meta.WitAi.CallbackHandlers.FormattedValueEvents
struct FormattedValueEvents_t0D0D440F35C91FAA243428A4B45156402090018C;
// UnityEngine.GameObject
struct GameObject_t76FEDD663AB33C991A9C9A23129337651094216F;
// System.Text.RegularExpressions.Group
struct Group_t26371E9136D6F43782C487B63C67C5FC4F472881;
// System.Text.RegularExpressions.GroupCollection
struct GroupCollection_tFFA1789730DD9EA122FBE77DC03BFEDCC3F2945E;
// System.Collections.Hashtable
struct Hashtable_tEFC3B6496E6747787D8BB761B51F2AE3A8CFFE2D;
// System.IAsyncResult
struct IAsyncResult_t7B9B5A0ECB35DCEC31B8A8122C37D687369253B5;
// Meta.WitAi.Interfaces.IAudioEventProvider
struct IAudioEventProvider_t50BB2A75EF5F19B841A69808B2C1AEEB67AA7F04;
// Meta.WitAi.Interfaces.IAudioInputEvents
struct IAudioInputEvents_tF18D401737AABD0DF7EC79AD5846A2E82F635655;
// Meta.WitAi.Interfaces.IAudioInputSource
struct IAudioInputSource_t364BD5C2442BDCD435A62F220336E0A8F3AC8B0C;
// Meta.Conduit.IConduitDispatcher
struct IConduitDispatcher_t9DB0F42120182B87787DF6413D5A8A57F1B136DB;
// System.Collections.IDictionary
struct IDictionary_t6D03155AF1FA9083817AA5B6AD7DEEACC26AB220;
// Meta.WitAi.Interfaces.IDynamicEntitiesProvider
struct IDynamicEntitiesProvider_tBA0D49C35A9CCDC33A56C48C1DF22EAC2732BAAC;
// System.Collections.IEnumerator
struct IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA;
// Meta.Conduit.IParameterProvider
struct IParameterProvider_t54E8BABE59BFEF8B0AFE24B0CE382FAAF04B1F14;
// Meta.WitAi.Interfaces.ITranscriptionEvent
struct ITranscriptionEvent_tF48A05E7EFA481DA37B20DE69F0FC45230C74FC0;
// Meta.WitAi.Interfaces.ITranscriptionEventProvider
struct ITranscriptionEventProvider_t20AA72759481322BFC0C59BD13DAA621238033DF;
// Meta.WitAi.IVoiceEventProvider
struct IVoiceEventProvider_t976993FF17250739A08016703CB70BDE6A373D14;
// Meta.WitAi.IWitRequestConfiguration
struct IWitRequestConfiguration_tF4C761EF17EDE97B1399CE148EC403C744B222DF;
// Meta.WitAi.IWitRequestEndpointInfo
struct IWitRequestEndpointInfo_t836AC4A0D91400BEBDE46EAFC27047094F6DADAE;
// UnityEngine.Events.InvokableCallList
struct InvokableCallList_t309E1C8C7CE885A0D2F98C84CEA77A8935688382;
// Meta.WitAi.Json.JsonConverter
struct JsonConverter_t1EC0651CD277ABEFD390D833BEAB25A034223BE6;
// System.Text.RegularExpressions.Match
struct Match_tFBEBCF225BD8EA17BCE6CE3FE5C1BD8E3074105F;
// System.Reflection.MemberFilter
struct MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// Meta.WitAi.Lib.Mic
struct Mic_t754EFE9D630FC1FBB701EB317849C522C0F384F4;
// UnityEngine.MonoBehaviour
struct MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71;
// Meta.WitAi.CallbackHandlers.MultiValueEvent
struct MultiValueEvent_t00CB59BD55FD6C3F27DABCC7A9A5A3394E717C06;
// Meta.Voice.NLPRequestResponseEvent
struct NLPRequestResponseEvent_tDD562F3B70B56867885CA6AF029E93258D6ACB44;
// System.NotSupportedException
struct NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A;
// UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C;
// Meta.WitAi.CallbackHandlers.OutOfScopeUtteranceHandler
struct OutOfScopeUtteranceHandler_t4CC5CCB5E0F34C1EE207A6E06C711C6DCC0F748B;
// UnityEngine.Events.PersistentCallGroup
struct PersistentCallGroup_tB826EDF15DC80F71BCBCD8E410FD959A04C33F25;
// UnityEngine.PropertyAttribute
struct PropertyAttribute_t5E0CB5A6CDA6E24CBD4FF26DE3B0C29D8BB54BF0;
// System.Text.RegularExpressions.Regex
struct Regex_tE773142C2BE45C5D362B0F815AFF831707A51772;
// System.Text.RegularExpressions.RegexCode
struct RegexCode_tA23175D9DA02AD6A79B073E10EC5D225372ED6C7;
// System.Text.RegularExpressions.RegexRunnerFactory
struct RegexRunnerFactory_t72373B672C7D8785F63516DDD88834F286AF41E7;
// Meta.WitAi.Data.Entities.RegisteredDynamicEntityKeyword
struct RegisteredDynamicEntityKeyword_tA7EFBD0615574563A15D0EC6E518A937BE2CCEE4;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6;
// UnityEngine.ScriptableObject
struct ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37;
// Meta.WitAi.CallbackHandlers.SimpleIntentHandler
struct SimpleIntentHandler_tF4B682B5036AF258B9F7E1D210A0945768A282F4;
// Meta.WitAi.CallbackHandlers.SimpleStringEntityHandler
struct SimpleStringEntityHandler_t1E5B8A6888D5B1E62E7C31AAA90429635B7D5309;
// Meta.WitAi.Data.SimulatedResponse
struct SimulatedResponse_t6C399FEE83BD05DF775EA5C7D8C3D15DF2EE5B8E;
// Meta.WitAi.Events.SpeechEvents
struct SpeechEvents_tB51C31627EF79AB5734270C1558A6C6F67A5040E;
// System.String
struct String_t;
// Meta.WitAi.CallbackHandlers.StringEntityMatchEvent
struct StringEntityMatchEvent_t8736CD9A25D69C2A4CCBD5440CCC7069AC6B9201;
// Meta.WitAi.Utilities.StringEvent
struct StringEvent_tC948A866B2D2C1ECC0783ABC07A4B876C8E28B5B;
// Meta.WitAi.Events.TelemetryEvents
struct TelemetryEvents_t728EE43C6D9E03EE2233160917696F0D483CF2DC;
// Meta.WitAi.Attributes.TooltipBoxAttribute
struct TooltipBoxAttribute_t6E9488D357587D404789CE0549F8C32A110A8779;
// Meta.WitAi.Events.UnityEventListeners.TranscriptionEventListener
struct TranscriptionEventListener_t96B770053BE0AFCF8B9329247EEE4A23B864B4F5;
// Meta.Voice.TranscriptionRequestEvent
struct TranscriptionRequestEvent_tE1BC4A6E630A2C061ECB1BA9DB4B57BD0545E5DE;
// System.Type
struct Type_t;
// UnityEngine.Events.UnityAction
struct UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7;
// UnityEngine.Events.UnityEvent
struct UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977;
// UnityEngine.Events.UnityEventBase
struct UnityEventBase_t4968A4C72559F35C0923E4BD9C042C3A842E1DB8;
// UnityEngine.Networking.UnityWebRequest
struct UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F;
// Meta.WitAi.Requests.VRequest
struct VRequest_tFD9B8F15B7482BF5BE064752EAE7162E3588B8A1;
// Meta.WitAi.CallbackHandlers.ValueEvent
struct ValueEvent_t7E99BC212C04EA8B32FFF6900F7AEC1C55A2AC32;
// Meta.WitAi.CallbackHandlers.ValuePathMatcher
struct ValuePathMatcher_t2058BD1F2F9C5A162DFBD3FE61BD97F2D840E35E;
// Meta.WitAi.Events.VoiceEvents
struct VoiceEvents_t7755B8C2A9074FA12090CF7288E5512DFD225EA9;
// Meta.WitAi.VoiceService
struct VoiceService_t601CB0E6879961EC1F8179A8E20EB9DD7AF6A82E;
// Meta.WitAi.Requests.VoiceServiceRequest
struct VoiceServiceRequest_tCF844F597C059D6A354311EB2BD5644AE5E8E536;
// Meta.WitAi.Events.VoiceServiceRequestEvent
struct VoiceServiceRequestEvent_t7340AD8EBA1B3D36E1A95E47C8DBCD954F1DED13;
// Meta.WitAi.Requests.VoiceServiceRequestEvent
struct VoiceServiceRequestEvent_t91B4A1DF3C1AC52F52DCD883797AC599E47B4601;
// Meta.WitAi.Requests.VoiceServiceRequestEvents
struct VoiceServiceRequestEvents_t4270DDE59A84A1A65EBF9331C446BBBC7BDE0838;
// Meta.WitAi.Requests.VoiceServiceRequestOptions
struct VoiceServiceRequestOptions_tBB80C39F5D734638F03442F09F4F106BD5F20EE4;
// Meta.WitAi.Requests.VoiceServiceRequestResults
struct VoiceServiceRequestResults_t42861FCA7E9538CBAEE9F7246C891F0A5BB7E497;
// Meta.WitAi.Data.VoiceSession
struct VoiceSession_t375D68D23448E9C51C8E4CE1972477813E92E68B;
// System.Void
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915;
// UnityEngine.WaitUntil
struct WaitUntil_tA1CD487C5811E7C1F8C4ADA85DF5F4EFDC1D41BD;
// Meta.WitAi.Events.WitByteDataEvent
struct WitByteDataEvent_t6F952E3BEDEBEEFF9FF094E1AFA7B2089F88B4CC;
// Meta.WitAi.Data.Configuration.WitConfiguration
struct WitConfiguration_t85BCD6C826D35078E90334092184A53D1B69C72E;
// Meta.WitAi.Data.Configuration.WitConfigurationAssetData
struct WitConfigurationAssetData_t85BC866513E76C112B29F1EE070D1F062C84273A;
// Meta.WitAi.Data.Entities.WitDynamicEntities
struct WitDynamicEntities_t122029C03796D5F75B696CA70D8083DA16E33E38;
// Meta.WitAi.Data.Entities.WitDynamicEntitiesData
struct WitDynamicEntitiesData_t372BA7AB1BA929F633A88ADF252C252444A79146;
// Meta.WitAi.Data.Entities.WitDynamicEntity
struct WitDynamicEntity_tE0824DEF90E6E8AA7D10CC0A6892B4C1018DE2B4;
// Meta.WitAi.Configuration.WitEndpointConfig
struct WitEndpointConfig_t7CCDA7CBBF1FDD2A7779DDF6745BAED47E69BB1D;
// Meta.WitAi.Data.Entities.WitEntityData
struct WitEntityData_t3814C265B1FEF49FEBAD433FB102049418BB736B;
// Meta.WitAi.Data.Entities.WitEntityFloatData
struct WitEntityFloatData_t102A2BB5C9BCA8A0FEA4D3CC3F9D8B83AE31CCB8;
// Meta.WitAi.Data.Entities.WitEntityIntData
struct WitEntityIntData_t25F04B7F8B86E577ED2F1C8CA31E13A827F9CB3C;
// Meta.WitAi.Events.WitErrorEvent
struct WitErrorEvent_tF617F56AD9B12E89D73E125B79E441A56067F1B2;
// Meta.WitAi.Data.WitFloatValue
struct WitFloatValue_t0CD86D3313AB3919655A9F71C881B82124190FD7;
// Meta.WitAi.Data.WitIntValue
struct WitIntValue_t67EABB88E65123FE396BDDB9C49054D20A693E48;
// Meta.WitAi.Data.Intents.WitIntentData
struct WitIntentData_tAEC870A54A863E27A1FDC98AE01CA9C99F22F515;
// Meta.WitAi.CallbackHandlers.WitIntentMatcher
struct WitIntentMatcher_tE81387B012FD1CDC55B99B00878C5E8EFD0D7F8D;
// Meta.WitAi.Requests.WitMessageVRequest
struct WitMessageVRequest_t1F545F95445B1FD0EE5DF7580C2EB69EB0520137;
// Meta.WitAi.Events.WitMicLevelChangedEvent
struct WitMicLevelChangedEvent_tA9B2889CB33EAA09656739F26AA70252ED15DEF7;
// Meta.WitAi.Events.WitObjectEvent
struct WitObjectEvent_tC8E0642CEF100B4BF0068235B2A335A58FC217D8;
// Meta.WitAi.Events.WitRequestCreatedEvent
struct WitRequestCreatedEvent_t1A01ABB6F9E3C02D0251B5DC9F5B290EDA0E319B;
// Meta.WitAi.Configuration.WitRequestOptions
struct WitRequestOptions_tB2E8B103538F7E42F0568C6F62F2158FA45EF483;
// Meta.WitAi.Events.WitRequestOptionsEvent
struct WitRequestOptionsEvent_t84FCD56D356445821DECABA3F66CADF6B07ABB1B;
// Meta.WitAi.Json.WitResponseArray
struct WitResponseArray_tAC1DCF75C6C2FAB0A70A7DB879A0F35999BAB30A;
// Meta.WitAi.Json.WitResponseClass
struct WitResponseClass_tB8A73CCFF2E00D717CD5D9F22465D8DEEE5DAE25;
// Meta.WitAi.CallbackHandlers.WitResponseErrorEvent
struct WitResponseErrorEvent_t27A69D2F98CF74C1156030169D4E99C4D904F37B;
// Meta.WitAi.CallbackHandlers.WitResponseEvent
struct WitResponseEvent_t6CC119DCF60FF27F3B61BA0E1A86AEDC1D26AA84;
// Meta.WitAi.Events.WitResponseEvent
struct WitResponseEvent_tC85152AAABC87956DF604749EEA671ADAA9EFFDA;
// Meta.WitAi.CallbackHandlers.WitResponseHandler
struct WitResponseHandler_t3BD2BF0058605CE13CD87228A0BBB9CDAFC74AF1;
// Meta.WitAi.CallbackHandlers.WitResponseMatcher
struct WitResponseMatcher_t6B41EE08DD1CEB6E51894DCB19B4BFE874BA22D8;
// Meta.WitAi.Json.WitResponseNode
struct WitResponseNode_t1BFF810F15B21416F5F6D0A1CAAF03CEF942038C;
// Meta.WitAi.WitResponseReference
struct WitResponseReference_t7B74D84BF98481046E19F0CE0EB5A3F4203D2581;
// Meta.WitAi.Configuration.WitRuntimeConfiguration
struct WitRuntimeConfiguration_t9724E21E35E3E1ABB5F0B4ECD5CC8F325CA1CC05;
// Meta.WitAi.Data.Entities.WitSimpleDynamicEntity
struct WitSimpleDynamicEntity_t936086F8CD53DE1BABD07C5133D814C5DD1937F1;
// Meta.WitAi.Data.WitStringValue
struct WitStringValue_tC57E63A29F85DBA9BF5A71184C079C4FA0069805;
// Meta.WitAi.Events.WitTranscriptionEvent
struct WitTranscriptionEvent_t51292FC7EB7BAF38C2EC6B57D87724C1BEB3C739;
// Meta.WitAi.Requests.WitUnityRequest
struct WitUnityRequest_t8F143C19E420F145BAF16B53988A2AF5B37CB202;
// Meta.WitAi.CallbackHandlers.WitUtteranceMatcher
struct WitUtteranceMatcher_t61084ECD5166E15FF9C36660DCD7A42241EAB098;
// Meta.WitAi.Requests.WitVRequest
struct WitVRequest_t8604AB4F31C0E6BB2572F16A2C0992E09DEA1534;
// Meta.WitAi.Events.WitValidationEvent
struct WitValidationEvent_t731FF211C8D0215476601B54ECDDD2D1DF38974C;
// Meta.WitAi.Data.WitValue
struct WitValue_t62896259CA1F095F305381482D891DC0E1ED1092;
// Meta.WitAi.Data.AudioBuffer/<WaitForMicToStart>d__30
struct U3CWaitForMicToStartU3Ed__30_tA981E845AE3F32AC0CB036E88C2CAA3FFBE51577;
// Meta.WitAi.Events.AudioBufferEvents/OnSampleReadyEvent
struct OnSampleReadyEvent_t43C9DCB6394FF2C5F335602AC5455C1A6B430486;
// Meta.WitAi.CoroutineUtility/CoroutinePerformer
struct CoroutinePerformer_t2423B696217C7475EF6AFE1D33000E8766703559;
// System.Text.RegularExpressions.Regex/CachedCodeEntry
struct CachedCodeEntry_tE201C3AD65C234AD9ED7A78C95025824A7A9FF39;
// Meta.WitAi.Events.SpeechEvents/<>c
struct U3CU3Ec_t7AEAA449DBB19647334E677C7ED6C2EDDC69BB9B;
// Meta.WitAi.Events.SpeechEvents/<>c__DisplayClass86_0
struct U3CU3Ec__DisplayClass86_0_t966EF3616DEAE30A97398BD0490A7BFF1725D638;
// Meta.WitAi.Requests.VRequest/RequestFirstResponseDelegate
struct RequestFirstResponseDelegate_tB02AF851E14447743278D4F5E31A6B7E0203E89A;
// Meta.WitAi.Requests.VRequest/RequestProgressDelegate
struct RequestProgressDelegate_tCEE5B616F4FDCD488E4914A7F554F2F57B7D03A4;
// Meta.WitAi.Requests.VoiceServiceRequestOptions/QueryParam
struct QueryParam_t9D43428FEE0F1D498A2606403DF54F2B48B0C76F;
// Meta.WitAi.Data.Entities.WitDynamicEntities/<>c__DisplayClass12_0
struct U3CU3Ec__DisplayClass12_0_t7BAF63290242ED2FD3A4364665FEACF638C4DE20;
// Meta.WitAi.Data.Entities.WitDynamicEntities/<>c__DisplayClass14_0
struct U3CU3Ec__DisplayClass14_0_tA27EEDC5333187C3AC128BA4030FEE5B3D6DE503;
// Meta.WitAi.Data.Entities.WitDynamicEntities/<>c__DisplayClass15_0
struct U3CU3Ec__DisplayClass15_0_tACB191291E61806F1F8880014C1B1F30240781FC;

IL2CPP_EXTERN_C RuntimeClass* Action_3_t014775F97068AFC7018FE805CA856B7C5CF281F8_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* AudioBufferConfiguration_tB38ABF06828B3927593D6E28F41EC838EFE9B8B3_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* AudioBufferEvents_t464B32397852A58D1333411135D8AB9CF2F6C233_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* AudioBuffer_t8F78C90BB0306EE2F5C4787B5D6ACF16EEF33E72_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* AudioDurationTrackerFinishedEvent_t23E275CDD44C7923B60C067FAFF9FA926AB30647_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ByteDataWriterU5BU5D_t65BFCE3A23A6A9D43E7311E07FE38BAD340ADA5B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ByteDataWriter_t42C70174C8038884885A93F156C878EC779F882D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* DynamicEntityKeywordRegistry_t610EF6621FA40BD297502CD7A30337A625A57C28_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Enumerator_t6BA07F015EFBC8AC247FAA712168596523D25994_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Func_1_t2BE7F58348C9CC544A8973B3A9E55541DE43C457_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Func_2_t0F30FACC4CABFFD27DDEBE31FB321AA523A06B7D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Func_2_t5DC062A102C3300E4BF548012A747BB3E0A5BA57_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Func_2_tB18F1F7AE9EDB9705E036A284B88C5F3613A7F78_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Func_2_tC95346D56902FBF6D1621BDE4F2039F61F917F52_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Func_2_tCD773FD80F11C1399B4604D1EB19BB7436356388_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Func_2_tD24D6BC507F5AA415E63472DF1247E49582D7A1F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Func_2_tD49A9546076918B07593787D23EE9245E84C1AD0_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Func_2_tDCA29CF738B0C5F51018D3D7FCBCC1BCF5EF829A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* GameObject_t76FEDD663AB33C991A9C9A23129337651094216F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* HashSet_1_tA2DD82C656859A8F953FE80E0E7CFAA242AFFEB7_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* HashSet_1_tEFC6605F7DE53F71946C33FD371E53C3100F2178_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* HashSet_1_tF0A60E739EB979571381F8FB075B6B90F6FA6F8D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IAudioEventProvider_t50BB2A75EF5F19B841A69808B2C1AEEB67AA7F04_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IAudioInputEvents_tF18D401737AABD0DF7EC79AD5846A2E82F635655_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IAudioInputSource_t364BD5C2442BDCD435A62F220336E0A8F3AC8B0C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IDynamicEntitiesProvider_tBA0D49C35A9CCDC33A56C48C1DF22EAC2732BAAC_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ITranscriptionEventProvider_t20AA72759481322BFC0C59BD13DAA621238033DF_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ITranscriptionEvent_tF48A05E7EFA481DA37B20DE69F0FC45230C74FC0_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IVoiceEventProvider_t976993FF17250739A08016703CB70BDE6A373D14_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IWitRequestEndpointInfo_t836AC4A0D91400BEBDE46EAFC27047094F6DADAE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* JsonConvert_t69A348E775F1FA63C310F5FE324F3EE231AD8072_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_t4F3133982BFC53A2508E8212590377CE60E9596C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_t6D090AF9EB273D470FE30798680167DEBB0CC11B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Manifest_tDC9A75EB5733C48D7100139A792C661B4A60B9AB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* MultiValueEvent_t00CB59BD55FD6C3F27DABCC7A9A5A3394E717C06_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Predicate_1_t39557AE2C0B3C676DB62FADB5D71DD45826B8572_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Regex_tE773142C2BE45C5D362B0F815AFF831707A51772_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* RequestCompleteDelegate_1_tDB32EFF5395222142E2DE478401516FF7916E807_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* RequestProgressDelegate_tCEE5B616F4FDCD488E4914A7F554F2F57B7D03A4_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* RingBuffer_1_t553FDAA382235F13BBC8000565860BFE1438D276_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* StringEntityMatchEvent_t8736CD9A25D69C2A4CCBD5440CCC7069AC6B9201_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* StringEvent_tC948A866B2D2C1ECC0783ABC07A4B876C8E28B5B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* String_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec__DisplayClass12_0_t7BAF63290242ED2FD3A4364665FEACF638C4DE20_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec__DisplayClass14_0_tA27EEDC5333187C3AC128BA4030FEE5B3D6DE503_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec__DisplayClass15_0_tACB191291E61806F1F8880014C1B1F30240781FC_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec__DisplayClass86_0_t966EF3616DEAE30A97398BD0490A7BFF1725D638_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec_t7AEAA449DBB19647334E677C7ED6C2EDDC69BB9B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CWaitForMicToStartU3Ed__30_tA981E845AE3F32AC0CB036E88C2CAA3FFBE51577_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UnityAction_1_t47424DEBAD5E8E58E4A0DD7FD64A5834C41F7896_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UnityAction_1_t690494F0E492A2098660E28B8EB7D71B2C69BE1B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UnityAction_1_t7814257576DA9D92A82FF91BA3EE537553AC1BC8_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UnityAction_1_tAEFA3C1C529F0E1AD7C7C7AFC88822D359E7AC90_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UnityAction_1_tF266B43F3B48247A8143BA850AC13FFC634512E9_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ValueEvent_t7E99BC212C04EA8B32FFF6900F7AEC1C55A2AC32_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* VoiceServiceRequestEvent_t7340AD8EBA1B3D36E1A95E47C8DBCD954F1DED13_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* WaitUntil_tA1CD487C5811E7C1F8C4ADA85DF5F4EFDC1D41BD_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* WitByteDataEvent_t6F952E3BEDEBEEFF9FF094E1AFA7B2089F88B4CC_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* WitDynamicEntities_t122029C03796D5F75B696CA70D8083DA16E33E38_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* WitDynamicEntityU5BU5D_tAF932D5132E6589F964FB76D2FB82BFA9E0EDB7F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* WitDynamicEntity_tE0824DEF90E6E8AA7D10CC0A6892B4C1018DE2B4_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* WitEndpointConfig_t7CCDA7CBBF1FDD2A7779DDF6745BAED47E69BB1D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* WitErrorEvent_tF617F56AD9B12E89D73E125B79E441A56067F1B2_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* WitMessageVRequest_t1F545F95445B1FD0EE5DF7580C2EB69EB0520137_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* WitMicLevelChangedEvent_tA9B2889CB33EAA09656739F26AA70252ED15DEF7_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* WitRequestCreatedEvent_t1A01ABB6F9E3C02D0251B5DC9F5B290EDA0E319B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* WitRequestOptionsEvent_t84FCD56D356445821DECABA3F66CADF6B07ABB1B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* WitResponseClass_tB8A73CCFF2E00D717CD5D9F22465D8DEEE5DAE25_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* WitResponseEvent_tC85152AAABC87956DF604749EEA671ADAA9EFFDA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* WitResponseMatcher_t6B41EE08DD1CEB6E51894DCB19B4BFE874BA22D8_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* WitTranscriptionEvent_t51292FC7EB7BAF38C2EC6B57D87724C1BEB3C739_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* WitValidationEvent_t731FF211C8D0215476601B54ECDDD2D1DF38974C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral057E47B1A5317B280AD5B6CE27C8F11073D42316;
IL2CPP_EXTERN_C String_t* _stringLiteral09D70245F3500CCD8237A0140F73164F286401D5;
IL2CPP_EXTERN_C String_t* _stringLiteral0C3C6829C3CCF8020C6AC45B87963ADC095CD44A;
IL2CPP_EXTERN_C String_t* _stringLiteral0CF1C526BD3872B6F7B223B157F80669490DCBCF;
IL2CPP_EXTERN_C String_t* _stringLiteral100237A442F30150BD13209B41DA1A90A4C2DB83;
IL2CPP_EXTERN_C String_t* _stringLiteral11AD741CBC6F6810EF049BB36B42BB4C32C2CB40;
IL2CPP_EXTERN_C String_t* _stringLiteral1AB086973FB6A2E7A02B81F80EC5E8066A9F65D8;
IL2CPP_EXTERN_C String_t* _stringLiteral24A11203BE0B847E4A17BDD8D12EA3B8E5F4101F;
IL2CPP_EXTERN_C String_t* _stringLiteral293FEA1788CBA62C70BB50A2D66B4CF52162FD84;
IL2CPP_EXTERN_C String_t* _stringLiteral2EC4BDD76EA1B8DF254C40F3CA06D3C59FECB5E1;
IL2CPP_EXTERN_C String_t* _stringLiteral30F03FEA1314DE8FA093A051C30C5B7CD90359B0;
IL2CPP_EXTERN_C String_t* _stringLiteral402F7311BABF77D31EFBF5956A0D15E0A40E52C4;
IL2CPP_EXTERN_C String_t* _stringLiteral42646B33B50B6AA15E22733C8900716F0FE19E1D;
IL2CPP_EXTERN_C String_t* _stringLiteral493F2C980EC99D04772AED0654F76A3ED491B938;
IL2CPP_EXTERN_C String_t* _stringLiteral497E0727E6D4098F7DA86E306F0B961AA34D95FF;
IL2CPP_EXTERN_C String_t* _stringLiteral4D19773218A7935AA0D38A8938C871D229F73665;
IL2CPP_EXTERN_C String_t* _stringLiteral4D8D9C94AC5DA5FCED2EC8A64E10E714A2515C30;
IL2CPP_EXTERN_C String_t* _stringLiteral50DC73D47DBEF200FCB895315FB80FD4568558D6;
IL2CPP_EXTERN_C String_t* _stringLiteral54B7CB83ADA12ACDA6A9603F52C4337EFF74DE53;
IL2CPP_EXTERN_C String_t* _stringLiteral664A1B6FF144ACF3647FE212D8F5706029F978BD;
IL2CPP_EXTERN_C String_t* _stringLiteral70BBAB30B6900EC0E29CCD027B482CF80BD58908;
IL2CPP_EXTERN_C String_t* _stringLiteral76B984902098D790B36C506477F43BF329D2E00E;
IL2CPP_EXTERN_C String_t* _stringLiteral7767C46BE8F952DEC905B39693FC67366C25C4A1;
IL2CPP_EXTERN_C String_t* _stringLiteral7DCA7A6024F48FADFB3A49018CB138C4995119A4;
IL2CPP_EXTERN_C String_t* _stringLiteral83DFE3E28BC3DAE984C331299C4274E1BB11B69D;
IL2CPP_EXTERN_C String_t* _stringLiteral84027E56C00686BFC14F4A4673543F9850713BCF;
IL2CPP_EXTERN_C String_t* _stringLiteral875CAA93604F0482162CA6419410D92BDEF2B0F2;
IL2CPP_EXTERN_C String_t* _stringLiteral8E148930C0321183E9A2893B9D601B8F321E3760;
IL2CPP_EXTERN_C String_t* _stringLiteral99EF754C438B2E2CC9227AECE37F8CAED8BFE43A;
IL2CPP_EXTERN_C String_t* _stringLiteral9FF7A8A0CF603B20A1F5510A7D95439FF5AF3A56;
IL2CPP_EXTERN_C String_t* _stringLiteralA3DB434C4390DC5A73645AA768D5FE17D3D71170;
IL2CPP_EXTERN_C String_t* _stringLiteralAB4F3A484ED3991575D8B729EC5A620357A4A41B;
IL2CPP_EXTERN_C String_t* _stringLiteralAD5D95ACB5EE6A85F7764DF4051FD214127B906C;
IL2CPP_EXTERN_C String_t* _stringLiteralAEC88ED3BAC6612646AAAC68CE58E03895D796AB;
IL2CPP_EXTERN_C String_t* _stringLiteralBFC27499BD5186964D062DE5FE7C222AE471C53E;
IL2CPP_EXTERN_C String_t* _stringLiteralBFCC6EE94F1B7AA05A04750903E25F93A7188AE0;
IL2CPP_EXTERN_C String_t* _stringLiteralD559C6D97E819D8E4EF7ACDC34C4E8D3DD314964;
IL2CPP_EXTERN_C String_t* _stringLiteralD5CBE5FC06436E56C8CFCEAB27D9AC06FDFE22BD;
IL2CPP_EXTERN_C String_t* _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
IL2CPP_EXTERN_C String_t* _stringLiteralE65ED37F28B0054DF33BDE6B0D1B05F0B7952AD0;
IL2CPP_EXTERN_C String_t* _stringLiteralEAA8D9C3445FEBFE3701DDB0406A86D63B80BB2F;
IL2CPP_EXTERN_C String_t* _stringLiteralEE1EF95F5D04D20EF4C7CF4CAB5C1D4027F8F1AB;
IL2CPP_EXTERN_C String_t* _stringLiteralF27E4C631EBEFA337EC21BE8552E169C9DED78A2;
IL2CPP_EXTERN_C String_t* _stringLiteralF3E84B722399601AD7E281754E917478AA9AD48D;
IL2CPP_EXTERN_C const RuntimeMethod* Array_Empty_TisQueryParam_t9D43428FEE0F1D498A2606403DF54F2B48B0C76F_m972F54D524ED9AE220774753BE7EA4E816006C13_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Array_Empty_TisString_t_m9832B70DF2B936246FE60F75D3D12CB946C39D16_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Array_Empty_TisWitConfigurationAssetData_t85BC866513E76C112B29F1EE070D1F062C84273A_m138630C81E2B640FF706E28F53711B37F639B010_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AudioBuffer_OnMicSampleReady_m11668DCFCD92FC0FD0E66B9E0F788C3CC30127AD_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AudioBuffer_U3CWaitForMicToStartU3Eb__30_0_mE80F6B351D0AC4C2963C5082D38100D334AACD1E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisIAudioEventProvider_t50BB2A75EF5F19B841A69808B2C1AEEB67AA7F04_mF824A5D3469ACC34283E9E08D09926481440F6B6_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisITranscriptionEventProvider_t20AA72759481322BFC0C59BD13DAA621238033DF_m22E3E56F5F15217DCF58493CE86DBB166ED49FC1_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_GetEnumerator_m7B0E05167CA47611244E25AD67EBCEBDF5DB5EDE_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2__ctor_m768E076F1E804CE4959F4E71D3E6A9ADE2F55052_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_get_Item_mB13DFB3E7499031847CF544977D4EFB1AC0157AB_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_get_Keys_m0014C8E91B9B4377ACFBD26A9175A7E5C016D9E9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_set_Item_m9BF625649E96E60C1509898A992A6447E351D1A2_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_Dispose_m6C974325ADBDD3ECEBAA290D7940AC282C56386A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_Dispose_m751DE47849B680B5DC08CB056693D60F563D766B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_Dispose_m7DE9243F0F854CE156AFB007FA010C1AB4321A44_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_Dispose_m83E7690AA88F67A27853DE26374E3155A14CA8B3_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_MoveNext_m4E5E1EF4BBDC6F5431792D53FCEDA69CD61D826A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_MoveNext_m70C21D014D6AE2587F43E2974BA95CEA36BC6417_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_MoveNext_mA71548765692C241BEFB57E80CBC1563829B1656_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_MoveNext_mE8FB9EBD177219F5AC0BF48642FB47D3E186C283_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_get_Current_m18767B2633635D7E9E1B5094743F90E70447F0AE_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_get_Current_m4620EF2C1DF7D94D5A511226C42A3A42040B1C9E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_get_Current_mB41E65E33E936ACBD32C200633257CBD3261A9E2_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_get_Current_mB7624805B9FFE43D954DF948EE3B30592622B6B1_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_AddComponent_TisAudioBuffer_t8F78C90BB0306EE2F5C4787B5D6ACF16EEF33E72_mC0D3594C79442A97F3273BB8B5FE45D38A18A295_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_AddComponent_TisMic_t754EFE9D630FC1FBB701EB317849C522C0F384F4_mEDE89F407EEBE6CD16CDDF8EDE285FFFC92AC40A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponentInChildren_TisIAudioInputSource_t364BD5C2442BDCD435A62F220336E0A8F3AC8B0C_m678330762BBD2EF5E9FFF3AA349ACAC178B4B9B1_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* HashSet_1_Add_m9A6A47923E3C1783E456E9EB31B8C06824DF001C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* HashSet_1_Add_mC05372B8C874BE5085EAB83035C6322182F7D22C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* HashSet_1_Add_mF3D4CF6D0150392127D5561A87DCDEDA9A81BE5D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* HashSet_1_Contains_m1D204E061BEE1042445415F9D2087AABDB71A44E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* HashSet_1_Contains_mAE49939A0DE08C4864E8560F3F7FCDAC2E193853_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* HashSet_1_Contains_mFEEBB774E40F237E02F2881245F33540FB4B942D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* HashSet_1_GetEnumerator_m5FD422E9616016665B8B8C34C4A52C3F6147D763_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* HashSet_1_Remove_m3BFAD86C88FECD83F760583DA945A46D5121A01A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* HashSet_1_Remove_m97303C08928AB7A9364E7908F34670D92348D9DA_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* HashSet_1_Remove_mE111AC9DE1AE977DAC5601C225D67650A740CE3F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* HashSet_1__ctor_m1A23B597B88AB7A0A6D846A048DAD40DE5229468_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* HashSet_1__ctor_m69B3F52AC472B402F279635CEE94EA4635813A6E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* HashSet_1__ctor_m9F8CD04799346CDC14E5D227FCC28B5A151A7C62_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* HashSet_1_get_Count_m81CE95C9321DD9C7853B30CF6F087F3EAAC9BAC9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* HashSet_1_get_Count_m8E6409CC473C5A6B187F0675A1D5A25514852361_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* JsonConvert_DeserializeIntoObject_TisWitIntentData_tAEC870A54A863E27A1FDC98AE01CA9C99F22F515_m4C56C556AD81F753D0C6A2BCA51E058C7B0EA9A4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* JsonConvert_SerializeObject_TisDictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83_m610316C589A5BB24A5DD256925743F4BCE73CA74_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* JsonConvert_SerializeToken_TisList_1_t4F3133982BFC53A2508E8212590377CE60E9596C_mE24CDA45C45ACB7605C3225C0CBE3D417CBB6E52_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* KeyCollection_GetEnumerator_m6B09BC0C54723DE1DB3E62395E41B76F419BAC22_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* KeyValuePair_2_get_Key_m852B0BE1941AFE5DA3A393534C0020AEAB59D0A6_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* KeyValuePair_2_get_Value_mD55616E290F6591FA95053D1C8D2DDA2E49A058C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_AddRange_m8BB499395EEDB4C9EAA873C7A66A7ACDAFD89907_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_m67EDCB98B1E1D35BADFEAC5C05C3101FACF43EAF_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_mB785B35A5407068979C269B25532380F897AF875_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_mF10DB1D3CBB0B14215F0E4F8AB4934A1955E5351_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Contains_m359254483BE42CAD4DCA8FBAFB87473FB4CF00E1_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_FindIndex_mE9AA887D00D181BADF341807FD92E8991B62971A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Find_m9760E5BE5F71037777382614940964F6DA618AE9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_GetEnumerator_m40B8555CCE497F3BEA05299B1246A4AAA82BF2C2_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_RemoveAt_m9DD03354CB5AEA0DEF85D3DAA9099E9904847164_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Remove_m04D253F0F05F9150C8F833AD48BA9BD48A0F3F89_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Remove_m07B166FD98004ECE5C0F7524AC18B8154F2E825B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Remove_mD9E8CFB6777A99046B3C0195F7343FE771A2E99D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_ToArray_m2C402D882AA60FC1D5C7C09A129BE7779F833B4A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_m038E1782678F97D19BF54E473C8DFF06B41723BD_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_m0BAB01B25B1D62E100CC97401B1A9972D6DEB6EC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_mCA8DD57EAC70C2B5923DBB9D5A77CEAC22E7068E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_mD90BDB6F3C75CE8C6843D60D583652B02327444F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Count_mE0AFF33D783CDEE097B45A7077DE1721E0138FE9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Item_m7B0EB16C24DB14F6557DC2080D4AF80F77AF1D56_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Marker_Clone_mE4396CFC59F594A985AC0B08B4962A66A22425FE_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Marker_ReadIntoWriters_mA97BA1DC688916D2951B8891A59A3B834F3C5ACE_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* NLPAudioRequest_4_HandleFinalNlpResponse_m17F22EB9ACE85E0FD16C9AEDF1243198724E5904_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* NLPRequest_4_GetSendError_m7DC71AA1C11357E41E9BAFD7C84A86EC1220BC14_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* NLPRequest_4_SetState_m193FF3D641DAFA62E4D26F6AAEF02FC77C13F8D5_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* NLPRequest_4_get_InputType_mD2BFDFAC4CA6C3D22BFDB2B9ABD808E4C887238B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Object_FindObjectOfType_TisAudioBuffer_t8F78C90BB0306EE2F5C4787B5D6ACF16EEF33E72_m524F3E82FE6FC77F342A3146566AD48E5DDF5776_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Object_FindObjectOfType_TisDynamicEntityKeywordRegistry_t610EF6621FA40BD297502CD7A30337A625A57C28_m3128A4382E976E3E8D969837346E72E182C5738A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Object_FindObjectOfType_TisVoiceService_t601CB0E6879961EC1F8179A8E20EB9DD7AF6A82E_mDA8F5B3610935B66B1EC441F14D138F7C47411EC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* RingBuffer_1_CreateMarker_m0631E48C13008F51BFD02F5691BB9A260DBE83B4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* RingBuffer_1_Push_m8B341749D1C9AE76A94F221A79BBC887BD6F1AED_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* RingBuffer_1__ctor_m7784E3644A1B55E96CBD6EEF4216CABCD9723A65_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SpeechEvents_SetEvent_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m8B9866152A783B00DC62BD6760C64DEF55F7D5CA_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SpeechEvents_SetEvent_TisString_t_TisString_t_mE93502BAC82570020D936C0C5C0AB2FEA7FA0BB8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SpeechEvents_SetEvent_TisString_t_m62BAB2021E0676DA41C595BCEEE22C14009D2468_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SpeechEvents_SetEvent_TisVoiceServiceRequest_tCF844F597C059D6A354311EB2BD5644AE5E8E536_m97FDD4B3999DF7CAB7E920069C5AF415D1D3183A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SpeechEvents_SetEvent_TisWitRequestOptions_tB2E8B103538F7E42F0568C6F62F2158FA45EF483_m3C28183D42CD9286A3EBFE3500D824D42B2FA446_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SpeechEvents_SetEvent_TisWitRequest_t6DE282D281BDA3D5726C9775385BDFBA1EC6A900_m7F263022B7781050B2975F7F37E9EE50A69399E6_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SpeechEvents_SetEvent_TisWitResponseNode_t1BFF810F15B21416F5F6D0A1CAAF03CEF942038C_m7B829436CAFBA1E4D8B3D78070C252D66F28CA78_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec_U3CSetEventsU3Eb__85_0_mE80983963F85132C35627F544036531159937895_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec_U3CSetEventsU3Eb__85_10_mEDEB01ADA5566EF24329112EAB0DBCC5BD156D47_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec_U3CSetEventsU3Eb__85_11_m9F2402F2C780070190CA335621300830A1F4446B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec_U3CSetEventsU3Eb__85_12_m40A405001192D5C68410C2B6F078F44503BB8402_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec_U3CSetEventsU3Eb__85_13_m7430957ADFDCDD9398FC7B9B95B6D44C9F2E354F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec_U3CSetEventsU3Eb__85_14_m6346B857CF7F52407244AD37D0C6B03EE700B920_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec_U3CSetEventsU3Eb__85_15_mE3A7552CEF4F8CC5747A954859616B9D8F8E80AD_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec_U3CSetEventsU3Eb__85_16_m1AF991967BAC2CDA43D3F95662145920F95B51A5_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec_U3CSetEventsU3Eb__85_17_m724F7BBBA1564846C5B108FEEC4D6A3A58669846_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec_U3CSetEventsU3Eb__85_18_m15931B8D380FE72BE3D4994FD031D227FF7A2758_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec_U3CSetEventsU3Eb__85_19_mAA82BED4FC768404E40CFE3021E56C01F813852A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec_U3CSetEventsU3Eb__85_1_mA1BF469246E31D5B2E766610E42E3DA33C99D728_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec_U3CSetEventsU3Eb__85_20_m7E66AA19F9070096AF85B7767CC259A88C84365F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec_U3CSetEventsU3Eb__85_2_mDE3BD135D4B6D5CC5E455FCD04C460589CE15FCC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec_U3CSetEventsU3Eb__85_3_m8B3DED7136BEF068416ED12BB6BB63212B26B730_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec_U3CSetEventsU3Eb__85_4_mE2B15E1813A504A4095BE31A055E292A4F6240E2_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec_U3CSetEventsU3Eb__85_5_m74AA3B63EBF41D18CFA5CE567B292C077698C347_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec_U3CSetEventsU3Eb__85_6_mD8D8A9106F6C797E03F17662987CA45EFC563302_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec_U3CSetEventsU3Eb__85_7_mB9D79A47CB3EBE7FE9A74A7C85C821F8F4317995_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec_U3CSetEventsU3Eb__85_8_mA26D5C66AA9DD9A852308E9771144E717E860EA7_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec_U3CSetEventsU3Eb__85_9_m5683A88049F6448B180A7220B0AEAC110C63E75B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec__DisplayClass12_0_U3CAddU3Eb__0_mF384E2ACF31F315D65B7489985AB5D8499961514_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec__DisplayClass14_0_U3CAddKeywordU3Eb__0_mA448E8CFB07D995BF4676EFA305773A726B2511C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec__DisplayClass15_0_U3CRemoveKeywordU3Eb__0_mD0D93FDE02722772E6DC49248AAA9CAE4DC190EE_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec__DisplayClass86_0_U3CSetEventU3Eb__0_mD93C82C2408A8F0680312707D3CE86EBDA167FEA_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CWaitForMicToStartU3Ed__30_System_Collections_IEnumerator_Reset_m0356685CFC0D94946B9602E85E47903E660B9ED6_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* UnityEvent_1_AddListener_m03EDE8CB25D09EA569869E869DC2554E4D9E2F55_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* UnityEvent_1_AddListener_m44E396BC4484BD75427FDD8CBE0B533CCAD8C1EC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* UnityEvent_1_AddListener_m70247BB158E4AEFE0164279659FFD151906E2E7A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* UnityEvent_1_AddListener_mB3C6662F34981931F4CECC821C289F26B199098F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* UnityEvent_1_AddListener_mEC384A8CFC5D4D41B62B08248A738CF61B82172F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* UnityEvent_1_Invoke_mA633B48B5D287DA856FB954AC3E4012487E63C15_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* UnityEvent_1_Invoke_mABC41DCEDDFA68F8F39C0DFC1CF55B7C1B70A805_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* UnityEvent_1_Invoke_mDABA5BBDA189937099CB491730CD6AC57D7A5F94_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* UnityEvent_1_RemoveListener_m24E95CAC4E4F02CF9CB50F3BAC259486D572D04D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* UnityEvent_1_RemoveListener_m3B91983165CA1EF3E27EB37077C0476839079395_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* UnityEvent_1_RemoveListener_m580353A1B030A82D1205B9BA94CF3484866C027F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* UnityEvent_1_RemoveListener_m6F51818308066F0E5EA7B37AC25ABDF12FADAEA9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* UnityEvent_1_RemoveListener_m84C07A346FB285EE2C1488B1F0D69BC6557E8D54_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* UnityEvent_1__ctor_m0F7D790DACD6F3D18E865D01FE4427603C1B0CC6_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* UnityEvent_1__ctor_m14E736A972984B0F3F605334B3BB551CA3A37249_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* UnityEvent_1__ctor_m1700B56BB048391F03DE134A8B289FD540FDA6C4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* UnityEvent_1__ctor_m4232B3F734BAF440DA408EF9A6D10CA759EBE76C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* UnityEvent_1__ctor_m6CC0994A9BB9D487DA9CFEFEB765623D485E0877_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* UnityEvent_1__ctor_mA1CAC73F82FF0E8BC4870AEBF137B7F72614957D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* UnityEvent_1__ctor_mBCCC67D3203429FEB7F64B44142A50C5EBDEB9D6_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* UnityEvent_1__ctor_mD1175E822AFF26E9A43F2FB692BB82525C6DD422_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* UnityEvent_1__ctor_mF7AA5743E2CEC1E7B16598E449A80EE8E0D93E1F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* UnityEvent_2__ctor_m21C9872BB0486BA44FF463264947D9CFBF660DDA_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* UnityEvent_2__ctor_m30ECB4C6C53E01554E5F37F035ED8CD10C1B2480_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* UnityEvent_2__ctor_mE88C79B88E89F48201D5486B2C02E988D2712CD8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* UnityEvent_3_Invoke_m0578E7356B07DFFDCAF708E79C51CB74AF894D8D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* UnityEvent_3__ctor_m875D7B8D4734040F09E062B70C490D1FE698C0B9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* UnityEvent_Invoke_mFBF80D59B03C30C5FE6A06F897D954ACADE061D2_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* VoiceRequest_4_SetDownloadProgress_m5BF0DE47751BBACA14FAF00305C1B3098C340B5B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* VoiceRequest_4_get_Options_mA96A6587CD74071815DC0110EFCB7B87B7A14774_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* WitEntityDataBase_1_FromEntityWitResponseNode_m0AACEFF9E3C6FEA0A185EA5A1B1B4EF5FB491FBB_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* WitEntityDataBase_1_FromEntityWitResponseNode_m1B28663CA966B383C72F30F0FA2D0AECCF378A52_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* WitEntityDataBase_1_FromEntityWitResponseNode_m697E7D61EF38859B86A67FAC7B6062E20F5C91B0_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* WitEntityDataBase_1__ctor_m02EB7DBBEE819293BC6F42383C89E3CABC514E3F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* WitEntityDataBase_1__ctor_m144D832DF21C40D1F8A75A34553A283572EAB831_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* WitEntityDataBase_1__ctor_m47659B0D37AAA587A516AB8F63573058A00A225D_RuntimeMethod_var;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;
struct WitEntityInfo_t9715AD316420F516F56031342F3AC0E665C2CB62_marshaled_com;
struct WitEntityInfo_t9715AD316420F516F56031342F3AC0E665C2CB62_marshaled_pinvoke;
struct WitIntentInfo_tB428004D9EC2F2E6130328B64B9F673EF7ACCA3D_marshaled_com;
struct WitIntentInfo_tB428004D9EC2F2E6130328B64B9F673EF7ACCA3D_marshaled_pinvoke;
struct WitVersionTagInfo_t1FB34DB86D5B5C75148C2961D1405CE4C02E1089_marshaled_com;
struct WitVersionTagInfo_t1FB34DB86D5B5C75148C2961D1405CE4C02E1089_marshaled_pinvoke;
struct WitVoiceInfo_t87CF0A90E6DF0CB0CDD2B7F148C2975BFBDB1C6E_marshaled_com;
struct WitVoiceInfo_t87CF0A90E6DF0CB0CDD2B7F148C2975BFBDB1C6E_marshaled_pinvoke;

struct ByteDataWriterU5BU5D_t65BFCE3A23A6A9D43E7311E07FE38BAD340ADA5B;
struct ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031;
struct ConfidenceRangeU5BU5D_t436B72D1C2A21AE91F57767E7CCA104C79700583;
struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771;
struct FormattedValueEventsU5BU5D_t0E1D60C2D6BF5C4DCF75ABCAF224658107EF33F5;
struct GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF;
struct JsonConverterU5BU5D_tF117D3A16A2A7AAC2A66A7EDCD32E3F48B704DDA;
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;
struct SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C;
struct StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248;
struct ValuePathMatcherU5BU5D_tDC6C5FBC8AD9CDC953975B35F515F2F1EC24066E;
struct WitConfigurationAssetDataU5BU5D_t700D5FE01B115D42C19FDAB600E6E52D045BAB9C;
struct WitDynamicEntitiesDataU5BU5D_t04480B2CB2C361B83EA9E1237F827D9287EBDD36;
struct WitDynamicEntityU5BU5D_tAF932D5132E6589F964FB76D2FB82BFA9E0EDB7F;
struct WitEntityKeywordInfoU5BU5D_tF62D7B36A857239604E3BF89B6088F63129EF811;
struct WitIntentDataU5BU5D_tA1E1A7F9E9C566D8BA4049F086E2ECD245E7ABF4;
struct QueryParamU5BU5D_tECB106E0E9D39573F239DA1C256E0922C6DDFE10;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.Dictionary`2<System.String,System.Collections.Generic.List`1<System.String>>
struct Dictionary_2_t79BA378F246EFA4AD0AFFA017D788423CACA8638  : public RuntimeObject
{
	// System.Int32[] System.Collections.Generic.Dictionary`2::_buckets
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____buckets_0;
	// System.Collections.Generic.Dictionary`2/Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::_entries
	EntryU5BU5D_t7D363C4258705E5C759DC3C7A84AD08784EEBE95* ____entries_1;
	// System.Int32 System.Collections.Generic.Dictionary`2::_count
	int32_t ____count_2;
	// System.Int32 System.Collections.Generic.Dictionary`2::_freeList
	int32_t ____freeList_3;
	// System.Int32 System.Collections.Generic.Dictionary`2::_freeCount
	int32_t ____freeCount_4;
	// System.Int32 System.Collections.Generic.Dictionary`2::_version
	int32_t ____version_5;
	// System.Collections.Generic.IEqualityComparer`1<TKey> System.Collections.Generic.Dictionary`2::_comparer
	RuntimeObject* ____comparer_6;
	// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::_keys
	KeyCollection_tAF09DE3ACAF1ABD7544A92CFC2787E520703246E* ____keys_7;
	// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::_values
	ValueCollection_tBA7D94F600201BDFFC90880B77DA2D76ED7EBB59* ____values_8;
	// System.Object System.Collections.Generic.Dictionary`2::_syncRoot
	RuntimeObject* ____syncRoot_9;
};

// System.Collections.Generic.Dictionary`2<System.String,System.String>
struct Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83  : public RuntimeObject
{
	// System.Int32[] System.Collections.Generic.Dictionary`2::_buckets
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____buckets_0;
	// System.Collections.Generic.Dictionary`2/Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::_entries
	EntryU5BU5D_t1AF33AD0B7330843448956EC4277517081658AE7* ____entries_1;
	// System.Int32 System.Collections.Generic.Dictionary`2::_count
	int32_t ____count_2;
	// System.Int32 System.Collections.Generic.Dictionary`2::_freeList
	int32_t ____freeList_3;
	// System.Int32 System.Collections.Generic.Dictionary`2::_freeCount
	int32_t ____freeCount_4;
	// System.Int32 System.Collections.Generic.Dictionary`2::_version
	int32_t ____version_5;
	// System.Collections.Generic.IEqualityComparer`1<TKey> System.Collections.Generic.Dictionary`2::_comparer
	RuntimeObject* ____comparer_6;
	// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::_keys
	KeyCollection_t2EDD317F5771E575ACB63527B5AFB71291040342* ____keys_7;
	// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::_values
	ValueCollection_t238D0D2427C6B841A01F522A41540165A2C4AE76* ____values_8;
	// System.Object System.Collections.Generic.Dictionary`2::_syncRoot
	RuntimeObject* ____syncRoot_9;
};

// System.EmptyArray`1<System.Object>
struct EmptyArray_1_tDF0DD7256B115243AA6BD5558417387A734240EE  : public RuntimeObject
{
};

struct EmptyArray_1_tDF0DD7256B115243AA6BD5558417387A734240EE_StaticFields
{
	// T[] System.EmptyArray`1::Value
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___Value_0;
};

// System.Collections.Generic.HashSet`1<UnityEngine.Component>
struct HashSet_1_tF0A60E739EB979571381F8FB075B6B90F6FA6F8D  : public RuntimeObject
{
	// System.Int32[] System.Collections.Generic.HashSet`1::_buckets
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____buckets_7;
	// System.Collections.Generic.HashSet`1/Slot<T>[] System.Collections.Generic.HashSet`1::_slots
	SlotU5BU5D_t77D4E8A0D0306C32C9CE0497F8584A1D53D52593* ____slots_8;
	// System.Int32 System.Collections.Generic.HashSet`1::_count
	int32_t ____count_9;
	// System.Int32 System.Collections.Generic.HashSet`1::_lastIndex
	int32_t ____lastIndex_10;
	// System.Int32 System.Collections.Generic.HashSet`1::_freeList
	int32_t ____freeList_11;
	// System.Collections.Generic.IEqualityComparer`1<T> System.Collections.Generic.HashSet`1::_comparer
	RuntimeObject* ____comparer_12;
	// System.Int32 System.Collections.Generic.HashSet`1::_version
	int32_t ____version_13;
	// System.Runtime.Serialization.SerializationInfo System.Collections.Generic.HashSet`1::_siInfo
	SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* ____siInfo_14;
};

// System.Collections.Generic.HashSet`1<System.Object>
struct HashSet_1_t2F33BEB06EEA4A872E2FAF464382422AA39AE885  : public RuntimeObject
{
	// System.Int32[] System.Collections.Generic.HashSet`1::_buckets
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____buckets_7;
	// System.Collections.Generic.HashSet`1/Slot<T>[] System.Collections.Generic.HashSet`1::_slots
	SlotU5BU5D_tF596AD324082C553DB364C768406A40BB3C85343* ____slots_8;
	// System.Int32 System.Collections.Generic.HashSet`1::_count
	int32_t ____count_9;
	// System.Int32 System.Collections.Generic.HashSet`1::_lastIndex
	int32_t ____lastIndex_10;
	// System.Int32 System.Collections.Generic.HashSet`1::_freeList
	int32_t ____freeList_11;
	// System.Collections.Generic.IEqualityComparer`1<T> System.Collections.Generic.HashSet`1::_comparer
	RuntimeObject* ____comparer_12;
	// System.Int32 System.Collections.Generic.HashSet`1::_version
	int32_t ____version_13;
	// System.Runtime.Serialization.SerializationInfo System.Collections.Generic.HashSet`1::_siInfo
	SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* ____siInfo_14;
};

// System.Collections.Generic.HashSet`1<Meta.WitAi.Events.SpeechEvents>
struct HashSet_1_tA2DD82C656859A8F953FE80E0E7CFAA242AFFEB7  : public RuntimeObject
{
	// System.Int32[] System.Collections.Generic.HashSet`1::_buckets
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____buckets_7;
	// System.Collections.Generic.HashSet`1/Slot<T>[] System.Collections.Generic.HashSet`1::_slots
	SlotU5BU5D_tD6E04FA7A4C777C010C5B26FE41134993003B11E* ____slots_8;
	// System.Int32 System.Collections.Generic.HashSet`1::_count
	int32_t ____count_9;
	// System.Int32 System.Collections.Generic.HashSet`1::_lastIndex
	int32_t ____lastIndex_10;
	// System.Int32 System.Collections.Generic.HashSet`1::_freeList
	int32_t ____freeList_11;
	// System.Collections.Generic.IEqualityComparer`1<T> System.Collections.Generic.HashSet`1::_comparer
	RuntimeObject* ____comparer_12;
	// System.Int32 System.Collections.Generic.HashSet`1::_version
	int32_t ____version_13;
	// System.Runtime.Serialization.SerializationInfo System.Collections.Generic.HashSet`1::_siInfo
	SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* ____siInfo_14;
};

// System.Collections.Generic.HashSet`1<System.String>
struct HashSet_1_tEFC6605F7DE53F71946C33FD371E53C3100F2178  : public RuntimeObject
{
	// System.Int32[] System.Collections.Generic.HashSet`1::_buckets
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____buckets_7;
	// System.Collections.Generic.HashSet`1/Slot<T>[] System.Collections.Generic.HashSet`1::_slots
	SlotU5BU5D_t8B8EE191EEC1575F1F0CAC91A208DBFDF2821D01* ____slots_8;
	// System.Int32 System.Collections.Generic.HashSet`1::_count
	int32_t ____count_9;
	// System.Int32 System.Collections.Generic.HashSet`1::_lastIndex
	int32_t ____lastIndex_10;
	// System.Int32 System.Collections.Generic.HashSet`1::_freeList
	int32_t ____freeList_11;
	// System.Collections.Generic.IEqualityComparer`1<T> System.Collections.Generic.HashSet`1::_comparer
	RuntimeObject* ____comparer_12;
	// System.Int32 System.Collections.Generic.HashSet`1::_version
	int32_t ____version_13;
	// System.Runtime.Serialization.SerializationInfo System.Collections.Generic.HashSet`1::_siInfo
	SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* ____siInfo_14;
};

// System.Collections.Generic.Dictionary`2/KeyCollection<System.String,System.String>
struct KeyCollection_t2EDD317F5771E575ACB63527B5AFB71291040342  : public RuntimeObject
{
	// System.Collections.Generic.Dictionary`2<TKey,TValue> System.Collections.Generic.Dictionary`2/KeyCollection::_dictionary
	Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* ____dictionary_0;
};

// System.Collections.Generic.List`1<System.Object>
struct List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

struct List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<System.String>
struct List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

struct List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<Meta.WitAi.Data.Entities.WitDynamicEntity>
struct List_1_t6D090AF9EB273D470FE30798680167DEBB0CC11B  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	WitDynamicEntityU5BU5D_tAF932D5132E6589F964FB76D2FB82BFA9E0EDB7F* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

struct List_1_t6D090AF9EB273D470FE30798680167DEBB0CC11B_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	WitDynamicEntityU5BU5D_tAF932D5132E6589F964FB76D2FB82BFA9E0EDB7F* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<Meta.WitAi.Data.Info.WitEntityKeywordInfo>
struct List_1_t4F3133982BFC53A2508E8212590377CE60E9596C  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	WitEntityKeywordInfoU5BU5D_tF62D7B36A857239604E3BF89B6088F63129EF811* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

struct List_1_t4F3133982BFC53A2508E8212590377CE60E9596C_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	WitEntityKeywordInfoU5BU5D_tF62D7B36A857239604E3BF89B6088F63129EF811* ___s_emptyArray_5;
};

// Meta.WitAi.Data.RingBuffer`1/Marker<System.Byte>
struct Marker_t80D0133ECCCB8414D295FFD7C3FB9E6E564F5E42  : public RuntimeObject
{
	// System.Int64 Meta.WitAi.Data.RingBuffer`1/Marker::bufferDataIndex
	int64_t ___bufferDataIndex_0;
	// System.Int32 Meta.WitAi.Data.RingBuffer`1/Marker::index
	int32_t ___index_1;
	// Meta.WitAi.Data.RingBuffer`1<T> Meta.WitAi.Data.RingBuffer`1/Marker::ringBuffer
	RingBuffer_1_t553FDAA382235F13BBC8000565860BFE1438D276* ___ringBuffer_2;
};

// Meta.WitAi.Data.RingBuffer`1<System.Byte>
struct RingBuffer_1_t553FDAA382235F13BBC8000565860BFE1438D276  : public RuntimeObject
{
	// Meta.WitAi.Data.RingBuffer`1/OnDataAdded<T> Meta.WitAi.Data.RingBuffer`1::OnDataAddedEvent
	OnDataAdded_t60B4E07A9B4244E018EC7EA53FCA71F62C0A0D12* ___OnDataAddedEvent_0;
	// T[] Meta.WitAi.Data.RingBuffer`1::buffer
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___buffer_1;
	// System.Int32 Meta.WitAi.Data.RingBuffer`1::bufferIndex
	int32_t ___bufferIndex_2;
	// System.Int64 Meta.WitAi.Data.RingBuffer`1::bufferDataLength
	int64_t ___bufferDataLength_3;
};

// Meta.Voice.VoiceRequestEvents`1<Meta.WitAi.Requests.VoiceServiceRequestEvent>
struct VoiceRequestEvents_1_t3D911949457333BFF342578314A064DFD33DB981  : public RuntimeObject
{
	// TUnityEvent Meta.Voice.VoiceRequestEvents`1::_onStateChange
	VoiceServiceRequestEvent_t91B4A1DF3C1AC52F52DCD883797AC599E47B4601* ____onStateChange_0;
	// TUnityEvent Meta.Voice.VoiceRequestEvents`1::_onInit
	VoiceServiceRequestEvent_t91B4A1DF3C1AC52F52DCD883797AC599E47B4601* ____onInit_1;
	// TUnityEvent Meta.Voice.VoiceRequestEvents`1::_onSend
	VoiceServiceRequestEvent_t91B4A1DF3C1AC52F52DCD883797AC599E47B4601* ____onSend_2;
	// TUnityEvent Meta.Voice.VoiceRequestEvents`1::_onCancel
	VoiceServiceRequestEvent_t91B4A1DF3C1AC52F52DCD883797AC599E47B4601* ____onCancel_3;
	// TUnityEvent Meta.Voice.VoiceRequestEvents`1::_onFailed
	VoiceServiceRequestEvent_t91B4A1DF3C1AC52F52DCD883797AC599E47B4601* ____onFailed_4;
	// TUnityEvent Meta.Voice.VoiceRequestEvents`1::_onSuccess
	VoiceServiceRequestEvent_t91B4A1DF3C1AC52F52DCD883797AC599E47B4601* ____onSuccess_5;
	// TUnityEvent Meta.Voice.VoiceRequestEvents`1::_onComplete
	VoiceServiceRequestEvent_t91B4A1DF3C1AC52F52DCD883797AC599E47B4601* ____onComplete_6;
	// TUnityEvent Meta.Voice.VoiceRequestEvents`1::_onDownloadProgressChange
	VoiceServiceRequestEvent_t91B4A1DF3C1AC52F52DCD883797AC599E47B4601* ____onDownloadProgressChange_7;
	// TUnityEvent Meta.Voice.VoiceRequestEvents`1::_onUploadProgressChange
	VoiceServiceRequestEvent_t91B4A1DF3C1AC52F52DCD883797AC599E47B4601* ____onUploadProgressChange_8;
};

// Meta.Voice.VoiceRequest`4<System.Object,System.Object,System.Object,System.Object>
struct VoiceRequest_4_t6799EEA3F92FAD2873D8E4F7650667AA90E2F95B  : public RuntimeObject
{
	// Meta.Voice.VoiceRequestState Meta.Voice.VoiceRequest`4::<State>k__BackingField
	int32_t ___U3CStateU3Ek__BackingField_1;
	// System.Single Meta.Voice.VoiceRequest`4::<DownloadProgress>k__BackingField
	float ___U3CDownloadProgressU3Ek__BackingField_2;
	// System.Single Meta.Voice.VoiceRequest`4::<UploadProgress>k__BackingField
	float ___U3CUploadProgressU3Ek__BackingField_3;
	// TOptions Meta.Voice.VoiceRequest`4::<Options>k__BackingField
	RuntimeObject* ___U3COptionsU3Ek__BackingField_4;
	// TEvents Meta.Voice.VoiceRequest`4::<Events>k__BackingField
	RuntimeObject* ___U3CEventsU3Ek__BackingField_5;
	// TResults Meta.Voice.VoiceRequest`4::<Results>k__BackingField
	RuntimeObject* ___U3CResultsU3Ek__BackingField_6;
};

struct VoiceRequest_4_t6799EEA3F92FAD2873D8E4F7650667AA90E2F95B_StaticFields
{
	// Meta.WitAi.Data.SimulatedResponse Meta.Voice.VoiceRequest`4::simulatedResponse
	SimulatedResponse_t6C399FEE83BD05DF775EA5C7D8C3D15DF2EE5B8E* ___simulatedResponse_0;
};

// Meta.Voice.VoiceRequest`4<Meta.WitAi.Requests.VoiceServiceRequestEvent,Meta.WitAi.Configuration.WitRequestOptions,Meta.WitAi.Requests.VoiceServiceRequestEvents,Meta.WitAi.Requests.VoiceServiceRequestResults>
struct VoiceRequest_4_t635CDB7E63C5322E9D11D83B63A401260F8BAA8C  : public RuntimeObject
{
	// Meta.Voice.VoiceRequestState Meta.Voice.VoiceRequest`4::<State>k__BackingField
	int32_t ___U3CStateU3Ek__BackingField_1;
	// System.Single Meta.Voice.VoiceRequest`4::<DownloadProgress>k__BackingField
	float ___U3CDownloadProgressU3Ek__BackingField_2;
	// System.Single Meta.Voice.VoiceRequest`4::<UploadProgress>k__BackingField
	float ___U3CUploadProgressU3Ek__BackingField_3;
	// TOptions Meta.Voice.VoiceRequest`4::<Options>k__BackingField
	WitRequestOptions_tB2E8B103538F7E42F0568C6F62F2158FA45EF483* ___U3COptionsU3Ek__BackingField_4;
	// TEvents Meta.Voice.VoiceRequest`4::<Events>k__BackingField
	VoiceServiceRequestEvents_t4270DDE59A84A1A65EBF9331C446BBBC7BDE0838* ___U3CEventsU3Ek__BackingField_5;
	// TResults Meta.Voice.VoiceRequest`4::<Results>k__BackingField
	VoiceServiceRequestResults_t42861FCA7E9538CBAEE9F7246C891F0A5BB7E497* ___U3CResultsU3Ek__BackingField_6;
};

struct VoiceRequest_4_t635CDB7E63C5322E9D11D83B63A401260F8BAA8C_StaticFields
{
	// Meta.WitAi.Data.SimulatedResponse Meta.Voice.VoiceRequest`4::simulatedResponse
	SimulatedResponse_t6C399FEE83BD05DF775EA5C7D8C3D15DF2EE5B8E* ___simulatedResponse_0;
};

// Meta.WitAi.Data.Entities.WitEntityDataBase`1<System.Int32>
struct WitEntityDataBase_1_t46F92AF5EC7866816B6CD6D417773D4FFE270507  : public RuntimeObject
{
	// Meta.WitAi.Json.WitResponseNode Meta.WitAi.Data.Entities.WitEntityDataBase`1::responseNode
	WitResponseNode_t1BFF810F15B21416F5F6D0A1CAAF03CEF942038C* ___responseNode_0;
	// System.String Meta.WitAi.Data.Entities.WitEntityDataBase`1::id
	String_t* ___id_1;
	// System.String Meta.WitAi.Data.Entities.WitEntityDataBase`1::name
	String_t* ___name_2;
	// System.String Meta.WitAi.Data.Entities.WitEntityDataBase`1::role
	String_t* ___role_3;
	// System.Int32 Meta.WitAi.Data.Entities.WitEntityDataBase`1::start
	int32_t ___start_4;
	// System.Int32 Meta.WitAi.Data.Entities.WitEntityDataBase`1::end
	int32_t ___end_5;
	// System.String Meta.WitAi.Data.Entities.WitEntityDataBase`1::type
	String_t* ___type_6;
	// System.String Meta.WitAi.Data.Entities.WitEntityDataBase`1::body
	String_t* ___body_7;
	// T Meta.WitAi.Data.Entities.WitEntityDataBase`1::value
	int32_t ___value_8;
	// System.Single Meta.WitAi.Data.Entities.WitEntityDataBase`1::confidence
	float ___confidence_9;
	// System.Boolean Meta.WitAi.Data.Entities.WitEntityDataBase`1::hasData
	bool ___hasData_10;
	// Meta.WitAi.Json.WitResponseArray Meta.WitAi.Data.Entities.WitEntityDataBase`1::entities
	WitResponseArray_tAC1DCF75C6C2FAB0A70A7DB879A0F35999BAB30A* ___entities_11;
};

// Meta.WitAi.Data.Entities.WitEntityDataBase`1<System.Single>
struct WitEntityDataBase_1_t90E9F0FB214EED844AD8DD1A97EA3C1FD1EED960  : public RuntimeObject
{
	// Meta.WitAi.Json.WitResponseNode Meta.WitAi.Data.Entities.WitEntityDataBase`1::responseNode
	WitResponseNode_t1BFF810F15B21416F5F6D0A1CAAF03CEF942038C* ___responseNode_0;
	// System.String Meta.WitAi.Data.Entities.WitEntityDataBase`1::id
	String_t* ___id_1;
	// System.String Meta.WitAi.Data.Entities.WitEntityDataBase`1::name
	String_t* ___name_2;
	// System.String Meta.WitAi.Data.Entities.WitEntityDataBase`1::role
	String_t* ___role_3;
	// System.Int32 Meta.WitAi.Data.Entities.WitEntityDataBase`1::start
	int32_t ___start_4;
	// System.Int32 Meta.WitAi.Data.Entities.WitEntityDataBase`1::end
	int32_t ___end_5;
	// System.String Meta.WitAi.Data.Entities.WitEntityDataBase`1::type
	String_t* ___type_6;
	// System.String Meta.WitAi.Data.Entities.WitEntityDataBase`1::body
	String_t* ___body_7;
	// T Meta.WitAi.Data.Entities.WitEntityDataBase`1::value
	float ___value_8;
	// System.Single Meta.WitAi.Data.Entities.WitEntityDataBase`1::confidence
	float ___confidence_9;
	// System.Boolean Meta.WitAi.Data.Entities.WitEntityDataBase`1::hasData
	bool ___hasData_10;
	// Meta.WitAi.Json.WitResponseArray Meta.WitAi.Data.Entities.WitEntityDataBase`1::entities
	WitResponseArray_tAC1DCF75C6C2FAB0A70A7DB879A0F35999BAB30A* ___entities_11;
};

// Meta.WitAi.Data.Entities.WitEntityDataBase`1<System.String>
struct WitEntityDataBase_1_t76EEB2E002923316F752746DDB37569F5D39FEB4  : public RuntimeObject
{
	// Meta.WitAi.Json.WitResponseNode Meta.WitAi.Data.Entities.WitEntityDataBase`1::responseNode
	WitResponseNode_t1BFF810F15B21416F5F6D0A1CAAF03CEF942038C* ___responseNode_0;
	// System.String Meta.WitAi.Data.Entities.WitEntityDataBase`1::id
	String_t* ___id_1;
	// System.String Meta.WitAi.Data.Entities.WitEntityDataBase`1::name
	String_t* ___name_2;
	// System.String Meta.WitAi.Data.Entities.WitEntityDataBase`1::role
	String_t* ___role_3;
	// System.Int32 Meta.WitAi.Data.Entities.WitEntityDataBase`1::start
	int32_t ___start_4;
	// System.Int32 Meta.WitAi.Data.Entities.WitEntityDataBase`1::end
	int32_t ___end_5;
	// System.String Meta.WitAi.Data.Entities.WitEntityDataBase`1::type
	String_t* ___type_6;
	// System.String Meta.WitAi.Data.Entities.WitEntityDataBase`1::body
	String_t* ___body_7;
	// T Meta.WitAi.Data.Entities.WitEntityDataBase`1::value
	String_t* ___value_8;
	// System.Single Meta.WitAi.Data.Entities.WitEntityDataBase`1::confidence
	float ___confidence_9;
	// System.Boolean Meta.WitAi.Data.Entities.WitEntityDataBase`1::hasData
	bool ___hasData_10;
	// Meta.WitAi.Json.WitResponseArray Meta.WitAi.Data.Entities.WitEntityDataBase`1::entities
	WitResponseArray_tAC1DCF75C6C2FAB0A70A7DB879A0F35999BAB30A* ___entities_11;
};
struct Il2CppArrayBounds;

// System.Attribute
struct Attribute_tFDA8EFEFB0711976D22474794576DAF28F7440AA  : public RuntimeObject
{
};

// Meta.WitAi.Data.AudioBufferConfiguration
struct AudioBufferConfiguration_tB38ABF06828B3927593D6E28F41EC838EFE9B8B3  : public RuntimeObject
{
	// System.Int32 Meta.WitAi.Data.AudioBufferConfiguration::sampleLengthInMs
	int32_t ___sampleLengthInMs_0;
	// System.Single Meta.WitAi.Data.AudioBufferConfiguration::micBufferLengthInSeconds
	float ___micBufferLengthInSeconds_1;
};

// Meta.WitAi.Events.AudioBufferEvents
struct AudioBufferEvents_t464B32397852A58D1333411135D8AB9CF2F6C233  : public RuntimeObject
{
	// Meta.WitAi.Events.AudioBufferEvents/OnSampleReadyEvent Meta.WitAi.Events.AudioBufferEvents::OnSampleReady
	OnSampleReadyEvent_t43C9DCB6394FF2C5F335602AC5455C1A6B430486* ___OnSampleReady_0;
	// Meta.WitAi.Events.WitMicLevelChangedEvent Meta.WitAi.Events.AudioBufferEvents::OnMicLevelChanged
	WitMicLevelChangedEvent_tA9B2889CB33EAA09656739F26AA70252ED15DEF7* ___OnMicLevelChanged_1;
	// Meta.WitAi.Events.WitByteDataEvent Meta.WitAi.Events.AudioBufferEvents::OnByteDataReady
	WitByteDataEvent_t6F952E3BEDEBEEFF9FF094E1AFA7B2089F88B4CC* ___OnByteDataReady_2;
	// Meta.WitAi.Events.WitByteDataEvent Meta.WitAi.Events.AudioBufferEvents::OnByteDataSent
	WitByteDataEvent_t6F952E3BEDEBEEFF9FF094E1AFA7B2089F88B4CC* ___OnByteDataSent_3;
};

// Meta.WitAi.Data.AudioEncoding
struct AudioEncoding_t98ED2D092A9829C604C73C3B611E2FC987413EE4  : public RuntimeObject
{
	// System.String Meta.WitAi.Data.AudioEncoding::encoding
	String_t* ___encoding_0;
	// System.Int32 Meta.WitAi.Data.AudioEncoding::bits
	int32_t ___bits_1;
	// System.Int32 Meta.WitAi.Data.AudioEncoding::samplerate
	int32_t ___samplerate_2;
	// Meta.WitAi.Data.AudioEncoding/Endian Meta.WitAi.Data.AudioEncoding::endian
	int32_t ___endian_3;
	// System.Int32 Meta.WitAi.Data.AudioEncoding::numChannels
	int32_t ___numChannels_4;
};

// System.Text.RegularExpressions.Capture
struct Capture_tE11B735186DAFEE5F7A3BF5A739E9CCCE99DC24A  : public RuntimeObject
{
	// System.Int32 System.Text.RegularExpressions.Capture::<Index>k__BackingField
	int32_t ___U3CIndexU3Ek__BackingField_0;
	// System.Int32 System.Text.RegularExpressions.Capture::<Length>k__BackingField
	int32_t ___U3CLengthU3Ek__BackingField_1;
	// System.String System.Text.RegularExpressions.Capture::<Text>k__BackingField
	String_t* ___U3CTextU3Ek__BackingField_2;
};

// Meta.WitAi.CallbackHandlers.ConfidenceRange
struct ConfidenceRange_tE0A93D2F39AE1C9E6340C39D30A9201709B737E8  : public RuntimeObject
{
	// System.Single Meta.WitAi.CallbackHandlers.ConfidenceRange::minConfidence
	float ___minConfidence_0;
	// System.Single Meta.WitAi.CallbackHandlers.ConfidenceRange::maxConfidence
	float ___maxConfidence_1;
	// UnityEngine.Events.UnityEvent Meta.WitAi.CallbackHandlers.ConfidenceRange::onWithinConfidenceRange
	UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* ___onWithinConfidenceRange_2;
	// UnityEngine.Events.UnityEvent Meta.WitAi.CallbackHandlers.ConfidenceRange::onOutsideConfidenceRange
	UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* ___onOutsideConfidenceRange_3;
};

// UnityEngine.CustomYieldInstruction
struct CustomYieldInstruction_t6B81A50D5D210C1ACAAE247FB53B65CDFFEB7617  : public RuntimeObject
{
};

// Meta.WitAi.Events.EventRegistry
struct EventRegistry_t712584F20910AAA2A4A85A34835BC58574C441FE  : public RuntimeObject
{
	// System.Collections.Generic.List`1<System.String> Meta.WitAi.Events.EventRegistry::_overriddenCallbacks
	List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* ____overriddenCallbacks_0;
	// System.Collections.Generic.HashSet`1<System.String> Meta.WitAi.Events.EventRegistry::_overriddenCallbacksHash
	HashSet_1_tEFC6605F7DE53F71946C33FD371E53C3100F2178* ____overriddenCallbacksHash_1;
};

// Meta.WitAi.CallbackHandlers.FormattedValueEvents
struct FormattedValueEvents_t0D0D440F35C91FAA243428A4B45156402090018C  : public RuntimeObject
{
	// System.String Meta.WitAi.CallbackHandlers.FormattedValueEvents::format
	String_t* ___format_0;
	// Meta.WitAi.CallbackHandlers.ValueEvent Meta.WitAi.CallbackHandlers.FormattedValueEvents::onFormattedValueEvent
	ValueEvent_t7E99BC212C04EA8B32FFF6900F7AEC1C55A2AC32* ___onFormattedValueEvent_1;
};

// Meta.WitAi.Json.JsonConverter
struct JsonConverter_t1EC0651CD277ABEFD390D833BEAB25A034223BE6  : public RuntimeObject
{
	// System.Boolean Meta.WitAi.Json.JsonConverter::<CanRead>k__BackingField
	bool ___U3CCanReadU3Ek__BackingField_0;
	// System.Boolean Meta.WitAi.Json.JsonConverter::<CanWrite>k__BackingField
	bool ___U3CCanWriteU3Ek__BackingField_1;
};

// Meta.Conduit.Manifest
struct Manifest_tDC9A75EB5733C48D7100139A792C661B4A60B9AB  : public RuntimeObject
{
	// System.String Meta.Conduit.Manifest::<ID>k__BackingField
	String_t* ___U3CIDU3Ek__BackingField_0;
	// System.String Meta.Conduit.Manifest::<Version>k__BackingField
	String_t* ___U3CVersionU3Ek__BackingField_1;
	// System.String Meta.Conduit.Manifest::<Domain>k__BackingField
	String_t* ___U3CDomainU3Ek__BackingField_2;
	// System.Collections.Generic.List`1<Meta.Conduit.ManifestEntity> Meta.Conduit.Manifest::<Entities>k__BackingField
	List_1_t1C87799537DA2AA3C5852C495E8A76986C29EF21* ___U3CEntitiesU3Ek__BackingField_3;
	// System.Collections.Generic.List`1<Meta.Conduit.ManifestAction> Meta.Conduit.Manifest::<Actions>k__BackingField
	List_1_t5AF4A4A0124C0DD93C82F7CD5DA1CE941F4356DD* ___U3CActionsU3Ek__BackingField_4;
	// System.Collections.Generic.List`1<Meta.Conduit.ManifestErrorHandler> Meta.Conduit.Manifest::ErrorHandlers
	List_1_tA7D4E27AD78BE05A7E20460DC12F7F34BBDDD177* ___ErrorHandlers_5;
	// System.Collections.Generic.Dictionary`2<System.String,System.Collections.Generic.List`1<Meta.Conduit.InvocationContext>> Meta.Conduit.Manifest::_methodLookup
	Dictionary_2_t27637911D95F8F26CB00E5FF60BB5EA9DCEEEFC1* ____methodLookup_6;
	// System.Collections.Generic.Dictionary`2<System.String,System.Type> Meta.Conduit.Manifest::<CustomEntityTypes>k__BackingField
	Dictionary_2_t0E98B58821A879161B744DA2602DA878A7E5C58A* ___U3CCustomEntityTypesU3Ek__BackingField_7;
};

struct Manifest_tDC9A75EB5733C48D7100139A792C661B4A60B9AB_StaticFields
{
	// System.Collections.Generic.List`1<System.String> Meta.Conduit.Manifest::WitResponseMatcherIntents
	List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* ___WitResponseMatcherIntents_8;
};

// System.Reflection.MemberInfo
struct MemberInfo_t  : public RuntimeObject
{
};

// System.String
struct String_t  : public RuntimeObject
{
	// System.Int32 System.String::_stringLength
	int32_t ____stringLength_4;
	// System.Char System.String::_firstChar
	Il2CppChar ____firstChar_5;
};

struct String_t_StaticFields
{
	// System.String System.String::Empty
	String_t* ___Empty_6;
};

// Meta.WitAi.Events.TelemetryEvents
struct TelemetryEvents_t728EE43C6D9E03EE2233160917696F0D483CF2DC  : public RuntimeObject
{
	// Meta.WitAi.Events.AudioDurationTrackerFinishedEvent Meta.WitAi.Events.TelemetryEvents::OnAudioTrackerFinished
	AudioDurationTrackerFinishedEvent_t23E275CDD44C7923B60C067FAFF9FA926AB30647* ___OnAudioTrackerFinished_0;
};

// UnityEngine.Events.UnityEventBase
struct UnityEventBase_t4968A4C72559F35C0923E4BD9C042C3A842E1DB8  : public RuntimeObject
{
	// UnityEngine.Events.InvokableCallList UnityEngine.Events.UnityEventBase::m_Calls
	InvokableCallList_t309E1C8C7CE885A0D2F98C84CEA77A8935688382* ___m_Calls_0;
	// UnityEngine.Events.PersistentCallGroup UnityEngine.Events.UnityEventBase::m_PersistentCalls
	PersistentCallGroup_tB826EDF15DC80F71BCBCD8E410FD959A04C33F25* ___m_PersistentCalls_1;
	// System.Boolean UnityEngine.Events.UnityEventBase::m_CallsDirty
	bool ___m_CallsDirty_2;
};

// Meta.WitAi.Requests.VRequest
struct VRequest_tFD9B8F15B7482BF5BE064752EAE7162E3588B8A1  : public RuntimeObject
{
	// System.Int32 Meta.WitAi.Requests.VRequest::<Timeout>k__BackingField
	int32_t ___U3CTimeoutU3Ek__BackingField_2;
	// System.Boolean Meta.WitAi.Requests.VRequest::<IsPerforming>k__BackingField
	bool ___U3CIsPerformingU3Ek__BackingField_3;
	// System.Boolean Meta.WitAi.Requests.VRequest::<IsComplete>k__BackingField
	bool ___U3CIsCompleteU3Ek__BackingField_4;
	// System.Int32 Meta.WitAi.Requests.VRequest::<ResponseCode>k__BackingField
	int32_t ___U3CResponseCodeU3Ek__BackingField_5;
	// System.Single Meta.WitAi.Requests.VRequest::<UploadProgress>k__BackingField
	float ___U3CUploadProgressU3Ek__BackingField_6;
	// System.Single Meta.WitAi.Requests.VRequest::<DownloadProgress>k__BackingField
	float ___U3CDownloadProgressU3Ek__BackingField_7;
	// UnityEngine.Networking.UnityWebRequest Meta.WitAi.Requests.VRequest::_request
	UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F* ____request_8;
	// Meta.WitAi.Requests.VRequest/RequestProgressDelegate Meta.WitAi.Requests.VRequest::_onDownloadProgress
	RequestProgressDelegate_tCEE5B616F4FDCD488E4914A7F554F2F57B7D03A4* ____onDownloadProgress_9;
	// Meta.WitAi.Requests.VRequest/RequestFirstResponseDelegate Meta.WitAi.Requests.VRequest::_onFirstResponse
	RequestFirstResponseDelegate_tB02AF851E14447743278D4F5E31A6B7E0203E89A* ____onFirstResponse_10;
	// Meta.WitAi.Requests.VRequest/RequestCompleteDelegate`1<UnityEngine.Networking.UnityWebRequest> Meta.WitAi.Requests.VRequest::_onComplete
	RequestCompleteDelegate_1_t5AF447A591A5097051D3A5AFBB764165380A9835* ____onComplete_11;
	// Meta.WitAi.CoroutineUtility/CoroutinePerformer Meta.WitAi.Requests.VRequest::_coroutine
	CoroutinePerformer_t2423B696217C7475EF6AFE1D33000E8766703559* ____coroutine_12;
};

struct VRequest_tFD9B8F15B7482BF5BE064752EAE7162E3588B8A1_StaticFields
{
	// System.Int32 Meta.WitAi.Requests.VRequest::MaxConcurrentRequests
	int32_t ___MaxConcurrentRequests_0;
	// System.Int32 Meta.WitAi.Requests.VRequest::_requestCount
	int32_t ____requestCount_1;
};

// Meta.WitAi.CallbackHandlers.ValuePathMatcher
struct ValuePathMatcher_t2058BD1F2F9C5A162DFBD3FE61BD97F2D840E35E  : public RuntimeObject
{
	// System.String Meta.WitAi.CallbackHandlers.ValuePathMatcher::path
	String_t* ___path_0;
	// Meta.WitAi.Data.WitValue Meta.WitAi.CallbackHandlers.ValuePathMatcher::witValueReference
	WitValue_t62896259CA1F095F305381482D891DC0E1ED1092* ___witValueReference_1;
	// System.Boolean Meta.WitAi.CallbackHandlers.ValuePathMatcher::contentRequired
	bool ___contentRequired_2;
	// Meta.WitAi.CallbackHandlers.MatchMethod Meta.WitAi.CallbackHandlers.ValuePathMatcher::matchMethod
	int32_t ___matchMethod_3;
	// Meta.WitAi.CallbackHandlers.ComparisonMethod Meta.WitAi.CallbackHandlers.ValuePathMatcher::comparisonMethod
	int32_t ___comparisonMethod_4;
	// System.String Meta.WitAi.CallbackHandlers.ValuePathMatcher::matchValue
	String_t* ___matchValue_5;
	// System.Double Meta.WitAi.CallbackHandlers.ValuePathMatcher::floatingPointComparisonTolerance
	double ___floatingPointComparisonTolerance_6;
	// System.Boolean Meta.WitAi.CallbackHandlers.ValuePathMatcher::allowConfidenceOverlap
	bool ___allowConfidenceOverlap_7;
	// Meta.WitAi.CallbackHandlers.ConfidenceRange[] Meta.WitAi.CallbackHandlers.ValuePathMatcher::confidenceRanges
	ConfidenceRangeU5BU5D_t436B72D1C2A21AE91F57767E7CCA104C79700583* ___confidenceRanges_8;
	// Meta.WitAi.WitResponseReference Meta.WitAi.CallbackHandlers.ValuePathMatcher::pathReference
	WitResponseReference_t7B74D84BF98481046E19F0CE0EB5A3F4203D2581* ___pathReference_9;
	// Meta.WitAi.WitResponseReference Meta.WitAi.CallbackHandlers.ValuePathMatcher::confidencePathReference
	WitResponseReference_t7B74D84BF98481046E19F0CE0EB5A3F4203D2581* ___confidencePathReference_10;
};

// System.ValueType
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F  : public RuntimeObject
{
};
// Native definition for P/Invoke marshalling of System.ValueType
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.ValueType
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F_marshaled_com
{
};

// Meta.WitAi.Requests.VoiceServiceRequestOptions
struct VoiceServiceRequestOptions_tBB80C39F5D734638F03442F09F4F106BD5F20EE4  : public RuntimeObject
{
	// System.String Meta.WitAi.Requests.VoiceServiceRequestOptions::<RequestId>k__BackingField
	String_t* ___U3CRequestIdU3Ek__BackingField_0;
	// System.Collections.Generic.Dictionary`2<System.String,System.String> Meta.WitAi.Requests.VoiceServiceRequestOptions::<QueryParams>k__BackingField
	Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* ___U3CQueryParamsU3Ek__BackingField_1;
	// System.String Meta.WitAi.Requests.VoiceServiceRequestOptions::<Text>k__BackingField
	String_t* ___U3CTextU3Ek__BackingField_2;
	// System.Single Meta.WitAi.Requests.VoiceServiceRequestOptions::<AudioThreshold>k__BackingField
	float ___U3CAudioThresholdU3Ek__BackingField_3;
};

// Meta.WitAi.Data.VoiceSession
struct VoiceSession_t375D68D23448E9C51C8E4CE1972477813E92E68B  : public RuntimeObject
{
	// Meta.WitAi.VoiceService Meta.WitAi.Data.VoiceSession::service
	VoiceService_t601CB0E6879961EC1F8179A8E20EB9DD7AF6A82E* ___service_0;
	// Meta.WitAi.Json.WitResponseNode Meta.WitAi.Data.VoiceSession::response
	WitResponseNode_t1BFF810F15B21416F5F6D0A1CAAF03CEF942038C* ___response_1;
	// System.Boolean Meta.WitAi.Data.VoiceSession::validResponse
	bool ___validResponse_2;
};

// Meta.WitAi.Data.Entities.WitDynamicEntities
struct WitDynamicEntities_t122029C03796D5F75B696CA70D8083DA16E33E38  : public RuntimeObject
{
	// System.Collections.Generic.List`1<Meta.WitAi.Data.Entities.WitDynamicEntity> Meta.WitAi.Data.Entities.WitDynamicEntities::entities
	List_1_t6D090AF9EB273D470FE30798680167DEBB0CC11B* ___entities_0;
};

// Meta.WitAi.Data.Entities.WitDynamicEntity
struct WitDynamicEntity_tE0824DEF90E6E8AA7D10CC0A6892B4C1018DE2B4  : public RuntimeObject
{
	// System.String Meta.WitAi.Data.Entities.WitDynamicEntity::entity
	String_t* ___entity_0;
	// System.Collections.Generic.List`1<Meta.WitAi.Data.Info.WitEntityKeywordInfo> Meta.WitAi.Data.Entities.WitDynamicEntity::keywords
	List_1_t4F3133982BFC53A2508E8212590377CE60E9596C* ___keywords_1;
};

// Meta.WitAi.Configuration.WitEndpointConfig
struct WitEndpointConfig_t7CCDA7CBBF1FDD2A7779DDF6745BAED47E69BB1D  : public RuntimeObject
{
	// System.String Meta.WitAi.Configuration.WitEndpointConfig::_uriScheme
	String_t* ____uriScheme_0;
	// System.String Meta.WitAi.Configuration.WitEndpointConfig::_authority
	String_t* ____authority_1;
	// System.Int32 Meta.WitAi.Configuration.WitEndpointConfig::_port
	int32_t ____port_2;
	// System.String Meta.WitAi.Configuration.WitEndpointConfig::_witApiVersion
	String_t* ____witApiVersion_3;
	// System.String Meta.WitAi.Configuration.WitEndpointConfig::_message
	String_t* ____message_4;
	// System.String Meta.WitAi.Configuration.WitEndpointConfig::_speech
	String_t* ____speech_5;
	// System.String Meta.WitAi.Configuration.WitEndpointConfig::_dictation
	String_t* ____dictation_6;
	// System.String Meta.WitAi.Configuration.WitEndpointConfig::_synthesize
	String_t* ____synthesize_7;
	// System.String Meta.WitAi.Configuration.WitEndpointConfig::_event
	String_t* ____event_8;
	// System.String Meta.WitAi.Configuration.WitEndpointConfig::_converse
	String_t* ____converse_9;
};

struct WitEndpointConfig_t7CCDA7CBBF1FDD2A7779DDF6745BAED47E69BB1D_StaticFields
{
	// Meta.WitAi.Configuration.WitEndpointConfig Meta.WitAi.Configuration.WitEndpointConfig::defaultEndpointConfig
	WitEndpointConfig_t7CCDA7CBBF1FDD2A7779DDF6745BAED47E69BB1D* ___defaultEndpointConfig_10;
};

// Meta.WitAi.Data.Intents.WitIntentData
struct WitIntentData_tAEC870A54A863E27A1FDC98AE01CA9C99F22F515  : public RuntimeObject
{
	// Meta.WitAi.Json.WitResponseNode Meta.WitAi.Data.Intents.WitIntentData::responseNode
	WitResponseNode_t1BFF810F15B21416F5F6D0A1CAAF03CEF942038C* ___responseNode_0;
	// System.String Meta.WitAi.Data.Intents.WitIntentData::id
	String_t* ___id_1;
	// System.String Meta.WitAi.Data.Intents.WitIntentData::name
	String_t* ___name_2;
	// System.Single Meta.WitAi.Data.Intents.WitIntentData::confidence
	float ___confidence_3;
};

// Meta.WitAi.Json.WitResponseNode
struct WitResponseNode_t1BFF810F15B21416F5F6D0A1CAAF03CEF942038C  : public RuntimeObject
{
};

// Meta.WitAi.WitResponseReference
struct WitResponseReference_t7B74D84BF98481046E19F0CE0EB5A3F4203D2581  : public RuntimeObject
{
	// Meta.WitAi.WitResponseReference Meta.WitAi.WitResponseReference::child
	WitResponseReference_t7B74D84BF98481046E19F0CE0EB5A3F4203D2581* ___child_0;
	// System.String Meta.WitAi.WitResponseReference::path
	String_t* ___path_1;
};

// Meta.WitAi.Configuration.WitRuntimeConfiguration
struct WitRuntimeConfiguration_t9724E21E35E3E1ABB5F0B4ECD5CC8F325CA1CC05  : public RuntimeObject
{
	// Meta.WitAi.Data.Configuration.WitConfiguration Meta.WitAi.Configuration.WitRuntimeConfiguration::witConfiguration
	WitConfiguration_t85BCD6C826D35078E90334092184A53D1B69C72E* ___witConfiguration_0;
	// System.Single Meta.WitAi.Configuration.WitRuntimeConfiguration::minKeepAliveVolume
	float ___minKeepAliveVolume_1;
	// System.Single Meta.WitAi.Configuration.WitRuntimeConfiguration::minKeepAliveTimeInSeconds
	float ___minKeepAliveTimeInSeconds_2;
	// System.Single Meta.WitAi.Configuration.WitRuntimeConfiguration::minTranscriptionKeepAliveTimeInSeconds
	float ___minTranscriptionKeepAliveTimeInSeconds_3;
	// System.Single Meta.WitAi.Configuration.WitRuntimeConfiguration::maxRecordingTime
	float ___maxRecordingTime_4;
	// System.Single Meta.WitAi.Configuration.WitRuntimeConfiguration::soundWakeThreshold
	float ___soundWakeThreshold_5;
	// System.Int32 Meta.WitAi.Configuration.WitRuntimeConfiguration::sampleLengthInMs
	int32_t ___sampleLengthInMs_6;
	// System.Single Meta.WitAi.Configuration.WitRuntimeConfiguration::micBufferLengthInSeconds
	float ___micBufferLengthInSeconds_7;
	// System.Int32 Meta.WitAi.Configuration.WitRuntimeConfiguration::maxConcurrentRequests
	int32_t ___maxConcurrentRequests_8;
	// System.Boolean Meta.WitAi.Configuration.WitRuntimeConfiguration::sendAudioToWit
	bool ___sendAudioToWit_9;
	// Meta.WitAi.Interfaces.CustomTranscriptionProvider Meta.WitAi.Configuration.WitRuntimeConfiguration::customTranscriptionProvider
	CustomTranscriptionProvider_tC6EABF251A11EFEBE5A8AD8D77CEBF14FB1009C5* ___customTranscriptionProvider_10;
	// System.Boolean Meta.WitAi.Configuration.WitRuntimeConfiguration::alwaysRecord
	bool ___alwaysRecord_11;
	// System.Single Meta.WitAi.Configuration.WitRuntimeConfiguration::preferredActivationOffset
	float ___preferredActivationOffset_12;
};

// UnityEngine.YieldInstruction
struct YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D  : public RuntimeObject
{
};
// Native definition for P/Invoke marshalling of UnityEngine.YieldInstruction
struct YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D_marshaled_pinvoke
{
};
// Native definition for COM marshalling of UnityEngine.YieldInstruction
struct YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D_marshaled_com
{
};

// Meta.WitAi.Data.AudioBuffer/<WaitForMicToStart>d__30
struct U3CWaitForMicToStartU3Ed__30_tA981E845AE3F32AC0CB036E88C2CAA3FFBE51577  : public RuntimeObject
{
	// System.Int32 Meta.WitAi.Data.AudioBuffer/<WaitForMicToStart>d__30::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object Meta.WitAi.Data.AudioBuffer/<WaitForMicToStart>d__30::<>2__current
	RuntimeObject* ___U3CU3E2__current_1;
	// UnityEngine.Component Meta.WitAi.Data.AudioBuffer/<WaitForMicToStart>d__30::component
	Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* ___component_2;
	// Meta.WitAi.Data.AudioBuffer Meta.WitAi.Data.AudioBuffer/<WaitForMicToStart>d__30::<>4__this
	AudioBuffer_t8F78C90BB0306EE2F5C4787B5D6ACF16EEF33E72* ___U3CU3E4__this_3;
	// Meta.WitAi.IVoiceEventProvider Meta.WitAi.Data.AudioBuffer/<WaitForMicToStart>d__30::<v>5__1
	RuntimeObject* ___U3CvU3E5__1_4;
};

// Meta.WitAi.Events.SpeechEvents/<>c
struct U3CU3Ec_t7AEAA449DBB19647334E677C7ED6C2EDDC69BB9B  : public RuntimeObject
{
};

struct U3CU3Ec_t7AEAA449DBB19647334E677C7ED6C2EDDC69BB9B_StaticFields
{
	// Meta.WitAi.Events.SpeechEvents/<>c Meta.WitAi.Events.SpeechEvents/<>c::<>9
	U3CU3Ec_t7AEAA449DBB19647334E677C7ED6C2EDDC69BB9B* ___U3CU3E9_0;
	// System.Func`2<Meta.WitAi.Events.SpeechEvents,UnityEngine.Events.UnityEvent`1<Meta.WitAi.Configuration.WitRequestOptions>> Meta.WitAi.Events.SpeechEvents/<>c::<>9__85_0
	Func_2_tCD773FD80F11C1399B4604D1EB19BB7436356388* ___U3CU3E9__85_0_1;
	// System.Func`2<Meta.WitAi.Events.SpeechEvents,UnityEngine.Events.UnityEvent`1<Meta.WitAi.Requests.VoiceServiceRequest>> Meta.WitAi.Events.SpeechEvents/<>c::<>9__85_1
	Func_2_tD24D6BC507F5AA415E63472DF1247E49582D7A1F* ___U3CU3E9__85_1_2;
	// System.Func`2<Meta.WitAi.Events.SpeechEvents,UnityEngine.Events.UnityEvent`1<Meta.WitAi.WitRequest>> Meta.WitAi.Events.SpeechEvents/<>c::<>9__85_2
	Func_2_tC95346D56902FBF6D1621BDE4F2039F61F917F52* ___U3CU3E9__85_2_3;
	// System.Func`2<Meta.WitAi.Events.SpeechEvents,UnityEngine.Events.UnityEvent`1<Meta.WitAi.Requests.VoiceServiceRequest>> Meta.WitAi.Events.SpeechEvents/<>c::<>9__85_3
	Func_2_tD24D6BC507F5AA415E63472DF1247E49582D7A1F* ___U3CU3E9__85_3_4;
	// System.Func`2<Meta.WitAi.Events.SpeechEvents,UnityEngine.Events.UnityEvent> Meta.WitAi.Events.SpeechEvents/<>c::<>9__85_4
	Func_2_tDCA29CF738B0C5F51018D3D7FCBCC1BCF5EF829A* ___U3CU3E9__85_4_5;
	// System.Func`2<Meta.WitAi.Events.SpeechEvents,UnityEngine.Events.UnityEvent> Meta.WitAi.Events.SpeechEvents/<>c::<>9__85_5
	Func_2_tDCA29CF738B0C5F51018D3D7FCBCC1BCF5EF829A* ___U3CU3E9__85_5_6;
	// System.Func`2<Meta.WitAi.Events.SpeechEvents,UnityEngine.Events.UnityEvent> Meta.WitAi.Events.SpeechEvents/<>c::<>9__85_6
	Func_2_tDCA29CF738B0C5F51018D3D7FCBCC1BCF5EF829A* ___U3CU3E9__85_6_7;
	// System.Func`2<Meta.WitAi.Events.SpeechEvents,UnityEngine.Events.UnityEvent> Meta.WitAi.Events.SpeechEvents/<>c::<>9__85_7
	Func_2_tDCA29CF738B0C5F51018D3D7FCBCC1BCF5EF829A* ___U3CU3E9__85_7_8;
	// System.Func`2<Meta.WitAi.Events.SpeechEvents,UnityEngine.Events.UnityEvent> Meta.WitAi.Events.SpeechEvents/<>c::<>9__85_8
	Func_2_tDCA29CF738B0C5F51018D3D7FCBCC1BCF5EF829A* ___U3CU3E9__85_8_9;
	// System.Func`2<Meta.WitAi.Events.SpeechEvents,UnityEngine.Events.UnityEvent> Meta.WitAi.Events.SpeechEvents/<>c::<>9__85_9
	Func_2_tDCA29CF738B0C5F51018D3D7FCBCC1BCF5EF829A* ___U3CU3E9__85_9_10;
	// System.Func`2<Meta.WitAi.Events.SpeechEvents,UnityEngine.Events.UnityEvent`1<System.String>> Meta.WitAi.Events.SpeechEvents/<>c::<>9__85_10
	Func_2_tD49A9546076918B07593787D23EE9245E84C1AD0* ___U3CU3E9__85_10_11;
	// System.Func`2<Meta.WitAi.Events.SpeechEvents,UnityEngine.Events.UnityEvent`1<Meta.WitAi.Json.WitResponseNode>> Meta.WitAi.Events.SpeechEvents/<>c::<>9__85_11
	Func_2_t5DC062A102C3300E4BF548012A747BB3E0A5BA57* ___U3CU3E9__85_11_12;
	// System.Func`2<Meta.WitAi.Events.SpeechEvents,UnityEngine.Events.UnityEvent`1<Meta.WitAi.Json.WitResponseNode>> Meta.WitAi.Events.SpeechEvents/<>c::<>9__85_12
	Func_2_t5DC062A102C3300E4BF548012A747BB3E0A5BA57* ___U3CU3E9__85_12_13;
	// System.Func`2<Meta.WitAi.Events.SpeechEvents,UnityEngine.Events.UnityEvent`2<System.String,System.String>> Meta.WitAi.Events.SpeechEvents/<>c::<>9__85_13
	Func_2_tB18F1F7AE9EDB9705E036A284B88C5F3613A7F78* ___U3CU3E9__85_13_14;
	// System.Func`2<Meta.WitAi.Events.SpeechEvents,UnityEngine.Events.UnityEvent> Meta.WitAi.Events.SpeechEvents/<>c::<>9__85_14
	Func_2_tDCA29CF738B0C5F51018D3D7FCBCC1BCF5EF829A* ___U3CU3E9__85_14_15;
	// System.Func`2<Meta.WitAi.Events.SpeechEvents,UnityEngine.Events.UnityEvent`1<Meta.WitAi.Requests.VoiceServiceRequest>> Meta.WitAi.Events.SpeechEvents/<>c::<>9__85_15
	Func_2_tD24D6BC507F5AA415E63472DF1247E49582D7A1F* ___U3CU3E9__85_15_16;
	// System.Func`2<Meta.WitAi.Events.SpeechEvents,UnityEngine.Events.UnityEvent> Meta.WitAi.Events.SpeechEvents/<>c::<>9__85_16
	Func_2_tDCA29CF738B0C5F51018D3D7FCBCC1BCF5EF829A* ___U3CU3E9__85_16_17;
	// System.Func`2<Meta.WitAi.Events.SpeechEvents,UnityEngine.Events.UnityEvent> Meta.WitAi.Events.SpeechEvents/<>c::<>9__85_17
	Func_2_tDCA29CF738B0C5F51018D3D7FCBCC1BCF5EF829A* ___U3CU3E9__85_17_18;
	// System.Func`2<Meta.WitAi.Events.SpeechEvents,UnityEngine.Events.UnityEvent`1<System.Single>> Meta.WitAi.Events.SpeechEvents/<>c::<>9__85_18
	Func_2_t0F30FACC4CABFFD27DDEBE31FB321AA523A06B7D* ___U3CU3E9__85_18_19;
	// System.Func`2<Meta.WitAi.Events.SpeechEvents,UnityEngine.Events.UnityEvent`1<System.String>> Meta.WitAi.Events.SpeechEvents/<>c::<>9__85_19
	Func_2_tD49A9546076918B07593787D23EE9245E84C1AD0* ___U3CU3E9__85_19_20;
	// System.Func`2<Meta.WitAi.Events.SpeechEvents,UnityEngine.Events.UnityEvent`1<System.String>> Meta.WitAi.Events.SpeechEvents/<>c::<>9__85_20
	Func_2_tD49A9546076918B07593787D23EE9245E84C1AD0* ___U3CU3E9__85_20_21;
};

// Meta.WitAi.Events.SpeechEvents/<>c__DisplayClass86_0
struct U3CU3Ec__DisplayClass86_0_t966EF3616DEAE30A97398BD0490A7BFF1725D638  : public RuntimeObject
{
	// Meta.WitAi.Events.SpeechEvents Meta.WitAi.Events.SpeechEvents/<>c__DisplayClass86_0::<>4__this
	SpeechEvents_tB51C31627EF79AB5734270C1558A6C6F67A5040E* ___U3CU3E4__this_0;
	// System.Func`2<Meta.WitAi.Events.SpeechEvents,UnityEngine.Events.UnityEvent> Meta.WitAi.Events.SpeechEvents/<>c__DisplayClass86_0::getEvent
	Func_2_tDCA29CF738B0C5F51018D3D7FCBCC1BCF5EF829A* ___getEvent_1;
};

// Meta.WitAi.Requests.VoiceServiceRequestOptions/QueryParam
struct QueryParam_t9D43428FEE0F1D498A2606403DF54F2B48B0C76F  : public RuntimeObject
{
	// System.String Meta.WitAi.Requests.VoiceServiceRequestOptions/QueryParam::key
	String_t* ___key_0;
	// System.String Meta.WitAi.Requests.VoiceServiceRequestOptions/QueryParam::value
	String_t* ___value_1;
};

// Meta.WitAi.Data.Entities.WitDynamicEntities/<>c__DisplayClass12_0
struct U3CU3Ec__DisplayClass12_0_t7BAF63290242ED2FD3A4364665FEACF638C4DE20  : public RuntimeObject
{
	// Meta.WitAi.Data.Entities.WitDynamicEntity Meta.WitAi.Data.Entities.WitDynamicEntities/<>c__DisplayClass12_0::dynamicEntity
	WitDynamicEntity_tE0824DEF90E6E8AA7D10CC0A6892B4C1018DE2B4* ___dynamicEntity_0;
};

// Meta.WitAi.Data.Entities.WitDynamicEntities/<>c__DisplayClass14_0
struct U3CU3Ec__DisplayClass14_0_tA27EEDC5333187C3AC128BA4030FEE5B3D6DE503  : public RuntimeObject
{
	// System.String Meta.WitAi.Data.Entities.WitDynamicEntities/<>c__DisplayClass14_0::entityName
	String_t* ___entityName_0;
};

// Meta.WitAi.Data.Entities.WitDynamicEntities/<>c__DisplayClass15_0
struct U3CU3Ec__DisplayClass15_0_tACB191291E61806F1F8880014C1B1F30240781FC  : public RuntimeObject
{
	// System.String Meta.WitAi.Data.Entities.WitDynamicEntities/<>c__DisplayClass15_0::entityName
	String_t* ___entityName_0;
};

// System.Collections.Generic.HashSet`1/Enumerator<System.Object>
struct Enumerator_t72556E98D7DDBE118A973D782D523D15A96461C8 
{
	// System.Collections.Generic.HashSet`1<T> System.Collections.Generic.HashSet`1/Enumerator::_set
	HashSet_1_t2F33BEB06EEA4A872E2FAF464382422AA39AE885* ____set_0;
	// System.Int32 System.Collections.Generic.HashSet`1/Enumerator::_index
	int32_t ____index_1;
	// System.Int32 System.Collections.Generic.HashSet`1/Enumerator::_version
	int32_t ____version_2;
	// T System.Collections.Generic.HashSet`1/Enumerator::_current
	RuntimeObject* ____current_3;
};

// System.Collections.Generic.List`1/Enumerator<System.Object>
struct Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A 
{
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1/Enumerator::_list
	List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* ____list_0;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::_index
	int32_t ____index_1;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::_version
	int32_t ____version_2;
	// T System.Collections.Generic.List`1/Enumerator::_current
	RuntimeObject* ____current_3;
};

// System.Collections.Generic.HashSet`1/Enumerator<Meta.WitAi.Events.SpeechEvents>
struct Enumerator_t687446157680B89D4DF7AA9AB619F441A3B6E2EB 
{
	// System.Collections.Generic.HashSet`1<T> System.Collections.Generic.HashSet`1/Enumerator::_set
	HashSet_1_tA2DD82C656859A8F953FE80E0E7CFAA242AFFEB7* ____set_0;
	// System.Int32 System.Collections.Generic.HashSet`1/Enumerator::_index
	int32_t ____index_1;
	// System.Int32 System.Collections.Generic.HashSet`1/Enumerator::_version
	int32_t ____version_2;
	// T System.Collections.Generic.HashSet`1/Enumerator::_current
	SpeechEvents_tB51C31627EF79AB5734270C1558A6C6F67A5040E* ____current_3;
};

// System.Collections.Generic.List`1/Enumerator<Meta.WitAi.Data.Entities.WitDynamicEntity>
struct Enumerator_t6BA07F015EFBC8AC247FAA712168596523D25994 
{
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1/Enumerator::_list
	List_1_t6D090AF9EB273D470FE30798680167DEBB0CC11B* ____list_0;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::_index
	int32_t ____index_1;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::_version
	int32_t ____version_2;
	// T System.Collections.Generic.List`1/Enumerator::_current
	WitDynamicEntity_tE0824DEF90E6E8AA7D10CC0A6892B4C1018DE2B4* ____current_3;
};

// System.Collections.Generic.Dictionary`2/KeyCollection/Enumerator<System.Object,System.Object>
struct Enumerator_t65CC956745B1180C04CE6C6910FB27C5F32BB9FF 
{
	// System.Collections.Generic.Dictionary`2<TKey,TValue> System.Collections.Generic.Dictionary`2/KeyCollection/Enumerator::_dictionary
	Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* ____dictionary_0;
	// System.Int32 System.Collections.Generic.Dictionary`2/KeyCollection/Enumerator::_index
	int32_t ____index_1;
	// System.Int32 System.Collections.Generic.Dictionary`2/KeyCollection/Enumerator::_version
	int32_t ____version_2;
	// TKey System.Collections.Generic.Dictionary`2/KeyCollection/Enumerator::_currentKey
	RuntimeObject* ____currentKey_3;
};

// System.Collections.Generic.Dictionary`2/KeyCollection/Enumerator<System.String,System.String>
struct Enumerator_t84BD4D6D35ABE5554A430614BF2F7588BC152867 
{
	// System.Collections.Generic.Dictionary`2<TKey,TValue> System.Collections.Generic.Dictionary`2/KeyCollection/Enumerator::_dictionary
	Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* ____dictionary_0;
	// System.Int32 System.Collections.Generic.Dictionary`2/KeyCollection/Enumerator::_index
	int32_t ____index_1;
	// System.Int32 System.Collections.Generic.Dictionary`2/KeyCollection/Enumerator::_version
	int32_t ____version_2;
	// TKey System.Collections.Generic.Dictionary`2/KeyCollection/Enumerator::_currentKey
	String_t* ____currentKey_3;
};

// System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>
struct KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230 
{
	// TKey System.Collections.Generic.KeyValuePair`2::key
	RuntimeObject* ___key_0;
	// TValue System.Collections.Generic.KeyValuePair`2::value
	RuntimeObject* ___value_1;
};

// System.Collections.Generic.KeyValuePair`2<System.String,System.Collections.Generic.List`1<System.String>>
struct KeyValuePair_2_tF2D5A036C624EBE9BEAB8512F34B28AB195C5D89 
{
	// TKey System.Collections.Generic.KeyValuePair`2::key
	String_t* ___key_0;
	// TValue System.Collections.Generic.KeyValuePair`2::value
	List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* ___value_1;
};

// Meta.Voice.TranscriptionRequestEvents`1<Meta.WitAi.Requests.VoiceServiceRequestEvent>
struct TranscriptionRequestEvents_1_t9C76CCA9D6509EEDB9B9FED9016A35DBE9D3E585  : public VoiceRequestEvents_1_t3D911949457333BFF342578314A064DFD33DB981
{
	// TUnityEvent Meta.Voice.TranscriptionRequestEvents`1::_onAudioInputStateChange
	VoiceServiceRequestEvent_t91B4A1DF3C1AC52F52DCD883797AC599E47B4601* ____onAudioInputStateChange_9;
	// TUnityEvent Meta.Voice.TranscriptionRequestEvents`1::_onAudioActivation
	VoiceServiceRequestEvent_t91B4A1DF3C1AC52F52DCD883797AC599E47B4601* ____onAudioActivation_10;
	// TUnityEvent Meta.Voice.TranscriptionRequestEvents`1::_onStartListening
	VoiceServiceRequestEvent_t91B4A1DF3C1AC52F52DCD883797AC599E47B4601* ____onStartListening_11;
	// TUnityEvent Meta.Voice.TranscriptionRequestEvents`1::_onAudioDeactivation
	VoiceServiceRequestEvent_t91B4A1DF3C1AC52F52DCD883797AC599E47B4601* ____onAudioDeactivation_12;
	// TUnityEvent Meta.Voice.TranscriptionRequestEvents`1::_onStopListening
	VoiceServiceRequestEvent_t91B4A1DF3C1AC52F52DCD883797AC599E47B4601* ____onStopListening_13;
	// Meta.Voice.TranscriptionRequestEvent Meta.Voice.TranscriptionRequestEvents`1::_onPartialTranscription
	TranscriptionRequestEvent_tE1BC4A6E630A2C061ECB1BA9DB4B57BD0545E5DE* ____onPartialTranscription_14;
	// Meta.Voice.TranscriptionRequestEvent Meta.Voice.TranscriptionRequestEvents`1::_onFullTranscription
	TranscriptionRequestEvent_tE1BC4A6E630A2C061ECB1BA9DB4B57BD0545E5DE* ____onFullTranscription_15;
};

// Meta.Voice.TranscriptionRequest`4<System.Object,System.Object,System.Object,System.Object>
struct TranscriptionRequest_4_t83C1BC70A4F9F446C0915970241859EDE6013F0A  : public VoiceRequest_4_t6799EEA3F92FAD2873D8E4F7650667AA90E2F95B
{
	// Meta.Voice.VoiceAudioInputState Meta.Voice.TranscriptionRequest`4::<AudioInputState>k__BackingField
	int32_t ___U3CAudioInputStateU3Ek__BackingField_7;
};

// Meta.Voice.TranscriptionRequest`4<Meta.WitAi.Requests.VoiceServiceRequestEvent,Meta.WitAi.Configuration.WitRequestOptions,Meta.WitAi.Requests.VoiceServiceRequestEvents,Meta.WitAi.Requests.VoiceServiceRequestResults>
struct TranscriptionRequest_4_tF432B63E335559CC13F9AF9EFAE88109A3CA3963  : public VoiceRequest_4_t635CDB7E63C5322E9D11D83B63A401260F8BAA8C
{
	// Meta.Voice.VoiceAudioInputState Meta.Voice.TranscriptionRequest`4::<AudioInputState>k__BackingField
	int32_t ___U3CAudioInputStateU3Ek__BackingField_7;
};

// UnityEngine.Events.UnityEvent`1<System.String[]>
struct UnityEvent_1_t477222AA4CE1BE0F15900D352218F0A842BF5EFD  : public UnityEventBase_t4968A4C72559F35C0923E4BD9C042C3A842E1DB8
{
	// System.Object[] UnityEngine.Events.UnityEvent`1::m_InvokeArray
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___m_InvokeArray_3;
};

// UnityEngine.Events.UnityEvent`1<System.Single>
struct UnityEvent_1_tDD811EB8F49CEE97BA6DF59344DFE6C6F42553D4  : public UnityEventBase_t4968A4C72559F35C0923E4BD9C042C3A842E1DB8
{
	// System.Object[] UnityEngine.Events.UnityEvent`1::m_InvokeArray
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___m_InvokeArray_3;
};

// UnityEngine.Events.UnityEvent`1<System.String>
struct UnityEvent_1_tC9859540CF1468306CAB6D758C0A0D95DBCEC257  : public UnityEventBase_t4968A4C72559F35C0923E4BD9C042C3A842E1DB8
{
	// System.Object[] UnityEngine.Events.UnityEvent`1::m_InvokeArray
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___m_InvokeArray_3;
};

// UnityEngine.Events.UnityEvent`1<Meta.WitAi.Requests.VoiceServiceRequest>
struct UnityEvent_1_t2AED438DE5FAF741875343B8663599EC1EC222E2  : public UnityEventBase_t4968A4C72559F35C0923E4BD9C042C3A842E1DB8
{
	// System.Object[] UnityEngine.Events.UnityEvent`1::m_InvokeArray
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___m_InvokeArray_3;
};

// UnityEngine.Events.UnityEvent`1<Meta.WitAi.Data.VoiceSession>
struct UnityEvent_1_t7ED997BF6FDFAAFDDB2D9E2EDE55BE3DF55284AA  : public UnityEventBase_t4968A4C72559F35C0923E4BD9C042C3A842E1DB8
{
	// System.Object[] UnityEngine.Events.UnityEvent`1::m_InvokeArray
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___m_InvokeArray_3;
};

// UnityEngine.Events.UnityEvent`1<Meta.WitAi.WitRequest>
struct UnityEvent_1_tD140963BF887A3E18CDB90439A9DD6FE5438B8B8  : public UnityEventBase_t4968A4C72559F35C0923E4BD9C042C3A842E1DB8
{
	// System.Object[] UnityEngine.Events.UnityEvent`1::m_InvokeArray
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___m_InvokeArray_3;
};

// UnityEngine.Events.UnityEvent`1<Meta.WitAi.Configuration.WitRequestOptions>
struct UnityEvent_1_tB2107CA265B68A4E479CAFA0530DAE8251E03F58  : public UnityEventBase_t4968A4C72559F35C0923E4BD9C042C3A842E1DB8
{
	// System.Object[] UnityEngine.Events.UnityEvent`1::m_InvokeArray
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___m_InvokeArray_3;
};

// UnityEngine.Events.UnityEvent`1<Meta.WitAi.Json.WitResponseClass>
struct UnityEvent_1_t5B716A16BF3DD47CC6FE568AA000E45B91A8B272  : public UnityEventBase_t4968A4C72559F35C0923E4BD9C042C3A842E1DB8
{
	// System.Object[] UnityEngine.Events.UnityEvent`1::m_InvokeArray
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___m_InvokeArray_3;
};

// UnityEngine.Events.UnityEvent`1<Meta.WitAi.Json.WitResponseNode>
struct UnityEvent_1_t3DC4F1FBCED8AF76C18EC16A2B55C43FBAE5E62D  : public UnityEventBase_t4968A4C72559F35C0923E4BD9C042C3A842E1DB8
{
	// System.Object[] UnityEngine.Events.UnityEvent`1::m_InvokeArray
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___m_InvokeArray_3;
};

// UnityEngine.Events.UnityEvent`2<System.Int64,System.Double>
struct UnityEvent_2_t8D8E787461BECB35F2627E8001A36D825CA99A97  : public UnityEventBase_t4968A4C72559F35C0923E4BD9C042C3A842E1DB8
{
	// System.Object[] UnityEngine.Events.UnityEvent`2::m_InvokeArray
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___m_InvokeArray_3;
};

// UnityEngine.Events.UnityEvent`2<System.String,System.String>
struct UnityEvent_2_t71C350611CC2C5B350589972D791938B5D41AB50  : public UnityEventBase_t4968A4C72559F35C0923E4BD9C042C3A842E1DB8
{
	// System.Object[] UnityEngine.Events.UnityEvent`2::m_InvokeArray
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___m_InvokeArray_3;
};

// UnityEngine.Events.UnityEvent`2<Meta.WitAi.Json.WitResponseNode,System.String>
struct UnityEvent_2_tC20F7D1BD03FC3DA58A01B3056D1D0B674961AF9  : public UnityEventBase_t4968A4C72559F35C0923E4BD9C042C3A842E1DB8
{
	// System.Object[] UnityEngine.Events.UnityEvent`2::m_InvokeArray
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___m_InvokeArray_3;
};

// UnityEngine.Events.UnityEvent`3<System.Byte[],System.Int32,System.Int32>
struct UnityEvent_3_tF81A842A1D8D9B002F73DF6003CE7C3ACF40171F  : public UnityEventBase_t4968A4C72559F35C0923E4BD9C042C3A842E1DB8
{
	// System.Object[] UnityEngine.Events.UnityEvent`3::m_InvokeArray
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___m_InvokeArray_3;
};

// System.Boolean
struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22 
{
	// System.Boolean System.Boolean::m_value
	bool ___m_value_0;
};

struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_StaticFields
{
	// System.String System.Boolean::TrueString
	String_t* ___TrueString_5;
	// System.String System.Boolean::FalseString
	String_t* ___FalseString_6;
};

// System.Byte
struct Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3 
{
	// System.Byte System.Byte::m_value
	uint8_t ___m_value_0;
};

// System.Double
struct Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F 
{
	// System.Double System.Double::m_value
	double ___m_value_0;
};

// System.Text.RegularExpressions.Group
struct Group_t26371E9136D6F43782C487B63C67C5FC4F472881  : public Capture_tE11B735186DAFEE5F7A3BF5A739E9CCCE99DC24A
{
	// System.Int32[] System.Text.RegularExpressions.Group::_caps
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____caps_4;
	// System.Int32 System.Text.RegularExpressions.Group::_capcount
	int32_t ____capcount_5;
	// System.Text.RegularExpressions.CaptureCollection System.Text.RegularExpressions.Group::_capcoll
	CaptureCollection_t38405272BD6A6DA77CD51487FD39624C6E95CC93* ____capcoll_6;
	// System.String System.Text.RegularExpressions.Group::<Name>k__BackingField
	String_t* ___U3CNameU3Ek__BackingField_7;
};

struct Group_t26371E9136D6F43782C487B63C67C5FC4F472881_StaticFields
{
	// System.Text.RegularExpressions.Group System.Text.RegularExpressions.Group::s_emptyGroup
	Group_t26371E9136D6F43782C487B63C67C5FC4F472881* ___s_emptyGroup_3;
};

// System.Int16
struct Int16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175 
{
	// System.Int16 System.Int16::m_value
	int16_t ___m_value_0;
};

// System.Int32
struct Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C 
{
	// System.Int32 System.Int32::m_value
	int32_t ___m_value_0;
};

// System.IntPtr
struct IntPtr_t 
{
	// System.Void* System.IntPtr::m_value
	void* ___m_value_0;
};

struct IntPtr_t_StaticFields
{
	// System.IntPtr System.IntPtr::Zero
	intptr_t ___Zero_1;
};

// UnityEngine.PropertyAttribute
struct PropertyAttribute_t5E0CB5A6CDA6E24CBD4FF26DE3B0C29D8BB54BF0  : public Attribute_tFDA8EFEFB0711976D22474794576DAF28F7440AA
{
	// System.Int32 UnityEngine.PropertyAttribute::<order>k__BackingField
	int32_t ___U3CorderU3Ek__BackingField_0;
};

// UnityEngine.SceneManagement.Scene
struct Scene_tA1DC762B79745EB5140F054C884855B922318356 
{
	// System.Int32 UnityEngine.SceneManagement.Scene::m_Handle
	int32_t ___m_Handle_0;
};

// System.Single
struct Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C 
{
	// System.Single System.Single::m_value
	float ___m_value_0;
};

// Meta.WitAi.Events.SpeechEvents
struct SpeechEvents_tB51C31627EF79AB5734270C1558A6C6F67A5040E  : public EventRegistry_t712584F20910AAA2A4A85A34835BC58574C441FE
{
	// Meta.WitAi.Events.WitRequestOptionsEvent Meta.WitAi.Events.SpeechEvents::_onRequestOptionSetup
	WitRequestOptionsEvent_t84FCD56D356445821DECABA3F66CADF6B07ABB1B* ____onRequestOptionSetup_3;
	// Meta.WitAi.Events.VoiceServiceRequestEvent Meta.WitAi.Events.SpeechEvents::_onRequestInitialized
	VoiceServiceRequestEvent_t7340AD8EBA1B3D36E1A95E47C8DBCD954F1DED13* ____onRequestInitialized_4;
	// Meta.WitAi.Events.WitRequestCreatedEvent Meta.WitAi.Events.SpeechEvents::_onRequestCreated
	WitRequestCreatedEvent_t1A01ABB6F9E3C02D0251B5DC9F5B290EDA0E319B* ____onRequestCreated_5;
	// Meta.WitAi.Events.VoiceServiceRequestEvent Meta.WitAi.Events.SpeechEvents::_onSend
	VoiceServiceRequestEvent_t7340AD8EBA1B3D36E1A95E47C8DBCD954F1DED13* ____onSend_6;
	// UnityEngine.Events.UnityEvent Meta.WitAi.Events.SpeechEvents::_onMinimumWakeThresholdHit
	UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* ____onMinimumWakeThresholdHit_8;
	// UnityEngine.Events.UnityEvent Meta.WitAi.Events.SpeechEvents::_onMicDataSent
	UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* ____onMicDataSent_9;
	// UnityEngine.Events.UnityEvent Meta.WitAi.Events.SpeechEvents::_onStoppedListeningDueToDeactivation
	UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* ____onStoppedListeningDueToDeactivation_10;
	// UnityEngine.Events.UnityEvent Meta.WitAi.Events.SpeechEvents::_onStoppedListeningDueToInactivity
	UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* ____onStoppedListeningDueToInactivity_11;
	// UnityEngine.Events.UnityEvent Meta.WitAi.Events.SpeechEvents::_onStoppedListeningDueToTimeout
	UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* ____onStoppedListeningDueToTimeout_12;
	// UnityEngine.Events.UnityEvent Meta.WitAi.Events.SpeechEvents::_onAborting
	UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* ____onAborting_14;
	// UnityEngine.Events.UnityEvent Meta.WitAi.Events.SpeechEvents::_onAborted
	UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* ____onAborted_15;
	// Meta.WitAi.Events.WitTranscriptionEvent Meta.WitAi.Events.SpeechEvents::_onCanceled
	WitTranscriptionEvent_t51292FC7EB7BAF38C2EC6B57D87724C1BEB3C739* ____onCanceled_16;
	// Meta.WitAi.Events.WitResponseEvent Meta.WitAi.Events.SpeechEvents::_onPartialResponse
	WitResponseEvent_tC85152AAABC87956DF604749EEA671ADAA9EFFDA* ____onPartialResponse_18;
	// Meta.WitAi.Events.WitResponseEvent Meta.WitAi.Events.SpeechEvents::_onResponse
	WitResponseEvent_tC85152AAABC87956DF604749EEA671ADAA9EFFDA* ____onResponse_19;
	// Meta.WitAi.Events.WitErrorEvent Meta.WitAi.Events.SpeechEvents::_onError
	WitErrorEvent_tF617F56AD9B12E89D73E125B79E441A56067F1B2* ____onError_20;
	// UnityEngine.Events.UnityEvent Meta.WitAi.Events.SpeechEvents::_onRequestCompleted
	UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* ____onRequestCompleted_21;
	// Meta.WitAi.Events.VoiceServiceRequestEvent Meta.WitAi.Events.SpeechEvents::_onComplete
	VoiceServiceRequestEvent_t7340AD8EBA1B3D36E1A95E47C8DBCD954F1DED13* ____onComplete_22;
	// UnityEngine.Events.UnityEvent Meta.WitAi.Events.SpeechEvents::_onStartListening
	UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* ____onStartListening_24;
	// UnityEngine.Events.UnityEvent Meta.WitAi.Events.SpeechEvents::_onStoppedListening
	UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* ____onStoppedListening_25;
	// Meta.WitAi.Events.WitMicLevelChangedEvent Meta.WitAi.Events.SpeechEvents::_onMicLevelChanged
	WitMicLevelChangedEvent_tA9B2889CB33EAA09656739F26AA70252ED15DEF7* ____onMicLevelChanged_26;
	// Meta.WitAi.Events.WitTranscriptionEvent Meta.WitAi.Events.SpeechEvents::_onPartialTranscription
	WitTranscriptionEvent_t51292FC7EB7BAF38C2EC6B57D87724C1BEB3C739* ____onPartialTranscription_28;
	// Meta.WitAi.Events.WitTranscriptionEvent Meta.WitAi.Events.SpeechEvents::_onFullTranscription
	WitTranscriptionEvent_t51292FC7EB7BAF38C2EC6B57D87724C1BEB3C739* ____onFullTranscription_29;
	// System.Collections.Generic.HashSet`1<Meta.WitAi.Events.SpeechEvents> Meta.WitAi.Events.SpeechEvents::_listeners
	HashSet_1_tA2DD82C656859A8F953FE80E0E7CFAA242AFFEB7* ____listeners_30;
};

// System.TimeSpan
struct TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A 
{
	// System.Int64 System.TimeSpan::_ticks
	int64_t ____ticks_22;
};

struct TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A_StaticFields
{
	// System.TimeSpan System.TimeSpan::Zero
	TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A ___Zero_19;
	// System.TimeSpan System.TimeSpan::MaxValue
	TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A ___MaxValue_20;
	// System.TimeSpan System.TimeSpan::MinValue
	TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A ___MinValue_21;
};

// UnityEngine.Events.UnityEvent
struct UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977  : public UnityEventBase_t4968A4C72559F35C0923E4BD9C042C3A842E1DB8
{
	// System.Object[] UnityEngine.Events.UnityEvent::m_InvokeArray
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___m_InvokeArray_3;
};

// UnityEngine.Vector2
struct Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 
{
	// System.Single UnityEngine.Vector2::x
	float ___x_0;
	// System.Single UnityEngine.Vector2::y
	float ___y_1;
};

struct Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_StaticFields
{
	// UnityEngine.Vector2 UnityEngine.Vector2::zeroVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___zeroVector_2;
	// UnityEngine.Vector2 UnityEngine.Vector2::oneVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___oneVector_3;
	// UnityEngine.Vector2 UnityEngine.Vector2::upVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___upVector_4;
	// UnityEngine.Vector2 UnityEngine.Vector2::downVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___downVector_5;
	// UnityEngine.Vector2 UnityEngine.Vector2::leftVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___leftVector_6;
	// UnityEngine.Vector2 UnityEngine.Vector2::rightVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___rightVector_7;
	// UnityEngine.Vector2 UnityEngine.Vector2::positiveInfinityVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___positiveInfinityVector_8;
	// UnityEngine.Vector2 UnityEngine.Vector2::negativeInfinityVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___negativeInfinityVector_9;
};

// System.Void
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

// UnityEngine.WaitUntil
struct WaitUntil_tA1CD487C5811E7C1F8C4ADA85DF5F4EFDC1D41BD  : public CustomYieldInstruction_t6B81A50D5D210C1ACAAE247FB53B65CDFFEB7617
{
	// System.Func`1<System.Boolean> UnityEngine.WaitUntil::m_Predicate
	Func_1_t2BE7F58348C9CC544A8973B3A9E55541DE43C457* ___m_Predicate_0;
};

// Meta.WitAi.Data.Info.WitAppInfo
struct WitAppInfo_t172D41FCA64A8915FB21F90F2FD0A7639EB0C8D8 
{
	// System.String Meta.WitAi.Data.Info.WitAppInfo::name
	String_t* ___name_0;
	// System.String Meta.WitAi.Data.Info.WitAppInfo::id
	String_t* ___id_1;
	// System.String Meta.WitAi.Data.Info.WitAppInfo::lang
	String_t* ___lang_2;
	// System.Boolean Meta.WitAi.Data.Info.WitAppInfo::isPrivate
	bool ___isPrivate_3;
	// System.String Meta.WitAi.Data.Info.WitAppInfo::createdAt
	String_t* ___createdAt_4;
	// Meta.WitAi.Data.Info.WitAppTrainingStatus Meta.WitAi.Data.Info.WitAppInfo::trainingStatus
	int32_t ___trainingStatus_5;
	// System.Int32 Meta.WitAi.Data.Info.WitAppInfo::lastTrainDuration
	int32_t ___lastTrainDuration_6;
	// System.String Meta.WitAi.Data.Info.WitAppInfo::lastTrainedAt
	String_t* ___lastTrainedAt_7;
	// System.String Meta.WitAi.Data.Info.WitAppInfo::nextTrainAt
	String_t* ___nextTrainAt_8;
	// Meta.WitAi.Data.Info.WitIntentInfo[] Meta.WitAi.Data.Info.WitAppInfo::intents
	WitIntentInfoU5BU5D_t95D033231DE201B282D0C427BFF8E50F9C51D086* ___intents_9;
	// Meta.WitAi.Data.Info.WitEntityInfo[] Meta.WitAi.Data.Info.WitAppInfo::entities
	WitEntityInfoU5BU5D_tB0A63D23CECFD14157CB1D03E656D3CFCCFF3499* ___entities_10;
	// Meta.WitAi.Data.Info.WitTraitInfo[] Meta.WitAi.Data.Info.WitAppInfo::traits
	WitTraitInfoU5BU5D_tB790BA9F9C3B601ED9CD568A23C330D1EDF596D2* ___traits_11;
	// Meta.WitAi.Data.Info.WitVersionTagInfo[] Meta.WitAi.Data.Info.WitAppInfo::versionTags
	WitVersionTagInfoU5BU5D_t84FAB6A032C1C9E9B3BF7E4C95D3A8C84D26C637* ___versionTags_12;
	// Meta.WitAi.Data.Info.WitVoiceInfo[] Meta.WitAi.Data.Info.WitAppInfo::voices
	WitVoiceInfoU5BU5D_tDC3B4221779AC23CB86E3690D68414110CB627EC* ___voices_13;
};
// Native definition for P/Invoke marshalling of Meta.WitAi.Data.Info.WitAppInfo
struct WitAppInfo_t172D41FCA64A8915FB21F90F2FD0A7639EB0C8D8_marshaled_pinvoke
{
	char* ___name_0;
	char* ___id_1;
	char* ___lang_2;
	int32_t ___isPrivate_3;
	char* ___createdAt_4;
	int32_t ___trainingStatus_5;
	int32_t ___lastTrainDuration_6;
	char* ___lastTrainedAt_7;
	char* ___nextTrainAt_8;
	WitIntentInfo_tB428004D9EC2F2E6130328B64B9F673EF7ACCA3D_marshaled_pinvoke* ___intents_9;
	WitEntityInfo_t9715AD316420F516F56031342F3AC0E665C2CB62_marshaled_pinvoke* ___entities_10;
	WitTraitInfoU5BU5D_tB790BA9F9C3B601ED9CD568A23C330D1EDF596D2* ___traits_11;
	WitVersionTagInfo_t1FB34DB86D5B5C75148C2961D1405CE4C02E1089_marshaled_pinvoke* ___versionTags_12;
	WitVoiceInfo_t87CF0A90E6DF0CB0CDD2B7F148C2975BFBDB1C6E_marshaled_pinvoke* ___voices_13;
};
// Native definition for COM marshalling of Meta.WitAi.Data.Info.WitAppInfo
struct WitAppInfo_t172D41FCA64A8915FB21F90F2FD0A7639EB0C8D8_marshaled_com
{
	Il2CppChar* ___name_0;
	Il2CppChar* ___id_1;
	Il2CppChar* ___lang_2;
	int32_t ___isPrivate_3;
	Il2CppChar* ___createdAt_4;
	int32_t ___trainingStatus_5;
	int32_t ___lastTrainDuration_6;
	Il2CppChar* ___lastTrainedAt_7;
	Il2CppChar* ___nextTrainAt_8;
	WitIntentInfo_tB428004D9EC2F2E6130328B64B9F673EF7ACCA3D_marshaled_com* ___intents_9;
	WitEntityInfo_t9715AD316420F516F56031342F3AC0E665C2CB62_marshaled_com* ___entities_10;
	WitTraitInfoU5BU5D_tB790BA9F9C3B601ED9CD568A23C330D1EDF596D2* ___traits_11;
	WitVersionTagInfo_t1FB34DB86D5B5C75148C2961D1405CE4C02E1089_marshaled_com* ___versionTags_12;
	WitVoiceInfo_t87CF0A90E6DF0CB0CDD2B7F148C2975BFBDB1C6E_marshaled_com* ___voices_13;
};

// Meta.WitAi.Data.Entities.WitEntityData
struct WitEntityData_t3814C265B1FEF49FEBAD433FB102049418BB736B  : public WitEntityDataBase_1_t76EEB2E002923316F752746DDB37569F5D39FEB4
{
};

// Meta.WitAi.Data.Entities.WitEntityFloatData
struct WitEntityFloatData_t102A2BB5C9BCA8A0FEA4D3CC3F9D8B83AE31CCB8  : public WitEntityDataBase_1_t90E9F0FB214EED844AD8DD1A97EA3C1FD1EED960
{
};

// Meta.WitAi.Data.Entities.WitEntityIntData
struct WitEntityIntData_t25F04B7F8B86E577ED2F1C8CA31E13A827F9CB3C  : public WitEntityDataBase_1_t46F92AF5EC7866816B6CD6D417773D4FFE270507
{
};

// Meta.WitAi.Data.Info.WitEntityKeywordInfo
struct WitEntityKeywordInfo_tE0A290B8BFF00EF007649834C336D5DD48DA445B 
{
	// System.String Meta.WitAi.Data.Info.WitEntityKeywordInfo::keyword
	String_t* ___keyword_0;
	// System.Collections.Generic.List`1<System.String> Meta.WitAi.Data.Info.WitEntityKeywordInfo::synonyms
	List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* ___synonyms_1;
};
// Native definition for P/Invoke marshalling of Meta.WitAi.Data.Info.WitEntityKeywordInfo
struct WitEntityKeywordInfo_tE0A290B8BFF00EF007649834C336D5DD48DA445B_marshaled_pinvoke
{
	char* ___keyword_0;
	List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* ___synonyms_1;
};
// Native definition for COM marshalling of Meta.WitAi.Data.Info.WitEntityKeywordInfo
struct WitEntityKeywordInfo_tE0A290B8BFF00EF007649834C336D5DD48DA445B_marshaled_com
{
	Il2CppChar* ___keyword_0;
	List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* ___synonyms_1;
};

// Meta.WitAi.Configuration.WitRequestOptions
struct WitRequestOptions_tB2E8B103538F7E42F0568C6F62F2158FA45EF483  : public VoiceServiceRequestOptions_tBB80C39F5D734638F03442F09F4F106BD5F20EE4
{
	// Meta.WitAi.Interfaces.IDynamicEntitiesProvider Meta.WitAi.Configuration.WitRequestOptions::dynamicEntities
	RuntimeObject* ___dynamicEntities_4;
	// System.Int32 Meta.WitAi.Configuration.WitRequestOptions::nBestIntents
	int32_t ___nBestIntents_5;
	// System.String Meta.WitAi.Configuration.WitRequestOptions::tag
	String_t* ___tag_6;
	// System.Action`1<Meta.WitAi.WitRequest> Meta.WitAi.Configuration.WitRequestOptions::onResponse
	Action_1_tEE33A71F533D86EBC6A768BBF5F08D7A5AA0DA35* ___onResponse_7;
};

// Meta.WitAi.Json.WitResponseArray
struct WitResponseArray_tAC1DCF75C6C2FAB0A70A7DB879A0F35999BAB30A  : public WitResponseNode_t1BFF810F15B21416F5F6D0A1CAAF03CEF942038C
{
	// System.Collections.Generic.List`1<Meta.WitAi.Json.WitResponseNode> Meta.WitAi.Json.WitResponseArray::m_List
	List_1_t9CEE2998D6E0D27CA64916B517759F8657596864* ___m_List_0;
};

// Meta.WitAi.Json.WitResponseClass
struct WitResponseClass_tB8A73CCFF2E00D717CD5D9F22465D8DEEE5DAE25  : public WitResponseNode_t1BFF810F15B21416F5F6D0A1CAAF03CEF942038C
{
	// System.Collections.Generic.Dictionary`2<System.String,Meta.WitAi.Json.WitResponseNode> Meta.WitAi.Json.WitResponseClass::m_Dict
	Dictionary_2_tC2F17B4EBFD9F0FDFFCDED4E70FD0B5EBA0CF7EE* ___m_Dict_0;
};

// Meta.WitAi.Requests.WitVRequest
struct WitVRequest_t8604AB4F31C0E6BB2572F16A2C0992E09DEA1534  : public VRequest_tFD9B8F15B7482BF5BE064752EAE7162E3588B8A1
{
	// System.String Meta.WitAi.Requests.WitVRequest::<RequestId>k__BackingField
	String_t* ___U3CRequestIdU3Ek__BackingField_16;
	// Meta.WitAi.IWitRequestConfiguration Meta.WitAi.Requests.WitVRequest::<Configuration>k__BackingField
	RuntimeObject* ___U3CConfigurationU3Ek__BackingField_17;
	// System.Boolean Meta.WitAi.Requests.WitVRequest::_useServerToken
	bool ____useServerToken_18;
};

struct WitVRequest_t8604AB4F31C0E6BB2572F16A2C0992E09DEA1534_StaticFields
{
	// System.Func`2<System.UriBuilder,System.UriBuilder> Meta.WitAi.Requests.WitVRequest::OnProvideCustomUri
	Func_2_t50F3AB8094AE0A06CD522F06E80D6A35B9E1BD62* ___OnProvideCustomUri_13;
	// System.Action`1<System.Collections.Generic.Dictionary`2<System.String,System.String>> Meta.WitAi.Requests.WitVRequest::OnProvideCustomHeaders
	Action_1_tE974880775FC548AAD9D5D87454AA897D3B56023* ___OnProvideCustomHeaders_14;
	// System.Action`1<System.Text.StringBuilder> Meta.WitAi.Requests.WitVRequest::OnProvideCustomUserAgent
	Action_1_t9E1712DA0A3123C126566BD722BF0E60F1E0AAD6* ___OnProvideCustomUserAgent_15;
	// System.String Meta.WitAi.Requests.WitVRequest::_operatingSystem
	String_t* ____operatingSystem_19;
	// System.String Meta.WitAi.Requests.WitVRequest::_deviceModel
	String_t* ____deviceModel_20;
	// System.String Meta.WitAi.Requests.WitVRequest::_appIdentifier
	String_t* ____appIdentifier_21;
	// System.String Meta.WitAi.Requests.WitVRequest::_unityVersion
	String_t* ____unityVersion_22;
};

// System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Object>
struct Enumerator_tEA93FE2B778D098F590CA168BEFC4CD85D73A6B9 
{
	// System.Collections.Generic.Dictionary`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator::_dictionary
	Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* ____dictionary_0;
	// System.Int32 System.Collections.Generic.Dictionary`2/Enumerator::_version
	int32_t ____version_1;
	// System.Int32 System.Collections.Generic.Dictionary`2/Enumerator::_index
	int32_t ____index_2;
	// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator::_current
	KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230 ____current_3;
	// System.Int32 System.Collections.Generic.Dictionary`2/Enumerator::_getEnumeratorRetType
	int32_t ____getEnumeratorRetType_4;
};

// System.Collections.Generic.Dictionary`2/Enumerator<System.String,System.Collections.Generic.List`1<System.String>>
struct Enumerator_tF61ACA1FDE72603A35B49225874CAC6CA43B2250 
{
	// System.Collections.Generic.Dictionary`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator::_dictionary
	Dictionary_2_t79BA378F246EFA4AD0AFFA017D788423CACA8638* ____dictionary_0;
	// System.Int32 System.Collections.Generic.Dictionary`2/Enumerator::_version
	int32_t ____version_1;
	// System.Int32 System.Collections.Generic.Dictionary`2/Enumerator::_index
	int32_t ____index_2;
	// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator::_current
	KeyValuePair_2_tF2D5A036C624EBE9BEAB8512F34B28AB195C5D89 ____current_3;
	// System.Int32 System.Collections.Generic.Dictionary`2/Enumerator::_getEnumeratorRetType
	int32_t ____getEnumeratorRetType_4;
};

// Meta.Voice.NLPAudioRequestEvents`1<Meta.WitAi.Requests.VoiceServiceRequestEvent>
struct NLPAudioRequestEvents_1_tFAE223D8936F21D14D76AF80744C7BA64656D2F9  : public TranscriptionRequestEvents_1_t9C76CCA9D6509EEDB9B9FED9016A35DBE9D3E585
{
	// Meta.Voice.NLPRequestResponseEvent Meta.Voice.NLPAudioRequestEvents`1::_onPartialResponse
	NLPRequestResponseEvent_tDD562F3B70B56867885CA6AF029E93258D6ACB44* ____onPartialResponse_16;
	// Meta.Voice.NLPRequestResponseEvent Meta.Voice.NLPAudioRequestEvents`1::_onFullResponse
	NLPRequestResponseEvent_tDD562F3B70B56867885CA6AF029E93258D6ACB44* ____onFullResponse_17;
};

// Meta.Voice.NLPAudioRequest`4<System.Object,System.Object,System.Object,System.Object>
struct NLPAudioRequest_4_tB6B029BFDAEFFA17E2FA29CA64C51F87D70DE9CA  : public TranscriptionRequest_4_t83C1BC70A4F9F446C0915970241859EDE6013F0A
{
	// System.Boolean Meta.Voice.NLPAudioRequest`4::_isFinalized
	bool ____isFinalized_8;
};

// Meta.Voice.NLPAudioRequest`4<Meta.WitAi.Requests.VoiceServiceRequestEvent,Meta.WitAi.Configuration.WitRequestOptions,Meta.WitAi.Requests.VoiceServiceRequestEvents,Meta.WitAi.Requests.VoiceServiceRequestResults>
struct NLPAudioRequest_4_tB9AEC6E5E0DE9E86BAEA62F8FF35242BB6640C25  : public TranscriptionRequest_4_tF432B63E335559CC13F9AF9EFAE88109A3CA3963
{
	// System.Boolean Meta.Voice.NLPAudioRequest`4::_isFinalized
	bool ____isFinalized_8;
};

// Meta.WitAi.Events.AudioDurationTrackerFinishedEvent
struct AudioDurationTrackerFinishedEvent_t23E275CDD44C7923B60C067FAFF9FA926AB30647  : public UnityEvent_2_t8D8E787461BECB35F2627E8001A36D825CA99A97
{
};

// UnityEngine.Coroutine
struct Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B  : public YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D
{
	// System.IntPtr UnityEngine.Coroutine::m_Ptr
	intptr_t ___m_Ptr_0;
};
// Native definition for P/Invoke marshalling of UnityEngine.Coroutine
struct Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B_marshaled_pinvoke : public YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D_marshaled_pinvoke
{
	intptr_t ___m_Ptr_0;
};
// Native definition for COM marshalling of UnityEngine.Coroutine
struct Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B_marshaled_com : public YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D_marshaled_com
{
	intptr_t ___m_Ptr_0;
};

// System.Delegate
struct Delegate_t  : public RuntimeObject
{
	// System.IntPtr System.Delegate::method_ptr
	Il2CppMethodPointer ___method_ptr_0;
	// System.IntPtr System.Delegate::invoke_impl
	intptr_t ___invoke_impl_1;
	// System.Object System.Delegate::m_target
	RuntimeObject* ___m_target_2;
	// System.IntPtr System.Delegate::method
	intptr_t ___method_3;
	// System.IntPtr System.Delegate::delegate_trampoline
	intptr_t ___delegate_trampoline_4;
	// System.IntPtr System.Delegate::extra_arg
	intptr_t ___extra_arg_5;
	// System.IntPtr System.Delegate::method_code
	intptr_t ___method_code_6;
	// System.IntPtr System.Delegate::interp_method
	intptr_t ___interp_method_7;
	// System.IntPtr System.Delegate::interp_invoke_impl
	intptr_t ___interp_invoke_impl_8;
	// System.Reflection.MethodInfo System.Delegate::method_info
	MethodInfo_t* ___method_info_9;
	// System.Reflection.MethodInfo System.Delegate::original_method_info
	MethodInfo_t* ___original_method_info_10;
	// System.DelegateData System.Delegate::data
	DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E* ___data_11;
	// System.Boolean System.Delegate::method_is_virtual
	bool ___method_is_virtual_12;
};
// Native definition for P/Invoke marshalling of System.Delegate
struct Delegate_t_marshaled_pinvoke
{
	intptr_t ___method_ptr_0;
	intptr_t ___invoke_impl_1;
	Il2CppIUnknown* ___m_target_2;
	intptr_t ___method_3;
	intptr_t ___delegate_trampoline_4;
	intptr_t ___extra_arg_5;
	intptr_t ___method_code_6;
	intptr_t ___interp_method_7;
	intptr_t ___interp_invoke_impl_8;
	MethodInfo_t* ___method_info_9;
	MethodInfo_t* ___original_method_info_10;
	DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E* ___data_11;
	int32_t ___method_is_virtual_12;
};
// Native definition for COM marshalling of System.Delegate
struct Delegate_t_marshaled_com
{
	intptr_t ___method_ptr_0;
	intptr_t ___invoke_impl_1;
	Il2CppIUnknown* ___m_target_2;
	intptr_t ___method_3;
	intptr_t ___delegate_trampoline_4;
	intptr_t ___extra_arg_5;
	intptr_t ___method_code_6;
	intptr_t ___interp_method_7;
	intptr_t ___interp_invoke_impl_8;
	MethodInfo_t* ___method_info_9;
	MethodInfo_t* ___original_method_info_10;
	DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E* ___data_11;
	int32_t ___method_is_virtual_12;
};

// Meta.WitAi.Events.EventCategoryAttribute
struct EventCategoryAttribute_t589C967400362B59FE256F9DDEDC9ABB013BD883  : public PropertyAttribute_t5E0CB5A6CDA6E24CBD4FF26DE3B0C29D8BB54BF0
{
	// System.String Meta.WitAi.Events.EventCategoryAttribute::Category
	String_t* ___Category_1;
};

// System.Exception
struct Exception_t  : public RuntimeObject
{
	// System.String System.Exception::_className
	String_t* ____className_1;
	// System.String System.Exception::_message
	String_t* ____message_2;
	// System.Collections.IDictionary System.Exception::_data
	RuntimeObject* ____data_3;
	// System.Exception System.Exception::_innerException
	Exception_t* ____innerException_4;
	// System.String System.Exception::_helpURL
	String_t* ____helpURL_5;
	// System.Object System.Exception::_stackTrace
	RuntimeObject* ____stackTrace_6;
	// System.String System.Exception::_stackTraceString
	String_t* ____stackTraceString_7;
	// System.String System.Exception::_remoteStackTraceString
	String_t* ____remoteStackTraceString_8;
	// System.Int32 System.Exception::_remoteStackIndex
	int32_t ____remoteStackIndex_9;
	// System.Object System.Exception::_dynamicMethods
	RuntimeObject* ____dynamicMethods_10;
	// System.Int32 System.Exception::_HResult
	int32_t ____HResult_11;
	// System.String System.Exception::_source
	String_t* ____source_12;
	// System.Runtime.Serialization.SafeSerializationManager System.Exception::_safeSerializationManager
	SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6* ____safeSerializationManager_13;
	// System.Diagnostics.StackTrace[] System.Exception::captured_traces
	StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF* ___captured_traces_14;
	// System.IntPtr[] System.Exception::native_trace_ips
	IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832* ___native_trace_ips_15;
	// System.Int32 System.Exception::caught_in_unmanaged
	int32_t ___caught_in_unmanaged_16;
};

struct Exception_t_StaticFields
{
	// System.Object System.Exception::s_EDILock
	RuntimeObject* ___s_EDILock_0;
};
// Native definition for P/Invoke marshalling of System.Exception
struct Exception_t_marshaled_pinvoke
{
	char* ____className_1;
	char* ____message_2;
	RuntimeObject* ____data_3;
	Exception_t_marshaled_pinvoke* ____innerException_4;
	char* ____helpURL_5;
	Il2CppIUnknown* ____stackTrace_6;
	char* ____stackTraceString_7;
	char* ____remoteStackTraceString_8;
	int32_t ____remoteStackIndex_9;
	Il2CppIUnknown* ____dynamicMethods_10;
	int32_t ____HResult_11;
	char* ____source_12;
	SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6* ____safeSerializationManager_13;
	StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF* ___captured_traces_14;
	Il2CppSafeArray/*NONE*/* ___native_trace_ips_15;
	int32_t ___caught_in_unmanaged_16;
};
// Native definition for COM marshalling of System.Exception
struct Exception_t_marshaled_com
{
	Il2CppChar* ____className_1;
	Il2CppChar* ____message_2;
	RuntimeObject* ____data_3;
	Exception_t_marshaled_com* ____innerException_4;
	Il2CppChar* ____helpURL_5;
	Il2CppIUnknown* ____stackTrace_6;
	Il2CppChar* ____stackTraceString_7;
	Il2CppChar* ____remoteStackTraceString_8;
	int32_t ____remoteStackIndex_9;
	Il2CppIUnknown* ____dynamicMethods_10;
	int32_t ____HResult_11;
	Il2CppChar* ____source_12;
	SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6* ____safeSerializationManager_13;
	StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF* ___captured_traces_14;
	Il2CppSafeArray/*NONE*/* ___native_trace_ips_15;
	int32_t ___caught_in_unmanaged_16;
};

// System.Text.RegularExpressions.Match
struct Match_tFBEBCF225BD8EA17BCE6CE3FE5C1BD8E3074105F  : public Group_t26371E9136D6F43782C487B63C67C5FC4F472881
{
	// System.Text.RegularExpressions.GroupCollection System.Text.RegularExpressions.Match::_groupcoll
	GroupCollection_tFFA1789730DD9EA122FBE77DC03BFEDCC3F2945E* ____groupcoll_8;
	// System.Text.RegularExpressions.Regex System.Text.RegularExpressions.Match::_regex
	Regex_tE773142C2BE45C5D362B0F815AFF831707A51772* ____regex_9;
	// System.Int32 System.Text.RegularExpressions.Match::_textbeg
	int32_t ____textbeg_10;
	// System.Int32 System.Text.RegularExpressions.Match::_textpos
	int32_t ____textpos_11;
	// System.Int32 System.Text.RegularExpressions.Match::_textend
	int32_t ____textend_12;
	// System.Int32 System.Text.RegularExpressions.Match::_textstart
	int32_t ____textstart_13;
	// System.Int32[][] System.Text.RegularExpressions.Match::_matches
	Int32U5BU5DU5BU5D_t179D865D5B30EFCBC50F82C9774329C15943466E* ____matches_14;
	// System.Int32[] System.Text.RegularExpressions.Match::_matchcount
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____matchcount_15;
	// System.Boolean System.Text.RegularExpressions.Match::_balancing
	bool ____balancing_16;
};

struct Match_tFBEBCF225BD8EA17BCE6CE3FE5C1BD8E3074105F_StaticFields
{
	// System.Text.RegularExpressions.Match System.Text.RegularExpressions.Match::<Empty>k__BackingField
	Match_tFBEBCF225BD8EA17BCE6CE3FE5C1BD8E3074105F* ___U3CEmptyU3Ek__BackingField_17;
};

// Meta.WitAi.CallbackHandlers.MultiValueEvent
struct MultiValueEvent_t00CB59BD55FD6C3F27DABCC7A9A5A3394E717C06  : public UnityEvent_1_t477222AA4CE1BE0F15900D352218F0A842BF5EFD
{
};

// UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C  : public RuntimeObject
{
	// System.IntPtr UnityEngine.Object::m_CachedPtr
	intptr_t ___m_CachedPtr_0;
};

struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_StaticFields
{
	// System.Int32 UnityEngine.Object::OffsetOfInstanceIDInCPlusPlusObject
	int32_t ___OffsetOfInstanceIDInCPlusPlusObject_1;
};
// Native definition for P/Invoke marshalling of UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshaled_pinvoke
{
	intptr_t ___m_CachedPtr_0;
};
// Native definition for COM marshalling of UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshaled_com
{
	intptr_t ___m_CachedPtr_0;
};

// System.Text.RegularExpressions.Regex
struct Regex_tE773142C2BE45C5D362B0F815AFF831707A51772  : public RuntimeObject
{
	// System.TimeSpan System.Text.RegularExpressions.Regex::internalMatchTimeout
	TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A ___internalMatchTimeout_10;
	// System.String System.Text.RegularExpressions.Regex::pattern
	String_t* ___pattern_12;
	// System.Text.RegularExpressions.RegexOptions System.Text.RegularExpressions.Regex::roptions
	int32_t ___roptions_13;
	// System.Text.RegularExpressions.RegexRunnerFactory System.Text.RegularExpressions.Regex::factory
	RegexRunnerFactory_t72373B672C7D8785F63516DDD88834F286AF41E7* ___factory_14;
	// System.Collections.Hashtable System.Text.RegularExpressions.Regex::caps
	Hashtable_tEFC3B6496E6747787D8BB761B51F2AE3A8CFFE2D* ___caps_15;
	// System.Collections.Hashtable System.Text.RegularExpressions.Regex::capnames
	Hashtable_tEFC3B6496E6747787D8BB761B51F2AE3A8CFFE2D* ___capnames_16;
	// System.String[] System.Text.RegularExpressions.Regex::capslist
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___capslist_17;
	// System.Int32 System.Text.RegularExpressions.Regex::capsize
	int32_t ___capsize_18;
	// System.Text.RegularExpressions.ExclusiveReference System.Text.RegularExpressions.Regex::_runnerref
	ExclusiveReference_t411F04D4CC440EB7399290027E1BBABEF4C28837* ____runnerref_19;
	// System.WeakReference`1<System.Text.RegularExpressions.RegexReplacement> System.Text.RegularExpressions.Regex::_replref
	WeakReference_1_tDC6E83496181D1BAFA3B89CBC00BCD0B64450257* ____replref_20;
	// System.Text.RegularExpressions.RegexCode System.Text.RegularExpressions.Regex::_code
	RegexCode_tA23175D9DA02AD6A79B073E10EC5D225372ED6C7* ____code_21;
	// System.Boolean System.Text.RegularExpressions.Regex::_refsInitialized
	bool ____refsInitialized_22;
};

struct Regex_tE773142C2BE45C5D362B0F815AFF831707A51772_StaticFields
{
	// System.Int32 System.Text.RegularExpressions.Regex::s_cacheSize
	int32_t ___s_cacheSize_1;
	// System.Collections.Generic.Dictionary`2<System.Text.RegularExpressions.Regex/CachedCodeEntryKey,System.Text.RegularExpressions.Regex/CachedCodeEntry> System.Text.RegularExpressions.Regex::s_cache
	Dictionary_2_t5B5B38BB06341F50E1C75FB53208A2A66CAE57F7* ___s_cache_2;
	// System.Int32 System.Text.RegularExpressions.Regex::s_cacheCount
	int32_t ___s_cacheCount_3;
	// System.Text.RegularExpressions.Regex/CachedCodeEntry System.Text.RegularExpressions.Regex::s_cacheFirst
	CachedCodeEntry_tE201C3AD65C234AD9ED7A78C95025824A7A9FF39* ___s_cacheFirst_4;
	// System.Text.RegularExpressions.Regex/CachedCodeEntry System.Text.RegularExpressions.Regex::s_cacheLast
	CachedCodeEntry_tE201C3AD65C234AD9ED7A78C95025824A7A9FF39* ___s_cacheLast_5;
	// System.TimeSpan System.Text.RegularExpressions.Regex::s_maximumMatchTimeout
	TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A ___s_maximumMatchTimeout_6;
	// System.TimeSpan System.Text.RegularExpressions.Regex::s_defaultMatchTimeout
	TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A ___s_defaultMatchTimeout_8;
	// System.TimeSpan System.Text.RegularExpressions.Regex::InfiniteMatchTimeout
	TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A ___InfiniteMatchTimeout_9;
};

// System.RuntimeTypeHandle
struct RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B 
{
	// System.IntPtr System.RuntimeTypeHandle::value
	intptr_t ___value_0;
};

// Meta.WitAi.CallbackHandlers.StringEntityMatchEvent
struct StringEntityMatchEvent_t8736CD9A25D69C2A4CCBD5440CCC7069AC6B9201  : public UnityEvent_1_tC9859540CF1468306CAB6D758C0A0D95DBCEC257
{
};

// Meta.WitAi.Utilities.StringEvent
struct StringEvent_tC948A866B2D2C1ECC0783ABC07A4B876C8E28B5B  : public UnityEvent_1_tC9859540CF1468306CAB6D758C0A0D95DBCEC257
{
};

// Meta.WitAi.Attributes.TooltipBoxAttribute
struct TooltipBoxAttribute_t6E9488D357587D404789CE0549F8C32A110A8779  : public PropertyAttribute_t5E0CB5A6CDA6E24CBD4FF26DE3B0C29D8BB54BF0
{
	// System.String Meta.WitAi.Attributes.TooltipBoxAttribute::<Text>k__BackingField
	String_t* ___U3CTextU3Ek__BackingField_1;
};

// Meta.WitAi.CallbackHandlers.ValueEvent
struct ValueEvent_t7E99BC212C04EA8B32FFF6900F7AEC1C55A2AC32  : public UnityEvent_1_tC9859540CF1468306CAB6D758C0A0D95DBCEC257
{
};

// Meta.WitAi.Events.VoiceEvents
struct VoiceEvents_t7755B8C2A9074FA12090CF7288E5512DFD225EA9  : public SpeechEvents_tB51C31627EF79AB5734270C1558A6C6F67A5040E
{
	// Meta.WitAi.Events.WitByteDataEvent Meta.WitAi.Events.VoiceEvents::_onByteDataReady
	WitByteDataEvent_t6F952E3BEDEBEEFF9FF094E1AFA7B2089F88B4CC* ____onByteDataReady_32;
	// Meta.WitAi.Events.WitByteDataEvent Meta.WitAi.Events.VoiceEvents::_onByteDataSent
	WitByteDataEvent_t6F952E3BEDEBEEFF9FF094E1AFA7B2089F88B4CC* ____onByteDataSent_33;
	// Meta.WitAi.Events.WitValidationEvent Meta.WitAi.Events.VoiceEvents::_onValidatePartialResponse
	WitValidationEvent_t731FF211C8D0215476601B54ECDDD2D1DF38974C* ____onValidatePartialResponse_34;
};

// Meta.WitAi.Events.VoiceServiceRequestEvent
struct VoiceServiceRequestEvent_t7340AD8EBA1B3D36E1A95E47C8DBCD954F1DED13  : public UnityEvent_1_t2AED438DE5FAF741875343B8663599EC1EC222E2
{
};

// Meta.WitAi.Events.WitByteDataEvent
struct WitByteDataEvent_t6F952E3BEDEBEEFF9FF094E1AFA7B2089F88B4CC  : public UnityEvent_3_tF81A842A1D8D9B002F73DF6003CE7C3ACF40171F
{
};

// Meta.WitAi.Events.WitErrorEvent
struct WitErrorEvent_tF617F56AD9B12E89D73E125B79E441A56067F1B2  : public UnityEvent_2_t71C350611CC2C5B350589972D791938B5D41AB50
{
};

// Meta.WitAi.Requests.WitMessageVRequest
struct WitMessageVRequest_t1F545F95445B1FD0EE5DF7580C2EB69EB0520137  : public WitVRequest_t8604AB4F31C0E6BB2572F16A2C0992E09DEA1534
{
};

// Meta.WitAi.Events.WitMicLevelChangedEvent
struct WitMicLevelChangedEvent_tA9B2889CB33EAA09656739F26AA70252ED15DEF7  : public UnityEvent_1_tDD811EB8F49CEE97BA6DF59344DFE6C6F42553D4
{
};

// Meta.WitAi.Events.WitObjectEvent
struct WitObjectEvent_tC8E0642CEF100B4BF0068235B2A335A58FC217D8  : public UnityEvent_1_t5B716A16BF3DD47CC6FE568AA000E45B91A8B272
{
};

// Meta.WitAi.Events.WitRequestCreatedEvent
struct WitRequestCreatedEvent_t1A01ABB6F9E3C02D0251B5DC9F5B290EDA0E319B  : public UnityEvent_1_tD140963BF887A3E18CDB90439A9DD6FE5438B8B8
{
};

// Meta.WitAi.Events.WitRequestOptionsEvent
struct WitRequestOptionsEvent_t84FCD56D356445821DECABA3F66CADF6B07ABB1B  : public UnityEvent_1_tB2107CA265B68A4E479CAFA0530DAE8251E03F58
{
};

// Meta.WitAi.CallbackHandlers.WitResponseErrorEvent
struct WitResponseErrorEvent_t27A69D2F98CF74C1156030169D4E99C4D904F37B  : public UnityEvent_2_tC20F7D1BD03FC3DA58A01B3056D1D0B674961AF9
{
};

// Meta.WitAi.CallbackHandlers.WitResponseEvent
struct WitResponseEvent_t6CC119DCF60FF27F3B61BA0E1A86AEDC1D26AA84  : public UnityEvent_1_t3DC4F1FBCED8AF76C18EC16A2B55C43FBAE5E62D
{
};

// Meta.WitAi.Events.WitResponseEvent
struct WitResponseEvent_tC85152AAABC87956DF604749EEA671ADAA9EFFDA  : public UnityEvent_1_t3DC4F1FBCED8AF76C18EC16A2B55C43FBAE5E62D
{
};

// Meta.WitAi.Events.WitTranscriptionEvent
struct WitTranscriptionEvent_t51292FC7EB7BAF38C2EC6B57D87724C1BEB3C739  : public UnityEvent_1_tC9859540CF1468306CAB6D758C0A0D95DBCEC257
{
};

// Meta.WitAi.Events.WitValidationEvent
struct WitValidationEvent_t731FF211C8D0215476601B54ECDDD2D1DF38974C  : public UnityEvent_1_t7ED997BF6FDFAAFDDB2D9E2EDE55BE3DF55284AA
{
};

// Meta.Voice.NLPRequestEvents`1<Meta.WitAi.Requests.VoiceServiceRequestEvent>
struct NLPRequestEvents_1_tB0D5CC5BDEF07795A35948076FD4D07D91C20CF2  : public NLPAudioRequestEvents_1_tFAE223D8936F21D14D76AF80744C7BA64656D2F9
{
};

// Meta.Voice.NLPRequest`4<System.Object,System.Object,System.Object,System.Object>
struct NLPRequest_4_t79F59B9AB3FBFADB04B729AEF19245FE89658855  : public NLPAudioRequest_4_tB6B029BFDAEFFA17E2FA29CA64C51F87D70DE9CA
{
	// Meta.Voice.NLPRequestInputType Meta.Voice.NLPRequest`4::<InputType>k__BackingField
	int32_t ___U3CInputTypeU3Ek__BackingField_9;
	// System.Boolean Meta.Voice.NLPRequest`4::_initialized
	bool ____initialized_10;
};

// Meta.Voice.NLPRequest`4<Meta.WitAi.Requests.VoiceServiceRequestEvent,Meta.WitAi.Configuration.WitRequestOptions,Meta.WitAi.Requests.VoiceServiceRequestEvents,Meta.WitAi.Requests.VoiceServiceRequestResults>
struct NLPRequest_4_t7177BC2349443FF686C2D98FDB887CA5744C4323  : public NLPAudioRequest_4_tB9AEC6E5E0DE9E86BAEA62F8FF35242BB6640C25
{
	// Meta.Voice.NLPRequestInputType Meta.Voice.NLPRequest`4::<InputType>k__BackingField
	int32_t ___U3CInputTypeU3Ek__BackingField_9;
	// System.Boolean Meta.Voice.NLPRequest`4::_initialized
	bool ____initialized_10;
};

// UnityEngine.Component
struct Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};

// UnityEngine.GameObject
struct GameObject_t76FEDD663AB33C991A9C9A23129337651094216F  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};

// System.MulticastDelegate
struct MulticastDelegate_t  : public Delegate_t
{
	// System.Delegate[] System.MulticastDelegate::delegates
	DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771* ___delegates_13;
};
// Native definition for P/Invoke marshalling of System.MulticastDelegate
struct MulticastDelegate_t_marshaled_pinvoke : public Delegate_t_marshaled_pinvoke
{
	Delegate_t_marshaled_pinvoke** ___delegates_13;
};
// Native definition for COM marshalling of System.MulticastDelegate
struct MulticastDelegate_t_marshaled_com : public Delegate_t_marshaled_com
{
	Delegate_t_marshaled_com** ___delegates_13;
};

// UnityEngine.ScriptableObject
struct ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};
// Native definition for P/Invoke marshalling of UnityEngine.ScriptableObject
struct ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A_marshaled_pinvoke : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshaled_pinvoke
{
};
// Native definition for COM marshalling of UnityEngine.ScriptableObject
struct ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A_marshaled_com : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshaled_com
{
};

// System.SystemException
struct SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295  : public Exception_t
{
};

// System.Type
struct Type_t  : public MemberInfo_t
{
	// System.RuntimeTypeHandle System.Type::_impl
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B ____impl_8;
};

struct Type_t_StaticFields
{
	// System.Reflection.Binder modreq(System.Runtime.CompilerServices.IsVolatile) System.Type::s_defaultBinder
	Binder_t91BFCE95A7057FADF4D8A1A342AFE52872246235* ___s_defaultBinder_0;
	// System.Char System.Type::Delimiter
	Il2CppChar ___Delimiter_1;
	// System.Type[] System.Type::EmptyTypes
	TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* ___EmptyTypes_2;
	// System.Object System.Type::Missing
	RuntimeObject* ___Missing_3;
	// System.Reflection.MemberFilter System.Type::FilterAttribute
	MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553* ___FilterAttribute_4;
	// System.Reflection.MemberFilter System.Type::FilterName
	MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553* ___FilterName_5;
	// System.Reflection.MemberFilter System.Type::FilterNameIgnoreCase
	MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553* ___FilterNameIgnoreCase_6;
};

// System.Action`3<System.Int32,System.Single[],System.Single>
struct Action_3_t014775F97068AFC7018FE805CA856B7C5CF281F8  : public MulticastDelegate_t
{
};

// Meta.WitAi.Data.RingBuffer`1/ByteDataWriter<System.Byte>
struct ByteDataWriter_t42C70174C8038884885A93F156C878EC779F882D  : public MulticastDelegate_t
{
};

// System.Func`1<System.Boolean>
struct Func_1_t2BE7F58348C9CC544A8973B3A9E55541DE43C457  : public MulticastDelegate_t
{
};

// System.Func`2<System.Object,System.Object>
struct Func_2_tACBF5A1656250800CE861707354491F0611F6624  : public MulticastDelegate_t
{
};

// System.Func`2<Meta.WitAi.Events.SpeechEvents,UnityEngine.Events.UnityEvent`1<System.Single>>
struct Func_2_t0F30FACC4CABFFD27DDEBE31FB321AA523A06B7D  : public MulticastDelegate_t
{
};

// System.Func`2<Meta.WitAi.Events.SpeechEvents,UnityEngine.Events.UnityEvent`1<System.String>>
struct Func_2_tD49A9546076918B07593787D23EE9245E84C1AD0  : public MulticastDelegate_t
{
};

// System.Func`2<Meta.WitAi.Events.SpeechEvents,UnityEngine.Events.UnityEvent`1<Meta.WitAi.Requests.VoiceServiceRequest>>
struct Func_2_tD24D6BC507F5AA415E63472DF1247E49582D7A1F  : public MulticastDelegate_t
{
};

// System.Func`2<Meta.WitAi.Events.SpeechEvents,UnityEngine.Events.UnityEvent`1<Meta.WitAi.WitRequest>>
struct Func_2_tC95346D56902FBF6D1621BDE4F2039F61F917F52  : public MulticastDelegate_t
{
};

// System.Func`2<Meta.WitAi.Events.SpeechEvents,UnityEngine.Events.UnityEvent`1<Meta.WitAi.Configuration.WitRequestOptions>>
struct Func_2_tCD773FD80F11C1399B4604D1EB19BB7436356388  : public MulticastDelegate_t
{
};

// System.Func`2<Meta.WitAi.Events.SpeechEvents,UnityEngine.Events.UnityEvent`1<Meta.WitAi.Json.WitResponseNode>>
struct Func_2_t5DC062A102C3300E4BF548012A747BB3E0A5BA57  : public MulticastDelegate_t
{
};

// System.Func`2<Meta.WitAi.Events.SpeechEvents,UnityEngine.Events.UnityEvent`2<System.String,System.String>>
struct Func_2_tB18F1F7AE9EDB9705E036A284B88C5F3613A7F78  : public MulticastDelegate_t
{
};

// System.Func`2<Meta.WitAi.Events.SpeechEvents,UnityEngine.Events.UnityEvent>
struct Func_2_tDCA29CF738B0C5F51018D3D7FCBCC1BCF5EF829A  : public MulticastDelegate_t
{
};

// System.Predicate`1<Meta.WitAi.Data.Entities.WitDynamicEntity>
struct Predicate_1_t39557AE2C0B3C676DB62FADB5D71DD45826B8572  : public MulticastDelegate_t
{
};

// Meta.WitAi.Requests.VRequest/RequestCompleteDelegate`1<Meta.WitAi.Json.WitResponseNode>
struct RequestCompleteDelegate_1_tDB32EFF5395222142E2DE478401516FF7916E807  : public MulticastDelegate_t
{
};

// UnityEngine.Events.UnityAction`1<System.Single>
struct UnityAction_1_tAEFA3C1C529F0E1AD7C7C7AFC88822D359E7AC90  : public MulticastDelegate_t
{
};

// UnityEngine.Events.UnityAction`1<System.String>
struct UnityAction_1_t690494F0E492A2098660E28B8EB7D71B2C69BE1B  : public MulticastDelegate_t
{
};

// UnityEngine.Events.UnityAction`1<Meta.WitAi.Requests.VoiceServiceRequest>
struct UnityAction_1_t47424DEBAD5E8E58E4A0DD7FD64A5834C41F7896  : public MulticastDelegate_t
{
};

// UnityEngine.Events.UnityAction`1<Meta.WitAi.Data.VoiceSession>
struct UnityAction_1_tF266B43F3B48247A8143BA850AC13FFC634512E9  : public MulticastDelegate_t
{
};

// UnityEngine.Events.UnityAction`1<Meta.WitAi.Json.WitResponseNode>
struct UnityAction_1_t7814257576DA9D92A82FF91BA3EE537553AC1BC8  : public MulticastDelegate_t
{
};

// System.AsyncCallback
struct AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C  : public MulticastDelegate_t
{
};

// UnityEngine.Behaviour
struct Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// System.NotSupportedException
struct NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
};

// UnityEngine.Events.UnityAction
struct UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7  : public MulticastDelegate_t
{
};

// Meta.WitAi.Requests.VoiceServiceRequest
struct VoiceServiceRequest_tCF844F597C059D6A354311EB2BD5644AE5E8E536  : public NLPRequest_4_t7177BC2349443FF686C2D98FDB887CA5744C4323
{
	// Meta.WitAi.CoroutineUtility/CoroutinePerformer Meta.WitAi.Requests.VoiceServiceRequest::_performer
	CoroutinePerformer_t2423B696217C7475EF6AFE1D33000E8766703559* ____performer_11;
	// System.Collections.Concurrent.ConcurrentQueue`1<System.Action> Meta.WitAi.Requests.VoiceServiceRequest::_mainThreadCallbacks
	ConcurrentQueue_1_tC8B0BCCEA7ED64CA00454B9EB2F35771723A00D3* ____mainThreadCallbacks_12;
};

// Meta.WitAi.Requests.VoiceServiceRequestEvents
struct VoiceServiceRequestEvents_t4270DDE59A84A1A65EBF9331C446BBBC7BDE0838  : public NLPRequestEvents_1_tB0D5CC5BDEF07795A35948076FD4D07D91C20CF2
{
};

// Meta.WitAi.Data.Configuration.WitConfiguration
struct WitConfiguration_t85BCD6C826D35078E90334092184A53D1B69C72E  : public ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A
{
	// System.String Meta.WitAi.Data.Configuration.WitConfiguration::_clientAccessToken
	String_t* ____clientAccessToken_4;
	// Meta.WitAi.Data.Info.WitAppInfo Meta.WitAi.Data.Configuration.WitConfiguration::_appInfo
	WitAppInfo_t172D41FCA64A8915FB21F90F2FD0A7639EB0C8D8 ____appInfo_5;
	// Meta.WitAi.Data.Configuration.WitConfigurationAssetData[] Meta.WitAi.Data.Configuration.WitConfiguration::_configData
	WitConfigurationAssetDataU5BU5D_t700D5FE01B115D42C19FDAB600E6E52D045BAB9C* ____configData_6;
	// System.String Meta.WitAi.Data.Configuration.WitConfiguration::_configurationId
	String_t* ____configurationId_7;
	// System.Int32 Meta.WitAi.Data.Configuration.WitConfiguration::timeoutMS
	int32_t ___timeoutMS_8;
	// Meta.WitAi.Configuration.WitEndpointConfig Meta.WitAi.Data.Configuration.WitConfiguration::endpointConfiguration
	WitEndpointConfig_t7CCDA7CBBF1FDD2A7779DDF6745BAED47E69BB1D* ___endpointConfiguration_9;
	// System.Boolean Meta.WitAi.Data.Configuration.WitConfiguration::isDemoOnly
	bool ___isDemoOnly_10;
	// System.Boolean Meta.WitAi.Data.Configuration.WitConfiguration::useConduit
	bool ___useConduit_11;
	// System.String Meta.WitAi.Data.Configuration.WitConfiguration::_manifestLocalPath
	String_t* ____manifestLocalPath_12;
	// System.Collections.Generic.List`1<System.String> Meta.WitAi.Data.Configuration.WitConfiguration::excludedAssemblies
	List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* ___excludedAssemblies_13;
	// System.Boolean Meta.WitAi.Data.Configuration.WitConfiguration::relaxedResolution
	bool ___relaxedResolution_14;
};

// Meta.WitAi.Data.Configuration.WitConfigurationAssetData
struct WitConfigurationAssetData_t85BC866513E76C112B29F1EE070D1F062C84273A  : public ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A
{
};

// Meta.WitAi.Data.Entities.WitDynamicEntitiesData
struct WitDynamicEntitiesData_t372BA7AB1BA929F633A88ADF252C252444A79146  : public ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A
{
	// Meta.WitAi.Data.Entities.WitDynamicEntities Meta.WitAi.Data.Entities.WitDynamicEntitiesData::entities
	WitDynamicEntities_t122029C03796D5F75B696CA70D8083DA16E33E38* ___entities_4;
};

// Meta.WitAi.Data.WitValue
struct WitValue_t62896259CA1F095F305381482D891DC0E1ED1092  : public ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A
{
	// System.String Meta.WitAi.Data.WitValue::path
	String_t* ___path_4;
	// Meta.WitAi.WitResponseReference Meta.WitAi.Data.WitValue::reference
	WitResponseReference_t7B74D84BF98481046E19F0CE0EB5A3F4203D2581* ___reference_5;
};

// Meta.WitAi.Events.AudioBufferEvents/OnSampleReadyEvent
struct OnSampleReadyEvent_t43C9DCB6394FF2C5F335602AC5455C1A6B430486  : public MulticastDelegate_t
{
};

// Meta.WitAi.Requests.VRequest/RequestFirstResponseDelegate
struct RequestFirstResponseDelegate_tB02AF851E14447743278D4F5E31A6B7E0203E89A  : public MulticastDelegate_t
{
};

// Meta.WitAi.Requests.VRequest/RequestProgressDelegate
struct RequestProgressDelegate_tCEE5B616F4FDCD488E4914A7F554F2F57B7D03A4  : public MulticastDelegate_t
{
};

// UnityEngine.MonoBehaviour
struct MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71  : public Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA
{
};

// Meta.WitAi.Data.WitFloatValue
struct WitFloatValue_t0CD86D3313AB3919655A9F71C881B82124190FD7  : public WitValue_t62896259CA1F095F305381482D891DC0E1ED1092
{
	// System.Single Meta.WitAi.Data.WitFloatValue::equalityTolerance
	float ___equalityTolerance_6;
};

// Meta.WitAi.Data.WitIntValue
struct WitIntValue_t67EABB88E65123FE396BDDB9C49054D20A693E48  : public WitValue_t62896259CA1F095F305381482D891DC0E1ED1092
{
};

// Meta.WitAi.Data.WitStringValue
struct WitStringValue_tC57E63A29F85DBA9BF5A71184C079C4FA0069805  : public WitValue_t62896259CA1F095F305381482D891DC0E1ED1092
{
};

// Meta.WitAi.Requests.WitUnityRequest
struct WitUnityRequest_t8F143C19E420F145BAF16B53988A2AF5B37CB202  : public VoiceServiceRequest_tCF844F597C059D6A354311EB2BD5644AE5E8E536
{
	// Meta.WitAi.Data.Configuration.WitConfiguration Meta.WitAi.Requests.WitUnityRequest::<Configuration>k__BackingField
	WitConfiguration_t85BCD6C826D35078E90334092184A53D1B69C72E* ___U3CConfigurationU3Ek__BackingField_13;
	// Meta.WitAi.Requests.WitVRequest Meta.WitAi.Requests.WitUnityRequest::_request
	WitVRequest_t8604AB4F31C0E6BB2572F16A2C0992E09DEA1534* ____request_14;
	// System.String Meta.WitAi.Requests.WitUnityRequest::<Endpoint>k__BackingField
	String_t* ___U3CEndpointU3Ek__BackingField_15;
	// System.Boolean Meta.WitAi.Requests.WitUnityRequest::<ShouldPost>k__BackingField
	bool ___U3CShouldPostU3Ek__BackingField_16;
	// System.Boolean Meta.WitAi.Requests.WitUnityRequest::_initialized
	bool ____initialized_17;
};

// Meta.WitAi.Data.AudioBuffer
struct AudioBuffer_t8F78C90BB0306EE2F5C4787B5D6ACF16EEF33E72  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.Boolean Meta.WitAi.Data.AudioBuffer::alwaysRecording
	bool ___alwaysRecording_5;
	// Meta.WitAi.Data.AudioBufferConfiguration Meta.WitAi.Data.AudioBuffer::audioBufferConfiguration
	AudioBufferConfiguration_tB38ABF06828B3927593D6E28F41EC838EFE9B8B3* ___audioBufferConfiguration_6;
	// Meta.WitAi.Events.AudioBufferEvents Meta.WitAi.Data.AudioBuffer::events
	AudioBufferEvents_t464B32397852A58D1333411135D8AB9CF2F6C233* ___events_7;
	// Meta.WitAi.Interfaces.IAudioInputSource Meta.WitAi.Data.AudioBuffer::_micInput
	RuntimeObject* ____micInput_8;
	// Meta.WitAi.Data.RingBuffer`1<System.Byte> Meta.WitAi.Data.AudioBuffer::_micDataBuffer
	RingBuffer_1_t553FDAA382235F13BBC8000565860BFE1438D276* ____micDataBuffer_9;
	// System.Byte[] Meta.WitAi.Data.AudioBuffer::_byteDataBuffer
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ____byteDataBuffer_10;
	// System.Collections.Generic.HashSet`1<UnityEngine.Component> Meta.WitAi.Data.AudioBuffer::_waitingRecorders
	HashSet_1_tF0A60E739EB979571381F8FB075B6B90F6FA6F8D* ____waitingRecorders_11;
	// System.Collections.Generic.HashSet`1<UnityEngine.Component> Meta.WitAi.Data.AudioBuffer::_activeRecorders
	HashSet_1_tF0A60E739EB979571381F8FB075B6B90F6FA6F8D* ____activeRecorders_12;
};

struct AudioBuffer_t8F78C90BB0306EE2F5C4787B5D6ACF16EEF33E72_StaticFields
{
	// Meta.WitAi.Data.AudioBuffer Meta.WitAi.Data.AudioBuffer::_instance
	AudioBuffer_t8F78C90BB0306EE2F5C4787B5D6ACF16EEF33E72* ____instance_4;
};

// Meta.WitAi.Events.UnityEventListeners.AudioEventListener
struct AudioEventListener_t39E39D7138664E757F322BB01CE82890433659AB  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// Meta.WitAi.Events.WitMicLevelChangedEvent Meta.WitAi.Events.UnityEventListeners.AudioEventListener::onMicAudioLevelChanged
	WitMicLevelChangedEvent_tA9B2889CB33EAA09656739F26AA70252ED15DEF7* ___onMicAudioLevelChanged_4;
	// UnityEngine.Events.UnityEvent Meta.WitAi.Events.UnityEventListeners.AudioEventListener::onMicStartedListening
	UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* ___onMicStartedListening_5;
	// UnityEngine.Events.UnityEvent Meta.WitAi.Events.UnityEventListeners.AudioEventListener::onMicStoppedListening
	UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* ___onMicStoppedListening_6;
	// Meta.WitAi.Interfaces.IAudioInputEvents Meta.WitAi.Events.UnityEventListeners.AudioEventListener::_events
	RuntimeObject* ____events_7;
};

// Meta.WitAi.Interfaces.CustomTranscriptionProvider
struct CustomTranscriptionProvider_tC6EABF251A11EFEBE5A8AD8D77CEBF14FB1009C5  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.Boolean Meta.WitAi.Interfaces.CustomTranscriptionProvider::overrideMicLevel
	bool ___overrideMicLevel_4;
	// Meta.WitAi.Events.WitTranscriptionEvent Meta.WitAi.Interfaces.CustomTranscriptionProvider::onPartialTranscription
	WitTranscriptionEvent_t51292FC7EB7BAF38C2EC6B57D87724C1BEB3C739* ___onPartialTranscription_5;
	// Meta.WitAi.Events.WitTranscriptionEvent Meta.WitAi.Interfaces.CustomTranscriptionProvider::onFullTranscription
	WitTranscriptionEvent_t51292FC7EB7BAF38C2EC6B57D87724C1BEB3C739* ___onFullTranscription_6;
	// UnityEngine.Events.UnityEvent Meta.WitAi.Interfaces.CustomTranscriptionProvider::onStoppedListening
	UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* ___onStoppedListening_7;
	// UnityEngine.Events.UnityEvent Meta.WitAi.Interfaces.CustomTranscriptionProvider::onStartListening
	UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* ___onStartListening_8;
	// Meta.WitAi.Events.WitMicLevelChangedEvent Meta.WitAi.Interfaces.CustomTranscriptionProvider::onMicLevelChanged
	WitMicLevelChangedEvent_tA9B2889CB33EAA09656739F26AA70252ED15DEF7* ___onMicLevelChanged_9;
	// System.String Meta.WitAi.Interfaces.CustomTranscriptionProvider::<LastTranscription>k__BackingField
	String_t* ___U3CLastTranscriptionU3Ek__BackingField_10;
};

// Meta.WitAi.Data.Entities.DynamicEntityDataProvider
struct DynamicEntityDataProvider_t08403B46CC5ED6B8FE0A88755E81A267057EDE3F  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// Meta.WitAi.Data.Entities.WitDynamicEntitiesData[] Meta.WitAi.Data.Entities.DynamicEntityDataProvider::entitiesDefinition
	WitDynamicEntitiesDataU5BU5D_t04480B2CB2C361B83EA9E1237F827D9287EBDD36* ___entitiesDefinition_4;
};

// Meta.WitAi.Data.Entities.DynamicEntityKeywordRegistry
struct DynamicEntityKeywordRegistry_t610EF6621FA40BD297502CD7A30337A625A57C28  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// Meta.WitAi.Data.Entities.WitDynamicEntities Meta.WitAi.Data.Entities.DynamicEntityKeywordRegistry::entities
	WitDynamicEntities_t122029C03796D5F75B696CA70D8083DA16E33E38* ___entities_5;
};

struct DynamicEntityKeywordRegistry_t610EF6621FA40BD297502CD7A30337A625A57C28_StaticFields
{
	// Meta.WitAi.Data.Entities.DynamicEntityKeywordRegistry Meta.WitAi.Data.Entities.DynamicEntityKeywordRegistry::instance
	DynamicEntityKeywordRegistry_t610EF6621FA40BD297502CD7A30337A625A57C28* ___instance_4;
};

// Meta.WitAi.Data.Entities.DynamicEntityProvider
struct DynamicEntityProvider_t3AFDF18CD9BD247F0B9B129A02A611841AA373C3  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// Meta.WitAi.Data.Entities.WitDynamicEntities Meta.WitAi.Data.Entities.DynamicEntityProvider::entities
	WitDynamicEntities_t122029C03796D5F75B696CA70D8083DA16E33E38* ___entities_4;
};

// Meta.WitAi.Lib.Mic
struct Mic_t754EFE9D630FC1FBB701EB317849C522C0F384F4  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.Boolean Meta.WitAi.Lib.Mic::<IsRecording>k__BackingField
	bool ___U3CIsRecordingU3Ek__BackingField_4;
	// Meta.WitAi.Data.AudioEncoding Meta.WitAi.Lib.Mic::<AudioEncoding>k__BackingField
	AudioEncoding_t98ED2D092A9829C604C73C3B611E2FC987413EE4* ___U3CAudioEncodingU3Ek__BackingField_5;
	// System.Single[] Meta.WitAi.Lib.Mic::<Sample>k__BackingField
	SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* ___U3CSampleU3Ek__BackingField_6;
	// System.Int32 Meta.WitAi.Lib.Mic::<SampleDurationMS>k__BackingField
	int32_t ___U3CSampleDurationMSU3Ek__BackingField_7;
	// UnityEngine.AudioClip Meta.WitAi.Lib.Mic::<AudioClip>k__BackingField
	AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* ___U3CAudioClipU3Ek__BackingField_8;
	// System.Int32 Meta.WitAi.Lib.Mic::_audioClipSampleRate
	int32_t ____audioClipSampleRate_9;
	// System.Collections.Generic.List`1<System.String> Meta.WitAi.Lib.Mic::_devices
	List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* ____devices_13;
	// System.Int32 Meta.WitAi.Lib.Mic::<CurrentDeviceIndex>k__BackingField
	int32_t ___U3CCurrentDeviceIndexU3Ek__BackingField_14;
	// System.Int32 Meta.WitAi.Lib.Mic::m_SampleCount
	int32_t ___m_SampleCount_15;
	// System.Action Meta.WitAi.Lib.Mic::OnStartRecording
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___OnStartRecording_16;
	// System.Action Meta.WitAi.Lib.Mic::OnStartRecordingFailed
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___OnStartRecordingFailed_17;
	// System.Action`3<System.Int32,System.Single[],System.Single> Meta.WitAi.Lib.Mic::OnSampleReady
	Action_3_t014775F97068AFC7018FE805CA856B7C5CF281F8* ___OnSampleReady_18;
	// System.Action Meta.WitAi.Lib.Mic::OnStopRecording
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___OnStopRecording_19;
};

struct Mic_t754EFE9D630FC1FBB701EB317849C522C0F384F4_StaticFields
{
	// Meta.WitAi.Lib.Mic Meta.WitAi.Lib.Mic::m_Instance
	Mic_t754EFE9D630FC1FBB701EB317849C522C0F384F4* ___m_Instance_20;
};

// Meta.WitAi.Data.Entities.RegisteredDynamicEntityKeyword
struct RegisteredDynamicEntityKeyword_tA7EFBD0615574563A15D0EC6E518A937BE2CCEE4  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.String Meta.WitAi.Data.Entities.RegisteredDynamicEntityKeyword::entity
	String_t* ___entity_4;
	// Meta.WitAi.Data.Info.WitEntityKeywordInfo Meta.WitAi.Data.Entities.RegisteredDynamicEntityKeyword::keyword
	WitEntityKeywordInfo_tE0A290B8BFF00EF007649834C336D5DD48DA445B ___keyword_5;
};

// Meta.WitAi.Events.UnityEventListeners.TranscriptionEventListener
struct TranscriptionEventListener_t96B770053BE0AFCF8B9329247EEE4A23B864B4F5  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// Meta.WitAi.Events.WitTranscriptionEvent Meta.WitAi.Events.UnityEventListeners.TranscriptionEventListener::onPartialTranscription
	WitTranscriptionEvent_t51292FC7EB7BAF38C2EC6B57D87724C1BEB3C739* ___onPartialTranscription_4;
	// Meta.WitAi.Events.WitTranscriptionEvent Meta.WitAi.Events.UnityEventListeners.TranscriptionEventListener::onFullTranscription
	WitTranscriptionEvent_t51292FC7EB7BAF38C2EC6B57D87724C1BEB3C739* ___onFullTranscription_5;
	// Meta.WitAi.Interfaces.ITranscriptionEvent Meta.WitAi.Events.UnityEventListeners.TranscriptionEventListener::_events
	RuntimeObject* ____events_6;
};

// Meta.WitAi.VoiceService
struct VoiceService_t601CB0E6879961EC1F8179A8E20EB9DD7AF6A82E  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// Meta.WitAi.Data.Configuration.WitConfiguration Meta.WitAi.VoiceService::_witConfiguration
	WitConfiguration_t85BCD6C826D35078E90334092184A53D1B69C72E* ____witConfiguration_4;
	// Meta.Conduit.IParameterProvider Meta.WitAi.VoiceService::_conduitParameterProvider
	RuntimeObject* ____conduitParameterProvider_5;
	// Meta.WitAi.Events.VoiceEvents Meta.WitAi.VoiceService::events
	VoiceEvents_t7755B8C2A9074FA12090CF7288E5512DFD225EA9* ___events_6;
	// Meta.WitAi.Events.TelemetryEvents Meta.WitAi.VoiceService::telemetryEvents
	TelemetryEvents_t728EE43C6D9E03EE2233160917696F0D483CF2DC* ___telemetryEvents_7;
	// Meta.Conduit.IConduitDispatcher Meta.WitAi.VoiceService::<ConduitDispatcher>k__BackingField
	RuntimeObject* ___U3CConduitDispatcherU3Ek__BackingField_8;
	// System.Collections.Generic.HashSet`1<Meta.WitAi.Requests.VoiceServiceRequest> Meta.WitAi.VoiceService::<Requests>k__BackingField
	HashSet_1_tCF8F4C898D9D97CDE054CF1276B78134DEEC70AE* ___U3CRequestsU3Ek__BackingField_9;
};

// Meta.WitAi.CallbackHandlers.WitResponseHandler
struct WitResponseHandler_t3BD2BF0058605CE13CD87228A0BBB9CDAFC74AF1  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// Meta.WitAi.VoiceService Meta.WitAi.CallbackHandlers.WitResponseHandler::Voice
	VoiceService_t601CB0E6879961EC1F8179A8E20EB9DD7AF6A82E* ___Voice_4;
	// System.Boolean Meta.WitAi.CallbackHandlers.WitResponseHandler::ValidateEarly
	bool ___ValidateEarly_5;
	// System.Boolean Meta.WitAi.CallbackHandlers.WitResponseHandler::_validated
	bool ____validated_6;
};

// Meta.WitAi.Data.Entities.WitSimpleDynamicEntity
struct WitSimpleDynamicEntity_t936086F8CD53DE1BABD07C5133D814C5DD1937F1  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.String Meta.WitAi.Data.Entities.WitSimpleDynamicEntity::entityName
	String_t* ___entityName_4;
	// System.String[] Meta.WitAi.Data.Entities.WitSimpleDynamicEntity::keywords
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___keywords_5;
};

// Meta.WitAi.CallbackHandlers.OutOfScopeUtteranceHandler
struct OutOfScopeUtteranceHandler_t4CC5CCB5E0F34C1EE207A6E06C711C6DCC0F748B  : public WitResponseHandler_t3BD2BF0058605CE13CD87228A0BBB9CDAFC74AF1
{
	// System.Single Meta.WitAi.CallbackHandlers.OutOfScopeUtteranceHandler::confidenceThreshold
	float ___confidenceThreshold_7;
	// Meta.WitAi.Utilities.StringEvent Meta.WitAi.CallbackHandlers.OutOfScopeUtteranceHandler::onOutOfDomain
	StringEvent_tC948A866B2D2C1ECC0783ABC07A4B876C8E28B5B* ___onOutOfDomain_8;
};

// Meta.WitAi.CallbackHandlers.WitIntentMatcher
struct WitIntentMatcher_tE81387B012FD1CDC55B99B00878C5E8EFD0D7F8D  : public WitResponseHandler_t3BD2BF0058605CE13CD87228A0BBB9CDAFC74AF1
{
	// System.String Meta.WitAi.CallbackHandlers.WitIntentMatcher::intent
	String_t* ___intent_7;
	// System.Single Meta.WitAi.CallbackHandlers.WitIntentMatcher::confidenceThreshold
	float ___confidenceThreshold_8;
};

// Meta.WitAi.CallbackHandlers.WitUtteranceMatcher
struct WitUtteranceMatcher_t61084ECD5166E15FF9C36660DCD7A42241EAB098  : public WitResponseHandler_t3BD2BF0058605CE13CD87228A0BBB9CDAFC74AF1
{
	// System.String Meta.WitAi.CallbackHandlers.WitUtteranceMatcher::searchText
	String_t* ___searchText_7;
	// System.Boolean Meta.WitAi.CallbackHandlers.WitUtteranceMatcher::exactMatch
	bool ___exactMatch_8;
	// System.Boolean Meta.WitAi.CallbackHandlers.WitUtteranceMatcher::useRegex
	bool ___useRegex_9;
	// Meta.WitAi.Utilities.StringEvent Meta.WitAi.CallbackHandlers.WitUtteranceMatcher::onUtteranceMatched
	StringEvent_tC948A866B2D2C1ECC0783ABC07A4B876C8E28B5B* ___onUtteranceMatched_10;
	// System.Text.RegularExpressions.Regex Meta.WitAi.CallbackHandlers.WitUtteranceMatcher::regex
	Regex_tE773142C2BE45C5D362B0F815AFF831707A51772* ___regex_11;
};

// Meta.WitAi.CallbackHandlers.SimpleIntentHandler
struct SimpleIntentHandler_tF4B682B5036AF258B9F7E1D210A0945768A282F4  : public WitIntentMatcher_tE81387B012FD1CDC55B99B00878C5E8EFD0D7F8D
{
	// UnityEngine.Events.UnityEvent Meta.WitAi.CallbackHandlers.SimpleIntentHandler::onIntentTriggered
	UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* ___onIntentTriggered_9;
	// System.Boolean Meta.WitAi.CallbackHandlers.SimpleIntentHandler::allowConfidenceOverlap
	bool ___allowConfidenceOverlap_10;
	// Meta.WitAi.CallbackHandlers.ConfidenceRange[] Meta.WitAi.CallbackHandlers.SimpleIntentHandler::confidenceRanges
	ConfidenceRangeU5BU5D_t436B72D1C2A21AE91F57767E7CCA104C79700583* ___confidenceRanges_11;
};

// Meta.WitAi.CallbackHandlers.SimpleStringEntityHandler
struct SimpleStringEntityHandler_t1E5B8A6888D5B1E62E7C31AAA90429635B7D5309  : public WitIntentMatcher_tE81387B012FD1CDC55B99B00878C5E8EFD0D7F8D
{
	// System.String Meta.WitAi.CallbackHandlers.SimpleStringEntityHandler::entity
	String_t* ___entity_9;
	// System.String Meta.WitAi.CallbackHandlers.SimpleStringEntityHandler::format
	String_t* ___format_10;
	// Meta.WitAi.CallbackHandlers.StringEntityMatchEvent Meta.WitAi.CallbackHandlers.SimpleStringEntityHandler::onIntentEntityTriggered
	StringEntityMatchEvent_t8736CD9A25D69C2A4CCBD5440CCC7069AC6B9201* ___onIntentEntityTriggered_11;
};

// Meta.WitAi.CallbackHandlers.WitResponseMatcher
struct WitResponseMatcher_t6B41EE08DD1CEB6E51894DCB19B4BFE874BA22D8  : public WitIntentMatcher_tE81387B012FD1CDC55B99B00878C5E8EFD0D7F8D
{
	// Meta.WitAi.CallbackHandlers.ValuePathMatcher[] Meta.WitAi.CallbackHandlers.WitResponseMatcher::valueMatchers
	ValuePathMatcherU5BU5D_tDC6C5FBC8AD9CDC953975B35F515F2F1EC24066E* ___valueMatchers_9;
	// Meta.WitAi.CallbackHandlers.FormattedValueEvents[] Meta.WitAi.CallbackHandlers.WitResponseMatcher::formattedValueEvents
	FormattedValueEventsU5BU5D_t0E1D60C2D6BF5C4DCF75ABCAF224658107EF33F5* ___formattedValueEvents_10;
	// Meta.WitAi.CallbackHandlers.MultiValueEvent Meta.WitAi.CallbackHandlers.WitResponseMatcher::onMultiValueEvent
	MultiValueEvent_t00CB59BD55FD6C3F27DABCC7A9A5A3394E717C06* ___onMultiValueEvent_11;
	// Meta.WitAi.Utilities.StringEvent Meta.WitAi.CallbackHandlers.WitResponseMatcher::onDidNotMatch
	StringEvent_tC948A866B2D2C1ECC0783ABC07A4B876C8E28B5B* ___onDidNotMatch_12;
	// Meta.WitAi.Utilities.StringEvent Meta.WitAi.CallbackHandlers.WitResponseMatcher::onOutOfDomain
	StringEvent_tC948A866B2D2C1ECC0783ABC07A4B876C8E28B5B* ___onOutOfDomain_13;
};

struct WitResponseMatcher_t6B41EE08DD1CEB6E51894DCB19B4BFE874BA22D8_StaticFields
{
	// System.Text.RegularExpressions.Regex Meta.WitAi.CallbackHandlers.WitResponseMatcher::valueRegex
	Regex_tE773142C2BE45C5D362B0F815AFF831707A51772* ___valueRegex_14;
};
#ifdef __clang__
#pragma clang diagnostic pop
#endif
// System.Delegate[]
struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771  : public RuntimeArray
{
	ALIGN_FIELD (8) Delegate_t* m_Items[1];

	inline Delegate_t* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Delegate_t** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Delegate_t* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline Delegate_t* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Delegate_t** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Delegate_t* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// Meta.WitAi.Json.JsonConverter[]
struct JsonConverterU5BU5D_tF117D3A16A2A7AAC2A66A7EDCD32E3F48B704DDA  : public RuntimeArray
{
	ALIGN_FIELD (8) JsonConverter_t1EC0651CD277ABEFD390D833BEAB25A034223BE6* m_Items[1];

	inline JsonConverter_t1EC0651CD277ABEFD390D833BEAB25A034223BE6* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline JsonConverter_t1EC0651CD277ABEFD390D833BEAB25A034223BE6** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, JsonConverter_t1EC0651CD277ABEFD390D833BEAB25A034223BE6* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline JsonConverter_t1EC0651CD277ABEFD390D833BEAB25A034223BE6* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline JsonConverter_t1EC0651CD277ABEFD390D833BEAB25A034223BE6** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, JsonConverter_t1EC0651CD277ABEFD390D833BEAB25A034223BE6* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// Meta.WitAi.Requests.VoiceServiceRequestOptions/QueryParam[]
struct QueryParamU5BU5D_tECB106E0E9D39573F239DA1C256E0922C6DDFE10  : public RuntimeArray
{
	ALIGN_FIELD (8) QueryParam_t9D43428FEE0F1D498A2606403DF54F2B48B0C76F* m_Items[1];

	inline QueryParam_t9D43428FEE0F1D498A2606403DF54F2B48B0C76F* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline QueryParam_t9D43428FEE0F1D498A2606403DF54F2B48B0C76F** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, QueryParam_t9D43428FEE0F1D498A2606403DF54F2B48B0C76F* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline QueryParam_t9D43428FEE0F1D498A2606403DF54F2B48B0C76F* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline QueryParam_t9D43428FEE0F1D498A2606403DF54F2B48B0C76F** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, QueryParam_t9D43428FEE0F1D498A2606403DF54F2B48B0C76F* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// UnityEngine.GameObject[]
struct GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF  : public RuntimeArray
{
	ALIGN_FIELD (8) GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* m_Items[1];

	inline GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline GameObject_t76FEDD663AB33C991A9C9A23129337651094216F** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline GameObject_t76FEDD663AB33C991A9C9A23129337651094216F** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// System.Single[]
struct SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C  : public RuntimeArray
{
	ALIGN_FIELD (8) float m_Items[1];

	inline float GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline float* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, float value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline float GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline float* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, float value)
	{
		m_Items[index] = value;
	}
};
// Meta.WitAi.Data.RingBuffer`1/ByteDataWriter<System.Byte>[]
struct ByteDataWriterU5BU5D_t65BFCE3A23A6A9D43E7311E07FE38BAD340ADA5B  : public RuntimeArray
{
	ALIGN_FIELD (8) ByteDataWriter_t42C70174C8038884885A93F156C878EC779F882D* m_Items[1];

	inline ByteDataWriter_t42C70174C8038884885A93F156C878EC779F882D* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline ByteDataWriter_t42C70174C8038884885A93F156C878EC779F882D** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, ByteDataWriter_t42C70174C8038884885A93F156C878EC779F882D* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline ByteDataWriter_t42C70174C8038884885A93F156C878EC779F882D* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline ByteDataWriter_t42C70174C8038884885A93F156C878EC779F882D** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, ByteDataWriter_t42C70174C8038884885A93F156C878EC779F882D* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// System.Byte[]
struct ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031  : public RuntimeArray
{
	ALIGN_FIELD (8) uint8_t m_Items[1];

	inline uint8_t GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline uint8_t* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, uint8_t value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline uint8_t GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline uint8_t* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, uint8_t value)
	{
		m_Items[index] = value;
	}
};
// Meta.WitAi.Data.Entities.WitDynamicEntitiesData[]
struct WitDynamicEntitiesDataU5BU5D_t04480B2CB2C361B83EA9E1237F827D9287EBDD36  : public RuntimeArray
{
	ALIGN_FIELD (8) WitDynamicEntitiesData_t372BA7AB1BA929F633A88ADF252C252444A79146* m_Items[1];

	inline WitDynamicEntitiesData_t372BA7AB1BA929F633A88ADF252C252444A79146* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline WitDynamicEntitiesData_t372BA7AB1BA929F633A88ADF252C252444A79146** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, WitDynamicEntitiesData_t372BA7AB1BA929F633A88ADF252C252444A79146* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline WitDynamicEntitiesData_t372BA7AB1BA929F633A88ADF252C252444A79146* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline WitDynamicEntitiesData_t372BA7AB1BA929F633A88ADF252C252444A79146** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, WitDynamicEntitiesData_t372BA7AB1BA929F633A88ADF252C252444A79146* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// Meta.WitAi.Data.Entities.WitDynamicEntity[]
struct WitDynamicEntityU5BU5D_tAF932D5132E6589F964FB76D2FB82BFA9E0EDB7F  : public RuntimeArray
{
	ALIGN_FIELD (8) WitDynamicEntity_tE0824DEF90E6E8AA7D10CC0A6892B4C1018DE2B4* m_Items[1];

	inline WitDynamicEntity_tE0824DEF90E6E8AA7D10CC0A6892B4C1018DE2B4* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline WitDynamicEntity_tE0824DEF90E6E8AA7D10CC0A6892B4C1018DE2B4** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, WitDynamicEntity_tE0824DEF90E6E8AA7D10CC0A6892B4C1018DE2B4* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline WitDynamicEntity_tE0824DEF90E6E8AA7D10CC0A6892B4C1018DE2B4* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline WitDynamicEntity_tE0824DEF90E6E8AA7D10CC0A6892B4C1018DE2B4** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, WitDynamicEntity_tE0824DEF90E6E8AA7D10CC0A6892B4C1018DE2B4* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// System.String[]
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
// Meta.WitAi.Data.Configuration.WitConfigurationAssetData[]
struct WitConfigurationAssetDataU5BU5D_t700D5FE01B115D42C19FDAB600E6E52D045BAB9C  : public RuntimeArray
{
	ALIGN_FIELD (8) WitConfigurationAssetData_t85BC866513E76C112B29F1EE070D1F062C84273A* m_Items[1];

	inline WitConfigurationAssetData_t85BC866513E76C112B29F1EE070D1F062C84273A* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline WitConfigurationAssetData_t85BC866513E76C112B29F1EE070D1F062C84273A** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, WitConfigurationAssetData_t85BC866513E76C112B29F1EE070D1F062C84273A* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline WitConfigurationAssetData_t85BC866513E76C112B29F1EE070D1F062C84273A* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline WitConfigurationAssetData_t85BC866513E76C112B29F1EE070D1F062C84273A** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, WitConfigurationAssetData_t85BC866513E76C112B29F1EE070D1F062C84273A* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// Meta.WitAi.Data.Intents.WitIntentData[]
struct WitIntentDataU5BU5D_tA1E1A7F9E9C566D8BA4049F086E2ECD245E7ABF4  : public RuntimeArray
{
	ALIGN_FIELD (8) WitIntentData_tAEC870A54A863E27A1FDC98AE01CA9C99F22F515* m_Items[1];

	inline WitIntentData_tAEC870A54A863E27A1FDC98AE01CA9C99F22F515* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline WitIntentData_tAEC870A54A863E27A1FDC98AE01CA9C99F22F515** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, WitIntentData_tAEC870A54A863E27A1FDC98AE01CA9C99F22F515* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline WitIntentData_tAEC870A54A863E27A1FDC98AE01CA9C99F22F515* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline WitIntentData_tAEC870A54A863E27A1FDC98AE01CA9C99F22F515** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, WitIntentData_tAEC870A54A863E27A1FDC98AE01CA9C99F22F515* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// Meta.WitAi.CallbackHandlers.ConfidenceRange[]
struct ConfidenceRangeU5BU5D_t436B72D1C2A21AE91F57767E7CCA104C79700583  : public RuntimeArray
{
	ALIGN_FIELD (8) ConfidenceRange_tE0A93D2F39AE1C9E6340C39D30A9201709B737E8* m_Items[1];

	inline ConfidenceRange_tE0A93D2F39AE1C9E6340C39D30A9201709B737E8* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline ConfidenceRange_tE0A93D2F39AE1C9E6340C39D30A9201709B737E8** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, ConfidenceRange_tE0A93D2F39AE1C9E6340C39D30A9201709B737E8* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline ConfidenceRange_tE0A93D2F39AE1C9E6340C39D30A9201709B737E8* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline ConfidenceRange_tE0A93D2F39AE1C9E6340C39D30A9201709B737E8** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, ConfidenceRange_tE0A93D2F39AE1C9E6340C39D30A9201709B737E8* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// Meta.WitAi.CallbackHandlers.ValuePathMatcher[]
struct ValuePathMatcherU5BU5D_tDC6C5FBC8AD9CDC953975B35F515F2F1EC24066E  : public RuntimeArray
{
	ALIGN_FIELD (8) ValuePathMatcher_t2058BD1F2F9C5A162DFBD3FE61BD97F2D840E35E* m_Items[1];

	inline ValuePathMatcher_t2058BD1F2F9C5A162DFBD3FE61BD97F2D840E35E* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline ValuePathMatcher_t2058BD1F2F9C5A162DFBD3FE61BD97F2D840E35E** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, ValuePathMatcher_t2058BD1F2F9C5A162DFBD3FE61BD97F2D840E35E* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline ValuePathMatcher_t2058BD1F2F9C5A162DFBD3FE61BD97F2D840E35E* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline ValuePathMatcher_t2058BD1F2F9C5A162DFBD3FE61BD97F2D840E35E** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, ValuePathMatcher_t2058BD1F2F9C5A162DFBD3FE61BD97F2D840E35E* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// Meta.WitAi.CallbackHandlers.FormattedValueEvents[]
struct FormattedValueEventsU5BU5D_t0E1D60C2D6BF5C4DCF75ABCAF224658107EF33F5  : public RuntimeArray
{
	ALIGN_FIELD (8) FormattedValueEvents_t0D0D440F35C91FAA243428A4B45156402090018C* m_Items[1];

	inline FormattedValueEvents_t0D0D440F35C91FAA243428A4B45156402090018C* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline FormattedValueEvents_t0D0D440F35C91FAA243428A4B45156402090018C** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, FormattedValueEvents_t0D0D440F35C91FAA243428A4B45156402090018C* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline FormattedValueEvents_t0D0D440F35C91FAA243428A4B45156402090018C* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline FormattedValueEvents_t0D0D440F35C91FAA243428A4B45156402090018C** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, FormattedValueEvents_t0D0D440F35C91FAA243428A4B45156402090018C* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// System.Object[]
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918  : public RuntimeArray
{
	ALIGN_FIELD (8) RuntimeObject* m_Items[1];

	inline RuntimeObject* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline RuntimeObject** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, RuntimeObject* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline RuntimeObject* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline RuntimeObject** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, RuntimeObject* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// Meta.WitAi.Data.Info.WitEntityKeywordInfo[]
struct WitEntityKeywordInfoU5BU5D_tF62D7B36A857239604E3BF89B6088F63129EF811  : public RuntimeArray
{
	ALIGN_FIELD (8) WitEntityKeywordInfo_tE0A290B8BFF00EF007649834C336D5DD48DA445B m_Items[1];

	inline WitEntityKeywordInfo_tE0A290B8BFF00EF007649834C336D5DD48DA445B GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline WitEntityKeywordInfo_tE0A290B8BFF00EF007649834C336D5DD48DA445B* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, WitEntityKeywordInfo_tE0A290B8BFF00EF007649834C336D5DD48DA445B value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___keyword_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___synonyms_1), (void*)NULL);
		#endif
	}
	inline WitEntityKeywordInfo_tE0A290B8BFF00EF007649834C336D5DD48DA445B GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline WitEntityKeywordInfo_tE0A290B8BFF00EF007649834C336D5DD48DA445B* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, WitEntityKeywordInfo_tE0A290B8BFF00EF007649834C336D5DD48DA445B value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___keyword_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___synonyms_1), (void*)NULL);
		#endif
	}
};


// Meta.Voice.NLPRequestInputType Meta.Voice.NLPRequest`4<System.Object,System.Object,System.Object,System.Object>::get_InputType()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t NLPRequest_4_get_InputType_mC9E0344101339A2209EA096521A03EF91B035FA7_gshared_inline (NLPRequest_4_t79F59B9AB3FBFADB04B729AEF19245FE89658855* __this, const RuntimeMethod* method) ;
// System.Void Meta.Voice.NLPRequest`4<System.Object,System.Object,System.Object,System.Object>::SetState(Meta.Voice.VoiceRequestState)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NLPRequest_4_SetState_mB8CC8E4CB8C5724742D34D6E9B0114B945D51EEE_gshared (NLPRequest_4_t79F59B9AB3FBFADB04B729AEF19245FE89658855* __this, int32_t ___newState0, const RuntimeMethod* method) ;
// System.String Meta.Voice.NLPRequest`4<System.Object,System.Object,System.Object,System.Object>::GetSendError()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* NLPRequest_4_GetSendError_m07511B1461016292007C011A58C4CEB34D680100_gshared (NLPRequest_4_t79F59B9AB3FBFADB04B729AEF19245FE89658855* __this, const RuntimeMethod* method) ;
// TOptions Meta.Voice.VoiceRequest`4<System.Object,System.Object,System.Object,System.Object>::get_Options()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* VoiceRequest_4_get_Options_m9E49C7F16D2A38536F351223A546E161B86E6F1A_gshared_inline (VoiceRequest_4_t6799EEA3F92FAD2873D8E4F7650667AA90E2F95B* __this, const RuntimeMethod* method) ;
// System.Void Meta.WitAi.Requests.VRequest/RequestCompleteDelegate`1<System.Object>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RequestCompleteDelegate_1__ctor_m5B4BD9930967DA4A93C01EE87192DA6DBB2988F1_gshared (RequestCompleteDelegate_1_t336E76112EC94D50E34938D06BC1F55D2227D738* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) ;
// System.Void Meta.Voice.NLPAudioRequest`4<System.Object,System.Object,System.Object,System.Object>::HandleFinalNlpResponse(Meta.WitAi.Json.WitResponseNode,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NLPAudioRequest_4_HandleFinalNlpResponse_m07D62D99C62E510AE1CD1442D2D8613394C14496_gshared (NLPAudioRequest_4_tB6B029BFDAEFFA17E2FA29CA64C51F87D70DE9CA* __this, WitResponseNode_t1BFF810F15B21416F5F6D0A1CAAF03CEF942038C* ___responseData0, String_t* ___error1, const RuntimeMethod* method) ;
// System.Void UnityEngine.Events.UnityEvent`2<System.Int64,System.Double>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityEvent_2__ctor_mE88C79B88E89F48201D5486B2C02E988D2712CD8_gshared (UnityEvent_2_t8D8E787461BECB35F2627E8001A36D825CA99A97* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.HashSet`1<System.Object>::.ctor(System.Collections.Generic.IEnumerable`1<T>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HashSet_1__ctor_mC13D3ADFE27A073EC3C583E9C926C801A7EE1DDD_gshared (HashSet_1_t2F33BEB06EEA4A872E2FAF464382422AA39AE885* __this, RuntimeObject* ___collection0, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.List`1<System.Object>::Contains(T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool List_1_Contains_m4C9139C2A6B23E9343D3F87807B32C6E2CFE660D_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, RuntimeObject* ___item0, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Object>::Add(T)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, RuntimeObject* ___item0, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.HashSet`1<System.Object>::Add(T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool HashSet_1_Add_m2CD7657B3459B61DD4BBA47024AC71F7D319658B_gshared (HashSet_1_t2F33BEB06EEA4A872E2FAF464382422AA39AE885* __this, RuntimeObject* ___item0, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.List`1<System.Object>::Remove(T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool List_1_Remove_m4DFA48F4CEB9169601E75FC28517C5C06EFA5AD7_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, RuntimeObject* ___item0, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.HashSet`1<System.Object>::Remove(T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool HashSet_1_Remove_mF1D84C0A2829DDA2A0CEE1D82A5B999B5F6627CB_gshared (HashSet_1_t2F33BEB06EEA4A872E2FAF464382422AA39AE885* __this, RuntimeObject* ___item0, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.HashSet`1<System.Object>::Contains(T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool HashSet_1_Contains_m9BACE52BFA0BD83C601529D3629118453E459BBB_gshared (HashSet_1_t2F33BEB06EEA4A872E2FAF464382422AA39AE885* __this, RuntimeObject* ___item0, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_m7F078BB342729BDF11327FD89D7872265328F690_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Events.UnityEvent`1<System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityEvent_1__ctor_m8D77F4F05F69D0E52E8A445322811EEC25987525_gshared (UnityEvent_1_t3CE03B42D5873C0C0E0692BEE72E1E6D5399F205* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Events.UnityEvent`3<System.Object,System.Int32,System.Int32>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityEvent_3__ctor_m941EF00E4EF658BB1461C8BD9E6527F9E495DCFE_gshared (UnityEvent_3_tD7E14BDD38F12B63EFECBD1604C666F9AF100EAA* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Events.UnityEvent`2<System.Object,System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityEvent_2__ctor_m36CB65F6682CF6EFB69FE2F1939D331599C453E3_gshared (UnityEvent_2_t77BDA795C84FBEFE9D3AE3DCA619B97A9F423961* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Events.UnityEvent`1<System.Single>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityEvent_1__ctor_mD1175E822AFF26E9A43F2FB692BB82525C6DD422_gshared (UnityEvent_1_tDD811EB8F49CEE97BA6DF59344DFE6C6F42553D4* __this, const RuntimeMethod* method) ;
// System.Int32 System.Collections.Generic.HashSet`1<System.Object>::get_Count()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t HashSet_1_get_Count_m41CC85EEB7855CEFA3BC7A32F115387939318ED3_gshared_inline (HashSet_1_t2F33BEB06EEA4A872E2FAF464382422AA39AE885* __this, const RuntimeMethod* method) ;
// System.Void System.Func`2<System.Object,System.Object>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Func_2__ctor_m7F8A01C0B02BC1D4063F4EB1E817F7A48562A398_gshared (Func_2_tACBF5A1656250800CE861707354491F0611F6624* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) ;
// System.Void Meta.WitAi.Events.SpeechEvents::SetEvent<System.Object>(System.Func`2<Meta.WitAi.Events.SpeechEvents,UnityEngine.Events.UnityEvent`1<T>>,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpeechEvents_SetEvent_TisRuntimeObject_mC8A5CFB6CB56C8412D6D2C3724268FBA649CCA4A_gshared (SpeechEvents_tB51C31627EF79AB5734270C1558A6C6F67A5040E* __this, Func_2_tF288A256AA0632950A529954419DA3E50DEB972B* ___getEvent0, bool ___add1, const RuntimeMethod* method) ;
// System.Void Meta.WitAi.Events.SpeechEvents::SetEvent<System.Object,System.Object>(System.Func`2<Meta.WitAi.Events.SpeechEvents,UnityEngine.Events.UnityEvent`2<T,U>>,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpeechEvents_SetEvent_TisRuntimeObject_TisRuntimeObject_m89BABB9F45D4AA72764F8373F8A312C7233779E2_gshared (SpeechEvents_tB51C31627EF79AB5734270C1558A6C6F67A5040E* __this, Func_2_tEC4A317B4B6A5981E09F1F82B534DAC20D627027* ___getEvent0, bool ___add1, const RuntimeMethod* method) ;
// System.Void Meta.WitAi.Events.SpeechEvents::SetEvent<System.Single>(System.Func`2<Meta.WitAi.Events.SpeechEvents,UnityEngine.Events.UnityEvent`1<T>>,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpeechEvents_SetEvent_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m8B9866152A783B00DC62BD6760C64DEF55F7D5CA_gshared (SpeechEvents_tB51C31627EF79AB5734270C1558A6C6F67A5040E* __this, Func_2_t0F30FACC4CABFFD27DDEBE31FB321AA523A06B7D* ___getEvent0, bool ___add1, const RuntimeMethod* method) ;
// TResult System.Func`2<System.Object,System.Object>::Invoke(T)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* Func_2_Invoke_mDBA25DA5DA5B7E056FB9B026AF041F1385FB58A9_gshared_inline (Func_2_tACBF5A1656250800CE861707354491F0611F6624* __this, RuntimeObject* ___arg0, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.HashSet`1<System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HashSet_1__ctor_m9132EE1422BAA45E44B7FFF495F378790D36D90E_gshared (HashSet_1_t2F33BEB06EEA4A872E2FAF464382422AA39AE885* __this, const RuntimeMethod* method) ;
// System.Collections.Generic.HashSet`1/Enumerator<T> System.Collections.Generic.HashSet`1<System.Object>::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Enumerator_t72556E98D7DDBE118A973D782D523D15A96461C8 HashSet_1_GetEnumerator_m143B98FEED7E9CABA2C494AB2F04DAD60A504635_gshared (HashSet_1_t2F33BEB06EEA4A872E2FAF464382422AA39AE885* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.HashSet`1/Enumerator<System.Object>::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator_Dispose_mFB582AEAA2E73F3128B5571197BEDE256A83F657_gshared (Enumerator_t72556E98D7DDBE118A973D782D523D15A96461C8* __this, const RuntimeMethod* method) ;
// T System.Collections.Generic.HashSet`1/Enumerator<System.Object>::get_Current()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* Enumerator_get_Current_m139A176CD271A0532D75BE08DA7831C8C45CE28F_gshared_inline (Enumerator_t72556E98D7DDBE118A973D782D523D15A96461C8* __this, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.HashSet`1/Enumerator<System.Object>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Enumerator_MoveNext_m27565F5ACCCC75C3DD34CC4CAE3E6AEFEB9144A6_gshared (Enumerator_t72556E98D7DDBE118A973D782D523D15A96461C8* __this, const RuntimeMethod* method) ;
// T UnityEngine.Component::GetComponent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Events.UnityAction`1<System.Single>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityAction_1__ctor_mF770070D0A4FE93F6E04DA37D2EC60429EA545E5_gshared (UnityAction_1_tAEFA3C1C529F0E1AD7C7C7AFC88822D359E7AC90* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) ;
// System.Void UnityEngine.Events.UnityEvent`1<System.Single>::AddListener(UnityEngine.Events.UnityAction`1<T0>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityEvent_1_AddListener_m44E396BC4484BD75427FDD8CBE0B533CCAD8C1EC_gshared (UnityEvent_1_tDD811EB8F49CEE97BA6DF59344DFE6C6F42553D4* __this, UnityAction_1_tAEFA3C1C529F0E1AD7C7C7AFC88822D359E7AC90* ___call0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Events.UnityEvent`1<System.Single>::RemoveListener(UnityEngine.Events.UnityAction`1<T0>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityEvent_1_RemoveListener_m6F51818308066F0E5EA7B37AC25ABDF12FADAEA9_gshared (UnityEvent_1_tDD811EB8F49CEE97BA6DF59344DFE6C6F42553D4* __this, UnityAction_1_tAEFA3C1C529F0E1AD7C7C7AFC88822D359E7AC90* ___call0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Events.UnityAction`1<System.Object>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityAction_1__ctor_m0C2FC6B483B474AE9596A43EBA7FF6E85503A92A_gshared (UnityAction_1_t9C30BCD020745BF400CBACF22C6F34ADBA2DDA6A* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) ;
// System.Void UnityEngine.Events.UnityEvent`1<System.Object>::AddListener(UnityEngine.Events.UnityAction`1<T0>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityEvent_1_AddListener_m055233246714700E4BDAA62635BC0AA49E8165CC_gshared (UnityEvent_1_t3CE03B42D5873C0C0E0692BEE72E1E6D5399F205* __this, UnityAction_1_t9C30BCD020745BF400CBACF22C6F34ADBA2DDA6A* ___call0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Events.UnityEvent`1<System.Object>::RemoveListener(UnityEngine.Events.UnityAction`1<T0>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityEvent_1_RemoveListener_m904FA6BDD0D33FDF8650EF816FF5C131867E693E_gshared (UnityEvent_1_t3CE03B42D5873C0C0E0692BEE72E1E6D5399F205* __this, UnityAction_1_t9C30BCD020745BF400CBACF22C6F34ADBA2DDA6A* ___call0, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_m5B32FBC624618211EB461D59CFBB10E987FD1329_gshared (Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::set_Item(TKey,TValue)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_set_Item_m1A840355E8EDAECEA9D0C6F5E51B248FAA449CBD_gshared (Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* __this, RuntimeObject* ___key0, RuntimeObject* ___value1, const RuntimeMethod* method) ;
// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Object>::get_Keys()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR KeyCollection_tB45A861D090B15129521119AE48ED3813820A974* Dictionary_2_get_Keys_m72D290F90654BFD683FA7AA7C63D9F4F692218B6_gshared (Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* __this, const RuntimeMethod* method) ;
// System.Collections.Generic.Dictionary`2/KeyCollection/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2/KeyCollection<System.Object,System.Object>::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Enumerator_t65CC956745B1180C04CE6C6910FB27C5F32BB9FF KeyCollection_GetEnumerator_m7E77FBA7DE2D3876EC02F396712C4AA5B1D535A5_gshared (KeyCollection_tB45A861D090B15129521119AE48ED3813820A974* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2/KeyCollection/Enumerator<System.Object,System.Object>::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator_Dispose_mEB2A61F3F3F420C1B1DFD5C74EEFD4BD7761BCF7_gshared (Enumerator_t65CC956745B1180C04CE6C6910FB27C5F32BB9FF* __this, const RuntimeMethod* method) ;
// TKey System.Collections.Generic.Dictionary`2/KeyCollection/Enumerator<System.Object,System.Object>::get_Current()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* Enumerator_get_Current_mD6472FA27D28B9AE64A0FEF796C72ABBC2420EBF_gshared_inline (Enumerator_t65CC956745B1180C04CE6C6910FB27C5F32BB9FF* __this, const RuntimeMethod* method) ;
// TValue System.Collections.Generic.Dictionary`2<System.Object,System.Object>::get_Item(TKey)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Dictionary_2_get_Item_m4AAAECBE902A211BF2126E6AFA280AEF73A3E0D6_gshared (Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* __this, RuntimeObject* ___key0, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.Dictionary`2/KeyCollection/Enumerator<System.Object,System.Object>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Enumerator_MoveNext_mB5E00F11BCA3AC963F9BA72659FA76B107863F3C_gshared (Enumerator_t65CC956745B1180C04CE6C6910FB27C5F32BB9FF* __this, const RuntimeMethod* method) ;
// System.String Meta.WitAi.Json.JsonConvert::SerializeObject<System.Object>(FROM_TYPE,Meta.WitAi.Json.JsonConverter[],System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* JsonConvert_SerializeObject_TisRuntimeObject_m38455FCF691812B499C0745839BE4B53DBC47D75_gshared (RuntimeObject* ___inObject0, JsonConverterU5BU5D_tF117D3A16A2A7AAC2A66A7EDCD32E3F48B704DDA* ___customConverters1, bool ___suppressWarnings2, const RuntimeMethod* method) ;
// T[] System.Array::Empty<System.Object>()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_gshared_inline (const RuntimeMethod* method) ;
// T UnityEngine.Object::FindObjectOfType<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Object_FindObjectOfType_TisRuntimeObject_m02DFBF011F3B59F777A5E521DB2A116DD496E968_gshared (const RuntimeMethod* method) ;
// T UnityEngine.GameObject::AddComponent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* GameObject_AddComponent_TisRuntimeObject_m69B93700FACCF372F5753371C6E8FB780800B824_gshared (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method) ;
// T UnityEngine.GameObject::GetComponentInChildren<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* GameObject_GetComponentInChildren_TisRuntimeObject_mED181B37054A10395CA356010754C7DFC685893C_gshared (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method) ;
// System.Void System.Action`3<System.Int32,System.Object,System.Single>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action_3__ctor_m4DF8F60E9446A6DA0A67F2DBEEBF612A0FEF68FF_gshared (Action_3_t041F9EB77535247CDCF010C1F285CCCEFE9E2F04* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) ;
// System.Void UnityEngine.Events.UnityEvent`1<System.Single>::Invoke(T0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityEvent_1_Invoke_mABC41DCEDDFA68F8F39C0DFC1CF55B7C1B70A805_gshared (UnityEvent_1_tDD811EB8F49CEE97BA6DF59344DFE6C6F42553D4* __this, float ___arg00, const RuntimeMethod* method) ;
// Meta.WitAi.Data.RingBuffer`1/Marker<T> Meta.WitAi.Data.RingBuffer`1/Marker<System.Byte>::Clone()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Marker_t80D0133ECCCB8414D295FFD7C3FB9E6E564F5E42* Marker_Clone_mE4396CFC59F594A985AC0B08B4962A66A22425FE_gshared (Marker_t80D0133ECCCB8414D295FFD7C3FB9E6E564F5E42* __this, const RuntimeMethod* method) ;
// System.Void Meta.WitAi.Data.RingBuffer`1/ByteDataWriter<System.Byte>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ByteDataWriter__ctor_m9D61B1D1D35A39F6085FB52CE3F50E20FBA9F3E8_gshared (ByteDataWriter_t42C70174C8038884885A93F156C878EC779F882D* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) ;
// System.Void Meta.WitAi.Data.RingBuffer`1/Marker<System.Byte>::ReadIntoWriters(Meta.WitAi.Data.RingBuffer`1/ByteDataWriter<T>[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Marker_ReadIntoWriters_mA97BA1DC688916D2951B8891A59A3B834F3C5ACE_gshared (Marker_t80D0133ECCCB8414D295FFD7C3FB9E6E564F5E42* __this, ByteDataWriterU5BU5D_t65BFCE3A23A6A9D43E7311E07FE38BAD340ADA5B* ___writers0, const RuntimeMethod* method) ;
// System.Void Meta.WitAi.Data.RingBuffer`1<System.Byte>::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RingBuffer_1__ctor_m7784E3644A1B55E96CBD6EEF4216CABCD9723A65_gshared (RingBuffer_1_t553FDAA382235F13BBC8000565860BFE1438D276* __this, int32_t ___capacity0, const RuntimeMethod* method) ;
// System.Void Meta.WitAi.Data.RingBuffer`1<System.Byte>::Push(T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RingBuffer_1_Push_m8B341749D1C9AE76A94F221A79BBC887BD6F1AED_gshared (RingBuffer_1_t553FDAA382235F13BBC8000565860BFE1438D276* __this, uint8_t ___data0, const RuntimeMethod* method) ;
// Meta.WitAi.Data.RingBuffer`1/Marker<T> Meta.WitAi.Data.RingBuffer`1<System.Byte>::CreateMarker(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Marker_t80D0133ECCCB8414D295FFD7C3FB9E6E564F5E42* RingBuffer_1_CreateMarker_m0631E48C13008F51BFD02F5691BB9A260DBE83B4_gshared (RingBuffer_1_t553FDAA382235F13BBC8000565860BFE1438D276* __this, int32_t ___offset0, const RuntimeMethod* method) ;
// System.Void System.Func`1<System.Boolean>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Func_1__ctor_mDFFAE9C73346372438B5B04C4558AC42F1A3DA22_gshared (Func_1_t2BE7F58348C9CC544A8973B3A9E55541DE43C457* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) ;
// System.Boolean Meta.WitAi.Json.JsonConvert::DeserializeIntoObject<System.Object>(IN_TYPE&,Meta.WitAi.Json.WitResponseNode,Meta.WitAi.Json.JsonConverter[],System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool JsonConvert_DeserializeIntoObject_TisRuntimeObject_mACBB7A644948338D002EE40DA9E3C0ED53AD12F3_gshared (RuntimeObject** ___instance0, WitResponseNode_t1BFF810F15B21416F5F6D0A1CAAF03CEF942038C* ___jsonToken1, JsonConverterU5BU5D_tF117D3A16A2A7AAC2A66A7EDCD32E3F48B704DDA* ___customConverters2, bool ___suppressWarnings3, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Object>::AddRange(System.Collections.Generic.IEnumerable`1<T>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_AddRange_m1F76B300133150E6046C5FED00E88B5DE0A02E17_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, RuntimeObject* ___collection0, const RuntimeMethod* method) ;
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<System.Object>::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A List_1_GetEnumerator_mD8294A7FA2BEB1929487127D476F8EC1CDC23BFC_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1/Enumerator<System.Object>::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator_Dispose_mD9DC3E3C3697830A4823047AB29A77DBBB5ED419_gshared (Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A* __this, const RuntimeMethod* method) ;
// T System.Collections.Generic.List`1/Enumerator<System.Object>::get_Current()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* Enumerator_get_Current_m6330F15D18EE4F547C05DF9BF83C5EB710376027_gshared_inline (Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A* __this, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.List`1/Enumerator<System.Object>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Enumerator_MoveNext_mE921CC8F29FBBDE7CC3209A0ED0D921D58D00BCB_gshared (Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A* __this, const RuntimeMethod* method) ;
// System.Void System.Predicate`1<System.Object>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Predicate_1__ctor_m3E007299121A15DF80F4A210FF8C20E5DF688F20_gshared (Predicate_1_t8342C85FF4E41CD1F7024AC0CDC3E5312A32CB12* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) ;
// System.Int32 System.Collections.Generic.List`1<System.Object>::FindIndex(System.Predicate`1<T>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t List_1_FindIndex_m9875FFE328FA833B2617915FF976DEDA4724EBC3_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, Predicate_1_t8342C85FF4E41CD1F7024AC0CDC3E5312A32CB12* ___match0, const RuntimeMethod* method) ;
// T System.Collections.Generic.List`1<System.Object>::Find(System.Predicate`1<T>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* List_1_Find_m5E78A210541B0D844FE27B94F509313623BE33D3_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, Predicate_1_t8342C85FF4E41CD1F7024AC0CDC3E5312A32CB12* ___match0, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<Meta.WitAi.Data.Info.WitEntityKeywordInfo>::Add(T)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Add_mB785B35A5407068979C269B25532380F897AF875_gshared_inline (List_1_t4F3133982BFC53A2508E8212590377CE60E9596C* __this, WitEntityKeywordInfo_tE0A290B8BFF00EF007649834C336D5DD48DA445B ___item0, const RuntimeMethod* method) ;
// T System.Collections.Generic.List`1<System.Object>::get_Item(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* List_1_get_Item_m33561245D64798C2AB07584C0EC4F240E4839A38_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, int32_t ___index0, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.List`1<Meta.WitAi.Data.Info.WitEntityKeywordInfo>::Remove(T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool List_1_Remove_m04D253F0F05F9150C8F833AD48BA9BD48A0F3F89_gshared (List_1_t4F3133982BFC53A2508E8212590377CE60E9596C* __this, WitEntityKeywordInfo_tE0A290B8BFF00EF007649834C336D5DD48DA445B ___item0, const RuntimeMethod* method) ;
// System.Int32 System.Collections.Generic.List`1<Meta.WitAi.Data.Info.WitEntityKeywordInfo>::get_Count()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_mE0AFF33D783CDEE097B45A7077DE1721E0138FE9_gshared_inline (List_1_t4F3133982BFC53A2508E8212590377CE60E9596C* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Object>::RemoveAt(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_RemoveAt_m54F62297ADEE4D4FDA697F49ED807BF901201B54_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, int32_t ___index0, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<Meta.WitAi.Data.Info.WitEntityKeywordInfo>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_m038E1782678F97D19BF54E473C8DFF06B41723BD_gshared (List_1_t4F3133982BFC53A2508E8212590377CE60E9596C* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Object>::.ctor(System.Collections.Generic.IEnumerable`1<T>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_mE097DBD72433D1AFC11733F5678602603A756424_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, RuntimeObject* ___collection0, const RuntimeMethod* method) ;
// System.Collections.Generic.Dictionary`2/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Object>::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Enumerator_tEA93FE2B778D098F590CA168BEFC4CD85D73A6B9 Dictionary_2_GetEnumerator_m52AB12790B0B9B46B1DFB1F861C9DBEAB07C1FDA_gshared (Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Object>::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator_Dispose_mEA5E01B81EB943B7003D87CEC1B6040524F0402C_gshared (Enumerator_tEA93FE2B778D098F590CA168BEFC4CD85D73A6B9* __this, const RuntimeMethod* method) ;
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Object>::get_Current()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230 Enumerator_get_Current_mE3475384B761E1C7971D3639BD09117FE8363422_gshared_inline (Enumerator_tEA93FE2B778D098F590CA168BEFC4CD85D73A6B9* __this, const RuntimeMethod* method) ;
// TKey System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>::get_Key()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* KeyValuePair_2_get_Key_mBD8EA7557C27E6956F2AF29DA3F7499B2F51A282_gshared_inline (KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230* __this, const RuntimeMethod* method) ;
// TValue System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>::get_Value()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* KeyValuePair_2_get_Value_mC6BD8075F9C9DDEF7B4D731E5C38EC19103988E7_gshared_inline (KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230* __this, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Object>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Enumerator_MoveNext_mCD4950A75FFADD54AF354D48C6C0DB0B5A22A5F4_gshared (Enumerator_tEA93FE2B778D098F590CA168BEFC4CD85D73A6B9* __this, const RuntimeMethod* method) ;
// Meta.WitAi.Json.WitResponseNode Meta.WitAi.Json.JsonConvert::SerializeToken<System.Object>(FROM_TYPE,Meta.WitAi.Json.JsonConverter[],System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR WitResponseNode_t1BFF810F15B21416F5F6D0A1CAAF03CEF942038C* JsonConvert_SerializeToken_TisRuntimeObject_m64CDC12E7FDF747B09B4179F960705A5A6435C16_gshared (RuntimeObject* ___inObject0, JsonConverterU5BU5D_tF117D3A16A2A7AAC2A66A7EDCD32E3F48B704DDA* ___customConverters1, bool ___suppressWarnings2, const RuntimeMethod* method) ;
// System.Void Meta.WitAi.Data.Entities.WitEntityDataBase`1<System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WitEntityDataBase_1__ctor_m5C970DAB1C9B01D04F0BD6D9B2FCE291BF11ACF9_gshared (WitEntityDataBase_1_t3ECCF60AD343C4AF152B57E138A9D0F8A8D94C0A* __this, const RuntimeMethod* method) ;
// Meta.WitAi.Data.Entities.WitEntityDataBase`1<T> Meta.WitAi.Data.Entities.WitEntityDataBase`1<System.Object>::FromEntityWitResponseNode(Meta.WitAi.Json.WitResponseNode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR WitEntityDataBase_1_t3ECCF60AD343C4AF152B57E138A9D0F8A8D94C0A* WitEntityDataBase_1_FromEntityWitResponseNode_m86F61120798C478643AF4031DE9CC7CE890E7DF1_gshared (WitEntityDataBase_1_t3ECCF60AD343C4AF152B57E138A9D0F8A8D94C0A* __this, WitResponseNode_t1BFF810F15B21416F5F6D0A1CAAF03CEF942038C* ___node0, const RuntimeMethod* method) ;
// System.Void Meta.WitAi.Data.Entities.WitEntityDataBase`1<System.Single>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WitEntityDataBase_1__ctor_m02EB7DBBEE819293BC6F42383C89E3CABC514E3F_gshared (WitEntityDataBase_1_t90E9F0FB214EED844AD8DD1A97EA3C1FD1EED960* __this, const RuntimeMethod* method) ;
// Meta.WitAi.Data.Entities.WitEntityDataBase`1<T> Meta.WitAi.Data.Entities.WitEntityDataBase`1<System.Single>::FromEntityWitResponseNode(Meta.WitAi.Json.WitResponseNode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR WitEntityDataBase_1_t90E9F0FB214EED844AD8DD1A97EA3C1FD1EED960* WitEntityDataBase_1_FromEntityWitResponseNode_m697E7D61EF38859B86A67FAC7B6062E20F5C91B0_gshared (WitEntityDataBase_1_t90E9F0FB214EED844AD8DD1A97EA3C1FD1EED960* __this, WitResponseNode_t1BFF810F15B21416F5F6D0A1CAAF03CEF942038C* ___node0, const RuntimeMethod* method) ;
// System.Void Meta.WitAi.Data.Entities.WitEntityDataBase`1<System.Int32>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WitEntityDataBase_1__ctor_m47659B0D37AAA587A516AB8F63573058A00A225D_gshared (WitEntityDataBase_1_t46F92AF5EC7866816B6CD6D417773D4FFE270507* __this, const RuntimeMethod* method) ;
// Meta.WitAi.Data.Entities.WitEntityDataBase`1<T> Meta.WitAi.Data.Entities.WitEntityDataBase`1<System.Int32>::FromEntityWitResponseNode(Meta.WitAi.Json.WitResponseNode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR WitEntityDataBase_1_t46F92AF5EC7866816B6CD6D417773D4FFE270507* WitEntityDataBase_1_FromEntityWitResponseNode_m0AACEFF9E3C6FEA0A185EA5A1B1B4EF5FB491FBB_gshared (WitEntityDataBase_1_t46F92AF5EC7866816B6CD6D417773D4FFE270507* __this, WitResponseNode_t1BFF810F15B21416F5F6D0A1CAAF03CEF942038C* ___node0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Events.UnityEvent`1<System.Object>::Invoke(T0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityEvent_1_Invoke_m6CDC8B0639CE8935E2E13D10B2C8E500968130B6_gshared (UnityEvent_1_t3CE03B42D5873C0C0E0692BEE72E1E6D5399F205* __this, RuntimeObject* ___arg00, const RuntimeMethod* method) ;
// T[] System.Collections.Generic.List`1<System.Object>::ToArray()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* List_1_ToArray_mD7E4F8E7C11C3C67CB5739FCC0A6E86106A6291F_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) ;

// System.Void Meta.WitAi.Requests.VoiceServiceRequest::.ctor(Meta.Voice.NLPRequestInputType,Meta.WitAi.Configuration.WitRequestOptions,Meta.WitAi.Requests.VoiceServiceRequestEvents)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VoiceServiceRequest__ctor_m082596AC2C0139EA1BF90D3AE4848CF86082C2FD (VoiceServiceRequest_tCF844F597C059D6A354311EB2BD5644AE5E8E536* __this, int32_t ___newInputType0, WitRequestOptions_tB2E8B103538F7E42F0568C6F62F2158FA45EF483* ___newOptions1, VoiceServiceRequestEvents_t4270DDE59A84A1A65EBF9331C446BBBC7BDE0838* ___newEvents2, const RuntimeMethod* method) ;
// System.Void Meta.WitAi.Requests.WitUnityRequest::set_Configuration(Meta.WitAi.Data.Configuration.WitConfiguration)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void WitUnityRequest_set_Configuration_mE080793F4FCBDCF7EDE3C186D9E8D13558227E16_inline (WitUnityRequest_t8F143C19E420F145BAF16B53988A2AF5B37CB202* __this, WitConfiguration_t85BCD6C826D35078E90334092184A53D1B69C72E* ___value0, const RuntimeMethod* method) ;
// Meta.Voice.NLPRequestInputType Meta.Voice.NLPRequest`4<Meta.WitAi.Requests.VoiceServiceRequestEvent,Meta.WitAi.Configuration.WitRequestOptions,Meta.WitAi.Requests.VoiceServiceRequestEvents,Meta.WitAi.Requests.VoiceServiceRequestResults>::get_InputType()
inline int32_t NLPRequest_4_get_InputType_mD2BFDFAC4CA6C3D22BFDB2B9ABD808E4C887238B_inline (NLPRequest_4_t7177BC2349443FF686C2D98FDB887CA5744C4323* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (NLPRequest_4_t7177BC2349443FF686C2D98FDB887CA5744C4323*, const RuntimeMethod*))NLPRequest_4_get_InputType_mC9E0344101339A2209EA096521A03EF91B035FA7_gshared_inline)(__this, method);
}
// Meta.WitAi.Data.Configuration.WitConfiguration Meta.WitAi.Requests.WitUnityRequest::get_Configuration()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR WitConfiguration_t85BCD6C826D35078E90334092184A53D1B69C72E* WitUnityRequest_get_Configuration_m918FD8ACDB178E13C2E9B871978254E6761EE896_inline (WitUnityRequest_t8F143C19E420F145BAF16B53988A2AF5B37CB202* __this, const RuntimeMethod* method) ;
// System.String Meta.WitAi.Requests.VoiceServiceRequestOptions::get_RequestId()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* VoiceServiceRequestOptions_get_RequestId_mC465590B47E4B5F542BD3E9BED1074D032C1446F_inline (VoiceServiceRequestOptions_tBB80C39F5D734638F03442F09F4F106BD5F20EE4* __this, const RuntimeMethod* method) ;
// System.Void Meta.WitAi.Requests.VRequest/RequestProgressDelegate::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RequestProgressDelegate__ctor_m3E241D94035D7034B4DEF78A048A4B909EEEC20F (RequestProgressDelegate_tCEE5B616F4FDCD488E4914A7F554F2F57B7D03A4* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) ;
// System.Void Meta.WitAi.Requests.WitMessageVRequest::.ctor(Meta.WitAi.IWitRequestConfiguration,System.String,Meta.WitAi.Requests.VRequest/RequestProgressDelegate,Meta.WitAi.Requests.VRequest/RequestFirstResponseDelegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WitMessageVRequest__ctor_m5E94E413CE0B9A512F3B3974771C8977E1E26A40 (WitMessageVRequest_t1F545F95445B1FD0EE5DF7580C2EB69EB0520137* __this, RuntimeObject* ___configuration0, String_t* ___requestId1, RequestProgressDelegate_tCEE5B616F4FDCD488E4914A7F554F2F57B7D03A4* ___onDownloadProgress2, RequestFirstResponseDelegate_tB02AF851E14447743278D4F5E31A6B7E0203E89A* ___onFirstResponse3, const RuntimeMethod* method) ;
// Meta.WitAi.IWitRequestEndpointInfo Meta.WitAi.Data.Configuration.WitConfiguration::GetEndpointInfo()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* WitConfiguration_GetEndpointInfo_mF60F512344B2E6E9C4F952AC961A5CBCC4156213_inline (WitConfiguration_t85BCD6C826D35078E90334092184A53D1B69C72E* __this, const RuntimeMethod* method) ;
// System.Void Meta.WitAi.Requests.WitUnityRequest::set_Endpoint(System.String)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void WitUnityRequest_set_Endpoint_m30D4CF525E3F22D6A3A5D83C9A14DCC4ED1853C7_inline (WitUnityRequest_t8F143C19E420F145BAF16B53988A2AF5B37CB202* __this, String_t* ___value0, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.Mathf::RoundToInt(System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Mathf_RoundToInt_m60F8B66CF27F1FA75AA219342BD184B75771EB4B_inline (float ___f0, const RuntimeMethod* method) ;
// System.Void Meta.WitAi.Requests.VRequest::set_Timeout(System.Int32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void VRequest_set_Timeout_mB1621F4CBAEBF2E3F8FE30866911BE2915A2E87B_inline (VRequest_tFD9B8F15B7482BF5BE064752EAE7162E3588B8A1* __this, int32_t ___value0, const RuntimeMethod* method) ;
// System.Void Meta.WitAi.Requests.WitUnityRequest::set_ShouldPost(System.Boolean)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void WitUnityRequest_set_ShouldPost_m99AF92DC351CA890996AEE8DEC8C226BEC51E241_inline (WitUnityRequest_t8F143C19E420F145BAF16B53988A2AF5B37CB202* __this, bool ___value0, const RuntimeMethod* method) ;
// System.Void Meta.Voice.NLPRequest`4<Meta.WitAi.Requests.VoiceServiceRequestEvent,Meta.WitAi.Configuration.WitRequestOptions,Meta.WitAi.Requests.VoiceServiceRequestEvents,Meta.WitAi.Requests.VoiceServiceRequestResults>::SetState(Meta.Voice.VoiceRequestState)
inline void NLPRequest_4_SetState_m193FF3D641DAFA62E4D26F6AAEF02FC77C13F8D5 (NLPRequest_4_t7177BC2349443FF686C2D98FDB887CA5744C4323* __this, int32_t ___newState0, const RuntimeMethod* method)
{
	((  void (*) (NLPRequest_4_t7177BC2349443FF686C2D98FDB887CA5744C4323*, int32_t, const RuntimeMethod*))NLPRequest_4_SetState_mB8CC8E4CB8C5724742D34D6E9B0114B945D51EEE_gshared)(__this, ___newState0, method);
}
// System.Boolean UnityEngine.Object::op_Equality(UnityEngine.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___x0, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___y1, const RuntimeMethod* method) ;
// System.String Meta.Voice.NLPRequest`4<Meta.WitAi.Requests.VoiceServiceRequestEvent,Meta.WitAi.Configuration.WitRequestOptions,Meta.WitAi.Requests.VoiceServiceRequestEvents,Meta.WitAi.Requests.VoiceServiceRequestResults>::GetSendError()
inline String_t* NLPRequest_4_GetSendError_m7DC71AA1C11357E41E9BAFD7C84A86EC1220BC14 (NLPRequest_4_t7177BC2349443FF686C2D98FDB887CA5744C4323* __this, const RuntimeMethod* method)
{
	return ((  String_t* (*) (NLPRequest_4_t7177BC2349443FF686C2D98FDB887CA5744C4323*, const RuntimeMethod*))NLPRequest_4_GetSendError_m07511B1461016292007C011A58C4CEB34D680100_gshared)(__this, method);
}
// System.String Meta.WitAi.Requests.WitUnityRequest::get_Endpoint()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* WitUnityRequest_get_Endpoint_m28357885FB9A1AA8959288E442B8F40F9D8B645F_inline (WitUnityRequest_t8F143C19E420F145BAF16B53988A2AF5B37CB202* __this, const RuntimeMethod* method) ;
// System.Boolean Meta.WitAi.Requests.WitUnityRequest::get_ShouldPost()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool WitUnityRequest_get_ShouldPost_m3BECCE1A3CC848CC2CFE93B97E1EE2197AC1F206_inline (WitUnityRequest_t8F143C19E420F145BAF16B53988A2AF5B37CB202* __this, const RuntimeMethod* method) ;
// TOptions Meta.Voice.VoiceRequest`4<Meta.WitAi.Requests.VoiceServiceRequestEvent,Meta.WitAi.Configuration.WitRequestOptions,Meta.WitAi.Requests.VoiceServiceRequestEvents,Meta.WitAi.Requests.VoiceServiceRequestResults>::get_Options()
inline WitRequestOptions_tB2E8B103538F7E42F0568C6F62F2158FA45EF483* VoiceRequest_4_get_Options_mA96A6587CD74071815DC0110EFCB7B87B7A14774_inline (VoiceRequest_4_t635CDB7E63C5322E9D11D83B63A401260F8BAA8C* __this, const RuntimeMethod* method)
{
	return ((  WitRequestOptions_tB2E8B103538F7E42F0568C6F62F2158FA45EF483* (*) (VoiceRequest_4_t635CDB7E63C5322E9D11D83B63A401260F8BAA8C*, const RuntimeMethod*))VoiceRequest_4_get_Options_m9E49C7F16D2A38536F351223A546E161B86E6F1A_gshared_inline)(__this, method);
}
// System.String Meta.WitAi.Requests.VoiceServiceRequestOptions::get_Text()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* VoiceServiceRequestOptions_get_Text_m78FC14117147FF7042E92666EBC0633FA4BD8AD0_inline (VoiceServiceRequestOptions_tBB80C39F5D734638F03442F09F4F106BD5F20EE4* __this, const RuntimeMethod* method) ;
// System.Collections.Generic.Dictionary`2<System.String,System.String> Meta.WitAi.Requests.VoiceServiceRequestOptions::get_QueryParams()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* VoiceServiceRequestOptions_get_QueryParams_mF622577A065A19AA734F436AB99F4C7149DE8FAD_inline (VoiceServiceRequestOptions_tBB80C39F5D734638F03442F09F4F106BD5F20EE4* __this, const RuntimeMethod* method) ;
// System.Void Meta.WitAi.Requests.VRequest/RequestCompleteDelegate`1<Meta.WitAi.Json.WitResponseNode>::.ctor(System.Object,System.IntPtr)
inline void RequestCompleteDelegate_1__ctor_m342ABC4A0E40175C65979727AE0D2DC5087791D3 (RequestCompleteDelegate_1_tDB32EFF5395222142E2DE478401516FF7916E807* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (RequestCompleteDelegate_1_tDB32EFF5395222142E2DE478401516FF7916E807*, RuntimeObject*, intptr_t, const RuntimeMethod*))RequestCompleteDelegate_1__ctor_m5B4BD9930967DA4A93C01EE87192DA6DBB2988F1_gshared)(__this, ___object0, ___method1, method);
}
// System.Boolean Meta.WitAi.Requests.WitMessageVRequest::MessageRequest(System.String,System.Boolean,System.String,System.Collections.Generic.Dictionary`2<System.String,System.String>,Meta.WitAi.Requests.VRequest/RequestCompleteDelegate`1<Meta.WitAi.Json.WitResponseNode>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WitMessageVRequest_MessageRequest_m7C6ECF4242EF48C9F51455028BD9C62F41DBCAC5 (WitMessageVRequest_t1F545F95445B1FD0EE5DF7580C2EB69EB0520137* __this, String_t* ___endpoint0, bool ___post1, String_t* ___text2, Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* ___queryParams3, RequestCompleteDelegate_1_tDB32EFF5395222142E2DE478401516FF7916E807* ___onComplete4, const RuntimeMethod* method) ;
// System.Int32 Meta.WitAi.Requests.VRequest::get_ResponseCode()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t VRequest_get_ResponseCode_mD26D66C2F4A4998F1A95B078EE48A9709FDD8CA2_inline (VRequest_tFD9B8F15B7482BF5BE064752EAE7162E3588B8A1* __this, const RuntimeMethod* method) ;
// System.Void Meta.WitAi.Requests.VoiceServiceRequest::set_StatusCode(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VoiceServiceRequest_set_StatusCode_m6E3DA7B3081670C27A6F241EA1A8E79DC7D42765 (VoiceServiceRequest_tCF844F597C059D6A354311EB2BD5644AE5E8E536* __this, int32_t ___value0, const RuntimeMethod* method) ;
// System.Void Meta.Voice.NLPAudioRequest`4<Meta.WitAi.Requests.VoiceServiceRequestEvent,Meta.WitAi.Configuration.WitRequestOptions,Meta.WitAi.Requests.VoiceServiceRequestEvents,Meta.WitAi.Requests.VoiceServiceRequestResults>::HandleFinalNlpResponse(Meta.WitAi.Json.WitResponseNode,System.String)
inline void NLPAudioRequest_4_HandleFinalNlpResponse_m17F22EB9ACE85E0FD16C9AEDF1243198724E5904 (NLPAudioRequest_4_tB9AEC6E5E0DE9E86BAEA62F8FF35242BB6640C25* __this, WitResponseNode_t1BFF810F15B21416F5F6D0A1CAAF03CEF942038C* ___responseData0, String_t* ___error1, const RuntimeMethod* method)
{
	((  void (*) (NLPAudioRequest_4_tB9AEC6E5E0DE9E86BAEA62F8FF35242BB6640C25*, WitResponseNode_t1BFF810F15B21416F5F6D0A1CAAF03CEF942038C*, String_t*, const RuntimeMethod*))NLPAudioRequest_4_HandleFinalNlpResponse_m07D62D99C62E510AE1CD1442D2D8613394C14496_gshared)(__this, ___responseData0, ___error1, method);
}
// System.Void Meta.WitAi.Events.WitTranscriptionEvent::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WitTranscriptionEvent__ctor_m8FBA54D34EA19C07F367E3FF38F12102983D0B4D (WitTranscriptionEvent_t51292FC7EB7BAF38C2EC6B57D87724C1BEB3C739* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Events.UnityEvent::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityEvent__ctor_m03D3E5121B9A6100351984D0CE3050B909CD3235 (UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* __this, const RuntimeMethod* method) ;
// System.Void Meta.WitAi.Events.WitMicLevelChangedEvent::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WitMicLevelChangedEvent__ctor_m6DF80D93389B8C74A379AEECEEA4C4C7D672E6ED (WitMicLevelChangedEvent_tA9B2889CB33EAA09656739F26AA70252ED15DEF7* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.MonoBehaviour::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E (MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71* __this, const RuntimeMethod* method) ;
// System.Void Meta.WitAi.Events.WitByteDataEvent::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WitByteDataEvent__ctor_mD91E2677C3200283C56D740491BF9DF4501E6164 (WitByteDataEvent_t6F952E3BEDEBEEFF9FF094E1AFA7B2089F88B4CC* __this, const RuntimeMethod* method) ;
// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2 (RuntimeObject* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Events.UnityEvent`2<System.Int64,System.Double>::.ctor()
inline void UnityEvent_2__ctor_mE88C79B88E89F48201D5486B2C02E988D2712CD8 (UnityEvent_2_t8D8E787461BECB35F2627E8001A36D825CA99A97* __this, const RuntimeMethod* method)
{
	((  void (*) (UnityEvent_2_t8D8E787461BECB35F2627E8001A36D825CA99A97*, const RuntimeMethod*))UnityEvent_2__ctor_mE88C79B88E89F48201D5486B2C02E988D2712CD8_gshared)(__this, method);
}
// System.Void UnityEngine.PropertyAttribute::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PropertyAttribute__ctor_m19247686E165101F140615C7306DC2DA3953D97D (PropertyAttribute_t5E0CB5A6CDA6E24CBD4FF26DE3B0C29D8BB54BF0* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.HashSet`1<System.String>::.ctor(System.Collections.Generic.IEnumerable`1<T>)
inline void HashSet_1__ctor_m9F8CD04799346CDC14E5D227FCC28B5A151A7C62 (HashSet_1_tEFC6605F7DE53F71946C33FD371E53C3100F2178* __this, RuntimeObject* ___collection0, const RuntimeMethod* method)
{
	((  void (*) (HashSet_1_tEFC6605F7DE53F71946C33FD371E53C3100F2178*, RuntimeObject*, const RuntimeMethod*))HashSet_1__ctor_mC13D3ADFE27A073EC3C583E9C926C801A7EE1DDD_gshared)(__this, ___collection0, method);
}
// System.Boolean System.Collections.Generic.List`1<System.String>::Contains(T)
inline bool List_1_Contains_m359254483BE42CAD4DCA8FBAFB87473FB4CF00E1 (List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* __this, String_t* ___item0, const RuntimeMethod* method)
{
	return ((  bool (*) (List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD*, String_t*, const RuntimeMethod*))List_1_Contains_m4C9139C2A6B23E9343D3F87807B32C6E2CFE660D_gshared)(__this, ___item0, method);
}
// System.Void System.Collections.Generic.List`1<System.String>::Add(T)
inline void List_1_Add_mF10DB1D3CBB0B14215F0E4F8AB4934A1955E5351_inline (List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* __this, String_t* ___item0, const RuntimeMethod* method)
{
	((  void (*) (List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD*, String_t*, const RuntimeMethod*))List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline)(__this, ___item0, method);
}
// System.Boolean System.Collections.Generic.HashSet`1<System.String>::Add(T)
inline bool HashSet_1_Add_mF3D4CF6D0150392127D5561A87DCDEDA9A81BE5D (HashSet_1_tEFC6605F7DE53F71946C33FD371E53C3100F2178* __this, String_t* ___item0, const RuntimeMethod* method)
{
	return ((  bool (*) (HashSet_1_tEFC6605F7DE53F71946C33FD371E53C3100F2178*, String_t*, const RuntimeMethod*))HashSet_1_Add_m2CD7657B3459B61DD4BBA47024AC71F7D319658B_gshared)(__this, ___item0, method);
}
// System.Boolean System.Collections.Generic.List`1<System.String>::Remove(T)
inline bool List_1_Remove_mD9E8CFB6777A99046B3C0195F7343FE771A2E99D (List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* __this, String_t* ___item0, const RuntimeMethod* method)
{
	return ((  bool (*) (List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD*, String_t*, const RuntimeMethod*))List_1_Remove_m4DFA48F4CEB9169601E75FC28517C5C06EFA5AD7_gshared)(__this, ___item0, method);
}
// System.Boolean System.Collections.Generic.HashSet`1<System.String>::Remove(T)
inline bool HashSet_1_Remove_m97303C08928AB7A9364E7908F34670D92348D9DA (HashSet_1_tEFC6605F7DE53F71946C33FD371E53C3100F2178* __this, String_t* ___item0, const RuntimeMethod* method)
{
	return ((  bool (*) (HashSet_1_tEFC6605F7DE53F71946C33FD371E53C3100F2178*, String_t*, const RuntimeMethod*))HashSet_1_Remove_mF1D84C0A2829DDA2A0CEE1D82A5B999B5F6627CB_gshared)(__this, ___item0, method);
}
// System.Collections.Generic.HashSet`1<System.String> Meta.WitAi.Events.EventRegistry::get_OverriddenCallbacks()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR HashSet_1_tEFC6605F7DE53F71946C33FD371E53C3100F2178* EventRegistry_get_OverriddenCallbacks_m5E8ABC4F32B0E69325F52D029003378ED9488884 (EventRegistry_t712584F20910AAA2A4A85A34835BC58574C441FE* __this, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.HashSet`1<System.String>::Contains(T)
inline bool HashSet_1_Contains_mAE49939A0DE08C4864E8560F3F7FCDAC2E193853 (HashSet_1_tEFC6605F7DE53F71946C33FD371E53C3100F2178* __this, String_t* ___item0, const RuntimeMethod* method)
{
	return ((  bool (*) (HashSet_1_tEFC6605F7DE53F71946C33FD371E53C3100F2178*, String_t*, const RuntimeMethod*))HashSet_1_Contains_m9BACE52BFA0BD83C601529D3629118453E459BBB_gshared)(__this, ___item0, method);
}
// System.Void System.Collections.Generic.List`1<System.String>::.ctor()
inline void List_1__ctor_mCA8DD57EAC70C2B5923DBB9D5A77CEAC22E7068E (List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD*, const RuntimeMethod*))List_1__ctor_m7F078BB342729BDF11327FD89D7872265328F690_gshared)(__this, method);
}
// System.Void Meta.WitAi.Events.AudioDurationTrackerFinishedEvent::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioDurationTrackerFinishedEvent__ctor_m8C82B984909227695B0FEF1876B89B090A426320 (AudioDurationTrackerFinishedEvent_t23E275CDD44C7923B60C067FAFF9FA926AB30647* __this, const RuntimeMethod* method) ;
// System.Void Meta.WitAi.Events.WitValidationEvent::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WitValidationEvent__ctor_m740B387842A1411F73021F817DD999D3BA9572DB (WitValidationEvent_t731FF211C8D0215476601B54ECDDD2D1DF38974C* __this, const RuntimeMethod* method) ;
// System.Void Meta.WitAi.Events.SpeechEvents::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpeechEvents__ctor_m6D16CA375136DF4D38A1D2E97B4479CB530F9ADA (SpeechEvents_tB51C31627EF79AB5734270C1558A6C6F67A5040E* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Events.UnityEvent`1<Meta.WitAi.Requests.VoiceServiceRequest>::.ctor()
inline void UnityEvent_1__ctor_mBCCC67D3203429FEB7F64B44142A50C5EBDEB9D6 (UnityEvent_1_t2AED438DE5FAF741875343B8663599EC1EC222E2* __this, const RuntimeMethod* method)
{
	((  void (*) (UnityEvent_1_t2AED438DE5FAF741875343B8663599EC1EC222E2*, const RuntimeMethod*))UnityEvent_1__ctor_m8D77F4F05F69D0E52E8A445322811EEC25987525_gshared)(__this, method);
}
// System.Void UnityEngine.Events.UnityEvent`3<System.Byte[],System.Int32,System.Int32>::.ctor()
inline void UnityEvent_3__ctor_m875D7B8D4734040F09E062B70C490D1FE698C0B9 (UnityEvent_3_tF81A842A1D8D9B002F73DF6003CE7C3ACF40171F* __this, const RuntimeMethod* method)
{
	((  void (*) (UnityEvent_3_tF81A842A1D8D9B002F73DF6003CE7C3ACF40171F*, const RuntimeMethod*))UnityEvent_3__ctor_m941EF00E4EF658BB1461C8BD9E6527F9E495DCFE_gshared)(__this, method);
}
// System.Void UnityEngine.Events.UnityEvent`2<System.String,System.String>::.ctor()
inline void UnityEvent_2__ctor_m30ECB4C6C53E01554E5F37F035ED8CD10C1B2480 (UnityEvent_2_t71C350611CC2C5B350589972D791938B5D41AB50* __this, const RuntimeMethod* method)
{
	((  void (*) (UnityEvent_2_t71C350611CC2C5B350589972D791938B5D41AB50*, const RuntimeMethod*))UnityEvent_2__ctor_m36CB65F6682CF6EFB69FE2F1939D331599C453E3_gshared)(__this, method);
}
// System.Void UnityEngine.Events.UnityEvent`1<System.Single>::.ctor()
inline void UnityEvent_1__ctor_mD1175E822AFF26E9A43F2FB692BB82525C6DD422 (UnityEvent_1_tDD811EB8F49CEE97BA6DF59344DFE6C6F42553D4* __this, const RuntimeMethod* method)
{
	((  void (*) (UnityEvent_1_tDD811EB8F49CEE97BA6DF59344DFE6C6F42553D4*, const RuntimeMethod*))UnityEvent_1__ctor_mD1175E822AFF26E9A43F2FB692BB82525C6DD422_gshared)(__this, method);
}
// System.Void UnityEngine.Events.UnityEvent`1<Meta.WitAi.Json.WitResponseClass>::.ctor()
inline void UnityEvent_1__ctor_m4232B3F734BAF440DA408EF9A6D10CA759EBE76C (UnityEvent_1_t5B716A16BF3DD47CC6FE568AA000E45B91A8B272* __this, const RuntimeMethod* method)
{
	((  void (*) (UnityEvent_1_t5B716A16BF3DD47CC6FE568AA000E45B91A8B272*, const RuntimeMethod*))UnityEvent_1__ctor_m8D77F4F05F69D0E52E8A445322811EEC25987525_gshared)(__this, method);
}
// System.Void UnityEngine.Events.UnityEvent`1<Meta.WitAi.WitRequest>::.ctor()
inline void UnityEvent_1__ctor_m6CC0994A9BB9D487DA9CFEFEB765623D485E0877 (UnityEvent_1_tD140963BF887A3E18CDB90439A9DD6FE5438B8B8* __this, const RuntimeMethod* method)
{
	((  void (*) (UnityEvent_1_tD140963BF887A3E18CDB90439A9DD6FE5438B8B8*, const RuntimeMethod*))UnityEvent_1__ctor_m8D77F4F05F69D0E52E8A445322811EEC25987525_gshared)(__this, method);
}
// System.Void UnityEngine.Events.UnityEvent`1<Meta.WitAi.Configuration.WitRequestOptions>::.ctor()
inline void UnityEvent_1__ctor_m14E736A972984B0F3F605334B3BB551CA3A37249 (UnityEvent_1_tB2107CA265B68A4E479CAFA0530DAE8251E03F58* __this, const RuntimeMethod* method)
{
	((  void (*) (UnityEvent_1_tB2107CA265B68A4E479CAFA0530DAE8251E03F58*, const RuntimeMethod*))UnityEvent_1__ctor_m8D77F4F05F69D0E52E8A445322811EEC25987525_gshared)(__this, method);
}
// System.Void UnityEngine.Events.UnityEvent`1<Meta.WitAi.Json.WitResponseNode>::.ctor()
inline void UnityEvent_1__ctor_mF7AA5743E2CEC1E7B16598E449A80EE8E0D93E1F (UnityEvent_1_t3DC4F1FBCED8AF76C18EC16A2B55C43FBAE5E62D* __this, const RuntimeMethod* method)
{
	((  void (*) (UnityEvent_1_t3DC4F1FBCED8AF76C18EC16A2B55C43FBAE5E62D*, const RuntimeMethod*))UnityEvent_1__ctor_m8D77F4F05F69D0E52E8A445322811EEC25987525_gshared)(__this, method);
}
// System.Void UnityEngine.Events.UnityEvent`1<System.String>::.ctor()
inline void UnityEvent_1__ctor_m0F7D790DACD6F3D18E865D01FE4427603C1B0CC6 (UnityEvent_1_tC9859540CF1468306CAB6D758C0A0D95DBCEC257* __this, const RuntimeMethod* method)
{
	((  void (*) (UnityEvent_1_tC9859540CF1468306CAB6D758C0A0D95DBCEC257*, const RuntimeMethod*))UnityEvent_1__ctor_m8D77F4F05F69D0E52E8A445322811EEC25987525_gshared)(__this, method);
}
// System.Void UnityEngine.Events.UnityEvent`1<Meta.WitAi.Data.VoiceSession>::.ctor()
inline void UnityEvent_1__ctor_m1700B56BB048391F03DE134A8B289FD540FDA6C4 (UnityEvent_1_t7ED997BF6FDFAAFDDB2D9E2EDE55BE3DF55284AA* __this, const RuntimeMethod* method)
{
	((  void (*) (UnityEvent_1_t7ED997BF6FDFAAFDDB2D9E2EDE55BE3DF55284AA*, const RuntimeMethod*))UnityEvent_1__ctor_m8D77F4F05F69D0E52E8A445322811EEC25987525_gshared)(__this, method);
}
// UnityEngine.Events.UnityEvent Meta.WitAi.Events.SpeechEvents::get_OnStartListening()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* SpeechEvents_get_OnStartListening_m1AE66AF56C8A79496E386C26CCB815E99EBB4DA7_inline (SpeechEvents_tB51C31627EF79AB5734270C1558A6C6F67A5040E* __this, const RuntimeMethod* method) ;
// UnityEngine.Events.UnityEvent Meta.WitAi.Events.SpeechEvents::get_OnStoppedListening()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* SpeechEvents_get_OnStoppedListening_mB59F3490B5F895B311DA82A0288DC2AEACF87586_inline (SpeechEvents_tB51C31627EF79AB5734270C1558A6C6F67A5040E* __this, const RuntimeMethod* method) ;
// Meta.WitAi.Events.WitMicLevelChangedEvent Meta.WitAi.Events.SpeechEvents::get_OnMicLevelChanged()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR WitMicLevelChangedEvent_tA9B2889CB33EAA09656739F26AA70252ED15DEF7* SpeechEvents_get_OnMicLevelChanged_mF6437F7C9C8E60935C01C02C57CDFE62741F8CE8_inline (SpeechEvents_tB51C31627EF79AB5734270C1558A6C6F67A5040E* __this, const RuntimeMethod* method) ;
// Meta.WitAi.Events.WitTranscriptionEvent Meta.WitAi.Events.SpeechEvents::get_OnPartialTranscription()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR WitTranscriptionEvent_t51292FC7EB7BAF38C2EC6B57D87724C1BEB3C739* SpeechEvents_get_OnPartialTranscription_m0BA26BCC13243D100712E20D4A6AE8DD56C64B18_inline (SpeechEvents_tB51C31627EF79AB5734270C1558A6C6F67A5040E* __this, const RuntimeMethod* method) ;
// Meta.WitAi.Events.WitTranscriptionEvent Meta.WitAi.Events.SpeechEvents::get_OnFullTranscription()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR WitTranscriptionEvent_t51292FC7EB7BAF38C2EC6B57D87724C1BEB3C739* SpeechEvents_get_OnFullTranscription_m72C7935CDD9EBD2FCAC9C0ECADC2830417512065_inline (SpeechEvents_tB51C31627EF79AB5734270C1558A6C6F67A5040E* __this, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.HashSet`1<Meta.WitAi.Events.SpeechEvents>::Contains(T)
inline bool HashSet_1_Contains_m1D204E061BEE1042445415F9D2087AABDB71A44E (HashSet_1_tA2DD82C656859A8F953FE80E0E7CFAA242AFFEB7* __this, SpeechEvents_tB51C31627EF79AB5734270C1558A6C6F67A5040E* ___item0, const RuntimeMethod* method)
{
	return ((  bool (*) (HashSet_1_tA2DD82C656859A8F953FE80E0E7CFAA242AFFEB7*, SpeechEvents_tB51C31627EF79AB5734270C1558A6C6F67A5040E*, const RuntimeMethod*))HashSet_1_Contains_m9BACE52BFA0BD83C601529D3629118453E459BBB_gshared)(__this, ___item0, method);
}
// System.Int32 System.Collections.Generic.HashSet`1<Meta.WitAi.Events.SpeechEvents>::get_Count()
inline int32_t HashSet_1_get_Count_m8E6409CC473C5A6B187F0675A1D5A25514852361_inline (HashSet_1_tA2DD82C656859A8F953FE80E0E7CFAA242AFFEB7* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (HashSet_1_tA2DD82C656859A8F953FE80E0E7CFAA242AFFEB7*, const RuntimeMethod*))HashSet_1_get_Count_m41CC85EEB7855CEFA3BC7A32F115387939318ED3_gshared_inline)(__this, method);
}
// System.Boolean System.Collections.Generic.HashSet`1<Meta.WitAi.Events.SpeechEvents>::Add(T)
inline bool HashSet_1_Add_mC05372B8C874BE5085EAB83035C6322182F7D22C (HashSet_1_tA2DD82C656859A8F953FE80E0E7CFAA242AFFEB7* __this, SpeechEvents_tB51C31627EF79AB5734270C1558A6C6F67A5040E* ___item0, const RuntimeMethod* method)
{
	return ((  bool (*) (HashSet_1_tA2DD82C656859A8F953FE80E0E7CFAA242AFFEB7*, SpeechEvents_tB51C31627EF79AB5734270C1558A6C6F67A5040E*, const RuntimeMethod*))HashSet_1_Add_m2CD7657B3459B61DD4BBA47024AC71F7D319658B_gshared)(__this, ___item0, method);
}
// System.Boolean System.Collections.Generic.HashSet`1<Meta.WitAi.Events.SpeechEvents>::Remove(T)
inline bool HashSet_1_Remove_mE111AC9DE1AE977DAC5601C225D67650A740CE3F (HashSet_1_tA2DD82C656859A8F953FE80E0E7CFAA242AFFEB7* __this, SpeechEvents_tB51C31627EF79AB5734270C1558A6C6F67A5040E* ___item0, const RuntimeMethod* method)
{
	return ((  bool (*) (HashSet_1_tA2DD82C656859A8F953FE80E0E7CFAA242AFFEB7*, SpeechEvents_tB51C31627EF79AB5734270C1558A6C6F67A5040E*, const RuntimeMethod*))HashSet_1_Remove_mF1D84C0A2829DDA2A0CEE1D82A5B999B5F6627CB_gshared)(__this, ___item0, method);
}
// System.Void System.Func`2<Meta.WitAi.Events.SpeechEvents,UnityEngine.Events.UnityEvent`1<Meta.WitAi.Configuration.WitRequestOptions>>::.ctor(System.Object,System.IntPtr)
inline void Func_2__ctor_m416381728510FC887538BE765C618E827ED55CB2 (Func_2_tCD773FD80F11C1399B4604D1EB19BB7436356388* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Func_2_tCD773FD80F11C1399B4604D1EB19BB7436356388*, RuntimeObject*, intptr_t, const RuntimeMethod*))Func_2__ctor_m7F8A01C0B02BC1D4063F4EB1E817F7A48562A398_gshared)(__this, ___object0, ___method1, method);
}
// System.Void Meta.WitAi.Events.SpeechEvents::SetEvent<Meta.WitAi.Configuration.WitRequestOptions>(System.Func`2<Meta.WitAi.Events.SpeechEvents,UnityEngine.Events.UnityEvent`1<T>>,System.Boolean)
inline void SpeechEvents_SetEvent_TisWitRequestOptions_tB2E8B103538F7E42F0568C6F62F2158FA45EF483_m3C28183D42CD9286A3EBFE3500D824D42B2FA446 (SpeechEvents_tB51C31627EF79AB5734270C1558A6C6F67A5040E* __this, Func_2_tCD773FD80F11C1399B4604D1EB19BB7436356388* ___getEvent0, bool ___add1, const RuntimeMethod* method)
{
	((  void (*) (SpeechEvents_tB51C31627EF79AB5734270C1558A6C6F67A5040E*, Func_2_tCD773FD80F11C1399B4604D1EB19BB7436356388*, bool, const RuntimeMethod*))SpeechEvents_SetEvent_TisRuntimeObject_mC8A5CFB6CB56C8412D6D2C3724268FBA649CCA4A_gshared)(__this, ___getEvent0, ___add1, method);
}
// System.Void System.Func`2<Meta.WitAi.Events.SpeechEvents,UnityEngine.Events.UnityEvent`1<Meta.WitAi.Requests.VoiceServiceRequest>>::.ctor(System.Object,System.IntPtr)
inline void Func_2__ctor_m5B952D58DE017AA1FBE63A1C7271C76889C31C33 (Func_2_tD24D6BC507F5AA415E63472DF1247E49582D7A1F* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Func_2_tD24D6BC507F5AA415E63472DF1247E49582D7A1F*, RuntimeObject*, intptr_t, const RuntimeMethod*))Func_2__ctor_m7F8A01C0B02BC1D4063F4EB1E817F7A48562A398_gshared)(__this, ___object0, ___method1, method);
}
// System.Void Meta.WitAi.Events.SpeechEvents::SetEvent<Meta.WitAi.Requests.VoiceServiceRequest>(System.Func`2<Meta.WitAi.Events.SpeechEvents,UnityEngine.Events.UnityEvent`1<T>>,System.Boolean)
inline void SpeechEvents_SetEvent_TisVoiceServiceRequest_tCF844F597C059D6A354311EB2BD5644AE5E8E536_m97FDD4B3999DF7CAB7E920069C5AF415D1D3183A (SpeechEvents_tB51C31627EF79AB5734270C1558A6C6F67A5040E* __this, Func_2_tD24D6BC507F5AA415E63472DF1247E49582D7A1F* ___getEvent0, bool ___add1, const RuntimeMethod* method)
{
	((  void (*) (SpeechEvents_tB51C31627EF79AB5734270C1558A6C6F67A5040E*, Func_2_tD24D6BC507F5AA415E63472DF1247E49582D7A1F*, bool, const RuntimeMethod*))SpeechEvents_SetEvent_TisRuntimeObject_mC8A5CFB6CB56C8412D6D2C3724268FBA649CCA4A_gshared)(__this, ___getEvent0, ___add1, method);
}
// System.Void System.Func`2<Meta.WitAi.Events.SpeechEvents,UnityEngine.Events.UnityEvent`1<Meta.WitAi.WitRequest>>::.ctor(System.Object,System.IntPtr)
inline void Func_2__ctor_mBF59A8126BB9833489BFFB78C2465A51603F5D95 (Func_2_tC95346D56902FBF6D1621BDE4F2039F61F917F52* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Func_2_tC95346D56902FBF6D1621BDE4F2039F61F917F52*, RuntimeObject*, intptr_t, const RuntimeMethod*))Func_2__ctor_m7F8A01C0B02BC1D4063F4EB1E817F7A48562A398_gshared)(__this, ___object0, ___method1, method);
}
// System.Void Meta.WitAi.Events.SpeechEvents::SetEvent<Meta.WitAi.WitRequest>(System.Func`2<Meta.WitAi.Events.SpeechEvents,UnityEngine.Events.UnityEvent`1<T>>,System.Boolean)
inline void SpeechEvents_SetEvent_TisWitRequest_t6DE282D281BDA3D5726C9775385BDFBA1EC6A900_m7F263022B7781050B2975F7F37E9EE50A69399E6 (SpeechEvents_tB51C31627EF79AB5734270C1558A6C6F67A5040E* __this, Func_2_tC95346D56902FBF6D1621BDE4F2039F61F917F52* ___getEvent0, bool ___add1, const RuntimeMethod* method)
{
	((  void (*) (SpeechEvents_tB51C31627EF79AB5734270C1558A6C6F67A5040E*, Func_2_tC95346D56902FBF6D1621BDE4F2039F61F917F52*, bool, const RuntimeMethod*))SpeechEvents_SetEvent_TisRuntimeObject_mC8A5CFB6CB56C8412D6D2C3724268FBA649CCA4A_gshared)(__this, ___getEvent0, ___add1, method);
}
// System.Void System.Func`2<Meta.WitAi.Events.SpeechEvents,UnityEngine.Events.UnityEvent>::.ctor(System.Object,System.IntPtr)
inline void Func_2__ctor_m5C67532D986A83BACCBF887F2B50FCD792DBD07A (Func_2_tDCA29CF738B0C5F51018D3D7FCBCC1BCF5EF829A* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Func_2_tDCA29CF738B0C5F51018D3D7FCBCC1BCF5EF829A*, RuntimeObject*, intptr_t, const RuntimeMethod*))Func_2__ctor_m7F8A01C0B02BC1D4063F4EB1E817F7A48562A398_gshared)(__this, ___object0, ___method1, method);
}
// System.Void Meta.WitAi.Events.SpeechEvents::SetEvent(System.Func`2<Meta.WitAi.Events.SpeechEvents,UnityEngine.Events.UnityEvent>,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpeechEvents_SetEvent_m78CAEDF907E5EDD46124E7CA34B00CEC8790903F (SpeechEvents_tB51C31627EF79AB5734270C1558A6C6F67A5040E* __this, Func_2_tDCA29CF738B0C5F51018D3D7FCBCC1BCF5EF829A* ___getEvent0, bool ___add1, const RuntimeMethod* method) ;
// System.Void System.Func`2<Meta.WitAi.Events.SpeechEvents,UnityEngine.Events.UnityEvent`1<System.String>>::.ctor(System.Object,System.IntPtr)
inline void Func_2__ctor_m29BC13ED03B13A5E6CA990170CDB59C08E4CA042 (Func_2_tD49A9546076918B07593787D23EE9245E84C1AD0* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Func_2_tD49A9546076918B07593787D23EE9245E84C1AD0*, RuntimeObject*, intptr_t, const RuntimeMethod*))Func_2__ctor_m7F8A01C0B02BC1D4063F4EB1E817F7A48562A398_gshared)(__this, ___object0, ___method1, method);
}
// System.Void Meta.WitAi.Events.SpeechEvents::SetEvent<System.String>(System.Func`2<Meta.WitAi.Events.SpeechEvents,UnityEngine.Events.UnityEvent`1<T>>,System.Boolean)
inline void SpeechEvents_SetEvent_TisString_t_m62BAB2021E0676DA41C595BCEEE22C14009D2468 (SpeechEvents_tB51C31627EF79AB5734270C1558A6C6F67A5040E* __this, Func_2_tD49A9546076918B07593787D23EE9245E84C1AD0* ___getEvent0, bool ___add1, const RuntimeMethod* method)
{
	((  void (*) (SpeechEvents_tB51C31627EF79AB5734270C1558A6C6F67A5040E*, Func_2_tD49A9546076918B07593787D23EE9245E84C1AD0*, bool, const RuntimeMethod*))SpeechEvents_SetEvent_TisRuntimeObject_mC8A5CFB6CB56C8412D6D2C3724268FBA649CCA4A_gshared)(__this, ___getEvent0, ___add1, method);
}
// System.Void System.Func`2<Meta.WitAi.Events.SpeechEvents,UnityEngine.Events.UnityEvent`1<Meta.WitAi.Json.WitResponseNode>>::.ctor(System.Object,System.IntPtr)
inline void Func_2__ctor_m22AC67FD6CA32F4F31C2F0984492B6AABCDCAD6D (Func_2_t5DC062A102C3300E4BF548012A747BB3E0A5BA57* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Func_2_t5DC062A102C3300E4BF548012A747BB3E0A5BA57*, RuntimeObject*, intptr_t, const RuntimeMethod*))Func_2__ctor_m7F8A01C0B02BC1D4063F4EB1E817F7A48562A398_gshared)(__this, ___object0, ___method1, method);
}
// System.Void Meta.WitAi.Events.SpeechEvents::SetEvent<Meta.WitAi.Json.WitResponseNode>(System.Func`2<Meta.WitAi.Events.SpeechEvents,UnityEngine.Events.UnityEvent`1<T>>,System.Boolean)
inline void SpeechEvents_SetEvent_TisWitResponseNode_t1BFF810F15B21416F5F6D0A1CAAF03CEF942038C_m7B829436CAFBA1E4D8B3D78070C252D66F28CA78 (SpeechEvents_tB51C31627EF79AB5734270C1558A6C6F67A5040E* __this, Func_2_t5DC062A102C3300E4BF548012A747BB3E0A5BA57* ___getEvent0, bool ___add1, const RuntimeMethod* method)
{
	((  void (*) (SpeechEvents_tB51C31627EF79AB5734270C1558A6C6F67A5040E*, Func_2_t5DC062A102C3300E4BF548012A747BB3E0A5BA57*, bool, const RuntimeMethod*))SpeechEvents_SetEvent_TisRuntimeObject_mC8A5CFB6CB56C8412D6D2C3724268FBA649CCA4A_gshared)(__this, ___getEvent0, ___add1, method);
}
// System.Void System.Func`2<Meta.WitAi.Events.SpeechEvents,UnityEngine.Events.UnityEvent`2<System.String,System.String>>::.ctor(System.Object,System.IntPtr)
inline void Func_2__ctor_m6FFDD82F8CA59FAD0C29ADB4743D02FE89A104FC (Func_2_tB18F1F7AE9EDB9705E036A284B88C5F3613A7F78* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Func_2_tB18F1F7AE9EDB9705E036A284B88C5F3613A7F78*, RuntimeObject*, intptr_t, const RuntimeMethod*))Func_2__ctor_m7F8A01C0B02BC1D4063F4EB1E817F7A48562A398_gshared)(__this, ___object0, ___method1, method);
}
// System.Void Meta.WitAi.Events.SpeechEvents::SetEvent<System.String,System.String>(System.Func`2<Meta.WitAi.Events.SpeechEvents,UnityEngine.Events.UnityEvent`2<T,U>>,System.Boolean)
inline void SpeechEvents_SetEvent_TisString_t_TisString_t_mE93502BAC82570020D936C0C5C0AB2FEA7FA0BB8 (SpeechEvents_tB51C31627EF79AB5734270C1558A6C6F67A5040E* __this, Func_2_tB18F1F7AE9EDB9705E036A284B88C5F3613A7F78* ___getEvent0, bool ___add1, const RuntimeMethod* method)
{
	((  void (*) (SpeechEvents_tB51C31627EF79AB5734270C1558A6C6F67A5040E*, Func_2_tB18F1F7AE9EDB9705E036A284B88C5F3613A7F78*, bool, const RuntimeMethod*))SpeechEvents_SetEvent_TisRuntimeObject_TisRuntimeObject_m89BABB9F45D4AA72764F8373F8A312C7233779E2_gshared)(__this, ___getEvent0, ___add1, method);
}
// System.Void System.Func`2<Meta.WitAi.Events.SpeechEvents,UnityEngine.Events.UnityEvent`1<System.Single>>::.ctor(System.Object,System.IntPtr)
inline void Func_2__ctor_m6B695FEF9DE1C1E5425875514847EBF747B57738 (Func_2_t0F30FACC4CABFFD27DDEBE31FB321AA523A06B7D* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Func_2_t0F30FACC4CABFFD27DDEBE31FB321AA523A06B7D*, RuntimeObject*, intptr_t, const RuntimeMethod*))Func_2__ctor_m7F8A01C0B02BC1D4063F4EB1E817F7A48562A398_gshared)(__this, ___object0, ___method1, method);
}
// System.Void Meta.WitAi.Events.SpeechEvents::SetEvent<System.Single>(System.Func`2<Meta.WitAi.Events.SpeechEvents,UnityEngine.Events.UnityEvent`1<T>>,System.Boolean)
inline void SpeechEvents_SetEvent_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m8B9866152A783B00DC62BD6760C64DEF55F7D5CA (SpeechEvents_tB51C31627EF79AB5734270C1558A6C6F67A5040E* __this, Func_2_t0F30FACC4CABFFD27DDEBE31FB321AA523A06B7D* ___getEvent0, bool ___add1, const RuntimeMethod* method)
{
	((  void (*) (SpeechEvents_tB51C31627EF79AB5734270C1558A6C6F67A5040E*, Func_2_t0F30FACC4CABFFD27DDEBE31FB321AA523A06B7D*, bool, const RuntimeMethod*))SpeechEvents_SetEvent_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m8B9866152A783B00DC62BD6760C64DEF55F7D5CA_gshared)(__this, ___getEvent0, ___add1, method);
}
// System.Void Meta.WitAi.Events.SpeechEvents/<>c__DisplayClass86_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass86_0__ctor_mF0E5363F8EB42666E46097F3923370E1EB54B3F6 (U3CU3Ec__DisplayClass86_0_t966EF3616DEAE30A97398BD0490A7BFF1725D638* __this, const RuntimeMethod* method) ;
// TResult System.Func`2<Meta.WitAi.Events.SpeechEvents,UnityEngine.Events.UnityEvent>::Invoke(T)
inline UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* Func_2_Invoke_mA34300A70C486A80C3D6B0790FB03DFF483C4EF8_inline (Func_2_tDCA29CF738B0C5F51018D3D7FCBCC1BCF5EF829A* __this, SpeechEvents_tB51C31627EF79AB5734270C1558A6C6F67A5040E* ___arg0, const RuntimeMethod* method)
{
	return ((  UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* (*) (Func_2_tDCA29CF738B0C5F51018D3D7FCBCC1BCF5EF829A*, SpeechEvents_tB51C31627EF79AB5734270C1558A6C6F67A5040E*, const RuntimeMethod*))Func_2_Invoke_mDBA25DA5DA5B7E056FB9B026AF041F1385FB58A9_gshared_inline)(__this, ___arg0, method);
}
// System.Void UnityEngine.Events.UnityEventBase::RemoveAllListeners()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityEventBase_RemoveAllListeners_m6E68297189537543B0C72FE38804646CA204D076 (UnityEventBase_t4968A4C72559F35C0923E4BD9C042C3A842E1DB8* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Events.UnityAction::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityAction__ctor_mC53E20D6B66E0D5688CD81B88DBB34F5A58B7131 (UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) ;
// System.Void UnityEngine.Events.UnityEvent::AddListener(UnityEngine.Events.UnityAction)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityEvent_AddListener_m8AA4287C16628486B41DA41CA5E7A856A706D302 (UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* __this, UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* ___call0, const RuntimeMethod* method) ;
// System.Void Meta.WitAi.Events.WitRequestOptionsEvent::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WitRequestOptionsEvent__ctor_m10A500367C7D0AC6F19B4C873F6B2E38DB68F1E5 (WitRequestOptionsEvent_t84FCD56D356445821DECABA3F66CADF6B07ABB1B* __this, const RuntimeMethod* method) ;
// System.Void Meta.WitAi.Events.VoiceServiceRequestEvent::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VoiceServiceRequestEvent__ctor_m1D20A625F3700F2E3369F471E403A9274F4063A6 (VoiceServiceRequestEvent_t7340AD8EBA1B3D36E1A95E47C8DBCD954F1DED13* __this, const RuntimeMethod* method) ;
// System.Void Meta.WitAi.Events.WitRequestCreatedEvent::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WitRequestCreatedEvent__ctor_m7AE3D7970DA2FCCE3839331A4DF4B7E9D49C5149 (WitRequestCreatedEvent_t1A01ABB6F9E3C02D0251B5DC9F5B290EDA0E319B* __this, const RuntimeMethod* method) ;
// System.Void Meta.WitAi.Events.WitResponseEvent::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WitResponseEvent__ctor_m8AF9374579A9418E2D8184AA0E0EB16E0631FED1 (WitResponseEvent_tC85152AAABC87956DF604749EEA671ADAA9EFFDA* __this, const RuntimeMethod* method) ;
// System.Void Meta.WitAi.Events.WitErrorEvent::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WitErrorEvent__ctor_m636011E937197FBC4535022399687EDF0F9BB698 (WitErrorEvent_tF617F56AD9B12E89D73E125B79E441A56067F1B2* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.HashSet`1<Meta.WitAi.Events.SpeechEvents>::.ctor()
inline void HashSet_1__ctor_m69B3F52AC472B402F279635CEE94EA4635813A6E (HashSet_1_tA2DD82C656859A8F953FE80E0E7CFAA242AFFEB7* __this, const RuntimeMethod* method)
{
	((  void (*) (HashSet_1_tA2DD82C656859A8F953FE80E0E7CFAA242AFFEB7*, const RuntimeMethod*))HashSet_1__ctor_m9132EE1422BAA45E44B7FFF495F378790D36D90E_gshared)(__this, method);
}
// System.Void Meta.WitAi.Events.EventRegistry::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EventRegistry__ctor_m6B8EBEFFEC6E4009C2DE562BE9970D287471FF55 (EventRegistry_t712584F20910AAA2A4A85A34835BC58574C441FE* __this, const RuntimeMethod* method) ;
// System.Void Meta.WitAi.Events.SpeechEvents/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_m81EA5C37525A3ED4975C2F804A6B2CB424B5658E (U3CU3Ec_t7AEAA449DBB19647334E677C7ED6C2EDDC69BB9B* __this, const RuntimeMethod* method) ;
// System.Collections.Generic.HashSet`1/Enumerator<T> System.Collections.Generic.HashSet`1<Meta.WitAi.Events.SpeechEvents>::GetEnumerator()
inline Enumerator_t687446157680B89D4DF7AA9AB619F441A3B6E2EB HashSet_1_GetEnumerator_m5FD422E9616016665B8B8C34C4A52C3F6147D763 (HashSet_1_tA2DD82C656859A8F953FE80E0E7CFAA242AFFEB7* __this, const RuntimeMethod* method)
{
	return ((  Enumerator_t687446157680B89D4DF7AA9AB619F441A3B6E2EB (*) (HashSet_1_tA2DD82C656859A8F953FE80E0E7CFAA242AFFEB7*, const RuntimeMethod*))HashSet_1_GetEnumerator_m143B98FEED7E9CABA2C494AB2F04DAD60A504635_gshared)(__this, method);
}
// System.Void System.Collections.Generic.HashSet`1/Enumerator<Meta.WitAi.Events.SpeechEvents>::Dispose()
inline void Enumerator_Dispose_m751DE47849B680B5DC08CB056693D60F563D766B (Enumerator_t687446157680B89D4DF7AA9AB619F441A3B6E2EB* __this, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_t687446157680B89D4DF7AA9AB619F441A3B6E2EB*, const RuntimeMethod*))Enumerator_Dispose_mFB582AEAA2E73F3128B5571197BEDE256A83F657_gshared)(__this, method);
}
// T System.Collections.Generic.HashSet`1/Enumerator<Meta.WitAi.Events.SpeechEvents>::get_Current()
inline SpeechEvents_tB51C31627EF79AB5734270C1558A6C6F67A5040E* Enumerator_get_Current_m18767B2633635D7E9E1B5094743F90E70447F0AE_inline (Enumerator_t687446157680B89D4DF7AA9AB619F441A3B6E2EB* __this, const RuntimeMethod* method)
{
	return ((  SpeechEvents_tB51C31627EF79AB5734270C1558A6C6F67A5040E* (*) (Enumerator_t687446157680B89D4DF7AA9AB619F441A3B6E2EB*, const RuntimeMethod*))Enumerator_get_Current_m139A176CD271A0532D75BE08DA7831C8C45CE28F_gshared_inline)(__this, method);
}
// System.Void UnityEngine.Events.UnityEvent::Invoke()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityEvent_Invoke_mFBF80D59B03C30C5FE6A06F897D954ACADE061D2 (UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* __this, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.HashSet`1/Enumerator<Meta.WitAi.Events.SpeechEvents>::MoveNext()
inline bool Enumerator_MoveNext_m70C21D014D6AE2587F43E2974BA95CEA36BC6417 (Enumerator_t687446157680B89D4DF7AA9AB619F441A3B6E2EB* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_t687446157680B89D4DF7AA9AB619F441A3B6E2EB*, const RuntimeMethod*))Enumerator_MoveNext_m27565F5ACCCC75C3DD34CC4CAE3E6AEFEB9144A6_gshared)(__this, method);
}
// T UnityEngine.Component::GetComponent<Meta.WitAi.Interfaces.IAudioEventProvider>()
inline RuntimeObject* Component_GetComponent_TisIAudioEventProvider_t50BB2A75EF5F19B841A69808B2C1AEEB67AA7F04_mF824A5D3469ACC34283E9E08D09926481440F6B6 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared)(__this, method);
}
// Meta.WitAi.Interfaces.IAudioInputEvents Meta.WitAi.Events.UnityEventListeners.AudioEventListener::get_AudioInputEvents()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* AudioEventListener_get_AudioInputEvents_mE014E105EE8CF779F32A3E922FAEE9B1A8C924B3 (AudioEventListener_t39E39D7138664E757F322BB01CE82890433659AB* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Events.UnityAction`1<System.Single>::.ctor(System.Object,System.IntPtr)
inline void UnityAction_1__ctor_mF770070D0A4FE93F6E04DA37D2EC60429EA545E5 (UnityAction_1_tAEFA3C1C529F0E1AD7C7C7AFC88822D359E7AC90* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (UnityAction_1_tAEFA3C1C529F0E1AD7C7C7AFC88822D359E7AC90*, RuntimeObject*, intptr_t, const RuntimeMethod*))UnityAction_1__ctor_mF770070D0A4FE93F6E04DA37D2EC60429EA545E5_gshared)(__this, ___object0, ___method1, method);
}
// System.Void UnityEngine.Events.UnityEvent`1<System.Single>::AddListener(UnityEngine.Events.UnityAction`1<T0>)
inline void UnityEvent_1_AddListener_m44E396BC4484BD75427FDD8CBE0B533CCAD8C1EC (UnityEvent_1_tDD811EB8F49CEE97BA6DF59344DFE6C6F42553D4* __this, UnityAction_1_tAEFA3C1C529F0E1AD7C7C7AFC88822D359E7AC90* ___call0, const RuntimeMethod* method)
{
	((  void (*) (UnityEvent_1_tDD811EB8F49CEE97BA6DF59344DFE6C6F42553D4*, UnityAction_1_tAEFA3C1C529F0E1AD7C7C7AFC88822D359E7AC90*, const RuntimeMethod*))UnityEvent_1_AddListener_m44E396BC4484BD75427FDD8CBE0B533CCAD8C1EC_gshared)(__this, ___call0, method);
}
// System.Void UnityEngine.Events.UnityEvent`1<System.Single>::RemoveListener(UnityEngine.Events.UnityAction`1<T0>)
inline void UnityEvent_1_RemoveListener_m6F51818308066F0E5EA7B37AC25ABDF12FADAEA9 (UnityEvent_1_tDD811EB8F49CEE97BA6DF59344DFE6C6F42553D4* __this, UnityAction_1_tAEFA3C1C529F0E1AD7C7C7AFC88822D359E7AC90* ___call0, const RuntimeMethod* method)
{
	((  void (*) (UnityEvent_1_tDD811EB8F49CEE97BA6DF59344DFE6C6F42553D4*, UnityAction_1_tAEFA3C1C529F0E1AD7C7C7AFC88822D359E7AC90*, const RuntimeMethod*))UnityEvent_1_RemoveListener_m6F51818308066F0E5EA7B37AC25ABDF12FADAEA9_gshared)(__this, ___call0, method);
}
// System.Void UnityEngine.Events.UnityEvent::RemoveListener(UnityEngine.Events.UnityAction)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityEvent_RemoveListener_m0E138F5575CB4363019D3DA570E98FAD502B812C (UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* __this, UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* ___call0, const RuntimeMethod* method) ;
// T UnityEngine.Component::GetComponent<Meta.WitAi.Interfaces.ITranscriptionEventProvider>()
inline RuntimeObject* Component_GetComponent_TisITranscriptionEventProvider_t20AA72759481322BFC0C59BD13DAA621238033DF_m22E3E56F5F15217DCF58493CE86DBB166ED49FC1 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared)(__this, method);
}
// Meta.WitAi.Interfaces.ITranscriptionEvent Meta.WitAi.Events.UnityEventListeners.TranscriptionEventListener::get_TranscriptionEvents()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* TranscriptionEventListener_get_TranscriptionEvents_m284668B41934C24E6C4A8D1D41E5353EAB1B0B3A (TranscriptionEventListener_t96B770053BE0AFCF8B9329247EEE4A23B864B4F5* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Events.UnityAction`1<System.String>::.ctor(System.Object,System.IntPtr)
inline void UnityAction_1__ctor_mE6251CCFD943EB114960F556A546E2777B18AC71 (UnityAction_1_t690494F0E492A2098660E28B8EB7D71B2C69BE1B* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (UnityAction_1_t690494F0E492A2098660E28B8EB7D71B2C69BE1B*, RuntimeObject*, intptr_t, const RuntimeMethod*))UnityAction_1__ctor_m0C2FC6B483B474AE9596A43EBA7FF6E85503A92A_gshared)(__this, ___object0, ___method1, method);
}
// System.Void UnityEngine.Events.UnityEvent`1<System.String>::AddListener(UnityEngine.Events.UnityAction`1<T0>)
inline void UnityEvent_1_AddListener_mEC384A8CFC5D4D41B62B08248A738CF61B82172F (UnityEvent_1_tC9859540CF1468306CAB6D758C0A0D95DBCEC257* __this, UnityAction_1_t690494F0E492A2098660E28B8EB7D71B2C69BE1B* ___call0, const RuntimeMethod* method)
{
	((  void (*) (UnityEvent_1_tC9859540CF1468306CAB6D758C0A0D95DBCEC257*, UnityAction_1_t690494F0E492A2098660E28B8EB7D71B2C69BE1B*, const RuntimeMethod*))UnityEvent_1_AddListener_m055233246714700E4BDAA62635BC0AA49E8165CC_gshared)(__this, ___call0, method);
}
// System.Void UnityEngine.Events.UnityEvent`1<System.String>::RemoveListener(UnityEngine.Events.UnityAction`1<T0>)
inline void UnityEvent_1_RemoveListener_m580353A1B030A82D1205B9BA94CF3484866C027F (UnityEvent_1_tC9859540CF1468306CAB6D758C0A0D95DBCEC257* __this, UnityAction_1_t690494F0E492A2098660E28B8EB7D71B2C69BE1B* ___call0, const RuntimeMethod* method)
{
	((  void (*) (UnityEvent_1_tC9859540CF1468306CAB6D758C0A0D95DBCEC257*, UnityAction_1_t690494F0E492A2098660E28B8EB7D71B2C69BE1B*, const RuntimeMethod*))UnityEvent_1_RemoveListener_m904FA6BDD0D33FDF8650EF816FF5C131867E693E_gshared)(__this, ___call0, method);
}
// System.Boolean System.String::IsNullOrEmpty(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_IsNullOrEmpty_mEA9E3FB005AC28FE02E69FCF95A7B8456192B478 (String_t* ___value0, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Object::op_Implicit(UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Implicit_m93896EF7D68FA113C42D3FE2BC6F661FC7EF514A (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___exists0, const RuntimeMethod* method) ;
// System.Void Meta.WitAi.Configuration.WitEndpointConfig::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WitEndpointConfig__ctor_m732E92810A12A6690761C5B6E1A12C90F1569D12 (WitEndpointConfig_t7CCDA7CBBF1FDD2A7779DDF6745BAED47E69BB1D* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.String>::.ctor()
inline void Dictionary_2__ctor_m768E076F1E804CE4959F4E71D3E6A9ADE2F55052 (Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* __this, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83*, const RuntimeMethod*))Dictionary_2__ctor_m5B32FBC624618211EB461D59CFBB10E987FD1329_gshared)(__this, method);
}
// System.String System.Int32::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5 (int32_t* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.String>::set_Item(TKey,TValue)
inline void Dictionary_2_set_Item_m9BF625649E96E60C1509898A992A6447E351D1A2 (Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* __this, String_t* ___key0, String_t* ___value1, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83*, String_t*, String_t*, const RuntimeMethod*))Dictionary_2_set_Item_m1A840355E8EDAECEA9D0C6F5E51B248FAA449CBD_gshared)(__this, ___key0, ___value1, method);
}
// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.String,System.String>::get_Keys()
inline KeyCollection_t2EDD317F5771E575ACB63527B5AFB71291040342* Dictionary_2_get_Keys_m0014C8E91B9B4377ACFBD26A9175A7E5C016D9E9 (Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* __this, const RuntimeMethod* method)
{
	return ((  KeyCollection_t2EDD317F5771E575ACB63527B5AFB71291040342* (*) (Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83*, const RuntimeMethod*))Dictionary_2_get_Keys_m72D290F90654BFD683FA7AA7C63D9F4F692218B6_gshared)(__this, method);
}
// System.Collections.Generic.Dictionary`2/KeyCollection/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2/KeyCollection<System.String,System.String>::GetEnumerator()
inline Enumerator_t84BD4D6D35ABE5554A430614BF2F7588BC152867 KeyCollection_GetEnumerator_m6B09BC0C54723DE1DB3E62395E41B76F419BAC22 (KeyCollection_t2EDD317F5771E575ACB63527B5AFB71291040342* __this, const RuntimeMethod* method)
{
	return ((  Enumerator_t84BD4D6D35ABE5554A430614BF2F7588BC152867 (*) (KeyCollection_t2EDD317F5771E575ACB63527B5AFB71291040342*, const RuntimeMethod*))KeyCollection_GetEnumerator_m7E77FBA7DE2D3876EC02F396712C4AA5B1D535A5_gshared)(__this, method);
}
// System.Void System.Collections.Generic.Dictionary`2/KeyCollection/Enumerator<System.String,System.String>::Dispose()
inline void Enumerator_Dispose_m6C974325ADBDD3ECEBAA290D7940AC282C56386A (Enumerator_t84BD4D6D35ABE5554A430614BF2F7588BC152867* __this, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_t84BD4D6D35ABE5554A430614BF2F7588BC152867*, const RuntimeMethod*))Enumerator_Dispose_mEB2A61F3F3F420C1B1DFD5C74EEFD4BD7761BCF7_gshared)(__this, method);
}
// TKey System.Collections.Generic.Dictionary`2/KeyCollection/Enumerator<System.String,System.String>::get_Current()
inline String_t* Enumerator_get_Current_m4620EF2C1DF7D94D5A511226C42A3A42040B1C9E_inline (Enumerator_t84BD4D6D35ABE5554A430614BF2F7588BC152867* __this, const RuntimeMethod* method)
{
	return ((  String_t* (*) (Enumerator_t84BD4D6D35ABE5554A430614BF2F7588BC152867*, const RuntimeMethod*))Enumerator_get_Current_mD6472FA27D28B9AE64A0FEF796C72ABBC2420EBF_gshared_inline)(__this, method);
}
// TValue System.Collections.Generic.Dictionary`2<System.String,System.String>::get_Item(TKey)
inline String_t* Dictionary_2_get_Item_mB13DFB3E7499031847CF544977D4EFB1AC0157AB (Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* __this, String_t* ___key0, const RuntimeMethod* method)
{
	return ((  String_t* (*) (Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83*, String_t*, const RuntimeMethod*))Dictionary_2_get_Item_m4AAAECBE902A211BF2126E6AFA280AEF73A3E0D6_gshared)(__this, ___key0, method);
}
// System.Boolean System.Collections.Generic.Dictionary`2/KeyCollection/Enumerator<System.String,System.String>::MoveNext()
inline bool Enumerator_MoveNext_mE8FB9EBD177219F5AC0BF48642FB47D3E186C283 (Enumerator_t84BD4D6D35ABE5554A430614BF2F7588BC152867* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_t84BD4D6D35ABE5554A430614BF2F7588BC152867*, const RuntimeMethod*))Enumerator_MoveNext_mB5E00F11BCA3AC963F9BA72659FA76B107863F3C_gshared)(__this, method);
}
// System.String Meta.WitAi.Json.JsonConvert::SerializeObject<System.Collections.Generic.Dictionary`2<System.String,System.String>>(FROM_TYPE,Meta.WitAi.Json.JsonConverter[],System.Boolean)
inline String_t* JsonConvert_SerializeObject_TisDictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83_m610316C589A5BB24A5DD256925743F4BCE73CA74 (Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* ___inObject0, JsonConverterU5BU5D_tF117D3A16A2A7AAC2A66A7EDCD32E3F48B704DDA* ___customConverters1, bool ___suppressWarnings2, const RuntimeMethod* method)
{
	return ((  String_t* (*) (Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83*, JsonConverterU5BU5D_tF117D3A16A2A7AAC2A66A7EDCD32E3F48B704DDA*, bool, const RuntimeMethod*))JsonConvert_SerializeObject_TisRuntimeObject_m38455FCF691812B499C0745839BE4B53DBC47D75_gshared)(___inObject0, ___customConverters1, ___suppressWarnings2, method);
}
// T[] System.Array::Empty<Meta.WitAi.Requests.VoiceServiceRequestOptions/QueryParam>()
inline QueryParamU5BU5D_tECB106E0E9D39573F239DA1C256E0922C6DDFE10* Array_Empty_TisQueryParam_t9D43428FEE0F1D498A2606403DF54F2B48B0C76F_m972F54D524ED9AE220774753BE7EA4E816006C13_inline (const RuntimeMethod* method)
{
	return ((  QueryParamU5BU5D_tECB106E0E9D39573F239DA1C256E0922C6DDFE10* (*) (const RuntimeMethod*))Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_gshared_inline)(method);
}
// System.Void Meta.WitAi.Requests.VoiceServiceRequestOptions::.ctor(Meta.WitAi.Requests.VoiceServiceRequestOptions/QueryParam[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VoiceServiceRequestOptions__ctor_m6E07BB0CA1E3038133B5627D1903C81B89D63EC2 (VoiceServiceRequestOptions_tBB80C39F5D734638F03442F09F4F106BD5F20EE4* __this, QueryParamU5BU5D_tECB106E0E9D39573F239DA1C256E0922C6DDFE10* ___newParams0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Vector2::.ctor(System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* __this, float ___x0, float ___y1, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Application::get_isPlaying()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Application_get_isPlaying_m25B0ABDFEF54F5370CD3F263A813540843D00F34 (const RuntimeMethod* method) ;
// T UnityEngine.Object::FindObjectOfType<Meta.WitAi.Data.AudioBuffer>()
inline AudioBuffer_t8F78C90BB0306EE2F5C4787B5D6ACF16EEF33E72* Object_FindObjectOfType_TisAudioBuffer_t8F78C90BB0306EE2F5C4787B5D6ACF16EEF33E72_m524F3E82FE6FC77F342A3146566AD48E5DDF5776 (const RuntimeMethod* method)
{
	return ((  AudioBuffer_t8F78C90BB0306EE2F5C4787B5D6ACF16EEF33E72* (*) (const RuntimeMethod*))Object_FindObjectOfType_TisRuntimeObject_m02DFBF011F3B59F777A5E521DB2A116DD496E968_gshared)(method);
}
// System.Void UnityEngine.GameObject::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameObject__ctor_m37D512B05D292F954792225E6C6EEE95293A9B88 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, String_t* ___name0, const RuntimeMethod* method) ;
// T UnityEngine.GameObject::AddComponent<Meta.WitAi.Data.AudioBuffer>()
inline AudioBuffer_t8F78C90BB0306EE2F5C4787B5D6ACF16EEF33E72* GameObject_AddComponent_TisAudioBuffer_t8F78C90BB0306EE2F5C4787B5D6ACF16EEF33E72_mC0D3594C79442A97F3273BB8B5FE45D38A18A295 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method)
{
	return ((  AudioBuffer_t8F78C90BB0306EE2F5C4787B5D6ACF16EEF33E72* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))GameObject_AddComponent_TisRuntimeObject_m69B93700FACCF372F5753371C6E8FB780800B824_gshared)(__this, method);
}
// UnityEngine.GameObject UnityEngine.Component::get_gameObject()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method) ;
// T UnityEngine.GameObject::GetComponentInChildren<Meta.WitAi.Interfaces.IAudioInputSource>()
inline RuntimeObject* GameObject_GetComponentInChildren_TisIAudioInputSource_t364BD5C2442BDCD435A62F220336E0A8F3AC8B0C_m678330762BBD2EF5E9FFF3AA349ACAC178B4B9B1 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))GameObject_GetComponentInChildren_TisRuntimeObject_mED181B37054A10395CA356010754C7DFC685893C_gshared)(__this, method);
}
// UnityEngine.SceneManagement.Scene UnityEngine.GameObject::get_scene()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Scene_tA1DC762B79745EB5140F054C884855B922318356 GameObject_get_scene_m747D45E8CECC56DD47D1E103F9E51D5FBEDA4B01 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method) ;
// UnityEngine.GameObject[] UnityEngine.SceneManagement.Scene::GetRootGameObjects()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* Scene_GetRootGameObjects_mFDE0BF9EA926F30EC9AE71F33E0AE4D5D4EC5C5B (Scene_tA1DC762B79745EB5140F054C884855B922318356* __this, const RuntimeMethod* method) ;
// T UnityEngine.GameObject::AddComponent<Meta.WitAi.Lib.Mic>()
inline Mic_t754EFE9D630FC1FBB701EB317849C522C0F384F4* GameObject_AddComponent_TisMic_t754EFE9D630FC1FBB701EB317849C522C0F384F4_mEDE89F407EEBE6CD16CDDF8EDE285FFFC92AC40A (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method)
{
	return ((  Mic_t754EFE9D630FC1FBB701EB317849C522C0F384F4* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))GameObject_AddComponent_TisRuntimeObject_m69B93700FACCF372F5753371C6E8FB780800B824_gshared)(__this, method);
}
// System.Boolean System.Collections.Generic.HashSet`1<UnityEngine.Component>::Contains(T)
inline bool HashSet_1_Contains_mFEEBB774E40F237E02F2881245F33540FB4B942D (HashSet_1_tF0A60E739EB979571381F8FB075B6B90F6FA6F8D* __this, Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* ___item0, const RuntimeMethod* method)
{
	return ((  bool (*) (HashSet_1_tF0A60E739EB979571381F8FB075B6B90F6FA6F8D*, Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))HashSet_1_Contains_m9BACE52BFA0BD83C601529D3629118453E459BBB_gshared)(__this, ___item0, method);
}
// Meta.WitAi.Interfaces.IAudioInputSource Meta.WitAi.Data.AudioBuffer::get_MicInput()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* AudioBuffer_get_MicInput_m7A1BBC6336FC35DF13D78B1269359BA8CB9C9B41 (AudioBuffer_t8F78C90BB0306EE2F5C4787B5D6ACF16EEF33E72* __this, const RuntimeMethod* method) ;
// System.Void Meta.WitAi.Data.AudioBuffer::InitializeMicDataBuffer()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioBuffer_InitializeMicDataBuffer_m70F40E4E308127C3F9FEF8E003314DF3EAB7C8FA (AudioBuffer_t8F78C90BB0306EE2F5C4787B5D6ACF16EEF33E72* __this, const RuntimeMethod* method) ;
// System.Void System.Action`3<System.Int32,System.Single[],System.Single>::.ctor(System.Object,System.IntPtr)
inline void Action_3__ctor_m456761457D50C389C47B3D27E78233649D267B93 (Action_3_t014775F97068AFC7018FE805CA856B7C5CF281F8* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Action_3_t014775F97068AFC7018FE805CA856B7C5CF281F8*, RuntimeObject*, intptr_t, const RuntimeMethod*))Action_3__ctor_m4DF8F60E9446A6DA0A67F2DBEEBF612A0FEF68FF_gshared)(__this, ___object0, ___method1, method);
}
// System.Void Meta.WitAi.Data.AudioBuffer::StartRecording(UnityEngine.Component)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioBuffer_StartRecording_m888C17A80A2B7C4F4E6B18E712DE333D9C23C670 (AudioBuffer_t8F78C90BB0306EE2F5C4787B5D6ACF16EEF33E72* __this, Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* ___component0, const RuntimeMethod* method) ;
// System.Void Meta.WitAi.Data.AudioBuffer::StopRecording(UnityEngine.Component)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioBuffer_StopRecording_mD07E74323DA4F231CC2B861F8AD6AF6DA1997200 (AudioBuffer_t8F78C90BB0306EE2F5C4787B5D6ACF16EEF33E72* __this, Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* ___component0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Events.UnityEvent`1<System.Single>::Invoke(T0)
inline void UnityEvent_1_Invoke_mABC41DCEDDFA68F8F39C0DFC1CF55B7C1B70A805 (UnityEvent_1_tDD811EB8F49CEE97BA6DF59344DFE6C6F42553D4* __this, float ___arg00, const RuntimeMethod* method)
{
	((  void (*) (UnityEvent_1_tDD811EB8F49CEE97BA6DF59344DFE6C6F42553D4*, float, const RuntimeMethod*))UnityEvent_1_Invoke_mABC41DCEDDFA68F8F39C0DFC1CF55B7C1B70A805_gshared)(__this, ___arg00, method);
}
// Meta.WitAi.Data.RingBuffer`1/Marker<System.Byte> Meta.WitAi.Data.AudioBuffer::CreateMarker()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Marker_t80D0133ECCCB8414D295FFD7C3FB9E6E564F5E42* AudioBuffer_CreateMarker_m427FB5BE768CFB06CB3A5AF48C65E7BA3E206E3D (AudioBuffer_t8F78C90BB0306EE2F5C4787B5D6ACF16EEF33E72* __this, const RuntimeMethod* method) ;
// System.Void Meta.WitAi.Data.AudioBuffer::Convert(System.Single[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioBuffer_Convert_m94FDE77E65A3435867B31C0222EED967EBFB82D5 (AudioBuffer_t8F78C90BB0306EE2F5C4787B5D6ACF16EEF33E72* __this, SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* ___samples0, const RuntimeMethod* method) ;
// Meta.WitAi.Data.RingBuffer`1/Marker<T> Meta.WitAi.Data.RingBuffer`1/Marker<System.Byte>::Clone()
inline Marker_t80D0133ECCCB8414D295FFD7C3FB9E6E564F5E42* Marker_Clone_mE4396CFC59F594A985AC0B08B4962A66A22425FE (Marker_t80D0133ECCCB8414D295FFD7C3FB9E6E564F5E42* __this, const RuntimeMethod* method)
{
	return ((  Marker_t80D0133ECCCB8414D295FFD7C3FB9E6E564F5E42* (*) (Marker_t80D0133ECCCB8414D295FFD7C3FB9E6E564F5E42*, const RuntimeMethod*))Marker_Clone_mE4396CFC59F594A985AC0B08B4962A66A22425FE_gshared)(__this, method);
}
// System.Void Meta.WitAi.Data.RingBuffer`1/ByteDataWriter<System.Byte>::.ctor(System.Object,System.IntPtr)
inline void ByteDataWriter__ctor_m9D61B1D1D35A39F6085FB52CE3F50E20FBA9F3E8 (ByteDataWriter_t42C70174C8038884885A93F156C878EC779F882D* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (ByteDataWriter_t42C70174C8038884885A93F156C878EC779F882D*, RuntimeObject*, intptr_t, const RuntimeMethod*))ByteDataWriter__ctor_m9D61B1D1D35A39F6085FB52CE3F50E20FBA9F3E8_gshared)(__this, ___object0, ___method1, method);
}
// System.Void Meta.WitAi.Data.RingBuffer`1/Marker<System.Byte>::ReadIntoWriters(Meta.WitAi.Data.RingBuffer`1/ByteDataWriter<T>[])
inline void Marker_ReadIntoWriters_mA97BA1DC688916D2951B8891A59A3B834F3C5ACE (Marker_t80D0133ECCCB8414D295FFD7C3FB9E6E564F5E42* __this, ByteDataWriterU5BU5D_t65BFCE3A23A6A9D43E7311E07FE38BAD340ADA5B* ___writers0, const RuntimeMethod* method)
{
	((  void (*) (Marker_t80D0133ECCCB8414D295FFD7C3FB9E6E564F5E42*, ByteDataWriterU5BU5D_t65BFCE3A23A6A9D43E7311E07FE38BAD340ADA5B*, const RuntimeMethod*))Marker_ReadIntoWriters_mA97BA1DC688916D2951B8891A59A3B834F3C5ACE_gshared)(__this, ___writers0, method);
}
// System.Void Meta.WitAi.Events.AudioBufferEvents/OnSampleReadyEvent::Invoke(Meta.WitAi.Data.RingBuffer`1/Marker<System.Byte>,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void OnSampleReadyEvent_Invoke_m9A89B018C8F93B365D23D6EF11B3C445D481782C_inline (OnSampleReadyEvent_t43C9DCB6394FF2C5F335602AC5455C1A6B430486* __this, Marker_t80D0133ECCCB8414D295FFD7C3FB9E6E564F5E42* ___marker0, float ___levelMax1, const RuntimeMethod* method) ;
// System.Void Meta.WitAi.Data.RingBuffer`1<System.Byte>::.ctor(System.Int32)
inline void RingBuffer_1__ctor_m7784E3644A1B55E96CBD6EEF4216CABCD9723A65 (RingBuffer_1_t553FDAA382235F13BBC8000565860BFE1438D276* __this, int32_t ___capacity0, const RuntimeMethod* method)
{
	((  void (*) (RingBuffer_1_t553FDAA382235F13BBC8000565860BFE1438D276*, int32_t, const RuntimeMethod*))RingBuffer_1__ctor_m7784E3644A1B55E96CBD6EEF4216CABCD9723A65_gshared)(__this, ___capacity0, method);
}
// System.Void Meta.WitAi.Data.RingBuffer`1<System.Byte>::Push(T)
inline void RingBuffer_1_Push_m8B341749D1C9AE76A94F221A79BBC887BD6F1AED (RingBuffer_1_t553FDAA382235F13BBC8000565860BFE1438D276* __this, uint8_t ___data0, const RuntimeMethod* method)
{
	((  void (*) (RingBuffer_1_t553FDAA382235F13BBC8000565860BFE1438D276*, uint8_t, const RuntimeMethod*))RingBuffer_1_Push_m8B341749D1C9AE76A94F221A79BBC887BD6F1AED_gshared)(__this, ___data0, method);
}
// Meta.WitAi.Data.RingBuffer`1/Marker<T> Meta.WitAi.Data.RingBuffer`1<System.Byte>::CreateMarker(System.Int32)
inline Marker_t80D0133ECCCB8414D295FFD7C3FB9E6E564F5E42* RingBuffer_1_CreateMarker_m0631E48C13008F51BFD02F5691BB9A260DBE83B4 (RingBuffer_1_t553FDAA382235F13BBC8000565860BFE1438D276* __this, int32_t ___offset0, const RuntimeMethod* method)
{
	return ((  Marker_t80D0133ECCCB8414D295FFD7C3FB9E6E564F5E42* (*) (RingBuffer_1_t553FDAA382235F13BBC8000565860BFE1438D276*, int32_t, const RuntimeMethod*))RingBuffer_1_CreateMarker_m0631E48C13008F51BFD02F5691BB9A260DBE83B4_gshared)(__this, ___offset0, method);
}
// Meta.WitAi.Data.AudioEncoding Meta.WitAi.Data.AudioBuffer::get_AudioEncoding()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AudioEncoding_t98ED2D092A9829C604C73C3B611E2FC987413EE4* AudioBuffer_get_AudioEncoding_m3E9D7CBAE58DD8D8CF432C296C1CE0CA6F8B9831 (AudioBuffer_t8F78C90BB0306EE2F5C4787B5D6ACF16EEF33E72* __this, const RuntimeMethod* method) ;
// System.Collections.IEnumerator Meta.WitAi.Data.AudioBuffer::WaitForMicToStart(UnityEngine.Component)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* AudioBuffer_WaitForMicToStart_m3E8A35EB9D74CC7579F84178CEE11F72CD6CCAE7 (AudioBuffer_t8F78C90BB0306EE2F5C4787B5D6ACF16EEF33E72* __this, Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* ___component0, const RuntimeMethod* method) ;
// UnityEngine.Coroutine UnityEngine.MonoBehaviour::StartCoroutine(System.Collections.IEnumerator)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* MonoBehaviour_StartCoroutine_m4CAFF732AA28CD3BDC5363B44A863575530EC812 (MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71* __this, RuntimeObject* ___routine0, const RuntimeMethod* method) ;
// System.Void Meta.WitAi.Data.AudioBuffer/<WaitForMicToStart>d__30::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CWaitForMicToStartU3Ed__30__ctor_mBA988CBCA2A1494C37AB874A7CFDC4C06EF10203 (U3CWaitForMicToStartU3Ed__30_tA981E845AE3F32AC0CB036E88C2CAA3FFBE51577* __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.HashSet`1<UnityEngine.Component>::Remove(T)
inline bool HashSet_1_Remove_m3BFAD86C88FECD83F760583DA945A46D5121A01A (HashSet_1_tF0A60E739EB979571381F8FB075B6B90F6FA6F8D* __this, Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* ___item0, const RuntimeMethod* method)
{
	return ((  bool (*) (HashSet_1_tF0A60E739EB979571381F8FB075B6B90F6FA6F8D*, Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))HashSet_1_Remove_mF1D84C0A2829DDA2A0CEE1D82A5B999B5F6627CB_gshared)(__this, ___item0, method);
}
// System.Int32 System.Collections.Generic.HashSet`1<UnityEngine.Component>::get_Count()
inline int32_t HashSet_1_get_Count_m81CE95C9321DD9C7853B30CF6F087F3EAAC9BAC9_inline (HashSet_1_tF0A60E739EB979571381F8FB075B6B90F6FA6F8D* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (HashSet_1_tF0A60E739EB979571381F8FB075B6B90F6FA6F8D*, const RuntimeMethod*))HashSet_1_get_Count_m41CC85EEB7855CEFA3BC7A32F115387939318ED3_gshared_inline)(__this, method);
}
// System.Void Meta.WitAi.Data.AudioBufferConfiguration::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioBufferConfiguration__ctor_m847F2E52BEF1A6EAC3C56670F1165889B4FD7C65 (AudioBufferConfiguration_tB38ABF06828B3927593D6E28F41EC838EFE9B8B3* __this, const RuntimeMethod* method) ;
// System.Void Meta.WitAi.Events.AudioBufferEvents::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioBufferEvents__ctor_mA35F09C6E6511A7439571EC9CA30795ACB46E9B5 (AudioBufferEvents_t464B32397852A58D1333411135D8AB9CF2F6C233* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.HashSet`1<UnityEngine.Component>::.ctor()
inline void HashSet_1__ctor_m1A23B597B88AB7A0A6D846A048DAD40DE5229468 (HashSet_1_tF0A60E739EB979571381F8FB075B6B90F6FA6F8D* __this, const RuntimeMethod* method)
{
	((  void (*) (HashSet_1_tF0A60E739EB979571381F8FB075B6B90F6FA6F8D*, const RuntimeMethod*))HashSet_1__ctor_m9132EE1422BAA45E44B7FFF495F378790D36D90E_gshared)(__this, method);
}
// System.Boolean System.Collections.Generic.HashSet`1<UnityEngine.Component>::Add(T)
inline bool HashSet_1_Add_m9A6A47923E3C1783E456E9EB31B8C06824DF001C (HashSet_1_tF0A60E739EB979571381F8FB075B6B90F6FA6F8D* __this, Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* ___item0, const RuntimeMethod* method)
{
	return ((  bool (*) (HashSet_1_tF0A60E739EB979571381F8FB075B6B90F6FA6F8D*, Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))HashSet_1_Add_m2CD7657B3459B61DD4BBA47024AC71F7D319658B_gshared)(__this, ___item0, method);
}
// System.Void System.Func`1<System.Boolean>::.ctor(System.Object,System.IntPtr)
inline void Func_1__ctor_mDFFAE9C73346372438B5B04C4558AC42F1A3DA22 (Func_1_t2BE7F58348C9CC544A8973B3A9E55541DE43C457* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Func_1_t2BE7F58348C9CC544A8973B3A9E55541DE43C457*, RuntimeObject*, intptr_t, const RuntimeMethod*))Func_1__ctor_mDFFAE9C73346372438B5B04C4558AC42F1A3DA22_gshared)(__this, ___object0, ___method1, method);
}
// System.Void UnityEngine.WaitUntil::.ctor(System.Func`1<System.Boolean>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WaitUntil__ctor_m2C925CF39695C35F4CB1AC997531F203AE1434DF (WaitUntil_tA1CD487C5811E7C1F8C4ADA85DF5F4EFDC1D41BD* __this, Func_1_t2BE7F58348C9CC544A8973B3A9E55541DE43C457* ___predicate0, const RuntimeMethod* method) ;
// System.Void System.NotSupportedException::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* __this, const RuntimeMethod* method) ;
// System.Single Meta.WitAi.Data.WitFloatValue::GetFloatValue(Meta.WitAi.Json.WitResponseNode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float WitFloatValue_GetFloatValue_m66BEA19497AD3ACAECA22A94B73FAB4A70CC7D41 (WitFloatValue_t0CD86D3313AB3919655A9F71C881B82124190FD7* __this, WitResponseNode_t1BFF810F15B21416F5F6D0A1CAAF03CEF942038C* ___response0, const RuntimeMethod* method) ;
// System.Boolean System.Single::TryParse(System.String,System.Single&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Single_TryParse_mC39FC2D8F1F33DE64685F3A8CE6BDD2164FB9423 (String_t* ___s0, float* ___result1, const RuntimeMethod* method) ;
// Meta.WitAi.WitResponseReference Meta.WitAi.Data.WitValue::get_Reference()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR WitResponseReference_t7B74D84BF98481046E19F0CE0EB5A3F4203D2581* WitValue_get_Reference_m235DE334635AE00B4D91508074C9FEEE6983A521 (WitValue_t62896259CA1F095F305381482D891DC0E1ED1092* __this, const RuntimeMethod* method) ;
// System.Void Meta.WitAi.Data.WitValue::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WitValue__ctor_mA065592F73C7ED140323B8C1357D3F78AEE9D8AF (WitValue_t62896259CA1F095F305381482D891DC0E1ED1092* __this, const RuntimeMethod* method) ;
// System.Int32 Meta.WitAi.Data.WitIntValue::GetIntValue(Meta.WitAi.Json.WitResponseNode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t WitIntValue_GetIntValue_mD7EA4195FE040649D4463500EE40ECB042F5D592 (WitIntValue_t67EABB88E65123FE396BDDB9C49054D20A693E48* __this, WitResponseNode_t1BFF810F15B21416F5F6D0A1CAAF03CEF942038C* ___response0, const RuntimeMethod* method) ;
// System.Boolean System.Int32::TryParse(System.String,System.Int32&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Int32_TryParse_mC928DE2FEC1C35ED5298BDDCA9868076E94B8A21 (String_t* ___s0, int32_t* ___result1, const RuntimeMethod* method) ;
// System.String Meta.WitAi.Data.WitStringValue::GetStringValue(Meta.WitAi.Json.WitResponseNode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* WitStringValue_GetStringValue_m7EA4E0209B10B9A7CA49727FCB6C1615CC43C346 (WitStringValue_tC57E63A29F85DBA9BF5A71184C079C4FA0069805* __this, WitResponseNode_t1BFF810F15B21416F5F6D0A1CAAF03CEF942038C* ___response0, const RuntimeMethod* method) ;
// System.Boolean System.String::op_Equality(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1 (String_t* ___a0, String_t* ___b1, const RuntimeMethod* method) ;
// Meta.WitAi.WitResponseReference Meta.WitAi.WitResultUtilities::GetWitResponseReference(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR WitResponseReference_t7B74D84BF98481046E19F0CE0EB5A3F4203D2581* WitResultUtilities_GetWitResponseReference_m1C6C4F70C12A0D48CA263069DC326994DCB5FA60 (String_t* ___path0, const RuntimeMethod* method) ;
// System.Void UnityEngine.ScriptableObject::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ScriptableObject__ctor_mD037FDB0B487295EA47F79A4DB1BF1846C9087FF (ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A* __this, const RuntimeMethod* method) ;
// Meta.WitAi.Data.Intents.WitIntentData Meta.WitAi.Data.Intents.WitIntentData::FromIntentWitResponseNode(Meta.WitAi.Json.WitResponseNode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR WitIntentData_tAEC870A54A863E27A1FDC98AE01CA9C99F22F515* WitIntentData_FromIntentWitResponseNode_mB687AA0C44E85F971879661C1E1450DA70CB122D (WitIntentData_tAEC870A54A863E27A1FDC98AE01CA9C99F22F515* __this, WitResponseNode_t1BFF810F15B21416F5F6D0A1CAAF03CEF942038C* ___node0, const RuntimeMethod* method) ;
// System.Boolean Meta.WitAi.Json.JsonConvert::DeserializeIntoObject<Meta.WitAi.Data.Intents.WitIntentData>(IN_TYPE&,Meta.WitAi.Json.WitResponseNode,Meta.WitAi.Json.JsonConverter[],System.Boolean)
inline bool JsonConvert_DeserializeIntoObject_TisWitIntentData_tAEC870A54A863E27A1FDC98AE01CA9C99F22F515_m4C56C556AD81F753D0C6A2BCA51E058C7B0EA9A4 (WitIntentData_tAEC870A54A863E27A1FDC98AE01CA9C99F22F515** ___instance0, WitResponseNode_t1BFF810F15B21416F5F6D0A1CAAF03CEF942038C* ___jsonToken1, JsonConverterU5BU5D_tF117D3A16A2A7AAC2A66A7EDCD32E3F48B704DDA* ___customConverters2, bool ___suppressWarnings3, const RuntimeMethod* method)
{
	return ((  bool (*) (WitIntentData_tAEC870A54A863E27A1FDC98AE01CA9C99F22F515**, WitResponseNode_t1BFF810F15B21416F5F6D0A1CAAF03CEF942038C*, JsonConverterU5BU5D_tF117D3A16A2A7AAC2A66A7EDCD32E3F48B704DDA*, bool, const RuntimeMethod*))JsonConvert_DeserializeIntoObject_TisRuntimeObject_mACBB7A644948338D002EE40DA9E3C0ED53AD12F3_gshared)(___instance0, ___jsonToken1, ___customConverters2, ___suppressWarnings3, method);
}
// System.Void Meta.WitAi.Data.Entities.WitDynamicEntities::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WitDynamicEntities__ctor_m5178CF6C94DACA3F959FBFE0CE323D6270EB72D1 (WitDynamicEntities_t122029C03796D5F75B696CA70D8083DA16E33E38* __this, const RuntimeMethod* method) ;
// System.Void Meta.WitAi.Data.Entities.WitDynamicEntities::Merge(Meta.WitAi.Interfaces.IDynamicEntitiesProvider)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WitDynamicEntities_Merge_m19DC180CB06F978BC5C8F876DD6737560EC76142 (WitDynamicEntities_t122029C03796D5F75B696CA70D8083DA16E33E38* __this, RuntimeObject* ___provider0, const RuntimeMethod* method) ;
// Meta.WitAi.Data.Entities.DynamicEntityKeywordRegistry Meta.WitAi.Data.Entities.DynamicEntityKeywordRegistry::get_Instance()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR DynamicEntityKeywordRegistry_t610EF6621FA40BD297502CD7A30337A625A57C28* DynamicEntityKeywordRegistry_get_Instance_mA3475882A1DE756C9CA825DCC64961BC2AF3DB04 (const RuntimeMethod* method) ;
// T UnityEngine.Object::FindObjectOfType<Meta.WitAi.Data.Entities.DynamicEntityKeywordRegistry>()
inline DynamicEntityKeywordRegistry_t610EF6621FA40BD297502CD7A30337A625A57C28* Object_FindObjectOfType_TisDynamicEntityKeywordRegistry_t610EF6621FA40BD297502CD7A30337A625A57C28_m3128A4382E976E3E8D969837346E72E182C5738A (const RuntimeMethod* method)
{
	return ((  DynamicEntityKeywordRegistry_t610EF6621FA40BD297502CD7A30337A625A57C28* (*) (const RuntimeMethod*))Object_FindObjectOfType_TisRuntimeObject_m02DFBF011F3B59F777A5E521DB2A116DD496E968_gshared)(method);
}
// System.Void Meta.WitAi.Data.Entities.WitDynamicEntities::AddKeyword(System.String,Meta.WitAi.Data.Info.WitEntityKeywordInfo)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WitDynamicEntities_AddKeyword_mCDF7E57A3B696A71CBE004DDB5E4784607A30601 (WitDynamicEntities_t122029C03796D5F75B696CA70D8083DA16E33E38* __this, String_t* ___entityName0, WitEntityKeywordInfo_tE0A290B8BFF00EF007649834C336D5DD48DA445B ___keyword1, const RuntimeMethod* method) ;
// System.Void Meta.WitAi.Data.Entities.WitDynamicEntities::RemoveKeyword(System.String,Meta.WitAi.Data.Info.WitEntityKeywordInfo)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WitDynamicEntities_RemoveKeyword_m3AFEBE51C4699E7CEEBD4CCCF4C7FDC3754AEC15 (WitDynamicEntities_t122029C03796D5F75B696CA70D8083DA16E33E38* __this, String_t* ___entityName0, WitEntityKeywordInfo_tE0A290B8BFF00EF007649834C336D5DD48DA445B ___keyword1, const RuntimeMethod* method) ;
// System.Boolean Meta.WitAi.Data.Entities.DynamicEntityKeywordRegistry::get_HasDynamicEntityRegistry()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool DynamicEntityKeywordRegistry_get_HasDynamicEntityRegistry_m1A365175C065362266F130FBDD0D5604E8F27FF8 (const RuntimeMethod* method) ;
// System.Void Meta.WitAi.Data.Entities.DynamicEntityKeywordRegistry::RegisterDynamicEntity(System.String,Meta.WitAi.Data.Info.WitEntityKeywordInfo)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DynamicEntityKeywordRegistry_RegisterDynamicEntity_m63DBCF5420BF9B10FD9B0DC0981E8F69F6E5534F (DynamicEntityKeywordRegistry_t610EF6621FA40BD297502CD7A30337A625A57C28* __this, String_t* ___entity0, WitEntityKeywordInfo_tE0A290B8BFF00EF007649834C336D5DD48DA445B ___keyword1, const RuntimeMethod* method) ;
// System.String UnityEngine.Object::get_name()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Object_get_name_mAC2F6B897CF1303BA4249B4CB55271AFACBB6392 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* __this, const RuntimeMethod* method) ;
// System.String System.String::Concat(System.String,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m8855A6DE10F84DA7F4EC113CADDB59873A25573B (String_t* ___str00, String_t* ___str11, String_t* ___str22, const RuntimeMethod* method) ;
// System.Void Meta.WitAi.VLog::W(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VLog_W_m7943297ED32FD0E92544C324E6793089056A2344 (RuntimeObject* ___log0, const RuntimeMethod* method) ;
// System.Void Meta.WitAi.Data.Entities.DynamicEntityKeywordRegistry::UnregisterDynamicEntity(System.String,Meta.WitAi.Data.Info.WitEntityKeywordInfo)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DynamicEntityKeywordRegistry_UnregisterDynamicEntity_mE35F6AB0A5E6BEBCBEDC3CF2E0265DB3701A0255 (DynamicEntityKeywordRegistry_t610EF6621FA40BD297502CD7A30337A625A57C28* __this, String_t* ___entity0, WitEntityKeywordInfo_tE0A290B8BFF00EF007649834C336D5DD48DA445B ___keyword1, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<Meta.WitAi.Data.Entities.WitDynamicEntity>::.ctor()
inline void List_1__ctor_mD90BDB6F3C75CE8C6843D60D583652B02327444F (List_1_t6D090AF9EB273D470FE30798680167DEBB0CC11B* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t6D090AF9EB273D470FE30798680167DEBB0CC11B*, const RuntimeMethod*))List_1__ctor_m7F078BB342729BDF11327FD89D7872265328F690_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1<Meta.WitAi.Data.Entities.WitDynamicEntity>::AddRange(System.Collections.Generic.IEnumerable`1<T>)
inline void List_1_AddRange_m8BB499395EEDB4C9EAA873C7A66A7ACDAFD89907 (List_1_t6D090AF9EB273D470FE30798680167DEBB0CC11B* __this, RuntimeObject* ___collection0, const RuntimeMethod* method)
{
	((  void (*) (List_1_t6D090AF9EB273D470FE30798680167DEBB0CC11B*, RuntimeObject*, const RuntimeMethod*))List_1_AddRange_m1F76B300133150E6046C5FED00E88B5DE0A02E17_gshared)(__this, ___collection0, method);
}
// System.Void Meta.WitAi.Json.WitResponseClass::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WitResponseClass__ctor_mAD6E312EBFEC01A4819A7AF57D2E0D98163AAD47 (WitResponseClass_tB8A73CCFF2E00D717CD5D9F22465D8DEEE5DAE25* __this, const RuntimeMethod* method) ;
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<Meta.WitAi.Data.Entities.WitDynamicEntity>::GetEnumerator()
inline Enumerator_t6BA07F015EFBC8AC247FAA712168596523D25994 List_1_GetEnumerator_m40B8555CCE497F3BEA05299B1246A4AAA82BF2C2 (List_1_t6D090AF9EB273D470FE30798680167DEBB0CC11B* __this, const RuntimeMethod* method)
{
	return ((  Enumerator_t6BA07F015EFBC8AC247FAA712168596523D25994 (*) (List_1_t6D090AF9EB273D470FE30798680167DEBB0CC11B*, const RuntimeMethod*))List_1_GetEnumerator_mD8294A7FA2BEB1929487127D476F8EC1CDC23BFC_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1/Enumerator<Meta.WitAi.Data.Entities.WitDynamicEntity>::Dispose()
inline void Enumerator_Dispose_m83E7690AA88F67A27853DE26374E3155A14CA8B3 (Enumerator_t6BA07F015EFBC8AC247FAA712168596523D25994* __this, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_t6BA07F015EFBC8AC247FAA712168596523D25994*, const RuntimeMethod*))Enumerator_Dispose_mD9DC3E3C3697830A4823047AB29A77DBBB5ED419_gshared)(__this, method);
}
// T System.Collections.Generic.List`1/Enumerator<Meta.WitAi.Data.Entities.WitDynamicEntity>::get_Current()
inline WitDynamicEntity_tE0824DEF90E6E8AA7D10CC0A6892B4C1018DE2B4* Enumerator_get_Current_mB7624805B9FFE43D954DF948EE3B30592622B6B1_inline (Enumerator_t6BA07F015EFBC8AC247FAA712168596523D25994* __this, const RuntimeMethod* method)
{
	return ((  WitDynamicEntity_tE0824DEF90E6E8AA7D10CC0A6892B4C1018DE2B4* (*) (Enumerator_t6BA07F015EFBC8AC247FAA712168596523D25994*, const RuntimeMethod*))Enumerator_get_Current_m6330F15D18EE4F547C05DF9BF83C5EB710376027_gshared_inline)(__this, method);
}
// Meta.WitAi.Json.WitResponseArray Meta.WitAi.Data.Entities.WitDynamicEntity::get_AsJson()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR WitResponseArray_tAC1DCF75C6C2FAB0A70A7DB879A0F35999BAB30A* WitDynamicEntity_get_AsJson_mA7E4CB0E4036B333116C1897C8565D1FCFB2262C (WitDynamicEntity_tE0824DEF90E6E8AA7D10CC0A6892B4C1018DE2B4* __this, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.List`1/Enumerator<Meta.WitAi.Data.Entities.WitDynamicEntity>::MoveNext()
inline bool Enumerator_MoveNext_m4E5E1EF4BBDC6F5431792D53FCEDA69CD61D826A (Enumerator_t6BA07F015EFBC8AC247FAA712168596523D25994* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_t6BA07F015EFBC8AC247FAA712168596523D25994*, const RuntimeMethod*))Enumerator_MoveNext_mE921CC8F29FBBDE7CC3209A0ED0D921D58D00BCB_gshared)(__this, method);
}
// Meta.WitAi.Json.WitResponseClass Meta.WitAi.Data.Entities.WitDynamicEntities::get_AsJson()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR WitResponseClass_tB8A73CCFF2E00D717CD5D9F22465D8DEEE5DAE25* WitDynamicEntities_get_AsJson_mBA5640F8C7834C711FCDA6AF2675DC56EE31B48B (WitDynamicEntities_t122029C03796D5F75B696CA70D8083DA16E33E38* __this, const RuntimeMethod* method) ;
// System.Collections.Generic.IEnumerator`1<Meta.WitAi.Data.Entities.WitDynamicEntity> Meta.WitAi.Data.Entities.WitDynamicEntities::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* WitDynamicEntities_GetEnumerator_m2798D5D10E2C24F46BED3D60814622BE9BBB2338 (WitDynamicEntities_t122029C03796D5F75B696CA70D8083DA16E33E38* __this, const RuntimeMethod* method) ;
// System.Void Meta.WitAi.Data.Entities.WitDynamicEntities/<>c__DisplayClass12_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass12_0__ctor_m8625D0F6873C66DEE7735131A8B75C1367016622 (U3CU3Ec__DisplayClass12_0_t7BAF63290242ED2FD3A4364665FEACF638C4DE20* __this, const RuntimeMethod* method) ;
// System.Void System.Predicate`1<Meta.WitAi.Data.Entities.WitDynamicEntity>::.ctor(System.Object,System.IntPtr)
inline void Predicate_1__ctor_mF0DF589C32CDA697185F38B8E55927A8FDB6C6DD (Predicate_1_t39557AE2C0B3C676DB62FADB5D71DD45826B8572* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Predicate_1_t39557AE2C0B3C676DB62FADB5D71DD45826B8572*, RuntimeObject*, intptr_t, const RuntimeMethod*))Predicate_1__ctor_m3E007299121A15DF80F4A210FF8C20E5DF688F20_gshared)(__this, ___object0, ___method1, method);
}
// System.Int32 System.Collections.Generic.List`1<Meta.WitAi.Data.Entities.WitDynamicEntity>::FindIndex(System.Predicate`1<T>)
inline int32_t List_1_FindIndex_mE9AA887D00D181BADF341807FD92E8991B62971A (List_1_t6D090AF9EB273D470FE30798680167DEBB0CC11B* __this, Predicate_1_t39557AE2C0B3C676DB62FADB5D71DD45826B8572* ___match0, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_t6D090AF9EB273D470FE30798680167DEBB0CC11B*, Predicate_1_t39557AE2C0B3C676DB62FADB5D71DD45826B8572*, const RuntimeMethod*))List_1_FindIndex_m9875FFE328FA833B2617915FF976DEDA4724EBC3_gshared)(__this, ___match0, method);
}
// System.Void System.Collections.Generic.List`1<Meta.WitAi.Data.Entities.WitDynamicEntity>::Add(T)
inline void List_1_Add_m67EDCB98B1E1D35BADFEAC5C05C3101FACF43EAF_inline (List_1_t6D090AF9EB273D470FE30798680167DEBB0CC11B* __this, WitDynamicEntity_tE0824DEF90E6E8AA7D10CC0A6892B4C1018DE2B4* ___item0, const RuntimeMethod* method)
{
	((  void (*) (List_1_t6D090AF9EB273D470FE30798680167DEBB0CC11B*, WitDynamicEntity_tE0824DEF90E6E8AA7D10CC0A6892B4C1018DE2B4*, const RuntimeMethod*))List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline)(__this, ___item0, method);
}
// System.String System.String::Concat(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m9E3155FB84015C823606188F53B47CB44C444991 (String_t* ___str00, String_t* ___str11, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.List`1<Meta.WitAi.Data.Entities.WitDynamicEntity>::Remove(T)
inline bool List_1_Remove_m07B166FD98004ECE5C0F7524AC18B8154F2E825B (List_1_t6D090AF9EB273D470FE30798680167DEBB0CC11B* __this, WitDynamicEntity_tE0824DEF90E6E8AA7D10CC0A6892B4C1018DE2B4* ___item0, const RuntimeMethod* method)
{
	return ((  bool (*) (List_1_t6D090AF9EB273D470FE30798680167DEBB0CC11B*, WitDynamicEntity_tE0824DEF90E6E8AA7D10CC0A6892B4C1018DE2B4*, const RuntimeMethod*))List_1_Remove_m4DFA48F4CEB9169601E75FC28517C5C06EFA5AD7_gshared)(__this, ___item0, method);
}
// System.Void Meta.WitAi.Data.Entities.WitDynamicEntities/<>c__DisplayClass14_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass14_0__ctor_m654A4DE466127276F04E0102A64462482FB3F906 (U3CU3Ec__DisplayClass14_0_tA27EEDC5333187C3AC128BA4030FEE5B3D6DE503* __this, const RuntimeMethod* method) ;
// T System.Collections.Generic.List`1<Meta.WitAi.Data.Entities.WitDynamicEntity>::Find(System.Predicate`1<T>)
inline WitDynamicEntity_tE0824DEF90E6E8AA7D10CC0A6892B4C1018DE2B4* List_1_Find_m9760E5BE5F71037777382614940964F6DA618AE9 (List_1_t6D090AF9EB273D470FE30798680167DEBB0CC11B* __this, Predicate_1_t39557AE2C0B3C676DB62FADB5D71DD45826B8572* ___match0, const RuntimeMethod* method)
{
	return ((  WitDynamicEntity_tE0824DEF90E6E8AA7D10CC0A6892B4C1018DE2B4* (*) (List_1_t6D090AF9EB273D470FE30798680167DEBB0CC11B*, Predicate_1_t39557AE2C0B3C676DB62FADB5D71DD45826B8572*, const RuntimeMethod*))List_1_Find_m5E78A210541B0D844FE27B94F509313623BE33D3_gshared)(__this, ___match0, method);
}
// T[] System.Array::Empty<System.String>()
inline StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* Array_Empty_TisString_t_m9832B70DF2B936246FE60F75D3D12CB946C39D16_inline (const RuntimeMethod* method)
{
	return ((  StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* (*) (const RuntimeMethod*))Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_gshared_inline)(method);
}
// System.Void Meta.WitAi.Data.Entities.WitDynamicEntity::.ctor(System.String,System.String[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WitDynamicEntity__ctor_m0CA7E7E8120B52275414FD0AA60C03918C1BDB58 (WitDynamicEntity_tE0824DEF90E6E8AA7D10CC0A6892B4C1018DE2B4* __this, String_t* ___entity0, StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___keywords1, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<Meta.WitAi.Data.Info.WitEntityKeywordInfo>::Add(T)
inline void List_1_Add_mB785B35A5407068979C269B25532380F897AF875_inline (List_1_t4F3133982BFC53A2508E8212590377CE60E9596C* __this, WitEntityKeywordInfo_tE0A290B8BFF00EF007649834C336D5DD48DA445B ___item0, const RuntimeMethod* method)
{
	((  void (*) (List_1_t4F3133982BFC53A2508E8212590377CE60E9596C*, WitEntityKeywordInfo_tE0A290B8BFF00EF007649834C336D5DD48DA445B, const RuntimeMethod*))List_1_Add_mB785B35A5407068979C269B25532380F897AF875_gshared_inline)(__this, ___item0, method);
}
// System.Void Meta.WitAi.Data.Entities.WitDynamicEntities/<>c__DisplayClass15_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass15_0__ctor_mCCCA1A6056023A410E46737A7DF6D7EA0957D6E0 (U3CU3Ec__DisplayClass15_0_tACB191291E61806F1F8880014C1B1F30240781FC* __this, const RuntimeMethod* method) ;
// T System.Collections.Generic.List`1<Meta.WitAi.Data.Entities.WitDynamicEntity>::get_Item(System.Int32)
inline WitDynamicEntity_tE0824DEF90E6E8AA7D10CC0A6892B4C1018DE2B4* List_1_get_Item_m7B0EB16C24DB14F6557DC2080D4AF80F77AF1D56 (List_1_t6D090AF9EB273D470FE30798680167DEBB0CC11B* __this, int32_t ___index0, const RuntimeMethod* method)
{
	return ((  WitDynamicEntity_tE0824DEF90E6E8AA7D10CC0A6892B4C1018DE2B4* (*) (List_1_t6D090AF9EB273D470FE30798680167DEBB0CC11B*, int32_t, const RuntimeMethod*))List_1_get_Item_m33561245D64798C2AB07584C0EC4F240E4839A38_gshared)(__this, ___index0, method);
}
// System.Boolean System.Collections.Generic.List`1<Meta.WitAi.Data.Info.WitEntityKeywordInfo>::Remove(T)
inline bool List_1_Remove_m04D253F0F05F9150C8F833AD48BA9BD48A0F3F89 (List_1_t4F3133982BFC53A2508E8212590377CE60E9596C* __this, WitEntityKeywordInfo_tE0A290B8BFF00EF007649834C336D5DD48DA445B ___item0, const RuntimeMethod* method)
{
	return ((  bool (*) (List_1_t4F3133982BFC53A2508E8212590377CE60E9596C*, WitEntityKeywordInfo_tE0A290B8BFF00EF007649834C336D5DD48DA445B, const RuntimeMethod*))List_1_Remove_m04D253F0F05F9150C8F833AD48BA9BD48A0F3F89_gshared)(__this, ___item0, method);
}
// System.Int32 System.Collections.Generic.List`1<Meta.WitAi.Data.Info.WitEntityKeywordInfo>::get_Count()
inline int32_t List_1_get_Count_mE0AFF33D783CDEE097B45A7077DE1721E0138FE9_inline (List_1_t4F3133982BFC53A2508E8212590377CE60E9596C* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_t4F3133982BFC53A2508E8212590377CE60E9596C*, const RuntimeMethod*))List_1_get_Count_mE0AFF33D783CDEE097B45A7077DE1721E0138FE9_gshared_inline)(__this, method);
}
// System.Void System.Collections.Generic.List`1<Meta.WitAi.Data.Entities.WitDynamicEntity>::RemoveAt(System.Int32)
inline void List_1_RemoveAt_m9DD03354CB5AEA0DEF85D3DAA9099E9904847164 (List_1_t6D090AF9EB273D470FE30798680167DEBB0CC11B* __this, int32_t ___index0, const RuntimeMethod* method)
{
	((  void (*) (List_1_t6D090AF9EB273D470FE30798680167DEBB0CC11B*, int32_t, const RuntimeMethod*))List_1_RemoveAt_m54F62297ADEE4D4FDA697F49ED807BF901201B54_gshared)(__this, ___index0, method);
}
// System.Void System.Collections.Generic.List`1<Meta.WitAi.Data.Info.WitEntityKeywordInfo>::.ctor()
inline void List_1__ctor_m038E1782678F97D19BF54E473C8DFF06B41723BD (List_1_t4F3133982BFC53A2508E8212590377CE60E9596C* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t4F3133982BFC53A2508E8212590377CE60E9596C*, const RuntimeMethod*))List_1__ctor_m038E1782678F97D19BF54E473C8DFF06B41723BD_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1<System.String>::.ctor(System.Collections.Generic.IEnumerable`1<T>)
inline void List_1__ctor_m0BAB01B25B1D62E100CC97401B1A9972D6DEB6EC (List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* __this, RuntimeObject* ___collection0, const RuntimeMethod* method)
{
	((  void (*) (List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD*, RuntimeObject*, const RuntimeMethod*))List_1__ctor_mE097DBD72433D1AFC11733F5678602603A756424_gshared)(__this, ___collection0, method);
}
// System.Collections.Generic.Dictionary`2/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2<System.String,System.Collections.Generic.List`1<System.String>>::GetEnumerator()
inline Enumerator_tF61ACA1FDE72603A35B49225874CAC6CA43B2250 Dictionary_2_GetEnumerator_m7B0E05167CA47611244E25AD67EBCEBDF5DB5EDE (Dictionary_2_t79BA378F246EFA4AD0AFFA017D788423CACA8638* __this, const RuntimeMethod* method)
{
	return ((  Enumerator_tF61ACA1FDE72603A35B49225874CAC6CA43B2250 (*) (Dictionary_2_t79BA378F246EFA4AD0AFFA017D788423CACA8638*, const RuntimeMethod*))Dictionary_2_GetEnumerator_m52AB12790B0B9B46B1DFB1F861C9DBEAB07C1FDA_gshared)(__this, method);
}
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.String,System.Collections.Generic.List`1<System.String>>::Dispose()
inline void Enumerator_Dispose_m7DE9243F0F854CE156AFB007FA010C1AB4321A44 (Enumerator_tF61ACA1FDE72603A35B49225874CAC6CA43B2250* __this, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_tF61ACA1FDE72603A35B49225874CAC6CA43B2250*, const RuntimeMethod*))Enumerator_Dispose_mEA5E01B81EB943B7003D87CEC1B6040524F0402C_gshared)(__this, method);
}
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator<System.String,System.Collections.Generic.List`1<System.String>>::get_Current()
inline KeyValuePair_2_tF2D5A036C624EBE9BEAB8512F34B28AB195C5D89 Enumerator_get_Current_mB41E65E33E936ACBD32C200633257CBD3261A9E2_inline (Enumerator_tF61ACA1FDE72603A35B49225874CAC6CA43B2250* __this, const RuntimeMethod* method)
{
	return ((  KeyValuePair_2_tF2D5A036C624EBE9BEAB8512F34B28AB195C5D89 (*) (Enumerator_tF61ACA1FDE72603A35B49225874CAC6CA43B2250*, const RuntimeMethod*))Enumerator_get_Current_mE3475384B761E1C7971D3639BD09117FE8363422_gshared_inline)(__this, method);
}
// TKey System.Collections.Generic.KeyValuePair`2<System.String,System.Collections.Generic.List`1<System.String>>::get_Key()
inline String_t* KeyValuePair_2_get_Key_m852B0BE1941AFE5DA3A393534C0020AEAB59D0A6_inline (KeyValuePair_2_tF2D5A036C624EBE9BEAB8512F34B28AB195C5D89* __this, const RuntimeMethod* method)
{
	return ((  String_t* (*) (KeyValuePair_2_tF2D5A036C624EBE9BEAB8512F34B28AB195C5D89*, const RuntimeMethod*))KeyValuePair_2_get_Key_mBD8EA7557C27E6956F2AF29DA3F7499B2F51A282_gshared_inline)(__this, method);
}
// TValue System.Collections.Generic.KeyValuePair`2<System.String,System.Collections.Generic.List`1<System.String>>::get_Value()
inline List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* KeyValuePair_2_get_Value_mD55616E290F6591FA95053D1C8D2DDA2E49A058C_inline (KeyValuePair_2_tF2D5A036C624EBE9BEAB8512F34B28AB195C5D89* __this, const RuntimeMethod* method)
{
	return ((  List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* (*) (KeyValuePair_2_tF2D5A036C624EBE9BEAB8512F34B28AB195C5D89*, const RuntimeMethod*))KeyValuePair_2_get_Value_mC6BD8075F9C9DDEF7B4D731E5C38EC19103988E7_gshared_inline)(__this, method);
}
// System.Boolean System.Collections.Generic.Dictionary`2/Enumerator<System.String,System.Collections.Generic.List`1<System.String>>::MoveNext()
inline bool Enumerator_MoveNext_mA71548765692C241BEFB57E80CBC1563829B1656 (Enumerator_tF61ACA1FDE72603A35B49225874CAC6CA43B2250* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_tF61ACA1FDE72603A35B49225874CAC6CA43B2250*, const RuntimeMethod*))Enumerator_MoveNext_mCD4950A75FFADD54AF354D48C6C0DB0B5A22A5F4_gshared)(__this, method);
}
// Meta.WitAi.Json.WitResponseNode Meta.WitAi.Json.JsonConvert::SerializeToken<System.Collections.Generic.List`1<Meta.WitAi.Data.Info.WitEntityKeywordInfo>>(FROM_TYPE,Meta.WitAi.Json.JsonConverter[],System.Boolean)
inline WitResponseNode_t1BFF810F15B21416F5F6D0A1CAAF03CEF942038C* JsonConvert_SerializeToken_TisList_1_t4F3133982BFC53A2508E8212590377CE60E9596C_mE24CDA45C45ACB7605C3225C0CBE3D417CBB6E52 (List_1_t4F3133982BFC53A2508E8212590377CE60E9596C* ___inObject0, JsonConverterU5BU5D_tF117D3A16A2A7AAC2A66A7EDCD32E3F48B704DDA* ___customConverters1, bool ___suppressWarnings2, const RuntimeMethod* method)
{
	return ((  WitResponseNode_t1BFF810F15B21416F5F6D0A1CAAF03CEF942038C* (*) (List_1_t4F3133982BFC53A2508E8212590377CE60E9596C*, JsonConverterU5BU5D_tF117D3A16A2A7AAC2A66A7EDCD32E3F48B704DDA*, bool, const RuntimeMethod*))JsonConvert_SerializeToken_TisRuntimeObject_m64CDC12E7FDF747B09B4179F960705A5A6435C16_gshared)(___inObject0, ___customConverters1, ___suppressWarnings2, method);
}
// System.Void Meta.WitAi.Data.Entities.WitEntityDataBase`1<System.String>::.ctor()
inline void WitEntityDataBase_1__ctor_m144D832DF21C40D1F8A75A34553A283572EAB831 (WitEntityDataBase_1_t76EEB2E002923316F752746DDB37569F5D39FEB4* __this, const RuntimeMethod* method)
{
	((  void (*) (WitEntityDataBase_1_t76EEB2E002923316F752746DDB37569F5D39FEB4*, const RuntimeMethod*))WitEntityDataBase_1__ctor_m5C970DAB1C9B01D04F0BD6D9B2FCE291BF11ACF9_gshared)(__this, method);
}
// Meta.WitAi.Data.Entities.WitEntityDataBase`1<T> Meta.WitAi.Data.Entities.WitEntityDataBase`1<System.String>::FromEntityWitResponseNode(Meta.WitAi.Json.WitResponseNode)
inline WitEntityDataBase_1_t76EEB2E002923316F752746DDB37569F5D39FEB4* WitEntityDataBase_1_FromEntityWitResponseNode_m1B28663CA966B383C72F30F0FA2D0AECCF378A52 (WitEntityDataBase_1_t76EEB2E002923316F752746DDB37569F5D39FEB4* __this, WitResponseNode_t1BFF810F15B21416F5F6D0A1CAAF03CEF942038C* ___node0, const RuntimeMethod* method)
{
	return ((  WitEntityDataBase_1_t76EEB2E002923316F752746DDB37569F5D39FEB4* (*) (WitEntityDataBase_1_t76EEB2E002923316F752746DDB37569F5D39FEB4*, WitResponseNode_t1BFF810F15B21416F5F6D0A1CAAF03CEF942038C*, const RuntimeMethod*))WitEntityDataBase_1_FromEntityWitResponseNode_m86F61120798C478643AF4031DE9CC7CE890E7DF1_gshared)(__this, ___node0, method);
}
// System.Boolean Meta.WitAi.Data.Entities.WitEntityData::op_Inequality(Meta.WitAi.Data.Entities.WitEntityData,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WitEntityData_op_Inequality_m55449D5F2025E379D3490FC2D0FE1AF172A41657 (WitEntityData_t3814C265B1FEF49FEBAD433FB102049418BB736B* ___data0, RuntimeObject* ___value1, const RuntimeMethod* method) ;
// System.Boolean System.Object::Equals(System.Object,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_Equals_m434DF93FDA204D5C06E889A9CB53BC2E5D39ABF7 (RuntimeObject* ___objA0, RuntimeObject* ___objB1, const RuntimeMethod* method) ;
// System.Boolean System.Object::Equals(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_Equals_m07105C4585D3FE204F2A80D58523D001DC43F63B (RuntimeObject* __this, RuntimeObject* ___obj0, const RuntimeMethod* method) ;
// System.Int32 System.Object::GetHashCode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Object_GetHashCode_m372C5A7AB16CAC13307C11C4256D706CE57E090C (RuntimeObject* __this, const RuntimeMethod* method) ;
// System.Void Meta.WitAi.Data.Entities.WitEntityDataBase`1<System.Single>::.ctor()
inline void WitEntityDataBase_1__ctor_m02EB7DBBEE819293BC6F42383C89E3CABC514E3F (WitEntityDataBase_1_t90E9F0FB214EED844AD8DD1A97EA3C1FD1EED960* __this, const RuntimeMethod* method)
{
	((  void (*) (WitEntityDataBase_1_t90E9F0FB214EED844AD8DD1A97EA3C1FD1EED960*, const RuntimeMethod*))WitEntityDataBase_1__ctor_m02EB7DBBEE819293BC6F42383C89E3CABC514E3F_gshared)(__this, method);
}
// Meta.WitAi.Data.Entities.WitEntityDataBase`1<T> Meta.WitAi.Data.Entities.WitEntityDataBase`1<System.Single>::FromEntityWitResponseNode(Meta.WitAi.Json.WitResponseNode)
inline WitEntityDataBase_1_t90E9F0FB214EED844AD8DD1A97EA3C1FD1EED960* WitEntityDataBase_1_FromEntityWitResponseNode_m697E7D61EF38859B86A67FAC7B6062E20F5C91B0 (WitEntityDataBase_1_t90E9F0FB214EED844AD8DD1A97EA3C1FD1EED960* __this, WitResponseNode_t1BFF810F15B21416F5F6D0A1CAAF03CEF942038C* ___node0, const RuntimeMethod* method)
{
	return ((  WitEntityDataBase_1_t90E9F0FB214EED844AD8DD1A97EA3C1FD1EED960* (*) (WitEntityDataBase_1_t90E9F0FB214EED844AD8DD1A97EA3C1FD1EED960*, WitResponseNode_t1BFF810F15B21416F5F6D0A1CAAF03CEF942038C*, const RuntimeMethod*))WitEntityDataBase_1_FromEntityWitResponseNode_m697E7D61EF38859B86A67FAC7B6062E20F5C91B0_gshared)(__this, ___node0, method);
}
// System.Boolean Meta.WitAi.Data.Entities.WitEntityFloatData::op_Equality(Meta.WitAi.Data.Entities.WitEntityFloatData,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WitEntityFloatData_op_Equality_m90CA170239EDBE24601DAB7C5CE1AEEF3929D6CC (WitEntityFloatData_t102A2BB5C9BCA8A0FEA4D3CC3F9D8B83AE31CCB8* ___data0, float ___value1, const RuntimeMethod* method) ;
// System.Boolean Meta.WitAi.Data.Entities.WitEntityFloatData::op_Equality(Meta.WitAi.Data.Entities.WitEntityFloatData,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WitEntityFloatData_op_Equality_mD341BBB15F3074BAB5EBEBAB68F8D7DF9F6BD17F (WitEntityFloatData_t102A2BB5C9BCA8A0FEA4D3CC3F9D8B83AE31CCB8* ___data0, int32_t ___value1, const RuntimeMethod* method) ;
// System.Void Meta.WitAi.Data.Entities.WitEntityDataBase`1<System.Int32>::.ctor()
inline void WitEntityDataBase_1__ctor_m47659B0D37AAA587A516AB8F63573058A00A225D (WitEntityDataBase_1_t46F92AF5EC7866816B6CD6D417773D4FFE270507* __this, const RuntimeMethod* method)
{
	((  void (*) (WitEntityDataBase_1_t46F92AF5EC7866816B6CD6D417773D4FFE270507*, const RuntimeMethod*))WitEntityDataBase_1__ctor_m47659B0D37AAA587A516AB8F63573058A00A225D_gshared)(__this, method);
}
// Meta.WitAi.Data.Entities.WitEntityDataBase`1<T> Meta.WitAi.Data.Entities.WitEntityDataBase`1<System.Int32>::FromEntityWitResponseNode(Meta.WitAi.Json.WitResponseNode)
inline WitEntityDataBase_1_t46F92AF5EC7866816B6CD6D417773D4FFE270507* WitEntityDataBase_1_FromEntityWitResponseNode_m0AACEFF9E3C6FEA0A185EA5A1B1B4EF5FB491FBB (WitEntityDataBase_1_t46F92AF5EC7866816B6CD6D417773D4FFE270507* __this, WitResponseNode_t1BFF810F15B21416F5F6D0A1CAAF03CEF942038C* ___node0, const RuntimeMethod* method)
{
	return ((  WitEntityDataBase_1_t46F92AF5EC7866816B6CD6D417773D4FFE270507* (*) (WitEntityDataBase_1_t46F92AF5EC7866816B6CD6D417773D4FFE270507*, WitResponseNode_t1BFF810F15B21416F5F6D0A1CAAF03CEF942038C*, const RuntimeMethod*))WitEntityDataBase_1_FromEntityWitResponseNode_m0AACEFF9E3C6FEA0A185EA5A1B1B4EF5FB491FBB_gshared)(__this, ___node0, method);
}
// System.Boolean Meta.WitAi.Data.Entities.WitEntityIntData::op_Equality(Meta.WitAi.Data.Entities.WitEntityIntData,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WitEntityIntData_op_Equality_mD3AA460E9E6F75CB6C5570673F1C168915895B3A (WitEntityIntData_t25F04B7F8B86E577ED2F1C8CA31E13A827F9CB3C* ___data0, int32_t ___value1, const RuntimeMethod* method) ;
// System.Void Meta.WitAi.Data.Entities.WitDynamicEntities::.ctor(Meta.WitAi.Data.Entities.WitDynamicEntity[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WitDynamicEntities__ctor_m7EFFDBF350D1BB930547DD8073093A2DF42D6AC7 (WitDynamicEntities_t122029C03796D5F75B696CA70D8083DA16E33E38* __this, WitDynamicEntityU5BU5D_tAF932D5132E6589F964FB76D2FB82BFA9E0EDB7F* ___entity0, const RuntimeMethod* method) ;
// System.String Meta.WitAi.Data.Configuration.WitConfiguration::GetApplicationId()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* WitConfiguration_GetApplicationId_m9A06C8C514C88B5B1B783611EA60F6A7D8B80A65 (WitConfiguration_t85BCD6C826D35078E90334092184A53D1B69C72E* __this, const RuntimeMethod* method) ;
// System.String Meta.WitAi.Data.Configuration.WitConfiguration::GetClientAccessToken()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* WitConfiguration_GetClientAccessToken_m619DD2445232CA6A5C168763814741B3C75DCF47 (WitConfiguration_t85BCD6C826D35078E90334092184A53D1B69C72E* __this, const RuntimeMethod* method) ;
// T[] System.Array::Empty<Meta.WitAi.Data.Configuration.WitConfigurationAssetData>()
inline WitConfigurationAssetDataU5BU5D_t700D5FE01B115D42C19FDAB600E6E52D045BAB9C* Array_Empty_TisWitConfigurationAssetData_t85BC866513E76C112B29F1EE070D1F062C84273A_m138630C81E2B640FF706E28F53711B37F639B010_inline (const RuntimeMethod* method)
{
	return ((  WitConfigurationAssetDataU5BU5D_t700D5FE01B115D42C19FDAB600E6E52D045BAB9C* (*) (const RuntimeMethod*))Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_gshared_inline)(method);
}
// System.Boolean Meta.WitAi.Json.WitResponseNode::op_Equality(Meta.WitAi.Json.WitResponseNode,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WitResponseNode_op_Equality_m556CA10A38D4323CB11BF6BD64A0A22FA5055366 (WitResponseNode_t1BFF810F15B21416F5F6D0A1CAAF03CEF942038C* ___a0, RuntimeObject* ___b1, const RuntimeMethod* method) ;
// Meta.WitAi.Json.WitResponseNode Meta.WitAi.WitResultUtilities::GetFirstIntent(Meta.WitAi.Json.WitResponseNode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR WitResponseNode_t1BFF810F15B21416F5F6D0A1CAAF03CEF942038C* WitResultUtilities_GetFirstIntent_m45B7C2E800F23A78D0CD498157031D5D68342541 (WitResponseNode_t1BFF810F15B21416F5F6D0A1CAAF03CEF942038C* ___witResponse0, const RuntimeMethod* method) ;
// System.String Meta.WitAi.WitResultUtilities::GetTranscription(Meta.WitAi.Json.WitResponseNode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* WitResultUtilities_GetTranscription_m8B205AAE88950C55930BBF443E3473804483B60F (WitResponseNode_t1BFF810F15B21416F5F6D0A1CAAF03CEF942038C* ___witResponse0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Events.UnityEvent`1<System.String>::Invoke(T0)
inline void UnityEvent_1_Invoke_mA633B48B5D287DA856FB954AC3E4012487E63C15 (UnityEvent_1_tC9859540CF1468306CAB6D758C0A0D95DBCEC257* __this, String_t* ___arg00, const RuntimeMethod* method)
{
	((  void (*) (UnityEvent_1_tC9859540CF1468306CAB6D758C0A0D95DBCEC257*, String_t*, const RuntimeMethod*))UnityEvent_1_Invoke_m6CDC8B0639CE8935E2E13D10B2C8E500968130B6_gshared)(__this, ___arg00, method);
}
// System.Void Meta.WitAi.Utilities.StringEvent::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StringEvent__ctor_mC31F214D17DD41F033445DF11C6B8DE61C3731A3 (StringEvent_tC948A866B2D2C1ECC0783ABC07A4B876C8E28B5B* __this, const RuntimeMethod* method) ;
// System.Void Meta.WitAi.CallbackHandlers.WitResponseHandler::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WitResponseHandler__ctor_mA92FB5CA1D631E9FDEB631D826AB0945A3E6D609 (WitResponseHandler_t3BD2BF0058605CE13CD87228A0BBB9CDAFC74AF1* __this, const RuntimeMethod* method) ;
// System.Void Meta.WitAi.CallbackHandlers.SimpleIntentHandler::UpdateRanges(Meta.WitAi.Json.WitResponseNode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SimpleIntentHandler_UpdateRanges_m90B622F3A0239426D20B075B9C2D524A664A29E1 (SimpleIntentHandler_tF4B682B5036AF258B9F7E1D210A0945768A282F4* __this, WitResponseNode_t1BFF810F15B21416F5F6D0A1CAAF03CEF942038C* ___response0, const RuntimeMethod* method) ;
// Meta.WitAi.Data.Intents.WitIntentData[] Meta.WitAi.WitResultUtilities::GetIntents(Meta.WitAi.Json.WitResponseNode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR WitIntentDataU5BU5D_tA1E1A7F9E9C566D8BA4049F086E2ECD245E7ABF4* WitResultUtilities_GetIntents_m40E83F95A02AC47F9AD129CA1F7075C1C5EDD13A (WitResponseNode_t1BFF810F15B21416F5F6D0A1CAAF03CEF942038C* ___witResponse0, const RuntimeMethod* method) ;
// System.Boolean System.String::Equals(System.String,System.String,System.StringComparison)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_Equals_mCC34895D0DB2AD440C9D8767032215BC86B5C48B (String_t* ___a0, String_t* ___b1, int32_t ___comparisonType2, const RuntimeMethod* method) ;
// System.Boolean Meta.WitAi.CallbackHandlers.WitResponseHandler::RefreshConfidenceRange(System.Single,Meta.WitAi.CallbackHandlers.ConfidenceRange[],System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WitResponseHandler_RefreshConfidenceRange_mB3DFDEC327EB0141BD398F8F3D6141514ECAF901 (float ___confidence0, ConfidenceRangeU5BU5D_t436B72D1C2A21AE91F57767E7CCA104C79700583* ___confidenceRanges1, bool ___allowConfidenceOverlap2, const RuntimeMethod* method) ;
// System.Void Meta.WitAi.CallbackHandlers.WitIntentMatcher::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WitIntentMatcher__ctor_mBDA138A9E901DDC1C44B18C761362D8B5269EAA6 (WitIntentMatcher_tE81387B012FD1CDC55B99B00878C5E8EFD0D7F8D* __this, const RuntimeMethod* method) ;
// System.String Meta.WitAi.CallbackHandlers.WitIntentMatcher::OnValidateResponse(Meta.WitAi.Json.WitResponseNode,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* WitIntentMatcher_OnValidateResponse_m48D902D74EB6FAD8EB8FD83161207D8A83E97EEB (WitIntentMatcher_tE81387B012FD1CDC55B99B00878C5E8EFD0D7F8D* __this, WitResponseNode_t1BFF810F15B21416F5F6D0A1CAAF03CEF942038C* ___response0, bool ___isEarlyResponse1, const RuntimeMethod* method) ;
// System.String Meta.WitAi.WitResultUtilities::GetFirstEntityValue(Meta.WitAi.Json.WitResponseNode,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* WitResultUtilities_GetFirstEntityValue_mE467D691546F55E99122FB55428570676A50D77F (WitResponseNode_t1BFF810F15B21416F5F6D0A1CAAF03CEF942038C* ___witResponse0, String_t* ___name1, const RuntimeMethod* method) ;
// System.String System.String::Replace(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Replace_mABDB7003A1D0AEDCAE9FF85E3DFFFBA752D2A166 (String_t* __this, String_t* ___oldValue0, String_t* ___newValue1, const RuntimeMethod* method) ;
// System.Void Meta.WitAi.CallbackHandlers.StringEntityMatchEvent::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StringEntityMatchEvent__ctor_mB87FF57138D7C56DE31EE2D5BAB057329B8C781B (StringEntityMatchEvent_t8736CD9A25D69C2A4CCBD5440CCC7069AC6B9201* __this, const RuntimeMethod* method) ;
// System.String System.String::Format(System.String,System.Object,System.Object,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Format_mA0534D6E2AE4D67A6BD8D45B3321323930EB930C (String_t* ___format0, RuntimeObject* ___arg01, RuntimeObject* ___arg12, RuntimeObject* ___arg23, const RuntimeMethod* method) ;
// System.Void Meta.WitAi.CallbackHandlers.WitResponseHandler::OnEnable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WitResponseHandler_OnEnable_mFE8A0A36A8A37AF4136FBDCCBA9987D83396A80D (WitResponseHandler_t3BD2BF0058605CE13CD87228A0BBB9CDAFC74AF1* __this, const RuntimeMethod* method) ;
// System.Void Meta.WitAi.CallbackHandlers.WitResponseHandler::OnDisable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WitResponseHandler_OnDisable_m02C1751177C34AA643B73970BE6F0E6E8DA23B56 (WitResponseHandler_t3BD2BF0058605CE13CD87228A0BBB9CDAFC74AF1* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Events.UnityEvent`2<Meta.WitAi.Json.WitResponseNode,System.String>::.ctor()
inline void UnityEvent_2__ctor_m21C9872BB0486BA44FF463264947D9CFBF660DDA (UnityEvent_2_tC20F7D1BD03FC3DA58A01B3056D1D0B674961AF9* __this, const RuntimeMethod* method)
{
	((  void (*) (UnityEvent_2_tC20F7D1BD03FC3DA58A01B3056D1D0B674961AF9*, const RuntimeMethod*))UnityEvent_2__ctor_m36CB65F6682CF6EFB69FE2F1939D331599C453E3_gshared)(__this, method);
}
// T UnityEngine.Object::FindObjectOfType<Meta.WitAi.VoiceService>()
inline VoiceService_t601CB0E6879961EC1F8179A8E20EB9DD7AF6A82E* Object_FindObjectOfType_TisVoiceService_t601CB0E6879961EC1F8179A8E20EB9DD7AF6A82E_mDA8F5B3610935B66B1EC441F14D138F7C47411EC (const RuntimeMethod* method)
{
	return ((  VoiceService_t601CB0E6879961EC1F8179A8E20EB9DD7AF6A82E* (*) (const RuntimeMethod*))Object_FindObjectOfType_TisRuntimeObject_m02DFBF011F3B59F777A5E521DB2A116DD496E968_gshared)(method);
}
// System.Type System.Object::GetType()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t* Object_GetType_mE10A8FC1E57F3DF29972CCBC026C2DC3942263B3 (RuntimeObject* __this, const RuntimeMethod* method) ;
// System.String System.String::Concat(System.String,System.String,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m093934F71A9B351911EE46311674ED463B180006 (String_t* ___str00, String_t* ___str11, String_t* ___str22, String_t* ___str33, const RuntimeMethod* method) ;
// System.Void Meta.WitAi.VLog::E(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VLog_E_m72B89ED9282703998618195366B61B9F26A40AC1 (RuntimeObject* ___log0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Behaviour::set_enabled(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Behaviour_set_enabled_mF1DCFE60EB09E0529FE9476CA804A3AA2D72B16A (Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA* __this, bool ___value0, const RuntimeMethod* method) ;
// Meta.WitAi.Events.VoiceServiceRequestEvent Meta.WitAi.Events.SpeechEvents::get_OnSend()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR VoiceServiceRequestEvent_t7340AD8EBA1B3D36E1A95E47C8DBCD954F1DED13* SpeechEvents_get_OnSend_m848D965F028D864B6175BA77425848BA86153A13_inline (SpeechEvents_tB51C31627EF79AB5734270C1558A6C6F67A5040E* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Events.UnityAction`1<Meta.WitAi.Requests.VoiceServiceRequest>::.ctor(System.Object,System.IntPtr)
inline void UnityAction_1__ctor_mA3112565DCE97F8CEE37CB0C23589F7B5385FE82 (UnityAction_1_t47424DEBAD5E8E58E4A0DD7FD64A5834C41F7896* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (UnityAction_1_t47424DEBAD5E8E58E4A0DD7FD64A5834C41F7896*, RuntimeObject*, intptr_t, const RuntimeMethod*))UnityAction_1__ctor_m0C2FC6B483B474AE9596A43EBA7FF6E85503A92A_gshared)(__this, ___object0, ___method1, method);
}
// System.Void UnityEngine.Events.UnityEvent`1<Meta.WitAi.Requests.VoiceServiceRequest>::AddListener(UnityEngine.Events.UnityAction`1<T0>)
inline void UnityEvent_1_AddListener_m70247BB158E4AEFE0164279659FFD151906E2E7A (UnityEvent_1_t2AED438DE5FAF741875343B8663599EC1EC222E2* __this, UnityAction_1_t47424DEBAD5E8E58E4A0DD7FD64A5834C41F7896* ___call0, const RuntimeMethod* method)
{
	((  void (*) (UnityEvent_1_t2AED438DE5FAF741875343B8663599EC1EC222E2*, UnityAction_1_t47424DEBAD5E8E58E4A0DD7FD64A5834C41F7896*, const RuntimeMethod*))UnityEvent_1_AddListener_m055233246714700E4BDAA62635BC0AA49E8165CC_gshared)(__this, ___call0, method);
}
// Meta.WitAi.Events.WitValidationEvent Meta.WitAi.Events.VoiceEvents::get_OnValidatePartialResponse()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR WitValidationEvent_t731FF211C8D0215476601B54ECDDD2D1DF38974C* VoiceEvents_get_OnValidatePartialResponse_m62DE8DDDEE5ADC162380EAF17572CE4472913667_inline (VoiceEvents_t7755B8C2A9074FA12090CF7288E5512DFD225EA9* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Events.UnityAction`1<Meta.WitAi.Data.VoiceSession>::.ctor(System.Object,System.IntPtr)
inline void UnityAction_1__ctor_mBA2D24276288A034439DDF2DC789550CB1DA6C22 (UnityAction_1_tF266B43F3B48247A8143BA850AC13FFC634512E9* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (UnityAction_1_tF266B43F3B48247A8143BA850AC13FFC634512E9*, RuntimeObject*, intptr_t, const RuntimeMethod*))UnityAction_1__ctor_m0C2FC6B483B474AE9596A43EBA7FF6E85503A92A_gshared)(__this, ___object0, ___method1, method);
}
// System.Void UnityEngine.Events.UnityEvent`1<Meta.WitAi.Data.VoiceSession>::AddListener(UnityEngine.Events.UnityAction`1<T0>)
inline void UnityEvent_1_AddListener_mB3C6662F34981931F4CECC821C289F26B199098F (UnityEvent_1_t7ED997BF6FDFAAFDDB2D9E2EDE55BE3DF55284AA* __this, UnityAction_1_tF266B43F3B48247A8143BA850AC13FFC634512E9* ___call0, const RuntimeMethod* method)
{
	((  void (*) (UnityEvent_1_t7ED997BF6FDFAAFDDB2D9E2EDE55BE3DF55284AA*, UnityAction_1_tF266B43F3B48247A8143BA850AC13FFC634512E9*, const RuntimeMethod*))UnityEvent_1_AddListener_m055233246714700E4BDAA62635BC0AA49E8165CC_gshared)(__this, ___call0, method);
}
// Meta.WitAi.Events.WitResponseEvent Meta.WitAi.Events.SpeechEvents::get_OnResponse()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR WitResponseEvent_tC85152AAABC87956DF604749EEA671ADAA9EFFDA* SpeechEvents_get_OnResponse_m35A479475B9CCCE66CDA4028A0A6AE6343E50400_inline (SpeechEvents_tB51C31627EF79AB5734270C1558A6C6F67A5040E* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Events.UnityAction`1<Meta.WitAi.Json.WitResponseNode>::.ctor(System.Object,System.IntPtr)
inline void UnityAction_1__ctor_m8B1FC56332BDF48F305E5F292D2F751AAC2A90EE (UnityAction_1_t7814257576DA9D92A82FF91BA3EE537553AC1BC8* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (UnityAction_1_t7814257576DA9D92A82FF91BA3EE537553AC1BC8*, RuntimeObject*, intptr_t, const RuntimeMethod*))UnityAction_1__ctor_m0C2FC6B483B474AE9596A43EBA7FF6E85503A92A_gshared)(__this, ___object0, ___method1, method);
}
// System.Void UnityEngine.Events.UnityEvent`1<Meta.WitAi.Json.WitResponseNode>::AddListener(UnityEngine.Events.UnityAction`1<T0>)
inline void UnityEvent_1_AddListener_m03EDE8CB25D09EA569869E869DC2554E4D9E2F55 (UnityEvent_1_t3DC4F1FBCED8AF76C18EC16A2B55C43FBAE5E62D* __this, UnityAction_1_t7814257576DA9D92A82FF91BA3EE537553AC1BC8* ___call0, const RuntimeMethod* method)
{
	((  void (*) (UnityEvent_1_t3DC4F1FBCED8AF76C18EC16A2B55C43FBAE5E62D*, UnityAction_1_t7814257576DA9D92A82FF91BA3EE537553AC1BC8*, const RuntimeMethod*))UnityEvent_1_AddListener_m055233246714700E4BDAA62635BC0AA49E8165CC_gshared)(__this, ___call0, method);
}
// System.Void UnityEngine.Events.UnityEvent`1<Meta.WitAi.Requests.VoiceServiceRequest>::RemoveListener(UnityEngine.Events.UnityAction`1<T0>)
inline void UnityEvent_1_RemoveListener_m24E95CAC4E4F02CF9CB50F3BAC259486D572D04D (UnityEvent_1_t2AED438DE5FAF741875343B8663599EC1EC222E2* __this, UnityAction_1_t47424DEBAD5E8E58E4A0DD7FD64A5834C41F7896* ___call0, const RuntimeMethod* method)
{
	((  void (*) (UnityEvent_1_t2AED438DE5FAF741875343B8663599EC1EC222E2*, UnityAction_1_t47424DEBAD5E8E58E4A0DD7FD64A5834C41F7896*, const RuntimeMethod*))UnityEvent_1_RemoveListener_m904FA6BDD0D33FDF8650EF816FF5C131867E693E_gshared)(__this, ___call0, method);
}
// System.Void UnityEngine.Events.UnityEvent`1<Meta.WitAi.Data.VoiceSession>::RemoveListener(UnityEngine.Events.UnityAction`1<T0>)
inline void UnityEvent_1_RemoveListener_m3B91983165CA1EF3E27EB37077C0476839079395 (UnityEvent_1_t7ED997BF6FDFAAFDDB2D9E2EDE55BE3DF55284AA* __this, UnityAction_1_tF266B43F3B48247A8143BA850AC13FFC634512E9* ___call0, const RuntimeMethod* method)
{
	((  void (*) (UnityEvent_1_t7ED997BF6FDFAAFDDB2D9E2EDE55BE3DF55284AA*, UnityAction_1_tF266B43F3B48247A8143BA850AC13FFC634512E9*, const RuntimeMethod*))UnityEvent_1_RemoveListener_m904FA6BDD0D33FDF8650EF816FF5C131867E693E_gshared)(__this, ___call0, method);
}
// System.Void UnityEngine.Events.UnityEvent`1<Meta.WitAi.Json.WitResponseNode>::RemoveListener(UnityEngine.Events.UnityAction`1<T0>)
inline void UnityEvent_1_RemoveListener_m84C07A346FB285EE2C1488B1F0D69BC6557E8D54 (UnityEvent_1_t3DC4F1FBCED8AF76C18EC16A2B55C43FBAE5E62D* __this, UnityAction_1_t7814257576DA9D92A82FF91BA3EE537553AC1BC8* ___call0, const RuntimeMethod* method)
{
	((  void (*) (UnityEvent_1_t3DC4F1FBCED8AF76C18EC16A2B55C43FBAE5E62D*, UnityAction_1_t7814257576DA9D92A82FF91BA3EE537553AC1BC8*, const RuntimeMethod*))UnityEvent_1_RemoveListener_m904FA6BDD0D33FDF8650EF816FF5C131867E693E_gshared)(__this, ___call0, method);
}
// System.Boolean Meta.WitAi.CallbackHandlers.WitResponseMatcher::ValueMatches(Meta.WitAi.Json.WitResponseNode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WitResponseMatcher_ValueMatches_mC0BCB87B0C3758708495D1BA1F3C39DD888FCFDA (WitResponseMatcher_t6B41EE08DD1CEB6E51894DCB19B4BFE874BA22D8* __this, WitResponseNode_t1BFF810F15B21416F5F6D0A1CAAF03CEF942038C* ___response0, const RuntimeMethod* method) ;
// System.Int32 Meta.WitAi.WitResultUtilities::EntityCount(Meta.WitAi.Json.WitResponseNode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t WitResultUtilities_EntityCount_mEECB7771340132F814293C379CF8CCDC15D782E9 (WitResponseNode_t1BFF810F15B21416F5F6D0A1CAAF03CEF942038C* ___response0, const RuntimeMethod* method) ;
// Meta.WitAi.WitResponseReference Meta.WitAi.CallbackHandlers.ValuePathMatcher::get_Reference()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR WitResponseReference_t7B74D84BF98481046E19F0CE0EB5A3F4203D2581* ValuePathMatcher_get_Reference_m6808DF8159190FC28164BFC885B56EBCEF4B0F97 (ValuePathMatcher_t2058BD1F2F9C5A162DFBD3FE61BD97F2D840E35E* __this, const RuntimeMethod* method) ;
// System.String System.Text.RegularExpressions.Regex::Replace(System.String,System.String,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Regex_Replace_m7CFA4979545DFCE842FC4DEFBAFD25F505559492 (Regex_tE773142C2BE45C5D362B0F815AFF831707A51772* __this, String_t* ___input0, String_t* ___replacement1, int32_t ___count2, const RuntimeMethod* method) ;
// System.Boolean System.String::Contains(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_Contains_m6D77B121FADA7CA5F397C0FABB65DA62DF03B6C3 (String_t* __this, String_t* ___value0, const RuntimeMethod* method) ;
// Meta.WitAi.WitResponseReference Meta.WitAi.CallbackHandlers.ValuePathMatcher::get_ConfidenceReference()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR WitResponseReference_t7B74D84BF98481046E19F0CE0EB5A3F4203D2581* ValuePathMatcher_get_ConfidenceReference_m2D4B1E2F00437CEC9E4E3ECCCEB19058DDE9B382 (ValuePathMatcher_t2058BD1F2F9C5A162DFBD3FE61BD97F2D840E35E* __this, const RuntimeMethod* method) ;
// System.Boolean Meta.WitAi.CallbackHandlers.WitResponseMatcher::ValueMatches(Meta.WitAi.Json.WitResponseNode,Meta.WitAi.CallbackHandlers.ValuePathMatcher)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WitResponseMatcher_ValueMatches_m75D0D3E582C499BA6D4B9CA1D170697ECF4EEEE2 (WitResponseMatcher_t6B41EE08DD1CEB6E51894DCB19B4BFE874BA22D8* __this, WitResponseNode_t1BFF810F15B21416F5F6D0A1CAAF03CEF942038C* ___response0, ValuePathMatcher_t2058BD1F2F9C5A162DFBD3FE61BD97F2D840E35E* ___matcher1, const RuntimeMethod* method) ;
// T[] System.Collections.Generic.List`1<System.String>::ToArray()
inline StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* List_1_ToArray_m2C402D882AA60FC1D5C7C09A129BE7779F833B4A (List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* __this, const RuntimeMethod* method)
{
	return ((  StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* (*) (List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD*, const RuntimeMethod*))List_1_ToArray_mD7E4F8E7C11C3C67CB5739FCC0A6E86106A6291F_gshared)(__this, method);
}
// System.Void UnityEngine.Events.UnityEvent`1<System.String[]>::Invoke(T0)
inline void UnityEvent_1_Invoke_mDABA5BBDA189937099CB491730CD6AC57D7A5F94 (UnityEvent_1_t477222AA4CE1BE0F15900D352218F0A842BF5EFD* __this, StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___arg00, const RuntimeMethod* method)
{
	((  void (*) (UnityEvent_1_t477222AA4CE1BE0F15900D352218F0A842BF5EFD*, StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*, const RuntimeMethod*))UnityEvent_1_Invoke_m6CDC8B0639CE8935E2E13D10B2C8E500968130B6_gshared)(__this, ___arg00, method);
}
// System.Text.RegularExpressions.Match System.Text.RegularExpressions.Regex::Match(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Match_tFBEBCF225BD8EA17BCE6CE3FE5C1BD8E3074105F* Regex_Match_mE3EC82B72BF82AA4B8749251C12C383047531972 (String_t* ___input0, String_t* ___pattern1, const RuntimeMethod* method) ;
// System.Boolean System.Text.RegularExpressions.Group::get_Success()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Group_get_Success_m4E0238EE4B1E7F927E2AF13E2E5901BCA92BE62F (Group_t26371E9136D6F43782C487B63C67C5FC4F472881* __this, const RuntimeMethod* method) ;
// System.Boolean Meta.WitAi.CallbackHandlers.WitResponseMatcher::CompareInt(System.String,Meta.WitAi.CallbackHandlers.ValuePathMatcher)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WitResponseMatcher_CompareInt_mF7A9B8987A576CA840CED46B06EF5E3D4748EAAC (WitResponseMatcher_t6B41EE08DD1CEB6E51894DCB19B4BFE874BA22D8* __this, String_t* ___value0, ValuePathMatcher_t2058BD1F2F9C5A162DFBD3FE61BD97F2D840E35E* ___matcher1, const RuntimeMethod* method) ;
// System.Boolean Meta.WitAi.CallbackHandlers.WitResponseMatcher::CompareFloat(System.String,Meta.WitAi.CallbackHandlers.ValuePathMatcher)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WitResponseMatcher_CompareFloat_m6CF5105F3ADDAAFF79DD0EEF3ECBC9036AA7FBD4 (WitResponseMatcher_t6B41EE08DD1CEB6E51894DCB19B4BFE874BA22D8* __this, String_t* ___value0, ValuePathMatcher_t2058BD1F2F9C5A162DFBD3FE61BD97F2D840E35E* ___matcher1, const RuntimeMethod* method) ;
// System.Boolean Meta.WitAi.CallbackHandlers.WitResponseMatcher::CompareDouble(System.String,Meta.WitAi.CallbackHandlers.ValuePathMatcher)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WitResponseMatcher_CompareDouble_m00B144D8B150C07F1B175FC77F0517FD8DD446B7 (WitResponseMatcher_t6B41EE08DD1CEB6E51894DCB19B4BFE874BA22D8* __this, String_t* ___value0, ValuePathMatcher_t2058BD1F2F9C5A162DFBD3FE61BD97F2D840E35E* ___matcher1, const RuntimeMethod* method) ;
// System.Boolean System.Double::TryParse(System.String,System.Double&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Double_TryParse_m60AD55BC181D70F661BC2A2294E66B5466C3C018 (String_t* ___s0, double* ___result1, const RuntimeMethod* method) ;
// System.Double System.Double::Parse(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR double Double_Parse_mEBC644CE0C86A405283EC4839F872EF9E556670A (String_t* ___s0, const RuntimeMethod* method) ;
// System.Single System.Single::Parse(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Single_Parse_m621F610BB84997A2E3C4686913F482316CD3E6B8 (String_t* ___s0, const RuntimeMethod* method) ;
// System.Int32 System.Int32::Parse(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Int32_Parse_m273CA1A9C7717C99641291A95C543711C0202AF0 (String_t* ___s0, const RuntimeMethod* method) ;
// System.Void Meta.WitAi.CallbackHandlers.MultiValueEvent::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MultiValueEvent__ctor_m8B3EB1BCB05AC78C773AD743D9D1BAE3F11595F6 (MultiValueEvent_t00CB59BD55FD6C3F27DABCC7A9A5A3394E717C06* __this, const RuntimeMethod* method) ;
// System.String System.Text.RegularExpressions.Regex::Escape(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Regex_Escape_mCBB92EEA6FB5B703811AF678FD53918F6A364227 (String_t* ___str0, const RuntimeMethod* method) ;
// System.Void System.Text.RegularExpressions.Regex::.ctor(System.String,System.Text.RegularExpressions.RegexOptions)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Regex__ctor_mE3996C71B04A4A6845745D01C93B1D27423D0621 (Regex_tE773142C2BE45C5D362B0F815AFF831707A51772* __this, String_t* ___pattern0, int32_t ___options1, const RuntimeMethod* method) ;
// System.Void UnityEngine.Events.UnityEvent`1<System.String[]>::.ctor()
inline void UnityEvent_1__ctor_mA1CAC73F82FF0E8BC4870AEBF137B7F72614957D (UnityEvent_1_t477222AA4CE1BE0F15900D352218F0A842BF5EFD* __this, const RuntimeMethod* method)
{
	((  void (*) (UnityEvent_1_t477222AA4CE1BE0F15900D352218F0A842BF5EFD*, const RuntimeMethod*))UnityEvent_1__ctor_m8D77F4F05F69D0E52E8A445322811EEC25987525_gshared)(__this, method);
}
// System.Void Meta.WitAi.CallbackHandlers.ValueEvent::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ValueEvent__ctor_m870BC4590DAF54F220D66CAFCC1B1F7A8D692BC7 (ValueEvent_t7E99BC212C04EA8B32FFF6900F7AEC1C55A2AC32* __this, const RuntimeMethod* method) ;
// System.Int32 System.String::LastIndexOf(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t String_LastIndexOf_m8923DBD89F2B3E5A34190B038B48F402E0C17E40 (String_t* __this, String_t* ___value0, const RuntimeMethod* method) ;
// System.String System.String::Substring(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Substring_mB1D94F47935D22E130FF2C01DBB6A4135FBB76CE (String_t* __this, int32_t ___startIndex0, int32_t ___length1, const RuntimeMethod* method) ;
// System.Boolean System.String::op_Inequality(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_op_Inequality_m8C940F3CFC42866709D7CA931B3D77B4BE94BCB6 (String_t* ___a0, String_t* ___b1, const RuntimeMethod* method) ;
// System.Boolean Meta.WitAi.CallbackHandlers.WitUtteranceMatcher::IsMatch(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WitUtteranceMatcher_IsMatch_mB8EE7E23D6CD96D97E11182F23A97E5484143817 (WitUtteranceMatcher_t61084ECD5166E15FF9C36660DCD7A42241EAB098* __this, String_t* ___text0, const RuntimeMethod* method) ;
// System.Text.RegularExpressions.Match System.Text.RegularExpressions.Regex::Match(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Match_tFBEBCF225BD8EA17BCE6CE3FE5C1BD8E3074105F* Regex_Match_m58565ECF23ACCD2CA77D6F10A6A182B03CF0FF84 (Regex_tE773142C2BE45C5D362B0F815AFF831707A51772* __this, String_t* ___input0, const RuntimeMethod* method) ;
// System.String System.Text.RegularExpressions.Capture::get_Value()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Capture_get_Value_m1AB4193C2FC4B0D08AA34FECF10D03876D848BDC (Capture_tE11B735186DAFEE5F7A3BF5A739E9CCCE99DC24A* __this, const RuntimeMethod* method) ;
// System.String System.String::ToLower()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_ToLower_m6191ABA3DC514ED47C10BDA23FD0DDCEAE7ACFBD (String_t* __this, const RuntimeMethod* method) ;
// System.Void Meta.WitAi.Attributes.TooltipBoxAttribute::set_Text(System.String)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void TooltipBoxAttribute_set_Text_mC7790F03154E767CA88A9CDCFEF87516B846BBD5_inline (TooltipBoxAttribute_t6E9488D357587D404789CE0549F8C32A110A8779* __this, String_t* ___value0, const RuntimeMethod* method) ;
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Meta.WitAi.Data.Configuration.WitConfiguration Meta.WitAi.Requests.WitUnityRequest::get_Configuration()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR WitConfiguration_t85BCD6C826D35078E90334092184A53D1B69C72E* WitUnityRequest_get_Configuration_m918FD8ACDB178E13C2E9B871978254E6761EE896 (WitUnityRequest_t8F143C19E420F145BAF16B53988A2AF5B37CB202* __this, const RuntimeMethod* method) 
{
	{
		// public WitConfiguration Configuration { get; private set; }
		WitConfiguration_t85BCD6C826D35078E90334092184A53D1B69C72E* L_0 = __this->___U3CConfigurationU3Ek__BackingField_13;
		return L_0;
	}
}
// System.Void Meta.WitAi.Requests.WitUnityRequest::set_Configuration(Meta.WitAi.Data.Configuration.WitConfiguration)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WitUnityRequest_set_Configuration_mE080793F4FCBDCF7EDE3C186D9E8D13558227E16 (WitUnityRequest_t8F143C19E420F145BAF16B53988A2AF5B37CB202* __this, WitConfiguration_t85BCD6C826D35078E90334092184A53D1B69C72E* ___value0, const RuntimeMethod* method) 
{
	{
		// public WitConfiguration Configuration { get; private set; }
		WitConfiguration_t85BCD6C826D35078E90334092184A53D1B69C72E* L_0 = ___value0;
		__this->___U3CConfigurationU3Ek__BackingField_13 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CConfigurationU3Ek__BackingField_13), (void*)L_0);
		return;
	}
}
// System.String Meta.WitAi.Requests.WitUnityRequest::get_Endpoint()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* WitUnityRequest_get_Endpoint_m28357885FB9A1AA8959288E442B8F40F9D8B645F (WitUnityRequest_t8F143C19E420F145BAF16B53988A2AF5B37CB202* __this, const RuntimeMethod* method) 
{
	{
		// public string Endpoint { get; set; }
		String_t* L_0 = __this->___U3CEndpointU3Ek__BackingField_15;
		return L_0;
	}
}
// System.Void Meta.WitAi.Requests.WitUnityRequest::set_Endpoint(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WitUnityRequest_set_Endpoint_m30D4CF525E3F22D6A3A5D83C9A14DCC4ED1853C7 (WitUnityRequest_t8F143C19E420F145BAF16B53988A2AF5B37CB202* __this, String_t* ___value0, const RuntimeMethod* method) 
{
	{
		// public string Endpoint { get; set; }
		String_t* L_0 = ___value0;
		__this->___U3CEndpointU3Ek__BackingField_15 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CEndpointU3Ek__BackingField_15), (void*)L_0);
		return;
	}
}
// System.Boolean Meta.WitAi.Requests.WitUnityRequest::get_ShouldPost()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WitUnityRequest_get_ShouldPost_m3BECCE1A3CC848CC2CFE93B97E1EE2197AC1F206 (WitUnityRequest_t8F143C19E420F145BAF16B53988A2AF5B37CB202* __this, const RuntimeMethod* method) 
{
	{
		// public bool ShouldPost { get; set; }
		bool L_0 = __this->___U3CShouldPostU3Ek__BackingField_16;
		return L_0;
	}
}
// System.Void Meta.WitAi.Requests.WitUnityRequest::set_ShouldPost(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WitUnityRequest_set_ShouldPost_m99AF92DC351CA890996AEE8DEC8C226BEC51E241 (WitUnityRequest_t8F143C19E420F145BAF16B53988A2AF5B37CB202* __this, bool ___value0, const RuntimeMethod* method) 
{
	{
		// public bool ShouldPost { get; set; }
		bool L_0 = ___value0;
		__this->___U3CShouldPostU3Ek__BackingField_16 = L_0;
		return;
	}
}
// System.Void Meta.WitAi.Requests.WitUnityRequest::.ctor(Meta.WitAi.Data.Configuration.WitConfiguration,Meta.Voice.NLPRequestInputType,Meta.WitAi.Configuration.WitRequestOptions,Meta.WitAi.Requests.VoiceServiceRequestEvents)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WitUnityRequest__ctor_mEB9F45DC27275D7F327D4CFDE3471B6778363970 (WitUnityRequest_t8F143C19E420F145BAF16B53988A2AF5B37CB202* __this, WitConfiguration_t85BCD6C826D35078E90334092184A53D1B69C72E* ___newConfiguration0, int32_t ___newDataType1, WitRequestOptions_tB2E8B103538F7E42F0568C6F62F2158FA45EF483* ___newOptions2, VoiceServiceRequestEvents_t4270DDE59A84A1A65EBF9331C446BBBC7BDE0838* ___newEvents3, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IWitRequestEndpointInfo_t836AC4A0D91400BEBDE46EAFC27047094F6DADAE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NLPRequest_4_get_InputType_mD2BFDFAC4CA6C3D22BFDB2B9ABD808E4C887238B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RequestProgressDelegate_tCEE5B616F4FDCD488E4914A7F554F2F57B7D03A4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&VoiceRequest_4_SetDownloadProgress_m5BF0DE47751BBACA14FAF00305C1B3098C340B5B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WitMessageVRequest_t1F545F95445B1FD0EE5DF7580C2EB69EB0520137_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	{
		// private bool _initialized = false;
		__this->____initialized_17 = (bool)0;
		// public WitUnityRequest(WitConfiguration newConfiguration, NLPRequestInputType newDataType, WitRequestOptions newOptions, VoiceServiceRequestEvents newEvents) : base(newDataType, newOptions, newEvents)
		int32_t L_0 = ___newDataType1;
		WitRequestOptions_tB2E8B103538F7E42F0568C6F62F2158FA45EF483* L_1 = ___newOptions2;
		VoiceServiceRequestEvents_t4270DDE59A84A1A65EBF9331C446BBBC7BDE0838* L_2 = ___newEvents3;
		VoiceServiceRequest__ctor_m082596AC2C0139EA1BF90D3AE4848CF86082C2FD(__this, L_0, L_1, L_2, NULL);
		// Configuration = newConfiguration;
		WitConfiguration_t85BCD6C826D35078E90334092184A53D1B69C72E* L_3 = ___newConfiguration0;
		WitUnityRequest_set_Configuration_mE080793F4FCBDCF7EDE3C186D9E8D13558227E16_inline(__this, L_3, NULL);
		// if (InputType == NLPRequestInputType.Text)
		int32_t L_4;
		L_4 = NLPRequest_4_get_InputType_mD2BFDFAC4CA6C3D22BFDB2B9ABD808E4C887238B_inline(__this, NLPRequest_4_get_InputType_mD2BFDFAC4CA6C3D22BFDB2B9ABD808E4C887238B_RuntimeMethod_var);
		V_0 = (bool)((((int32_t)L_4) == ((int32_t)0))? 1 : 0);
		bool L_5 = V_0;
		if (!L_5)
		{
			goto IL_0092;
		}
	}
	{
		// _request = new WitMessageVRequest(Configuration, newOptions.RequestId, SetDownloadProgress);
		WitConfiguration_t85BCD6C826D35078E90334092184A53D1B69C72E* L_6;
		L_6 = WitUnityRequest_get_Configuration_m918FD8ACDB178E13C2E9B871978254E6761EE896_inline(__this, NULL);
		WitRequestOptions_tB2E8B103538F7E42F0568C6F62F2158FA45EF483* L_7 = ___newOptions2;
		NullCheck(L_7);
		String_t* L_8;
		L_8 = VoiceServiceRequestOptions_get_RequestId_mC465590B47E4B5F542BD3E9BED1074D032C1446F_inline(L_7, NULL);
		RequestProgressDelegate_tCEE5B616F4FDCD488E4914A7F554F2F57B7D03A4* L_9 = (RequestProgressDelegate_tCEE5B616F4FDCD488E4914A7F554F2F57B7D03A4*)il2cpp_codegen_object_new(RequestProgressDelegate_tCEE5B616F4FDCD488E4914A7F554F2F57B7D03A4_il2cpp_TypeInfo_var);
		NullCheck(L_9);
		RequestProgressDelegate__ctor_m3E241D94035D7034B4DEF78A048A4B909EEEC20F(L_9, __this, (intptr_t)((void*)VoiceRequest_4_SetDownloadProgress_m5BF0DE47751BBACA14FAF00305C1B3098C340B5B_RuntimeMethod_var), NULL);
		WitMessageVRequest_t1F545F95445B1FD0EE5DF7580C2EB69EB0520137* L_10 = (WitMessageVRequest_t1F545F95445B1FD0EE5DF7580C2EB69EB0520137*)il2cpp_codegen_object_new(WitMessageVRequest_t1F545F95445B1FD0EE5DF7580C2EB69EB0520137_il2cpp_TypeInfo_var);
		NullCheck(L_10);
		WitMessageVRequest__ctor_m5E94E413CE0B9A512F3B3974771C8977E1E26A40(L_10, L_6, L_8, L_9, (RequestFirstResponseDelegate_tB02AF851E14447743278D4F5E31A6B7E0203E89A*)NULL, NULL);
		__this->____request_14 = L_10;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____request_14), (void*)L_10);
		// Endpoint = Configuration.GetEndpointInfo().Message;
		WitConfiguration_t85BCD6C826D35078E90334092184A53D1B69C72E* L_11;
		L_11 = WitUnityRequest_get_Configuration_m918FD8ACDB178E13C2E9B871978254E6761EE896_inline(__this, NULL);
		NullCheck(L_11);
		RuntimeObject* L_12;
		L_12 = WitConfiguration_GetEndpointInfo_mF60F512344B2E6E9C4F952AC961A5CBCC4156213_inline(L_11, NULL);
		NullCheck(L_12);
		String_t* L_13;
		L_13 = InterfaceFuncInvoker0< String_t* >::Invoke(4 /* System.String Meta.WitAi.IWitRequestEndpointInfo::get_Message() */, IWitRequestEndpointInfo_t836AC4A0D91400BEBDE46EAFC27047094F6DADAE_il2cpp_TypeInfo_var, L_12);
		WitUnityRequest_set_Endpoint_m30D4CF525E3F22D6A3A5D83C9A14DCC4ED1853C7_inline(__this, L_13, NULL);
		// _request.Timeout = Mathf.RoundToInt(Configuration.timeoutMS / 1000f);
		WitVRequest_t8604AB4F31C0E6BB2572F16A2C0992E09DEA1534* L_14 = __this->____request_14;
		WitConfiguration_t85BCD6C826D35078E90334092184A53D1B69C72E* L_15;
		L_15 = WitUnityRequest_get_Configuration_m918FD8ACDB178E13C2E9B871978254E6761EE896_inline(__this, NULL);
		NullCheck(L_15);
		int32_t L_16 = L_15->___timeoutMS_8;
		int32_t L_17;
		L_17 = Mathf_RoundToInt_m60F8B66CF27F1FA75AA219342BD184B75771EB4B_inline(((float)(((float)L_16)/(1000.0f))), NULL);
		NullCheck(L_14);
		VRequest_set_Timeout_mB1621F4CBAEBF2E3F8FE30866911BE2915A2E87B_inline(L_14, L_17, NULL);
		// ShouldPost = false;
		WitUnityRequest_set_ShouldPost_m99AF92DC351CA890996AEE8DEC8C226BEC51E241_inline(__this, (bool)0, NULL);
		goto IL_00c0;
	}

IL_0092:
	{
		// else if (InputType == NLPRequestInputType.Audio)
		int32_t L_18;
		L_18 = NLPRequest_4_get_InputType_mD2BFDFAC4CA6C3D22BFDB2B9ABD808E4C887238B_inline(__this, NLPRequest_4_get_InputType_mD2BFDFAC4CA6C3D22BFDB2B9ABD808E4C887238B_RuntimeMethod_var);
		V_1 = (bool)((((int32_t)L_18) == ((int32_t)1))? 1 : 0);
		bool L_19 = V_1;
		if (!L_19)
		{
			goto IL_00c0;
		}
	}
	{
		// Endpoint = Configuration.GetEndpointInfo().Speech;
		WitConfiguration_t85BCD6C826D35078E90334092184A53D1B69C72E* L_20;
		L_20 = WitUnityRequest_get_Configuration_m918FD8ACDB178E13C2E9B871978254E6761EE896_inline(__this, NULL);
		NullCheck(L_20);
		RuntimeObject* L_21;
		L_21 = WitConfiguration_GetEndpointInfo_mF60F512344B2E6E9C4F952AC961A5CBCC4156213_inline(L_20, NULL);
		NullCheck(L_21);
		String_t* L_22;
		L_22 = InterfaceFuncInvoker0< String_t* >::Invoke(5 /* System.String Meta.WitAi.IWitRequestEndpointInfo::get_Speech() */, IWitRequestEndpointInfo_t836AC4A0D91400BEBDE46EAFC27047094F6DADAE_il2cpp_TypeInfo_var, L_21);
		WitUnityRequest_set_Endpoint_m30D4CF525E3F22D6A3A5D83C9A14DCC4ED1853C7_inline(__this, L_22, NULL);
		// ShouldPost = true;
		WitUnityRequest_set_ShouldPost_m99AF92DC351CA890996AEE8DEC8C226BEC51E241_inline(__this, (bool)1, NULL);
	}

IL_00c0:
	{
		// _initialized = true;
		__this->____initialized_17 = (bool)1;
		// SetState(VoiceRequestState.Initialized);
		VirtualActionInvoker1< int32_t >::Invoke(14 /* System.Void Meta.Voice.VoiceRequest`4<Meta.WitAi.Requests.VoiceServiceRequestEvent,Meta.WitAi.Configuration.WitRequestOptions,Meta.WitAi.Requests.VoiceServiceRequestEvents,Meta.WitAi.Requests.VoiceServiceRequestResults>::SetState(Meta.Voice.VoiceRequestState) */, __this, 0);
		// }
		return;
	}
}
// System.Void Meta.WitAi.Requests.WitUnityRequest::SetState(Meta.Voice.VoiceRequestState)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WitUnityRequest_SetState_m815F34A6EA24AAB5234B06D097992BC791F488A0 (WitUnityRequest_t8F143C19E420F145BAF16B53988A2AF5B37CB202* __this, int32_t ___newState0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NLPRequest_4_SetState_m193FF3D641DAFA62E4D26F6AAEF02FC77C13F8D5_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		// if (_initialized)
		bool L_0 = __this->____initialized_17;
		V_0 = L_0;
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0015;
		}
	}
	{
		// base.SetState(newState);
		int32_t L_2 = ___newState0;
		NLPRequest_4_SetState_m193FF3D641DAFA62E4D26F6AAEF02FC77C13F8D5(__this, L_2, NLPRequest_4_SetState_m193FF3D641DAFA62E4D26F6AAEF02FC77C13F8D5_RuntimeMethod_var);
	}

IL_0015:
	{
		// }
		return;
	}
}
// System.String Meta.WitAi.Requests.WitUnityRequest::GetSendError()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* WitUnityRequest_GetSendError_mA151AF3F8B3EC6CD20AF6BAF4501E4BEA3B2D8D0 (WitUnityRequest_t8F143C19E420F145BAF16B53988A2AF5B37CB202* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NLPRequest_4_GetSendError_m7DC71AA1C11357E41E9BAFD7C84A86EC1220BC14_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral402F7311BABF77D31EFBF5956A0D15E0A40E52C4);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral70BBAB30B6900EC0E29CCD027B482CF80BD58908);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	String_t* V_1 = NULL;
	bool V_2 = false;
	{
		// if (Configuration == null)
		WitConfiguration_t85BCD6C826D35078E90334092184A53D1B69C72E* L_0;
		L_0 = WitUnityRequest_get_Configuration_m918FD8ACDB178E13C2E9B871978254E6761EE896_inline(__this, NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_0, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		V_0 = L_1;
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_001a;
		}
	}
	{
		// return "Cannot send request without a valid configuration.";
		V_1 = _stringLiteral70BBAB30B6900EC0E29CCD027B482CF80BD58908;
		goto IL_0039;
	}

IL_001a:
	{
		// if (_request == null)
		WitVRequest_t8604AB4F31C0E6BB2572F16A2C0992E09DEA1534* L_3 = __this->____request_14;
		V_2 = (bool)((((RuntimeObject*)(WitVRequest_t8604AB4F31C0E6BB2572F16A2C0992E09DEA1534*)L_3) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0);
		bool L_4 = V_2;
		if (!L_4)
		{
			goto IL_0030;
		}
	}
	{
		// return "Request creation failed.";
		V_1 = _stringLiteral402F7311BABF77D31EFBF5956A0D15E0A40E52C4;
		goto IL_0039;
	}

IL_0030:
	{
		// return base.GetSendError();
		String_t* L_5;
		L_5 = NLPRequest_4_GetSendError_m7DC71AA1C11357E41E9BAFD7C84A86EC1220BC14(__this, NLPRequest_4_GetSendError_m7DC71AA1C11357E41E9BAFD7C84A86EC1220BC14_RuntimeMethod_var);
		V_1 = L_5;
		goto IL_0039;
	}

IL_0039:
	{
		// }
		String_t* L_6 = V_1;
		return L_6;
	}
}
// System.Void Meta.WitAi.Requests.WitUnityRequest::HandleSend()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WitUnityRequest_HandleSend_m62B5211533A6FA646D2D4CA1FBED239D7BF3CDFB (WitUnityRequest_t8F143C19E420F145BAF16B53988A2AF5B37CB202* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RequestCompleteDelegate_1_tDB32EFF5395222142E2DE478401516FF7916E807_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&VoiceRequest_4_get_Options_mA96A6587CD74071815DC0110EFCB7B87B7A14774_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WitMessageVRequest_t1F545F95445B1FD0EE5DF7580C2EB69EB0520137_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	WitMessageVRequest_t1F545F95445B1FD0EE5DF7580C2EB69EB0520137* V_0 = NULL;
	bool V_1 = false;
	{
		// if (_request is WitMessageVRequest messageRequest)
		WitVRequest_t8604AB4F31C0E6BB2572F16A2C0992E09DEA1534* L_0 = __this->____request_14;
		V_0 = ((WitMessageVRequest_t1F545F95445B1FD0EE5DF7580C2EB69EB0520137*)IsInstClass((RuntimeObject*)L_0, WitMessageVRequest_t1F545F95445B1FD0EE5DF7580C2EB69EB0520137_il2cpp_TypeInfo_var));
		WitMessageVRequest_t1F545F95445B1FD0EE5DF7580C2EB69EB0520137* L_1 = V_0;
		V_1 = (bool)((!(((RuntimeObject*)(WitMessageVRequest_t1F545F95445B1FD0EE5DF7580C2EB69EB0520137*)L_1) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		bool L_2 = V_1;
		if (!L_2)
		{
			goto IL_004d;
		}
	}
	{
		// messageRequest.MessageRequest(Endpoint, ShouldPost,
		//     Options.Text, Options.QueryParams,
		//     HandleFinalNlpResponse);
		WitMessageVRequest_t1F545F95445B1FD0EE5DF7580C2EB69EB0520137* L_3 = V_0;
		String_t* L_4;
		L_4 = WitUnityRequest_get_Endpoint_m28357885FB9A1AA8959288E442B8F40F9D8B645F_inline(__this, NULL);
		bool L_5;
		L_5 = WitUnityRequest_get_ShouldPost_m3BECCE1A3CC848CC2CFE93B97E1EE2197AC1F206_inline(__this, NULL);
		WitRequestOptions_tB2E8B103538F7E42F0568C6F62F2158FA45EF483* L_6;
		L_6 = VoiceRequest_4_get_Options_mA96A6587CD74071815DC0110EFCB7B87B7A14774_inline(__this, VoiceRequest_4_get_Options_mA96A6587CD74071815DC0110EFCB7B87B7A14774_RuntimeMethod_var);
		NullCheck(L_6);
		String_t* L_7;
		L_7 = VoiceServiceRequestOptions_get_Text_m78FC14117147FF7042E92666EBC0633FA4BD8AD0_inline(L_6, NULL);
		WitRequestOptions_tB2E8B103538F7E42F0568C6F62F2158FA45EF483* L_8;
		L_8 = VoiceRequest_4_get_Options_mA96A6587CD74071815DC0110EFCB7B87B7A14774_inline(__this, VoiceRequest_4_get_Options_mA96A6587CD74071815DC0110EFCB7B87B7A14774_RuntimeMethod_var);
		NullCheck(L_8);
		Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* L_9;
		L_9 = VoiceServiceRequestOptions_get_QueryParams_mF622577A065A19AA734F436AB99F4C7149DE8FAD_inline(L_8, NULL);
		RequestCompleteDelegate_1_tDB32EFF5395222142E2DE478401516FF7916E807* L_10 = (RequestCompleteDelegate_1_tDB32EFF5395222142E2DE478401516FF7916E807*)il2cpp_codegen_object_new(RequestCompleteDelegate_1_tDB32EFF5395222142E2DE478401516FF7916E807_il2cpp_TypeInfo_var);
		NullCheck(L_10);
		RequestCompleteDelegate_1__ctor_m342ABC4A0E40175C65979727AE0D2DC5087791D3(L_10, __this, (intptr_t)((void*)GetVirtualMethodInfo(__this, 54)), NULL);
		NullCheck(L_3);
		bool L_11;
		L_11 = WitMessageVRequest_MessageRequest_m7C6ECF4242EF48C9F51455028BD9C62F41DBCAC5(L_3, L_4, L_5, L_7, L_9, L_10, NULL);
	}

IL_004d:
	{
		// }
		return;
	}
}
// System.Void Meta.WitAi.Requests.WitUnityRequest::HandleFinalNlpResponse(Meta.WitAi.Json.WitResponseNode,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WitUnityRequest_HandleFinalNlpResponse_mCBF8A4492258C0A38963BBDBF53485113F8801F5 (WitUnityRequest_t8F143C19E420F145BAF16B53988A2AF5B37CB202* __this, WitResponseNode_t1BFF810F15B21416F5F6D0A1CAAF03CEF942038C* ___responseData0, String_t* ___error1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NLPAudioRequest_4_HandleFinalNlpResponse_m17F22EB9ACE85E0FD16C9AEDF1243198724E5904_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// StatusCode = _request.ResponseCode;
		WitVRequest_t8604AB4F31C0E6BB2572F16A2C0992E09DEA1534* L_0 = __this->____request_14;
		NullCheck(L_0);
		int32_t L_1;
		L_1 = VRequest_get_ResponseCode_mD26D66C2F4A4998F1A95B078EE48A9709FDD8CA2_inline(L_0, NULL);
		VoiceServiceRequest_set_StatusCode_m6E3DA7B3081670C27A6F241EA1A8E79DC7D42765(__this, L_1, NULL);
		// base.HandleFinalNlpResponse(responseData, error);
		WitResponseNode_t1BFF810F15B21416F5F6D0A1CAAF03CEF942038C* L_2 = ___responseData0;
		String_t* L_3 = ___error1;
		NLPAudioRequest_4_HandleFinalNlpResponse_m17F22EB9ACE85E0FD16C9AEDF1243198724E5904(__this, L_2, L_3, NLPAudioRequest_4_HandleFinalNlpResponse_m17F22EB9ACE85E0FD16C9AEDF1243198724E5904_RuntimeMethod_var);
		// }
		return;
	}
}
// System.Void Meta.WitAi.Requests.WitUnityRequest::HandleCancel()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WitUnityRequest_HandleCancel_m2D9C2A9A0E87F7F280234F009757FFE76B5C2441 (WitUnityRequest_t8F143C19E420F145BAF16B53988A2AF5B37CB202* __this, const RuntimeMethod* method) 
{
	bool V_0 = false;
	{
		// if (_request != null)
		WitVRequest_t8604AB4F31C0E6BB2572F16A2C0992E09DEA1534* L_0 = __this->____request_14;
		V_0 = (bool)((!(((RuntimeObject*)(WitVRequest_t8604AB4F31C0E6BB2572F16A2C0992E09DEA1534*)L_0) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_001c;
		}
	}
	{
		// _request.Cancel();
		WitVRequest_t8604AB4F31C0E6BB2572F16A2C0992E09DEA1534* L_2 = __this->____request_14;
		NullCheck(L_2);
		VirtualActionInvoker0::Invoke(11 /* System.Void Meta.WitAi.Requests.VRequest::Cancel() */, L_2);
	}

IL_001c:
	{
		// }
		return;
	}
}
// System.String Meta.WitAi.Requests.WitUnityRequest::GetActivateAudioError()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* WitUnityRequest_GetActivateAudioError_mE0C9B59E973CB70B9FC8268627E2CD78E7B97BE2 (WitUnityRequest_t8F143C19E420F145BAF16B53988A2AF5B37CB202* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral84027E56C00686BFC14F4A4673543F9850713BCF);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	{
		// return "Audio request not yet implemented";
		V_0 = _stringLiteral84027E56C00686BFC14F4A4673543F9850713BCF;
		goto IL_0009;
	}

IL_0009:
	{
		// }
		String_t* L_0 = V_0;
		return L_0;
	}
}
// System.Void Meta.WitAi.Requests.WitUnityRequest::HandleAudioActivation()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WitUnityRequest_HandleAudioActivation_mE9D31E0F399076FF6B50377C92E01D3C5AE491E7 (WitUnityRequest_t8F143C19E420F145BAF16B53988A2AF5B37CB202* __this, const RuntimeMethod* method) 
{
	{
		// SetAudioInputState(VoiceAudioInputState.On);
		VirtualActionInvoker1< int32_t >::Invoke(39 /* System.Void Meta.Voice.TranscriptionRequest`4<Meta.WitAi.Requests.VoiceServiceRequestEvent,Meta.WitAi.Configuration.WitRequestOptions,Meta.WitAi.Requests.VoiceServiceRequestEvents,Meta.WitAi.Requests.VoiceServiceRequestResults>::SetAudioInputState(Meta.Voice.VoiceAudioInputState) */, __this, 2);
		// }
		return;
	}
}
// System.Void Meta.WitAi.Requests.WitUnityRequest::HandleAudioDeactivation()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WitUnityRequest_HandleAudioDeactivation_mB936A003EBE1BF05F6D13D089527DB45239BDFE7 (WitUnityRequest_t8F143C19E420F145BAF16B53988A2AF5B37CB202* __this, const RuntimeMethod* method) 
{
	{
		// SetAudioInputState(VoiceAudioInputState.Off);
		VirtualActionInvoker1< int32_t >::Invoke(39 /* System.Void Meta.Voice.TranscriptionRequest`4<Meta.WitAi.Requests.VoiceServiceRequestEvent,Meta.WitAi.Configuration.WitRequestOptions,Meta.WitAi.Requests.VoiceServiceRequestEvents,Meta.WitAi.Requests.VoiceServiceRequestResults>::SetAudioInputState(Meta.Voice.VoiceAudioInputState) */, __this, 0);
		// }
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
// System.String Meta.WitAi.Interfaces.CustomTranscriptionProvider::get_LastTranscription()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* CustomTranscriptionProvider_get_LastTranscription_m3BB352A5BC9FD2228B8F5448E1DE0FEE7F7DFAD0 (CustomTranscriptionProvider_tC6EABF251A11EFEBE5A8AD8D77CEBF14FB1009C5* __this, const RuntimeMethod* method) 
{
	{
		// public string LastTranscription { get; }
		String_t* L_0 = __this->___U3CLastTranscriptionU3Ek__BackingField_10;
		return L_0;
	}
}
// Meta.WitAi.Events.WitTranscriptionEvent Meta.WitAi.Interfaces.CustomTranscriptionProvider::get_OnPartialTranscription()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR WitTranscriptionEvent_t51292FC7EB7BAF38C2EC6B57D87724C1BEB3C739* CustomTranscriptionProvider_get_OnPartialTranscription_m798235A84441A84861F4389A81456E739B33823C (CustomTranscriptionProvider_tC6EABF251A11EFEBE5A8AD8D77CEBF14FB1009C5* __this, const RuntimeMethod* method) 
{
	{
		// public WitTranscriptionEvent OnPartialTranscription => onPartialTranscription;
		WitTranscriptionEvent_t51292FC7EB7BAF38C2EC6B57D87724C1BEB3C739* L_0 = __this->___onPartialTranscription_5;
		return L_0;
	}
}
// Meta.WitAi.Events.WitTranscriptionEvent Meta.WitAi.Interfaces.CustomTranscriptionProvider::get_OnFullTranscription()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR WitTranscriptionEvent_t51292FC7EB7BAF38C2EC6B57D87724C1BEB3C739* CustomTranscriptionProvider_get_OnFullTranscription_mDEE7B8D6B01B6AC8A0AAAA082034BD4A57B892E0 (CustomTranscriptionProvider_tC6EABF251A11EFEBE5A8AD8D77CEBF14FB1009C5* __this, const RuntimeMethod* method) 
{
	{
		// public WitTranscriptionEvent OnFullTranscription => onFullTranscription;
		WitTranscriptionEvent_t51292FC7EB7BAF38C2EC6B57D87724C1BEB3C739* L_0 = __this->___onFullTranscription_6;
		return L_0;
	}
}
// UnityEngine.Events.UnityEvent Meta.WitAi.Interfaces.CustomTranscriptionProvider::get_OnStoppedListening()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* CustomTranscriptionProvider_get_OnStoppedListening_m93E1ED5D361FC929D8C7B7FBF9463CF9DBAA63DE (CustomTranscriptionProvider_tC6EABF251A11EFEBE5A8AD8D77CEBF14FB1009C5* __this, const RuntimeMethod* method) 
{
	{
		// public UnityEvent OnStoppedListening => onStoppedListening;
		UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* L_0 = __this->___onStoppedListening_7;
		return L_0;
	}
}
// UnityEngine.Events.UnityEvent Meta.WitAi.Interfaces.CustomTranscriptionProvider::get_OnStartListening()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* CustomTranscriptionProvider_get_OnStartListening_m2C0ED510CD93FB75E10C748225632054CCE0A6CE (CustomTranscriptionProvider_tC6EABF251A11EFEBE5A8AD8D77CEBF14FB1009C5* __this, const RuntimeMethod* method) 
{
	{
		// public UnityEvent OnStartListening => onStartListening;
		UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* L_0 = __this->___onStartListening_8;
		return L_0;
	}
}
// Meta.WitAi.Events.WitMicLevelChangedEvent Meta.WitAi.Interfaces.CustomTranscriptionProvider::get_OnMicLevelChanged()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR WitMicLevelChangedEvent_tA9B2889CB33EAA09656739F26AA70252ED15DEF7* CustomTranscriptionProvider_get_OnMicLevelChanged_m2415996D7E4D47A9A38169F05EBAA2F128D970E4 (CustomTranscriptionProvider_tC6EABF251A11EFEBE5A8AD8D77CEBF14FB1009C5* __this, const RuntimeMethod* method) 
{
	{
		// public WitMicLevelChangedEvent OnMicLevelChanged => onMicLevelChanged;
		WitMicLevelChangedEvent_tA9B2889CB33EAA09656739F26AA70252ED15DEF7* L_0 = __this->___onMicLevelChanged_9;
		return L_0;
	}
}
// System.Boolean Meta.WitAi.Interfaces.CustomTranscriptionProvider::get_OverrideMicLevel()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool CustomTranscriptionProvider_get_OverrideMicLevel_m70D535E786A44BF8650540994904C7AA03972939 (CustomTranscriptionProvider_tC6EABF251A11EFEBE5A8AD8D77CEBF14FB1009C5* __this, const RuntimeMethod* method) 
{
	{
		// public bool OverrideMicLevel => overrideMicLevel;
		bool L_0 = __this->___overrideMicLevel_4;
		return L_0;
	}
}
// System.Void Meta.WitAi.Interfaces.CustomTranscriptionProvider::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CustomTranscriptionProvider__ctor_mA73475D0E1FE689E65FB8A360E30E18CFA3BF568 (CustomTranscriptionProvider_tC6EABF251A11EFEBE5A8AD8D77CEBF14FB1009C5* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WitMicLevelChangedEvent_tA9B2889CB33EAA09656739F26AA70252ED15DEF7_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WitTranscriptionEvent_t51292FC7EB7BAF38C2EC6B57D87724C1BEB3C739_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// [SerializeField] private bool overrideMicLevel = false;
		__this->___overrideMicLevel_4 = (bool)0;
		// private WitTranscriptionEvent onPartialTranscription = new WitTranscriptionEvent();
		WitTranscriptionEvent_t51292FC7EB7BAF38C2EC6B57D87724C1BEB3C739* L_0 = (WitTranscriptionEvent_t51292FC7EB7BAF38C2EC6B57D87724C1BEB3C739*)il2cpp_codegen_object_new(WitTranscriptionEvent_t51292FC7EB7BAF38C2EC6B57D87724C1BEB3C739_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		WitTranscriptionEvent__ctor_m8FBA54D34EA19C07F367E3FF38F12102983D0B4D(L_0, NULL);
		__this->___onPartialTranscription_5 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___onPartialTranscription_5), (void*)L_0);
		// private WitTranscriptionEvent onFullTranscription = new WitTranscriptionEvent();
		WitTranscriptionEvent_t51292FC7EB7BAF38C2EC6B57D87724C1BEB3C739* L_1 = (WitTranscriptionEvent_t51292FC7EB7BAF38C2EC6B57D87724C1BEB3C739*)il2cpp_codegen_object_new(WitTranscriptionEvent_t51292FC7EB7BAF38C2EC6B57D87724C1BEB3C739_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		WitTranscriptionEvent__ctor_m8FBA54D34EA19C07F367E3FF38F12102983D0B4D(L_1, NULL);
		__this->___onFullTranscription_6 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___onFullTranscription_6), (void*)L_1);
		// private UnityEvent onStoppedListening = new UnityEvent();
		UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* L_2 = (UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977*)il2cpp_codegen_object_new(UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		UnityEvent__ctor_m03D3E5121B9A6100351984D0CE3050B909CD3235(L_2, NULL);
		__this->___onStoppedListening_7 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___onStoppedListening_7), (void*)L_2);
		// private UnityEvent onStartListening = new UnityEvent();
		UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* L_3 = (UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977*)il2cpp_codegen_object_new(UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977_il2cpp_TypeInfo_var);
		NullCheck(L_3);
		UnityEvent__ctor_m03D3E5121B9A6100351984D0CE3050B909CD3235(L_3, NULL);
		__this->___onStartListening_8 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___onStartListening_8), (void*)L_3);
		// private WitMicLevelChangedEvent onMicLevelChanged = new WitMicLevelChangedEvent();
		WitMicLevelChangedEvent_tA9B2889CB33EAA09656739F26AA70252ED15DEF7* L_4 = (WitMicLevelChangedEvent_tA9B2889CB33EAA09656739F26AA70252ED15DEF7*)il2cpp_codegen_object_new(WitMicLevelChangedEvent_tA9B2889CB33EAA09656739F26AA70252ED15DEF7_il2cpp_TypeInfo_var);
		NullCheck(L_4);
		WitMicLevelChangedEvent__ctor_m6DF80D93389B8C74A379AEECEEA4C4C7D672E6ED(L_4, NULL);
		__this->___onMicLevelChanged_9 = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___onMicLevelChanged_9), (void*)L_4);
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
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
// System.Void Meta.WitAi.Events.AudioBufferEvents::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioBufferEvents__ctor_mA35F09C6E6511A7439571EC9CA30795ACB46E9B5 (AudioBufferEvents_t464B32397852A58D1333411135D8AB9CF2F6C233* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WitByteDataEvent_t6F952E3BEDEBEEFF9FF094E1AFA7B2089F88B4CC_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WitMicLevelChangedEvent_tA9B2889CB33EAA09656739F26AA70252ED15DEF7_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public WitMicLevelChangedEvent OnMicLevelChanged = new WitMicLevelChangedEvent();
		WitMicLevelChangedEvent_tA9B2889CB33EAA09656739F26AA70252ED15DEF7* L_0 = (WitMicLevelChangedEvent_tA9B2889CB33EAA09656739F26AA70252ED15DEF7*)il2cpp_codegen_object_new(WitMicLevelChangedEvent_tA9B2889CB33EAA09656739F26AA70252ED15DEF7_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		WitMicLevelChangedEvent__ctor_m6DF80D93389B8C74A379AEECEEA4C4C7D672E6ED(L_0, NULL);
		__this->___OnMicLevelChanged_1 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___OnMicLevelChanged_1), (void*)L_0);
		// public WitByteDataEvent OnByteDataReady = new WitByteDataEvent();
		WitByteDataEvent_t6F952E3BEDEBEEFF9FF094E1AFA7B2089F88B4CC* L_1 = (WitByteDataEvent_t6F952E3BEDEBEEFF9FF094E1AFA7B2089F88B4CC*)il2cpp_codegen_object_new(WitByteDataEvent_t6F952E3BEDEBEEFF9FF094E1AFA7B2089F88B4CC_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		WitByteDataEvent__ctor_mD91E2677C3200283C56D740491BF9DF4501E6164(L_1, NULL);
		__this->___OnByteDataReady_2 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___OnByteDataReady_2), (void*)L_1);
		// public WitByteDataEvent OnByteDataSent = new WitByteDataEvent();
		WitByteDataEvent_t6F952E3BEDEBEEFF9FF094E1AFA7B2089F88B4CC* L_2 = (WitByteDataEvent_t6F952E3BEDEBEEFF9FF094E1AFA7B2089F88B4CC*)il2cpp_codegen_object_new(WitByteDataEvent_t6F952E3BEDEBEEFF9FF094E1AFA7B2089F88B4CC_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		WitByteDataEvent__ctor_mD91E2677C3200283C56D740491BF9DF4501E6164(L_2, NULL);
		__this->___OnByteDataSent_3 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___OnByteDataSent_3), (void*)L_2);
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
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
void OnSampleReadyEvent_Invoke_m9A89B018C8F93B365D23D6EF11B3C445D481782C_Multicast(OnSampleReadyEvent_t43C9DCB6394FF2C5F335602AC5455C1A6B430486* __this, Marker_t80D0133ECCCB8414D295FFD7C3FB9E6E564F5E42* ___marker0, float ___levelMax1, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates_13->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates_13->GetAddressAtUnchecked(0));
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		OnSampleReadyEvent_t43C9DCB6394FF2C5F335602AC5455C1A6B430486* currentDelegate = reinterpret_cast<OnSampleReadyEvent_t43C9DCB6394FF2C5F335602AC5455C1A6B430486*>(delegatesToInvoke[i]);
		typedef void (*FunctionPointerType) (RuntimeObject*, Marker_t80D0133ECCCB8414D295FFD7C3FB9E6E564F5E42*, float, const RuntimeMethod*);
		((FunctionPointerType)currentDelegate->___invoke_impl_1)((Il2CppObject*)currentDelegate->___method_code_6, ___marker0, ___levelMax1, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method_3));
	}
}
void OnSampleReadyEvent_Invoke_m9A89B018C8F93B365D23D6EF11B3C445D481782C_OpenInst(OnSampleReadyEvent_t43C9DCB6394FF2C5F335602AC5455C1A6B430486* __this, Marker_t80D0133ECCCB8414D295FFD7C3FB9E6E564F5E42* ___marker0, float ___levelMax1, const RuntimeMethod* method)
{
	NullCheck(___marker0);
	typedef void (*FunctionPointerType) (Marker_t80D0133ECCCB8414D295FFD7C3FB9E6E564F5E42*, float, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr_0)(___marker0, ___levelMax1, method);
}
void OnSampleReadyEvent_Invoke_m9A89B018C8F93B365D23D6EF11B3C445D481782C_OpenStatic(OnSampleReadyEvent_t43C9DCB6394FF2C5F335602AC5455C1A6B430486* __this, Marker_t80D0133ECCCB8414D295FFD7C3FB9E6E564F5E42* ___marker0, float ___levelMax1, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (Marker_t80D0133ECCCB8414D295FFD7C3FB9E6E564F5E42*, float, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr_0)(___marker0, ___levelMax1, method);
}
void OnSampleReadyEvent_Invoke_m9A89B018C8F93B365D23D6EF11B3C445D481782C_OpenStaticInvoker(OnSampleReadyEvent_t43C9DCB6394FF2C5F335602AC5455C1A6B430486* __this, Marker_t80D0133ECCCB8414D295FFD7C3FB9E6E564F5E42* ___marker0, float ___levelMax1, const RuntimeMethod* method)
{
	InvokerActionInvoker2< Marker_t80D0133ECCCB8414D295FFD7C3FB9E6E564F5E42*, float >::Invoke(__this->___method_ptr_0, method, NULL, ___marker0, ___levelMax1);
}
void OnSampleReadyEvent_Invoke_m9A89B018C8F93B365D23D6EF11B3C445D481782C_ClosedStaticInvoker(OnSampleReadyEvent_t43C9DCB6394FF2C5F335602AC5455C1A6B430486* __this, Marker_t80D0133ECCCB8414D295FFD7C3FB9E6E564F5E42* ___marker0, float ___levelMax1, const RuntimeMethod* method)
{
	InvokerActionInvoker3< RuntimeObject*, Marker_t80D0133ECCCB8414D295FFD7C3FB9E6E564F5E42*, float >::Invoke(__this->___method_ptr_0, method, NULL, __this->___m_target_2, ___marker0, ___levelMax1);
}
void OnSampleReadyEvent_Invoke_m9A89B018C8F93B365D23D6EF11B3C445D481782C_OpenVirtual(OnSampleReadyEvent_t43C9DCB6394FF2C5F335602AC5455C1A6B430486* __this, Marker_t80D0133ECCCB8414D295FFD7C3FB9E6E564F5E42* ___marker0, float ___levelMax1, const RuntimeMethod* method)
{
	NullCheck(___marker0);
	VirtualActionInvoker1< float >::Invoke(il2cpp_codegen_method_get_slot(method), ___marker0, ___levelMax1);
}
void OnSampleReadyEvent_Invoke_m9A89B018C8F93B365D23D6EF11B3C445D481782C_OpenInterface(OnSampleReadyEvent_t43C9DCB6394FF2C5F335602AC5455C1A6B430486* __this, Marker_t80D0133ECCCB8414D295FFD7C3FB9E6E564F5E42* ___marker0, float ___levelMax1, const RuntimeMethod* method)
{
	NullCheck(___marker0);
	InterfaceActionInvoker1< float >::Invoke(il2cpp_codegen_method_get_slot(method), il2cpp_codegen_method_get_declaring_type(method), ___marker0, ___levelMax1);
}
void OnSampleReadyEvent_Invoke_m9A89B018C8F93B365D23D6EF11B3C445D481782C_OpenGenericVirtual(OnSampleReadyEvent_t43C9DCB6394FF2C5F335602AC5455C1A6B430486* __this, Marker_t80D0133ECCCB8414D295FFD7C3FB9E6E564F5E42* ___marker0, float ___levelMax1, const RuntimeMethod* method)
{
	NullCheck(___marker0);
	GenericVirtualActionInvoker1< float >::Invoke(method, ___marker0, ___levelMax1);
}
void OnSampleReadyEvent_Invoke_m9A89B018C8F93B365D23D6EF11B3C445D481782C_OpenGenericInterface(OnSampleReadyEvent_t43C9DCB6394FF2C5F335602AC5455C1A6B430486* __this, Marker_t80D0133ECCCB8414D295FFD7C3FB9E6E564F5E42* ___marker0, float ___levelMax1, const RuntimeMethod* method)
{
	NullCheck(___marker0);
	GenericInterfaceActionInvoker1< float >::Invoke(method, ___marker0, ___levelMax1);
}
// System.Void Meta.WitAi.Events.AudioBufferEvents/OnSampleReadyEvent::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OnSampleReadyEvent__ctor_m8B7EF9FE12180C286C438648AA564AE06F1CBE6C (OnSampleReadyEvent_t43C9DCB6394FF2C5F335602AC5455C1A6B430486* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) 
{
	__this->___method_ptr_0 = il2cpp_codegen_get_virtual_call_method_pointer((RuntimeMethod*)___method1);
	__this->___method_3 = ___method1;
	__this->___m_target_2 = ___object0;
	Il2CppCodeGenWriteBarrier((void**)(&__this->___m_target_2), (void*)___object0);
	int parameterCount = il2cpp_codegen_method_parameter_count((RuntimeMethod*)___method1);
	__this->___method_code_6 = (intptr_t)__this;
	if (MethodIsStatic((RuntimeMethod*)___method1))
	{
		bool isOpen = parameterCount == 2;
		if (il2cpp_codegen_call_method_via_invoker((RuntimeMethod*)___method1))
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&OnSampleReadyEvent_Invoke_m9A89B018C8F93B365D23D6EF11B3C445D481782C_OpenStaticInvoker;
			else
				__this->___invoke_impl_1 = (intptr_t)&OnSampleReadyEvent_Invoke_m9A89B018C8F93B365D23D6EF11B3C445D481782C_ClosedStaticInvoker;
		else
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&OnSampleReadyEvent_Invoke_m9A89B018C8F93B365D23D6EF11B3C445D481782C_OpenStatic;
			else
				{
					__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
					__this->___method_code_6 = (intptr_t)__this->___m_target_2;
				}
	}
	else
	{
		bool isOpen = parameterCount == 1;
		if (isOpen)
		{
			if (__this->___method_is_virtual_12)
			{
				if (il2cpp_codegen_method_is_generic_instance_method((RuntimeMethod*)___method1))
					if (il2cpp_codegen_method_is_interface_method((RuntimeMethod*)___method1))
						__this->___invoke_impl_1 = (intptr_t)&OnSampleReadyEvent_Invoke_m9A89B018C8F93B365D23D6EF11B3C445D481782C_OpenGenericInterface;
					else
						__this->___invoke_impl_1 = (intptr_t)&OnSampleReadyEvent_Invoke_m9A89B018C8F93B365D23D6EF11B3C445D481782C_OpenGenericVirtual;
				else
					if (il2cpp_codegen_method_is_interface_method((RuntimeMethod*)___method1))
						__this->___invoke_impl_1 = (intptr_t)&OnSampleReadyEvent_Invoke_m9A89B018C8F93B365D23D6EF11B3C445D481782C_OpenInterface;
					else
						__this->___invoke_impl_1 = (intptr_t)&OnSampleReadyEvent_Invoke_m9A89B018C8F93B365D23D6EF11B3C445D481782C_OpenVirtual;
			}
			else
			{
				__this->___invoke_impl_1 = (intptr_t)&OnSampleReadyEvent_Invoke_m9A89B018C8F93B365D23D6EF11B3C445D481782C_OpenInst;
			}
		}
		else
		{
			if (___object0 == NULL)
				il2cpp_codegen_raise_exception(il2cpp_codegen_get_argument_exception(NULL, "Delegate to an instance method cannot have null 'this'."), NULL);
			__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
			__this->___method_code_6 = (intptr_t)__this->___m_target_2;
		}
	}
	__this->___extra_arg_5 = (intptr_t)&OnSampleReadyEvent_Invoke_m9A89B018C8F93B365D23D6EF11B3C445D481782C_Multicast;
}
// System.Void Meta.WitAi.Events.AudioBufferEvents/OnSampleReadyEvent::Invoke(Meta.WitAi.Data.RingBuffer`1/Marker<System.Byte>,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OnSampleReadyEvent_Invoke_m9A89B018C8F93B365D23D6EF11B3C445D481782C (OnSampleReadyEvent_t43C9DCB6394FF2C5F335602AC5455C1A6B430486* __this, Marker_t80D0133ECCCB8414D295FFD7C3FB9E6E564F5E42* ___marker0, float ___levelMax1, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, Marker_t80D0133ECCCB8414D295FFD7C3FB9E6E564F5E42*, float, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___marker0, ___levelMax1, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
// System.IAsyncResult Meta.WitAi.Events.AudioBufferEvents/OnSampleReadyEvent::BeginInvoke(Meta.WitAi.Data.RingBuffer`1/Marker<System.Byte>,System.Single,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* OnSampleReadyEvent_BeginInvoke_m1D553D02553FE58FE19EE235A510F317A1F18E71 (OnSampleReadyEvent_t43C9DCB6394FF2C5F335602AC5455C1A6B430486* __this, Marker_t80D0133ECCCB8414D295FFD7C3FB9E6E564F5E42* ___marker0, float ___levelMax1, AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C* ___callback2, RuntimeObject* ___object3, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[3] = {0};
	__d_args[0] = ___marker0;
	__d_args[1] = Box(Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_il2cpp_TypeInfo_var, &___levelMax1);
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback2, (RuntimeObject*)___object3);
}
// System.Void Meta.WitAi.Events.AudioBufferEvents/OnSampleReadyEvent::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OnSampleReadyEvent_EndInvoke_mBF49BAA40C525B30BFD8F64E828C128371E156D6 (OnSampleReadyEvent_t43C9DCB6394FF2C5F335602AC5455C1A6B430486* __this, RuntimeObject* ___result0, const RuntimeMethod* method) 
{
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Meta.WitAi.Events.AudioDurationTrackerFinishedEvent::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioDurationTrackerFinishedEvent__ctor_m8C82B984909227695B0FEF1876B89B090A426320 (AudioDurationTrackerFinishedEvent_t23E275CDD44C7923B60C067FAFF9FA926AB30647* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityEvent_2__ctor_mE88C79B88E89F48201D5486B2C02E988D2712CD8_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		UnityEvent_2__ctor_mE88C79B88E89F48201D5486B2C02E988D2712CD8(__this, UnityEvent_2__ctor_mE88C79B88E89F48201D5486B2C02E988D2712CD8_RuntimeMethod_var);
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
// System.Void Meta.WitAi.Events.EventCategoryAttribute::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EventCategoryAttribute__ctor_m3E91D5B0FF8DD17C350598FE8488E05C0F1AAE0F (EventCategoryAttribute_t589C967400362B59FE256F9DDEDC9ABB013BD883* __this, String_t* ___category0, const RuntimeMethod* method) 
{
	{
		// public EventCategoryAttribute(string category = "")
		PropertyAttribute__ctor_m19247686E165101F140615C7306DC2DA3953D97D(__this, NULL);
		// Category = category;
		String_t* L_0 = ___category0;
		__this->___Category_1 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___Category_1), (void*)L_0);
		// }
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
// System.Collections.Generic.HashSet`1<System.String> Meta.WitAi.Events.EventRegistry::get_OverriddenCallbacks()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR HashSet_1_tEFC6605F7DE53F71946C33FD371E53C3100F2178* EventRegistry_get_OverriddenCallbacks_m5E8ABC4F32B0E69325F52D029003378ED9488884 (EventRegistry_t712584F20910AAA2A4A85A34835BC58574C441FE* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashSet_1__ctor_m9F8CD04799346CDC14E5D227FCC28B5A151A7C62_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashSet_1_tEFC6605F7DE53F71946C33FD371E53C3100F2178_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	HashSet_1_tEFC6605F7DE53F71946C33FD371E53C3100F2178* V_1 = NULL;
	{
		// if (_overriddenCallbacksHash == null)
		HashSet_1_tEFC6605F7DE53F71946C33FD371E53C3100F2178* L_0 = __this->____overriddenCallbacksHash_1;
		V_0 = (bool)((((RuntimeObject*)(HashSet_1_tEFC6605F7DE53F71946C33FD371E53C3100F2178*)L_0) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0021;
		}
	}
	{
		// _overriddenCallbacksHash = new HashSet<string>(_overriddenCallbacks);
		List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_2 = __this->____overriddenCallbacks_0;
		HashSet_1_tEFC6605F7DE53F71946C33FD371E53C3100F2178* L_3 = (HashSet_1_tEFC6605F7DE53F71946C33FD371E53C3100F2178*)il2cpp_codegen_object_new(HashSet_1_tEFC6605F7DE53F71946C33FD371E53C3100F2178_il2cpp_TypeInfo_var);
		NullCheck(L_3);
		HashSet_1__ctor_m9F8CD04799346CDC14E5D227FCC28B5A151A7C62(L_3, L_2, HashSet_1__ctor_m9F8CD04799346CDC14E5D227FCC28B5A151A7C62_RuntimeMethod_var);
		__this->____overriddenCallbacksHash_1 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____overriddenCallbacksHash_1), (void*)L_3);
	}

IL_0021:
	{
		// return _overriddenCallbacksHash;
		HashSet_1_tEFC6605F7DE53F71946C33FD371E53C3100F2178* L_4 = __this->____overriddenCallbacksHash_1;
		V_1 = L_4;
		goto IL_002a;
	}

IL_002a:
	{
		// }
		HashSet_1_tEFC6605F7DE53F71946C33FD371E53C3100F2178* L_5 = V_1;
		return L_5;
	}
}
// System.Void Meta.WitAi.Events.EventRegistry::RegisterOverriddenCallback(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EventRegistry_RegisterOverriddenCallback_m2387C7BB567ECF6D99E69462B9019115A1F68D94 (EventRegistry_t712584F20910AAA2A4A85A34835BC58574C441FE* __this, String_t* ___callback0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashSet_1_Add_mF3D4CF6D0150392127D5561A87DCDEDA9A81BE5D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_mF10DB1D3CBB0B14215F0E4F8AB4934A1955E5351_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Contains_m359254483BE42CAD4DCA8FBAFB87473FB4CF00E1_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		// if (!_overriddenCallbacks.Contains(callback))
		List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_0 = __this->____overriddenCallbacks_0;
		String_t* L_1 = ___callback0;
		NullCheck(L_0);
		bool L_2;
		L_2 = List_1_Contains_m359254483BE42CAD4DCA8FBAFB87473FB4CF00E1(L_0, L_1, List_1_Contains_m359254483BE42CAD4DCA8FBAFB87473FB4CF00E1_RuntimeMethod_var);
		V_0 = (bool)((((int32_t)L_2) == ((int32_t)0))? 1 : 0);
		bool L_3 = V_0;
		if (!L_3)
		{
			goto IL_0030;
		}
	}
	{
		// _overriddenCallbacks.Add(callback);
		List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_4 = __this->____overriddenCallbacks_0;
		String_t* L_5 = ___callback0;
		NullCheck(L_4);
		List_1_Add_mF10DB1D3CBB0B14215F0E4F8AB4934A1955E5351_inline(L_4, L_5, List_1_Add_mF10DB1D3CBB0B14215F0E4F8AB4934A1955E5351_RuntimeMethod_var);
		// _overriddenCallbacksHash.Add(callback);
		HashSet_1_tEFC6605F7DE53F71946C33FD371E53C3100F2178* L_6 = __this->____overriddenCallbacksHash_1;
		String_t* L_7 = ___callback0;
		NullCheck(L_6);
		bool L_8;
		L_8 = HashSet_1_Add_mF3D4CF6D0150392127D5561A87DCDEDA9A81BE5D(L_6, L_7, HashSet_1_Add_mF3D4CF6D0150392127D5561A87DCDEDA9A81BE5D_RuntimeMethod_var);
	}

IL_0030:
	{
		// }
		return;
	}
}
// System.Void Meta.WitAi.Events.EventRegistry::RemoveOverriddenCallback(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EventRegistry_RemoveOverriddenCallback_m91B90043FFD2AD58B31B4C7EAE1824D91829B62E (EventRegistry_t712584F20910AAA2A4A85A34835BC58574C441FE* __this, String_t* ___callback0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashSet_1_Remove_m97303C08928AB7A9364E7908F34670D92348D9DA_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Contains_m359254483BE42CAD4DCA8FBAFB87473FB4CF00E1_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Remove_mD9E8CFB6777A99046B3C0195F7343FE771A2E99D_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		// if (_overriddenCallbacks.Contains(callback))
		List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_0 = __this->____overriddenCallbacks_0;
		String_t* L_1 = ___callback0;
		NullCheck(L_0);
		bool L_2;
		L_2 = List_1_Contains_m359254483BE42CAD4DCA8FBAFB87473FB4CF00E1(L_0, L_1, List_1_Contains_m359254483BE42CAD4DCA8FBAFB87473FB4CF00E1_RuntimeMethod_var);
		V_0 = L_2;
		bool L_3 = V_0;
		if (!L_3)
		{
			goto IL_002d;
		}
	}
	{
		// _overriddenCallbacks.Remove(callback);
		List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_4 = __this->____overriddenCallbacks_0;
		String_t* L_5 = ___callback0;
		NullCheck(L_4);
		bool L_6;
		L_6 = List_1_Remove_mD9E8CFB6777A99046B3C0195F7343FE771A2E99D(L_4, L_5, List_1_Remove_mD9E8CFB6777A99046B3C0195F7343FE771A2E99D_RuntimeMethod_var);
		// _overriddenCallbacksHash.Remove(callback);
		HashSet_1_tEFC6605F7DE53F71946C33FD371E53C3100F2178* L_7 = __this->____overriddenCallbacksHash_1;
		String_t* L_8 = ___callback0;
		NullCheck(L_7);
		bool L_9;
		L_9 = HashSet_1_Remove_m97303C08928AB7A9364E7908F34670D92348D9DA(L_7, L_8, HashSet_1_Remove_m97303C08928AB7A9364E7908F34670D92348D9DA_RuntimeMethod_var);
	}

IL_002d:
	{
		// }
		return;
	}
}
// System.Boolean Meta.WitAi.Events.EventRegistry::IsCallbackOverridden(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool EventRegistry_IsCallbackOverridden_mFE5B059E0485891CD2679A92C5F5A14A85B3DBF0 (EventRegistry_t712584F20910AAA2A4A85A34835BC58574C441FE* __this, String_t* ___callback0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashSet_1_Contains_mAE49939A0DE08C4864E8560F3F7FCDAC2E193853_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		// return OverriddenCallbacks.Contains(callback);
		HashSet_1_tEFC6605F7DE53F71946C33FD371E53C3100F2178* L_0;
		L_0 = EventRegistry_get_OverriddenCallbacks_m5E8ABC4F32B0E69325F52D029003378ED9488884(__this, NULL);
		String_t* L_1 = ___callback0;
		NullCheck(L_0);
		bool L_2;
		L_2 = HashSet_1_Contains_mAE49939A0DE08C4864E8560F3F7FCDAC2E193853(L_0, L_1, HashSet_1_Contains_mAE49939A0DE08C4864E8560F3F7FCDAC2E193853_RuntimeMethod_var);
		V_0 = L_2;
		goto IL_0010;
	}

IL_0010:
	{
		// }
		bool L_3 = V_0;
		return L_3;
	}
}
// System.Void Meta.WitAi.Events.EventRegistry::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EventRegistry__ctor_m6B8EBEFFEC6E4009C2DE562BE9970D287471FF55 (EventRegistry_t712584F20910AAA2A4A85A34835BC58574C441FE* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_mCA8DD57EAC70C2B5923DBB9D5A77CEAC22E7068E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private List<string> _overriddenCallbacks = new List<string>();
		List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_0 = (List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD*)il2cpp_codegen_object_new(List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		List_1__ctor_mCA8DD57EAC70C2B5923DBB9D5A77CEAC22E7068E(L_0, List_1__ctor_mCA8DD57EAC70C2B5923DBB9D5A77CEAC22E7068E_RuntimeMethod_var);
		__this->____overriddenCallbacks_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____overriddenCallbacks_0), (void*)L_0);
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
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
// System.Void Meta.WitAi.Events.TelemetryEvents::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TelemetryEvents__ctor_mDBE94F9496224CC006896B23456F1BE265746EE6 (TelemetryEvents_t728EE43C6D9E03EE2233160917696F0D483CF2DC* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AudioDurationTrackerFinishedEvent_t23E275CDD44C7923B60C067FAFF9FA926AB30647_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public AudioDurationTrackerFinishedEvent OnAudioTrackerFinished =
		//     new AudioDurationTrackerFinishedEvent();
		AudioDurationTrackerFinishedEvent_t23E275CDD44C7923B60C067FAFF9FA926AB30647* L_0 = (AudioDurationTrackerFinishedEvent_t23E275CDD44C7923B60C067FAFF9FA926AB30647*)il2cpp_codegen_object_new(AudioDurationTrackerFinishedEvent_t23E275CDD44C7923B60C067FAFF9FA926AB30647_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		AudioDurationTrackerFinishedEvent__ctor_m8C82B984909227695B0FEF1876B89B090A426320(L_0, NULL);
		__this->___OnAudioTrackerFinished_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___OnAudioTrackerFinished_0), (void*)L_0);
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
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
// Meta.WitAi.Events.WitByteDataEvent Meta.WitAi.Events.VoiceEvents::get_OnByteDataReady()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR WitByteDataEvent_t6F952E3BEDEBEEFF9FF094E1AFA7B2089F88B4CC* VoiceEvents_get_OnByteDataReady_mA86A8FABB69CF39274F46460A154744790324388 (VoiceEvents_t7755B8C2A9074FA12090CF7288E5512DFD225EA9* __this, const RuntimeMethod* method) 
{
	{
		// public WitByteDataEvent OnByteDataReady => _onByteDataReady;
		WitByteDataEvent_t6F952E3BEDEBEEFF9FF094E1AFA7B2089F88B4CC* L_0 = __this->____onByteDataReady_32;
		return L_0;
	}
}
// Meta.WitAi.Events.WitByteDataEvent Meta.WitAi.Events.VoiceEvents::get_OnByteDataSent()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR WitByteDataEvent_t6F952E3BEDEBEEFF9FF094E1AFA7B2089F88B4CC* VoiceEvents_get_OnByteDataSent_m4A654824A9AF420AB47F8015E59BD76E282C98AC (VoiceEvents_t7755B8C2A9074FA12090CF7288E5512DFD225EA9* __this, const RuntimeMethod* method) 
{
	{
		// public WitByteDataEvent OnByteDataSent => _onByteDataSent;
		WitByteDataEvent_t6F952E3BEDEBEEFF9FF094E1AFA7B2089F88B4CC* L_0 = __this->____onByteDataSent_33;
		return L_0;
	}
}
// Meta.WitAi.Events.WitValidationEvent Meta.WitAi.Events.VoiceEvents::get_OnValidatePartialResponse()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR WitValidationEvent_t731FF211C8D0215476601B54ECDDD2D1DF38974C* VoiceEvents_get_OnValidatePartialResponse_m62DE8DDDEE5ADC162380EAF17572CE4472913667 (VoiceEvents_t7755B8C2A9074FA12090CF7288E5512DFD225EA9* __this, const RuntimeMethod* method) 
{
	{
		// public WitValidationEvent OnValidatePartialResponse => _onValidatePartialResponse;
		WitValidationEvent_t731FF211C8D0215476601B54ECDDD2D1DF38974C* L_0 = __this->____onValidatePartialResponse_34;
		return L_0;
	}
}
// System.Void Meta.WitAi.Events.VoiceEvents::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VoiceEvents__ctor_m08A9CD5D70F02629DAD941C6F045D838E3E7D619 (VoiceEvents_t7755B8C2A9074FA12090CF7288E5512DFD225EA9* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WitByteDataEvent_t6F952E3BEDEBEEFF9FF094E1AFA7B2089F88B4CC_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WitValidationEvent_t731FF211C8D0215476601B54ECDDD2D1DF38974C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private WitByteDataEvent _onByteDataReady = new WitByteDataEvent();
		WitByteDataEvent_t6F952E3BEDEBEEFF9FF094E1AFA7B2089F88B4CC* L_0 = (WitByteDataEvent_t6F952E3BEDEBEEFF9FF094E1AFA7B2089F88B4CC*)il2cpp_codegen_object_new(WitByteDataEvent_t6F952E3BEDEBEEFF9FF094E1AFA7B2089F88B4CC_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		WitByteDataEvent__ctor_mD91E2677C3200283C56D740491BF9DF4501E6164(L_0, NULL);
		__this->____onByteDataReady_32 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____onByteDataReady_32), (void*)L_0);
		// private WitByteDataEvent _onByteDataSent = new WitByteDataEvent();
		WitByteDataEvent_t6F952E3BEDEBEEFF9FF094E1AFA7B2089F88B4CC* L_1 = (WitByteDataEvent_t6F952E3BEDEBEEFF9FF094E1AFA7B2089F88B4CC*)il2cpp_codegen_object_new(WitByteDataEvent_t6F952E3BEDEBEEFF9FF094E1AFA7B2089F88B4CC_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		WitByteDataEvent__ctor_mD91E2677C3200283C56D740491BF9DF4501E6164(L_1, NULL);
		__this->____onByteDataSent_33 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____onByteDataSent_33), (void*)L_1);
		// private WitValidationEvent _onValidatePartialResponse = new WitValidationEvent();
		WitValidationEvent_t731FF211C8D0215476601B54ECDDD2D1DF38974C* L_2 = (WitValidationEvent_t731FF211C8D0215476601B54ECDDD2D1DF38974C*)il2cpp_codegen_object_new(WitValidationEvent_t731FF211C8D0215476601B54ECDDD2D1DF38974C_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		WitValidationEvent__ctor_m740B387842A1411F73021F817DD999D3BA9572DB(L_2, NULL);
		__this->____onValidatePartialResponse_34 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____onValidatePartialResponse_34), (void*)L_2);
		SpeechEvents__ctor_m6D16CA375136DF4D38A1D2E97B4479CB530F9ADA(__this, NULL);
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
// System.Void Meta.WitAi.Events.VoiceServiceRequestEvent::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VoiceServiceRequestEvent__ctor_m1D20A625F3700F2E3369F471E403A9274F4063A6 (VoiceServiceRequestEvent_t7340AD8EBA1B3D36E1A95E47C8DBCD954F1DED13* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityEvent_1__ctor_mBCCC67D3203429FEB7F64B44142A50C5EBDEB9D6_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		UnityEvent_1__ctor_mBCCC67D3203429FEB7F64B44142A50C5EBDEB9D6(__this, UnityEvent_1__ctor_mBCCC67D3203429FEB7F64B44142A50C5EBDEB9D6_RuntimeMethod_var);
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
// System.Void Meta.WitAi.Events.WitByteDataEvent::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WitByteDataEvent__ctor_mD91E2677C3200283C56D740491BF9DF4501E6164 (WitByteDataEvent_t6F952E3BEDEBEEFF9FF094E1AFA7B2089F88B4CC* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityEvent_3__ctor_m875D7B8D4734040F09E062B70C490D1FE698C0B9_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		UnityEvent_3__ctor_m875D7B8D4734040F09E062B70C490D1FE698C0B9(__this, UnityEvent_3__ctor_m875D7B8D4734040F09E062B70C490D1FE698C0B9_RuntimeMethod_var);
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
// System.Void Meta.WitAi.Events.WitErrorEvent::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WitErrorEvent__ctor_m636011E937197FBC4535022399687EDF0F9BB698 (WitErrorEvent_tF617F56AD9B12E89D73E125B79E441A56067F1B2* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityEvent_2__ctor_m30ECB4C6C53E01554E5F37F035ED8CD10C1B2480_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		UnityEvent_2__ctor_m30ECB4C6C53E01554E5F37F035ED8CD10C1B2480(__this, UnityEvent_2__ctor_m30ECB4C6C53E01554E5F37F035ED8CD10C1B2480_RuntimeMethod_var);
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
// System.Void Meta.WitAi.Events.WitMicLevelChangedEvent::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WitMicLevelChangedEvent__ctor_m6DF80D93389B8C74A379AEECEEA4C4C7D672E6ED (WitMicLevelChangedEvent_tA9B2889CB33EAA09656739F26AA70252ED15DEF7* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityEvent_1__ctor_mD1175E822AFF26E9A43F2FB692BB82525C6DD422_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		UnityEvent_1__ctor_mD1175E822AFF26E9A43F2FB692BB82525C6DD422(__this, UnityEvent_1__ctor_mD1175E822AFF26E9A43F2FB692BB82525C6DD422_RuntimeMethod_var);
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
// System.Void Meta.WitAi.Events.WitObjectEvent::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WitObjectEvent__ctor_mE0A7A7277557646ED29BE2229B7CD747CFFF3437 (WitObjectEvent_tC8E0642CEF100B4BF0068235B2A335A58FC217D8* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityEvent_1__ctor_m4232B3F734BAF440DA408EF9A6D10CA759EBE76C_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		UnityEvent_1__ctor_m4232B3F734BAF440DA408EF9A6D10CA759EBE76C(__this, UnityEvent_1__ctor_m4232B3F734BAF440DA408EF9A6D10CA759EBE76C_RuntimeMethod_var);
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
// System.Void Meta.WitAi.Events.WitRequestCreatedEvent::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WitRequestCreatedEvent__ctor_m7AE3D7970DA2FCCE3839331A4DF4B7E9D49C5149 (WitRequestCreatedEvent_t1A01ABB6F9E3C02D0251B5DC9F5B290EDA0E319B* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityEvent_1__ctor_m6CC0994A9BB9D487DA9CFEFEB765623D485E0877_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		UnityEvent_1__ctor_m6CC0994A9BB9D487DA9CFEFEB765623D485E0877(__this, UnityEvent_1__ctor_m6CC0994A9BB9D487DA9CFEFEB765623D485E0877_RuntimeMethod_var);
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
// System.Void Meta.WitAi.Events.WitRequestOptionsEvent::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WitRequestOptionsEvent__ctor_m10A500367C7D0AC6F19B4C873F6B2E38DB68F1E5 (WitRequestOptionsEvent_t84FCD56D356445821DECABA3F66CADF6B07ABB1B* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityEvent_1__ctor_m14E736A972984B0F3F605334B3BB551CA3A37249_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		UnityEvent_1__ctor_m14E736A972984B0F3F605334B3BB551CA3A37249(__this, UnityEvent_1__ctor_m14E736A972984B0F3F605334B3BB551CA3A37249_RuntimeMethod_var);
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
// System.Void Meta.WitAi.Events.WitResponseEvent::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WitResponseEvent__ctor_m8AF9374579A9418E2D8184AA0E0EB16E0631FED1 (WitResponseEvent_tC85152AAABC87956DF604749EEA671ADAA9EFFDA* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityEvent_1__ctor_mF7AA5743E2CEC1E7B16598E449A80EE8E0D93E1F_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		UnityEvent_1__ctor_mF7AA5743E2CEC1E7B16598E449A80EE8E0D93E1F(__this, UnityEvent_1__ctor_mF7AA5743E2CEC1E7B16598E449A80EE8E0D93E1F_RuntimeMethod_var);
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
// System.Void Meta.WitAi.Events.WitTranscriptionEvent::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WitTranscriptionEvent__ctor_m8FBA54D34EA19C07F367E3FF38F12102983D0B4D (WitTranscriptionEvent_t51292FC7EB7BAF38C2EC6B57D87724C1BEB3C739* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityEvent_1__ctor_m0F7D790DACD6F3D18E865D01FE4427603C1B0CC6_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		UnityEvent_1__ctor_m0F7D790DACD6F3D18E865D01FE4427603C1B0CC6(__this, UnityEvent_1__ctor_m0F7D790DACD6F3D18E865D01FE4427603C1B0CC6_RuntimeMethod_var);
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
// System.Void Meta.WitAi.Events.WitValidationEvent::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WitValidationEvent__ctor_m740B387842A1411F73021F817DD999D3BA9572DB (WitValidationEvent_t731FF211C8D0215476601B54ECDDD2D1DF38974C* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityEvent_1__ctor_m1700B56BB048391F03DE134A8B289FD540FDA6C4_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		UnityEvent_1__ctor_m1700B56BB048391F03DE134A8B289FD540FDA6C4(__this, UnityEvent_1__ctor_m1700B56BB048391F03DE134A8B289FD540FDA6C4_RuntimeMethod_var);
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
// Meta.WitAi.Events.WitRequestOptionsEvent Meta.WitAi.Events.SpeechEvents::get_OnRequestOptionSetup()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR WitRequestOptionsEvent_t84FCD56D356445821DECABA3F66CADF6B07ABB1B* SpeechEvents_get_OnRequestOptionSetup_mDD48B5E524783E2376629F4ABA5985A85C1CC24C (SpeechEvents_tB51C31627EF79AB5734270C1558A6C6F67A5040E* __this, const RuntimeMethod* method) 
{
	{
		// public WitRequestOptionsEvent OnRequestOptionSetup => _onRequestOptionSetup;
		WitRequestOptionsEvent_t84FCD56D356445821DECABA3F66CADF6B07ABB1B* L_0 = __this->____onRequestOptionSetup_3;
		return L_0;
	}
}
// Meta.WitAi.Events.VoiceServiceRequestEvent Meta.WitAi.Events.SpeechEvents::get_OnRequestInitialized()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR VoiceServiceRequestEvent_t7340AD8EBA1B3D36E1A95E47C8DBCD954F1DED13* SpeechEvents_get_OnRequestInitialized_mDF97BA996E91AC80EDEFA571B39D2ECD09C97A09 (SpeechEvents_tB51C31627EF79AB5734270C1558A6C6F67A5040E* __this, const RuntimeMethod* method) 
{
	{
		// public VoiceServiceRequestEvent OnRequestInitialized => _onRequestInitialized;
		VoiceServiceRequestEvent_t7340AD8EBA1B3D36E1A95E47C8DBCD954F1DED13* L_0 = __this->____onRequestInitialized_4;
		return L_0;
	}
}
// Meta.WitAi.Events.WitRequestCreatedEvent Meta.WitAi.Events.SpeechEvents::get_OnRequestCreated()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR WitRequestCreatedEvent_t1A01ABB6F9E3C02D0251B5DC9F5B290EDA0E319B* SpeechEvents_get_OnRequestCreated_mDB1CAA325BD1348FDF861A84E45F47FF84D15C63 (SpeechEvents_tB51C31627EF79AB5734270C1558A6C6F67A5040E* __this, const RuntimeMethod* method) 
{
	{
		// public WitRequestCreatedEvent OnRequestCreated => _onRequestCreated;
		WitRequestCreatedEvent_t1A01ABB6F9E3C02D0251B5DC9F5B290EDA0E319B* L_0 = __this->____onRequestCreated_5;
		return L_0;
	}
}
// Meta.WitAi.Events.VoiceServiceRequestEvent Meta.WitAi.Events.SpeechEvents::get_OnSend()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR VoiceServiceRequestEvent_t7340AD8EBA1B3D36E1A95E47C8DBCD954F1DED13* SpeechEvents_get_OnSend_m848D965F028D864B6175BA77425848BA86153A13 (SpeechEvents_tB51C31627EF79AB5734270C1558A6C6F67A5040E* __this, const RuntimeMethod* method) 
{
	{
		// public VoiceServiceRequestEvent OnSend => _onSend;
		VoiceServiceRequestEvent_t7340AD8EBA1B3D36E1A95E47C8DBCD954F1DED13* L_0 = __this->____onSend_6;
		return L_0;
	}
}
// UnityEngine.Events.UnityEvent Meta.WitAi.Events.SpeechEvents::get_OnMinimumWakeThresholdHit()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* SpeechEvents_get_OnMinimumWakeThresholdHit_m1C3C6112F4B81CA7AB4092C679CB1F0A0897AF41 (SpeechEvents_tB51C31627EF79AB5734270C1558A6C6F67A5040E* __this, const RuntimeMethod* method) 
{
	{
		// public UnityEvent OnMinimumWakeThresholdHit => _onMinimumWakeThresholdHit;
		UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* L_0 = __this->____onMinimumWakeThresholdHit_8;
		return L_0;
	}
}
// UnityEngine.Events.UnityEvent Meta.WitAi.Events.SpeechEvents::get_OnMicDataSent()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* SpeechEvents_get_OnMicDataSent_mAA598367D126F79A9BC611B95D6779CAD18C6874 (SpeechEvents_tB51C31627EF79AB5734270C1558A6C6F67A5040E* __this, const RuntimeMethod* method) 
{
	{
		// public UnityEvent OnMicDataSent => _onMicDataSent;
		UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* L_0 = __this->____onMicDataSent_9;
		return L_0;
	}
}
// UnityEngine.Events.UnityEvent Meta.WitAi.Events.SpeechEvents::get_OnStoppedListeningDueToDeactivation()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* SpeechEvents_get_OnStoppedListeningDueToDeactivation_mBEF3FA3D000697DED97B1738FED177B46F7E5629 (SpeechEvents_tB51C31627EF79AB5734270C1558A6C6F67A5040E* __this, const RuntimeMethod* method) 
{
	{
		// public UnityEvent OnStoppedListeningDueToDeactivation => _onStoppedListeningDueToDeactivation;
		UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* L_0 = __this->____onStoppedListeningDueToDeactivation_10;
		return L_0;
	}
}
// UnityEngine.Events.UnityEvent Meta.WitAi.Events.SpeechEvents::get_OnStoppedListeningDueToInactivity()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* SpeechEvents_get_OnStoppedListeningDueToInactivity_mDB9EB1C53F62E85CE682C58725EFE2ED98FCED59 (SpeechEvents_tB51C31627EF79AB5734270C1558A6C6F67A5040E* __this, const RuntimeMethod* method) 
{
	{
		// public UnityEvent OnStoppedListeningDueToInactivity => _onStoppedListeningDueToInactivity;
		UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* L_0 = __this->____onStoppedListeningDueToInactivity_11;
		return L_0;
	}
}
// UnityEngine.Events.UnityEvent Meta.WitAi.Events.SpeechEvents::get_OnStoppedListeningDueToTimeout()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* SpeechEvents_get_OnStoppedListeningDueToTimeout_m09ED39D18AEAD2C383D62452353161EF4400DF70 (SpeechEvents_tB51C31627EF79AB5734270C1558A6C6F67A5040E* __this, const RuntimeMethod* method) 
{
	{
		// public UnityEvent OnStoppedListeningDueToTimeout => _onStoppedListeningDueToTimeout;
		UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* L_0 = __this->____onStoppedListeningDueToTimeout_12;
		return L_0;
	}
}
// UnityEngine.Events.UnityEvent Meta.WitAi.Events.SpeechEvents::get_OnAborting()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* SpeechEvents_get_OnAborting_mDA5491F8A6AADF0CBB44D92B3337090F3B5D0B68 (SpeechEvents_tB51C31627EF79AB5734270C1558A6C6F67A5040E* __this, const RuntimeMethod* method) 
{
	{
		// public UnityEvent OnAborting => _onAborting;
		UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* L_0 = __this->____onAborting_14;
		return L_0;
	}
}
// UnityEngine.Events.UnityEvent Meta.WitAi.Events.SpeechEvents::get_OnAborted()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* SpeechEvents_get_OnAborted_m1BF160D6FBB7602D71BB7E262F7FFCF868C0DFF0 (SpeechEvents_tB51C31627EF79AB5734270C1558A6C6F67A5040E* __this, const RuntimeMethod* method) 
{
	{
		// public UnityEvent OnAborted => _onAborted;
		UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* L_0 = __this->____onAborted_15;
		return L_0;
	}
}
// Meta.WitAi.Events.WitTranscriptionEvent Meta.WitAi.Events.SpeechEvents::get_OnCanceled()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR WitTranscriptionEvent_t51292FC7EB7BAF38C2EC6B57D87724C1BEB3C739* SpeechEvents_get_OnCanceled_mC99F35015A99C7E082341B8E8DA65FAF1E5B7D6C (SpeechEvents_tB51C31627EF79AB5734270C1558A6C6F67A5040E* __this, const RuntimeMethod* method) 
{
	{
		// public WitTranscriptionEvent OnCanceled => _onCanceled;
		WitTranscriptionEvent_t51292FC7EB7BAF38C2EC6B57D87724C1BEB3C739* L_0 = __this->____onCanceled_16;
		return L_0;
	}
}
// Meta.WitAi.Events.WitResponseEvent Meta.WitAi.Events.SpeechEvents::get_OnPartialResponse()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR WitResponseEvent_tC85152AAABC87956DF604749EEA671ADAA9EFFDA* SpeechEvents_get_OnPartialResponse_mF3C979EF723BCE8D2F1EE5799E641B8641D53C22 (SpeechEvents_tB51C31627EF79AB5734270C1558A6C6F67A5040E* __this, const RuntimeMethod* method) 
{
	{
		// public WitResponseEvent OnPartialResponse => _onPartialResponse;
		WitResponseEvent_tC85152AAABC87956DF604749EEA671ADAA9EFFDA* L_0 = __this->____onPartialResponse_18;
		return L_0;
	}
}
// Meta.WitAi.Events.WitResponseEvent Meta.WitAi.Events.SpeechEvents::get_OnResponse()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR WitResponseEvent_tC85152AAABC87956DF604749EEA671ADAA9EFFDA* SpeechEvents_get_OnResponse_m35A479475B9CCCE66CDA4028A0A6AE6343E50400 (SpeechEvents_tB51C31627EF79AB5734270C1558A6C6F67A5040E* __this, const RuntimeMethod* method) 
{
	{
		// public WitResponseEvent OnResponse => _onResponse;
		WitResponseEvent_tC85152AAABC87956DF604749EEA671ADAA9EFFDA* L_0 = __this->____onResponse_19;
		return L_0;
	}
}
// Meta.WitAi.Events.WitErrorEvent Meta.WitAi.Events.SpeechEvents::get_OnError()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR WitErrorEvent_tF617F56AD9B12E89D73E125B79E441A56067F1B2* SpeechEvents_get_OnError_mCB052EBA347C9125964E56DD0BD6CC0264796421 (SpeechEvents_tB51C31627EF79AB5734270C1558A6C6F67A5040E* __this, const RuntimeMethod* method) 
{
	{
		// public WitErrorEvent OnError => _onError;
		WitErrorEvent_tF617F56AD9B12E89D73E125B79E441A56067F1B2* L_0 = __this->____onError_20;
		return L_0;
	}
}
// UnityEngine.Events.UnityEvent Meta.WitAi.Events.SpeechEvents::get_OnRequestCompleted()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* SpeechEvents_get_OnRequestCompleted_m4FDD273CC7D87CE80A18BBC2E3107BF81CBF4CBB (SpeechEvents_tB51C31627EF79AB5734270C1558A6C6F67A5040E* __this, const RuntimeMethod* method) 
{
	{
		// public UnityEvent OnRequestCompleted => _onRequestCompleted;
		UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* L_0 = __this->____onRequestCompleted_21;
		return L_0;
	}
}
// Meta.WitAi.Events.VoiceServiceRequestEvent Meta.WitAi.Events.SpeechEvents::get_OnComplete()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR VoiceServiceRequestEvent_t7340AD8EBA1B3D36E1A95E47C8DBCD954F1DED13* SpeechEvents_get_OnComplete_m9FD0FF1FDEA3E57022FA443D9D27A91108EC4BB9 (SpeechEvents_tB51C31627EF79AB5734270C1558A6C6F67A5040E* __this, const RuntimeMethod* method) 
{
	{
		// public VoiceServiceRequestEvent OnComplete => _onComplete;
		VoiceServiceRequestEvent_t7340AD8EBA1B3D36E1A95E47C8DBCD954F1DED13* L_0 = __this->____onComplete_22;
		return L_0;
	}
}
// UnityEngine.Events.UnityEvent Meta.WitAi.Events.SpeechEvents::get_OnStartListening()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* SpeechEvents_get_OnStartListening_m1AE66AF56C8A79496E386C26CCB815E99EBB4DA7 (SpeechEvents_tB51C31627EF79AB5734270C1558A6C6F67A5040E* __this, const RuntimeMethod* method) 
{
	{
		// public UnityEvent OnStartListening => _onStartListening;
		UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* L_0 = __this->____onStartListening_24;
		return L_0;
	}
}
// UnityEngine.Events.UnityEvent Meta.WitAi.Events.SpeechEvents::get_OnMicStartedListening()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* SpeechEvents_get_OnMicStartedListening_m9F0F3CC8C4FECFEE2457FF9793F13F45D471ECBE (SpeechEvents_tB51C31627EF79AB5734270C1558A6C6F67A5040E* __this, const RuntimeMethod* method) 
{
	{
		// public UnityEvent OnMicStartedListening => OnStartListening;
		UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* L_0;
		L_0 = SpeechEvents_get_OnStartListening_m1AE66AF56C8A79496E386C26CCB815E99EBB4DA7_inline(__this, NULL);
		return L_0;
	}
}
// UnityEngine.Events.UnityEvent Meta.WitAi.Events.SpeechEvents::get_OnStoppedListening()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* SpeechEvents_get_OnStoppedListening_mB59F3490B5F895B311DA82A0288DC2AEACF87586 (SpeechEvents_tB51C31627EF79AB5734270C1558A6C6F67A5040E* __this, const RuntimeMethod* method) 
{
	{
		// public UnityEvent OnStoppedListening => _onStoppedListening;
		UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* L_0 = __this->____onStoppedListening_25;
		return L_0;
	}
}
// UnityEngine.Events.UnityEvent Meta.WitAi.Events.SpeechEvents::get_OnMicStoppedListening()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* SpeechEvents_get_OnMicStoppedListening_mF7358235DECD387524DE61DFAE18877786B409B6 (SpeechEvents_tB51C31627EF79AB5734270C1558A6C6F67A5040E* __this, const RuntimeMethod* method) 
{
	{
		// public UnityEvent OnMicStoppedListening => OnStoppedListening;
		UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* L_0;
		L_0 = SpeechEvents_get_OnStoppedListening_mB59F3490B5F895B311DA82A0288DC2AEACF87586_inline(__this, NULL);
		return L_0;
	}
}
// Meta.WitAi.Events.WitMicLevelChangedEvent Meta.WitAi.Events.SpeechEvents::get_OnMicLevelChanged()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR WitMicLevelChangedEvent_tA9B2889CB33EAA09656739F26AA70252ED15DEF7* SpeechEvents_get_OnMicLevelChanged_mF6437F7C9C8E60935C01C02C57CDFE62741F8CE8 (SpeechEvents_tB51C31627EF79AB5734270C1558A6C6F67A5040E* __this, const RuntimeMethod* method) 
{
	{
		// public WitMicLevelChangedEvent OnMicLevelChanged => _onMicLevelChanged;
		WitMicLevelChangedEvent_tA9B2889CB33EAA09656739F26AA70252ED15DEF7* L_0 = __this->____onMicLevelChanged_26;
		return L_0;
	}
}
// Meta.WitAi.Events.WitMicLevelChangedEvent Meta.WitAi.Events.SpeechEvents::get_OnMicAudioLevelChanged()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR WitMicLevelChangedEvent_tA9B2889CB33EAA09656739F26AA70252ED15DEF7* SpeechEvents_get_OnMicAudioLevelChanged_mA1FC9B3A022781175EF59FEE19B912C3A691818F (SpeechEvents_tB51C31627EF79AB5734270C1558A6C6F67A5040E* __this, const RuntimeMethod* method) 
{
	{
		// public WitMicLevelChangedEvent OnMicAudioLevelChanged => OnMicLevelChanged;
		WitMicLevelChangedEvent_tA9B2889CB33EAA09656739F26AA70252ED15DEF7* L_0;
		L_0 = SpeechEvents_get_OnMicLevelChanged_mF6437F7C9C8E60935C01C02C57CDFE62741F8CE8_inline(__this, NULL);
		return L_0;
	}
}
// Meta.WitAi.Events.WitTranscriptionEvent Meta.WitAi.Events.SpeechEvents::get_OnPartialTranscription()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR WitTranscriptionEvent_t51292FC7EB7BAF38C2EC6B57D87724C1BEB3C739* SpeechEvents_get_OnPartialTranscription_m0BA26BCC13243D100712E20D4A6AE8DD56C64B18 (SpeechEvents_tB51C31627EF79AB5734270C1558A6C6F67A5040E* __this, const RuntimeMethod* method) 
{
	{
		// public WitTranscriptionEvent OnPartialTranscription => _onPartialTranscription;
		WitTranscriptionEvent_t51292FC7EB7BAF38C2EC6B57D87724C1BEB3C739* L_0 = __this->____onPartialTranscription_28;
		return L_0;
	}
}
// Meta.WitAi.Events.WitTranscriptionEvent Meta.WitAi.Events.SpeechEvents::get_onPartialTranscription()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR WitTranscriptionEvent_t51292FC7EB7BAF38C2EC6B57D87724C1BEB3C739* SpeechEvents_get_onPartialTranscription_mFD1A02978E164C4B3288473662F5BFC58E6D03B6 (SpeechEvents_tB51C31627EF79AB5734270C1558A6C6F67A5040E* __this, const RuntimeMethod* method) 
{
	{
		// public WitTranscriptionEvent onPartialTranscription => OnPartialTranscription;
		WitTranscriptionEvent_t51292FC7EB7BAF38C2EC6B57D87724C1BEB3C739* L_0;
		L_0 = SpeechEvents_get_OnPartialTranscription_m0BA26BCC13243D100712E20D4A6AE8DD56C64B18_inline(__this, NULL);
		return L_0;
	}
}
// Meta.WitAi.Events.WitTranscriptionEvent Meta.WitAi.Events.SpeechEvents::get_OnFullTranscription()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR WitTranscriptionEvent_t51292FC7EB7BAF38C2EC6B57D87724C1BEB3C739* SpeechEvents_get_OnFullTranscription_m72C7935CDD9EBD2FCAC9C0ECADC2830417512065 (SpeechEvents_tB51C31627EF79AB5734270C1558A6C6F67A5040E* __this, const RuntimeMethod* method) 
{
	{
		// public WitTranscriptionEvent OnFullTranscription => _onFullTranscription;
		WitTranscriptionEvent_t51292FC7EB7BAF38C2EC6B57D87724C1BEB3C739* L_0 = __this->____onFullTranscription_29;
		return L_0;
	}
}
// Meta.WitAi.Events.WitTranscriptionEvent Meta.WitAi.Events.SpeechEvents::get_onFullTranscription()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR WitTranscriptionEvent_t51292FC7EB7BAF38C2EC6B57D87724C1BEB3C739* SpeechEvents_get_onFullTranscription_m9C79A28C8A63407AA223802A301593537104B188 (SpeechEvents_tB51C31627EF79AB5734270C1558A6C6F67A5040E* __this, const RuntimeMethod* method) 
{
	{
		// public WitTranscriptionEvent onFullTranscription => OnFullTranscription;
		WitTranscriptionEvent_t51292FC7EB7BAF38C2EC6B57D87724C1BEB3C739* L_0;
		L_0 = SpeechEvents_get_OnFullTranscription_m72C7935CDD9EBD2FCAC9C0ECADC2830417512065_inline(__this, NULL);
		return L_0;
	}
}
// System.Void Meta.WitAi.Events.SpeechEvents::AddListener(Meta.WitAi.Events.SpeechEvents)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpeechEvents_AddListener_m3D461943EAFCA1156B96614A9C0BFFAACDCDDBF3 (SpeechEvents_tB51C31627EF79AB5734270C1558A6C6F67A5040E* __this, SpeechEvents_tB51C31627EF79AB5734270C1558A6C6F67A5040E* ___listener0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashSet_1_Add_mC05372B8C874BE5085EAB83035C6322182F7D22C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashSet_1_Contains_m1D204E061BEE1042445415F9D2087AABDB71A44E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashSet_1_get_Count_m8E6409CC473C5A6B187F0675A1D5A25514852361_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	int32_t G_B3_0 = 0;
	{
		// if (listener == null || _listeners.Contains(listener))
		SpeechEvents_tB51C31627EF79AB5734270C1558A6C6F67A5040E* L_0 = ___listener0;
		if (!L_0)
		{
			goto IL_0012;
		}
	}
	{
		HashSet_1_tA2DD82C656859A8F953FE80E0E7CFAA242AFFEB7* L_1 = __this->____listeners_30;
		SpeechEvents_tB51C31627EF79AB5734270C1558A6C6F67A5040E* L_2 = ___listener0;
		NullCheck(L_1);
		bool L_3;
		L_3 = HashSet_1_Contains_m1D204E061BEE1042445415F9D2087AABDB71A44E(L_1, L_2, HashSet_1_Contains_m1D204E061BEE1042445415F9D2087AABDB71A44E_RuntimeMethod_var);
		G_B3_0 = ((int32_t)(L_3));
		goto IL_0013;
	}

IL_0012:
	{
		G_B3_0 = 1;
	}

IL_0013:
	{
		V_0 = (bool)G_B3_0;
		bool L_4 = V_0;
		if (!L_4)
		{
			goto IL_001a;
		}
	}
	{
		// return;
		goto IL_0043;
	}

IL_001a:
	{
		// if (_listeners.Count == 0)
		HashSet_1_tA2DD82C656859A8F953FE80E0E7CFAA242AFFEB7* L_5 = __this->____listeners_30;
		NullCheck(L_5);
		int32_t L_6;
		L_6 = HashSet_1_get_Count_m8E6409CC473C5A6B187F0675A1D5A25514852361_inline(L_5, HashSet_1_get_Count_m8E6409CC473C5A6B187F0675A1D5A25514852361_RuntimeMethod_var);
		V_1 = (bool)((((int32_t)L_6) == ((int32_t)0))? 1 : 0);
		bool L_7 = V_1;
		if (!L_7)
		{
			goto IL_0036;
		}
	}
	{
		// SetEvents(true);
		VirtualActionInvoker1< bool >::Invoke(9 /* System.Void Meta.WitAi.Events.SpeechEvents::SetEvents(System.Boolean) */, __this, (bool)1);
	}

IL_0036:
	{
		// _listeners.Add(listener);
		HashSet_1_tA2DD82C656859A8F953FE80E0E7CFAA242AFFEB7* L_8 = __this->____listeners_30;
		SpeechEvents_tB51C31627EF79AB5734270C1558A6C6F67A5040E* L_9 = ___listener0;
		NullCheck(L_8);
		bool L_10;
		L_10 = HashSet_1_Add_mC05372B8C874BE5085EAB83035C6322182F7D22C(L_8, L_9, HashSet_1_Add_mC05372B8C874BE5085EAB83035C6322182F7D22C_RuntimeMethod_var);
	}

IL_0043:
	{
		// }
		return;
	}
}
// System.Void Meta.WitAi.Events.SpeechEvents::RemoveListener(Meta.WitAi.Events.SpeechEvents)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpeechEvents_RemoveListener_mA1338474ECF961E4D54BE985326BCEC7A4A379E2 (SpeechEvents_tB51C31627EF79AB5734270C1558A6C6F67A5040E* __this, SpeechEvents_tB51C31627EF79AB5734270C1558A6C6F67A5040E* ___listener0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashSet_1_Contains_m1D204E061BEE1042445415F9D2087AABDB71A44E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashSet_1_Remove_mE111AC9DE1AE977DAC5601C225D67650A740CE3F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashSet_1_get_Count_m8E6409CC473C5A6B187F0675A1D5A25514852361_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	int32_t G_B3_0 = 0;
	{
		// if (listener == null || !_listeners.Contains(listener))
		SpeechEvents_tB51C31627EF79AB5734270C1558A6C6F67A5040E* L_0 = ___listener0;
		if (!L_0)
		{
			goto IL_0015;
		}
	}
	{
		HashSet_1_tA2DD82C656859A8F953FE80E0E7CFAA242AFFEB7* L_1 = __this->____listeners_30;
		SpeechEvents_tB51C31627EF79AB5734270C1558A6C6F67A5040E* L_2 = ___listener0;
		NullCheck(L_1);
		bool L_3;
		L_3 = HashSet_1_Contains_m1D204E061BEE1042445415F9D2087AABDB71A44E(L_1, L_2, HashSet_1_Contains_m1D204E061BEE1042445415F9D2087AABDB71A44E_RuntimeMethod_var);
		G_B3_0 = ((((int32_t)L_3) == ((int32_t)0))? 1 : 0);
		goto IL_0016;
	}

IL_0015:
	{
		G_B3_0 = 1;
	}

IL_0016:
	{
		V_0 = (bool)G_B3_0;
		bool L_4 = V_0;
		if (!L_4)
		{
			goto IL_001d;
		}
	}
	{
		// return;
		goto IL_0046;
	}

IL_001d:
	{
		// _listeners.Remove(listener);
		HashSet_1_tA2DD82C656859A8F953FE80E0E7CFAA242AFFEB7* L_5 = __this->____listeners_30;
		SpeechEvents_tB51C31627EF79AB5734270C1558A6C6F67A5040E* L_6 = ___listener0;
		NullCheck(L_5);
		bool L_7;
		L_7 = HashSet_1_Remove_mE111AC9DE1AE977DAC5601C225D67650A740CE3F(L_5, L_6, HashSet_1_Remove_mE111AC9DE1AE977DAC5601C225D67650A740CE3F_RuntimeMethod_var);
		// if (_listeners.Count == 0)
		HashSet_1_tA2DD82C656859A8F953FE80E0E7CFAA242AFFEB7* L_8 = __this->____listeners_30;
		NullCheck(L_8);
		int32_t L_9;
		L_9 = HashSet_1_get_Count_m8E6409CC473C5A6B187F0675A1D5A25514852361_inline(L_8, HashSet_1_get_Count_m8E6409CC473C5A6B187F0675A1D5A25514852361_RuntimeMethod_var);
		V_1 = (bool)((((int32_t)L_9) == ((int32_t)0))? 1 : 0);
		bool L_10 = V_1;
		if (!L_10)
		{
			goto IL_0046;
		}
	}
	{
		// SetEvents(false);
		VirtualActionInvoker1< bool >::Invoke(9 /* System.Void Meta.WitAi.Events.SpeechEvents::SetEvents(System.Boolean) */, __this, (bool)0);
	}

IL_0046:
	{
		// }
		return;
	}
}
// System.Void Meta.WitAi.Events.SpeechEvents::SetEvents(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpeechEvents_SetEvents_m7D6796FD0FDE5D18747A947A1ACE5DAB9D805D56 (SpeechEvents_tB51C31627EF79AB5734270C1558A6C6F67A5040E* __this, bool ___add0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Func_2_t0F30FACC4CABFFD27DDEBE31FB321AA523A06B7D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Func_2_t5DC062A102C3300E4BF548012A747BB3E0A5BA57_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Func_2_tB18F1F7AE9EDB9705E036A284B88C5F3613A7F78_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Func_2_tC95346D56902FBF6D1621BDE4F2039F61F917F52_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Func_2_tCD773FD80F11C1399B4604D1EB19BB7436356388_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Func_2_tD24D6BC507F5AA415E63472DF1247E49582D7A1F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Func_2_tD49A9546076918B07593787D23EE9245E84C1AD0_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Func_2_tDCA29CF738B0C5F51018D3D7FCBCC1BCF5EF829A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SpeechEvents_SetEvent_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m8B9866152A783B00DC62BD6760C64DEF55F7D5CA_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SpeechEvents_SetEvent_TisString_t_TisString_t_mE93502BAC82570020D936C0C5C0AB2FEA7FA0BB8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SpeechEvents_SetEvent_TisString_t_m62BAB2021E0676DA41C595BCEEE22C14009D2468_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SpeechEvents_SetEvent_TisVoiceServiceRequest_tCF844F597C059D6A354311EB2BD5644AE5E8E536_m97FDD4B3999DF7CAB7E920069C5AF415D1D3183A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SpeechEvents_SetEvent_TisWitRequestOptions_tB2E8B103538F7E42F0568C6F62F2158FA45EF483_m3C28183D42CD9286A3EBFE3500D824D42B2FA446_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SpeechEvents_SetEvent_TisWitRequest_t6DE282D281BDA3D5726C9775385BDFBA1EC6A900_m7F263022B7781050B2975F7F37E9EE50A69399E6_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SpeechEvents_SetEvent_TisWitResponseNode_t1BFF810F15B21416F5F6D0A1CAAF03CEF942038C_m7B829436CAFBA1E4D8B3D78070C252D66F28CA78_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_U3CSetEventsU3Eb__85_0_mE80983963F85132C35627F544036531159937895_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_U3CSetEventsU3Eb__85_10_mEDEB01ADA5566EF24329112EAB0DBCC5BD156D47_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_U3CSetEventsU3Eb__85_11_m9F2402F2C780070190CA335621300830A1F4446B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_U3CSetEventsU3Eb__85_12_m40A405001192D5C68410C2B6F078F44503BB8402_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_U3CSetEventsU3Eb__85_13_m7430957ADFDCDD9398FC7B9B95B6D44C9F2E354F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_U3CSetEventsU3Eb__85_14_m6346B857CF7F52407244AD37D0C6B03EE700B920_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_U3CSetEventsU3Eb__85_15_mE3A7552CEF4F8CC5747A954859616B9D8F8E80AD_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_U3CSetEventsU3Eb__85_16_m1AF991967BAC2CDA43D3F95662145920F95B51A5_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_U3CSetEventsU3Eb__85_17_m724F7BBBA1564846C5B108FEEC4D6A3A58669846_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_U3CSetEventsU3Eb__85_18_m15931B8D380FE72BE3D4994FD031D227FF7A2758_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_U3CSetEventsU3Eb__85_19_mAA82BED4FC768404E40CFE3021E56C01F813852A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_U3CSetEventsU3Eb__85_1_mA1BF469246E31D5B2E766610E42E3DA33C99D728_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_U3CSetEventsU3Eb__85_20_m7E66AA19F9070096AF85B7767CC259A88C84365F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_U3CSetEventsU3Eb__85_2_mDE3BD135D4B6D5CC5E455FCD04C460589CE15FCC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_U3CSetEventsU3Eb__85_3_m8B3DED7136BEF068416ED12BB6BB63212B26B730_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_U3CSetEventsU3Eb__85_4_mE2B15E1813A504A4095BE31A055E292A4F6240E2_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_U3CSetEventsU3Eb__85_5_m74AA3B63EBF41D18CFA5CE567B292C077698C347_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_U3CSetEventsU3Eb__85_6_mD8D8A9106F6C797E03F17662987CA45EFC563302_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_U3CSetEventsU3Eb__85_7_mB9D79A47CB3EBE7FE9A74A7C85C821F8F4317995_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_U3CSetEventsU3Eb__85_8_mA26D5C66AA9DD9A852308E9771144E717E860EA7_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_U3CSetEventsU3Eb__85_9_m5683A88049F6448B180A7220B0AEAC110C63E75B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_t7AEAA449DBB19647334E677C7ED6C2EDDC69BB9B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Func_2_tCD773FD80F11C1399B4604D1EB19BB7436356388* G_B2_0 = NULL;
	SpeechEvents_tB51C31627EF79AB5734270C1558A6C6F67A5040E* G_B2_1 = NULL;
	Func_2_tCD773FD80F11C1399B4604D1EB19BB7436356388* G_B1_0 = NULL;
	SpeechEvents_tB51C31627EF79AB5734270C1558A6C6F67A5040E* G_B1_1 = NULL;
	Func_2_tD24D6BC507F5AA415E63472DF1247E49582D7A1F* G_B4_0 = NULL;
	SpeechEvents_tB51C31627EF79AB5734270C1558A6C6F67A5040E* G_B4_1 = NULL;
	Func_2_tD24D6BC507F5AA415E63472DF1247E49582D7A1F* G_B3_0 = NULL;
	SpeechEvents_tB51C31627EF79AB5734270C1558A6C6F67A5040E* G_B3_1 = NULL;
	Func_2_tC95346D56902FBF6D1621BDE4F2039F61F917F52* G_B6_0 = NULL;
	SpeechEvents_tB51C31627EF79AB5734270C1558A6C6F67A5040E* G_B6_1 = NULL;
	Func_2_tC95346D56902FBF6D1621BDE4F2039F61F917F52* G_B5_0 = NULL;
	SpeechEvents_tB51C31627EF79AB5734270C1558A6C6F67A5040E* G_B5_1 = NULL;
	Func_2_tD24D6BC507F5AA415E63472DF1247E49582D7A1F* G_B8_0 = NULL;
	SpeechEvents_tB51C31627EF79AB5734270C1558A6C6F67A5040E* G_B8_1 = NULL;
	Func_2_tD24D6BC507F5AA415E63472DF1247E49582D7A1F* G_B7_0 = NULL;
	SpeechEvents_tB51C31627EF79AB5734270C1558A6C6F67A5040E* G_B7_1 = NULL;
	Func_2_tDCA29CF738B0C5F51018D3D7FCBCC1BCF5EF829A* G_B10_0 = NULL;
	SpeechEvents_tB51C31627EF79AB5734270C1558A6C6F67A5040E* G_B10_1 = NULL;
	Func_2_tDCA29CF738B0C5F51018D3D7FCBCC1BCF5EF829A* G_B9_0 = NULL;
	SpeechEvents_tB51C31627EF79AB5734270C1558A6C6F67A5040E* G_B9_1 = NULL;
	Func_2_tDCA29CF738B0C5F51018D3D7FCBCC1BCF5EF829A* G_B12_0 = NULL;
	SpeechEvents_tB51C31627EF79AB5734270C1558A6C6F67A5040E* G_B12_1 = NULL;
	Func_2_tDCA29CF738B0C5F51018D3D7FCBCC1BCF5EF829A* G_B11_0 = NULL;
	SpeechEvents_tB51C31627EF79AB5734270C1558A6C6F67A5040E* G_B11_1 = NULL;
	Func_2_tDCA29CF738B0C5F51018D3D7FCBCC1BCF5EF829A* G_B14_0 = NULL;
	SpeechEvents_tB51C31627EF79AB5734270C1558A6C6F67A5040E* G_B14_1 = NULL;
	Func_2_tDCA29CF738B0C5F51018D3D7FCBCC1BCF5EF829A* G_B13_0 = NULL;
	SpeechEvents_tB51C31627EF79AB5734270C1558A6C6F67A5040E* G_B13_1 = NULL;
	Func_2_tDCA29CF738B0C5F51018D3D7FCBCC1BCF5EF829A* G_B16_0 = NULL;
	SpeechEvents_tB51C31627EF79AB5734270C1558A6C6F67A5040E* G_B16_1 = NULL;
	Func_2_tDCA29CF738B0C5F51018D3D7FCBCC1BCF5EF829A* G_B15_0 = NULL;
	SpeechEvents_tB51C31627EF79AB5734270C1558A6C6F67A5040E* G_B15_1 = NULL;
	Func_2_tDCA29CF738B0C5F51018D3D7FCBCC1BCF5EF829A* G_B18_0 = NULL;
	SpeechEvents_tB51C31627EF79AB5734270C1558A6C6F67A5040E* G_B18_1 = NULL;
	Func_2_tDCA29CF738B0C5F51018D3D7FCBCC1BCF5EF829A* G_B17_0 = NULL;
	SpeechEvents_tB51C31627EF79AB5734270C1558A6C6F67A5040E* G_B17_1 = NULL;
	Func_2_tDCA29CF738B0C5F51018D3D7FCBCC1BCF5EF829A* G_B20_0 = NULL;
	SpeechEvents_tB51C31627EF79AB5734270C1558A6C6F67A5040E* G_B20_1 = NULL;
	Func_2_tDCA29CF738B0C5F51018D3D7FCBCC1BCF5EF829A* G_B19_0 = NULL;
	SpeechEvents_tB51C31627EF79AB5734270C1558A6C6F67A5040E* G_B19_1 = NULL;
	Func_2_tD49A9546076918B07593787D23EE9245E84C1AD0* G_B22_0 = NULL;
	SpeechEvents_tB51C31627EF79AB5734270C1558A6C6F67A5040E* G_B22_1 = NULL;
	Func_2_tD49A9546076918B07593787D23EE9245E84C1AD0* G_B21_0 = NULL;
	SpeechEvents_tB51C31627EF79AB5734270C1558A6C6F67A5040E* G_B21_1 = NULL;
	Func_2_t5DC062A102C3300E4BF548012A747BB3E0A5BA57* G_B24_0 = NULL;
	SpeechEvents_tB51C31627EF79AB5734270C1558A6C6F67A5040E* G_B24_1 = NULL;
	Func_2_t5DC062A102C3300E4BF548012A747BB3E0A5BA57* G_B23_0 = NULL;
	SpeechEvents_tB51C31627EF79AB5734270C1558A6C6F67A5040E* G_B23_1 = NULL;
	Func_2_t5DC062A102C3300E4BF548012A747BB3E0A5BA57* G_B26_0 = NULL;
	SpeechEvents_tB51C31627EF79AB5734270C1558A6C6F67A5040E* G_B26_1 = NULL;
	Func_2_t5DC062A102C3300E4BF548012A747BB3E0A5BA57* G_B25_0 = NULL;
	SpeechEvents_tB51C31627EF79AB5734270C1558A6C6F67A5040E* G_B25_1 = NULL;
	Func_2_tB18F1F7AE9EDB9705E036A284B88C5F3613A7F78* G_B28_0 = NULL;
	SpeechEvents_tB51C31627EF79AB5734270C1558A6C6F67A5040E* G_B28_1 = NULL;
	Func_2_tB18F1F7AE9EDB9705E036A284B88C5F3613A7F78* G_B27_0 = NULL;
	SpeechEvents_tB51C31627EF79AB5734270C1558A6C6F67A5040E* G_B27_1 = NULL;
	Func_2_tDCA29CF738B0C5F51018D3D7FCBCC1BCF5EF829A* G_B30_0 = NULL;
	SpeechEvents_tB51C31627EF79AB5734270C1558A6C6F67A5040E* G_B30_1 = NULL;
	Func_2_tDCA29CF738B0C5F51018D3D7FCBCC1BCF5EF829A* G_B29_0 = NULL;
	SpeechEvents_tB51C31627EF79AB5734270C1558A6C6F67A5040E* G_B29_1 = NULL;
	Func_2_tD24D6BC507F5AA415E63472DF1247E49582D7A1F* G_B32_0 = NULL;
	SpeechEvents_tB51C31627EF79AB5734270C1558A6C6F67A5040E* G_B32_1 = NULL;
	Func_2_tD24D6BC507F5AA415E63472DF1247E49582D7A1F* G_B31_0 = NULL;
	SpeechEvents_tB51C31627EF79AB5734270C1558A6C6F67A5040E* G_B31_1 = NULL;
	Func_2_tDCA29CF738B0C5F51018D3D7FCBCC1BCF5EF829A* G_B34_0 = NULL;
	SpeechEvents_tB51C31627EF79AB5734270C1558A6C6F67A5040E* G_B34_1 = NULL;
	Func_2_tDCA29CF738B0C5F51018D3D7FCBCC1BCF5EF829A* G_B33_0 = NULL;
	SpeechEvents_tB51C31627EF79AB5734270C1558A6C6F67A5040E* G_B33_1 = NULL;
	Func_2_tDCA29CF738B0C5F51018D3D7FCBCC1BCF5EF829A* G_B36_0 = NULL;
	SpeechEvents_tB51C31627EF79AB5734270C1558A6C6F67A5040E* G_B36_1 = NULL;
	Func_2_tDCA29CF738B0C5F51018D3D7FCBCC1BCF5EF829A* G_B35_0 = NULL;
	SpeechEvents_tB51C31627EF79AB5734270C1558A6C6F67A5040E* G_B35_1 = NULL;
	Func_2_t0F30FACC4CABFFD27DDEBE31FB321AA523A06B7D* G_B38_0 = NULL;
	SpeechEvents_tB51C31627EF79AB5734270C1558A6C6F67A5040E* G_B38_1 = NULL;
	Func_2_t0F30FACC4CABFFD27DDEBE31FB321AA523A06B7D* G_B37_0 = NULL;
	SpeechEvents_tB51C31627EF79AB5734270C1558A6C6F67A5040E* G_B37_1 = NULL;
	Func_2_tD49A9546076918B07593787D23EE9245E84C1AD0* G_B40_0 = NULL;
	SpeechEvents_tB51C31627EF79AB5734270C1558A6C6F67A5040E* G_B40_1 = NULL;
	Func_2_tD49A9546076918B07593787D23EE9245E84C1AD0* G_B39_0 = NULL;
	SpeechEvents_tB51C31627EF79AB5734270C1558A6C6F67A5040E* G_B39_1 = NULL;
	Func_2_tD49A9546076918B07593787D23EE9245E84C1AD0* G_B42_0 = NULL;
	SpeechEvents_tB51C31627EF79AB5734270C1558A6C6F67A5040E* G_B42_1 = NULL;
	Func_2_tD49A9546076918B07593787D23EE9245E84C1AD0* G_B41_0 = NULL;
	SpeechEvents_tB51C31627EF79AB5734270C1558A6C6F67A5040E* G_B41_1 = NULL;
	{
		// SetEvent((events) => events?._onRequestOptionSetup, add);
		il2cpp_codegen_runtime_class_init_inline(U3CU3Ec_t7AEAA449DBB19647334E677C7ED6C2EDDC69BB9B_il2cpp_TypeInfo_var);
		Func_2_tCD773FD80F11C1399B4604D1EB19BB7436356388* L_0 = ((U3CU3Ec_t7AEAA449DBB19647334E677C7ED6C2EDDC69BB9B_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t7AEAA449DBB19647334E677C7ED6C2EDDC69BB9B_il2cpp_TypeInfo_var))->___U3CU3E9__85_0_1;
		Func_2_tCD773FD80F11C1399B4604D1EB19BB7436356388* L_1 = L_0;
		G_B1_0 = L_1;
		G_B1_1 = __this;
		if (L_1)
		{
			G_B2_0 = L_1;
			G_B2_1 = __this;
			goto IL_0021;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(U3CU3Ec_t7AEAA449DBB19647334E677C7ED6C2EDDC69BB9B_il2cpp_TypeInfo_var);
		U3CU3Ec_t7AEAA449DBB19647334E677C7ED6C2EDDC69BB9B* L_2 = ((U3CU3Ec_t7AEAA449DBB19647334E677C7ED6C2EDDC69BB9B_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t7AEAA449DBB19647334E677C7ED6C2EDDC69BB9B_il2cpp_TypeInfo_var))->___U3CU3E9_0;
		Func_2_tCD773FD80F11C1399B4604D1EB19BB7436356388* L_3 = (Func_2_tCD773FD80F11C1399B4604D1EB19BB7436356388*)il2cpp_codegen_object_new(Func_2_tCD773FD80F11C1399B4604D1EB19BB7436356388_il2cpp_TypeInfo_var);
		NullCheck(L_3);
		Func_2__ctor_m416381728510FC887538BE765C618E827ED55CB2(L_3, L_2, (intptr_t)((void*)U3CU3Ec_U3CSetEventsU3Eb__85_0_mE80983963F85132C35627F544036531159937895_RuntimeMethod_var), NULL);
		Func_2_tCD773FD80F11C1399B4604D1EB19BB7436356388* L_4 = L_3;
		((U3CU3Ec_t7AEAA449DBB19647334E677C7ED6C2EDDC69BB9B_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t7AEAA449DBB19647334E677C7ED6C2EDDC69BB9B_il2cpp_TypeInfo_var))->___U3CU3E9__85_0_1 = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&((U3CU3Ec_t7AEAA449DBB19647334E677C7ED6C2EDDC69BB9B_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t7AEAA449DBB19647334E677C7ED6C2EDDC69BB9B_il2cpp_TypeInfo_var))->___U3CU3E9__85_0_1), (void*)L_4);
		G_B2_0 = L_4;
		G_B2_1 = G_B1_1;
	}

IL_0021:
	{
		bool L_5 = ___add0;
		NullCheck(G_B2_1);
		SpeechEvents_SetEvent_TisWitRequestOptions_tB2E8B103538F7E42F0568C6F62F2158FA45EF483_m3C28183D42CD9286A3EBFE3500D824D42B2FA446(G_B2_1, G_B2_0, L_5, SpeechEvents_SetEvent_TisWitRequestOptions_tB2E8B103538F7E42F0568C6F62F2158FA45EF483_m3C28183D42CD9286A3EBFE3500D824D42B2FA446_RuntimeMethod_var);
		// SetEvent((events) => events?._onRequestInitialized, add);
		il2cpp_codegen_runtime_class_init_inline(U3CU3Ec_t7AEAA449DBB19647334E677C7ED6C2EDDC69BB9B_il2cpp_TypeInfo_var);
		Func_2_tD24D6BC507F5AA415E63472DF1247E49582D7A1F* L_6 = ((U3CU3Ec_t7AEAA449DBB19647334E677C7ED6C2EDDC69BB9B_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t7AEAA449DBB19647334E677C7ED6C2EDDC69BB9B_il2cpp_TypeInfo_var))->___U3CU3E9__85_1_2;
		Func_2_tD24D6BC507F5AA415E63472DF1247E49582D7A1F* L_7 = L_6;
		G_B3_0 = L_7;
		G_B3_1 = __this;
		if (L_7)
		{
			G_B4_0 = L_7;
			G_B4_1 = __this;
			goto IL_0048;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(U3CU3Ec_t7AEAA449DBB19647334E677C7ED6C2EDDC69BB9B_il2cpp_TypeInfo_var);
		U3CU3Ec_t7AEAA449DBB19647334E677C7ED6C2EDDC69BB9B* L_8 = ((U3CU3Ec_t7AEAA449DBB19647334E677C7ED6C2EDDC69BB9B_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t7AEAA449DBB19647334E677C7ED6C2EDDC69BB9B_il2cpp_TypeInfo_var))->___U3CU3E9_0;
		Func_2_tD24D6BC507F5AA415E63472DF1247E49582D7A1F* L_9 = (Func_2_tD24D6BC507F5AA415E63472DF1247E49582D7A1F*)il2cpp_codegen_object_new(Func_2_tD24D6BC507F5AA415E63472DF1247E49582D7A1F_il2cpp_TypeInfo_var);
		NullCheck(L_9);
		Func_2__ctor_m5B952D58DE017AA1FBE63A1C7271C76889C31C33(L_9, L_8, (intptr_t)((void*)U3CU3Ec_U3CSetEventsU3Eb__85_1_mA1BF469246E31D5B2E766610E42E3DA33C99D728_RuntimeMethod_var), NULL);
		Func_2_tD24D6BC507F5AA415E63472DF1247E49582D7A1F* L_10 = L_9;
		((U3CU3Ec_t7AEAA449DBB19647334E677C7ED6C2EDDC69BB9B_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t7AEAA449DBB19647334E677C7ED6C2EDDC69BB9B_il2cpp_TypeInfo_var))->___U3CU3E9__85_1_2 = L_10;
		Il2CppCodeGenWriteBarrier((void**)(&((U3CU3Ec_t7AEAA449DBB19647334E677C7ED6C2EDDC69BB9B_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t7AEAA449DBB19647334E677C7ED6C2EDDC69BB9B_il2cpp_TypeInfo_var))->___U3CU3E9__85_1_2), (void*)L_10);
		G_B4_0 = L_10;
		G_B4_1 = G_B3_1;
	}

IL_0048:
	{
		bool L_11 = ___add0;
		NullCheck(G_B4_1);
		SpeechEvents_SetEvent_TisVoiceServiceRequest_tCF844F597C059D6A354311EB2BD5644AE5E8E536_m97FDD4B3999DF7CAB7E920069C5AF415D1D3183A(G_B4_1, G_B4_0, L_11, SpeechEvents_SetEvent_TisVoiceServiceRequest_tCF844F597C059D6A354311EB2BD5644AE5E8E536_m97FDD4B3999DF7CAB7E920069C5AF415D1D3183A_RuntimeMethod_var);
		// SetEvent((events) => events?._onRequestCreated, add);
		il2cpp_codegen_runtime_class_init_inline(U3CU3Ec_t7AEAA449DBB19647334E677C7ED6C2EDDC69BB9B_il2cpp_TypeInfo_var);
		Func_2_tC95346D56902FBF6D1621BDE4F2039F61F917F52* L_12 = ((U3CU3Ec_t7AEAA449DBB19647334E677C7ED6C2EDDC69BB9B_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t7AEAA449DBB19647334E677C7ED6C2EDDC69BB9B_il2cpp_TypeInfo_var))->___U3CU3E9__85_2_3;
		Func_2_tC95346D56902FBF6D1621BDE4F2039F61F917F52* L_13 = L_12;
		G_B5_0 = L_13;
		G_B5_1 = __this;
		if (L_13)
		{
			G_B6_0 = L_13;
			G_B6_1 = __this;
			goto IL_006f;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(U3CU3Ec_t7AEAA449DBB19647334E677C7ED6C2EDDC69BB9B_il2cpp_TypeInfo_var);
		U3CU3Ec_t7AEAA449DBB19647334E677C7ED6C2EDDC69BB9B* L_14 = ((U3CU3Ec_t7AEAA449DBB19647334E677C7ED6C2EDDC69BB9B_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t7AEAA449DBB19647334E677C7ED6C2EDDC69BB9B_il2cpp_TypeInfo_var))->___U3CU3E9_0;
		Func_2_tC95346D56902FBF6D1621BDE4F2039F61F917F52* L_15 = (Func_2_tC95346D56902FBF6D1621BDE4F2039F61F917F52*)il2cpp_codegen_object_new(Func_2_tC95346D56902FBF6D1621BDE4F2039F61F917F52_il2cpp_TypeInfo_var);
		NullCheck(L_15);
		Func_2__ctor_mBF59A8126BB9833489BFFB78C2465A51603F5D95(L_15, L_14, (intptr_t)((void*)U3CU3Ec_U3CSetEventsU3Eb__85_2_mDE3BD135D4B6D5CC5E455FCD04C460589CE15FCC_RuntimeMethod_var), NULL);
		Func_2_tC95346D56902FBF6D1621BDE4F2039F61F917F52* L_16 = L_15;
		((U3CU3Ec_t7AEAA449DBB19647334E677C7ED6C2EDDC69BB9B_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t7AEAA449DBB19647334E677C7ED6C2EDDC69BB9B_il2cpp_TypeInfo_var))->___U3CU3E9__85_2_3 = L_16;
		Il2CppCodeGenWriteBarrier((void**)(&((U3CU3Ec_t7AEAA449DBB19647334E677C7ED6C2EDDC69BB9B_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t7AEAA449DBB19647334E677C7ED6C2EDDC69BB9B_il2cpp_TypeInfo_var))->___U3CU3E9__85_2_3), (void*)L_16);
		G_B6_0 = L_16;
		G_B6_1 = G_B5_1;
	}

IL_006f:
	{
		bool L_17 = ___add0;
		NullCheck(G_B6_1);
		SpeechEvents_SetEvent_TisWitRequest_t6DE282D281BDA3D5726C9775385BDFBA1EC6A900_m7F263022B7781050B2975F7F37E9EE50A69399E6(G_B6_1, G_B6_0, L_17, SpeechEvents_SetEvent_TisWitRequest_t6DE282D281BDA3D5726C9775385BDFBA1EC6A900_m7F263022B7781050B2975F7F37E9EE50A69399E6_RuntimeMethod_var);
		// SetEvent((events) => events?._onSend, add);
		il2cpp_codegen_runtime_class_init_inline(U3CU3Ec_t7AEAA449DBB19647334E677C7ED6C2EDDC69BB9B_il2cpp_TypeInfo_var);
		Func_2_tD24D6BC507F5AA415E63472DF1247E49582D7A1F* L_18 = ((U3CU3Ec_t7AEAA449DBB19647334E677C7ED6C2EDDC69BB9B_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t7AEAA449DBB19647334E677C7ED6C2EDDC69BB9B_il2cpp_TypeInfo_var))->___U3CU3E9__85_3_4;
		Func_2_tD24D6BC507F5AA415E63472DF1247E49582D7A1F* L_19 = L_18;
		G_B7_0 = L_19;
		G_B7_1 = __this;
		if (L_19)
		{
			G_B8_0 = L_19;
			G_B8_1 = __this;
			goto IL_0096;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(U3CU3Ec_t7AEAA449DBB19647334E677C7ED6C2EDDC69BB9B_il2cpp_TypeInfo_var);
		U3CU3Ec_t7AEAA449DBB19647334E677C7ED6C2EDDC69BB9B* L_20 = ((U3CU3Ec_t7AEAA449DBB19647334E677C7ED6C2EDDC69BB9B_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t7AEAA449DBB19647334E677C7ED6C2EDDC69BB9B_il2cpp_TypeInfo_var))->___U3CU3E9_0;
		Func_2_tD24D6BC507F5AA415E63472DF1247E49582D7A1F* L_21 = (Func_2_tD24D6BC507F5AA415E63472DF1247E49582D7A1F*)il2cpp_codegen_object_new(Func_2_tD24D6BC507F5AA415E63472DF1247E49582D7A1F_il2cpp_TypeInfo_var);
		NullCheck(L_21);
		Func_2__ctor_m5B952D58DE017AA1FBE63A1C7271C76889C31C33(L_21, L_20, (intptr_t)((void*)U3CU3Ec_U3CSetEventsU3Eb__85_3_m8B3DED7136BEF068416ED12BB6BB63212B26B730_RuntimeMethod_var), NULL);
		Func_2_tD24D6BC507F5AA415E63472DF1247E49582D7A1F* L_22 = L_21;
		((U3CU3Ec_t7AEAA449DBB19647334E677C7ED6C2EDDC69BB9B_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t7AEAA449DBB19647334E677C7ED6C2EDDC69BB9B_il2cpp_TypeInfo_var))->___U3CU3E9__85_3_4 = L_22;
		Il2CppCodeGenWriteBarrier((void**)(&((U3CU3Ec_t7AEAA449DBB19647334E677C7ED6C2EDDC69BB9B_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t7AEAA449DBB19647334E677C7ED6C2EDDC69BB9B_il2cpp_TypeInfo_var))->___U3CU3E9__85_3_4), (void*)L_22);
		G_B8_0 = L_22;
		G_B8_1 = G_B7_1;
	}

IL_0096:
	{
		bool L_23 = ___add0;
		NullCheck(G_B8_1);
		SpeechEvents_SetEvent_TisVoiceServiceRequest_tCF844F597C059D6A354311EB2BD5644AE5E8E536_m97FDD4B3999DF7CAB7E920069C5AF415D1D3183A(G_B8_1, G_B8_0, L_23, SpeechEvents_SetEvent_TisVoiceServiceRequest_tCF844F597C059D6A354311EB2BD5644AE5E8E536_m97FDD4B3999DF7CAB7E920069C5AF415D1D3183A_RuntimeMethod_var);
		// SetEvent((events) => events?._onMinimumWakeThresholdHit, add);
		il2cpp_codegen_runtime_class_init_inline(U3CU3Ec_t7AEAA449DBB19647334E677C7ED6C2EDDC69BB9B_il2cpp_TypeInfo_var);
		Func_2_tDCA29CF738B0C5F51018D3D7FCBCC1BCF5EF829A* L_24 = ((U3CU3Ec_t7AEAA449DBB19647334E677C7ED6C2EDDC69BB9B_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t7AEAA449DBB19647334E677C7ED6C2EDDC69BB9B_il2cpp_TypeInfo_var))->___U3CU3E9__85_4_5;
		Func_2_tDCA29CF738B0C5F51018D3D7FCBCC1BCF5EF829A* L_25 = L_24;
		G_B9_0 = L_25;
		G_B9_1 = __this;
		if (L_25)
		{
			G_B10_0 = L_25;
			G_B10_1 = __this;
			goto IL_00bd;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(U3CU3Ec_t7AEAA449DBB19647334E677C7ED6C2EDDC69BB9B_il2cpp_TypeInfo_var);
		U3CU3Ec_t7AEAA449DBB19647334E677C7ED6C2EDDC69BB9B* L_26 = ((U3CU3Ec_t7AEAA449DBB19647334E677C7ED6C2EDDC69BB9B_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t7AEAA449DBB19647334E677C7ED6C2EDDC69BB9B_il2cpp_TypeInfo_var))->___U3CU3E9_0;
		Func_2_tDCA29CF738B0C5F51018D3D7FCBCC1BCF5EF829A* L_27 = (Func_2_tDCA29CF738B0C5F51018D3D7FCBCC1BCF5EF829A*)il2cpp_codegen_object_new(Func_2_tDCA29CF738B0C5F51018D3D7FCBCC1BCF5EF829A_il2cpp_TypeInfo_var);
		NullCheck(L_27);
		Func_2__ctor_m5C67532D986A83BACCBF887F2B50FCD792DBD07A(L_27, L_26, (intptr_t)((void*)U3CU3Ec_U3CSetEventsU3Eb__85_4_mE2B15E1813A504A4095BE31A055E292A4F6240E2_RuntimeMethod_var), NULL);
		Func_2_tDCA29CF738B0C5F51018D3D7FCBCC1BCF5EF829A* L_28 = L_27;
		((U3CU3Ec_t7AEAA449DBB19647334E677C7ED6C2EDDC69BB9B_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t7AEAA449DBB19647334E677C7ED6C2EDDC69BB9B_il2cpp_TypeInfo_var))->___U3CU3E9__85_4_5 = L_28;
		Il2CppCodeGenWriteBarrier((void**)(&((U3CU3Ec_t7AEAA449DBB19647334E677C7ED6C2EDDC69BB9B_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t7AEAA449DBB19647334E677C7ED6C2EDDC69BB9B_il2cpp_TypeInfo_var))->___U3CU3E9__85_4_5), (void*)L_28);
		G_B10_0 = L_28;
		G_B10_1 = G_B9_1;
	}

IL_00bd:
	{
		bool L_29 = ___add0;
		NullCheck(G_B10_1);
		SpeechEvents_SetEvent_m78CAEDF907E5EDD46124E7CA34B00CEC8790903F(G_B10_1, G_B10_0, L_29, NULL);
		// SetEvent((events) => events?._onMicDataSent, add);
		il2cpp_codegen_runtime_class_init_inline(U3CU3Ec_t7AEAA449DBB19647334E677C7ED6C2EDDC69BB9B_il2cpp_TypeInfo_var);
		Func_2_tDCA29CF738B0C5F51018D3D7FCBCC1BCF5EF829A* L_30 = ((U3CU3Ec_t7AEAA449DBB19647334E677C7ED6C2EDDC69BB9B_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t7AEAA449DBB19647334E677C7ED6C2EDDC69BB9B_il2cpp_TypeInfo_var))->___U3CU3E9__85_5_6;
		Func_2_tDCA29CF738B0C5F51018D3D7FCBCC1BCF5EF829A* L_31 = L_30;
		G_B11_0 = L_31;
		G_B11_1 = __this;
		if (L_31)
		{
			G_B12_0 = L_31;
			G_B12_1 = __this;
			goto IL_00e4;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(U3CU3Ec_t7AEAA449DBB19647334E677C7ED6C2EDDC69BB9B_il2cpp_TypeInfo_var);
		U3CU3Ec_t7AEAA449DBB19647334E677C7ED6C2EDDC69BB9B* L_32 = ((U3CU3Ec_t7AEAA449DBB19647334E677C7ED6C2EDDC69BB9B_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t7AEAA449DBB19647334E677C7ED6C2EDDC69BB9B_il2cpp_TypeInfo_var))->___U3CU3E9_0;
		Func_2_tDCA29CF738B0C5F51018D3D7FCBCC1BCF5EF829A* L_33 = (Func_2_tDCA29CF738B0C5F51018D3D7FCBCC1BCF5EF829A*)il2cpp_codegen_object_new(Func_2_tDCA29CF738B0C5F51018D3D7FCBCC1BCF5EF829A_il2cpp_TypeInfo_var);
		NullCheck(L_33);
		Func_2__ctor_m5C67532D986A83BACCBF887F2B50FCD792DBD07A(L_33, L_32, (intptr_t)((void*)U3CU3Ec_U3CSetEventsU3Eb__85_5_m74AA3B63EBF41D18CFA5CE567B292C077698C347_RuntimeMethod_var), NULL);
		Func_2_tDCA29CF738B0C5F51018D3D7FCBCC1BCF5EF829A* L_34 = L_33;
		((U3CU3Ec_t7AEAA449DBB19647334E677C7ED6C2EDDC69BB9B_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t7AEAA449DBB19647334E677C7ED6C2EDDC69BB9B_il2cpp_TypeInfo_var))->___U3CU3E9__85_5_6 = L_34;
		Il2CppCodeGenWriteBarrier((void**)(&((U3CU3Ec_t7AEAA449DBB19647334E677C7ED6C2EDDC69BB9B_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t7AEAA449DBB19647334E677C7ED6C2EDDC69BB9B_il2cpp_TypeInfo_var))->___U3CU3E9__85_5_6), (void*)L_34);
		G_B12_0 = L_34;
		G_B12_1 = G_B11_1;
	}

IL_00e4:
	{
		bool L_35 = ___add0;
		NullCheck(G_B12_1);
		SpeechEvents_SetEvent_m78CAEDF907E5EDD46124E7CA34B00CEC8790903F(G_B12_1, G_B12_0, L_35, NULL);
		// SetEvent((events) => events?._onStoppedListeningDueToDeactivation, add);
		il2cpp_codegen_runtime_class_init_inline(U3CU3Ec_t7AEAA449DBB19647334E677C7ED6C2EDDC69BB9B_il2cpp_TypeInfo_var);
		Func_2_tDCA29CF738B0C5F51018D3D7FCBCC1BCF5EF829A* L_36 = ((U3CU3Ec_t7AEAA449DBB19647334E677C7ED6C2EDDC69BB9B_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t7AEAA449DBB19647334E677C7ED6C2EDDC69BB9B_il2cpp_TypeInfo_var))->___U3CU3E9__85_6_7;
		Func_2_tDCA29CF738B0C5F51018D3D7FCBCC1BCF5EF829A* L_37 = L_36;
		G_B13_0 = L_37;
		G_B13_1 = __this;
		if (L_37)
		{
			G_B14_0 = L_37;
			G_B14_1 = __this;
			goto IL_010b;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(U3CU3Ec_t7AEAA449DBB19647334E677C7ED6C2EDDC69BB9B_il2cpp_TypeInfo_var);
		U3CU3Ec_t7AEAA449DBB19647334E677C7ED6C2EDDC69BB9B* L_38 = ((U3CU3Ec_t7AEAA449DBB19647334E677C7ED6C2EDDC69BB9B_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t7AEAA449DBB19647334E677C7ED6C2EDDC69BB9B_il2cpp_TypeInfo_var))->___U3CU3E9_0;
		Func_2_tDCA29CF738B0C5F51018D3D7FCBCC1BCF5EF829A* L_39 = (Func_2_tDCA29CF738B0C5F51018D3D7FCBCC1BCF5EF829A*)il2cpp_codegen_object_new(Func_2_tDCA29CF738B0C5F51018D3D7FCBCC1BCF5EF829A_il2cpp_TypeInfo_var);
		NullCheck(L_39);
		Func_2__ctor_m5C67532D986A83BACCBF887F2B50FCD792DBD07A(L_39, L_38, (intptr_t)((void*)U3CU3Ec_U3CSetEventsU3Eb__85_6_mD8D8A9106F6C797E03F17662987CA45EFC563302_RuntimeMethod_var), NULL);
		Func_2_tDCA29CF738B0C5F51018D3D7FCBCC1BCF5EF829A* L_40 = L_39;
		((U3CU3Ec_t7AEAA449DBB19647334E677C7ED6C2EDDC69BB9B_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t7AEAA449DBB19647334E677C7ED6C2EDDC69BB9B_il2cpp_TypeInfo_var))->___U3CU3E9__85_6_7 = L_40;
		Il2CppCodeGenWriteBarrier((void**)(&((U3CU3Ec_t7AEAA449DBB19647334E677C7ED6C2EDDC69BB9B_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t7AEAA449DBB19647334E677C7ED6C2EDDC69BB9B_il2cpp_TypeInfo_var))->___U3CU3E9__85_6_7), (void*)L_40);
		G_B14_0 = L_40;
		G_B14_1 = G_B13_1;
	}

IL_010b:
	{
		bool L_41 = ___add0;
		NullCheck(G_B14_1);
		SpeechEvents_SetEvent_m78CAEDF907E5EDD46124E7CA34B00CEC8790903F(G_B14_1, G_B14_0, L_41, NULL);
		// SetEvent((events) => events?._onStoppedListeningDueToInactivity, add);
		il2cpp_codegen_runtime_class_init_inline(U3CU3Ec_t7AEAA449DBB19647334E677C7ED6C2EDDC69BB9B_il2cpp_TypeInfo_var);
		Func_2_tDCA29CF738B0C5F51018D3D7FCBCC1BCF5EF829A* L_42 = ((U3CU3Ec_t7AEAA449DBB19647334E677C7ED6C2EDDC69BB9B_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t7AEAA449DBB19647334E677C7ED6C2EDDC69BB9B_il2cpp_TypeInfo_var))->___U3CU3E9__85_7_8;
		Func_2_tDCA29CF738B0C5F51018D3D7FCBCC1BCF5EF829A* L_43 = L_42;
		G_B15_0 = L_43;
		G_B15_1 = __this;
		if (L_43)
		{
			G_B16_0 = L_43;
			G_B16_1 = __this;
			goto IL_0132;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(U3CU3Ec_t7AEAA449DBB19647334E677C7ED6C2EDDC69BB9B_il2cpp_TypeInfo_var);
		U3CU3Ec_t7AEAA449DBB19647334E677C7ED6C2EDDC69BB9B* L_44 = ((U3CU3Ec_t7AEAA449DBB19647334E677C7ED6C2EDDC69BB9B_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t7AEAA449DBB19647334E677C7ED6C2EDDC69BB9B_il2cpp_TypeInfo_var))->___U3CU3E9_0;
		Func_2_tDCA29CF738B0C5F51018D3D7FCBCC1BCF5EF829A* L_45 = (Func_2_tDCA29CF738B0C5F51018D3D7FCBCC1BCF5EF829A*)il2cpp_codegen_object_new(Func_2_tDCA29CF738B0C5F51018D3D7FCBCC1BCF5EF829A_il2cpp_TypeInfo_var);
		NullCheck(L_45);
		Func_2__ctor_m5C67532D986A83BACCBF887F2B50FCD792DBD07A(L_45, L_44, (intptr_t)((void*)U3CU3Ec_U3CSetEventsU3Eb__85_7_mB9D79A47CB3EBE7FE9A74A7C85C821F8F4317995_RuntimeMethod_var), NULL);
		Func_2_tDCA29CF738B0C5F51018D3D7FCBCC1BCF5EF829A* L_46 = L_45;
		((U3CU3Ec_t7AEAA449DBB19647334E677C7ED6C2EDDC69BB9B_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t7AEAA449DBB19647334E677C7ED6C2EDDC69BB9B_il2cpp_TypeInfo_var))->___U3CU3E9__85_7_8 = L_46;
		Il2CppCodeGenWriteBarrier((void**)(&((U3CU3Ec_t7AEAA449DBB19647334E677C7ED6C2EDDC69BB9B_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t7AEAA449DBB19647334E677C7ED6C2EDDC69BB9B_il2cpp_TypeInfo_var))->___U3CU3E9__85_7_8), (void*)L_46);
		G_B16_0 = L_46;
		G_B16_1 = G_B15_1;
	}

IL_0132:
	{
		bool L_47 = ___add0;
		NullCheck(G_B16_1);
		SpeechEvents_SetEvent_m78CAEDF907E5EDD46124E7CA34B00CEC8790903F(G_B16_1, G_B16_0, L_47, NULL);
		// SetEvent((events) => events?._onAborting, add);
		il2cpp_codegen_runtime_class_init_inline(U3CU3Ec_t7AEAA449DBB19647334E677C7ED6C2EDDC69BB9B_il2cpp_TypeInfo_var);
		Func_2_tDCA29CF738B0C5F51018D3D7FCBCC1BCF5EF829A* L_48 = ((U3CU3Ec_t7AEAA449DBB19647334E677C7ED6C2EDDC69BB9B_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t7AEAA449DBB19647334E677C7ED6C2EDDC69BB9B_il2cpp_TypeInfo_var))->___U3CU3E9__85_8_9;
		Func_2_tDCA29CF738B0C5F51018D3D7FCBCC1BCF5EF829A* L_49 = L_48;
		G_B17_0 = L_49;
		G_B17_1 = __this;
		if (L_49)
		{
			G_B18_0 = L_49;
			G_B18_1 = __this;
			goto IL_0159;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(U3CU3Ec_t7AEAA449DBB19647334E677C7ED6C2EDDC69BB9B_il2cpp_TypeInfo_var);
		U3CU3Ec_t7AEAA449DBB19647334E677C7ED6C2EDDC69BB9B* L_50 = ((U3CU3Ec_t7AEAA449DBB19647334E677C7ED6C2EDDC69BB9B_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t7AEAA449DBB19647334E677C7ED6C2EDDC69BB9B_il2cpp_TypeInfo_var))->___U3CU3E9_0;
		Func_2_tDCA29CF738B0C5F51018D3D7FCBCC1BCF5EF829A* L_51 = (Func_2_tDCA29CF738B0C5F51018D3D7FCBCC1BCF5EF829A*)il2cpp_codegen_object_new(Func_2_tDCA29CF738B0C5F51018D3D7FCBCC1BCF5EF829A_il2cpp_TypeInfo_var);
		NullCheck(L_51);
		Func_2__ctor_m5C67532D986A83BACCBF887F2B50FCD792DBD07A(L_51, L_50, (intptr_t)((void*)U3CU3Ec_U3CSetEventsU3Eb__85_8_mA26D5C66AA9DD9A852308E9771144E717E860EA7_RuntimeMethod_var), NULL);
		Func_2_tDCA29CF738B0C5F51018D3D7FCBCC1BCF5EF829A* L_52 = L_51;
		((U3CU3Ec_t7AEAA449DBB19647334E677C7ED6C2EDDC69BB9B_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t7AEAA449DBB19647334E677C7ED6C2EDDC69BB9B_il2cpp_TypeInfo_var))->___U3CU3E9__85_8_9 = L_52;
		Il2CppCodeGenWriteBarrier((void**)(&((U3CU3Ec_t7AEAA449DBB19647334E677C7ED6C2EDDC69BB9B_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t7AEAA449DBB19647334E677C7ED6C2EDDC69BB9B_il2cpp_TypeInfo_var))->___U3CU3E9__85_8_9), (void*)L_52);
		G_B18_0 = L_52;
		G_B18_1 = G_B17_1;
	}

IL_0159:
	{
		bool L_53 = ___add0;
		NullCheck(G_B18_1);
		SpeechEvents_SetEvent_m78CAEDF907E5EDD46124E7CA34B00CEC8790903F(G_B18_1, G_B18_0, L_53, NULL);
		// SetEvent((events) => events?._onAborted, add);
		il2cpp_codegen_runtime_class_init_inline(U3CU3Ec_t7AEAA449DBB19647334E677C7ED6C2EDDC69BB9B_il2cpp_TypeInfo_var);
		Func_2_tDCA29CF738B0C5F51018D3D7FCBCC1BCF5EF829A* L_54 = ((U3CU3Ec_t7AEAA449DBB19647334E677C7ED6C2EDDC69BB9B_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t7AEAA449DBB19647334E677C7ED6C2EDDC69BB9B_il2cpp_TypeInfo_var))->___U3CU3E9__85_9_10;
		Func_2_tDCA29CF738B0C5F51018D3D7FCBCC1BCF5EF829A* L_55 = L_54;
		G_B19_0 = L_55;
		G_B19_1 = __this;
		if (L_55)
		{
			G_B20_0 = L_55;
			G_B20_1 = __this;
			goto IL_0180;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(U3CU3Ec_t7AEAA449DBB19647334E677C7ED6C2EDDC69BB9B_il2cpp_TypeInfo_var);
		U3CU3Ec_t7AEAA449DBB19647334E677C7ED6C2EDDC69BB9B* L_56 = ((U3CU3Ec_t7AEAA449DBB19647334E677C7ED6C2EDDC69BB9B_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t7AEAA449DBB19647334E677C7ED6C2EDDC69BB9B_il2cpp_TypeInfo_var))->___U3CU3E9_0;
		Func_2_tDCA29CF738B0C5F51018D3D7FCBCC1BCF5EF829A* L_57 = (Func_2_tDCA29CF738B0C5F51018D3D7FCBCC1BCF5EF829A*)il2cpp_codegen_object_new(Func_2_tDCA29CF738B0C5F51018D3D7FCBCC1BCF5EF829A_il2cpp_TypeInfo_var);
		NullCheck(L_57);
		Func_2__ctor_m5C67532D986A83BACCBF887F2B50FCD792DBD07A(L_57, L_56, (intptr_t)((void*)U3CU3Ec_U3CSetEventsU3Eb__85_9_m5683A88049F6448B180A7220B0AEAC110C63E75B_RuntimeMethod_var), NULL);
		Func_2_tDCA29CF738B0C5F51018D3D7FCBCC1BCF5EF829A* L_58 = L_57;
		((U3CU3Ec_t7AEAA449DBB19647334E677C7ED6C2EDDC69BB9B_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t7AEAA449DBB19647334E677C7ED6C2EDDC69BB9B_il2cpp_TypeInfo_var))->___U3CU3E9__85_9_10 = L_58;
		Il2CppCodeGenWriteBarrier((void**)(&((U3CU3Ec_t7AEAA449DBB19647334E677C7ED6C2EDDC69BB9B_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t7AEAA449DBB19647334E677C7ED6C2EDDC69BB9B_il2cpp_TypeInfo_var))->___U3CU3E9__85_9_10), (void*)L_58);
		G_B20_0 = L_58;
		G_B20_1 = G_B19_1;
	}

IL_0180:
	{
		bool L_59 = ___add0;
		NullCheck(G_B20_1);
		SpeechEvents_SetEvent_m78CAEDF907E5EDD46124E7CA34B00CEC8790903F(G_B20_1, G_B20_0, L_59, NULL);
		// SetEvent((events) => events?._onCanceled, add);
		il2cpp_codegen_runtime_class_init_inline(U3CU3Ec_t7AEAA449DBB19647334E677C7ED6C2EDDC69BB9B_il2cpp_TypeInfo_var);
		Func_2_tD49A9546076918B07593787D23EE9245E84C1AD0* L_60 = ((U3CU3Ec_t7AEAA449DBB19647334E677C7ED6C2EDDC69BB9B_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t7AEAA449DBB19647334E677C7ED6C2EDDC69BB9B_il2cpp_TypeInfo_var))->___U3CU3E9__85_10_11;
		Func_2_tD49A9546076918B07593787D23EE9245E84C1AD0* L_61 = L_60;
		G_B21_0 = L_61;
		G_B21_1 = __this;
		if (L_61)
		{
			G_B22_0 = L_61;
			G_B22_1 = __this;
			goto IL_01a7;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(U3CU3Ec_t7AEAA449DBB19647334E677C7ED6C2EDDC69BB9B_il2cpp_TypeInfo_var);
		U3CU3Ec_t7AEAA449DBB19647334E677C7ED6C2EDDC69BB9B* L_62 = ((U3CU3Ec_t7AEAA449DBB19647334E677C7ED6C2EDDC69BB9B_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t7AEAA449DBB19647334E677C7ED6C2EDDC69BB9B_il2cpp_TypeInfo_var))->___U3CU3E9_0;
		Func_2_tD49A9546076918B07593787D23EE9245E84C1AD0* L_63 = (Func_2_tD49A9546076918B07593787D23EE9245E84C1AD0*)il2cpp_codegen_object_new(Func_2_tD49A9546076918B07593787D23EE9245E84C1AD0_il2cpp_TypeInfo_var);
		NullCheck(L_63);
		Func_2__ctor_m29BC13ED03B13A5E6CA990170CDB59C08E4CA042(L_63, L_62, (intptr_t)((void*)U3CU3Ec_U3CSetEventsU3Eb__85_10_mEDEB01ADA5566EF24329112EAB0DBCC5BD156D47_RuntimeMethod_var), NULL);
		Func_2_tD49A9546076918B07593787D23EE9245E84C1AD0* L_64 = L_63;
		((U3CU3Ec_t7AEAA449DBB19647334E677C7ED6C2EDDC69BB9B_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t7AEAA449DBB19647334E677C7ED6C2EDDC69BB9B_il2cpp_TypeInfo_var))->___U3CU3E9__85_10_11 = L_64;
		Il2CppCodeGenWriteBarrier((void**)(&((U3CU3Ec_t7AEAA449DBB19647334E677C7ED6C2EDDC69BB9B_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t7AEAA449DBB19647334E677C7ED6C2EDDC69BB9B_il2cpp_TypeInfo_var))->___U3CU3E9__85_10_11), (void*)L_64);
		G_B22_0 = L_64;
		G_B22_1 = G_B21_1;
	}

IL_01a7:
	{
		bool L_65 = ___add0;
		NullCheck(G_B22_1);
		SpeechEvents_SetEvent_TisString_t_m62BAB2021E0676DA41C595BCEEE22C14009D2468(G_B22_1, G_B22_0, L_65, SpeechEvents_SetEvent_TisString_t_m62BAB2021E0676DA41C595BCEEE22C14009D2468_RuntimeMethod_var);
		// SetEvent((events) => events?._onPartialResponse, add);
		il2cpp_codegen_runtime_class_init_inline(U3CU3Ec_t7AEAA449DBB19647334E677C7ED6C2EDDC69BB9B_il2cpp_TypeInfo_var);
		Func_2_t5DC062A102C3300E4BF548012A747BB3E0A5BA57* L_66 = ((U3CU3Ec_t7AEAA449DBB19647334E677C7ED6C2EDDC69BB9B_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t7AEAA449DBB19647334E677C7ED6C2EDDC69BB9B_il2cpp_TypeInfo_var))->___U3CU3E9__85_11_12;
		Func_2_t5DC062A102C3300E4BF548012A747BB3E0A5BA57* L_67 = L_66;
		G_B23_0 = L_67;
		G_B23_1 = __this;
		if (L_67)
		{
			G_B24_0 = L_67;
			G_B24_1 = __this;
			goto IL_01ce;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(U3CU3Ec_t7AEAA449DBB19647334E677C7ED6C2EDDC69BB9B_il2cpp_TypeInfo_var);
		U3CU3Ec_t7AEAA449DBB19647334E677C7ED6C2EDDC69BB9B* L_68 = ((U3CU3Ec_t7AEAA449DBB19647334E677C7ED6C2EDDC69BB9B_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t7AEAA449DBB19647334E677C7ED6C2EDDC69BB9B_il2cpp_TypeInfo_var))->___U3CU3E9_0;
		Func_2_t5DC062A102C3300E4BF548012A747BB3E0A5BA57* L_69 = (Func_2_t5DC062A102C3300E4BF548012A747BB3E0A5BA57*)il2cpp_codegen_object_new(Func_2_t5DC062A102C3300E4BF548012A747BB3E0A5BA57_il2cpp_TypeInfo_var);
		NullCheck(L_69);
		Func_2__ctor_m22AC67FD6CA32F4F31C2F0984492B6AABCDCAD6D(L_69, L_68, (intptr_t)((void*)U3CU3Ec_U3CSetEventsU3Eb__85_11_m9F2402F2C780070190CA335621300830A1F4446B_RuntimeMethod_var), NULL);
		Func_2_t5DC062A102C3300E4BF548012A747BB3E0A5BA57* L_70 = L_69;
		((U3CU3Ec_t7AEAA449DBB19647334E677C7ED6C2EDDC69BB9B_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t7AEAA449DBB19647334E677C7ED6C2EDDC69BB9B_il2cpp_TypeInfo_var))->___U3CU3E9__85_11_12 = L_70;
		Il2CppCodeGenWriteBarrier((void**)(&((U3CU3Ec_t7AEAA449DBB19647334E677C7ED6C2EDDC69BB9B_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t7AEAA449DBB19647334E677C7ED6C2EDDC69BB9B_il2cpp_TypeInfo_var))->___U3CU3E9__85_11_12), (void*)L_70);
		G_B24_0 = L_70;
		G_B24_1 = G_B23_1;
	}

IL_01ce:
	{
		bool L_71 = ___add0;
		NullCheck(G_B24_1);
		SpeechEvents_SetEvent_TisWitResponseNode_t1BFF810F15B21416F5F6D0A1CAAF03CEF942038C_m7B829436CAFBA1E4D8B3D78070C252D66F28CA78(G_B24_1, G_B24_0, L_71, SpeechEvents_SetEvent_TisWitResponseNode_t1BFF810F15B21416F5F6D0A1CAAF03CEF942038C_m7B829436CAFBA1E4D8B3D78070C252D66F28CA78_RuntimeMethod_var);
		// SetEvent((events) => events?._onResponse, add);
		il2cpp_codegen_runtime_class_init_inline(U3CU3Ec_t7AEAA449DBB19647334E677C7ED6C2EDDC69BB9B_il2cpp_TypeInfo_var);
		Func_2_t5DC062A102C3300E4BF548012A747BB3E0A5BA57* L_72 = ((U3CU3Ec_t7AEAA449DBB19647334E677C7ED6C2EDDC69BB9B_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t7AEAA449DBB19647334E677C7ED6C2EDDC69BB9B_il2cpp_TypeInfo_var))->___U3CU3E9__85_12_13;
		Func_2_t5DC062A102C3300E4BF548012A747BB3E0A5BA57* L_73 = L_72;
		G_B25_0 = L_73;
		G_B25_1 = __this;
		if (L_73)
		{
			G_B26_0 = L_73;
			G_B26_1 = __this;
			goto IL_01f5;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(U3CU3Ec_t7AEAA449DBB19647334E677C7ED6C2EDDC69BB9B_il2cpp_TypeInfo_var);
		U3CU3Ec_t7AEAA449DBB19647334E677C7ED6C2EDDC69BB9B* L_74 = ((U3CU3Ec_t7AEAA449DBB19647334E677C7ED6C2EDDC69BB9B_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t7AEAA449DBB19647334E677C7ED6C2EDDC69BB9B_il2cpp_TypeInfo_var))->___U3CU3E9_0;
		Func_2_t5DC062A102C3300E4BF548012A747BB3E0A5BA57* L_75 = (Func_2_t5DC062A102C3300E4BF548012A747BB3E0A5BA57*)il2cpp_codegen_object_new(Func_2_t5DC062A102C3300E4BF548012A747BB3E0A5BA57_il2cpp_TypeInfo_var);
		NullCheck(L_75);
		Func_2__ctor_m22AC67FD6CA32F4F31C2F0984492B6AABCDCAD6D(L_75, L_74, (intptr_t)((void*)U3CU3Ec_U3CSetEventsU3Eb__85_12_m40A405001192D5C68410C2B6F078F44503BB8402_RuntimeMethod_var), NULL);
		Func_2_t5DC062A102C3300E4BF548012A747BB3E0A5BA57* L_76 = L_75;
		((U3CU3Ec_t7AEAA449DBB19647334E677C7ED6C2EDDC69BB9B_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t7AEAA449DBB19647334E677C7ED6C2EDDC69BB9B_il2cpp_TypeInfo_var))->___U3CU3E9__85_12_13 = L_76;
		Il2CppCodeGenWriteBarrier((void**)(&((U3CU3Ec_t7AEAA449DBB19647334E677C7ED6C2EDDC69BB9B_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t7AEAA449DBB19647334E677C7ED6C2EDDC69BB9B_il2cpp_TypeInfo_var))->___U3CU3E9__85_12_13), (void*)L_76);
		G_B26_0 = L_76;
		G_B26_1 = G_B25_1;
	}

IL_01f5:
	{
		bool L_77 = ___add0;
		NullCheck(G_B26_1);
		SpeechEvents_SetEvent_TisWitResponseNode_t1BFF810F15B21416F5F6D0A1CAAF03CEF942038C_m7B829436CAFBA1E4D8B3D78070C252D66F28CA78(G_B26_1, G_B26_0, L_77, SpeechEvents_SetEvent_TisWitResponseNode_t1BFF810F15B21416F5F6D0A1CAAF03CEF942038C_m7B829436CAFBA1E4D8B3D78070C252D66F28CA78_RuntimeMethod_var);
		// SetEvent((events) => events?._onError, add);
		il2cpp_codegen_runtime_class_init_inline(U3CU3Ec_t7AEAA449DBB19647334E677C7ED6C2EDDC69BB9B_il2cpp_TypeInfo_var);
		Func_2_tB18F1F7AE9EDB9705E036A284B88C5F3613A7F78* L_78 = ((U3CU3Ec_t7AEAA449DBB19647334E677C7ED6C2EDDC69BB9B_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t7AEAA449DBB19647334E677C7ED6C2EDDC69BB9B_il2cpp_TypeInfo_var))->___U3CU3E9__85_13_14;
		Func_2_tB18F1F7AE9EDB9705E036A284B88C5F3613A7F78* L_79 = L_78;
		G_B27_0 = L_79;
		G_B27_1 = __this;
		if (L_79)
		{
			G_B28_0 = L_79;
			G_B28_1 = __this;
			goto IL_021c;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(U3CU3Ec_t7AEAA449DBB19647334E677C7ED6C2EDDC69BB9B_il2cpp_TypeInfo_var);
		U3CU3Ec_t7AEAA449DBB19647334E677C7ED6C2EDDC69BB9B* L_80 = ((U3CU3Ec_t7AEAA449DBB19647334E677C7ED6C2EDDC69BB9B_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t7AEAA449DBB19647334E677C7ED6C2EDDC69BB9B_il2cpp_TypeInfo_var))->___U3CU3E9_0;
		Func_2_tB18F1F7AE9EDB9705E036A284B88C5F3613A7F78* L_81 = (Func_2_tB18F1F7AE9EDB9705E036A284B88C5F3613A7F78*)il2cpp_codegen_object_new(Func_2_tB18F1F7AE9EDB9705E036A284B88C5F3613A7F78_il2cpp_TypeInfo_var);
		NullCheck(L_81);
		Func_2__ctor_m6FFDD82F8CA59FAD0C29ADB4743D02FE89A104FC(L_81, L_80, (intptr_t)((void*)U3CU3Ec_U3CSetEventsU3Eb__85_13_m7430957ADFDCDD9398FC7B9B95B6D44C9F2E354F_RuntimeMethod_var), NULL);
		Func_2_tB18F1F7AE9EDB9705E036A284B88C5F3613A7F78* L_82 = L_81;
		((U3CU3Ec_t7AEAA449DBB19647334E677C7ED6C2EDDC69BB9B_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t7AEAA449DBB19647334E677C7ED6C2EDDC69BB9B_il2cpp_TypeInfo_var))->___U3CU3E9__85_13_14 = L_82;
		Il2CppCodeGenWriteBarrier((void**)(&((U3CU3Ec_t7AEAA449DBB19647334E677C7ED6C2EDDC69BB9B_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t7AEAA449DBB19647334E677C7ED6C2EDDC69BB9B_il2cpp_TypeInfo_var))->___U3CU3E9__85_13_14), (void*)L_82);
		G_B28_0 = L_82;
		G_B28_1 = G_B27_1;
	}

IL_021c:
	{
		bool L_83 = ___add0;
		NullCheck(G_B28_1);
		SpeechEvents_SetEvent_TisString_t_TisString_t_mE93502BAC82570020D936C0C5C0AB2FEA7FA0BB8(G_B28_1, G_B28_0, L_83, SpeechEvents_SetEvent_TisString_t_TisString_t_mE93502BAC82570020D936C0C5C0AB2FEA7FA0BB8_RuntimeMethod_var);
		// SetEvent((events) => events?._onRequestCompleted, add);
		il2cpp_codegen_runtime_class_init_inline(U3CU3Ec_t7AEAA449DBB19647334E677C7ED6C2EDDC69BB9B_il2cpp_TypeInfo_var);
		Func_2_tDCA29CF738B0C5F51018D3D7FCBCC1BCF5EF829A* L_84 = ((U3CU3Ec_t7AEAA449DBB19647334E677C7ED6C2EDDC69BB9B_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t7AEAA449DBB19647334E677C7ED6C2EDDC69BB9B_il2cpp_TypeInfo_var))->___U3CU3E9__85_14_15;
		Func_2_tDCA29CF738B0C5F51018D3D7FCBCC1BCF5EF829A* L_85 = L_84;
		G_B29_0 = L_85;
		G_B29_1 = __this;
		if (L_85)
		{
			G_B30_0 = L_85;
			G_B30_1 = __this;
			goto IL_0243;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(U3CU3Ec_t7AEAA449DBB19647334E677C7ED6C2EDDC69BB9B_il2cpp_TypeInfo_var);
		U3CU3Ec_t7AEAA449DBB19647334E677C7ED6C2EDDC69BB9B* L_86 = ((U3CU3Ec_t7AEAA449DBB19647334E677C7ED6C2EDDC69BB9B_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t7AEAA449DBB19647334E677C7ED6C2EDDC69BB9B_il2cpp_TypeInfo_var))->___U3CU3E9_0;
		Func_2_tDCA29CF738B0C5F51018D3D7FCBCC1BCF5EF829A* L_87 = (Func_2_tDCA29CF738B0C5F51018D3D7FCBCC1BCF5EF829A*)il2cpp_codegen_object_new(Func_2_tDCA29CF738B0C5F51018D3D7FCBCC1BCF5EF829A_il2cpp_TypeInfo_var);
		NullCheck(L_87);
		Func_2__ctor_m5C67532D986A83BACCBF887F2B50FCD792DBD07A(L_87, L_86, (intptr_t)((void*)U3CU3Ec_U3CSetEventsU3Eb__85_14_m6346B857CF7F52407244AD37D0C6B03EE700B920_RuntimeMethod_var), NULL);
		Func_2_tDCA29CF738B0C5F51018D3D7FCBCC1BCF5EF829A* L_88 = L_87;
		((U3CU3Ec_t7AEAA449DBB19647334E677C7ED6C2EDDC69BB9B_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t7AEAA449DBB19647334E677C7ED6C2EDDC69BB9B_il2cpp_TypeInfo_var))->___U3CU3E9__85_14_15 = L_88;
		Il2CppCodeGenWriteBarrier((void**)(&((U3CU3Ec_t7AEAA449DBB19647334E677C7ED6C2EDDC69BB9B_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t7AEAA449DBB19647334E677C7ED6C2EDDC69BB9B_il2cpp_TypeInfo_var))->___U3CU3E9__85_14_15), (void*)L_88);
		G_B30_0 = L_88;
		G_B30_1 = G_B29_1;
	}

IL_0243:
	{
		bool L_89 = ___add0;
		NullCheck(G_B30_1);
		SpeechEvents_SetEvent_m78CAEDF907E5EDD46124E7CA34B00CEC8790903F(G_B30_1, G_B30_0, L_89, NULL);
		// SetEvent((events) => events?._onComplete, add);
		il2cpp_codegen_runtime_class_init_inline(U3CU3Ec_t7AEAA449DBB19647334E677C7ED6C2EDDC69BB9B_il2cpp_TypeInfo_var);
		Func_2_tD24D6BC507F5AA415E63472DF1247E49582D7A1F* L_90 = ((U3CU3Ec_t7AEAA449DBB19647334E677C7ED6C2EDDC69BB9B_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t7AEAA449DBB19647334E677C7ED6C2EDDC69BB9B_il2cpp_TypeInfo_var))->___U3CU3E9__85_15_16;
		Func_2_tD24D6BC507F5AA415E63472DF1247E49582D7A1F* L_91 = L_90;
		G_B31_0 = L_91;
		G_B31_1 = __this;
		if (L_91)
		{
			G_B32_0 = L_91;
			G_B32_1 = __this;
			goto IL_026a;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(U3CU3Ec_t7AEAA449DBB19647334E677C7ED6C2EDDC69BB9B_il2cpp_TypeInfo_var);
		U3CU3Ec_t7AEAA449DBB19647334E677C7ED6C2EDDC69BB9B* L_92 = ((U3CU3Ec_t7AEAA449DBB19647334E677C7ED6C2EDDC69BB9B_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t7AEAA449DBB19647334E677C7ED6C2EDDC69BB9B_il2cpp_TypeInfo_var))->___U3CU3E9_0;
		Func_2_tD24D6BC507F5AA415E63472DF1247E49582D7A1F* L_93 = (Func_2_tD24D6BC507F5AA415E63472DF1247E49582D7A1F*)il2cpp_codegen_object_new(Func_2_tD24D6BC507F5AA415E63472DF1247E49582D7A1F_il2cpp_TypeInfo_var);
		NullCheck(L_93);
		Func_2__ctor_m5B952D58DE017AA1FBE63A1C7271C76889C31C33(L_93, L_92, (intptr_t)((void*)U3CU3Ec_U3CSetEventsU3Eb__85_15_mE3A7552CEF4F8CC5747A954859616B9D8F8E80AD_RuntimeMethod_var), NULL);
		Func_2_tD24D6BC507F5AA415E63472DF1247E49582D7A1F* L_94 = L_93;
		((U3CU3Ec_t7AEAA449DBB19647334E677C7ED6C2EDDC69BB9B_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t7AEAA449DBB19647334E677C7ED6C2EDDC69BB9B_il2cpp_TypeInfo_var))->___U3CU3E9__85_15_16 = L_94;
		Il2CppCodeGenWriteBarrier((void**)(&((U3CU3Ec_t7AEAA449DBB19647334E677C7ED6C2EDDC69BB9B_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t7AEAA449DBB19647334E677C7ED6C2EDDC69BB9B_il2cpp_TypeInfo_var))->___U3CU3E9__85_15_16), (void*)L_94);
		G_B32_0 = L_94;
		G_B32_1 = G_B31_1;
	}

IL_026a:
	{
		bool L_95 = ___add0;
		NullCheck(G_B32_1);
		SpeechEvents_SetEvent_TisVoiceServiceRequest_tCF844F597C059D6A354311EB2BD5644AE5E8E536_m97FDD4B3999DF7CAB7E920069C5AF415D1D3183A(G_B32_1, G_B32_0, L_95, SpeechEvents_SetEvent_TisVoiceServiceRequest_tCF844F597C059D6A354311EB2BD5644AE5E8E536_m97FDD4B3999DF7CAB7E920069C5AF415D1D3183A_RuntimeMethod_var);
		// SetEvent((events) => events?._onStartListening, add);
		il2cpp_codegen_runtime_class_init_inline(U3CU3Ec_t7AEAA449DBB19647334E677C7ED6C2EDDC69BB9B_il2cpp_TypeInfo_var);
		Func_2_tDCA29CF738B0C5F51018D3D7FCBCC1BCF5EF829A* L_96 = ((U3CU3Ec_t7AEAA449DBB19647334E677C7ED6C2EDDC69BB9B_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t7AEAA449DBB19647334E677C7ED6C2EDDC69BB9B_il2cpp_TypeInfo_var))->___U3CU3E9__85_16_17;
		Func_2_tDCA29CF738B0C5F51018D3D7FCBCC1BCF5EF829A* L_97 = L_96;
		G_B33_0 = L_97;
		G_B33_1 = __this;
		if (L_97)
		{
			G_B34_0 = L_97;
			G_B34_1 = __this;
			goto IL_0291;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(U3CU3Ec_t7AEAA449DBB19647334E677C7ED6C2EDDC69BB9B_il2cpp_TypeInfo_var);
		U3CU3Ec_t7AEAA449DBB19647334E677C7ED6C2EDDC69BB9B* L_98 = ((U3CU3Ec_t7AEAA449DBB19647334E677C7ED6C2EDDC69BB9B_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t7AEAA449DBB19647334E677C7ED6C2EDDC69BB9B_il2cpp_TypeInfo_var))->___U3CU3E9_0;
		Func_2_tDCA29CF738B0C5F51018D3D7FCBCC1BCF5EF829A* L_99 = (Func_2_tDCA29CF738B0C5F51018D3D7FCBCC1BCF5EF829A*)il2cpp_codegen_object_new(Func_2_tDCA29CF738B0C5F51018D3D7FCBCC1BCF5EF829A_il2cpp_TypeInfo_var);
		NullCheck(L_99);
		Func_2__ctor_m5C67532D986A83BACCBF887F2B50FCD792DBD07A(L_99, L_98, (intptr_t)((void*)U3CU3Ec_U3CSetEventsU3Eb__85_16_m1AF991967BAC2CDA43D3F95662145920F95B51A5_RuntimeMethod_var), NULL);
		Func_2_tDCA29CF738B0C5F51018D3D7FCBCC1BCF5EF829A* L_100 = L_99;
		((U3CU3Ec_t7AEAA449DBB19647334E677C7ED6C2EDDC69BB9B_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t7AEAA449DBB19647334E677C7ED6C2EDDC69BB9B_il2cpp_TypeInfo_var))->___U3CU3E9__85_16_17 = L_100;
		Il2CppCodeGenWriteBarrier((void**)(&((U3CU3Ec_t7AEAA449DBB19647334E677C7ED6C2EDDC69BB9B_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t7AEAA449DBB19647334E677C7ED6C2EDDC69BB9B_il2cpp_TypeInfo_var))->___U3CU3E9__85_16_17), (void*)L_100);
		G_B34_0 = L_100;
		G_B34_1 = G_B33_1;
	}

IL_0291:
	{
		bool L_101 = ___add0;
		NullCheck(G_B34_1);
		SpeechEvents_SetEvent_m78CAEDF907E5EDD46124E7CA34B00CEC8790903F(G_B34_1, G_B34_0, L_101, NULL);
		// SetEvent((events) => events?._onStoppedListening, add);
		il2cpp_codegen_runtime_class_init_inline(U3CU3Ec_t7AEAA449DBB19647334E677C7ED6C2EDDC69BB9B_il2cpp_TypeInfo_var);
		Func_2_tDCA29CF738B0C5F51018D3D7FCBCC1BCF5EF829A* L_102 = ((U3CU3Ec_t7AEAA449DBB19647334E677C7ED6C2EDDC69BB9B_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t7AEAA449DBB19647334E677C7ED6C2EDDC69BB9B_il2cpp_TypeInfo_var))->___U3CU3E9__85_17_18;
		Func_2_tDCA29CF738B0C5F51018D3D7FCBCC1BCF5EF829A* L_103 = L_102;
		G_B35_0 = L_103;
		G_B35_1 = __this;
		if (L_103)
		{
			G_B36_0 = L_103;
			G_B36_1 = __this;
			goto IL_02b8;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(U3CU3Ec_t7AEAA449DBB19647334E677C7ED6C2EDDC69BB9B_il2cpp_TypeInfo_var);
		U3CU3Ec_t7AEAA449DBB19647334E677C7ED6C2EDDC69BB9B* L_104 = ((U3CU3Ec_t7AEAA449DBB19647334E677C7ED6C2EDDC69BB9B_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t7AEAA449DBB19647334E677C7ED6C2EDDC69BB9B_il2cpp_TypeInfo_var))->___U3CU3E9_0;
		Func_2_tDCA29CF738B0C5F51018D3D7FCBCC1BCF5EF829A* L_105 = (Func_2_tDCA29CF738B0C5F51018D3D7FCBCC1BCF5EF829A*)il2cpp_codegen_object_new(Func_2_tDCA29CF738B0C5F51018D3D7FCBCC1BCF5EF829A_il2cpp_TypeInfo_var);
		NullCheck(L_105);
		Func_2__ctor_m5C67532D986A83BACCBF887F2B50FCD792DBD07A(L_105, L_104, (intptr_t)((void*)U3CU3Ec_U3CSetEventsU3Eb__85_17_m724F7BBBA1564846C5B108FEEC4D6A3A58669846_RuntimeMethod_var), NULL);
		Func_2_tDCA29CF738B0C5F51018D3D7FCBCC1BCF5EF829A* L_106 = L_105;
		((U3CU3Ec_t7AEAA449DBB19647334E677C7ED6C2EDDC69BB9B_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t7AEAA449DBB19647334E677C7ED6C2EDDC69BB9B_il2cpp_TypeInfo_var))->___U3CU3E9__85_17_18 = L_106;
		Il2CppCodeGenWriteBarrier((void**)(&((U3CU3Ec_t7AEAA449DBB19647334E677C7ED6C2EDDC69BB9B_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t7AEAA449DBB19647334E677C7ED6C2EDDC69BB9B_il2cpp_TypeInfo_var))->___U3CU3E9__85_17_18), (void*)L_106);
		G_B36_0 = L_106;
		G_B36_1 = G_B35_1;
	}

IL_02b8:
	{
		bool L_107 = ___add0;
		NullCheck(G_B36_1);
		SpeechEvents_SetEvent_m78CAEDF907E5EDD46124E7CA34B00CEC8790903F(G_B36_1, G_B36_0, L_107, NULL);
		// SetEvent((events) => events?._onMicLevelChanged, add);
		il2cpp_codegen_runtime_class_init_inline(U3CU3Ec_t7AEAA449DBB19647334E677C7ED6C2EDDC69BB9B_il2cpp_TypeInfo_var);
		Func_2_t0F30FACC4CABFFD27DDEBE31FB321AA523A06B7D* L_108 = ((U3CU3Ec_t7AEAA449DBB19647334E677C7ED6C2EDDC69BB9B_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t7AEAA449DBB19647334E677C7ED6C2EDDC69BB9B_il2cpp_TypeInfo_var))->___U3CU3E9__85_18_19;
		Func_2_t0F30FACC4CABFFD27DDEBE31FB321AA523A06B7D* L_109 = L_108;
		G_B37_0 = L_109;
		G_B37_1 = __this;
		if (L_109)
		{
			G_B38_0 = L_109;
			G_B38_1 = __this;
			goto IL_02df;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(U3CU3Ec_t7AEAA449DBB19647334E677C7ED6C2EDDC69BB9B_il2cpp_TypeInfo_var);
		U3CU3Ec_t7AEAA449DBB19647334E677C7ED6C2EDDC69BB9B* L_110 = ((U3CU3Ec_t7AEAA449DBB19647334E677C7ED6C2EDDC69BB9B_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t7AEAA449DBB19647334E677C7ED6C2EDDC69BB9B_il2cpp_TypeInfo_var))->___U3CU3E9_0;
		Func_2_t0F30FACC4CABFFD27DDEBE31FB321AA523A06B7D* L_111 = (Func_2_t0F30FACC4CABFFD27DDEBE31FB321AA523A06B7D*)il2cpp_codegen_object_new(Func_2_t0F30FACC4CABFFD27DDEBE31FB321AA523A06B7D_il2cpp_TypeInfo_var);
		NullCheck(L_111);
		Func_2__ctor_m6B695FEF9DE1C1E5425875514847EBF747B57738(L_111, L_110, (intptr_t)((void*)U3CU3Ec_U3CSetEventsU3Eb__85_18_m15931B8D380FE72BE3D4994FD031D227FF7A2758_RuntimeMethod_var), NULL);
		Func_2_t0F30FACC4CABFFD27DDEBE31FB321AA523A06B7D* L_112 = L_111;
		((U3CU3Ec_t7AEAA449DBB19647334E677C7ED6C2EDDC69BB9B_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t7AEAA449DBB19647334E677C7ED6C2EDDC69BB9B_il2cpp_TypeInfo_var))->___U3CU3E9__85_18_19 = L_112;
		Il2CppCodeGenWriteBarrier((void**)(&((U3CU3Ec_t7AEAA449DBB19647334E677C7ED6C2EDDC69BB9B_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t7AEAA449DBB19647334E677C7ED6C2EDDC69BB9B_il2cpp_TypeInfo_var))->___U3CU3E9__85_18_19), (void*)L_112);
		G_B38_0 = L_112;
		G_B38_1 = G_B37_1;
	}

IL_02df:
	{
		bool L_113 = ___add0;
		NullCheck(G_B38_1);
		SpeechEvents_SetEvent_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m8B9866152A783B00DC62BD6760C64DEF55F7D5CA(G_B38_1, G_B38_0, L_113, SpeechEvents_SetEvent_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m8B9866152A783B00DC62BD6760C64DEF55F7D5CA_RuntimeMethod_var);
		// SetEvent((events) => events?._onPartialTranscription, add);
		il2cpp_codegen_runtime_class_init_inline(U3CU3Ec_t7AEAA449DBB19647334E677C7ED6C2EDDC69BB9B_il2cpp_TypeInfo_var);
		Func_2_tD49A9546076918B07593787D23EE9245E84C1AD0* L_114 = ((U3CU3Ec_t7AEAA449DBB19647334E677C7ED6C2EDDC69BB9B_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t7AEAA449DBB19647334E677C7ED6C2EDDC69BB9B_il2cpp_TypeInfo_var))->___U3CU3E9__85_19_20;
		Func_2_tD49A9546076918B07593787D23EE9245E84C1AD0* L_115 = L_114;
		G_B39_0 = L_115;
		G_B39_1 = __this;
		if (L_115)
		{
			G_B40_0 = L_115;
			G_B40_1 = __this;
			goto IL_0306;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(U3CU3Ec_t7AEAA449DBB19647334E677C7ED6C2EDDC69BB9B_il2cpp_TypeInfo_var);
		U3CU3Ec_t7AEAA449DBB19647334E677C7ED6C2EDDC69BB9B* L_116 = ((U3CU3Ec_t7AEAA449DBB19647334E677C7ED6C2EDDC69BB9B_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t7AEAA449DBB19647334E677C7ED6C2EDDC69BB9B_il2cpp_TypeInfo_var))->___U3CU3E9_0;
		Func_2_tD49A9546076918B07593787D23EE9245E84C1AD0* L_117 = (Func_2_tD49A9546076918B07593787D23EE9245E84C1AD0*)il2cpp_codegen_object_new(Func_2_tD49A9546076918B07593787D23EE9245E84C1AD0_il2cpp_TypeInfo_var);
		NullCheck(L_117);
		Func_2__ctor_m29BC13ED03B13A5E6CA990170CDB59C08E4CA042(L_117, L_116, (intptr_t)((void*)U3CU3Ec_U3CSetEventsU3Eb__85_19_mAA82BED4FC768404E40CFE3021E56C01F813852A_RuntimeMethod_var), NULL);
		Func_2_tD49A9546076918B07593787D23EE9245E84C1AD0* L_118 = L_117;
		((U3CU3Ec_t7AEAA449DBB19647334E677C7ED6C2EDDC69BB9B_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t7AEAA449DBB19647334E677C7ED6C2EDDC69BB9B_il2cpp_TypeInfo_var))->___U3CU3E9__85_19_20 = L_118;
		Il2CppCodeGenWriteBarrier((void**)(&((U3CU3Ec_t7AEAA449DBB19647334E677C7ED6C2EDDC69BB9B_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t7AEAA449DBB19647334E677C7ED6C2EDDC69BB9B_il2cpp_TypeInfo_var))->___U3CU3E9__85_19_20), (void*)L_118);
		G_B40_0 = L_118;
		G_B40_1 = G_B39_1;
	}

IL_0306:
	{
		bool L_119 = ___add0;
		NullCheck(G_B40_1);
		SpeechEvents_SetEvent_TisString_t_m62BAB2021E0676DA41C595BCEEE22C14009D2468(G_B40_1, G_B40_0, L_119, SpeechEvents_SetEvent_TisString_t_m62BAB2021E0676DA41C595BCEEE22C14009D2468_RuntimeMethod_var);
		// SetEvent((events) => events?._onFullTranscription, add);
		il2cpp_codegen_runtime_class_init_inline(U3CU3Ec_t7AEAA449DBB19647334E677C7ED6C2EDDC69BB9B_il2cpp_TypeInfo_var);
		Func_2_tD49A9546076918B07593787D23EE9245E84C1AD0* L_120 = ((U3CU3Ec_t7AEAA449DBB19647334E677C7ED6C2EDDC69BB9B_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t7AEAA449DBB19647334E677C7ED6C2EDDC69BB9B_il2cpp_TypeInfo_var))->___U3CU3E9__85_20_21;
		Func_2_tD49A9546076918B07593787D23EE9245E84C1AD0* L_121 = L_120;
		G_B41_0 = L_121;
		G_B41_1 = __this;
		if (L_121)
		{
			G_B42_0 = L_121;
			G_B42_1 = __this;
			goto IL_032d;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(U3CU3Ec_t7AEAA449DBB19647334E677C7ED6C2EDDC69BB9B_il2cpp_TypeInfo_var);
		U3CU3Ec_t7AEAA449DBB19647334E677C7ED6C2EDDC69BB9B* L_122 = ((U3CU3Ec_t7AEAA449DBB19647334E677C7ED6C2EDDC69BB9B_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t7AEAA449DBB19647334E677C7ED6C2EDDC69BB9B_il2cpp_TypeInfo_var))->___U3CU3E9_0;
		Func_2_tD49A9546076918B07593787D23EE9245E84C1AD0* L_123 = (Func_2_tD49A9546076918B07593787D23EE9245E84C1AD0*)il2cpp_codegen_object_new(Func_2_tD49A9546076918B07593787D23EE9245E84C1AD0_il2cpp_TypeInfo_var);
		NullCheck(L_123);
		Func_2__ctor_m29BC13ED03B13A5E6CA990170CDB59C08E4CA042(L_123, L_122, (intptr_t)((void*)U3CU3Ec_U3CSetEventsU3Eb__85_20_m7E66AA19F9070096AF85B7767CC259A88C84365F_RuntimeMethod_var), NULL);
		Func_2_tD49A9546076918B07593787D23EE9245E84C1AD0* L_124 = L_123;
		((U3CU3Ec_t7AEAA449DBB19647334E677C7ED6C2EDDC69BB9B_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t7AEAA449DBB19647334E677C7ED6C2EDDC69BB9B_il2cpp_TypeInfo_var))->___U3CU3E9__85_20_21 = L_124;
		Il2CppCodeGenWriteBarrier((void**)(&((U3CU3Ec_t7AEAA449DBB19647334E677C7ED6C2EDDC69BB9B_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t7AEAA449DBB19647334E677C7ED6C2EDDC69BB9B_il2cpp_TypeInfo_var))->___U3CU3E9__85_20_21), (void*)L_124);
		G_B42_0 = L_124;
		G_B42_1 = G_B41_1;
	}

IL_032d:
	{
		bool L_125 = ___add0;
		NullCheck(G_B42_1);
		SpeechEvents_SetEvent_TisString_t_m62BAB2021E0676DA41C595BCEEE22C14009D2468(G_B42_1, G_B42_0, L_125, SpeechEvents_SetEvent_TisString_t_m62BAB2021E0676DA41C595BCEEE22C14009D2468_RuntimeMethod_var);
		// }
		return;
	}
}
// System.Void Meta.WitAi.Events.SpeechEvents::SetEvent(System.Func`2<Meta.WitAi.Events.SpeechEvents,UnityEngine.Events.UnityEvent>,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpeechEvents_SetEvent_m78CAEDF907E5EDD46124E7CA34B00CEC8790903F (SpeechEvents_tB51C31627EF79AB5734270C1558A6C6F67A5040E* __this, Func_2_tDCA29CF738B0C5F51018D3D7FCBCC1BCF5EF829A* ___getEvent0, bool ___add1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass86_0_U3CSetEventU3Eb__0_mD93C82C2408A8F0680312707D3CE86EBDA167FEA_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass86_0_t966EF3616DEAE30A97398BD0490A7BFF1725D638_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	U3CU3Ec__DisplayClass86_0_t966EF3616DEAE30A97398BD0490A7BFF1725D638* V_0 = NULL;
	UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* V_1 = NULL;
	bool V_2 = false;
	{
		U3CU3Ec__DisplayClass86_0_t966EF3616DEAE30A97398BD0490A7BFF1725D638* L_0 = (U3CU3Ec__DisplayClass86_0_t966EF3616DEAE30A97398BD0490A7BFF1725D638*)il2cpp_codegen_object_new(U3CU3Ec__DisplayClass86_0_t966EF3616DEAE30A97398BD0490A7BFF1725D638_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CU3Ec__DisplayClass86_0__ctor_mF0E5363F8EB42666E46097F3923370E1EB54B3F6(L_0, NULL);
		V_0 = L_0;
		U3CU3Ec__DisplayClass86_0_t966EF3616DEAE30A97398BD0490A7BFF1725D638* L_1 = V_0;
		NullCheck(L_1);
		L_1->___U3CU3E4__this_0 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___U3CU3E4__this_0), (void*)__this);
		U3CU3Ec__DisplayClass86_0_t966EF3616DEAE30A97398BD0490A7BFF1725D638* L_2 = V_0;
		Func_2_tDCA29CF738B0C5F51018D3D7FCBCC1BCF5EF829A* L_3 = ___getEvent0;
		NullCheck(L_2);
		L_2->___getEvent_1 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&L_2->___getEvent_1), (void*)L_3);
		// UnityEvent sourceEvent = getEvent(this);
		U3CU3Ec__DisplayClass86_0_t966EF3616DEAE30A97398BD0490A7BFF1725D638* L_4 = V_0;
		NullCheck(L_4);
		Func_2_tDCA29CF738B0C5F51018D3D7FCBCC1BCF5EF829A* L_5 = L_4->___getEvent_1;
		NullCheck(L_5);
		UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* L_6;
		L_6 = Func_2_Invoke_mA34300A70C486A80C3D6B0790FB03DFF483C4EF8_inline(L_5, __this, NULL);
		V_1 = L_6;
		// if (!add)
		bool L_7 = ___add1;
		V_2 = (bool)((((int32_t)L_7) == ((int32_t)0))? 1 : 0);
		bool L_8 = V_2;
		if (!L_8)
		{
			goto IL_0039;
		}
	}
	{
		// sourceEvent?.RemoveAllListeners();
		UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* L_9 = V_1;
		if (L_9)
		{
			goto IL_0030;
		}
	}
	{
		goto IL_0037;
	}

IL_0030:
	{
		UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* L_10 = V_1;
		NullCheck(L_10);
		UnityEventBase_RemoveAllListeners_m6E68297189537543B0C72FE38804646CA204D076(L_10, NULL);
	}

IL_0037:
	{
		// return;
		goto IL_0051;
	}

IL_0039:
	{
		// sourceEvent?.AddListener(() =>
		// {
		//     foreach (var listener in _listeners)
		//     {
		//         getEvent(listener)?.Invoke();
		//     }
		// });
		UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* L_11 = V_1;
		if (L_11)
		{
			goto IL_003e;
		}
	}
	{
		goto IL_0051;
	}

IL_003e:
	{
		UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* L_12 = V_1;
		U3CU3Ec__DisplayClass86_0_t966EF3616DEAE30A97398BD0490A7BFF1725D638* L_13 = V_0;
		UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* L_14 = (UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7*)il2cpp_codegen_object_new(UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7_il2cpp_TypeInfo_var);
		NullCheck(L_14);
		UnityAction__ctor_mC53E20D6B66E0D5688CD81B88DBB34F5A58B7131(L_14, L_13, (intptr_t)((void*)U3CU3Ec__DisplayClass86_0_U3CSetEventU3Eb__0_mD93C82C2408A8F0680312707D3CE86EBDA167FEA_RuntimeMethod_var), NULL);
		NullCheck(L_12);
		UnityEvent_AddListener_m8AA4287C16628486B41DA41CA5E7A856A706D302(L_12, L_14, NULL);
	}

IL_0051:
	{
		// }
		return;
	}
}
// System.Void Meta.WitAi.Events.SpeechEvents::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpeechEvents__ctor_m6D16CA375136DF4D38A1D2E97B4479CB530F9ADA (SpeechEvents_tB51C31627EF79AB5734270C1558A6C6F67A5040E* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashSet_1__ctor_m69B3F52AC472B402F279635CEE94EA4635813A6E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashSet_1_tA2DD82C656859A8F953FE80E0E7CFAA242AFFEB7_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&VoiceServiceRequestEvent_t7340AD8EBA1B3D36E1A95E47C8DBCD954F1DED13_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WitErrorEvent_tF617F56AD9B12E89D73E125B79E441A56067F1B2_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WitMicLevelChangedEvent_tA9B2889CB33EAA09656739F26AA70252ED15DEF7_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WitRequestCreatedEvent_t1A01ABB6F9E3C02D0251B5DC9F5B290EDA0E319B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WitRequestOptionsEvent_t84FCD56D356445821DECABA3F66CADF6B07ABB1B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WitResponseEvent_tC85152AAABC87956DF604749EEA671ADAA9EFFDA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WitTranscriptionEvent_t51292FC7EB7BAF38C2EC6B57D87724C1BEB3C739_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private WitRequestOptionsEvent _onRequestOptionSetup = new WitRequestOptionsEvent();
		WitRequestOptionsEvent_t84FCD56D356445821DECABA3F66CADF6B07ABB1B* L_0 = (WitRequestOptionsEvent_t84FCD56D356445821DECABA3F66CADF6B07ABB1B*)il2cpp_codegen_object_new(WitRequestOptionsEvent_t84FCD56D356445821DECABA3F66CADF6B07ABB1B_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		WitRequestOptionsEvent__ctor_m10A500367C7D0AC6F19B4C873F6B2E38DB68F1E5(L_0, NULL);
		__this->____onRequestOptionSetup_3 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____onRequestOptionSetup_3), (void*)L_0);
		// private VoiceServiceRequestEvent _onRequestInitialized = new VoiceServiceRequestEvent();
		VoiceServiceRequestEvent_t7340AD8EBA1B3D36E1A95E47C8DBCD954F1DED13* L_1 = (VoiceServiceRequestEvent_t7340AD8EBA1B3D36E1A95E47C8DBCD954F1DED13*)il2cpp_codegen_object_new(VoiceServiceRequestEvent_t7340AD8EBA1B3D36E1A95E47C8DBCD954F1DED13_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		VoiceServiceRequestEvent__ctor_m1D20A625F3700F2E3369F471E403A9274F4063A6(L_1, NULL);
		__this->____onRequestInitialized_4 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____onRequestInitialized_4), (void*)L_1);
		// private WitRequestCreatedEvent _onRequestCreated = new WitRequestCreatedEvent();
		WitRequestCreatedEvent_t1A01ABB6F9E3C02D0251B5DC9F5B290EDA0E319B* L_2 = (WitRequestCreatedEvent_t1A01ABB6F9E3C02D0251B5DC9F5B290EDA0E319B*)il2cpp_codegen_object_new(WitRequestCreatedEvent_t1A01ABB6F9E3C02D0251B5DC9F5B290EDA0E319B_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		WitRequestCreatedEvent__ctor_m7AE3D7970DA2FCCE3839331A4DF4B7E9D49C5149(L_2, NULL);
		__this->____onRequestCreated_5 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____onRequestCreated_5), (void*)L_2);
		// private VoiceServiceRequestEvent _onSend = new VoiceServiceRequestEvent();
		VoiceServiceRequestEvent_t7340AD8EBA1B3D36E1A95E47C8DBCD954F1DED13* L_3 = (VoiceServiceRequestEvent_t7340AD8EBA1B3D36E1A95E47C8DBCD954F1DED13*)il2cpp_codegen_object_new(VoiceServiceRequestEvent_t7340AD8EBA1B3D36E1A95E47C8DBCD954F1DED13_il2cpp_TypeInfo_var);
		NullCheck(L_3);
		VoiceServiceRequestEvent__ctor_m1D20A625F3700F2E3369F471E403A9274F4063A6(L_3, NULL);
		__this->____onSend_6 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____onSend_6), (void*)L_3);
		// private UnityEvent _onMinimumWakeThresholdHit = new UnityEvent();
		UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* L_4 = (UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977*)il2cpp_codegen_object_new(UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977_il2cpp_TypeInfo_var);
		NullCheck(L_4);
		UnityEvent__ctor_m03D3E5121B9A6100351984D0CE3050B909CD3235(L_4, NULL);
		__this->____onMinimumWakeThresholdHit_8 = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____onMinimumWakeThresholdHit_8), (void*)L_4);
		// private UnityEvent _onMicDataSent = new UnityEvent();
		UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* L_5 = (UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977*)il2cpp_codegen_object_new(UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977_il2cpp_TypeInfo_var);
		NullCheck(L_5);
		UnityEvent__ctor_m03D3E5121B9A6100351984D0CE3050B909CD3235(L_5, NULL);
		__this->____onMicDataSent_9 = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____onMicDataSent_9), (void*)L_5);
		// private UnityEvent _onStoppedListeningDueToDeactivation = new UnityEvent();
		UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* L_6 = (UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977*)il2cpp_codegen_object_new(UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977_il2cpp_TypeInfo_var);
		NullCheck(L_6);
		UnityEvent__ctor_m03D3E5121B9A6100351984D0CE3050B909CD3235(L_6, NULL);
		__this->____onStoppedListeningDueToDeactivation_10 = L_6;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____onStoppedListeningDueToDeactivation_10), (void*)L_6);
		// private UnityEvent _onStoppedListeningDueToInactivity = new UnityEvent();
		UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* L_7 = (UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977*)il2cpp_codegen_object_new(UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977_il2cpp_TypeInfo_var);
		NullCheck(L_7);
		UnityEvent__ctor_m03D3E5121B9A6100351984D0CE3050B909CD3235(L_7, NULL);
		__this->____onStoppedListeningDueToInactivity_11 = L_7;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____onStoppedListeningDueToInactivity_11), (void*)L_7);
		// private UnityEvent _onStoppedListeningDueToTimeout = new UnityEvent();
		UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* L_8 = (UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977*)il2cpp_codegen_object_new(UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977_il2cpp_TypeInfo_var);
		NullCheck(L_8);
		UnityEvent__ctor_m03D3E5121B9A6100351984D0CE3050B909CD3235(L_8, NULL);
		__this->____onStoppedListeningDueToTimeout_12 = L_8;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____onStoppedListeningDueToTimeout_12), (void*)L_8);
		// private UnityEvent _onAborting = new UnityEvent();
		UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* L_9 = (UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977*)il2cpp_codegen_object_new(UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977_il2cpp_TypeInfo_var);
		NullCheck(L_9);
		UnityEvent__ctor_m03D3E5121B9A6100351984D0CE3050B909CD3235(L_9, NULL);
		__this->____onAborting_14 = L_9;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____onAborting_14), (void*)L_9);
		// private UnityEvent _onAborted = new UnityEvent();
		UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* L_10 = (UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977*)il2cpp_codegen_object_new(UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977_il2cpp_TypeInfo_var);
		NullCheck(L_10);
		UnityEvent__ctor_m03D3E5121B9A6100351984D0CE3050B909CD3235(L_10, NULL);
		__this->____onAborted_15 = L_10;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____onAborted_15), (void*)L_10);
		// private WitTranscriptionEvent _onCanceled = new WitTranscriptionEvent();
		WitTranscriptionEvent_t51292FC7EB7BAF38C2EC6B57D87724C1BEB3C739* L_11 = (WitTranscriptionEvent_t51292FC7EB7BAF38C2EC6B57D87724C1BEB3C739*)il2cpp_codegen_object_new(WitTranscriptionEvent_t51292FC7EB7BAF38C2EC6B57D87724C1BEB3C739_il2cpp_TypeInfo_var);
		NullCheck(L_11);
		WitTranscriptionEvent__ctor_m8FBA54D34EA19C07F367E3FF38F12102983D0B4D(L_11, NULL);
		__this->____onCanceled_16 = L_11;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____onCanceled_16), (void*)L_11);
		// private WitResponseEvent _onPartialResponse = new WitResponseEvent();
		WitResponseEvent_tC85152AAABC87956DF604749EEA671ADAA9EFFDA* L_12 = (WitResponseEvent_tC85152AAABC87956DF604749EEA671ADAA9EFFDA*)il2cpp_codegen_object_new(WitResponseEvent_tC85152AAABC87956DF604749EEA671ADAA9EFFDA_il2cpp_TypeInfo_var);
		NullCheck(L_12);
		WitResponseEvent__ctor_m8AF9374579A9418E2D8184AA0E0EB16E0631FED1(L_12, NULL);
		__this->____onPartialResponse_18 = L_12;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____onPartialResponse_18), (void*)L_12);
		// private WitResponseEvent _onResponse = new WitResponseEvent();
		WitResponseEvent_tC85152AAABC87956DF604749EEA671ADAA9EFFDA* L_13 = (WitResponseEvent_tC85152AAABC87956DF604749EEA671ADAA9EFFDA*)il2cpp_codegen_object_new(WitResponseEvent_tC85152AAABC87956DF604749EEA671ADAA9EFFDA_il2cpp_TypeInfo_var);
		NullCheck(L_13);
		WitResponseEvent__ctor_m8AF9374579A9418E2D8184AA0E0EB16E0631FED1(L_13, NULL);
		__this->____onResponse_19 = L_13;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____onResponse_19), (void*)L_13);
		// private WitErrorEvent _onError = new WitErrorEvent();
		WitErrorEvent_tF617F56AD9B12E89D73E125B79E441A56067F1B2* L_14 = (WitErrorEvent_tF617F56AD9B12E89D73E125B79E441A56067F1B2*)il2cpp_codegen_object_new(WitErrorEvent_tF617F56AD9B12E89D73E125B79E441A56067F1B2_il2cpp_TypeInfo_var);
		NullCheck(L_14);
		WitErrorEvent__ctor_m636011E937197FBC4535022399687EDF0F9BB698(L_14, NULL);
		__this->____onError_20 = L_14;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____onError_20), (void*)L_14);
		// private UnityEvent _onRequestCompleted = new UnityEvent();
		UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* L_15 = (UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977*)il2cpp_codegen_object_new(UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977_il2cpp_TypeInfo_var);
		NullCheck(L_15);
		UnityEvent__ctor_m03D3E5121B9A6100351984D0CE3050B909CD3235(L_15, NULL);
		__this->____onRequestCompleted_21 = L_15;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____onRequestCompleted_21), (void*)L_15);
		// private VoiceServiceRequestEvent _onComplete = new VoiceServiceRequestEvent();
		VoiceServiceRequestEvent_t7340AD8EBA1B3D36E1A95E47C8DBCD954F1DED13* L_16 = (VoiceServiceRequestEvent_t7340AD8EBA1B3D36E1A95E47C8DBCD954F1DED13*)il2cpp_codegen_object_new(VoiceServiceRequestEvent_t7340AD8EBA1B3D36E1A95E47C8DBCD954F1DED13_il2cpp_TypeInfo_var);
		NullCheck(L_16);
		VoiceServiceRequestEvent__ctor_m1D20A625F3700F2E3369F471E403A9274F4063A6(L_16, NULL);
		__this->____onComplete_22 = L_16;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____onComplete_22), (void*)L_16);
		// private UnityEvent _onStartListening = new UnityEvent();
		UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* L_17 = (UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977*)il2cpp_codegen_object_new(UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977_il2cpp_TypeInfo_var);
		NullCheck(L_17);
		UnityEvent__ctor_m03D3E5121B9A6100351984D0CE3050B909CD3235(L_17, NULL);
		__this->____onStartListening_24 = L_17;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____onStartListening_24), (void*)L_17);
		// private UnityEvent _onStoppedListening = new UnityEvent();
		UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* L_18 = (UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977*)il2cpp_codegen_object_new(UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977_il2cpp_TypeInfo_var);
		NullCheck(L_18);
		UnityEvent__ctor_m03D3E5121B9A6100351984D0CE3050B909CD3235(L_18, NULL);
		__this->____onStoppedListening_25 = L_18;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____onStoppedListening_25), (void*)L_18);
		// private WitMicLevelChangedEvent _onMicLevelChanged = new WitMicLevelChangedEvent();
		WitMicLevelChangedEvent_tA9B2889CB33EAA09656739F26AA70252ED15DEF7* L_19 = (WitMicLevelChangedEvent_tA9B2889CB33EAA09656739F26AA70252ED15DEF7*)il2cpp_codegen_object_new(WitMicLevelChangedEvent_tA9B2889CB33EAA09656739F26AA70252ED15DEF7_il2cpp_TypeInfo_var);
		NullCheck(L_19);
		WitMicLevelChangedEvent__ctor_m6DF80D93389B8C74A379AEECEEA4C4C7D672E6ED(L_19, NULL);
		__this->____onMicLevelChanged_26 = L_19;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____onMicLevelChanged_26), (void*)L_19);
		// private WitTranscriptionEvent _onPartialTranscription = new WitTranscriptionEvent();
		WitTranscriptionEvent_t51292FC7EB7BAF38C2EC6B57D87724C1BEB3C739* L_20 = (WitTranscriptionEvent_t51292FC7EB7BAF38C2EC6B57D87724C1BEB3C739*)il2cpp_codegen_object_new(WitTranscriptionEvent_t51292FC7EB7BAF38C2EC6B57D87724C1BEB3C739_il2cpp_TypeInfo_var);
		NullCheck(L_20);
		WitTranscriptionEvent__ctor_m8FBA54D34EA19C07F367E3FF38F12102983D0B4D(L_20, NULL);
		__this->____onPartialTranscription_28 = L_20;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____onPartialTranscription_28), (void*)L_20);
		// private WitTranscriptionEvent _onFullTranscription = new WitTranscriptionEvent();
		WitTranscriptionEvent_t51292FC7EB7BAF38C2EC6B57D87724C1BEB3C739* L_21 = (WitTranscriptionEvent_t51292FC7EB7BAF38C2EC6B57D87724C1BEB3C739*)il2cpp_codegen_object_new(WitTranscriptionEvent_t51292FC7EB7BAF38C2EC6B57D87724C1BEB3C739_il2cpp_TypeInfo_var);
		NullCheck(L_21);
		WitTranscriptionEvent__ctor_m8FBA54D34EA19C07F367E3FF38F12102983D0B4D(L_21, NULL);
		__this->____onFullTranscription_29 = L_21;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____onFullTranscription_29), (void*)L_21);
		// private HashSet<SpeechEvents> _listeners = new HashSet<SpeechEvents>();
		HashSet_1_tA2DD82C656859A8F953FE80E0E7CFAA242AFFEB7* L_22 = (HashSet_1_tA2DD82C656859A8F953FE80E0E7CFAA242AFFEB7*)il2cpp_codegen_object_new(HashSet_1_tA2DD82C656859A8F953FE80E0E7CFAA242AFFEB7_il2cpp_TypeInfo_var);
		NullCheck(L_22);
		HashSet_1__ctor_m69B3F52AC472B402F279635CEE94EA4635813A6E(L_22, HashSet_1__ctor_m69B3F52AC472B402F279635CEE94EA4635813A6E_RuntimeMethod_var);
		__this->____listeners_30 = L_22;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____listeners_30), (void*)L_22);
		EventRegistry__ctor_m6B8EBEFFEC6E4009C2DE562BE9970D287471FF55(__this, NULL);
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
// System.Void Meta.WitAi.Events.SpeechEvents/<>c::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__cctor_mF280153298DD9E2146B838857AF17331C3211874 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_t7AEAA449DBB19647334E677C7ED6C2EDDC69BB9B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CU3Ec_t7AEAA449DBB19647334E677C7ED6C2EDDC69BB9B* L_0 = (U3CU3Ec_t7AEAA449DBB19647334E677C7ED6C2EDDC69BB9B*)il2cpp_codegen_object_new(U3CU3Ec_t7AEAA449DBB19647334E677C7ED6C2EDDC69BB9B_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CU3Ec__ctor_m81EA5C37525A3ED4975C2F804A6B2CB424B5658E(L_0, NULL);
		((U3CU3Ec_t7AEAA449DBB19647334E677C7ED6C2EDDC69BB9B_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t7AEAA449DBB19647334E677C7ED6C2EDDC69BB9B_il2cpp_TypeInfo_var))->___U3CU3E9_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((U3CU3Ec_t7AEAA449DBB19647334E677C7ED6C2EDDC69BB9B_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t7AEAA449DBB19647334E677C7ED6C2EDDC69BB9B_il2cpp_TypeInfo_var))->___U3CU3E9_0), (void*)L_0);
		return;
	}
}
// System.Void Meta.WitAi.Events.SpeechEvents/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_m81EA5C37525A3ED4975C2F804A6B2CB424B5658E (U3CU3Ec_t7AEAA449DBB19647334E677C7ED6C2EDDC69BB9B* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// UnityEngine.Events.UnityEvent`1<Meta.WitAi.Configuration.WitRequestOptions> Meta.WitAi.Events.SpeechEvents/<>c::<SetEvents>b__85_0(Meta.WitAi.Events.SpeechEvents)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UnityEvent_1_tB2107CA265B68A4E479CAFA0530DAE8251E03F58* U3CU3Ec_U3CSetEventsU3Eb__85_0_mE80983963F85132C35627F544036531159937895 (U3CU3Ec_t7AEAA449DBB19647334E677C7ED6C2EDDC69BB9B* __this, SpeechEvents_tB51C31627EF79AB5734270C1558A6C6F67A5040E* ___events0, const RuntimeMethod* method) 
{
	WitRequestOptionsEvent_t84FCD56D356445821DECABA3F66CADF6B07ABB1B* G_B3_0 = NULL;
	{
		// SetEvent((events) => events?._onRequestOptionSetup, add);
		SpeechEvents_tB51C31627EF79AB5734270C1558A6C6F67A5040E* L_0 = ___events0;
		if (L_0)
		{
			goto IL_0006;
		}
	}
	{
		G_B3_0 = ((WitRequestOptionsEvent_t84FCD56D356445821DECABA3F66CADF6B07ABB1B*)(NULL));
		goto IL_000c;
	}

IL_0006:
	{
		SpeechEvents_tB51C31627EF79AB5734270C1558A6C6F67A5040E* L_1 = ___events0;
		NullCheck(L_1);
		WitRequestOptionsEvent_t84FCD56D356445821DECABA3F66CADF6B07ABB1B* L_2 = L_1->____onRequestOptionSetup_3;
		G_B3_0 = L_2;
	}

IL_000c:
	{
		return G_B3_0;
	}
}
// UnityEngine.Events.UnityEvent`1<Meta.WitAi.Requests.VoiceServiceRequest> Meta.WitAi.Events.SpeechEvents/<>c::<SetEvents>b__85_1(Meta.WitAi.Events.SpeechEvents)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UnityEvent_1_t2AED438DE5FAF741875343B8663599EC1EC222E2* U3CU3Ec_U3CSetEventsU3Eb__85_1_mA1BF469246E31D5B2E766610E42E3DA33C99D728 (U3CU3Ec_t7AEAA449DBB19647334E677C7ED6C2EDDC69BB9B* __this, SpeechEvents_tB51C31627EF79AB5734270C1558A6C6F67A5040E* ___events0, const RuntimeMethod* method) 
{
	VoiceServiceRequestEvent_t7340AD8EBA1B3D36E1A95E47C8DBCD954F1DED13* G_B3_0 = NULL;
	{
		// SetEvent((events) => events?._onRequestInitialized, add);
		SpeechEvents_tB51C31627EF79AB5734270C1558A6C6F67A5040E* L_0 = ___events0;
		if (L_0)
		{
			goto IL_0006;
		}
	}
	{
		G_B3_0 = ((VoiceServiceRequestEvent_t7340AD8EBA1B3D36E1A95E47C8DBCD954F1DED13*)(NULL));
		goto IL_000c;
	}

IL_0006:
	{
		SpeechEvents_tB51C31627EF79AB5734270C1558A6C6F67A5040E* L_1 = ___events0;
		NullCheck(L_1);
		VoiceServiceRequestEvent_t7340AD8EBA1B3D36E1A95E47C8DBCD954F1DED13* L_2 = L_1->____onRequestInitialized_4;
		G_B3_0 = L_2;
	}

IL_000c:
	{
		return G_B3_0;
	}
}
// UnityEngine.Events.UnityEvent`1<Meta.WitAi.WitRequest> Meta.WitAi.Events.SpeechEvents/<>c::<SetEvents>b__85_2(Meta.WitAi.Events.SpeechEvents)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UnityEvent_1_tD140963BF887A3E18CDB90439A9DD6FE5438B8B8* U3CU3Ec_U3CSetEventsU3Eb__85_2_mDE3BD135D4B6D5CC5E455FCD04C460589CE15FCC (U3CU3Ec_t7AEAA449DBB19647334E677C7ED6C2EDDC69BB9B* __this, SpeechEvents_tB51C31627EF79AB5734270C1558A6C6F67A5040E* ___events0, const RuntimeMethod* method) 
{
	WitRequestCreatedEvent_t1A01ABB6F9E3C02D0251B5DC9F5B290EDA0E319B* G_B3_0 = NULL;
	{
		// SetEvent((events) => events?._onRequestCreated, add);
		SpeechEvents_tB51C31627EF79AB5734270C1558A6C6F67A5040E* L_0 = ___events0;
		if (L_0)
		{
			goto IL_0006;
		}
	}
	{
		G_B3_0 = ((WitRequestCreatedEvent_t1A01ABB6F9E3C02D0251B5DC9F5B290EDA0E319B*)(NULL));
		goto IL_000c;
	}

IL_0006:
	{
		SpeechEvents_tB51C31627EF79AB5734270C1558A6C6F67A5040E* L_1 = ___events0;
		NullCheck(L_1);
		WitRequestCreatedEvent_t1A01ABB6F9E3C02D0251B5DC9F5B290EDA0E319B* L_2 = L_1->____onRequestCreated_5;
		G_B3_0 = L_2;
	}

IL_000c:
	{
		return G_B3_0;
	}
}
// UnityEngine.Events.UnityEvent`1<Meta.WitAi.Requests.VoiceServiceRequest> Meta.WitAi.Events.SpeechEvents/<>c::<SetEvents>b__85_3(Meta.WitAi.Events.SpeechEvents)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UnityEvent_1_t2AED438DE5FAF741875343B8663599EC1EC222E2* U3CU3Ec_U3CSetEventsU3Eb__85_3_m8B3DED7136BEF068416ED12BB6BB63212B26B730 (U3CU3Ec_t7AEAA449DBB19647334E677C7ED6C2EDDC69BB9B* __this, SpeechEvents_tB51C31627EF79AB5734270C1558A6C6F67A5040E* ___events0, const RuntimeMethod* method) 
{
	VoiceServiceRequestEvent_t7340AD8EBA1B3D36E1A95E47C8DBCD954F1DED13* G_B3_0 = NULL;
	{
		// SetEvent((events) => events?._onSend, add);
		SpeechEvents_tB51C31627EF79AB5734270C1558A6C6F67A5040E* L_0 = ___events0;
		if (L_0)
		{
			goto IL_0006;
		}
	}
	{
		G_B3_0 = ((VoiceServiceRequestEvent_t7340AD8EBA1B3D36E1A95E47C8DBCD954F1DED13*)(NULL));
		goto IL_000c;
	}

IL_0006:
	{
		SpeechEvents_tB51C31627EF79AB5734270C1558A6C6F67A5040E* L_1 = ___events0;
		NullCheck(L_1);
		VoiceServiceRequestEvent_t7340AD8EBA1B3D36E1A95E47C8DBCD954F1DED13* L_2 = L_1->____onSend_6;
		G_B3_0 = L_2;
	}

IL_000c:
	{
		return G_B3_0;
	}
}
// UnityEngine.Events.UnityEvent Meta.WitAi.Events.SpeechEvents/<>c::<SetEvents>b__85_4(Meta.WitAi.Events.SpeechEvents)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* U3CU3Ec_U3CSetEventsU3Eb__85_4_mE2B15E1813A504A4095BE31A055E292A4F6240E2 (U3CU3Ec_t7AEAA449DBB19647334E677C7ED6C2EDDC69BB9B* __this, SpeechEvents_tB51C31627EF79AB5734270C1558A6C6F67A5040E* ___events0, const RuntimeMethod* method) 
{
	UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* G_B3_0 = NULL;
	{
		// SetEvent((events) => events?._onMinimumWakeThresholdHit, add);
		SpeechEvents_tB51C31627EF79AB5734270C1558A6C6F67A5040E* L_0 = ___events0;
		if (L_0)
		{
			goto IL_0006;
		}
	}
	{
		G_B3_0 = ((UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977*)(NULL));
		goto IL_000c;
	}

IL_0006:
	{
		SpeechEvents_tB51C31627EF79AB5734270C1558A6C6F67A5040E* L_1 = ___events0;
		NullCheck(L_1);
		UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* L_2 = L_1->____onMinimumWakeThresholdHit_8;
		G_B3_0 = L_2;
	}

IL_000c:
	{
		return G_B3_0;
	}
}
// UnityEngine.Events.UnityEvent Meta.WitAi.Events.SpeechEvents/<>c::<SetEvents>b__85_5(Meta.WitAi.Events.SpeechEvents)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* U3CU3Ec_U3CSetEventsU3Eb__85_5_m74AA3B63EBF41D18CFA5CE567B292C077698C347 (U3CU3Ec_t7AEAA449DBB19647334E677C7ED6C2EDDC69BB9B* __this, SpeechEvents_tB51C31627EF79AB5734270C1558A6C6F67A5040E* ___events0, const RuntimeMethod* method) 
{
	UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* G_B3_0 = NULL;
	{
		// SetEvent((events) => events?._onMicDataSent, add);
		SpeechEvents_tB51C31627EF79AB5734270C1558A6C6F67A5040E* L_0 = ___events0;
		if (L_0)
		{
			goto IL_0006;
		}
	}
	{
		G_B3_0 = ((UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977*)(NULL));
		goto IL_000c;
	}

IL_0006:
	{
		SpeechEvents_tB51C31627EF79AB5734270C1558A6C6F67A5040E* L_1 = ___events0;
		NullCheck(L_1);
		UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* L_2 = L_1->____onMicDataSent_9;
		G_B3_0 = L_2;
	}

IL_000c:
	{
		return G_B3_0;
	}
}
// UnityEngine.Events.UnityEvent Meta.WitAi.Events.SpeechEvents/<>c::<SetEvents>b__85_6(Meta.WitAi.Events.SpeechEvents)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* U3CU3Ec_U3CSetEventsU3Eb__85_6_mD8D8A9106F6C797E03F17662987CA45EFC563302 (U3CU3Ec_t7AEAA449DBB19647334E677C7ED6C2EDDC69BB9B* __this, SpeechEvents_tB51C31627EF79AB5734270C1558A6C6F67A5040E* ___events0, const RuntimeMethod* method) 
{
	UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* G_B3_0 = NULL;
	{
		// SetEvent((events) => events?._onStoppedListeningDueToDeactivation, add);
		SpeechEvents_tB51C31627EF79AB5734270C1558A6C6F67A5040E* L_0 = ___events0;
		if (L_0)
		{
			goto IL_0006;
		}
	}
	{
		G_B3_0 = ((UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977*)(NULL));
		goto IL_000c;
	}

IL_0006:
	{
		SpeechEvents_tB51C31627EF79AB5734270C1558A6C6F67A5040E* L_1 = ___events0;
		NullCheck(L_1);
		UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* L_2 = L_1->____onStoppedListeningDueToDeactivation_10;
		G_B3_0 = L_2;
	}

IL_000c:
	{
		return G_B3_0;
	}
}
// UnityEngine.Events.UnityEvent Meta.WitAi.Events.SpeechEvents/<>c::<SetEvents>b__85_7(Meta.WitAi.Events.SpeechEvents)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* U3CU3Ec_U3CSetEventsU3Eb__85_7_mB9D79A47CB3EBE7FE9A74A7C85C821F8F4317995 (U3CU3Ec_t7AEAA449DBB19647334E677C7ED6C2EDDC69BB9B* __this, SpeechEvents_tB51C31627EF79AB5734270C1558A6C6F67A5040E* ___events0, const RuntimeMethod* method) 
{
	UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* G_B3_0 = NULL;
	{
		// SetEvent((events) => events?._onStoppedListeningDueToInactivity, add);
		SpeechEvents_tB51C31627EF79AB5734270C1558A6C6F67A5040E* L_0 = ___events0;
		if (L_0)
		{
			goto IL_0006;
		}
	}
	{
		G_B3_0 = ((UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977*)(NULL));
		goto IL_000c;
	}

IL_0006:
	{
		SpeechEvents_tB51C31627EF79AB5734270C1558A6C6F67A5040E* L_1 = ___events0;
		NullCheck(L_1);
		UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* L_2 = L_1->____onStoppedListeningDueToInactivity_11;
		G_B3_0 = L_2;
	}

IL_000c:
	{
		return G_B3_0;
	}
}
// UnityEngine.Events.UnityEvent Meta.WitAi.Events.SpeechEvents/<>c::<SetEvents>b__85_8(Meta.WitAi.Events.SpeechEvents)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* U3CU3Ec_U3CSetEventsU3Eb__85_8_mA26D5C66AA9DD9A852308E9771144E717E860EA7 (U3CU3Ec_t7AEAA449DBB19647334E677C7ED6C2EDDC69BB9B* __this, SpeechEvents_tB51C31627EF79AB5734270C1558A6C6F67A5040E* ___events0, const RuntimeMethod* method) 
{
	UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* G_B3_0 = NULL;
	{
		// SetEvent((events) => events?._onAborting, add);
		SpeechEvents_tB51C31627EF79AB5734270C1558A6C6F67A5040E* L_0 = ___events0;
		if (L_0)
		{
			goto IL_0006;
		}
	}
	{
		G_B3_0 = ((UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977*)(NULL));
		goto IL_000c;
	}

IL_0006:
	{
		SpeechEvents_tB51C31627EF79AB5734270C1558A6C6F67A5040E* L_1 = ___events0;
		NullCheck(L_1);
		UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* L_2 = L_1->____onAborting_14;
		G_B3_0 = L_2;
	}

IL_000c:
	{
		return G_B3_0;
	}
}
// UnityEngine.Events.UnityEvent Meta.WitAi.Events.SpeechEvents/<>c::<SetEvents>b__85_9(Meta.WitAi.Events.SpeechEvents)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* U3CU3Ec_U3CSetEventsU3Eb__85_9_m5683A88049F6448B180A7220B0AEAC110C63E75B (U3CU3Ec_t7AEAA449DBB19647334E677C7ED6C2EDDC69BB9B* __this, SpeechEvents_tB51C31627EF79AB5734270C1558A6C6F67A5040E* ___events0, const RuntimeMethod* method) 
{
	UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* G_B3_0 = NULL;
	{
		// SetEvent((events) => events?._onAborted, add);
		SpeechEvents_tB51C31627EF79AB5734270C1558A6C6F67A5040E* L_0 = ___events0;
		if (L_0)
		{
			goto IL_0006;
		}
	}
	{
		G_B3_0 = ((UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977*)(NULL));
		goto IL_000c;
	}

IL_0006:
	{
		SpeechEvents_tB51C31627EF79AB5734270C1558A6C6F67A5040E* L_1 = ___events0;
		NullCheck(L_1);
		UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* L_2 = L_1->____onAborted_15;
		G_B3_0 = L_2;
	}

IL_000c:
	{
		return G_B3_0;
	}
}
// UnityEngine.Events.UnityEvent`1<System.String> Meta.WitAi.Events.SpeechEvents/<>c::<SetEvents>b__85_10(Meta.WitAi.Events.SpeechEvents)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UnityEvent_1_tC9859540CF1468306CAB6D758C0A0D95DBCEC257* U3CU3Ec_U3CSetEventsU3Eb__85_10_mEDEB01ADA5566EF24329112EAB0DBCC5BD156D47 (U3CU3Ec_t7AEAA449DBB19647334E677C7ED6C2EDDC69BB9B* __this, SpeechEvents_tB51C31627EF79AB5734270C1558A6C6F67A5040E* ___events0, const RuntimeMethod* method) 
{
	WitTranscriptionEvent_t51292FC7EB7BAF38C2EC6B57D87724C1BEB3C739* G_B3_0 = NULL;
	{
		// SetEvent((events) => events?._onCanceled, add);
		SpeechEvents_tB51C31627EF79AB5734270C1558A6C6F67A5040E* L_0 = ___events0;
		if (L_0)
		{
			goto IL_0006;
		}
	}
	{
		G_B3_0 = ((WitTranscriptionEvent_t51292FC7EB7BAF38C2EC6B57D87724C1BEB3C739*)(NULL));
		goto IL_000c;
	}

IL_0006:
	{
		SpeechEvents_tB51C31627EF79AB5734270C1558A6C6F67A5040E* L_1 = ___events0;
		NullCheck(L_1);
		WitTranscriptionEvent_t51292FC7EB7BAF38C2EC6B57D87724C1BEB3C739* L_2 = L_1->____onCanceled_16;
		G_B3_0 = L_2;
	}

IL_000c:
	{
		return G_B3_0;
	}
}
// UnityEngine.Events.UnityEvent`1<Meta.WitAi.Json.WitResponseNode> Meta.WitAi.Events.SpeechEvents/<>c::<SetEvents>b__85_11(Meta.WitAi.Events.SpeechEvents)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UnityEvent_1_t3DC4F1FBCED8AF76C18EC16A2B55C43FBAE5E62D* U3CU3Ec_U3CSetEventsU3Eb__85_11_m9F2402F2C780070190CA335621300830A1F4446B (U3CU3Ec_t7AEAA449DBB19647334E677C7ED6C2EDDC69BB9B* __this, SpeechEvents_tB51C31627EF79AB5734270C1558A6C6F67A5040E* ___events0, const RuntimeMethod* method) 
{
	WitResponseEvent_tC85152AAABC87956DF604749EEA671ADAA9EFFDA* G_B3_0 = NULL;
	{
		// SetEvent((events) => events?._onPartialResponse, add);
		SpeechEvents_tB51C31627EF79AB5734270C1558A6C6F67A5040E* L_0 = ___events0;
		if (L_0)
		{
			goto IL_0006;
		}
	}
	{
		G_B3_0 = ((WitResponseEvent_tC85152AAABC87956DF604749EEA671ADAA9EFFDA*)(NULL));
		goto IL_000c;
	}

IL_0006:
	{
		SpeechEvents_tB51C31627EF79AB5734270C1558A6C6F67A5040E* L_1 = ___events0;
		NullCheck(L_1);
		WitResponseEvent_tC85152AAABC87956DF604749EEA671ADAA9EFFDA* L_2 = L_1->____onPartialResponse_18;
		G_B3_0 = L_2;
	}

IL_000c:
	{
		return G_B3_0;
	}
}
// UnityEngine.Events.UnityEvent`1<Meta.WitAi.Json.WitResponseNode> Meta.WitAi.Events.SpeechEvents/<>c::<SetEvents>b__85_12(Meta.WitAi.Events.SpeechEvents)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UnityEvent_1_t3DC4F1FBCED8AF76C18EC16A2B55C43FBAE5E62D* U3CU3Ec_U3CSetEventsU3Eb__85_12_m40A405001192D5C68410C2B6F078F44503BB8402 (U3CU3Ec_t7AEAA449DBB19647334E677C7ED6C2EDDC69BB9B* __this, SpeechEvents_tB51C31627EF79AB5734270C1558A6C6F67A5040E* ___events0, const RuntimeMethod* method) 
{
	WitResponseEvent_tC85152AAABC87956DF604749EEA671ADAA9EFFDA* G_B3_0 = NULL;
	{
		// SetEvent((events) => events?._onResponse, add);
		SpeechEvents_tB51C31627EF79AB5734270C1558A6C6F67A5040E* L_0 = ___events0;
		if (L_0)
		{
			goto IL_0006;
		}
	}
	{
		G_B3_0 = ((WitResponseEvent_tC85152AAABC87956DF604749EEA671ADAA9EFFDA*)(NULL));
		goto IL_000c;
	}

IL_0006:
	{
		SpeechEvents_tB51C31627EF79AB5734270C1558A6C6F67A5040E* L_1 = ___events0;
		NullCheck(L_1);
		WitResponseEvent_tC85152AAABC87956DF604749EEA671ADAA9EFFDA* L_2 = L_1->____onResponse_19;
		G_B3_0 = L_2;
	}

IL_000c:
	{
		return G_B3_0;
	}
}
// UnityEngine.Events.UnityEvent`2<System.String,System.String> Meta.WitAi.Events.SpeechEvents/<>c::<SetEvents>b__85_13(Meta.WitAi.Events.SpeechEvents)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UnityEvent_2_t71C350611CC2C5B350589972D791938B5D41AB50* U3CU3Ec_U3CSetEventsU3Eb__85_13_m7430957ADFDCDD9398FC7B9B95B6D44C9F2E354F (U3CU3Ec_t7AEAA449DBB19647334E677C7ED6C2EDDC69BB9B* __this, SpeechEvents_tB51C31627EF79AB5734270C1558A6C6F67A5040E* ___events0, const RuntimeMethod* method) 
{
	WitErrorEvent_tF617F56AD9B12E89D73E125B79E441A56067F1B2* G_B3_0 = NULL;
	{
		// SetEvent((events) => events?._onError, add);
		SpeechEvents_tB51C31627EF79AB5734270C1558A6C6F67A5040E* L_0 = ___events0;
		if (L_0)
		{
			goto IL_0006;
		}
	}
	{
		G_B3_0 = ((WitErrorEvent_tF617F56AD9B12E89D73E125B79E441A56067F1B2*)(NULL));
		goto IL_000c;
	}

IL_0006:
	{
		SpeechEvents_tB51C31627EF79AB5734270C1558A6C6F67A5040E* L_1 = ___events0;
		NullCheck(L_1);
		WitErrorEvent_tF617F56AD9B12E89D73E125B79E441A56067F1B2* L_2 = L_1->____onError_20;
		G_B3_0 = L_2;
	}

IL_000c:
	{
		return G_B3_0;
	}
}
// UnityEngine.Events.UnityEvent Meta.WitAi.Events.SpeechEvents/<>c::<SetEvents>b__85_14(Meta.WitAi.Events.SpeechEvents)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* U3CU3Ec_U3CSetEventsU3Eb__85_14_m6346B857CF7F52407244AD37D0C6B03EE700B920 (U3CU3Ec_t7AEAA449DBB19647334E677C7ED6C2EDDC69BB9B* __this, SpeechEvents_tB51C31627EF79AB5734270C1558A6C6F67A5040E* ___events0, const RuntimeMethod* method) 
{
	UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* G_B3_0 = NULL;
	{
		// SetEvent((events) => events?._onRequestCompleted, add);
		SpeechEvents_tB51C31627EF79AB5734270C1558A6C6F67A5040E* L_0 = ___events0;
		if (L_0)
		{
			goto IL_0006;
		}
	}
	{
		G_B3_0 = ((UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977*)(NULL));
		goto IL_000c;
	}

IL_0006:
	{
		SpeechEvents_tB51C31627EF79AB5734270C1558A6C6F67A5040E* L_1 = ___events0;
		NullCheck(L_1);
		UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* L_2 = L_1->____onRequestCompleted_21;
		G_B3_0 = L_2;
	}

IL_000c:
	{
		return G_B3_0;
	}
}
// UnityEngine.Events.UnityEvent`1<Meta.WitAi.Requests.VoiceServiceRequest> Meta.WitAi.Events.SpeechEvents/<>c::<SetEvents>b__85_15(Meta.WitAi.Events.SpeechEvents)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UnityEvent_1_t2AED438DE5FAF741875343B8663599EC1EC222E2* U3CU3Ec_U3CSetEventsU3Eb__85_15_mE3A7552CEF4F8CC5747A954859616B9D8F8E80AD (U3CU3Ec_t7AEAA449DBB19647334E677C7ED6C2EDDC69BB9B* __this, SpeechEvents_tB51C31627EF79AB5734270C1558A6C6F67A5040E* ___events0, const RuntimeMethod* method) 
{
	VoiceServiceRequestEvent_t7340AD8EBA1B3D36E1A95E47C8DBCD954F1DED13* G_B3_0 = NULL;
	{
		// SetEvent((events) => events?._onComplete, add);
		SpeechEvents_tB51C31627EF79AB5734270C1558A6C6F67A5040E* L_0 = ___events0;
		if (L_0)
		{
			goto IL_0006;
		}
	}
	{
		G_B3_0 = ((VoiceServiceRequestEvent_t7340AD8EBA1B3D36E1A95E47C8DBCD954F1DED13*)(NULL));
		goto IL_000c;
	}

IL_0006:
	{
		SpeechEvents_tB51C31627EF79AB5734270C1558A6C6F67A5040E* L_1 = ___events0;
		NullCheck(L_1);
		VoiceServiceRequestEvent_t7340AD8EBA1B3D36E1A95E47C8DBCD954F1DED13* L_2 = L_1->____onComplete_22;
		G_B3_0 = L_2;
	}

IL_000c:
	{
		return G_B3_0;
	}
}
// UnityEngine.Events.UnityEvent Meta.WitAi.Events.SpeechEvents/<>c::<SetEvents>b__85_16(Meta.WitAi.Events.SpeechEvents)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* U3CU3Ec_U3CSetEventsU3Eb__85_16_m1AF991967BAC2CDA43D3F95662145920F95B51A5 (U3CU3Ec_t7AEAA449DBB19647334E677C7ED6C2EDDC69BB9B* __this, SpeechEvents_tB51C31627EF79AB5734270C1558A6C6F67A5040E* ___events0, const RuntimeMethod* method) 
{
	UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* G_B3_0 = NULL;
	{
		// SetEvent((events) => events?._onStartListening, add);
		SpeechEvents_tB51C31627EF79AB5734270C1558A6C6F67A5040E* L_0 = ___events0;
		if (L_0)
		{
			goto IL_0006;
		}
	}
	{
		G_B3_0 = ((UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977*)(NULL));
		goto IL_000c;
	}

IL_0006:
	{
		SpeechEvents_tB51C31627EF79AB5734270C1558A6C6F67A5040E* L_1 = ___events0;
		NullCheck(L_1);
		UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* L_2 = L_1->____onStartListening_24;
		G_B3_0 = L_2;
	}

IL_000c:
	{
		return G_B3_0;
	}
}
// UnityEngine.Events.UnityEvent Meta.WitAi.Events.SpeechEvents/<>c::<SetEvents>b__85_17(Meta.WitAi.Events.SpeechEvents)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* U3CU3Ec_U3CSetEventsU3Eb__85_17_m724F7BBBA1564846C5B108FEEC4D6A3A58669846 (U3CU3Ec_t7AEAA449DBB19647334E677C7ED6C2EDDC69BB9B* __this, SpeechEvents_tB51C31627EF79AB5734270C1558A6C6F67A5040E* ___events0, const RuntimeMethod* method) 
{
	UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* G_B3_0 = NULL;
	{
		// SetEvent((events) => events?._onStoppedListening, add);
		SpeechEvents_tB51C31627EF79AB5734270C1558A6C6F67A5040E* L_0 = ___events0;
		if (L_0)
		{
			goto IL_0006;
		}
	}
	{
		G_B3_0 = ((UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977*)(NULL));
		goto IL_000c;
	}

IL_0006:
	{
		SpeechEvents_tB51C31627EF79AB5734270C1558A6C6F67A5040E* L_1 = ___events0;
		NullCheck(L_1);
		UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* L_2 = L_1->____onStoppedListening_25;
		G_B3_0 = L_2;
	}

IL_000c:
	{
		return G_B3_0;
	}
}
// UnityEngine.Events.UnityEvent`1<System.Single> Meta.WitAi.Events.SpeechEvents/<>c::<SetEvents>b__85_18(Meta.WitAi.Events.SpeechEvents)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UnityEvent_1_tDD811EB8F49CEE97BA6DF59344DFE6C6F42553D4* U3CU3Ec_U3CSetEventsU3Eb__85_18_m15931B8D380FE72BE3D4994FD031D227FF7A2758 (U3CU3Ec_t7AEAA449DBB19647334E677C7ED6C2EDDC69BB9B* __this, SpeechEvents_tB51C31627EF79AB5734270C1558A6C6F67A5040E* ___events0, const RuntimeMethod* method) 
{
	WitMicLevelChangedEvent_tA9B2889CB33EAA09656739F26AA70252ED15DEF7* G_B3_0 = NULL;
	{
		// SetEvent((events) => events?._onMicLevelChanged, add);
		SpeechEvents_tB51C31627EF79AB5734270C1558A6C6F67A5040E* L_0 = ___events0;
		if (L_0)
		{
			goto IL_0006;
		}
	}
	{
		G_B3_0 = ((WitMicLevelChangedEvent_tA9B2889CB33EAA09656739F26AA70252ED15DEF7*)(NULL));
		goto IL_000c;
	}

IL_0006:
	{
		SpeechEvents_tB51C31627EF79AB5734270C1558A6C6F67A5040E* L_1 = ___events0;
		NullCheck(L_1);
		WitMicLevelChangedEvent_tA9B2889CB33EAA09656739F26AA70252ED15DEF7* L_2 = L_1->____onMicLevelChanged_26;
		G_B3_0 = L_2;
	}

IL_000c:
	{
		return G_B3_0;
	}
}
// UnityEngine.Events.UnityEvent`1<System.String> Meta.WitAi.Events.SpeechEvents/<>c::<SetEvents>b__85_19(Meta.WitAi.Events.SpeechEvents)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UnityEvent_1_tC9859540CF1468306CAB6D758C0A0D95DBCEC257* U3CU3Ec_U3CSetEventsU3Eb__85_19_mAA82BED4FC768404E40CFE3021E56C01F813852A (U3CU3Ec_t7AEAA449DBB19647334E677C7ED6C2EDDC69BB9B* __this, SpeechEvents_tB51C31627EF79AB5734270C1558A6C6F67A5040E* ___events0, const RuntimeMethod* method) 
{
	WitTranscriptionEvent_t51292FC7EB7BAF38C2EC6B57D87724C1BEB3C739* G_B3_0 = NULL;
	{
		// SetEvent((events) => events?._onPartialTranscription, add);
		SpeechEvents_tB51C31627EF79AB5734270C1558A6C6F67A5040E* L_0 = ___events0;
		if (L_0)
		{
			goto IL_0006;
		}
	}
	{
		G_B3_0 = ((WitTranscriptionEvent_t51292FC7EB7BAF38C2EC6B57D87724C1BEB3C739*)(NULL));
		goto IL_000c;
	}

IL_0006:
	{
		SpeechEvents_tB51C31627EF79AB5734270C1558A6C6F67A5040E* L_1 = ___events0;
		NullCheck(L_1);
		WitTranscriptionEvent_t51292FC7EB7BAF38C2EC6B57D87724C1BEB3C739* L_2 = L_1->____onPartialTranscription_28;
		G_B3_0 = L_2;
	}

IL_000c:
	{
		return G_B3_0;
	}
}
// UnityEngine.Events.UnityEvent`1<System.String> Meta.WitAi.Events.SpeechEvents/<>c::<SetEvents>b__85_20(Meta.WitAi.Events.SpeechEvents)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UnityEvent_1_tC9859540CF1468306CAB6D758C0A0D95DBCEC257* U3CU3Ec_U3CSetEventsU3Eb__85_20_m7E66AA19F9070096AF85B7767CC259A88C84365F (U3CU3Ec_t7AEAA449DBB19647334E677C7ED6C2EDDC69BB9B* __this, SpeechEvents_tB51C31627EF79AB5734270C1558A6C6F67A5040E* ___events0, const RuntimeMethod* method) 
{
	WitTranscriptionEvent_t51292FC7EB7BAF38C2EC6B57D87724C1BEB3C739* G_B3_0 = NULL;
	{
		// SetEvent((events) => events?._onFullTranscription, add);
		SpeechEvents_tB51C31627EF79AB5734270C1558A6C6F67A5040E* L_0 = ___events0;
		if (L_0)
		{
			goto IL_0006;
		}
	}
	{
		G_B3_0 = ((WitTranscriptionEvent_t51292FC7EB7BAF38C2EC6B57D87724C1BEB3C739*)(NULL));
		goto IL_000c;
	}

IL_0006:
	{
		SpeechEvents_tB51C31627EF79AB5734270C1558A6C6F67A5040E* L_1 = ___events0;
		NullCheck(L_1);
		WitTranscriptionEvent_t51292FC7EB7BAF38C2EC6B57D87724C1BEB3C739* L_2 = L_1->____onFullTranscription_29;
		G_B3_0 = L_2;
	}

IL_000c:
	{
		return G_B3_0;
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
// System.Void Meta.WitAi.Events.SpeechEvents/<>c__DisplayClass86_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass86_0__ctor_mF0E5363F8EB42666E46097F3923370E1EB54B3F6 (U3CU3Ec__DisplayClass86_0_t966EF3616DEAE30A97398BD0490A7BFF1725D638* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// System.Void Meta.WitAi.Events.SpeechEvents/<>c__DisplayClass86_0::<SetEvent>b__0()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass86_0_U3CSetEventU3Eb__0_mD93C82C2408A8F0680312707D3CE86EBDA167FEA (U3CU3Ec__DisplayClass86_0_t966EF3616DEAE30A97398BD0490A7BFF1725D638* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_m751DE47849B680B5DC08CB056693D60F563D766B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_m70C21D014D6AE2587F43E2974BA95CEA36BC6417_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_m18767B2633635D7E9E1B5094743F90E70447F0AE_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashSet_1_GetEnumerator_m5FD422E9616016665B8B8C34C4A52C3F6147D763_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	Enumerator_t687446157680B89D4DF7AA9AB619F441A3B6E2EB V_0;
	memset((&V_0), 0, sizeof(V_0));
	SpeechEvents_tB51C31627EF79AB5734270C1558A6C6F67A5040E* V_1 = NULL;
	UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* G_B4_0 = NULL;
	UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* G_B3_0 = NULL;
	{
		// foreach (var listener in _listeners)
		SpeechEvents_tB51C31627EF79AB5734270C1558A6C6F67A5040E* L_0 = __this->___U3CU3E4__this_0;
		NullCheck(L_0);
		HashSet_1_tA2DD82C656859A8F953FE80E0E7CFAA242AFFEB7* L_1 = L_0->____listeners_30;
		NullCheck(L_1);
		Enumerator_t687446157680B89D4DF7AA9AB619F441A3B6E2EB L_2;
		L_2 = HashSet_1_GetEnumerator_m5FD422E9616016665B8B8C34C4A52C3F6147D763(L_1, HashSet_1_GetEnumerator_m5FD422E9616016665B8B8C34C4A52C3F6147D763_RuntimeMethod_var);
		V_0 = L_2;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0042:
			{// begin finally (depth: 1)
				Enumerator_Dispose_m751DE47849B680B5DC08CB056693D60F563D766B((&V_0), Enumerator_Dispose_m751DE47849B680B5DC08CB056693D60F563D766B_RuntimeMethod_var);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_0037_1;
			}

IL_0015_1:
			{
				// foreach (var listener in _listeners)
				SpeechEvents_tB51C31627EF79AB5734270C1558A6C6F67A5040E* L_3;
				L_3 = Enumerator_get_Current_m18767B2633635D7E9E1B5094743F90E70447F0AE_inline((&V_0), Enumerator_get_Current_m18767B2633635D7E9E1B5094743F90E70447F0AE_RuntimeMethod_var);
				V_1 = L_3;
				// getEvent(listener)?.Invoke();
				Func_2_tDCA29CF738B0C5F51018D3D7FCBCC1BCF5EF829A* L_4 = __this->___getEvent_1;
				SpeechEvents_tB51C31627EF79AB5734270C1558A6C6F67A5040E* L_5 = V_1;
				NullCheck(L_4);
				UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* L_6;
				L_6 = Func_2_Invoke_mA34300A70C486A80C3D6B0790FB03DFF483C4EF8_inline(L_4, L_5, NULL);
				UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* L_7 = L_6;
				G_B3_0 = L_7;
				if (L_7)
				{
					G_B4_0 = L_7;
					goto IL_0030_1;
				}
			}
			{
				goto IL_0036_1;
			}

IL_0030_1:
			{
				NullCheck(G_B4_0);
				UnityEvent_Invoke_mFBF80D59B03C30C5FE6A06F897D954ACADE061D2(G_B4_0, NULL);
			}

IL_0036_1:
			{
			}

IL_0037_1:
			{
				// foreach (var listener in _listeners)
				bool L_8;
				L_8 = Enumerator_MoveNext_m70C21D014D6AE2587F43E2974BA95CEA36BC6417((&V_0), Enumerator_MoveNext_m70C21D014D6AE2587F43E2974BA95CEA36BC6417_RuntimeMethod_var);
				if (L_8)
				{
					goto IL_0015_1;
				}
			}
			{
				goto IL_0051;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0051:
	{
		// });
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
// Meta.WitAi.Events.WitMicLevelChangedEvent Meta.WitAi.Events.UnityEventListeners.AudioEventListener::get_OnMicAudioLevelChanged()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR WitMicLevelChangedEvent_tA9B2889CB33EAA09656739F26AA70252ED15DEF7* AudioEventListener_get_OnMicAudioLevelChanged_mEE1784DDC452DA4F32769C49B3B80C9FA31671FC (AudioEventListener_t39E39D7138664E757F322BB01CE82890433659AB* __this, const RuntimeMethod* method) 
{
	{
		// public WitMicLevelChangedEvent OnMicAudioLevelChanged => onMicAudioLevelChanged;
		WitMicLevelChangedEvent_tA9B2889CB33EAA09656739F26AA70252ED15DEF7* L_0 = __this->___onMicAudioLevelChanged_4;
		return L_0;
	}
}
// UnityEngine.Events.UnityEvent Meta.WitAi.Events.UnityEventListeners.AudioEventListener::get_OnMicStartedListening()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* AudioEventListener_get_OnMicStartedListening_m4E2A404A8FE9AEBCA91DE4E4357E2F431AF8DE65 (AudioEventListener_t39E39D7138664E757F322BB01CE82890433659AB* __this, const RuntimeMethod* method) 
{
	{
		// public UnityEvent OnMicStartedListening => onMicStartedListening;
		UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* L_0 = __this->___onMicStartedListening_5;
		return L_0;
	}
}
// UnityEngine.Events.UnityEvent Meta.WitAi.Events.UnityEventListeners.AudioEventListener::get_OnMicStoppedListening()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* AudioEventListener_get_OnMicStoppedListening_mD7EB58EF3FB0068F3BD06A26B45D438003C92297 (AudioEventListener_t39E39D7138664E757F322BB01CE82890433659AB* __this, const RuntimeMethod* method) 
{
	{
		// public UnityEvent OnMicStoppedListening => onMicStoppedListening;
		UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* L_0 = __this->___onMicStoppedListening_6;
		return L_0;
	}
}
// Meta.WitAi.Interfaces.IAudioInputEvents Meta.WitAi.Events.UnityEventListeners.AudioEventListener::get_AudioInputEvents()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* AudioEventListener_get_AudioInputEvents_mE014E105EE8CF779F32A3E922FAEE9B1A8C924B3 (AudioEventListener_t39E39D7138664E757F322BB01CE82890433659AB* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisIAudioEventProvider_t50BB2A75EF5F19B841A69808B2C1AEEB67AA7F04_mF824A5D3469ACC34283E9E08D09926481440F6B6_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IAudioEventProvider_t50BB2A75EF5F19B841A69808B2C1AEEB67AA7F04_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	RuntimeObject* V_1 = NULL;
	bool V_2 = false;
	RuntimeObject* V_3 = NULL;
	{
		// if (null == _events)
		RuntimeObject* L_0 = __this->____events_7;
		V_0 = (bool)((((RuntimeObject*)(RuntimeObject*)L_0) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_002d;
		}
	}
	{
		// var eventProvider = GetComponent<IAudioEventProvider>();
		RuntimeObject* L_2;
		L_2 = Component_GetComponent_TisIAudioEventProvider_t50BB2A75EF5F19B841A69808B2C1AEEB67AA7F04_mF824A5D3469ACC34283E9E08D09926481440F6B6(__this, Component_GetComponent_TisIAudioEventProvider_t50BB2A75EF5F19B841A69808B2C1AEEB67AA7F04_mF824A5D3469ACC34283E9E08D09926481440F6B6_RuntimeMethod_var);
		V_1 = L_2;
		// if (null != eventProvider)
		RuntimeObject* L_3 = V_1;
		V_2 = (bool)((!(((RuntimeObject*)(RuntimeObject*)L_3) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		bool L_4 = V_2;
		if (!L_4)
		{
			goto IL_002c;
		}
	}
	{
		// _events = eventProvider.AudioEvents;
		RuntimeObject* L_5 = V_1;
		NullCheck(L_5);
		RuntimeObject* L_6;
		L_6 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* Meta.WitAi.Interfaces.IAudioInputEvents Meta.WitAi.Interfaces.IAudioEventProvider::get_AudioEvents() */, IAudioEventProvider_t50BB2A75EF5F19B841A69808B2C1AEEB67AA7F04_il2cpp_TypeInfo_var, L_5);
		__this->____events_7 = L_6;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____events_7), (void*)L_6);
	}

IL_002c:
	{
	}

IL_002d:
	{
		// return _events;
		RuntimeObject* L_7 = __this->____events_7;
		V_3 = L_7;
		goto IL_0036;
	}

IL_0036:
	{
		// }
		RuntimeObject* L_8 = V_3;
		return L_8;
	}
}
// System.Void Meta.WitAi.Events.UnityEventListeners.AudioEventListener::OnEnable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioEventListener_OnEnable_mC6DCBDE1358B761B1574AB58B41CA1E004D8115D (AudioEventListener_t39E39D7138664E757F322BB01CE82890433659AB* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IAudioInputEvents_tF18D401737AABD0DF7EC79AD5846A2E82F635655_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityAction_1_tAEFA3C1C529F0E1AD7C7C7AFC88822D359E7AC90_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityEvent_1_AddListener_m44E396BC4484BD75427FDD8CBE0B533CCAD8C1EC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityEvent_1_Invoke_mABC41DCEDDFA68F8F39C0DFC1CF55B7C1B70A805_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityEvent_Invoke_mFBF80D59B03C30C5FE6A06F897D954ACADE061D2_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	bool V_1 = false;
	{
		// var events = AudioInputEvents;
		RuntimeObject* L_0;
		L_0 = AudioEventListener_get_AudioInputEvents_mE014E105EE8CF779F32A3E922FAEE9B1A8C924B3(__this, NULL);
		V_0 = L_0;
		// if (null != events)
		RuntimeObject* L_1 = V_0;
		V_1 = (bool)((!(((RuntimeObject*)(RuntimeObject*)L_1) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		bool L_2 = V_1;
		if (!L_2)
		{
			goto IL_0069;
		}
	}
	{
		// events.OnMicAudioLevelChanged.AddListener(onMicAudioLevelChanged.Invoke);
		RuntimeObject* L_3 = V_0;
		NullCheck(L_3);
		WitMicLevelChangedEvent_tA9B2889CB33EAA09656739F26AA70252ED15DEF7* L_4;
		L_4 = InterfaceFuncInvoker0< WitMicLevelChangedEvent_tA9B2889CB33EAA09656739F26AA70252ED15DEF7* >::Invoke(0 /* Meta.WitAi.Events.WitMicLevelChangedEvent Meta.WitAi.Interfaces.IAudioInputEvents::get_OnMicAudioLevelChanged() */, IAudioInputEvents_tF18D401737AABD0DF7EC79AD5846A2E82F635655_il2cpp_TypeInfo_var, L_3);
		WitMicLevelChangedEvent_tA9B2889CB33EAA09656739F26AA70252ED15DEF7* L_5 = __this->___onMicAudioLevelChanged_4;
		UnityAction_1_tAEFA3C1C529F0E1AD7C7C7AFC88822D359E7AC90* L_6 = (UnityAction_1_tAEFA3C1C529F0E1AD7C7C7AFC88822D359E7AC90*)il2cpp_codegen_object_new(UnityAction_1_tAEFA3C1C529F0E1AD7C7C7AFC88822D359E7AC90_il2cpp_TypeInfo_var);
		NullCheck(L_6);
		UnityAction_1__ctor_mF770070D0A4FE93F6E04DA37D2EC60429EA545E5(L_6, L_5, (intptr_t)((void*)UnityEvent_1_Invoke_mABC41DCEDDFA68F8F39C0DFC1CF55B7C1B70A805_RuntimeMethod_var), NULL);
		NullCheck(L_4);
		UnityEvent_1_AddListener_m44E396BC4484BD75427FDD8CBE0B533CCAD8C1EC(L_4, L_6, UnityEvent_1_AddListener_m44E396BC4484BD75427FDD8CBE0B533CCAD8C1EC_RuntimeMethod_var);
		// events.OnMicStartedListening.AddListener(onMicStartedListening.Invoke);
		RuntimeObject* L_7 = V_0;
		NullCheck(L_7);
		UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* L_8;
		L_8 = InterfaceFuncInvoker0< UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* >::Invoke(1 /* UnityEngine.Events.UnityEvent Meta.WitAi.Interfaces.IAudioInputEvents::get_OnMicStartedListening() */, IAudioInputEvents_tF18D401737AABD0DF7EC79AD5846A2E82F635655_il2cpp_TypeInfo_var, L_7);
		UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* L_9 = __this->___onMicStartedListening_5;
		UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* L_10 = (UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7*)il2cpp_codegen_object_new(UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7_il2cpp_TypeInfo_var);
		NullCheck(L_10);
		UnityAction__ctor_mC53E20D6B66E0D5688CD81B88DBB34F5A58B7131(L_10, L_9, (intptr_t)((void*)UnityEvent_Invoke_mFBF80D59B03C30C5FE6A06F897D954ACADE061D2_RuntimeMethod_var), NULL);
		NullCheck(L_8);
		UnityEvent_AddListener_m8AA4287C16628486B41DA41CA5E7A856A706D302(L_8, L_10, NULL);
		// events.OnMicStoppedListening.AddListener(onMicStoppedListening.Invoke);
		RuntimeObject* L_11 = V_0;
		NullCheck(L_11);
		UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* L_12;
		L_12 = InterfaceFuncInvoker0< UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* >::Invoke(2 /* UnityEngine.Events.UnityEvent Meta.WitAi.Interfaces.IAudioInputEvents::get_OnMicStoppedListening() */, IAudioInputEvents_tF18D401737AABD0DF7EC79AD5846A2E82F635655_il2cpp_TypeInfo_var, L_11);
		UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* L_13 = __this->___onMicStoppedListening_6;
		UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* L_14 = (UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7*)il2cpp_codegen_object_new(UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7_il2cpp_TypeInfo_var);
		NullCheck(L_14);
		UnityAction__ctor_mC53E20D6B66E0D5688CD81B88DBB34F5A58B7131(L_14, L_13, (intptr_t)((void*)UnityEvent_Invoke_mFBF80D59B03C30C5FE6A06F897D954ACADE061D2_RuntimeMethod_var), NULL);
		NullCheck(L_12);
		UnityEvent_AddListener_m8AA4287C16628486B41DA41CA5E7A856A706D302(L_12, L_14, NULL);
	}

IL_0069:
	{
		// }
		return;
	}
}
// System.Void Meta.WitAi.Events.UnityEventListeners.AudioEventListener::OnDisable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioEventListener_OnDisable_mD85E304AA81BD7BB1A4F072AC08EFE6517D490BC (AudioEventListener_t39E39D7138664E757F322BB01CE82890433659AB* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IAudioInputEvents_tF18D401737AABD0DF7EC79AD5846A2E82F635655_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityAction_1_tAEFA3C1C529F0E1AD7C7C7AFC88822D359E7AC90_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityEvent_1_Invoke_mABC41DCEDDFA68F8F39C0DFC1CF55B7C1B70A805_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityEvent_1_RemoveListener_m6F51818308066F0E5EA7B37AC25ABDF12FADAEA9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityEvent_Invoke_mFBF80D59B03C30C5FE6A06F897D954ACADE061D2_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	bool V_1 = false;
	{
		// var events = AudioInputEvents;
		RuntimeObject* L_0;
		L_0 = AudioEventListener_get_AudioInputEvents_mE014E105EE8CF779F32A3E922FAEE9B1A8C924B3(__this, NULL);
		V_0 = L_0;
		// if (null != events)
		RuntimeObject* L_1 = V_0;
		V_1 = (bool)((!(((RuntimeObject*)(RuntimeObject*)L_1) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		bool L_2 = V_1;
		if (!L_2)
		{
			goto IL_0069;
		}
	}
	{
		// events.OnMicAudioLevelChanged.RemoveListener(onMicAudioLevelChanged.Invoke);
		RuntimeObject* L_3 = V_0;
		NullCheck(L_3);
		WitMicLevelChangedEvent_tA9B2889CB33EAA09656739F26AA70252ED15DEF7* L_4;
		L_4 = InterfaceFuncInvoker0< WitMicLevelChangedEvent_tA9B2889CB33EAA09656739F26AA70252ED15DEF7* >::Invoke(0 /* Meta.WitAi.Events.WitMicLevelChangedEvent Meta.WitAi.Interfaces.IAudioInputEvents::get_OnMicAudioLevelChanged() */, IAudioInputEvents_tF18D401737AABD0DF7EC79AD5846A2E82F635655_il2cpp_TypeInfo_var, L_3);
		WitMicLevelChangedEvent_tA9B2889CB33EAA09656739F26AA70252ED15DEF7* L_5 = __this->___onMicAudioLevelChanged_4;
		UnityAction_1_tAEFA3C1C529F0E1AD7C7C7AFC88822D359E7AC90* L_6 = (UnityAction_1_tAEFA3C1C529F0E1AD7C7C7AFC88822D359E7AC90*)il2cpp_codegen_object_new(UnityAction_1_tAEFA3C1C529F0E1AD7C7C7AFC88822D359E7AC90_il2cpp_TypeInfo_var);
		NullCheck(L_6);
		UnityAction_1__ctor_mF770070D0A4FE93F6E04DA37D2EC60429EA545E5(L_6, L_5, (intptr_t)((void*)UnityEvent_1_Invoke_mABC41DCEDDFA68F8F39C0DFC1CF55B7C1B70A805_RuntimeMethod_var), NULL);
		NullCheck(L_4);
		UnityEvent_1_RemoveListener_m6F51818308066F0E5EA7B37AC25ABDF12FADAEA9(L_4, L_6, UnityEvent_1_RemoveListener_m6F51818308066F0E5EA7B37AC25ABDF12FADAEA9_RuntimeMethod_var);
		// events.OnMicStartedListening.RemoveListener(onMicStartedListening.Invoke);
		RuntimeObject* L_7 = V_0;
		NullCheck(L_7);
		UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* L_8;
		L_8 = InterfaceFuncInvoker0< UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* >::Invoke(1 /* UnityEngine.Events.UnityEvent Meta.WitAi.Interfaces.IAudioInputEvents::get_OnMicStartedListening() */, IAudioInputEvents_tF18D401737AABD0DF7EC79AD5846A2E82F635655_il2cpp_TypeInfo_var, L_7);
		UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* L_9 = __this->___onMicStartedListening_5;
		UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* L_10 = (UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7*)il2cpp_codegen_object_new(UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7_il2cpp_TypeInfo_var);
		NullCheck(L_10);
		UnityAction__ctor_mC53E20D6B66E0D5688CD81B88DBB34F5A58B7131(L_10, L_9, (intptr_t)((void*)UnityEvent_Invoke_mFBF80D59B03C30C5FE6A06F897D954ACADE061D2_RuntimeMethod_var), NULL);
		NullCheck(L_8);
		UnityEvent_RemoveListener_m0E138F5575CB4363019D3DA570E98FAD502B812C(L_8, L_10, NULL);
		// events.OnMicStoppedListening.RemoveListener(onMicStoppedListening.Invoke);
		RuntimeObject* L_11 = V_0;
		NullCheck(L_11);
		UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* L_12;
		L_12 = InterfaceFuncInvoker0< UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* >::Invoke(2 /* UnityEngine.Events.UnityEvent Meta.WitAi.Interfaces.IAudioInputEvents::get_OnMicStoppedListening() */, IAudioInputEvents_tF18D401737AABD0DF7EC79AD5846A2E82F635655_il2cpp_TypeInfo_var, L_11);
		UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* L_13 = __this->___onMicStoppedListening_6;
		UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* L_14 = (UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7*)il2cpp_codegen_object_new(UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7_il2cpp_TypeInfo_var);
		NullCheck(L_14);
		UnityAction__ctor_mC53E20D6B66E0D5688CD81B88DBB34F5A58B7131(L_14, L_13, (intptr_t)((void*)UnityEvent_Invoke_mFBF80D59B03C30C5FE6A06F897D954ACADE061D2_RuntimeMethod_var), NULL);
		NullCheck(L_12);
		UnityEvent_RemoveListener_m0E138F5575CB4363019D3DA570E98FAD502B812C(L_12, L_14, NULL);
	}

IL_0069:
	{
		// }
		return;
	}
}
// System.Void Meta.WitAi.Events.UnityEventListeners.AudioEventListener::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioEventListener__ctor_mD243CCAB388817F8FCEB8870E1A68D873AA4CB14 (AudioEventListener_t39E39D7138664E757F322BB01CE82890433659AB* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WitMicLevelChangedEvent_tA9B2889CB33EAA09656739F26AA70252ED15DEF7_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// [SerializeField] private WitMicLevelChangedEvent onMicAudioLevelChanged = new WitMicLevelChangedEvent();
		WitMicLevelChangedEvent_tA9B2889CB33EAA09656739F26AA70252ED15DEF7* L_0 = (WitMicLevelChangedEvent_tA9B2889CB33EAA09656739F26AA70252ED15DEF7*)il2cpp_codegen_object_new(WitMicLevelChangedEvent_tA9B2889CB33EAA09656739F26AA70252ED15DEF7_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		WitMicLevelChangedEvent__ctor_m6DF80D93389B8C74A379AEECEEA4C4C7D672E6ED(L_0, NULL);
		__this->___onMicAudioLevelChanged_4 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___onMicAudioLevelChanged_4), (void*)L_0);
		// [SerializeField] private UnityEvent onMicStartedListening = new UnityEvent();
		UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* L_1 = (UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977*)il2cpp_codegen_object_new(UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		UnityEvent__ctor_m03D3E5121B9A6100351984D0CE3050B909CD3235(L_1, NULL);
		__this->___onMicStartedListening_5 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___onMicStartedListening_5), (void*)L_1);
		// [SerializeField] private UnityEvent onMicStoppedListening = new UnityEvent();
		UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* L_2 = (UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977*)il2cpp_codegen_object_new(UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		UnityEvent__ctor_m03D3E5121B9A6100351984D0CE3050B909CD3235(L_2, NULL);
		__this->___onMicStoppedListening_6 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___onMicStoppedListening_6), (void*)L_2);
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
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
// Meta.WitAi.Events.WitTranscriptionEvent Meta.WitAi.Events.UnityEventListeners.TranscriptionEventListener::get_OnPartialTranscription()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR WitTranscriptionEvent_t51292FC7EB7BAF38C2EC6B57D87724C1BEB3C739* TranscriptionEventListener_get_OnPartialTranscription_m7E2D069A418B623FD3E4E07AB77F91904998CB4B (TranscriptionEventListener_t96B770053BE0AFCF8B9329247EEE4A23B864B4F5* __this, const RuntimeMethod* method) 
{
	{
		// public WitTranscriptionEvent OnPartialTranscription => onPartialTranscription;
		WitTranscriptionEvent_t51292FC7EB7BAF38C2EC6B57D87724C1BEB3C739* L_0 = __this->___onPartialTranscription_4;
		return L_0;
	}
}
// Meta.WitAi.Events.WitTranscriptionEvent Meta.WitAi.Events.UnityEventListeners.TranscriptionEventListener::get_OnFullTranscription()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR WitTranscriptionEvent_t51292FC7EB7BAF38C2EC6B57D87724C1BEB3C739* TranscriptionEventListener_get_OnFullTranscription_m54BA223978999C40B83AC56C973C92480AAFACB8 (TranscriptionEventListener_t96B770053BE0AFCF8B9329247EEE4A23B864B4F5* __this, const RuntimeMethod* method) 
{
	{
		// public WitTranscriptionEvent OnFullTranscription => onFullTranscription;
		WitTranscriptionEvent_t51292FC7EB7BAF38C2EC6B57D87724C1BEB3C739* L_0 = __this->___onFullTranscription_5;
		return L_0;
	}
}
// Meta.WitAi.Interfaces.ITranscriptionEvent Meta.WitAi.Events.UnityEventListeners.TranscriptionEventListener::get_TranscriptionEvents()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* TranscriptionEventListener_get_TranscriptionEvents_m284668B41934C24E6C4A8D1D41E5353EAB1B0B3A (TranscriptionEventListener_t96B770053BE0AFCF8B9329247EEE4A23B864B4F5* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisITranscriptionEventProvider_t20AA72759481322BFC0C59BD13DAA621238033DF_m22E3E56F5F15217DCF58493CE86DBB166ED49FC1_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ITranscriptionEventProvider_t20AA72759481322BFC0C59BD13DAA621238033DF_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	RuntimeObject* V_1 = NULL;
	bool V_2 = false;
	RuntimeObject* V_3 = NULL;
	{
		// if (null == _events)
		RuntimeObject* L_0 = __this->____events_6;
		V_0 = (bool)((((RuntimeObject*)(RuntimeObject*)L_0) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_002d;
		}
	}
	{
		// var eventProvider = GetComponent<ITranscriptionEventProvider>();
		RuntimeObject* L_2;
		L_2 = Component_GetComponent_TisITranscriptionEventProvider_t20AA72759481322BFC0C59BD13DAA621238033DF_m22E3E56F5F15217DCF58493CE86DBB166ED49FC1(__this, Component_GetComponent_TisITranscriptionEventProvider_t20AA72759481322BFC0C59BD13DAA621238033DF_m22E3E56F5F15217DCF58493CE86DBB166ED49FC1_RuntimeMethod_var);
		V_1 = L_2;
		// if (null != eventProvider)
		RuntimeObject* L_3 = V_1;
		V_2 = (bool)((!(((RuntimeObject*)(RuntimeObject*)L_3) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		bool L_4 = V_2;
		if (!L_4)
		{
			goto IL_002c;
		}
	}
	{
		// _events = eventProvider.TranscriptionEvents;
		RuntimeObject* L_5 = V_1;
		NullCheck(L_5);
		RuntimeObject* L_6;
		L_6 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* Meta.WitAi.Interfaces.ITranscriptionEvent Meta.WitAi.Interfaces.ITranscriptionEventProvider::get_TranscriptionEvents() */, ITranscriptionEventProvider_t20AA72759481322BFC0C59BD13DAA621238033DF_il2cpp_TypeInfo_var, L_5);
		__this->____events_6 = L_6;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____events_6), (void*)L_6);
	}

IL_002c:
	{
	}

IL_002d:
	{
		// return _events;
		RuntimeObject* L_7 = __this->____events_6;
		V_3 = L_7;
		goto IL_0036;
	}

IL_0036:
	{
		// }
		RuntimeObject* L_8 = V_3;
		return L_8;
	}
}
// System.Void Meta.WitAi.Events.UnityEventListeners.TranscriptionEventListener::OnEnable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TranscriptionEventListener_OnEnable_m239ABD5E4900193E119C1840B1A5C3708A53BAF9 (TranscriptionEventListener_t96B770053BE0AFCF8B9329247EEE4A23B864B4F5* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ITranscriptionEvent_tF48A05E7EFA481DA37B20DE69F0FC45230C74FC0_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityAction_1_t690494F0E492A2098660E28B8EB7D71B2C69BE1B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityEvent_1_AddListener_mEC384A8CFC5D4D41B62B08248A738CF61B82172F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityEvent_1_Invoke_mA633B48B5D287DA856FB954AC3E4012487E63C15_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	bool V_1 = false;
	{
		// var events = TranscriptionEvents;
		RuntimeObject* L_0;
		L_0 = TranscriptionEventListener_get_TranscriptionEvents_m284668B41934C24E6C4A8D1D41E5353EAB1B0B3A(__this, NULL);
		V_0 = L_0;
		// if (null != events)
		RuntimeObject* L_1 = V_0;
		V_1 = (bool)((!(((RuntimeObject*)(RuntimeObject*)L_1) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		bool L_2 = V_1;
		if (!L_2)
		{
			goto IL_004c;
		}
	}
	{
		// events.OnPartialTranscription.AddListener(onPartialTranscription.Invoke);
		RuntimeObject* L_3 = V_0;
		NullCheck(L_3);
		WitTranscriptionEvent_t51292FC7EB7BAF38C2EC6B57D87724C1BEB3C739* L_4;
		L_4 = InterfaceFuncInvoker0< WitTranscriptionEvent_t51292FC7EB7BAF38C2EC6B57D87724C1BEB3C739* >::Invoke(0 /* Meta.WitAi.Events.WitTranscriptionEvent Meta.WitAi.Interfaces.ITranscriptionEvent::get_OnPartialTranscription() */, ITranscriptionEvent_tF48A05E7EFA481DA37B20DE69F0FC45230C74FC0_il2cpp_TypeInfo_var, L_3);
		WitTranscriptionEvent_t51292FC7EB7BAF38C2EC6B57D87724C1BEB3C739* L_5 = __this->___onPartialTranscription_4;
		UnityAction_1_t690494F0E492A2098660E28B8EB7D71B2C69BE1B* L_6 = (UnityAction_1_t690494F0E492A2098660E28B8EB7D71B2C69BE1B*)il2cpp_codegen_object_new(UnityAction_1_t690494F0E492A2098660E28B8EB7D71B2C69BE1B_il2cpp_TypeInfo_var);
		NullCheck(L_6);
		UnityAction_1__ctor_mE6251CCFD943EB114960F556A546E2777B18AC71(L_6, L_5, (intptr_t)((void*)UnityEvent_1_Invoke_mA633B48B5D287DA856FB954AC3E4012487E63C15_RuntimeMethod_var), NULL);
		NullCheck(L_4);
		UnityEvent_1_AddListener_mEC384A8CFC5D4D41B62B08248A738CF61B82172F(L_4, L_6, UnityEvent_1_AddListener_mEC384A8CFC5D4D41B62B08248A738CF61B82172F_RuntimeMethod_var);
		// events.OnFullTranscription.AddListener(onFullTranscription.Invoke);
		RuntimeObject* L_7 = V_0;
		NullCheck(L_7);
		WitTranscriptionEvent_t51292FC7EB7BAF38C2EC6B57D87724C1BEB3C739* L_8;
		L_8 = InterfaceFuncInvoker0< WitTranscriptionEvent_t51292FC7EB7BAF38C2EC6B57D87724C1BEB3C739* >::Invoke(1 /* Meta.WitAi.Events.WitTranscriptionEvent Meta.WitAi.Interfaces.ITranscriptionEvent::get_OnFullTranscription() */, ITranscriptionEvent_tF48A05E7EFA481DA37B20DE69F0FC45230C74FC0_il2cpp_TypeInfo_var, L_7);
		WitTranscriptionEvent_t51292FC7EB7BAF38C2EC6B57D87724C1BEB3C739* L_9 = __this->___onFullTranscription_5;
		UnityAction_1_t690494F0E492A2098660E28B8EB7D71B2C69BE1B* L_10 = (UnityAction_1_t690494F0E492A2098660E28B8EB7D71B2C69BE1B*)il2cpp_codegen_object_new(UnityAction_1_t690494F0E492A2098660E28B8EB7D71B2C69BE1B_il2cpp_TypeInfo_var);
		NullCheck(L_10);
		UnityAction_1__ctor_mE6251CCFD943EB114960F556A546E2777B18AC71(L_10, L_9, (intptr_t)((void*)UnityEvent_1_Invoke_mA633B48B5D287DA856FB954AC3E4012487E63C15_RuntimeMethod_var), NULL);
		NullCheck(L_8);
		UnityEvent_1_AddListener_mEC384A8CFC5D4D41B62B08248A738CF61B82172F(L_8, L_10, UnityEvent_1_AddListener_mEC384A8CFC5D4D41B62B08248A738CF61B82172F_RuntimeMethod_var);
	}

IL_004c:
	{
		// }
		return;
	}
}
// System.Void Meta.WitAi.Events.UnityEventListeners.TranscriptionEventListener::OnDisable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TranscriptionEventListener_OnDisable_m7B09FE22161900659315858CF8AB1E14724338B5 (TranscriptionEventListener_t96B770053BE0AFCF8B9329247EEE4A23B864B4F5* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ITranscriptionEvent_tF48A05E7EFA481DA37B20DE69F0FC45230C74FC0_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityAction_1_t690494F0E492A2098660E28B8EB7D71B2C69BE1B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityEvent_1_Invoke_mA633B48B5D287DA856FB954AC3E4012487E63C15_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityEvent_1_RemoveListener_m580353A1B030A82D1205B9BA94CF3484866C027F_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	bool V_1 = false;
	{
		// var events = TranscriptionEvents;
		RuntimeObject* L_0;
		L_0 = TranscriptionEventListener_get_TranscriptionEvents_m284668B41934C24E6C4A8D1D41E5353EAB1B0B3A(__this, NULL);
		V_0 = L_0;
		// if (null != events)
		RuntimeObject* L_1 = V_0;
		V_1 = (bool)((!(((RuntimeObject*)(RuntimeObject*)L_1) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		bool L_2 = V_1;
		if (!L_2)
		{
			goto IL_004c;
		}
	}
	{
		// events.OnPartialTranscription.RemoveListener(onPartialTranscription.Invoke);
		RuntimeObject* L_3 = V_0;
		NullCheck(L_3);
		WitTranscriptionEvent_t51292FC7EB7BAF38C2EC6B57D87724C1BEB3C739* L_4;
		L_4 = InterfaceFuncInvoker0< WitTranscriptionEvent_t51292FC7EB7BAF38C2EC6B57D87724C1BEB3C739* >::Invoke(0 /* Meta.WitAi.Events.WitTranscriptionEvent Meta.WitAi.Interfaces.ITranscriptionEvent::get_OnPartialTranscription() */, ITranscriptionEvent_tF48A05E7EFA481DA37B20DE69F0FC45230C74FC0_il2cpp_TypeInfo_var, L_3);
		WitTranscriptionEvent_t51292FC7EB7BAF38C2EC6B57D87724C1BEB3C739* L_5 = __this->___onPartialTranscription_4;
		UnityAction_1_t690494F0E492A2098660E28B8EB7D71B2C69BE1B* L_6 = (UnityAction_1_t690494F0E492A2098660E28B8EB7D71B2C69BE1B*)il2cpp_codegen_object_new(UnityAction_1_t690494F0E492A2098660E28B8EB7D71B2C69BE1B_il2cpp_TypeInfo_var);
		NullCheck(L_6);
		UnityAction_1__ctor_mE6251CCFD943EB114960F556A546E2777B18AC71(L_6, L_5, (intptr_t)((void*)UnityEvent_1_Invoke_mA633B48B5D287DA856FB954AC3E4012487E63C15_RuntimeMethod_var), NULL);
		NullCheck(L_4);
		UnityEvent_1_RemoveListener_m580353A1B030A82D1205B9BA94CF3484866C027F(L_4, L_6, UnityEvent_1_RemoveListener_m580353A1B030A82D1205B9BA94CF3484866C027F_RuntimeMethod_var);
		// events.OnFullTranscription.RemoveListener(onFullTranscription.Invoke);
		RuntimeObject* L_7 = V_0;
		NullCheck(L_7);
		WitTranscriptionEvent_t51292FC7EB7BAF38C2EC6B57D87724C1BEB3C739* L_8;
		L_8 = InterfaceFuncInvoker0< WitTranscriptionEvent_t51292FC7EB7BAF38C2EC6B57D87724C1BEB3C739* >::Invoke(1 /* Meta.WitAi.Events.WitTranscriptionEvent Meta.WitAi.Interfaces.ITranscriptionEvent::get_OnFullTranscription() */, ITranscriptionEvent_tF48A05E7EFA481DA37B20DE69F0FC45230C74FC0_il2cpp_TypeInfo_var, L_7);
		WitTranscriptionEvent_t51292FC7EB7BAF38C2EC6B57D87724C1BEB3C739* L_9 = __this->___onFullTranscription_5;
		UnityAction_1_t690494F0E492A2098660E28B8EB7D71B2C69BE1B* L_10 = (UnityAction_1_t690494F0E492A2098660E28B8EB7D71B2C69BE1B*)il2cpp_codegen_object_new(UnityAction_1_t690494F0E492A2098660E28B8EB7D71B2C69BE1B_il2cpp_TypeInfo_var);
		NullCheck(L_10);
		UnityAction_1__ctor_mE6251CCFD943EB114960F556A546E2777B18AC71(L_10, L_9, (intptr_t)((void*)UnityEvent_1_Invoke_mA633B48B5D287DA856FB954AC3E4012487E63C15_RuntimeMethod_var), NULL);
		NullCheck(L_8);
		UnityEvent_1_RemoveListener_m580353A1B030A82D1205B9BA94CF3484866C027F(L_8, L_10, UnityEvent_1_RemoveListener_m580353A1B030A82D1205B9BA94CF3484866C027F_RuntimeMethod_var);
	}

IL_004c:
	{
		// }
		return;
	}
}
// System.Void Meta.WitAi.Events.UnityEventListeners.TranscriptionEventListener::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TranscriptionEventListener__ctor_mDA116BB46520745E0730C59B69BD23848A488548 (TranscriptionEventListener_t96B770053BE0AFCF8B9329247EEE4A23B864B4F5* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WitTranscriptionEvent_t51292FC7EB7BAF38C2EC6B57D87724C1BEB3C739_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// [SerializeField] private WitTranscriptionEvent onPartialTranscription = new
		//     WitTranscriptionEvent();
		WitTranscriptionEvent_t51292FC7EB7BAF38C2EC6B57D87724C1BEB3C739* L_0 = (WitTranscriptionEvent_t51292FC7EB7BAF38C2EC6B57D87724C1BEB3C739*)il2cpp_codegen_object_new(WitTranscriptionEvent_t51292FC7EB7BAF38C2EC6B57D87724C1BEB3C739_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		WitTranscriptionEvent__ctor_m8FBA54D34EA19C07F367E3FF38F12102983D0B4D(L_0, NULL);
		__this->___onPartialTranscription_4 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___onPartialTranscription_4), (void*)L_0);
		// [SerializeField] private WitTranscriptionEvent onFullTranscription = new
		//     WitTranscriptionEvent();
		WitTranscriptionEvent_t51292FC7EB7BAF38C2EC6B57D87724C1BEB3C739* L_1 = (WitTranscriptionEvent_t51292FC7EB7BAF38C2EC6B57D87724C1BEB3C739*)il2cpp_codegen_object_new(WitTranscriptionEvent_t51292FC7EB7BAF38C2EC6B57D87724C1BEB3C739_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		WitTranscriptionEvent__ctor_m8FBA54D34EA19C07F367E3FF38F12102983D0B4D(L_1, NULL);
		__this->___onFullTranscription_5 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___onFullTranscription_5), (void*)L_1);
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
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
// System.String Meta.WitAi.Configuration.WitEndpointConfig::get_UriScheme()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* WitEndpointConfig_get_UriScheme_m6EFDC78198AC316837D32AB312C06494CB1121F9 (WitEndpointConfig_t7CCDA7CBBF1FDD2A7779DDF6745BAED47E69BB1D* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF27E4C631EBEFA337EC21BE8552E169C9DED78A2);
		s_Il2CppMethodInitialized = true;
	}
	String_t* G_B3_0 = NULL;
	{
		// public string UriScheme => string.IsNullOrEmpty(_uriScheme) ? WitConstants.URI_SCHEME : _uriScheme;
		String_t* L_0 = __this->____uriScheme_0;
		bool L_1;
		L_1 = String_IsNullOrEmpty_mEA9E3FB005AC28FE02E69FCF95A7B8456192B478(L_0, NULL);
		if (L_1)
		{
			goto IL_0015;
		}
	}
	{
		String_t* L_2 = __this->____uriScheme_0;
		G_B3_0 = L_2;
		goto IL_001a;
	}

IL_0015:
	{
		G_B3_0 = _stringLiteralF27E4C631EBEFA337EC21BE8552E169C9DED78A2;
	}

IL_001a:
	{
		return G_B3_0;
	}
}
// System.String Meta.WitAi.Configuration.WitEndpointConfig::get_Authority()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* WitEndpointConfig_get_Authority_m2044DE8E2F728935A4E8D23DB6C427928135DC7C (WitEndpointConfig_t7CCDA7CBBF1FDD2A7779DDF6745BAED47E69BB1D* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralAEC88ED3BAC6612646AAAC68CE58E03895D796AB);
		s_Il2CppMethodInitialized = true;
	}
	String_t* G_B3_0 = NULL;
	{
		// string.IsNullOrEmpty(_authority) ? WitConstants.URI_AUTHORITY : _authority;
		String_t* L_0 = __this->____authority_1;
		bool L_1;
		L_1 = String_IsNullOrEmpty_mEA9E3FB005AC28FE02E69FCF95A7B8456192B478(L_0, NULL);
		if (L_1)
		{
			goto IL_0015;
		}
	}
	{
		String_t* L_2 = __this->____authority_1;
		G_B3_0 = L_2;
		goto IL_001a;
	}

IL_0015:
	{
		G_B3_0 = _stringLiteralAEC88ED3BAC6612646AAAC68CE58E03895D796AB;
	}

IL_001a:
	{
		return G_B3_0;
	}
}
// System.Int32 Meta.WitAi.Configuration.WitEndpointConfig::get_Port()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t WitEndpointConfig_get_Port_m7107BDF8BA2608E358C640CA188AFB31A3EF419D (WitEndpointConfig_t7CCDA7CBBF1FDD2A7779DDF6745BAED47E69BB1D* __this, const RuntimeMethod* method) 
{
	int32_t G_B3_0 = 0;
	{
		// public int Port => _port <= 0 ? WitConstants.URI_DEFAULT_PORT : _port;
		int32_t L_0 = __this->____port_2;
		if ((((int32_t)L_0) <= ((int32_t)0)))
		{
			goto IL_0011;
		}
	}
	{
		int32_t L_1 = __this->____port_2;
		G_B3_0 = L_1;
		goto IL_0012;
	}

IL_0011:
	{
		G_B3_0 = (-1);
	}

IL_0012:
	{
		return G_B3_0;
	}
}
// System.String Meta.WitAi.Configuration.WitEndpointConfig::get_WitApiVersion()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* WitEndpointConfig_get_WitApiVersion_m61A5B11F27FD2963C333E19DCFCB4FBB8D9D4C1B (WitEndpointConfig_t7CCDA7CBBF1FDD2A7779DDF6745BAED47E69BB1D* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral99EF754C438B2E2CC9227AECE37F8CAED8BFE43A);
		s_Il2CppMethodInitialized = true;
	}
	String_t* G_B3_0 = NULL;
	{
		// public string WitApiVersion => string.IsNullOrEmpty(_witApiVersion)
		//     ? WitConstants.API_VERSION
		//     : _witApiVersion;
		String_t* L_0 = __this->____witApiVersion_3;
		bool L_1;
		L_1 = String_IsNullOrEmpty_mEA9E3FB005AC28FE02E69FCF95A7B8456192B478(L_0, NULL);
		if (L_1)
		{
			goto IL_0015;
		}
	}
	{
		String_t* L_2 = __this->____witApiVersion_3;
		G_B3_0 = L_2;
		goto IL_001a;
	}

IL_0015:
	{
		G_B3_0 = _stringLiteral99EF754C438B2E2CC9227AECE37F8CAED8BFE43A;
	}

IL_001a:
	{
		return G_B3_0;
	}
}
// System.String Meta.WitAi.Configuration.WitEndpointConfig::get_Message()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* WitEndpointConfig_get_Message_mE835D557E8C306E797081E04BFF79BE759A2E5C6 (WitEndpointConfig_t7CCDA7CBBF1FDD2A7779DDF6745BAED47E69BB1D* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD559C6D97E819D8E4EF7ACDC34C4E8D3DD314964);
		s_Il2CppMethodInitialized = true;
	}
	String_t* G_B3_0 = NULL;
	{
		// string.IsNullOrEmpty(_message) ? WitConstants.ENDPOINT_MESSAGE : _message;
		String_t* L_0 = __this->____message_4;
		bool L_1;
		L_1 = String_IsNullOrEmpty_mEA9E3FB005AC28FE02E69FCF95A7B8456192B478(L_0, NULL);
		if (L_1)
		{
			goto IL_0015;
		}
	}
	{
		String_t* L_2 = __this->____message_4;
		G_B3_0 = L_2;
		goto IL_001a;
	}

IL_0015:
	{
		G_B3_0 = _stringLiteralD559C6D97E819D8E4EF7ACDC34C4E8D3DD314964;
	}

IL_001a:
	{
		return G_B3_0;
	}
}
// System.String Meta.WitAi.Configuration.WitEndpointConfig::get_Speech()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* WitEndpointConfig_get_Speech_mBAA6111328D268FF4CF8BC92DA25E4F07A8E7EB6 (WitEndpointConfig_t7CCDA7CBBF1FDD2A7779DDF6745BAED47E69BB1D* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralEE1EF95F5D04D20EF4C7CF4CAB5C1D4027F8F1AB);
		s_Il2CppMethodInitialized = true;
	}
	String_t* G_B3_0 = NULL;
	{
		// string.IsNullOrEmpty(_speech) ? WitConstants.ENDPOINT_SPEECH : _speech;
		String_t* L_0 = __this->____speech_5;
		bool L_1;
		L_1 = String_IsNullOrEmpty_mEA9E3FB005AC28FE02E69FCF95A7B8456192B478(L_0, NULL);
		if (L_1)
		{
			goto IL_0015;
		}
	}
	{
		String_t* L_2 = __this->____speech_5;
		G_B3_0 = L_2;
		goto IL_001a;
	}

IL_0015:
	{
		G_B3_0 = _stringLiteralEE1EF95F5D04D20EF4C7CF4CAB5C1D4027F8F1AB;
	}

IL_001a:
	{
		return G_B3_0;
	}
}
// System.String Meta.WitAi.Configuration.WitEndpointConfig::get_Dictation()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* WitEndpointConfig_get_Dictation_m8633E0FC5AF5B46FC02FA0DAABE5CE25497FE6B6 (WitEndpointConfig_t7CCDA7CBBF1FDD2A7779DDF6745BAED47E69BB1D* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral24A11203BE0B847E4A17BDD8D12EA3B8E5F4101F);
		s_Il2CppMethodInitialized = true;
	}
	String_t* G_B3_0 = NULL;
	{
		// public string Dictation => string.IsNullOrEmpty(_dictation) ? WitConstants.ENDPOINT_DICTATION : _dictation;
		String_t* L_0 = __this->____dictation_6;
		bool L_1;
		L_1 = String_IsNullOrEmpty_mEA9E3FB005AC28FE02E69FCF95A7B8456192B478(L_0, NULL);
		if (L_1)
		{
			goto IL_0015;
		}
	}
	{
		String_t* L_2 = __this->____dictation_6;
		G_B3_0 = L_2;
		goto IL_001a;
	}

IL_0015:
	{
		G_B3_0 = _stringLiteral24A11203BE0B847E4A17BDD8D12EA3B8E5F4101F;
	}

IL_001a:
	{
		return G_B3_0;
	}
}
// System.String Meta.WitAi.Configuration.WitEndpointConfig::get_Synthesize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* WitEndpointConfig_get_Synthesize_mB0D0662F8D7FF1EEE0B7133E19E56130B928771B (WitEndpointConfig_t7CCDA7CBBF1FDD2A7779DDF6745BAED47E69BB1D* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralAB4F3A484ED3991575D8B729EC5A620357A4A41B);
		s_Il2CppMethodInitialized = true;
	}
	String_t* G_B3_0 = NULL;
	{
		// public string Synthesize => string.IsNullOrEmpty(_synthesize) ? WitConstants.ENDPOINT_TTS : _synthesize;
		String_t* L_0 = __this->____synthesize_7;
		bool L_1;
		L_1 = String_IsNullOrEmpty_mEA9E3FB005AC28FE02E69FCF95A7B8456192B478(L_0, NULL);
		if (L_1)
		{
			goto IL_0015;
		}
	}
	{
		String_t* L_2 = __this->____synthesize_7;
		G_B3_0 = L_2;
		goto IL_001a;
	}

IL_0015:
	{
		G_B3_0 = _stringLiteralAB4F3A484ED3991575D8B729EC5A620357A4A41B;
	}

IL_001a:
	{
		return G_B3_0;
	}
}
// System.String Meta.WitAi.Configuration.WitEndpointConfig::get_Event()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* WitEndpointConfig_get_Event_m6FF52CC7139D68025A440AACEE6D9FF020900AAF (WitEndpointConfig_t7CCDA7CBBF1FDD2A7779DDF6745BAED47E69BB1D* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralEAA8D9C3445FEBFE3701DDB0406A86D63B80BB2F);
		s_Il2CppMethodInitialized = true;
	}
	String_t* G_B3_0 = NULL;
	{
		// public string Event => string.IsNullOrEmpty(_event) ? WitConstants.ENDPOINT_COMPOSER_MESSAGE : _event;
		String_t* L_0 = __this->____event_8;
		bool L_1;
		L_1 = String_IsNullOrEmpty_mEA9E3FB005AC28FE02E69FCF95A7B8456192B478(L_0, NULL);
		if (L_1)
		{
			goto IL_0015;
		}
	}
	{
		String_t* L_2 = __this->____event_8;
		G_B3_0 = L_2;
		goto IL_001a;
	}

IL_0015:
	{
		G_B3_0 = _stringLiteralEAA8D9C3445FEBFE3701DDB0406A86D63B80BB2F;
	}

IL_001a:
	{
		return G_B3_0;
	}
}
// System.String Meta.WitAi.Configuration.WitEndpointConfig::get_Converse()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* WitEndpointConfig_get_Converse_m84EDE1787605DAEFCE44BC5A0C329828A797284E (WitEndpointConfig_t7CCDA7CBBF1FDD2A7779DDF6745BAED47E69BB1D* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral664A1B6FF144ACF3647FE212D8F5706029F978BD);
		s_Il2CppMethodInitialized = true;
	}
	String_t* G_B3_0 = NULL;
	{
		// public string Converse => string.IsNullOrEmpty(_converse) ? WitConstants.ENDPOINT_COMPOSER_SPEECH : _converse;
		String_t* L_0 = __this->____converse_9;
		bool L_1;
		L_1 = String_IsNullOrEmpty_mEA9E3FB005AC28FE02E69FCF95A7B8456192B478(L_0, NULL);
		if (L_1)
		{
			goto IL_0015;
		}
	}
	{
		String_t* L_2 = __this->____converse_9;
		G_B3_0 = L_2;
		goto IL_001a;
	}

IL_0015:
	{
		G_B3_0 = _stringLiteral664A1B6FF144ACF3647FE212D8F5706029F978BD;
	}

IL_001a:
	{
		return G_B3_0;
	}
}
// Meta.WitAi.Configuration.WitEndpointConfig Meta.WitAi.Configuration.WitEndpointConfig::GetEndpointConfig(Meta.WitAi.Data.Configuration.WitConfiguration)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR WitEndpointConfig_t7CCDA7CBBF1FDD2A7779DDF6745BAED47E69BB1D* WitEndpointConfig_GetEndpointConfig_m0198FA1369CF353B1F3AA7F9C633473F196B960F (WitConfiguration_t85BCD6C826D35078E90334092184A53D1B69C72E* ___witConfig0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WitEndpointConfig_t7CCDA7CBBF1FDD2A7779DDF6745BAED47E69BB1D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	WitEndpointConfig_t7CCDA7CBBF1FDD2A7779DDF6745BAED47E69BB1D* V_0 = NULL;
	WitEndpointConfig_t7CCDA7CBBF1FDD2A7779DDF6745BAED47E69BB1D* G_B4_0 = NULL;
	{
		// return witConfig && null != witConfig.endpointConfiguration
		//     ? witConfig.endpointConfiguration
		//     : defaultEndpointConfig;
		WitConfiguration_t85BCD6C826D35078E90334092184A53D1B69C72E* L_0 = ___witConfig0;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Implicit_m93896EF7D68FA113C42D3FE2BC6F661FC7EF514A(L_0, NULL);
		if (!L_1)
		{
			goto IL_0011;
		}
	}
	{
		WitConfiguration_t85BCD6C826D35078E90334092184A53D1B69C72E* L_2 = ___witConfig0;
		NullCheck(L_2);
		WitEndpointConfig_t7CCDA7CBBF1FDD2A7779DDF6745BAED47E69BB1D* L_3 = L_2->___endpointConfiguration_9;
		if (L_3)
		{
			goto IL_0018;
		}
	}

IL_0011:
	{
		il2cpp_codegen_runtime_class_init_inline(WitEndpointConfig_t7CCDA7CBBF1FDD2A7779DDF6745BAED47E69BB1D_il2cpp_TypeInfo_var);
		WitEndpointConfig_t7CCDA7CBBF1FDD2A7779DDF6745BAED47E69BB1D* L_4 = ((WitEndpointConfig_t7CCDA7CBBF1FDD2A7779DDF6745BAED47E69BB1D_StaticFields*)il2cpp_codegen_static_fields_for(WitEndpointConfig_t7CCDA7CBBF1FDD2A7779DDF6745BAED47E69BB1D_il2cpp_TypeInfo_var))->___defaultEndpointConfig_10;
		G_B4_0 = L_4;
		goto IL_001e;
	}

IL_0018:
	{
		WitConfiguration_t85BCD6C826D35078E90334092184A53D1B69C72E* L_5 = ___witConfig0;
		NullCheck(L_5);
		WitEndpointConfig_t7CCDA7CBBF1FDD2A7779DDF6745BAED47E69BB1D* L_6 = L_5->___endpointConfiguration_9;
		G_B4_0 = L_6;
	}

IL_001e:
	{
		V_0 = G_B4_0;
		goto IL_0021;
	}

IL_0021:
	{
		// }
		WitEndpointConfig_t7CCDA7CBBF1FDD2A7779DDF6745BAED47E69BB1D* L_7 = V_0;
		return L_7;
	}
}
// System.Void Meta.WitAi.Configuration.WitEndpointConfig::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WitEndpointConfig__ctor_m732E92810A12A6690761C5B6E1A12C90F1569D12 (WitEndpointConfig_t7CCDA7CBBF1FDD2A7779DDF6745BAED47E69BB1D* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// System.Void Meta.WitAi.Configuration.WitEndpointConfig::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WitEndpointConfig__cctor_m8D511B158C347E6089C03D783606DB4F1DBEC9D5 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WitEndpointConfig_t7CCDA7CBBF1FDD2A7779DDF6745BAED47E69BB1D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private static WitEndpointConfig defaultEndpointConfig = new WitEndpointConfig();
		WitEndpointConfig_t7CCDA7CBBF1FDD2A7779DDF6745BAED47E69BB1D* L_0 = (WitEndpointConfig_t7CCDA7CBBF1FDD2A7779DDF6745BAED47E69BB1D*)il2cpp_codegen_object_new(WitEndpointConfig_t7CCDA7CBBF1FDD2A7779DDF6745BAED47E69BB1D_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		WitEndpointConfig__ctor_m732E92810A12A6690761C5B6E1A12C90F1569D12(L_0, NULL);
		((WitEndpointConfig_t7CCDA7CBBF1FDD2A7779DDF6745BAED47E69BB1D_StaticFields*)il2cpp_codegen_static_fields_for(WitEndpointConfig_t7CCDA7CBBF1FDD2A7779DDF6745BAED47E69BB1D_il2cpp_TypeInfo_var))->___defaultEndpointConfig_10 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((WitEndpointConfig_t7CCDA7CBBF1FDD2A7779DDF6745BAED47E69BB1D_StaticFields*)il2cpp_codegen_static_fields_for(WitEndpointConfig_t7CCDA7CBBF1FDD2A7779DDF6745BAED47E69BB1D_il2cpp_TypeInfo_var))->___defaultEndpointConfig_10), (void*)L_0);
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
// System.String Meta.WitAi.Configuration.WitRequestOptions::get_requestID()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* WitRequestOptions_get_requestID_m1B42599FEB349CCCAB94B488795E965099BB4ECE (WitRequestOptions_tB2E8B103538F7E42F0568C6F62F2158FA45EF483* __this, const RuntimeMethod* method) 
{
	{
		// public string requestID => RequestId;
		String_t* L_0;
		L_0 = VoiceServiceRequestOptions_get_RequestId_mC465590B47E4B5F542BD3E9BED1074D032C1446F_inline(__this, NULL);
		return L_0;
	}
}
// System.String Meta.WitAi.Configuration.WitRequestOptions::ToJsonString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* WitRequestOptions_ToJsonString_m903548928E6DE6B8A677661C17899BC42E1B0134 (WitRequestOptions_tB2E8B103538F7E42F0568C6F62F2158FA45EF483* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2__ctor_m768E076F1E804CE4959F4E71D3E6A9ADE2F55052_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_get_Item_mB13DFB3E7499031847CF544977D4EFB1AC0157AB_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_get_Keys_m0014C8E91B9B4377ACFBD26A9175A7E5C016D9E9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_set_Item_m9BF625649E96E60C1509898A992A6447E351D1A2_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_m6C974325ADBDD3ECEBAA290D7940AC282C56386A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_mE8FB9EBD177219F5AC0BF48642FB47D3E186C283_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_m4620EF2C1DF7D94D5A511226C42A3A42040B1C9E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JsonConvert_SerializeObject_TisDictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83_m610316C589A5BB24A5DD256925743F4BCE73CA74_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JsonConvert_t69A348E775F1FA63C310F5FE324F3EE231AD8072_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&KeyCollection_GetEnumerator_m6B09BC0C54723DE1DB3E62395E41B76F419BAC22_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral100237A442F30150BD13209B41DA1A90A4C2DB83);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9FF7A8A0CF603B20A1F5510A7D95439FF5AF3A56);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA3DB434C4390DC5A73645AA768D5FE17D3D71170);
		s_Il2CppMethodInitialized = true;
	}
	Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* V_0 = NULL;
	Enumerator_t84BD4D6D35ABE5554A430614BF2F7588BC152867 V_1;
	memset((&V_1), 0, sizeof(V_1));
	String_t* V_2 = NULL;
	String_t* V_3 = NULL;
	{
		// Dictionary<string, string> parameters = new Dictionary<string, string>();
		Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* L_0 = (Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83*)il2cpp_codegen_object_new(Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		Dictionary_2__ctor_m768E076F1E804CE4959F4E71D3E6A9ADE2F55052(L_0, Dictionary_2__ctor_m768E076F1E804CE4959F4E71D3E6A9ADE2F55052_RuntimeMethod_var);
		V_0 = L_0;
		// parameters["nBestIntents"] = nBestIntents.ToString();
		Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* L_1 = V_0;
		int32_t* L_2 = (&__this->___nBestIntents_5);
		String_t* L_3;
		L_3 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5(L_2, NULL);
		NullCheck(L_1);
		Dictionary_2_set_Item_m9BF625649E96E60C1509898A992A6447E351D1A2(L_1, _stringLiteralA3DB434C4390DC5A73645AA768D5FE17D3D71170, L_3, Dictionary_2_set_Item_m9BF625649E96E60C1509898A992A6447E351D1A2_RuntimeMethod_var);
		// parameters["tag"] = tag;
		Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* L_4 = V_0;
		String_t* L_5 = __this->___tag_6;
		NullCheck(L_4);
		Dictionary_2_set_Item_m9BF625649E96E60C1509898A992A6447E351D1A2(L_4, _stringLiteral9FF7A8A0CF603B20A1F5510A7D95439FF5AF3A56, L_5, Dictionary_2_set_Item_m9BF625649E96E60C1509898A992A6447E351D1A2_RuntimeMethod_var);
		// parameters["requestID"] = RequestId;
		Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* L_6 = V_0;
		String_t* L_7;
		L_7 = VoiceServiceRequestOptions_get_RequestId_mC465590B47E4B5F542BD3E9BED1074D032C1446F_inline(__this, NULL);
		NullCheck(L_6);
		Dictionary_2_set_Item_m9BF625649E96E60C1509898A992A6447E351D1A2(L_6, _stringLiteral100237A442F30150BD13209B41DA1A90A4C2DB83, L_7, Dictionary_2_set_Item_m9BF625649E96E60C1509898A992A6447E351D1A2_RuntimeMethod_var);
		// foreach (var key in QueryParams.Keys)
		Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* L_8;
		L_8 = VoiceServiceRequestOptions_get_QueryParams_mF622577A065A19AA734F436AB99F4C7149DE8FAD_inline(__this, NULL);
		NullCheck(L_8);
		KeyCollection_t2EDD317F5771E575ACB63527B5AFB71291040342* L_9;
		L_9 = Dictionary_2_get_Keys_m0014C8E91B9B4377ACFBD26A9175A7E5C016D9E9(L_8, Dictionary_2_get_Keys_m0014C8E91B9B4377ACFBD26A9175A7E5C016D9E9_RuntimeMethod_var);
		NullCheck(L_9);
		Enumerator_t84BD4D6D35ABE5554A430614BF2F7588BC152867 L_10;
		L_10 = KeyCollection_GetEnumerator_m6B09BC0C54723DE1DB3E62395E41B76F419BAC22(L_9, KeyCollection_GetEnumerator_m6B09BC0C54723DE1DB3E62395E41B76F419BAC22_RuntimeMethod_var);
		V_1 = L_10;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_007f:
			{// begin finally (depth: 1)
				Enumerator_Dispose_m6C974325ADBDD3ECEBAA290D7940AC282C56386A((&V_1), Enumerator_Dispose_m6C974325ADBDD3ECEBAA290D7940AC282C56386A_RuntimeMethod_var);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_0074_1;
			}

IL_0056_1:
			{
				// foreach (var key in QueryParams.Keys)
				String_t* L_11;
				L_11 = Enumerator_get_Current_m4620EF2C1DF7D94D5A511226C42A3A42040B1C9E_inline((&V_1), Enumerator_get_Current_m4620EF2C1DF7D94D5A511226C42A3A42040B1C9E_RuntimeMethod_var);
				V_2 = L_11;
				// parameters[key] = QueryParams[key];
				Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* L_12 = V_0;
				String_t* L_13 = V_2;
				Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* L_14;
				L_14 = VoiceServiceRequestOptions_get_QueryParams_mF622577A065A19AA734F436AB99F4C7149DE8FAD_inline(__this, NULL);
				String_t* L_15 = V_2;
				NullCheck(L_14);
				String_t* L_16;
				L_16 = Dictionary_2_get_Item_mB13DFB3E7499031847CF544977D4EFB1AC0157AB(L_14, L_15, Dictionary_2_get_Item_mB13DFB3E7499031847CF544977D4EFB1AC0157AB_RuntimeMethod_var);
				NullCheck(L_12);
				Dictionary_2_set_Item_m9BF625649E96E60C1509898A992A6447E351D1A2(L_12, L_13, L_16, Dictionary_2_set_Item_m9BF625649E96E60C1509898A992A6447E351D1A2_RuntimeMethod_var);
			}

IL_0074_1:
			{
				// foreach (var key in QueryParams.Keys)
				bool L_17;
				L_17 = Enumerator_MoveNext_mE8FB9EBD177219F5AC0BF48642FB47D3E186C283((&V_1), Enumerator_MoveNext_mE8FB9EBD177219F5AC0BF48642FB47D3E186C283_RuntimeMethod_var);
				if (L_17)
				{
					goto IL_0056_1;
				}
			}
			{
				goto IL_008e;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_008e:
	{
		// return JsonConvert.SerializeObject(parameters);
		Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* L_18 = V_0;
		il2cpp_codegen_runtime_class_init_inline(JsonConvert_t69A348E775F1FA63C310F5FE324F3EE231AD8072_il2cpp_TypeInfo_var);
		String_t* L_19;
		L_19 = JsonConvert_SerializeObject_TisDictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83_m610316C589A5BB24A5DD256925743F4BCE73CA74(L_18, (JsonConverterU5BU5D_tF117D3A16A2A7AAC2A66A7EDCD32E3F48B704DDA*)NULL, (bool)0, JsonConvert_SerializeObject_TisDictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83_m610316C589A5BB24A5DD256925743F4BCE73CA74_RuntimeMethod_var);
		V_3 = L_19;
		goto IL_0099;
	}

IL_0099:
	{
		// }
		String_t* L_20 = V_3;
		return L_20;
	}
}
// System.Void Meta.WitAi.Configuration.WitRequestOptions::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WitRequestOptions__ctor_mE0690E218F01FC193447FCFACBD3A3BFF60AADCF (WitRequestOptions_tB2E8B103538F7E42F0568C6F62F2158FA45EF483* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Array_Empty_TisQueryParam_t9D43428FEE0F1D498A2606403DF54F2B48B0C76F_m972F54D524ED9AE220774753BE7EA4E816006C13_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public int nBestIntents = -1;
		__this->___nBestIntents_5 = (-1);
		QueryParamU5BU5D_tECB106E0E9D39573F239DA1C256E0922C6DDFE10* L_0;
		L_0 = Array_Empty_TisQueryParam_t9D43428FEE0F1D498A2606403DF54F2B48B0C76F_m972F54D524ED9AE220774753BE7EA4E816006C13_inline(Array_Empty_TisQueryParam_t9D43428FEE0F1D498A2606403DF54F2B48B0C76F_m972F54D524ED9AE220774753BE7EA4E816006C13_RuntimeMethod_var);
		VoiceServiceRequestOptions__ctor_m6E07BB0CA1E3038133B5627D1903C81B89D63EC2(__this, L_0, NULL);
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
// UnityEngine.Vector2 Meta.WitAi.Configuration.WitRuntimeConfiguration::get_RecordingTimeRange()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 WitRuntimeConfiguration_get_RecordingTimeRange_m09E8B5BBC2C4310CD06F725CCFC8A67ABAD09B75 (WitRuntimeConfiguration_t9724E21E35E3E1ABB5F0B4ECD5CC8F325CA1CC05* __this, const RuntimeMethod* method) 
{
	{
		// protected virtual Vector2 RecordingTimeRange => new Vector2(0, 20);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_0;
		memset((&L_0), 0, sizeof(L_0));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_0), (0.0f), (20.0f), /*hidden argument*/NULL);
		return L_0;
	}
}
// System.Void Meta.WitAi.Configuration.WitRuntimeConfiguration::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WitRuntimeConfiguration__ctor_mE05E2ACD079B168574B81B0A71CD8AEE05FE752F (WitRuntimeConfiguration_t9724E21E35E3E1ABB5F0B4ECD5CC8F325CA1CC05* __this, const RuntimeMethod* method) 
{
	{
		// public float minKeepAliveVolume = .0005f;
		__this->___minKeepAliveVolume_1 = (0.000500000024f);
		// public float minKeepAliveTimeInSeconds = 2f;
		__this->___minKeepAliveTimeInSeconds_2 = (2.0f);
		// public float minTranscriptionKeepAliveTimeInSeconds = 1f;
		__this->___minTranscriptionKeepAliveTimeInSeconds_3 = (1.0f);
		// public float maxRecordingTime = 20;
		__this->___maxRecordingTime_4 = (20.0f);
		// [SerializeField] public float soundWakeThreshold = .0005f;
		__this->___soundWakeThreshold_5 = (0.000500000024f);
		// [Range(10, 500)] [SerializeField] public int sampleLengthInMs = 10;
		__this->___sampleLengthInMs_6 = ((int32_t)10);
		// [SerializeField] public float micBufferLengthInSeconds = 1;
		__this->___micBufferLengthInSeconds_7 = (1.0f);
		// [Range(1, 10)] [SerializeField] public int maxConcurrentRequests = 5;
		__this->___maxConcurrentRequests_8 = 5;
		// public bool sendAudioToWit = true;
		__this->___sendAudioToWit_9 = (bool)1;
		// public float preferredActivationOffset = -.5f;
		__this->___preferredActivationOffset_12 = (-0.5f);
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
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
// Meta.WitAi.Data.AudioBuffer Meta.WitAi.Data.AudioBuffer::get_Instance()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AudioBuffer_t8F78C90BB0306EE2F5C4787B5D6ACF16EEF33E72* AudioBuffer_get_Instance_m4814D13CF2DDD846128EB95989EB2C764FFF48C1 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AudioBuffer_t8F78C90BB0306EE2F5C4787B5D6ACF16EEF33E72_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_AddComponent_TisAudioBuffer_t8F78C90BB0306EE2F5C4787B5D6ACF16EEF33E72_mC0D3594C79442A97F3273BB8B5FE45D38A18A295_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_t76FEDD663AB33C991A9C9A23129337651094216F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_FindObjectOfType_TisAudioBuffer_t8F78C90BB0306EE2F5C4787B5D6ACF16EEF33E72_m524F3E82FE6FC77F342A3146566AD48E5DDF5776_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD5CBE5FC06436E56C8CFCEAB27D9AC06FDFE22BD);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* V_2 = NULL;
	AudioBuffer_t8F78C90BB0306EE2F5C4787B5D6ACF16EEF33E72* V_3 = NULL;
	int32_t G_B3_0 = 0;
	{
		// if (!_instance && Application.isPlaying)
		AudioBuffer_t8F78C90BB0306EE2F5C4787B5D6ACF16EEF33E72* L_0 = ((AudioBuffer_t8F78C90BB0306EE2F5C4787B5D6ACF16EEF33E72_StaticFields*)il2cpp_codegen_static_fields_for(AudioBuffer_t8F78C90BB0306EE2F5C4787B5D6ACF16EEF33E72_il2cpp_TypeInfo_var))->____instance_4;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Implicit_m93896EF7D68FA113C42D3FE2BC6F661FC7EF514A(L_0, NULL);
		if (L_1)
		{
			goto IL_0014;
		}
	}
	{
		bool L_2;
		L_2 = Application_get_isPlaying_m25B0ABDFEF54F5370CD3F263A813540843D00F34(NULL);
		G_B3_0 = ((int32_t)(L_2));
		goto IL_0015;
	}

IL_0014:
	{
		G_B3_0 = 0;
	}

IL_0015:
	{
		V_0 = (bool)G_B3_0;
		bool L_3 = V_0;
		if (!L_3)
		{
			goto IL_004e;
		}
	}
	{
		// _instance = FindObjectOfType<AudioBuffer>();
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		AudioBuffer_t8F78C90BB0306EE2F5C4787B5D6ACF16EEF33E72* L_4;
		L_4 = Object_FindObjectOfType_TisAudioBuffer_t8F78C90BB0306EE2F5C4787B5D6ACF16EEF33E72_m524F3E82FE6FC77F342A3146566AD48E5DDF5776(Object_FindObjectOfType_TisAudioBuffer_t8F78C90BB0306EE2F5C4787B5D6ACF16EEF33E72_m524F3E82FE6FC77F342A3146566AD48E5DDF5776_RuntimeMethod_var);
		((AudioBuffer_t8F78C90BB0306EE2F5C4787B5D6ACF16EEF33E72_StaticFields*)il2cpp_codegen_static_fields_for(AudioBuffer_t8F78C90BB0306EE2F5C4787B5D6ACF16EEF33E72_il2cpp_TypeInfo_var))->____instance_4 = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&((AudioBuffer_t8F78C90BB0306EE2F5C4787B5D6ACF16EEF33E72_StaticFields*)il2cpp_codegen_static_fields_for(AudioBuffer_t8F78C90BB0306EE2F5C4787B5D6ACF16EEF33E72_il2cpp_TypeInfo_var))->____instance_4), (void*)L_4);
		// if (!_instance)
		AudioBuffer_t8F78C90BB0306EE2F5C4787B5D6ACF16EEF33E72* L_5 = ((AudioBuffer_t8F78C90BB0306EE2F5C4787B5D6ACF16EEF33E72_StaticFields*)il2cpp_codegen_static_fields_for(AudioBuffer_t8F78C90BB0306EE2F5C4787B5D6ACF16EEF33E72_il2cpp_TypeInfo_var))->____instance_4;
		bool L_6;
		L_6 = Object_op_Implicit_m93896EF7D68FA113C42D3FE2BC6F661FC7EF514A(L_5, NULL);
		V_1 = (bool)((((int32_t)L_6) == ((int32_t)0))? 1 : 0);
		bool L_7 = V_1;
		if (!L_7)
		{
			goto IL_004d;
		}
	}
	{
		// var audioBufferObject = new GameObject("AudioBuffer");
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_8 = (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*)il2cpp_codegen_object_new(GameObject_t76FEDD663AB33C991A9C9A23129337651094216F_il2cpp_TypeInfo_var);
		NullCheck(L_8);
		GameObject__ctor_m37D512B05D292F954792225E6C6EEE95293A9B88(L_8, _stringLiteralD5CBE5FC06436E56C8CFCEAB27D9AC06FDFE22BD, NULL);
		V_2 = L_8;
		// _instance = audioBufferObject.AddComponent<AudioBuffer>();
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_9 = V_2;
		NullCheck(L_9);
		AudioBuffer_t8F78C90BB0306EE2F5C4787B5D6ACF16EEF33E72* L_10;
		L_10 = GameObject_AddComponent_TisAudioBuffer_t8F78C90BB0306EE2F5C4787B5D6ACF16EEF33E72_mC0D3594C79442A97F3273BB8B5FE45D38A18A295(L_9, GameObject_AddComponent_TisAudioBuffer_t8F78C90BB0306EE2F5C4787B5D6ACF16EEF33E72_mC0D3594C79442A97F3273BB8B5FE45D38A18A295_RuntimeMethod_var);
		((AudioBuffer_t8F78C90BB0306EE2F5C4787B5D6ACF16EEF33E72_StaticFields*)il2cpp_codegen_static_fields_for(AudioBuffer_t8F78C90BB0306EE2F5C4787B5D6ACF16EEF33E72_il2cpp_TypeInfo_var))->____instance_4 = L_10;
		Il2CppCodeGenWriteBarrier((void**)(&((AudioBuffer_t8F78C90BB0306EE2F5C4787B5D6ACF16EEF33E72_StaticFields*)il2cpp_codegen_static_fields_for(AudioBuffer_t8F78C90BB0306EE2F5C4787B5D6ACF16EEF33E72_il2cpp_TypeInfo_var))->____instance_4), (void*)L_10);
	}

IL_004d:
	{
	}

IL_004e:
	{
		// return _instance;
		AudioBuffer_t8F78C90BB0306EE2F5C4787B5D6ACF16EEF33E72* L_11 = ((AudioBuffer_t8F78C90BB0306EE2F5C4787B5D6ACF16EEF33E72_StaticFields*)il2cpp_codegen_static_fields_for(AudioBuffer_t8F78C90BB0306EE2F5C4787B5D6ACF16EEF33E72_il2cpp_TypeInfo_var))->____instance_4;
		V_3 = L_11;
		goto IL_0056;
	}

IL_0056:
	{
		// }
		AudioBuffer_t8F78C90BB0306EE2F5C4787B5D6ACF16EEF33E72* L_12 = V_3;
		return L_12;
	}
}
// Meta.WitAi.Events.AudioBufferEvents Meta.WitAi.Data.AudioBuffer::get_Events()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AudioBufferEvents_t464B32397852A58D1333411135D8AB9CF2F6C233* AudioBuffer_get_Events_m9F8D97F751BBD0E548B113EEF96EAE850A0F6D04 (AudioBuffer_t8F78C90BB0306EE2F5C4787B5D6ACF16EEF33E72* __this, const RuntimeMethod* method) 
{
	{
		// public AudioBufferEvents Events => events;
		AudioBufferEvents_t464B32397852A58D1333411135D8AB9CF2F6C233* L_0 = __this->___events_7;
		return L_0;
	}
}
// Meta.WitAi.Interfaces.IAudioInputSource Meta.WitAi.Data.AudioBuffer::get_MicInput()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* AudioBuffer_get_MicInput_m7A1BBC6336FC35DF13D78B1269359BA8CB9C9B41 (AudioBuffer_t8F78C90BB0306EE2F5C4787B5D6ACF16EEF33E72* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_AddComponent_TisMic_t754EFE9D630FC1FBB701EB317849C522C0F384F4_mEDE89F407EEBE6CD16CDDF8EDE285FFFC92AC40A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponentInChildren_TisIAudioInputSource_t364BD5C2442BDCD435A62F220336E0A8F3AC8B0C_m678330762BBD2EF5E9FFF3AA349ACAC178B4B9B1_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* V_2 = NULL;
	int32_t V_3 = 0;
	Scene_tA1DC762B79745EB5140F054C884855B922318356 V_4;
	memset((&V_4), 0, sizeof(V_4));
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* V_5 = NULL;
	bool V_6 = false;
	bool V_7 = false;
	RuntimeObject* V_8 = NULL;
	int32_t G_B3_0 = 0;
	{
		// if (_micInput == null && Application.isPlaying)
		RuntimeObject* L_0 = __this->____micInput_8;
		if (L_0)
		{
			goto IL_0010;
		}
	}
	{
		bool L_1;
		L_1 = Application_get_isPlaying_m25B0ABDFEF54F5370CD3F263A813540843D00F34(NULL);
		G_B3_0 = ((int32_t)(L_1));
		goto IL_0011;
	}

IL_0010:
	{
		G_B3_0 = 0;
	}

IL_0011:
	{
		V_0 = (bool)G_B3_0;
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_00a6;
		}
	}
	{
		// _micInput = gameObject.GetComponentInChildren<IAudioInputSource>();
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_3;
		L_3 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		NullCheck(L_3);
		RuntimeObject* L_4;
		L_4 = GameObject_GetComponentInChildren_TisIAudioInputSource_t364BD5C2442BDCD435A62F220336E0A8F3AC8B0C_m678330762BBD2EF5E9FFF3AA349ACAC178B4B9B1(L_3, GameObject_GetComponentInChildren_TisIAudioInputSource_t364BD5C2442BDCD435A62F220336E0A8F3AC8B0C_m678330762BBD2EF5E9FFF3AA349ACAC178B4B9B1_RuntimeMethod_var);
		__this->____micInput_8 = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____micInput_8), (void*)L_4);
		// if (_micInput == null)
		RuntimeObject* L_5 = __this->____micInput_8;
		V_1 = (bool)((((RuntimeObject*)(RuntimeObject*)L_5) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0);
		bool L_6 = V_1;
		if (!L_6)
		{
			goto IL_0083;
		}
	}
	{
		// foreach (var root in gameObject.scene.GetRootGameObjects())
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_7;
		L_7 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		NullCheck(L_7);
		Scene_tA1DC762B79745EB5140F054C884855B922318356 L_8;
		L_8 = GameObject_get_scene_m747D45E8CECC56DD47D1E103F9E51D5FBEDA4B01(L_7, NULL);
		V_4 = L_8;
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_9;
		L_9 = Scene_GetRootGameObjects_mFDE0BF9EA926F30EC9AE71F33E0AE4D5D4EC5C5B((&V_4), NULL);
		V_2 = L_9;
		V_3 = 0;
		goto IL_007c;
	}

IL_0052:
	{
		// foreach (var root in gameObject.scene.GetRootGameObjects())
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_10 = V_2;
		int32_t L_11 = V_3;
		NullCheck(L_10);
		int32_t L_12 = L_11;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_13 = (L_10)->GetAt(static_cast<il2cpp_array_size_t>(L_12));
		V_5 = L_13;
		// _micInput = root.GetComponentInChildren<IAudioInputSource>();
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_14 = V_5;
		NullCheck(L_14);
		RuntimeObject* L_15;
		L_15 = GameObject_GetComponentInChildren_TisIAudioInputSource_t364BD5C2442BDCD435A62F220336E0A8F3AC8B0C_m678330762BBD2EF5E9FFF3AA349ACAC178B4B9B1(L_14, GameObject_GetComponentInChildren_TisIAudioInputSource_t364BD5C2442BDCD435A62F220336E0A8F3AC8B0C_m678330762BBD2EF5E9FFF3AA349ACAC178B4B9B1_RuntimeMethod_var);
		__this->____micInput_8 = L_15;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____micInput_8), (void*)L_15);
		// if (_micInput != null)
		RuntimeObject* L_16 = __this->____micInput_8;
		V_6 = (bool)((!(((RuntimeObject*)(RuntimeObject*)L_16) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		bool L_17 = V_6;
		if (!L_17)
		{
			goto IL_0077;
		}
	}
	{
		// break;
		goto IL_0082;
	}

IL_0077:
	{
		int32_t L_18 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_18, 1));
	}

IL_007c:
	{
		// foreach (var root in gameObject.scene.GetRootGameObjects())
		int32_t L_19 = V_3;
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_20 = V_2;
		NullCheck(L_20);
		if ((((int32_t)L_19) < ((int32_t)((int32_t)(((RuntimeArray*)L_20)->max_length)))))
		{
			goto IL_0052;
		}
	}

IL_0082:
	{
	}

IL_0083:
	{
		// if (_micInput == null)
		RuntimeObject* L_21 = __this->____micInput_8;
		V_7 = (bool)((((RuntimeObject*)(RuntimeObject*)L_21) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0);
		bool L_22 = V_7;
		if (!L_22)
		{
			goto IL_00a5;
		}
	}
	{
		// _micInput = gameObject.AddComponent<Mic>();
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_23;
		L_23 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		NullCheck(L_23);
		Mic_t754EFE9D630FC1FBB701EB317849C522C0F384F4* L_24;
		L_24 = GameObject_AddComponent_TisMic_t754EFE9D630FC1FBB701EB317849C522C0F384F4_mEDE89F407EEBE6CD16CDDF8EDE285FFFC92AC40A(L_23, GameObject_AddComponent_TisMic_t754EFE9D630FC1FBB701EB317849C522C0F384F4_mEDE89F407EEBE6CD16CDDF8EDE285FFFC92AC40A_RuntimeMethod_var);
		__this->____micInput_8 = L_24;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____micInput_8), (void*)L_24);
	}

IL_00a5:
	{
	}

IL_00a6:
	{
		// return _micInput;
		RuntimeObject* L_25 = __this->____micInput_8;
		V_8 = L_25;
		goto IL_00b0;
	}

IL_00b0:
	{
		// }
		RuntimeObject* L_26 = V_8;
		return L_26;
	}
}
// System.Boolean Meta.WitAi.Data.AudioBuffer::IsRecording(UnityEngine.Component)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AudioBuffer_IsRecording_m9EED4C6E4AB1162EF5864A1AC4782B7C122A145E (AudioBuffer_t8F78C90BB0306EE2F5C4787B5D6ACF16EEF33E72* __this, Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* ___component0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashSet_1_Contains_mFEEBB774E40F237E02F2881245F33540FB4B942D_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t G_B3_0 = 0;
	{
		// public bool IsRecording(Component component) => _waitingRecorders.Contains(component) || _activeRecorders.Contains(component);
		HashSet_1_tF0A60E739EB979571381F8FB075B6B90F6FA6F8D* L_0 = __this->____waitingRecorders_11;
		Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* L_1 = ___component0;
		NullCheck(L_0);
		bool L_2;
		L_2 = HashSet_1_Contains_mFEEBB774E40F237E02F2881245F33540FB4B942D(L_0, L_1, HashSet_1_Contains_mFEEBB774E40F237E02F2881245F33540FB4B942D_RuntimeMethod_var);
		if (L_2)
		{
			goto IL_001c;
		}
	}
	{
		HashSet_1_tF0A60E739EB979571381F8FB075B6B90F6FA6F8D* L_3 = __this->____activeRecorders_12;
		Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* L_4 = ___component0;
		NullCheck(L_3);
		bool L_5;
		L_5 = HashSet_1_Contains_mFEEBB774E40F237E02F2881245F33540FB4B942D(L_3, L_4, HashSet_1_Contains_mFEEBB774E40F237E02F2881245F33540FB4B942D_RuntimeMethod_var);
		G_B3_0 = ((int32_t)(L_5));
		goto IL_001d;
	}

IL_001c:
	{
		G_B3_0 = 1;
	}

IL_001d:
	{
		return (bool)G_B3_0;
	}
}
// System.Boolean Meta.WitAi.Data.AudioBuffer::get_IsInputAvailable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AudioBuffer_get_IsInputAvailable_mBA7ADDFFF4DB7E3F22F174203829BC5A2674370D (AudioBuffer_t8F78C90BB0306EE2F5C4787B5D6ACF16EEF33E72* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IAudioInputSource_t364BD5C2442BDCD435A62F220336E0A8F3AC8B0C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t G_B3_0 = 0;
	{
		// public bool IsInputAvailable => MicInput != null && MicInput.IsInputAvailable;
		RuntimeObject* L_0;
		L_0 = AudioBuffer_get_MicInput_m7A1BBC6336FC35DF13D78B1269359BA8CB9C9B41(__this, NULL);
		if (!L_0)
		{
			goto IL_0015;
		}
	}
	{
		RuntimeObject* L_1;
		L_1 = AudioBuffer_get_MicInput_m7A1BBC6336FC35DF13D78B1269359BA8CB9C9B41(__this, NULL);
		NullCheck(L_1);
		bool L_2;
		L_2 = InterfaceFuncInvoker0< bool >::Invoke(12 /* System.Boolean Meta.WitAi.Interfaces.IAudioInputSource::get_IsInputAvailable() */, IAudioInputSource_t364BD5C2442BDCD435A62F220336E0A8F3AC8B0C_il2cpp_TypeInfo_var, L_1);
		G_B3_0 = ((int32_t)(L_2));
		goto IL_0016;
	}

IL_0015:
	{
		G_B3_0 = 0;
	}

IL_0016:
	{
		return (bool)G_B3_0;
	}
}
// System.Void Meta.WitAi.Data.AudioBuffer::CheckForInput()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioBuffer_CheckForInput_m63A7DE0413B2AE2A2FED224005BBB90449D70509 (AudioBuffer_t8F78C90BB0306EE2F5C4787B5D6ACF16EEF33E72* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IAudioInputSource_t364BD5C2442BDCD435A62F220336E0A8F3AC8B0C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public void CheckForInput() => MicInput.CheckForInput();
		RuntimeObject* L_0;
		L_0 = AudioBuffer_get_MicInput_m7A1BBC6336FC35DF13D78B1269359BA8CB9C9B41(__this, NULL);
		NullCheck(L_0);
		InterfaceActionInvoker0::Invoke(13 /* System.Void Meta.WitAi.Interfaces.IAudioInputSource::CheckForInput() */, IAudioInputSource_t364BD5C2442BDCD435A62F220336E0A8F3AC8B0C_il2cpp_TypeInfo_var, L_0);
		return;
	}
}
// Meta.WitAi.Data.AudioEncoding Meta.WitAi.Data.AudioBuffer::get_AudioEncoding()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AudioEncoding_t98ED2D092A9829C604C73C3B611E2FC987413EE4* AudioBuffer_get_AudioEncoding_m3E9D7CBAE58DD8D8CF432C296C1CE0CA6F8B9831 (AudioBuffer_t8F78C90BB0306EE2F5C4787B5D6ACF16EEF33E72* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IAudioInputSource_t364BD5C2442BDCD435A62F220336E0A8F3AC8B0C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public AudioEncoding AudioEncoding => MicInput.AudioEncoding;
		RuntimeObject* L_0;
		L_0 = AudioBuffer_get_MicInput_m7A1BBC6336FC35DF13D78B1269359BA8CB9C9B41(__this, NULL);
		NullCheck(L_0);
		AudioEncoding_t98ED2D092A9829C604C73C3B611E2FC987413EE4* L_1;
		L_1 = InterfaceFuncInvoker0< AudioEncoding_t98ED2D092A9829C604C73C3B611E2FC987413EE4* >::Invoke(11 /* Meta.WitAi.Data.AudioEncoding Meta.WitAi.Interfaces.IAudioInputSource::get_AudioEncoding() */, IAudioInputSource_t364BD5C2442BDCD435A62F220336E0A8F3AC8B0C_il2cpp_TypeInfo_var, L_0);
		return L_1;
	}
}
// System.Void Meta.WitAi.Data.AudioBuffer::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioBuffer_Awake_mC70A740DD87569D2432D1DBE928420AB3B870AE7 (AudioBuffer_t8F78C90BB0306EE2F5C4787B5D6ACF16EEF33E72* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AudioBuffer_t8F78C90BB0306EE2F5C4787B5D6ACF16EEF33E72_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// _instance = this;
		((AudioBuffer_t8F78C90BB0306EE2F5C4787B5D6ACF16EEF33E72_StaticFields*)il2cpp_codegen_static_fields_for(AudioBuffer_t8F78C90BB0306EE2F5C4787B5D6ACF16EEF33E72_il2cpp_TypeInfo_var))->____instance_4 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&((AudioBuffer_t8F78C90BB0306EE2F5C4787B5D6ACF16EEF33E72_StaticFields*)il2cpp_codegen_static_fields_for(AudioBuffer_t8F78C90BB0306EE2F5C4787B5D6ACF16EEF33E72_il2cpp_TypeInfo_var))->____instance_4), (void*)__this);
		// InitializeMicDataBuffer();
		AudioBuffer_InitializeMicDataBuffer_m70F40E4E308127C3F9FEF8E003314DF3EAB7C8FA(__this, NULL);
		// }
		return;
	}
}
// System.Void Meta.WitAi.Data.AudioBuffer::OnEnable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioBuffer_OnEnable_mBFA209E35214E22CDB159C2CA336D6B0ADA94B0A (AudioBuffer_t8F78C90BB0306EE2F5C4787B5D6ACF16EEF33E72* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_3_t014775F97068AFC7018FE805CA856B7C5CF281F8_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AudioBuffer_OnMicSampleReady_m11668DCFCD92FC0FD0E66B9E0F788C3CC30127AD_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IAudioInputSource_t364BD5C2442BDCD435A62F220336E0A8F3AC8B0C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		// MicInput.OnSampleReady += OnMicSampleReady;
		RuntimeObject* L_0;
		L_0 = AudioBuffer_get_MicInput_m7A1BBC6336FC35DF13D78B1269359BA8CB9C9B41(__this, NULL);
		Action_3_t014775F97068AFC7018FE805CA856B7C5CF281F8* L_1 = (Action_3_t014775F97068AFC7018FE805CA856B7C5CF281F8*)il2cpp_codegen_object_new(Action_3_t014775F97068AFC7018FE805CA856B7C5CF281F8_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		Action_3__ctor_m456761457D50C389C47B3D27E78233649D267B93(L_1, __this, (intptr_t)((void*)AudioBuffer_OnMicSampleReady_m11668DCFCD92FC0FD0E66B9E0F788C3CC30127AD_RuntimeMethod_var), NULL);
		NullCheck(L_0);
		InterfaceActionInvoker1< Action_3_t014775F97068AFC7018FE805CA856B7C5CF281F8* >::Invoke(4 /* System.Void Meta.WitAi.Interfaces.IAudioInputSource::add_OnSampleReady(System.Action`3<System.Int32,System.Single[],System.Single>) */, IAudioInputSource_t364BD5C2442BDCD435A62F220336E0A8F3AC8B0C_il2cpp_TypeInfo_var, L_0, L_1);
		// if (alwaysRecording) StartRecording(this);
		bool L_2 = __this->___alwaysRecording_5;
		V_0 = L_2;
		bool L_3 = V_0;
		if (!L_3)
		{
			goto IL_002b;
		}
	}
	{
		// if (alwaysRecording) StartRecording(this);
		AudioBuffer_StartRecording_m888C17A80A2B7C4F4E6B18E712DE333D9C23C670(__this, __this, NULL);
	}

IL_002b:
	{
		// }
		return;
	}
}
// System.Void Meta.WitAi.Data.AudioBuffer::OnDisable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioBuffer_OnDisable_mFEB33F099CA876E693859474F1AA070FC9CD8F1F (AudioBuffer_t8F78C90BB0306EE2F5C4787B5D6ACF16EEF33E72* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_3_t014775F97068AFC7018FE805CA856B7C5CF281F8_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AudioBuffer_OnMicSampleReady_m11668DCFCD92FC0FD0E66B9E0F788C3CC30127AD_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IAudioInputSource_t364BD5C2442BDCD435A62F220336E0A8F3AC8B0C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		// MicInput.OnSampleReady -= OnMicSampleReady;
		RuntimeObject* L_0;
		L_0 = AudioBuffer_get_MicInput_m7A1BBC6336FC35DF13D78B1269359BA8CB9C9B41(__this, NULL);
		Action_3_t014775F97068AFC7018FE805CA856B7C5CF281F8* L_1 = (Action_3_t014775F97068AFC7018FE805CA856B7C5CF281F8*)il2cpp_codegen_object_new(Action_3_t014775F97068AFC7018FE805CA856B7C5CF281F8_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		Action_3__ctor_m456761457D50C389C47B3D27E78233649D267B93(L_1, __this, (intptr_t)((void*)AudioBuffer_OnMicSampleReady_m11668DCFCD92FC0FD0E66B9E0F788C3CC30127AD_RuntimeMethod_var), NULL);
		NullCheck(L_0);
		InterfaceActionInvoker1< Action_3_t014775F97068AFC7018FE805CA856B7C5CF281F8* >::Invoke(5 /* System.Void Meta.WitAi.Interfaces.IAudioInputSource::remove_OnSampleReady(System.Action`3<System.Int32,System.Single[],System.Single>) */, IAudioInputSource_t364BD5C2442BDCD435A62F220336E0A8F3AC8B0C_il2cpp_TypeInfo_var, L_0, L_1);
		// if (alwaysRecording) StopRecording(this);
		bool L_2 = __this->___alwaysRecording_5;
		V_0 = L_2;
		bool L_3 = V_0;
		if (!L_3)
		{
			goto IL_002b;
		}
	}
	{
		// if (alwaysRecording) StopRecording(this);
		AudioBuffer_StopRecording_mD07E74323DA4F231CC2B861F8AD6AF6DA1997200(__this, __this, NULL);
	}

IL_002b:
	{
		// }
		return;
	}
}
// System.Void Meta.WitAi.Data.AudioBuffer::OnMicSampleReady(System.Int32,System.Single[],System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioBuffer_OnMicSampleReady_m11668DCFCD92FC0FD0E66B9E0F788C3CC30127AD (AudioBuffer_t8F78C90BB0306EE2F5C4787B5D6ACF16EEF33E72* __this, int32_t ___sampleCount0, SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* ___sample1, float ___levelMax2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteDataWriterU5BU5D_t65BFCE3A23A6A9D43E7311E07FE38BAD340ADA5B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteDataWriter_t42C70174C8038884885A93F156C878EC779F882D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Marker_Clone_mE4396CFC59F594A985AC0B08B4962A66A22425FE_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Marker_ReadIntoWriters_mA97BA1DC688916D2951B8891A59A3B834F3C5ACE_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityEvent_1_Invoke_mABC41DCEDDFA68F8F39C0DFC1CF55B7C1B70A805_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityEvent_3_Invoke_m0578E7356B07DFFDCAF708E79C51CB74AF894D8D_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	Marker_t80D0133ECCCB8414D295FFD7C3FB9E6E564F5E42* V_0 = NULL;
	bool V_1 = false;
	OnSampleReadyEvent_t43C9DCB6394FF2C5F335602AC5455C1A6B430486* G_B4_0 = NULL;
	OnSampleReadyEvent_t43C9DCB6394FF2C5F335602AC5455C1A6B430486* G_B3_0 = NULL;
	{
		// events.OnMicLevelChanged.Invoke(levelMax);
		AudioBufferEvents_t464B32397852A58D1333411135D8AB9CF2F6C233* L_0 = __this->___events_7;
		NullCheck(L_0);
		WitMicLevelChangedEvent_tA9B2889CB33EAA09656739F26AA70252ED15DEF7* L_1 = L_0->___OnMicLevelChanged_1;
		float L_2 = ___levelMax2;
		NullCheck(L_1);
		UnityEvent_1_Invoke_mABC41DCEDDFA68F8F39C0DFC1CF55B7C1B70A805(L_1, L_2, UnityEvent_1_Invoke_mABC41DCEDDFA68F8F39C0DFC1CF55B7C1B70A805_RuntimeMethod_var);
		// var marker = CreateMarker();
		Marker_t80D0133ECCCB8414D295FFD7C3FB9E6E564F5E42* L_3;
		L_3 = AudioBuffer_CreateMarker_m427FB5BE768CFB06CB3A5AF48C65E7BA3E206E3D(__this, NULL);
		V_0 = L_3;
		// Convert(sample);
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_4 = ___sample1;
		AudioBuffer_Convert_m94FDE77E65A3435867B31C0222EED967EBFB82D5(__this, L_4, NULL);
		// if (null != events.OnByteDataReady)
		AudioBufferEvents_t464B32397852A58D1333411135D8AB9CF2F6C233* L_5 = __this->___events_7;
		NullCheck(L_5);
		WitByteDataEvent_t6F952E3BEDEBEEFF9FF094E1AFA7B2089F88B4CC* L_6 = L_5->___OnByteDataReady_2;
		V_1 = (bool)((!(((RuntimeObject*)(WitByteDataEvent_t6F952E3BEDEBEEFF9FF094E1AFA7B2089F88B4CC*)L_6) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		bool L_7 = V_1;
		if (!L_7)
		{
			goto IL_0061;
		}
	}
	{
		// marker.Clone().ReadIntoWriters(events.OnByteDataReady.Invoke);
		Marker_t80D0133ECCCB8414D295FFD7C3FB9E6E564F5E42* L_8 = V_0;
		NullCheck(L_8);
		Marker_t80D0133ECCCB8414D295FFD7C3FB9E6E564F5E42* L_9;
		L_9 = Marker_Clone_mE4396CFC59F594A985AC0B08B4962A66A22425FE(L_8, Marker_Clone_mE4396CFC59F594A985AC0B08B4962A66A22425FE_RuntimeMethod_var);
		ByteDataWriterU5BU5D_t65BFCE3A23A6A9D43E7311E07FE38BAD340ADA5B* L_10 = (ByteDataWriterU5BU5D_t65BFCE3A23A6A9D43E7311E07FE38BAD340ADA5B*)(ByteDataWriterU5BU5D_t65BFCE3A23A6A9D43E7311E07FE38BAD340ADA5B*)SZArrayNew(ByteDataWriterU5BU5D_t65BFCE3A23A6A9D43E7311E07FE38BAD340ADA5B_il2cpp_TypeInfo_var, (uint32_t)1);
		ByteDataWriterU5BU5D_t65BFCE3A23A6A9D43E7311E07FE38BAD340ADA5B* L_11 = L_10;
		AudioBufferEvents_t464B32397852A58D1333411135D8AB9CF2F6C233* L_12 = __this->___events_7;
		NullCheck(L_12);
		WitByteDataEvent_t6F952E3BEDEBEEFF9FF094E1AFA7B2089F88B4CC* L_13 = L_12->___OnByteDataReady_2;
		ByteDataWriter_t42C70174C8038884885A93F156C878EC779F882D* L_14 = (ByteDataWriter_t42C70174C8038884885A93F156C878EC779F882D*)il2cpp_codegen_object_new(ByteDataWriter_t42C70174C8038884885A93F156C878EC779F882D_il2cpp_TypeInfo_var);
		NullCheck(L_14);
		ByteDataWriter__ctor_m9D61B1D1D35A39F6085FB52CE3F50E20FBA9F3E8(L_14, L_13, (intptr_t)((void*)UnityEvent_3_Invoke_m0578E7356B07DFFDCAF708E79C51CB74AF894D8D_RuntimeMethod_var), NULL);
		NullCheck(L_11);
		ArrayElementTypeCheck (L_11, L_14);
		(L_11)->SetAt(static_cast<il2cpp_array_size_t>(0), (ByteDataWriter_t42C70174C8038884885A93F156C878EC779F882D*)L_14);
		NullCheck(L_9);
		Marker_ReadIntoWriters_mA97BA1DC688916D2951B8891A59A3B834F3C5ACE(L_9, L_11, Marker_ReadIntoWriters_mA97BA1DC688916D2951B8891A59A3B834F3C5ACE_RuntimeMethod_var);
	}

IL_0061:
	{
		// events.OnSampleReady?.Invoke(marker, levelMax);
		AudioBufferEvents_t464B32397852A58D1333411135D8AB9CF2F6C233* L_15 = __this->___events_7;
		NullCheck(L_15);
		OnSampleReadyEvent_t43C9DCB6394FF2C5F335602AC5455C1A6B430486* L_16 = L_15->___OnSampleReady_0;
		OnSampleReadyEvent_t43C9DCB6394FF2C5F335602AC5455C1A6B430486* L_17 = L_16;
		G_B3_0 = L_17;
		if (L_17)
		{
			G_B4_0 = L_17;
			goto IL_0072;
		}
	}
	{
		goto IL_007a;
	}

IL_0072:
	{
		Marker_t80D0133ECCCB8414D295FFD7C3FB9E6E564F5E42* L_18 = V_0;
		float L_19 = ___levelMax2;
		NullCheck(G_B4_0);
		OnSampleReadyEvent_Invoke_m9A89B018C8F93B365D23D6EF11B3C445D481782C_inline(G_B4_0, L_18, L_19, NULL);
	}

IL_007a:
	{
		// }
		return;
	}
}
// System.Void Meta.WitAi.Data.AudioBuffer::InitializeMicDataBuffer()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioBuffer_InitializeMicDataBuffer_m70F40E4E308127C3F9FEF8E003314DF3EAB7C8FA (AudioBuffer_t8F78C90BB0306EE2F5C4787B5D6ACF16EEF33E72* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RingBuffer_1__ctor_m7784E3644A1B55E96CBD6EEF4216CABCD9723A65_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RingBuffer_1_t553FDAA382235F13BBC8000565860BFE1438D276_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	int32_t V_1 = 0;
	bool V_2 = false;
	int32_t G_B3_0 = 0;
	{
		// if (null == _micDataBuffer && audioBufferConfiguration.micBufferLengthInSeconds > 0)
		RingBuffer_1_t553FDAA382235F13BBC8000565860BFE1438D276* L_0 = __this->____micDataBuffer_9;
		if (L_0)
		{
			goto IL_001d;
		}
	}
	{
		AudioBufferConfiguration_tB38ABF06828B3927593D6E28F41EC838EFE9B8B3* L_1 = __this->___audioBufferConfiguration_6;
		NullCheck(L_1);
		float L_2 = L_1->___micBufferLengthInSeconds_1;
		G_B3_0 = ((((float)L_2) > ((float)(0.0f)))? 1 : 0);
		goto IL_001e;
	}

IL_001d:
	{
		G_B3_0 = 0;
	}

IL_001e:
	{
		V_0 = (bool)G_B3_0;
		bool L_3 = V_0;
		if (!L_3)
		{
			goto IL_006e;
		}
	}
	{
		// var bufferSize = (int) Mathf.Ceil(2 *
		//                                   audioBufferConfiguration
		//                                       .micBufferLengthInSeconds * 1000 *
		//                                   audioBufferConfiguration.sampleLengthInMs);
		AudioBufferConfiguration_tB38ABF06828B3927593D6E28F41EC838EFE9B8B3* L_4 = __this->___audioBufferConfiguration_6;
		NullCheck(L_4);
		float L_5 = L_4->___micBufferLengthInSeconds_1;
		AudioBufferConfiguration_tB38ABF06828B3927593D6E28F41EC838EFE9B8B3* L_6 = __this->___audioBufferConfiguration_6;
		NullCheck(L_6);
		int32_t L_7 = L_6->___sampleLengthInMs_0;
		float L_8;
		L_8 = ceilf(((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_multiply((2.0f), L_5)), (1000.0f))), ((float)L_7))));
		V_1 = il2cpp_codegen_cast_double_to_int<int32_t>(L_8);
		// if (bufferSize <= 0)
		int32_t L_9 = V_1;
		V_2 = (bool)((((int32_t)((((int32_t)L_9) > ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_10 = V_2;
		if (!L_10)
		{
			goto IL_0061;
		}
	}
	{
		// bufferSize = 1024;
		V_1 = ((int32_t)1024);
	}

IL_0061:
	{
		// _micDataBuffer = new RingBuffer<byte>(bufferSize);
		int32_t L_11 = V_1;
		RingBuffer_1_t553FDAA382235F13BBC8000565860BFE1438D276* L_12 = (RingBuffer_1_t553FDAA382235F13BBC8000565860BFE1438D276*)il2cpp_codegen_object_new(RingBuffer_1_t553FDAA382235F13BBC8000565860BFE1438D276_il2cpp_TypeInfo_var);
		NullCheck(L_12);
		RingBuffer_1__ctor_m7784E3644A1B55E96CBD6EEF4216CABCD9723A65(L_12, L_11, RingBuffer_1__ctor_m7784E3644A1B55E96CBD6EEF4216CABCD9723A65_RuntimeMethod_var);
		__this->____micDataBuffer_9 = L_12;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____micDataBuffer_9), (void*)L_12);
	}

IL_006e:
	{
		// }
		return;
	}
}
// System.Void Meta.WitAi.Data.AudioBuffer::Convert(System.Single[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioBuffer_Convert_m94FDE77E65A3435867B31C0222EED967EBFB82D5 (AudioBuffer_t8F78C90BB0306EE2F5C4787B5D6ACF16EEF33E72* __this, SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* ___samples0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RingBuffer_1_Push_m8B341749D1C9AE76A94F221A79BBC887BD6F1AED_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int16_t V_2 = 0;
	bool V_3 = false;
	{
		// var sampleCount = samples.Length;
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_0 = ___samples0;
		NullCheck(L_0);
		V_0 = ((int32_t)(((RuntimeArray*)L_0)->max_length));
		// for (int i = 0; i < sampleCount; i++)
		V_1 = 0;
		goto IL_0038;
	}

IL_0009:
	{
		// short data = (short) (samples[i] * rescaleFactor);
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_1 = ___samples0;
		int32_t L_2 = V_1;
		NullCheck(L_1);
		int32_t L_3 = L_2;
		float L_4 = (L_1)->GetAt(static_cast<il2cpp_array_size_t>(L_3));
		V_2 = il2cpp_codegen_cast_double_to_int<int16_t>(((float)il2cpp_codegen_multiply(L_4, (32767.0f))));
		// _micDataBuffer.Push((byte) data);
		RingBuffer_1_t553FDAA382235F13BBC8000565860BFE1438D276* L_5 = __this->____micDataBuffer_9;
		int16_t L_6 = V_2;
		NullCheck(L_5);
		RingBuffer_1_Push_m8B341749D1C9AE76A94F221A79BBC887BD6F1AED(L_5, (uint8_t)((int32_t)(uint8_t)L_6), RingBuffer_1_Push_m8B341749D1C9AE76A94F221A79BBC887BD6F1AED_RuntimeMethod_var);
		// _micDataBuffer.Push((byte) (data >> 8));
		RingBuffer_1_t553FDAA382235F13BBC8000565860BFE1438D276* L_7 = __this->____micDataBuffer_9;
		int16_t L_8 = V_2;
		NullCheck(L_7);
		RingBuffer_1_Push_m8B341749D1C9AE76A94F221A79BBC887BD6F1AED(L_7, (uint8_t)((int32_t)(uint8_t)((int32_t)((int32_t)L_8>>8))), RingBuffer_1_Push_m8B341749D1C9AE76A94F221A79BBC887BD6F1AED_RuntimeMethod_var);
		// for (int i = 0; i < sampleCount; i++)
		int32_t L_9 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_9, 1));
	}

IL_0038:
	{
		// for (int i = 0; i < sampleCount; i++)
		int32_t L_10 = V_1;
		int32_t L_11 = V_0;
		V_3 = (bool)((((int32_t)L_10) < ((int32_t)L_11))? 1 : 0);
		bool L_12 = V_3;
		if (L_12)
		{
			goto IL_0009;
		}
	}
	{
		// }
		return;
	}
}
// Meta.WitAi.Data.RingBuffer`1/Marker<System.Byte> Meta.WitAi.Data.AudioBuffer::CreateMarker()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Marker_t80D0133ECCCB8414D295FFD7C3FB9E6E564F5E42* AudioBuffer_CreateMarker_m427FB5BE768CFB06CB3A5AF48C65E7BA3E206E3D (AudioBuffer_t8F78C90BB0306EE2F5C4787B5D6ACF16EEF33E72* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RingBuffer_1_CreateMarker_m0631E48C13008F51BFD02F5691BB9A260DBE83B4_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	Marker_t80D0133ECCCB8414D295FFD7C3FB9E6E564F5E42* V_0 = NULL;
	{
		// return _micDataBuffer.CreateMarker();
		RingBuffer_1_t553FDAA382235F13BBC8000565860BFE1438D276* L_0 = __this->____micDataBuffer_9;
		NullCheck(L_0);
		Marker_t80D0133ECCCB8414D295FFD7C3FB9E6E564F5E42* L_1;
		L_1 = RingBuffer_1_CreateMarker_m0631E48C13008F51BFD02F5691BB9A260DBE83B4(L_0, 0, RingBuffer_1_CreateMarker_m0631E48C13008F51BFD02F5691BB9A260DBE83B4_RuntimeMethod_var);
		V_0 = L_1;
		goto IL_0010;
	}

IL_0010:
	{
		// }
		Marker_t80D0133ECCCB8414D295FFD7C3FB9E6E564F5E42* L_2 = V_0;
		return L_2;
	}
}
// Meta.WitAi.Data.RingBuffer`1/Marker<System.Byte> Meta.WitAi.Data.AudioBuffer::CreateMarker(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Marker_t80D0133ECCCB8414D295FFD7C3FB9E6E564F5E42* AudioBuffer_CreateMarker_mC082638A2121405D9C41EC4456F236AE161A1776 (AudioBuffer_t8F78C90BB0306EE2F5C4787B5D6ACF16EEF33E72* __this, float ___offset0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RingBuffer_1_CreateMarker_m0631E48C13008F51BFD02F5691BB9A260DBE83B4_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	Marker_t80D0133ECCCB8414D295FFD7C3FB9E6E564F5E42* V_1 = NULL;
	{
		// var samples = (int) (AudioEncoding.samplerate * offset);
		AudioEncoding_t98ED2D092A9829C604C73C3B611E2FC987413EE4* L_0;
		L_0 = AudioBuffer_get_AudioEncoding_m3E9D7CBAE58DD8D8CF432C296C1CE0CA6F8B9831(__this, NULL);
		NullCheck(L_0);
		int32_t L_1 = L_0->___samplerate_2;
		float L_2 = ___offset0;
		V_0 = il2cpp_codegen_cast_double_to_int<int32_t>(((float)il2cpp_codegen_multiply(((float)L_1), L_2)));
		// return _micDataBuffer.CreateMarker(samples);
		RingBuffer_1_t553FDAA382235F13BBC8000565860BFE1438D276* L_3 = __this->____micDataBuffer_9;
		int32_t L_4 = V_0;
		NullCheck(L_3);
		Marker_t80D0133ECCCB8414D295FFD7C3FB9E6E564F5E42* L_5;
		L_5 = RingBuffer_1_CreateMarker_m0631E48C13008F51BFD02F5691BB9A260DBE83B4(L_3, L_4, RingBuffer_1_CreateMarker_m0631E48C13008F51BFD02F5691BB9A260DBE83B4_RuntimeMethod_var);
		V_1 = L_5;
		goto IL_0020;
	}

IL_0020:
	{
		// }
		Marker_t80D0133ECCCB8414D295FFD7C3FB9E6E564F5E42* L_6 = V_1;
		return L_6;
	}
}
// System.Void Meta.WitAi.Data.AudioBuffer::StartRecording(UnityEngine.Component)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioBuffer_StartRecording_m888C17A80A2B7C4F4E6B18E712DE333D9C23C670 (AudioBuffer_t8F78C90BB0306EE2F5C4787B5D6ACF16EEF33E72* __this, Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* ___component0, const RuntimeMethod* method) 
{
	{
		// StartCoroutine(WaitForMicToStart(component));
		Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* L_0 = ___component0;
		RuntimeObject* L_1;
		L_1 = AudioBuffer_WaitForMicToStart_m3E8A35EB9D74CC7579F84178CEE11F72CD6CCAE7(__this, L_0, NULL);
		Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* L_2;
		L_2 = MonoBehaviour_StartCoroutine_m4CAFF732AA28CD3BDC5363B44A863575530EC812(__this, L_1, NULL);
		// }
		return;
	}
}
// System.Collections.IEnumerator Meta.WitAi.Data.AudioBuffer::WaitForMicToStart(UnityEngine.Component)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* AudioBuffer_WaitForMicToStart_m3E8A35EB9D74CC7579F84178CEE11F72CD6CCAE7 (AudioBuffer_t8F78C90BB0306EE2F5C4787B5D6ACF16EEF33E72* __this, Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* ___component0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CWaitForMicToStartU3Ed__30_tA981E845AE3F32AC0CB036E88C2CAA3FFBE51577_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CWaitForMicToStartU3Ed__30_tA981E845AE3F32AC0CB036E88C2CAA3FFBE51577* L_0 = (U3CWaitForMicToStartU3Ed__30_tA981E845AE3F32AC0CB036E88C2CAA3FFBE51577*)il2cpp_codegen_object_new(U3CWaitForMicToStartU3Ed__30_tA981E845AE3F32AC0CB036E88C2CAA3FFBE51577_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CWaitForMicToStartU3Ed__30__ctor_mBA988CBCA2A1494C37AB874A7CFDC4C06EF10203(L_0, 0, NULL);
		U3CWaitForMicToStartU3Ed__30_tA981E845AE3F32AC0CB036E88C2CAA3FFBE51577* L_1 = L_0;
		NullCheck(L_1);
		L_1->___U3CU3E4__this_3 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___U3CU3E4__this_3), (void*)__this);
		U3CWaitForMicToStartU3Ed__30_tA981E845AE3F32AC0CB036E88C2CAA3FFBE51577* L_2 = L_1;
		Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* L_3 = ___component0;
		NullCheck(L_2);
		L_2->___component_2 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&L_2->___component_2), (void*)L_3);
		return L_2;
	}
}
// System.Void Meta.WitAi.Data.AudioBuffer::StopRecording(UnityEngine.Component)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioBuffer_StopRecording_mD07E74323DA4F231CC2B861F8AD6AF6DA1997200 (AudioBuffer_t8F78C90BB0306EE2F5C4787B5D6ACF16EEF33E72* __this, Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* ___component0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashSet_1_Contains_mFEEBB774E40F237E02F2881245F33540FB4B942D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashSet_1_Remove_m3BFAD86C88FECD83F760583DA945A46D5121A01A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashSet_1_get_Count_m81CE95C9321DD9C7853B30CF6F087F3EAAC9BAC9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IAudioInputSource_t364BD5C2442BDCD435A62F220336E0A8F3AC8B0C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IVoiceEventProvider_t976993FF17250739A08016703CB70BDE6A373D14_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	bool V_1 = false;
	bool V_2 = false;
	bool V_3 = false;
	bool V_4 = false;
	UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* G_B9_0 = NULL;
	UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* G_B8_0 = NULL;
	{
		// if (_waitingRecorders.Contains(component))
		HashSet_1_tF0A60E739EB979571381F8FB075B6B90F6FA6F8D* L_0 = __this->____waitingRecorders_11;
		Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* L_1 = ___component0;
		NullCheck(L_0);
		bool L_2;
		L_2 = HashSet_1_Contains_mFEEBB774E40F237E02F2881245F33540FB4B942D(L_0, L_1, HashSet_1_Contains_mFEEBB774E40F237E02F2881245F33540FB4B942D_RuntimeMethod_var);
		V_1 = L_2;
		bool L_3 = V_1;
		if (!L_3)
		{
			goto IL_0021;
		}
	}
	{
		// _waitingRecorders.Remove(component);
		HashSet_1_tF0A60E739EB979571381F8FB075B6B90F6FA6F8D* L_4 = __this->____waitingRecorders_11;
		Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* L_5 = ___component0;
		NullCheck(L_4);
		bool L_6;
		L_6 = HashSet_1_Remove_m3BFAD86C88FECD83F760583DA945A46D5121A01A(L_4, L_5, HashSet_1_Remove_m3BFAD86C88FECD83F760583DA945A46D5121A01A_RuntimeMethod_var);
		// return;
		goto IL_008e;
	}

IL_0021:
	{
		// if (!_activeRecorders.Contains(component))
		HashSet_1_tF0A60E739EB979571381F8FB075B6B90F6FA6F8D* L_7 = __this->____activeRecorders_12;
		Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* L_8 = ___component0;
		NullCheck(L_7);
		bool L_9;
		L_9 = HashSet_1_Contains_mFEEBB774E40F237E02F2881245F33540FB4B942D(L_7, L_8, HashSet_1_Contains_mFEEBB774E40F237E02F2881245F33540FB4B942D_RuntimeMethod_var);
		V_2 = (bool)((((int32_t)L_9) == ((int32_t)0))? 1 : 0);
		bool L_10 = V_2;
		if (!L_10)
		{
			goto IL_0037;
		}
	}
	{
		// return;
		goto IL_008e;
	}

IL_0037:
	{
		// _activeRecorders.Remove(component);
		HashSet_1_tF0A60E739EB979571381F8FB075B6B90F6FA6F8D* L_11 = __this->____activeRecorders_12;
		Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* L_12 = ___component0;
		NullCheck(L_11);
		bool L_13;
		L_13 = HashSet_1_Remove_m3BFAD86C88FECD83F760583DA945A46D5121A01A(L_11, L_12, HashSet_1_Remove_m3BFAD86C88FECD83F760583DA945A46D5121A01A_RuntimeMethod_var);
		// if (_activeRecorders.Count == 0)
		HashSet_1_tF0A60E739EB979571381F8FB075B6B90F6FA6F8D* L_14 = __this->____activeRecorders_12;
		NullCheck(L_14);
		int32_t L_15;
		L_15 = HashSet_1_get_Count_m81CE95C9321DD9C7853B30CF6F087F3EAAC9BAC9_inline(L_14, HashSet_1_get_Count_m81CE95C9321DD9C7853B30CF6F087F3EAAC9BAC9_RuntimeMethod_var);
		V_3 = (bool)((((int32_t)L_15) == ((int32_t)0))? 1 : 0);
		bool L_16 = V_3;
		if (!L_16)
		{
			goto IL_0064;
		}
	}
	{
		// MicInput.StopRecording();
		RuntimeObject* L_17;
		L_17 = AudioBuffer_get_MicInput_m7A1BBC6336FC35DF13D78B1269359BA8CB9C9B41(__this, NULL);
		NullCheck(L_17);
		InterfaceActionInvoker0::Invoke(9 /* System.Void Meta.WitAi.Interfaces.IAudioInputSource::StopRecording() */, IAudioInputSource_t364BD5C2442BDCD435A62F220336E0A8F3AC8B0C_il2cpp_TypeInfo_var, L_17);
	}

IL_0064:
	{
		// if (component is IVoiceEventProvider v)
		Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* L_18 = ___component0;
		V_0 = ((RuntimeObject*)IsInst((RuntimeObject*)L_18, IVoiceEventProvider_t976993FF17250739A08016703CB70BDE6A373D14_il2cpp_TypeInfo_var));
		RuntimeObject* L_19 = V_0;
		V_4 = (bool)((!(((RuntimeObject*)(RuntimeObject*)L_19) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		bool L_20 = V_4;
		if (!L_20)
		{
			goto IL_008e;
		}
	}
	{
		// v.VoiceEvents.OnStoppedListening?.Invoke();
		RuntimeObject* L_21 = V_0;
		NullCheck(L_21);
		VoiceEvents_t7755B8C2A9074FA12090CF7288E5512DFD225EA9* L_22;
		L_22 = InterfaceFuncInvoker0< VoiceEvents_t7755B8C2A9074FA12090CF7288E5512DFD225EA9* >::Invoke(0 /* Meta.WitAi.Events.VoiceEvents Meta.WitAi.IVoiceEventProvider::get_VoiceEvents() */, IVoiceEventProvider_t976993FF17250739A08016703CB70BDE6A373D14_il2cpp_TypeInfo_var, L_21);
		NullCheck(L_22);
		UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* L_23;
		L_23 = SpeechEvents_get_OnStoppedListening_mB59F3490B5F895B311DA82A0288DC2AEACF87586_inline(L_22, NULL);
		UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* L_24 = L_23;
		G_B8_0 = L_24;
		if (L_24)
		{
			G_B9_0 = L_24;
			goto IL_0087;
		}
	}
	{
		goto IL_008d;
	}

IL_0087:
	{
		NullCheck(G_B9_0);
		UnityEvent_Invoke_mFBF80D59B03C30C5FE6A06F897D954ACADE061D2(G_B9_0, NULL);
	}

IL_008d:
	{
	}

IL_008e:
	{
		// }
		return;
	}
}
// System.Void Meta.WitAi.Data.AudioBuffer::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioBuffer__ctor_mE30BF20BA0A84340D5538E8D8577BDCDBF7973C4 (AudioBuffer_t8F78C90BB0306EE2F5C4787B5D6ACF16EEF33E72* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AudioBufferConfiguration_tB38ABF06828B3927593D6E28F41EC838EFE9B8B3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AudioBufferEvents_t464B32397852A58D1333411135D8AB9CF2F6C233_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashSet_1__ctor_m1A23B597B88AB7A0A6D846A048DAD40DE5229468_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashSet_1_tF0A60E739EB979571381F8FB075B6B90F6FA6F8D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// [SerializeField] private AudioBufferConfiguration audioBufferConfiguration = new AudioBufferConfiguration();
		AudioBufferConfiguration_tB38ABF06828B3927593D6E28F41EC838EFE9B8B3* L_0 = (AudioBufferConfiguration_tB38ABF06828B3927593D6E28F41EC838EFE9B8B3*)il2cpp_codegen_object_new(AudioBufferConfiguration_tB38ABF06828B3927593D6E28F41EC838EFE9B8B3_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		AudioBufferConfiguration__ctor_m847F2E52BEF1A6EAC3C56670F1165889B4FD7C65(L_0, NULL);
		__this->___audioBufferConfiguration_6 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___audioBufferConfiguration_6), (void*)L_0);
		// [SerializeField] private AudioBufferEvents events = new AudioBufferEvents();
		AudioBufferEvents_t464B32397852A58D1333411135D8AB9CF2F6C233* L_1 = (AudioBufferEvents_t464B32397852A58D1333411135D8AB9CF2F6C233*)il2cpp_codegen_object_new(AudioBufferEvents_t464B32397852A58D1333411135D8AB9CF2F6C233_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		AudioBufferEvents__ctor_mA35F09C6E6511A7439571EC9CA30795ACB46E9B5(L_1, NULL);
		__this->___events_7 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___events_7), (void*)L_1);
		// private HashSet<Component> _waitingRecorders = new HashSet<Component>();
		HashSet_1_tF0A60E739EB979571381F8FB075B6B90F6FA6F8D* L_2 = (HashSet_1_tF0A60E739EB979571381F8FB075B6B90F6FA6F8D*)il2cpp_codegen_object_new(HashSet_1_tF0A60E739EB979571381F8FB075B6B90F6FA6F8D_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		HashSet_1__ctor_m1A23B597B88AB7A0A6D846A048DAD40DE5229468(L_2, HashSet_1__ctor_m1A23B597B88AB7A0A6D846A048DAD40DE5229468_RuntimeMethod_var);
		__this->____waitingRecorders_11 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____waitingRecorders_11), (void*)L_2);
		// private HashSet<Component> _activeRecorders = new HashSet<Component>();
		HashSet_1_tF0A60E739EB979571381F8FB075B6B90F6FA6F8D* L_3 = (HashSet_1_tF0A60E739EB979571381F8FB075B6B90F6FA6F8D*)il2cpp_codegen_object_new(HashSet_1_tF0A60E739EB979571381F8FB075B6B90F6FA6F8D_il2cpp_TypeInfo_var);
		NullCheck(L_3);
		HashSet_1__ctor_m1A23B597B88AB7A0A6D846A048DAD40DE5229468(L_3, HashSet_1__ctor_m1A23B597B88AB7A0A6D846A048DAD40DE5229468_RuntimeMethod_var);
		__this->____activeRecorders_12 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____activeRecorders_12), (void*)L_3);
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
		return;
	}
}
// System.Boolean Meta.WitAi.Data.AudioBuffer::<WaitForMicToStart>b__30_0()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AudioBuffer_U3CWaitForMicToStartU3Eb__30_0_mE80F6B351D0AC4C2963C5082D38100D334AACD1E (AudioBuffer_t8F78C90BB0306EE2F5C4787B5D6ACF16EEF33E72* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IAudioInputSource_t364BD5C2442BDCD435A62F220336E0A8F3AC8B0C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t G_B3_0 = 0;
	{
		// yield return new WaitUntil(() => null != MicInput && MicInput.IsInputAvailable);
		RuntimeObject* L_0;
		L_0 = AudioBuffer_get_MicInput_m7A1BBC6336FC35DF13D78B1269359BA8CB9C9B41(__this, NULL);
		if (!L_0)
		{
			goto IL_0015;
		}
	}
	{
		RuntimeObject* L_1;
		L_1 = AudioBuffer_get_MicInput_m7A1BBC6336FC35DF13D78B1269359BA8CB9C9B41(__this, NULL);
		NullCheck(L_1);
		bool L_2;
		L_2 = InterfaceFuncInvoker0< bool >::Invoke(12 /* System.Boolean Meta.WitAi.Interfaces.IAudioInputSource::get_IsInputAvailable() */, IAudioInputSource_t364BD5C2442BDCD435A62F220336E0A8F3AC8B0C_il2cpp_TypeInfo_var, L_1);
		G_B3_0 = ((int32_t)(L_2));
		goto IL_0016;
	}

IL_0015:
	{
		G_B3_0 = 0;
	}

IL_0016:
	{
		return (bool)G_B3_0;
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
// System.Void Meta.WitAi.Data.AudioBuffer/<WaitForMicToStart>d__30::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CWaitForMicToStartU3Ed__30__ctor_mBA988CBCA2A1494C37AB874A7CFDC4C06EF10203 (U3CWaitForMicToStartU3Ed__30_tA981E845AE3F32AC0CB036E88C2CAA3FFBE51577* __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->___U3CU3E1__state_0 = L_0;
		return;
	}
}
// System.Void Meta.WitAi.Data.AudioBuffer/<WaitForMicToStart>d__30::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CWaitForMicToStartU3Ed__30_System_IDisposable_Dispose_m1811C5D7C82413B5282B082B7B947660CFC8733B (U3CWaitForMicToStartU3Ed__30_tA981E845AE3F32AC0CB036E88C2CAA3FFBE51577* __this, const RuntimeMethod* method) 
{
	{
		return;
	}
}
// System.Boolean Meta.WitAi.Data.AudioBuffer/<WaitForMicToStart>d__30::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CWaitForMicToStartU3Ed__30_MoveNext_mDCE0828AE9E49F6DC7CD14BAA5F8EB7D4C3C77BA (U3CWaitForMicToStartU3Ed__30_tA981E845AE3F32AC0CB036E88C2CAA3FFBE51577* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AudioBuffer_U3CWaitForMicToStartU3Eb__30_0_mE80F6B351D0AC4C2963C5082D38100D334AACD1E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Func_1_t2BE7F58348C9CC544A8973B3A9E55541DE43C457_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashSet_1_Add_m9A6A47923E3C1783E456E9EB31B8C06824DF001C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashSet_1_Contains_mFEEBB774E40F237E02F2881245F33540FB4B942D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashSet_1_Remove_m3BFAD86C88FECD83F760583DA945A46D5121A01A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IAudioInputSource_t364BD5C2442BDCD435A62F220336E0A8F3AC8B0C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IVoiceEventProvider_t976993FF17250739A08016703CB70BDE6A373D14_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WaitUntil_tA1CD487C5811E7C1F8C4ADA85DF5F4EFDC1D41BD_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	bool V_1 = false;
	bool V_2 = false;
	bool V_3 = false;
	UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* G_B15_0 = NULL;
	UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* G_B14_0 = NULL;
	{
		int32_t L_0 = __this->___U3CU3E1__state_0;
		V_0 = L_0;
		int32_t L_1 = V_0;
		if (!L_1)
		{
			goto IL_0012;
		}
	}
	{
		goto IL_000c;
	}

IL_000c:
	{
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) == ((int32_t)1)))
		{
			goto IL_0014;
		}
	}
	{
		goto IL_0016;
	}

IL_0012:
	{
		goto IL_0018;
	}

IL_0014:
	{
		goto IL_005c;
	}

IL_0016:
	{
		return (bool)0;
	}

IL_0018:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// _waitingRecorders.Add(component);
		AudioBuffer_t8F78C90BB0306EE2F5C4787B5D6ACF16EEF33E72* L_3 = __this->___U3CU3E4__this_3;
		NullCheck(L_3);
		HashSet_1_tF0A60E739EB979571381F8FB075B6B90F6FA6F8D* L_4 = L_3->____waitingRecorders_11;
		Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* L_5 = __this->___component_2;
		NullCheck(L_4);
		bool L_6;
		L_6 = HashSet_1_Add_m9A6A47923E3C1783E456E9EB31B8C06824DF001C(L_4, L_5, HashSet_1_Add_m9A6A47923E3C1783E456E9EB31B8C06824DF001C_RuntimeMethod_var);
		// yield return new WaitUntil(() => null != MicInput && MicInput.IsInputAvailable);
		AudioBuffer_t8F78C90BB0306EE2F5C4787B5D6ACF16EEF33E72* L_7 = __this->___U3CU3E4__this_3;
		Func_1_t2BE7F58348C9CC544A8973B3A9E55541DE43C457* L_8 = (Func_1_t2BE7F58348C9CC544A8973B3A9E55541DE43C457*)il2cpp_codegen_object_new(Func_1_t2BE7F58348C9CC544A8973B3A9E55541DE43C457_il2cpp_TypeInfo_var);
		NullCheck(L_8);
		Func_1__ctor_mDFFAE9C73346372438B5B04C4558AC42F1A3DA22(L_8, L_7, (intptr_t)((void*)AudioBuffer_U3CWaitForMicToStartU3Eb__30_0_mE80F6B351D0AC4C2963C5082D38100D334AACD1E_RuntimeMethod_var), NULL);
		WaitUntil_tA1CD487C5811E7C1F8C4ADA85DF5F4EFDC1D41BD* L_9 = (WaitUntil_tA1CD487C5811E7C1F8C4ADA85DF5F4EFDC1D41BD*)il2cpp_codegen_object_new(WaitUntil_tA1CD487C5811E7C1F8C4ADA85DF5F4EFDC1D41BD_il2cpp_TypeInfo_var);
		NullCheck(L_9);
		WaitUntil__ctor_m2C925CF39695C35F4CB1AC997531F203AE1434DF(L_9, L_8, NULL);
		__this->___U3CU3E2__current_1 = L_9;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E2__current_1), (void*)L_9);
		__this->___U3CU3E1__state_0 = 1;
		return (bool)1;
	}

IL_005c:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// if (!_waitingRecorders.Contains(component))
		AudioBuffer_t8F78C90BB0306EE2F5C4787B5D6ACF16EEF33E72* L_10 = __this->___U3CU3E4__this_3;
		NullCheck(L_10);
		HashSet_1_tF0A60E739EB979571381F8FB075B6B90F6FA6F8D* L_11 = L_10->____waitingRecorders_11;
		Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* L_12 = __this->___component_2;
		NullCheck(L_11);
		bool L_13;
		L_13 = HashSet_1_Contains_mFEEBB774E40F237E02F2881245F33540FB4B942D(L_11, L_12, HashSet_1_Contains_mFEEBB774E40F237E02F2881245F33540FB4B942D_RuntimeMethod_var);
		V_1 = (bool)((((int32_t)L_13) == ((int32_t)0))? 1 : 0);
		bool L_14 = V_1;
		if (!L_14)
		{
			goto IL_0083;
		}
	}
	{
		// yield break;
		return (bool)0;
	}

IL_0083:
	{
		// _waitingRecorders.Remove(component);
		AudioBuffer_t8F78C90BB0306EE2F5C4787B5D6ACF16EEF33E72* L_15 = __this->___U3CU3E4__this_3;
		NullCheck(L_15);
		HashSet_1_tF0A60E739EB979571381F8FB075B6B90F6FA6F8D* L_16 = L_15->____waitingRecorders_11;
		Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* L_17 = __this->___component_2;
		NullCheck(L_16);
		bool L_18;
		L_18 = HashSet_1_Remove_m3BFAD86C88FECD83F760583DA945A46D5121A01A(L_16, L_17, HashSet_1_Remove_m3BFAD86C88FECD83F760583DA945A46D5121A01A_RuntimeMethod_var);
		// _activeRecorders.Add(component);
		AudioBuffer_t8F78C90BB0306EE2F5C4787B5D6ACF16EEF33E72* L_19 = __this->___U3CU3E4__this_3;
		NullCheck(L_19);
		HashSet_1_tF0A60E739EB979571381F8FB075B6B90F6FA6F8D* L_20 = L_19->____activeRecorders_12;
		Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* L_21 = __this->___component_2;
		NullCheck(L_20);
		bool L_22;
		L_22 = HashSet_1_Add_m9A6A47923E3C1783E456E9EB31B8C06824DF001C(L_20, L_21, HashSet_1_Add_m9A6A47923E3C1783E456E9EB31B8C06824DF001C_RuntimeMethod_var);
		// if (!MicInput.IsRecording)
		AudioBuffer_t8F78C90BB0306EE2F5C4787B5D6ACF16EEF33E72* L_23 = __this->___U3CU3E4__this_3;
		NullCheck(L_23);
		RuntimeObject* L_24;
		L_24 = AudioBuffer_get_MicInput_m7A1BBC6336FC35DF13D78B1269359BA8CB9C9B41(L_23, NULL);
		NullCheck(L_24);
		bool L_25;
		L_25 = InterfaceFuncInvoker0< bool >::Invoke(10 /* System.Boolean Meta.WitAi.Interfaces.IAudioInputSource::get_IsRecording() */, IAudioInputSource_t364BD5C2442BDCD435A62F220336E0A8F3AC8B0C_il2cpp_TypeInfo_var, L_24);
		V_2 = (bool)((((int32_t)L_25) == ((int32_t)0))? 1 : 0);
		bool L_26 = V_2;
		if (!L_26)
		{
			goto IL_00eb;
		}
	}
	{
		// MicInput.StartRecording(audioBufferConfiguration.sampleLengthInMs);
		AudioBuffer_t8F78C90BB0306EE2F5C4787B5D6ACF16EEF33E72* L_27 = __this->___U3CU3E4__this_3;
		NullCheck(L_27);
		RuntimeObject* L_28;
		L_28 = AudioBuffer_get_MicInput_m7A1BBC6336FC35DF13D78B1269359BA8CB9C9B41(L_27, NULL);
		AudioBuffer_t8F78C90BB0306EE2F5C4787B5D6ACF16EEF33E72* L_29 = __this->___U3CU3E4__this_3;
		NullCheck(L_29);
		AudioBufferConfiguration_tB38ABF06828B3927593D6E28F41EC838EFE9B8B3* L_30 = L_29->___audioBufferConfiguration_6;
		NullCheck(L_30);
		int32_t L_31 = L_30->___sampleLengthInMs_0;
		NullCheck(L_28);
		InterfaceActionInvoker1< int32_t >::Invoke(8 /* System.Void Meta.WitAi.Interfaces.IAudioInputSource::StartRecording(System.Int32) */, IAudioInputSource_t364BD5C2442BDCD435A62F220336E0A8F3AC8B0C_il2cpp_TypeInfo_var, L_28, L_31);
	}

IL_00eb:
	{
		// if (component is IVoiceEventProvider v)
		Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* L_32 = __this->___component_2;
		__this->___U3CvU3E5__1_4 = ((RuntimeObject*)IsInst((RuntimeObject*)L_32, IVoiceEventProvider_t976993FF17250739A08016703CB70BDE6A373D14_il2cpp_TypeInfo_var));
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CvU3E5__1_4), (void*)((RuntimeObject*)IsInst((RuntimeObject*)L_32, IVoiceEventProvider_t976993FF17250739A08016703CB70BDE6A373D14_il2cpp_TypeInfo_var)));
		RuntimeObject* L_33 = __this->___U3CvU3E5__1_4;
		V_3 = (bool)((!(((RuntimeObject*)(RuntimeObject*)L_33) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		bool L_34 = V_3;
		if (!L_34)
		{
			goto IL_0127;
		}
	}
	{
		// v.VoiceEvents.OnStartListening?.Invoke();
		RuntimeObject* L_35 = __this->___U3CvU3E5__1_4;
		NullCheck(L_35);
		VoiceEvents_t7755B8C2A9074FA12090CF7288E5512DFD225EA9* L_36;
		L_36 = InterfaceFuncInvoker0< VoiceEvents_t7755B8C2A9074FA12090CF7288E5512DFD225EA9* >::Invoke(0 /* Meta.WitAi.Events.VoiceEvents Meta.WitAi.IVoiceEventProvider::get_VoiceEvents() */, IVoiceEventProvider_t976993FF17250739A08016703CB70BDE6A373D14_il2cpp_TypeInfo_var, L_35);
		NullCheck(L_36);
		UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* L_37;
		L_37 = SpeechEvents_get_OnStartListening_m1AE66AF56C8A79496E386C26CCB815E99EBB4DA7_inline(L_36, NULL);
		UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* L_38 = L_37;
		G_B14_0 = L_38;
		if (L_38)
		{
			G_B15_0 = L_38;
			goto IL_0120;
		}
	}
	{
		goto IL_0126;
	}

IL_0120:
	{
		NullCheck(G_B15_0);
		UnityEvent_Invoke_mFBF80D59B03C30C5FE6A06F897D954ACADE061D2(G_B15_0, NULL);
	}

IL_0126:
	{
	}

IL_0127:
	{
		// }
		return (bool)0;
	}
}
// System.Object Meta.WitAi.Data.AudioBuffer/<WaitForMicToStart>d__30::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CWaitForMicToStartU3Ed__30_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_mBF62475A1A04950655ACF5F36B4A2AB4F7D4E2A0 (U3CWaitForMicToStartU3Ed__30_tA981E845AE3F32AC0CB036E88C2CAA3FFBE51577* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
		return L_0;
	}
}
// System.Void Meta.WitAi.Data.AudioBuffer/<WaitForMicToStart>d__30::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CWaitForMicToStartU3Ed__30_System_Collections_IEnumerator_Reset_m0356685CFC0D94946B9602E85E47903E660B9ED6 (U3CWaitForMicToStartU3Ed__30_tA981E845AE3F32AC0CB036E88C2CAA3FFBE51577* __this, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NullCheck(L_0);
		NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CWaitForMicToStartU3Ed__30_System_Collections_IEnumerator_Reset_m0356685CFC0D94946B9602E85E47903E660B9ED6_RuntimeMethod_var)));
	}
}
// System.Object Meta.WitAi.Data.AudioBuffer/<WaitForMicToStart>d__30::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CWaitForMicToStartU3Ed__30_System_Collections_IEnumerator_get_Current_m5681FFF8207A30E58091F096B49E29D689332181 (U3CWaitForMicToStartU3Ed__30_tA981E845AE3F32AC0CB036E88C2CAA3FFBE51577* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
		return L_0;
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
// System.Void Meta.WitAi.Data.AudioBufferConfiguration::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioBufferConfiguration__ctor_m847F2E52BEF1A6EAC3C56670F1165889B4FD7C65 (AudioBufferConfiguration_tB38ABF06828B3927593D6E28F41EC838EFE9B8B3* __this, const RuntimeMethod* method) 
{
	{
		// public int sampleLengthInMs = 10;
		__this->___sampleLengthInMs_0 = ((int32_t)10);
		// public float micBufferLengthInSeconds = 1;
		__this->___micBufferLengthInSeconds_1 = (1.0f);
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
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
// System.Void Meta.WitAi.Data.VoiceSession::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VoiceSession__ctor_m84E12C01B690474505835B756F0857F85FB1F755 (VoiceSession_t375D68D23448E9C51C8E4CE1972477813E92E68B* __this, const RuntimeMethod* method) 
{
	{
		// public bool validResponse = false;
		__this->___validResponse_2 = (bool)0;
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
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
// System.Object Meta.WitAi.Data.WitFloatValue::GetValue(Meta.WitAi.Json.WitResponseNode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* WitFloatValue_GetValue_m73191652EBF685015E3153BDAF9F33EFE0E5F2AF (WitFloatValue_t0CD86D3313AB3919655A9F71C881B82124190FD7* __this, WitResponseNode_t1BFF810F15B21416F5F6D0A1CAAF03CEF942038C* ___response0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	{
		// return GetFloatValue(response);
		WitResponseNode_t1BFF810F15B21416F5F6D0A1CAAF03CEF942038C* L_0 = ___response0;
		float L_1;
		L_1 = WitFloatValue_GetFloatValue_m66BEA19497AD3ACAECA22A94B73FAB4A70CC7D41(__this, L_0, NULL);
		float L_2 = L_1;
		RuntimeObject* L_3 = Box(Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_il2cpp_TypeInfo_var, &L_2);
		V_0 = L_3;
		goto IL_0010;
	}

IL_0010:
	{
		// }
		RuntimeObject* L_4 = V_0;
		return L_4;
	}
}
// System.Boolean Meta.WitAi.Data.WitFloatValue::Equals(Meta.WitAi.Json.WitResponseNode,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WitFloatValue_Equals_m73FA435882BCCCFCA599561AF63A459C3BC8032B (WitFloatValue_t0CD86D3313AB3919655A9F71C881B82124190FD7* __this, WitResponseNode_t1BFF810F15B21416F5F6D0A1CAAF03CEF942038C* ___response0, RuntimeObject* ___value1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	bool V_2 = false;
	bool V_3 = false;
	bool V_4 = false;
	int32_t G_B3_0 = 0;
	String_t* G_B9_0 = NULL;
	String_t* G_B11_0 = NULL;
	String_t* G_B10_0 = NULL;
	int32_t G_B13_0 = 0;
	{
		// float fValue = 0;
		V_0 = (0.0f);
		// if (value is float f)
		RuntimeObject* L_0 = ___value1;
		if (!((RuntimeObject*)IsInstSealed((RuntimeObject*)L_0, Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_il2cpp_TypeInfo_var)))
		{
			goto IL_0019;
		}
	}
	{
		RuntimeObject* L_1 = ___value1;
		V_1 = ((*(float*)((float*)(float*)UnBox(L_1, Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_il2cpp_TypeInfo_var))));
		G_B3_0 = 1;
		goto IL_001a;
	}

IL_0019:
	{
		G_B3_0 = 0;
	}

IL_001a:
	{
		V_2 = (bool)G_B3_0;
		bool L_2 = V_2;
		if (!L_2)
		{
			goto IL_0024;
		}
	}
	{
		// fValue = f;
		float L_3 = V_1;
		V_0 = L_3;
		goto IL_0053;
	}

IL_0024:
	{
		// else if(null != value && !float.TryParse("" + value, out fValue))
		RuntimeObject* L_4 = ___value1;
		if (!L_4)
		{
			goto IL_0048;
		}
	}
	{
		RuntimeObject* L_5 = ___value1;
		if (L_5)
		{
			goto IL_002d;
		}
	}
	{
		G_B9_0 = ((String_t*)(NULL));
		goto IL_0033;
	}

IL_002d:
	{
		RuntimeObject* L_6 = ___value1;
		NullCheck(L_6);
		String_t* L_7;
		L_7 = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_6);
		G_B9_0 = L_7;
	}

IL_0033:
	{
		String_t* L_8 = G_B9_0;
		G_B10_0 = L_8;
		if (L_8)
		{
			G_B11_0 = L_8;
			goto IL_003c;
		}
	}
	{
		G_B11_0 = _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
	}

IL_003c:
	{
		bool L_9;
		L_9 = Single_TryParse_mC39FC2D8F1F33DE64685F3A8CE6BDD2164FB9423(G_B11_0, (&V_0), NULL);
		G_B13_0 = ((((int32_t)L_9) == ((int32_t)0))? 1 : 0);
		goto IL_0049;
	}

IL_0048:
	{
		G_B13_0 = 0;
	}

IL_0049:
	{
		V_3 = (bool)G_B13_0;
		bool L_10 = V_3;
		if (!L_10)
		{
			goto IL_0053;
		}
	}
	{
		// return false;
		V_4 = (bool)0;
		goto IL_006d;
	}

IL_0053:
	{
		// return Math.Abs(GetFloatValue(response) - fValue) < equalityTolerance;
		WitResponseNode_t1BFF810F15B21416F5F6D0A1CAAF03CEF942038C* L_11 = ___response0;
		float L_12;
		L_12 = WitFloatValue_GetFloatValue_m66BEA19497AD3ACAECA22A94B73FAB4A70CC7D41(__this, L_11, NULL);
		float L_13 = V_0;
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		float L_14;
		L_14 = fabsf(((float)il2cpp_codegen_subtract(L_12, L_13)));
		float L_15 = __this->___equalityTolerance_6;
		V_4 = (bool)((((float)L_14) < ((float)L_15))? 1 : 0);
		goto IL_006d;
	}

IL_006d:
	{
		// }
		bool L_16 = V_4;
		return L_16;
	}
}
// System.Single Meta.WitAi.Data.WitFloatValue::GetFloatValue(Meta.WitAi.Json.WitResponseNode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float WitFloatValue_GetFloatValue_m66BEA19497AD3ACAECA22A94B73FAB4A70CC7D41 (WitFloatValue_t0CD86D3313AB3919655A9F71C881B82124190FD7* __this, WitResponseNode_t1BFF810F15B21416F5F6D0A1CAAF03CEF942038C* ___response0, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	{
		// return Reference.GetFloatValue(response);
		WitResponseReference_t7B74D84BF98481046E19F0CE0EB5A3F4203D2581* L_0;
		L_0 = WitValue_get_Reference_m235DE334635AE00B4D91508074C9FEEE6983A521(__this, NULL);
		WitResponseNode_t1BFF810F15B21416F5F6D0A1CAAF03CEF942038C* L_1 = ___response0;
		NullCheck(L_0);
		float L_2;
		L_2 = VirtualFuncInvoker1< float, WitResponseNode_t1BFF810F15B21416F5F6D0A1CAAF03CEF942038C* >::Invoke(6 /* System.Single Meta.WitAi.WitResponseReference::GetFloatValue(Meta.WitAi.Json.WitResponseNode) */, L_0, L_1);
		V_0 = L_2;
		goto IL_0010;
	}

IL_0010:
	{
		// }
		float L_3 = V_0;
		return L_3;
	}
}
// System.Void Meta.WitAi.Data.WitFloatValue::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WitFloatValue__ctor_m0087E80BAEE4561576A71649DBBD8A721057862D (WitFloatValue_t0CD86D3313AB3919655A9F71C881B82124190FD7* __this, const RuntimeMethod* method) 
{
	{
		// [SerializeField] public float equalityTolerance = .0001f;
		__this->___equalityTolerance_6 = (9.99999975E-05f);
		WitValue__ctor_mA065592F73C7ED140323B8C1357D3F78AEE9D8AF(__this, NULL);
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
// System.Object Meta.WitAi.Data.WitIntValue::GetValue(Meta.WitAi.Json.WitResponseNode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* WitIntValue_GetValue_mE20AC1877F35AAA2B19D0AA4E6C3C2E22DC19BCB (WitIntValue_t67EABB88E65123FE396BDDB9C49054D20A693E48* __this, WitResponseNode_t1BFF810F15B21416F5F6D0A1CAAF03CEF942038C* ___response0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	{
		// return GetIntValue(response);
		WitResponseNode_t1BFF810F15B21416F5F6D0A1CAAF03CEF942038C* L_0 = ___response0;
		int32_t L_1;
		L_1 = WitIntValue_GetIntValue_mD7EA4195FE040649D4463500EE40ECB042F5D592(__this, L_0, NULL);
		int32_t L_2 = L_1;
		RuntimeObject* L_3 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_2);
		V_0 = L_3;
		goto IL_0010;
	}

IL_0010:
	{
		// }
		RuntimeObject* L_4 = V_0;
		return L_4;
	}
}
// System.Boolean Meta.WitAi.Data.WitIntValue::Equals(Meta.WitAi.Json.WitResponseNode,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WitIntValue_Equals_mB749C38F7F9C683786CE9B9BB8A377CB8DE907E6 (WitIntValue_t67EABB88E65123FE396BDDB9C49054D20A693E48* __this, WitResponseNode_t1BFF810F15B21416F5F6D0A1CAAF03CEF942038C* ___response0, RuntimeObject* ___value1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	bool V_2 = false;
	bool V_3 = false;
	bool V_4 = false;
	int32_t G_B3_0 = 0;
	String_t* G_B9_0 = NULL;
	String_t* G_B11_0 = NULL;
	String_t* G_B10_0 = NULL;
	int32_t G_B13_0 = 0;
	{
		// int iValue = 0;
		V_0 = 0;
		// if (value is int i)
		RuntimeObject* L_0 = ___value1;
		if (!((RuntimeObject*)IsInstSealed((RuntimeObject*)L_0, Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var)))
		{
			goto IL_0015;
		}
	}
	{
		RuntimeObject* L_1 = ___value1;
		V_1 = ((*(int32_t*)((int32_t*)(int32_t*)UnBox(L_1, Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var))));
		G_B3_0 = 1;
		goto IL_0016;
	}

IL_0015:
	{
		G_B3_0 = 0;
	}

IL_0016:
	{
		V_2 = (bool)G_B3_0;
		bool L_2 = V_2;
		if (!L_2)
		{
			goto IL_0020;
		}
	}
	{
		// iValue = i;
		int32_t L_3 = V_1;
		V_0 = L_3;
		goto IL_004f;
	}

IL_0020:
	{
		// else if (null != value && !int.TryParse("" + value, out iValue))
		RuntimeObject* L_4 = ___value1;
		if (!L_4)
		{
			goto IL_0044;
		}
	}
	{
		RuntimeObject* L_5 = ___value1;
		if (L_5)
		{
			goto IL_0029;
		}
	}
	{
		G_B9_0 = ((String_t*)(NULL));
		goto IL_002f;
	}

IL_0029:
	{
		RuntimeObject* L_6 = ___value1;
		NullCheck(L_6);
		String_t* L_7;
		L_7 = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_6);
		G_B9_0 = L_7;
	}

IL_002f:
	{
		String_t* L_8 = G_B9_0;
		G_B10_0 = L_8;
		if (L_8)
		{
			G_B11_0 = L_8;
			goto IL_0038;
		}
	}
	{
		G_B11_0 = _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
	}

IL_0038:
	{
		bool L_9;
		L_9 = Int32_TryParse_mC928DE2FEC1C35ED5298BDDCA9868076E94B8A21(G_B11_0, (&V_0), NULL);
		G_B13_0 = ((((int32_t)L_9) == ((int32_t)0))? 1 : 0);
		goto IL_0045;
	}

IL_0044:
	{
		G_B13_0 = 0;
	}

IL_0045:
	{
		V_3 = (bool)G_B13_0;
		bool L_10 = V_3;
		if (!L_10)
		{
			goto IL_004f;
		}
	}
	{
		// return false;
		V_4 = (bool)0;
		goto IL_005d;
	}

IL_004f:
	{
		// return GetIntValue(response) == iValue;
		WitResponseNode_t1BFF810F15B21416F5F6D0A1CAAF03CEF942038C* L_11 = ___response0;
		int32_t L_12;
		L_12 = WitIntValue_GetIntValue_mD7EA4195FE040649D4463500EE40ECB042F5D592(__this, L_11, NULL);
		int32_t L_13 = V_0;
		V_4 = (bool)((((int32_t)L_12) == ((int32_t)L_13))? 1 : 0);
		goto IL_005d;
	}

IL_005d:
	{
		// }
		bool L_14 = V_4;
		return L_14;
	}
}
// System.Int32 Meta.WitAi.Data.WitIntValue::GetIntValue(Meta.WitAi.Json.WitResponseNode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t WitIntValue_GetIntValue_mD7EA4195FE040649D4463500EE40ECB042F5D592 (WitIntValue_t67EABB88E65123FE396BDDB9C49054D20A693E48* __this, WitResponseNode_t1BFF810F15B21416F5F6D0A1CAAF03CEF942038C* ___response0, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		// return Reference.GetIntValue(response);
		WitResponseReference_t7B74D84BF98481046E19F0CE0EB5A3F4203D2581* L_0;
		L_0 = WitValue_get_Reference_m235DE334635AE00B4D91508074C9FEEE6983A521(__this, NULL);
		WitResponseNode_t1BFF810F15B21416F5F6D0A1CAAF03CEF942038C* L_1 = ___response0;
		NullCheck(L_0);
		int32_t L_2;
		L_2 = VirtualFuncInvoker1< int32_t, WitResponseNode_t1BFF810F15B21416F5F6D0A1CAAF03CEF942038C* >::Invoke(5 /* System.Int32 Meta.WitAi.WitResponseReference::GetIntValue(Meta.WitAi.Json.WitResponseNode) */, L_0, L_1);
		V_0 = L_2;
		goto IL_0010;
	}

IL_0010:
	{
		// }
		int32_t L_3 = V_0;
		return L_3;
	}
}
// System.Void Meta.WitAi.Data.WitIntValue::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WitIntValue__ctor_m38C00E5E723BCCBFF98B77AE0E70187B10E71C42 (WitIntValue_t67EABB88E65123FE396BDDB9C49054D20A693E48* __this, const RuntimeMethod* method) 
{
	{
		WitValue__ctor_mA065592F73C7ED140323B8C1357D3F78AEE9D8AF(__this, NULL);
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
// System.Object Meta.WitAi.Data.WitStringValue::GetValue(Meta.WitAi.Json.WitResponseNode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* WitStringValue_GetValue_mBAAA5656D5FDCAFC99B4B93450ED365D01CAAE1B (WitStringValue_tC57E63A29F85DBA9BF5A71184C079C4FA0069805* __this, WitResponseNode_t1BFF810F15B21416F5F6D0A1CAAF03CEF942038C* ___response0, const RuntimeMethod* method) 
{
	RuntimeObject* V_0 = NULL;
	{
		// return GetStringValue(response);
		WitResponseNode_t1BFF810F15B21416F5F6D0A1CAAF03CEF942038C* L_0 = ___response0;
		String_t* L_1;
		L_1 = WitStringValue_GetStringValue_m7EA4E0209B10B9A7CA49727FCB6C1615CC43C346(__this, L_0, NULL);
		V_0 = L_1;
		goto IL_000b;
	}

IL_000b:
	{
		// }
		RuntimeObject* L_2 = V_0;
		return L_2;
	}
}
// System.Boolean Meta.WitAi.Data.WitStringValue::Equals(Meta.WitAi.Json.WitResponseNode,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WitStringValue_Equals_m36FCADFC319649A5271DDC9896E298FF1AAE230A (WitStringValue_tC57E63A29F85DBA9BF5A71184C079C4FA0069805* __this, WitResponseNode_t1BFF810F15B21416F5F6D0A1CAAF03CEF942038C* ___response0, RuntimeObject* ___value1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	bool V_1 = false;
	bool V_2 = false;
	String_t* G_B5_0 = NULL;
	String_t* G_B7_0 = NULL;
	String_t* G_B6_0 = NULL;
	{
		// if (value is string sValue)
		RuntimeObject* L_0 = ___value1;
		V_0 = ((String_t*)IsInstSealed((RuntimeObject*)L_0, String_t_il2cpp_TypeInfo_var));
		String_t* L_1 = V_0;
		V_1 = (bool)((!(((RuntimeObject*)(String_t*)L_1) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		bool L_2 = V_1;
		if (!L_2)
		{
			goto IL_0021;
		}
	}
	{
		// return GetStringValue(response) == sValue;
		WitResponseNode_t1BFF810F15B21416F5F6D0A1CAAF03CEF942038C* L_3 = ___response0;
		String_t* L_4;
		L_4 = WitStringValue_GetStringValue_m7EA4E0209B10B9A7CA49727FCB6C1615CC43C346(__this, L_3, NULL);
		String_t* L_5 = V_0;
		bool L_6;
		L_6 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_4, L_5, NULL);
		V_2 = L_6;
		goto IL_0045;
	}

IL_0021:
	{
		// return "" + value == GetStringValue(response);
		RuntimeObject* L_7 = ___value1;
		if (L_7)
		{
			goto IL_0027;
		}
	}
	{
		G_B5_0 = ((String_t*)(NULL));
		goto IL_002d;
	}

IL_0027:
	{
		RuntimeObject* L_8 = ___value1;
		NullCheck(L_8);
		String_t* L_9;
		L_9 = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_8);
		G_B5_0 = L_9;
	}

IL_002d:
	{
		String_t* L_10 = G_B5_0;
		G_B6_0 = L_10;
		if (L_10)
		{
			G_B7_0 = L_10;
			goto IL_0036;
		}
	}
	{
		G_B7_0 = _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
	}

IL_0036:
	{
		WitResponseNode_t1BFF810F15B21416F5F6D0A1CAAF03CEF942038C* L_11 = ___response0;
		String_t* L_12;
		L_12 = WitStringValue_GetStringValue_m7EA4E0209B10B9A7CA49727FCB6C1615CC43C346(__this, L_11, NULL);
		bool L_13;
		L_13 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(G_B7_0, L_12, NULL);
		V_2 = L_13;
		goto IL_0045;
	}

IL_0045:
	{
		// }
		bool L_14 = V_2;
		return L_14;
	}
}
// System.String Meta.WitAi.Data.WitStringValue::GetStringValue(Meta.WitAi.Json.WitResponseNode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* WitStringValue_GetStringValue_m7EA4E0209B10B9A7CA49727FCB6C1615CC43C346 (WitStringValue_tC57E63A29F85DBA9BF5A71184C079C4FA0069805* __this, WitResponseNode_t1BFF810F15B21416F5F6D0A1CAAF03CEF942038C* ___response0, const RuntimeMethod* method) 
{
	String_t* V_0 = NULL;
	{
		// return Reference.GetStringValue(response);
		WitResponseReference_t7B74D84BF98481046E19F0CE0EB5A3F4203D2581* L_0;
		L_0 = WitValue_get_Reference_m235DE334635AE00B4D91508074C9FEEE6983A521(__this, NULL);
		WitResponseNode_t1BFF810F15B21416F5F6D0A1CAAF03CEF942038C* L_1 = ___response0;
		NullCheck(L_0);
		String_t* L_2;
		L_2 = VirtualFuncInvoker1< String_t*, WitResponseNode_t1BFF810F15B21416F5F6D0A1CAAF03CEF942038C* >::Invoke(4 /* System.String Meta.WitAi.WitResponseReference::GetStringValue(Meta.WitAi.Json.WitResponseNode) */, L_0, L_1);
		V_0 = L_2;
		goto IL_0010;
	}

IL_0010:
	{
		// }
		String_t* L_3 = V_0;
		return L_3;
	}
}
// System.Void Meta.WitAi.Data.WitStringValue::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WitStringValue__ctor_m330B81FC5269BD22D38AD8B8859651A7973A46AC (WitStringValue_tC57E63A29F85DBA9BF5A71184C079C4FA0069805* __this, const RuntimeMethod* method) 
{
	{
		WitValue__ctor_mA065592F73C7ED140323B8C1357D3F78AEE9D8AF(__this, NULL);
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
// Meta.WitAi.WitResponseReference Meta.WitAi.Data.WitValue::get_Reference()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR WitResponseReference_t7B74D84BF98481046E19F0CE0EB5A3F4203D2581* WitValue_get_Reference_m235DE334635AE00B4D91508074C9FEEE6983A521 (WitValue_t62896259CA1F095F305381482D891DC0E1ED1092* __this, const RuntimeMethod* method) 
{
	bool V_0 = false;
	WitResponseReference_t7B74D84BF98481046E19F0CE0EB5A3F4203D2581* V_1 = NULL;
	{
		// if (null == reference)
		WitResponseReference_t7B74D84BF98481046E19F0CE0EB5A3F4203D2581* L_0 = __this->___reference_5;
		V_0 = (bool)((((RuntimeObject*)(WitResponseReference_t7B74D84BF98481046E19F0CE0EB5A3F4203D2581*)L_0) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0021;
		}
	}
	{
		// reference = WitResultUtilities.GetWitResponseReference(path);
		String_t* L_2 = __this->___path_4;
		WitResponseReference_t7B74D84BF98481046E19F0CE0EB5A3F4203D2581* L_3;
		L_3 = WitResultUtilities_GetWitResponseReference_m1C6C4F70C12A0D48CA263069DC326994DCB5FA60(L_2, NULL);
		__this->___reference_5 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___reference_5), (void*)L_3);
	}

IL_0021:
	{
		// return reference;
		WitResponseReference_t7B74D84BF98481046E19F0CE0EB5A3F4203D2581* L_4 = __this->___reference_5;
		V_1 = L_4;
		goto IL_002a;
	}

IL_002a:
	{
		// }
		WitResponseReference_t7B74D84BF98481046E19F0CE0EB5A3F4203D2581* L_5 = V_1;
		return L_5;
	}
}
// System.String Meta.WitAi.Data.WitValue::ToString(Meta.WitAi.Json.WitResponseNode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* WitValue_ToString_mE3D4BFC7B64196907B23F57D1E88ADDE365BF933 (WitValue_t62896259CA1F095F305381482D891DC0E1ED1092* __this, WitResponseNode_t1BFF810F15B21416F5F6D0A1CAAF03CEF942038C* ___response0, const RuntimeMethod* method) 
{
	String_t* V_0 = NULL;
	{
		// return Reference.GetStringValue(response);
		WitResponseReference_t7B74D84BF98481046E19F0CE0EB5A3F4203D2581* L_0;
		L_0 = WitValue_get_Reference_m235DE334635AE00B4D91508074C9FEEE6983A521(__this, NULL);
		WitResponseNode_t1BFF810F15B21416F5F6D0A1CAAF03CEF942038C* L_1 = ___response0;
		NullCheck(L_0);
		String_t* L_2;
		L_2 = VirtualFuncInvoker1< String_t*, WitResponseNode_t1BFF810F15B21416F5F6D0A1CAAF03CEF942038C* >::Invoke(4 /* System.String Meta.WitAi.WitResponseReference::GetStringValue(Meta.WitAi.Json.WitResponseNode) */, L_0, L_1);
		V_0 = L_2;
		goto IL_0010;
	}

IL_0010:
	{
		// }
		String_t* L_3 = V_0;
		return L_3;
	}
}
// System.Void Meta.WitAi.Data.WitValue::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WitValue__ctor_mA065592F73C7ED140323B8C1357D3F78AEE9D8AF (WitValue_t62896259CA1F095F305381482D891DC0E1ED1092* __this, const RuntimeMethod* method) 
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
// System.Void Meta.WitAi.Data.Intents.WitIntentData::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WitIntentData__ctor_mF0243D5D49565F21DF1D083D4FECFFA5E51F6E61 (WitIntentData_tAEC870A54A863E27A1FDC98AE01CA9C99F22F515* __this, const RuntimeMethod* method) 
{
	{
		// public WitIntentData() {}
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		// public WitIntentData() {}
		return;
	}
}
// System.Void Meta.WitAi.Data.Intents.WitIntentData::.ctor(Meta.WitAi.Json.WitResponseNode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WitIntentData__ctor_m674B42115D8DDEDCCFEB02CC8A39D2331DB3DE03 (WitIntentData_tAEC870A54A863E27A1FDC98AE01CA9C99F22F515* __this, WitResponseNode_t1BFF810F15B21416F5F6D0A1CAAF03CEF942038C* ___node0, const RuntimeMethod* method) 
{
	{
		// public WitIntentData(WitResponseNode node)
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		// FromIntentWitResponseNode(node);
		WitResponseNode_t1BFF810F15B21416F5F6D0A1CAAF03CEF942038C* L_0 = ___node0;
		WitIntentData_tAEC870A54A863E27A1FDC98AE01CA9C99F22F515* L_1;
		L_1 = WitIntentData_FromIntentWitResponseNode_mB687AA0C44E85F971879661C1E1450DA70CB122D(__this, L_0, NULL);
		// }
		return;
	}
}
// Meta.WitAi.Data.Intents.WitIntentData Meta.WitAi.Data.Intents.WitIntentData::FromIntentWitResponseNode(Meta.WitAi.Json.WitResponseNode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR WitIntentData_tAEC870A54A863E27A1FDC98AE01CA9C99F22F515* WitIntentData_FromIntentWitResponseNode_mB687AA0C44E85F971879661C1E1450DA70CB122D (WitIntentData_tAEC870A54A863E27A1FDC98AE01CA9C99F22F515* __this, WitResponseNode_t1BFF810F15B21416F5F6D0A1CAAF03CEF942038C* ___node0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JsonConvert_DeserializeIntoObject_TisWitIntentData_tAEC870A54A863E27A1FDC98AE01CA9C99F22F515_m4C56C556AD81F753D0C6A2BCA51E058C7B0EA9A4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JsonConvert_t69A348E775F1FA63C310F5FE324F3EE231AD8072_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	WitIntentData_tAEC870A54A863E27A1FDC98AE01CA9C99F22F515* V_0 = NULL;
	WitIntentData_tAEC870A54A863E27A1FDC98AE01CA9C99F22F515* V_1 = NULL;
	{
		// WitIntentData result = this;
		V_0 = __this;
		// JsonConvert.DeserializeIntoObject(ref result, node);
		WitResponseNode_t1BFF810F15B21416F5F6D0A1CAAF03CEF942038C* L_0 = ___node0;
		il2cpp_codegen_runtime_class_init_inline(JsonConvert_t69A348E775F1FA63C310F5FE324F3EE231AD8072_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = JsonConvert_DeserializeIntoObject_TisWitIntentData_tAEC870A54A863E27A1FDC98AE01CA9C99F22F515_m4C56C556AD81F753D0C6A2BCA51E058C7B0EA9A4((&V_0), L_0, (JsonConverterU5BU5D_tF117D3A16A2A7AAC2A66A7EDCD32E3F48B704DDA*)NULL, (bool)0, JsonConvert_DeserializeIntoObject_TisWitIntentData_tAEC870A54A863E27A1FDC98AE01CA9C99F22F515_m4C56C556AD81F753D0C6A2BCA51E058C7B0EA9A4_RuntimeMethod_var);
		// return result;
		WitIntentData_tAEC870A54A863E27A1FDC98AE01CA9C99F22F515* L_2 = V_0;
		V_1 = L_2;
		goto IL_0012;
	}

IL_0012:
	{
		// }
		WitIntentData_tAEC870A54A863E27A1FDC98AE01CA9C99F22F515* L_3 = V_1;
		return L_3;
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
// Meta.WitAi.Data.Entities.WitDynamicEntities Meta.WitAi.Data.Entities.DynamicEntityDataProvider::GetDynamicEntities()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR WitDynamicEntities_t122029C03796D5F75B696CA70D8083DA16E33E38* DynamicEntityDataProvider_GetDynamicEntities_mE5EE05A3882CF96D385EDC89E6584D4535ECC599 (DynamicEntityDataProvider_t08403B46CC5ED6B8FE0A88755E81A267057EDE3F* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WitDynamicEntities_t122029C03796D5F75B696CA70D8083DA16E33E38_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	WitDynamicEntities_t122029C03796D5F75B696CA70D8083DA16E33E38* V_0 = NULL;
	WitDynamicEntitiesDataU5BU5D_t04480B2CB2C361B83EA9E1237F827D9287EBDD36* V_1 = NULL;
	int32_t V_2 = 0;
	WitDynamicEntitiesData_t372BA7AB1BA929F633A88ADF252C252444A79146* V_3 = NULL;
	WitDynamicEntities_t122029C03796D5F75B696CA70D8083DA16E33E38* V_4 = NULL;
	{
		// WitDynamicEntities entities = new WitDynamicEntities();
		WitDynamicEntities_t122029C03796D5F75B696CA70D8083DA16E33E38* L_0 = (WitDynamicEntities_t122029C03796D5F75B696CA70D8083DA16E33E38*)il2cpp_codegen_object_new(WitDynamicEntities_t122029C03796D5F75B696CA70D8083DA16E33E38_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		WitDynamicEntities__ctor_m5178CF6C94DACA3F959FBFE0CE323D6270EB72D1(L_0, NULL);
		V_0 = L_0;
		// foreach (var entity in entitiesDefinition)
		WitDynamicEntitiesDataU5BU5D_t04480B2CB2C361B83EA9E1237F827D9287EBDD36* L_1 = __this->___entitiesDefinition_4;
		V_1 = L_1;
		V_2 = 0;
		goto IL_0025;
	}

IL_0013:
	{
		// foreach (var entity in entitiesDefinition)
		WitDynamicEntitiesDataU5BU5D_t04480B2CB2C361B83EA9E1237F827D9287EBDD36* L_2 = V_1;
		int32_t L_3 = V_2;
		NullCheck(L_2);
		int32_t L_4 = L_3;
		WitDynamicEntitiesData_t372BA7AB1BA929F633A88ADF252C252444A79146* L_5 = (L_2)->GetAt(static_cast<il2cpp_array_size_t>(L_4));
		V_3 = L_5;
		// entities.Merge(entity);
		WitDynamicEntities_t122029C03796D5F75B696CA70D8083DA16E33E38* L_6 = V_0;
		WitDynamicEntitiesData_t372BA7AB1BA929F633A88ADF252C252444A79146* L_7 = V_3;
		NullCheck(L_6);
		WitDynamicEntities_Merge_m19DC180CB06F978BC5C8F876DD6737560EC76142(L_6, L_7, NULL);
		int32_t L_8 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_8, 1));
	}

IL_0025:
	{
		// foreach (var entity in entitiesDefinition)
		int32_t L_9 = V_2;
		WitDynamicEntitiesDataU5BU5D_t04480B2CB2C361B83EA9E1237F827D9287EBDD36* L_10 = V_1;
		NullCheck(L_10);
		if ((((int32_t)L_9) < ((int32_t)((int32_t)(((RuntimeArray*)L_10)->max_length)))))
		{
			goto IL_0013;
		}
	}
	{
		// return entities;
		WitDynamicEntities_t122029C03796D5F75B696CA70D8083DA16E33E38* L_11 = V_0;
		V_4 = L_11;
		goto IL_0030;
	}

IL_0030:
	{
		// }
		WitDynamicEntities_t122029C03796D5F75B696CA70D8083DA16E33E38* L_12 = V_4;
		return L_12;
	}
}
// System.Void Meta.WitAi.Data.Entities.DynamicEntityDataProvider::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DynamicEntityDataProvider__ctor_mD48AC3F8B4A10A9C3D67B1D0BDE4B534DC786CCA (DynamicEntityDataProvider_t08403B46CC5ED6B8FE0A88755E81A267057EDE3F* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
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
// Meta.WitAi.Data.Entities.WitDynamicEntities Meta.WitAi.Data.Entities.DynamicEntityProvider::GetDynamicEntities()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR WitDynamicEntities_t122029C03796D5F75B696CA70D8083DA16E33E38* DynamicEntityProvider_GetDynamicEntities_m83D2AF52EA89E6406CAC85DCB0356C0AD1E95BCF (DynamicEntityProvider_t3AFDF18CD9BD247F0B9B129A02A611841AA373C3* __this, const RuntimeMethod* method) 
{
	WitDynamicEntities_t122029C03796D5F75B696CA70D8083DA16E33E38* V_0 = NULL;
	{
		// return entities;
		WitDynamicEntities_t122029C03796D5F75B696CA70D8083DA16E33E38* L_0 = __this->___entities_4;
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		// }
		WitDynamicEntities_t122029C03796D5F75B696CA70D8083DA16E33E38* L_1 = V_0;
		return L_1;
	}
}
// System.Void Meta.WitAi.Data.Entities.DynamicEntityProvider::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DynamicEntityProvider__ctor_m5BBF87D176E912C879194207F8F68B8BE96972D4 (DynamicEntityProvider_t3AFDF18CD9BD247F0B9B129A02A611841AA373C3* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
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
// System.Boolean Meta.WitAi.Data.Entities.DynamicEntityKeywordRegistry::get_HasDynamicEntityRegistry()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool DynamicEntityKeywordRegistry_get_HasDynamicEntityRegistry_m1A365175C065362266F130FBDD0D5604E8F27FF8 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public static bool HasDynamicEntityRegistry => Instance;
		DynamicEntityKeywordRegistry_t610EF6621FA40BD297502CD7A30337A625A57C28* L_0;
		L_0 = DynamicEntityKeywordRegistry_get_Instance_mA3475882A1DE756C9CA825DCC64961BC2AF3DB04(NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Implicit_m93896EF7D68FA113C42D3FE2BC6F661FC7EF514A(L_0, NULL);
		return L_1;
	}
}
// Meta.WitAi.Data.Entities.DynamicEntityKeywordRegistry Meta.WitAi.Data.Entities.DynamicEntityKeywordRegistry::get_Instance()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR DynamicEntityKeywordRegistry_t610EF6621FA40BD297502CD7A30337A625A57C28* DynamicEntityKeywordRegistry_get_Instance_mA3475882A1DE756C9CA825DCC64961BC2AF3DB04 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DynamicEntityKeywordRegistry_t610EF6621FA40BD297502CD7A30337A625A57C28_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_FindObjectOfType_TisDynamicEntityKeywordRegistry_t610EF6621FA40BD297502CD7A30337A625A57C28_m3128A4382E976E3E8D969837346E72E182C5738A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	DynamicEntityKeywordRegistry_t610EF6621FA40BD297502CD7A30337A625A57C28* V_1 = NULL;
	{
		// if (!instance)
		DynamicEntityKeywordRegistry_t610EF6621FA40BD297502CD7A30337A625A57C28* L_0 = ((DynamicEntityKeywordRegistry_t610EF6621FA40BD297502CD7A30337A625A57C28_StaticFields*)il2cpp_codegen_static_fields_for(DynamicEntityKeywordRegistry_t610EF6621FA40BD297502CD7A30337A625A57C28_il2cpp_TypeInfo_var))->___instance_4;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Implicit_m93896EF7D68FA113C42D3FE2BC6F661FC7EF514A(L_0, NULL);
		V_0 = (bool)((((int32_t)L_1) == ((int32_t)0))? 1 : 0);
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_001e;
		}
	}
	{
		// instance = FindObjectOfType<DynamicEntityKeywordRegistry>();
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		DynamicEntityKeywordRegistry_t610EF6621FA40BD297502CD7A30337A625A57C28* L_3;
		L_3 = Object_FindObjectOfType_TisDynamicEntityKeywordRegistry_t610EF6621FA40BD297502CD7A30337A625A57C28_m3128A4382E976E3E8D969837346E72E182C5738A(Object_FindObjectOfType_TisDynamicEntityKeywordRegistry_t610EF6621FA40BD297502CD7A30337A625A57C28_m3128A4382E976E3E8D969837346E72E182C5738A_RuntimeMethod_var);
		((DynamicEntityKeywordRegistry_t610EF6621FA40BD297502CD7A30337A625A57C28_StaticFields*)il2cpp_codegen_static_fields_for(DynamicEntityKeywordRegistry_t610EF6621FA40BD297502CD7A30337A625A57C28_il2cpp_TypeInfo_var))->___instance_4 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&((DynamicEntityKeywordRegistry_t610EF6621FA40BD297502CD7A30337A625A57C28_StaticFields*)il2cpp_codegen_static_fields_for(DynamicEntityKeywordRegistry_t610EF6621FA40BD297502CD7A30337A625A57C28_il2cpp_TypeInfo_var))->___instance_4), (void*)L_3);
	}

IL_001e:
	{
		// return instance;
		DynamicEntityKeywordRegistry_t610EF6621FA40BD297502CD7A30337A625A57C28* L_4 = ((DynamicEntityKeywordRegistry_t610EF6621FA40BD297502CD7A30337A625A57C28_StaticFields*)il2cpp_codegen_static_fields_for(DynamicEntityKeywordRegistry_t610EF6621FA40BD297502CD7A30337A625A57C28_il2cpp_TypeInfo_var))->___instance_4;
		V_1 = L_4;
		goto IL_0026;
	}

IL_0026:
	{
		// }
		DynamicEntityKeywordRegistry_t610EF6621FA40BD297502CD7A30337A625A57C28* L_5 = V_1;
		return L_5;
	}
}
// System.Void Meta.WitAi.Data.Entities.DynamicEntityKeywordRegistry::OnEnable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DynamicEntityKeywordRegistry_OnEnable_mED63D83A1C156D31A48562B63D3F6D444EB10173 (DynamicEntityKeywordRegistry_t610EF6621FA40BD297502CD7A30337A625A57C28* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DynamicEntityKeywordRegistry_t610EF6621FA40BD297502CD7A30337A625A57C28_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// instance = this;
		((DynamicEntityKeywordRegistry_t610EF6621FA40BD297502CD7A30337A625A57C28_StaticFields*)il2cpp_codegen_static_fields_for(DynamicEntityKeywordRegistry_t610EF6621FA40BD297502CD7A30337A625A57C28_il2cpp_TypeInfo_var))->___instance_4 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&((DynamicEntityKeywordRegistry_t610EF6621FA40BD297502CD7A30337A625A57C28_StaticFields*)il2cpp_codegen_static_fields_for(DynamicEntityKeywordRegistry_t610EF6621FA40BD297502CD7A30337A625A57C28_il2cpp_TypeInfo_var))->___instance_4), (void*)__this);
		// }
		return;
	}
}
// System.Void Meta.WitAi.Data.Entities.DynamicEntityKeywordRegistry::OnDisable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DynamicEntityKeywordRegistry_OnDisable_mEAD665F70BC7BCA7E611CDEE5B84E8E7E23CA02F (DynamicEntityKeywordRegistry_t610EF6621FA40BD297502CD7A30337A625A57C28* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DynamicEntityKeywordRegistry_t610EF6621FA40BD297502CD7A30337A625A57C28_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// instance = null;
		((DynamicEntityKeywordRegistry_t610EF6621FA40BD297502CD7A30337A625A57C28_StaticFields*)il2cpp_codegen_static_fields_for(DynamicEntityKeywordRegistry_t610EF6621FA40BD297502CD7A30337A625A57C28_il2cpp_TypeInfo_var))->___instance_4 = (DynamicEntityKeywordRegistry_t610EF6621FA40BD297502CD7A30337A625A57C28*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&((DynamicEntityKeywordRegistry_t610EF6621FA40BD297502CD7A30337A625A57C28_StaticFields*)il2cpp_codegen_static_fields_for(DynamicEntityKeywordRegistry_t610EF6621FA40BD297502CD7A30337A625A57C28_il2cpp_TypeInfo_var))->___instance_4), (void*)(DynamicEntityKeywordRegistry_t610EF6621FA40BD297502CD7A30337A625A57C28*)NULL);
		// }
		return;
	}
}
// System.Void Meta.WitAi.Data.Entities.DynamicEntityKeywordRegistry::RegisterDynamicEntity(System.String,Meta.WitAi.Data.Info.WitEntityKeywordInfo)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DynamicEntityKeywordRegistry_RegisterDynamicEntity_m63DBCF5420BF9B10FD9B0DC0981E8F69F6E5534F (DynamicEntityKeywordRegistry_t610EF6621FA40BD297502CD7A30337A625A57C28* __this, String_t* ___entity0, WitEntityKeywordInfo_tE0A290B8BFF00EF007649834C336D5DD48DA445B ___keyword1, const RuntimeMethod* method) 
{
	{
		// entities.AddKeyword(entity, keyword);
		WitDynamicEntities_t122029C03796D5F75B696CA70D8083DA16E33E38* L_0 = __this->___entities_5;
		String_t* L_1 = ___entity0;
		WitEntityKeywordInfo_tE0A290B8BFF00EF007649834C336D5DD48DA445B L_2 = ___keyword1;
		NullCheck(L_0);
		WitDynamicEntities_AddKeyword_mCDF7E57A3B696A71CBE004DDB5E4784607A30601(L_0, L_1, L_2, NULL);
		// }
		return;
	}
}
// System.Void Meta.WitAi.Data.Entities.DynamicEntityKeywordRegistry::UnregisterDynamicEntity(System.String,Meta.WitAi.Data.Info.WitEntityKeywordInfo)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DynamicEntityKeywordRegistry_UnregisterDynamicEntity_mE35F6AB0A5E6BEBCBEDC3CF2E0265DB3701A0255 (DynamicEntityKeywordRegistry_t610EF6621FA40BD297502CD7A30337A625A57C28* __this, String_t* ___entity0, WitEntityKeywordInfo_tE0A290B8BFF00EF007649834C336D5DD48DA445B ___keyword1, const RuntimeMethod* method) 
{
	{
		// entities.RemoveKeyword(entity, keyword);
		WitDynamicEntities_t122029C03796D5F75B696CA70D8083DA16E33E38* L_0 = __this->___entities_5;
		String_t* L_1 = ___entity0;
		WitEntityKeywordInfo_tE0A290B8BFF00EF007649834C336D5DD48DA445B L_2 = ___keyword1;
		NullCheck(L_0);
		WitDynamicEntities_RemoveKeyword_m3AFEBE51C4699E7CEEBD4CCCF4C7FDC3754AEC15(L_0, L_1, L_2, NULL);
		// }
		return;
	}
}
// Meta.WitAi.Data.Entities.WitDynamicEntities Meta.WitAi.Data.Entities.DynamicEntityKeywordRegistry::GetDynamicEntities()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR WitDynamicEntities_t122029C03796D5F75B696CA70D8083DA16E33E38* DynamicEntityKeywordRegistry_GetDynamicEntities_m2CFE783C9BFF6E281BF46ACFCE7DBB2315855901 (DynamicEntityKeywordRegistry_t610EF6621FA40BD297502CD7A30337A625A57C28* __this, const RuntimeMethod* method) 
{
	WitDynamicEntities_t122029C03796D5F75B696CA70D8083DA16E33E38* V_0 = NULL;
	{
		// return entities;
		WitDynamicEntities_t122029C03796D5F75B696CA70D8083DA16E33E38* L_0 = __this->___entities_5;
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		// }
		WitDynamicEntities_t122029C03796D5F75B696CA70D8083DA16E33E38* L_1 = V_0;
		return L_1;
	}
}
// System.Void Meta.WitAi.Data.Entities.DynamicEntityKeywordRegistry::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DynamicEntityKeywordRegistry__ctor_mCBEA6DE1668C0A14BB899C1DB49C086ED5FD52E5 (DynamicEntityKeywordRegistry_t610EF6621FA40BD297502CD7A30337A625A57C28* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WitDynamicEntities_t122029C03796D5F75B696CA70D8083DA16E33E38_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private WitDynamicEntities entities = new WitDynamicEntities();
		WitDynamicEntities_t122029C03796D5F75B696CA70D8083DA16E33E38* L_0 = (WitDynamicEntities_t122029C03796D5F75B696CA70D8083DA16E33E38*)il2cpp_codegen_object_new(WitDynamicEntities_t122029C03796D5F75B696CA70D8083DA16E33E38_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		WitDynamicEntities__ctor_m5178CF6C94DACA3F959FBFE0CE323D6270EB72D1(L_0, NULL);
		__this->___entities_5 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___entities_5), (void*)L_0);
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
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
// System.Void Meta.WitAi.Data.Entities.RegisteredDynamicEntityKeyword::OnEnable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RegisteredDynamicEntityKeyword_OnEnable_m76DA0BF4478EE9035AB467CCEE63A7D31B0716D4 (RegisteredDynamicEntityKeyword_tA7EFBD0615574563A15D0EC6E518A937BE2CCEE4* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7DCA7A6024F48FADFB3A49018CB138C4995119A4);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE65ED37F28B0054DF33BDE6B0D1B05F0B7952AD0);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	bool V_2 = false;
	{
		// if (string.IsNullOrEmpty(keyword.keyword)) return;
		WitEntityKeywordInfo_tE0A290B8BFF00EF007649834C336D5DD48DA445B* L_0 = (&__this->___keyword_5);
		String_t* L_1 = L_0->___keyword_0;
		bool L_2;
		L_2 = String_IsNullOrEmpty_mEA9E3FB005AC28FE02E69FCF95A7B8456192B478(L_1, NULL);
		V_0 = L_2;
		bool L_3 = V_0;
		if (!L_3)
		{
			goto IL_0017;
		}
	}
	{
		// if (string.IsNullOrEmpty(keyword.keyword)) return;
		goto IL_0069;
	}

IL_0017:
	{
		// if (string.IsNullOrEmpty(entity)) return;
		String_t* L_4 = __this->___entity_4;
		bool L_5;
		L_5 = String_IsNullOrEmpty_mEA9E3FB005AC28FE02E69FCF95A7B8456192B478(L_4, NULL);
		V_1 = L_5;
		bool L_6 = V_1;
		if (!L_6)
		{
			goto IL_0028;
		}
	}
	{
		// if (string.IsNullOrEmpty(entity)) return;
		goto IL_0069;
	}

IL_0028:
	{
		// if (DynamicEntityKeywordRegistry.HasDynamicEntityRegistry)
		bool L_7;
		L_7 = DynamicEntityKeywordRegistry_get_HasDynamicEntityRegistry_m1A365175C065362266F130FBDD0D5604E8F27FF8(NULL);
		V_2 = L_7;
		bool L_8 = V_2;
		if (!L_8)
		{
			goto IL_004c;
		}
	}
	{
		// DynamicEntityKeywordRegistry.Instance.RegisterDynamicEntity(entity, keyword);
		DynamicEntityKeywordRegistry_t610EF6621FA40BD297502CD7A30337A625A57C28* L_9;
		L_9 = DynamicEntityKeywordRegistry_get_Instance_mA3475882A1DE756C9CA825DCC64961BC2AF3DB04(NULL);
		String_t* L_10 = __this->___entity_4;
		WitEntityKeywordInfo_tE0A290B8BFF00EF007649834C336D5DD48DA445B L_11 = __this->___keyword_5;
		NullCheck(L_9);
		DynamicEntityKeywordRegistry_RegisterDynamicEntity_m63DBCF5420BF9B10FD9B0DC0981E8F69F6E5534F(L_9, L_10, L_11, NULL);
		goto IL_0069;
	}

IL_004c:
	{
		// VLog.W($"Cannot register {name}: No dynamic entity registry present in the scene." +
		//                  $"Please add one and try again.");
		String_t* L_12;
		L_12 = Object_get_name_mAC2F6B897CF1303BA4249B4CB55271AFACBB6392(__this, NULL);
		String_t* L_13;
		L_13 = String_Concat_m8855A6DE10F84DA7F4EC113CADDB59873A25573B(_stringLiteralE65ED37F28B0054DF33BDE6B0D1B05F0B7952AD0, L_12, _stringLiteral7DCA7A6024F48FADFB3A49018CB138C4995119A4, NULL);
		VLog_W_m7943297ED32FD0E92544C324E6793089056A2344(L_13, NULL);
	}

IL_0069:
	{
		// }
		return;
	}
}
// System.Void Meta.WitAi.Data.Entities.RegisteredDynamicEntityKeyword::OnDisable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RegisteredDynamicEntityKeyword_OnDisable_m5D93BDDE4713A818A581DD133DA1352FCF52A639 (RegisteredDynamicEntityKeyword_tA7EFBD0615574563A15D0EC6E518A937BE2CCEE4* __this, const RuntimeMethod* method) 
{
	bool V_0 = false;
	bool V_1 = false;
	bool V_2 = false;
	{
		// if (string.IsNullOrEmpty(keyword.keyword)) return;
		WitEntityKeywordInfo_tE0A290B8BFF00EF007649834C336D5DD48DA445B* L_0 = (&__this->___keyword_5);
		String_t* L_1 = L_0->___keyword_0;
		bool L_2;
		L_2 = String_IsNullOrEmpty_mEA9E3FB005AC28FE02E69FCF95A7B8456192B478(L_1, NULL);
		V_0 = L_2;
		bool L_3 = V_0;
		if (!L_3)
		{
			goto IL_0017;
		}
	}
	{
		// if (string.IsNullOrEmpty(keyword.keyword)) return;
		goto IL_004a;
	}

IL_0017:
	{
		// if (string.IsNullOrEmpty(entity)) return;
		String_t* L_4 = __this->___entity_4;
		bool L_5;
		L_5 = String_IsNullOrEmpty_mEA9E3FB005AC28FE02E69FCF95A7B8456192B478(L_4, NULL);
		V_1 = L_5;
		bool L_6 = V_1;
		if (!L_6)
		{
			goto IL_0028;
		}
	}
	{
		// if (string.IsNullOrEmpty(entity)) return;
		goto IL_004a;
	}

IL_0028:
	{
		// if (DynamicEntityKeywordRegistry.HasDynamicEntityRegistry)
		bool L_7;
		L_7 = DynamicEntityKeywordRegistry_get_HasDynamicEntityRegistry_m1A365175C065362266F130FBDD0D5604E8F27FF8(NULL);
		V_2 = L_7;
		bool L_8 = V_2;
		if (!L_8)
		{
			goto IL_004a;
		}
	}
	{
		// DynamicEntityKeywordRegistry.Instance.UnregisterDynamicEntity(entity, keyword);
		DynamicEntityKeywordRegistry_t610EF6621FA40BD297502CD7A30337A625A57C28* L_9;
		L_9 = DynamicEntityKeywordRegistry_get_Instance_mA3475882A1DE756C9CA825DCC64961BC2AF3DB04(NULL);
		String_t* L_10 = __this->___entity_4;
		WitEntityKeywordInfo_tE0A290B8BFF00EF007649834C336D5DD48DA445B L_11 = __this->___keyword_5;
		NullCheck(L_9);
		DynamicEntityKeywordRegistry_UnregisterDynamicEntity_mE35F6AB0A5E6BEBCBEDC3CF2E0265DB3701A0255(L_9, L_10, L_11, NULL);
	}

IL_004a:
	{
		// }
		return;
	}
}
// System.Void Meta.WitAi.Data.Entities.RegisteredDynamicEntityKeyword::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RegisteredDynamicEntityKeyword__ctor_m6062F128C531D2C2D12D3357ECD4EF1A1AC29999 (RegisteredDynamicEntityKeyword_tA7EFBD0615574563A15D0EC6E518A937BE2CCEE4* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
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
// System.Void Meta.WitAi.Data.Entities.WitDynamicEntities::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WitDynamicEntities__ctor_m5178CF6C94DACA3F959FBFE0CE323D6270EB72D1 (WitDynamicEntities_t122029C03796D5F75B696CA70D8083DA16E33E38* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_mD90BDB6F3C75CE8C6843D60D583652B02327444F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t6D090AF9EB273D470FE30798680167DEBB0CC11B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public List<WitDynamicEntity> entities = new List<WitDynamicEntity>();
		List_1_t6D090AF9EB273D470FE30798680167DEBB0CC11B* L_0 = (List_1_t6D090AF9EB273D470FE30798680167DEBB0CC11B*)il2cpp_codegen_object_new(List_1_t6D090AF9EB273D470FE30798680167DEBB0CC11B_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		List_1__ctor_mD90BDB6F3C75CE8C6843D60D583652B02327444F(L_0, List_1__ctor_mD90BDB6F3C75CE8C6843D60D583652B02327444F_RuntimeMethod_var);
		__this->___entities_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___entities_0), (void*)L_0);
		// public WitDynamicEntities()
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		// }
		return;
	}
}
// System.Void Meta.WitAi.Data.Entities.WitDynamicEntities::.ctor(System.Collections.Generic.IEnumerable`1<Meta.WitAi.Data.Entities.WitDynamicEntity>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WitDynamicEntities__ctor_mDB510CF26362A6E6C68D96960499BC3CD3AF5153 (WitDynamicEntities_t122029C03796D5F75B696CA70D8083DA16E33E38* __this, RuntimeObject* ___entity0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_AddRange_m8BB499395EEDB4C9EAA873C7A66A7ACDAFD89907_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_mD90BDB6F3C75CE8C6843D60D583652B02327444F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t6D090AF9EB273D470FE30798680167DEBB0CC11B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public List<WitDynamicEntity> entities = new List<WitDynamicEntity>();
		List_1_t6D090AF9EB273D470FE30798680167DEBB0CC11B* L_0 = (List_1_t6D090AF9EB273D470FE30798680167DEBB0CC11B*)il2cpp_codegen_object_new(List_1_t6D090AF9EB273D470FE30798680167DEBB0CC11B_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		List_1__ctor_mD90BDB6F3C75CE8C6843D60D583652B02327444F(L_0, List_1__ctor_mD90BDB6F3C75CE8C6843D60D583652B02327444F_RuntimeMethod_var);
		__this->___entities_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___entities_0), (void*)L_0);
		// public WitDynamicEntities(IEnumerable<WitDynamicEntity> entity)
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		// entities.AddRange(entity);
		List_1_t6D090AF9EB273D470FE30798680167DEBB0CC11B* L_1 = __this->___entities_0;
		RuntimeObject* L_2 = ___entity0;
		NullCheck(L_1);
		List_1_AddRange_m8BB499395EEDB4C9EAA873C7A66A7ACDAFD89907(L_1, L_2, List_1_AddRange_m8BB499395EEDB4C9EAA873C7A66A7ACDAFD89907_RuntimeMethod_var);
		// }
		return;
	}
}
// System.Void Meta.WitAi.Data.Entities.WitDynamicEntities::.ctor(Meta.WitAi.Data.Entities.WitDynamicEntity[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WitDynamicEntities__ctor_m7EFFDBF350D1BB930547DD8073093A2DF42D6AC7 (WitDynamicEntities_t122029C03796D5F75B696CA70D8083DA16E33E38* __this, WitDynamicEntityU5BU5D_tAF932D5132E6589F964FB76D2FB82BFA9E0EDB7F* ___entity0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_AddRange_m8BB499395EEDB4C9EAA873C7A66A7ACDAFD89907_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_mD90BDB6F3C75CE8C6843D60D583652B02327444F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t6D090AF9EB273D470FE30798680167DEBB0CC11B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public List<WitDynamicEntity> entities = new List<WitDynamicEntity>();
		List_1_t6D090AF9EB273D470FE30798680167DEBB0CC11B* L_0 = (List_1_t6D090AF9EB273D470FE30798680167DEBB0CC11B*)il2cpp_codegen_object_new(List_1_t6D090AF9EB273D470FE30798680167DEBB0CC11B_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		List_1__ctor_mD90BDB6F3C75CE8C6843D60D583652B02327444F(L_0, List_1__ctor_mD90BDB6F3C75CE8C6843D60D583652B02327444F_RuntimeMethod_var);
		__this->___entities_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___entities_0), (void*)L_0);
		// public WitDynamicEntities(params WitDynamicEntity[] entity)
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		// entities.AddRange(entity);
		List_1_t6D090AF9EB273D470FE30798680167DEBB0CC11B* L_1 = __this->___entities_0;
		WitDynamicEntityU5BU5D_tAF932D5132E6589F964FB76D2FB82BFA9E0EDB7F* L_2 = ___entity0;
		NullCheck(L_1);
		List_1_AddRange_m8BB499395EEDB4C9EAA873C7A66A7ACDAFD89907(L_1, (RuntimeObject*)L_2, List_1_AddRange_m8BB499395EEDB4C9EAA873C7A66A7ACDAFD89907_RuntimeMethod_var);
		// }
		return;
	}
}
// Meta.WitAi.Json.WitResponseClass Meta.WitAi.Data.Entities.WitDynamicEntities::get_AsJson()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR WitResponseClass_tB8A73CCFF2E00D717CD5D9F22465D8DEEE5DAE25* WitDynamicEntities_get_AsJson_mBA5640F8C7834C711FCDA6AF2675DC56EE31B48B (WitDynamicEntities_t122029C03796D5F75B696CA70D8083DA16E33E38* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_m83E7690AA88F67A27853DE26374E3155A14CA8B3_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_m4E5E1EF4BBDC6F5431792D53FCEDA69CD61D826A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_mB7624805B9FFE43D954DF948EE3B30592622B6B1_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_GetEnumerator_m40B8555CCE497F3BEA05299B1246A4AAA82BF2C2_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WitResponseClass_tB8A73CCFF2E00D717CD5D9F22465D8DEEE5DAE25_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	WitResponseClass_tB8A73CCFF2E00D717CD5D9F22465D8DEEE5DAE25* V_0 = NULL;
	Enumerator_t6BA07F015EFBC8AC247FAA712168596523D25994 V_1;
	memset((&V_1), 0, sizeof(V_1));
	WitDynamicEntity_tE0824DEF90E6E8AA7D10CC0A6892B4C1018DE2B4* V_2 = NULL;
	WitResponseClass_tB8A73CCFF2E00D717CD5D9F22465D8DEEE5DAE25* V_3 = NULL;
	{
		// WitResponseClass json = new WitResponseClass();
		WitResponseClass_tB8A73CCFF2E00D717CD5D9F22465D8DEEE5DAE25* L_0 = (WitResponseClass_tB8A73CCFF2E00D717CD5D9F22465D8DEEE5DAE25*)il2cpp_codegen_object_new(WitResponseClass_tB8A73CCFF2E00D717CD5D9F22465D8DEEE5DAE25_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		WitResponseClass__ctor_mAD6E312EBFEC01A4819A7AF57D2E0D98163AAD47(L_0, NULL);
		V_0 = L_0;
		// foreach (var entity in entities)
		List_1_t6D090AF9EB273D470FE30798680167DEBB0CC11B* L_1 = __this->___entities_0;
		NullCheck(L_1);
		Enumerator_t6BA07F015EFBC8AC247FAA712168596523D25994 L_2;
		L_2 = List_1_GetEnumerator_m40B8555CCE497F3BEA05299B1246A4AAA82BF2C2(L_1, List_1_GetEnumerator_m40B8555CCE497F3BEA05299B1246A4AAA82BF2C2_RuntimeMethod_var);
		V_1 = L_2;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_003e:
			{// begin finally (depth: 1)
				Enumerator_Dispose_m83E7690AA88F67A27853DE26374E3155A14CA8B3((&V_1), Enumerator_Dispose_m83E7690AA88F67A27853DE26374E3155A14CA8B3_RuntimeMethod_var);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_0033_1;
			}

IL_0016_1:
			{
				// foreach (var entity in entities)
				WitDynamicEntity_tE0824DEF90E6E8AA7D10CC0A6892B4C1018DE2B4* L_3;
				L_3 = Enumerator_get_Current_mB7624805B9FFE43D954DF948EE3B30592622B6B1_inline((&V_1), Enumerator_get_Current_mB7624805B9FFE43D954DF948EE3B30592622B6B1_RuntimeMethod_var);
				V_2 = L_3;
				// json.Add(entity.entity, entity.AsJson);
				WitResponseClass_tB8A73CCFF2E00D717CD5D9F22465D8DEEE5DAE25* L_4 = V_0;
				WitDynamicEntity_tE0824DEF90E6E8AA7D10CC0A6892B4C1018DE2B4* L_5 = V_2;
				NullCheck(L_5);
				String_t* L_6 = L_5->___entity_0;
				WitDynamicEntity_tE0824DEF90E6E8AA7D10CC0A6892B4C1018DE2B4* L_7 = V_2;
				NullCheck(L_7);
				WitResponseArray_tAC1DCF75C6C2FAB0A70A7DB879A0F35999BAB30A* L_8;
				L_8 = WitDynamicEntity_get_AsJson_mA7E4CB0E4036B333116C1897C8565D1FCFB2262C(L_7, NULL);
				NullCheck(L_4);
				VirtualActionInvoker2< String_t*, WitResponseNode_t1BFF810F15B21416F5F6D0A1CAAF03CEF942038C* >::Invoke(4 /* System.Void Meta.WitAi.Json.WitResponseNode::Add(System.String,Meta.WitAi.Json.WitResponseNode) */, L_4, L_6, L_8);
			}

IL_0033_1:
			{
				// foreach (var entity in entities)
				bool L_9;
				L_9 = Enumerator_MoveNext_m4E5E1EF4BBDC6F5431792D53FCEDA69CD61D826A((&V_1), Enumerator_MoveNext_m4E5E1EF4BBDC6F5431792D53FCEDA69CD61D826A_RuntimeMethod_var);
				if (L_9)
				{
					goto IL_0016_1;
				}
			}
			{
				goto IL_004d;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_004d:
	{
		// return json;
		WitResponseClass_tB8A73CCFF2E00D717CD5D9F22465D8DEEE5DAE25* L_10 = V_0;
		V_3 = L_10;
		goto IL_0051;
	}

IL_0051:
	{
		// }
		WitResponseClass_tB8A73CCFF2E00D717CD5D9F22465D8DEEE5DAE25* L_11 = V_3;
		return L_11;
	}
}
// System.String Meta.WitAi.Data.Entities.WitDynamicEntities::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* WitDynamicEntities_ToString_m2C5050CFB0D365838A0E17C8C913F9FF76E61DCB (WitDynamicEntities_t122029C03796D5F75B696CA70D8083DA16E33E38* __this, const RuntimeMethod* method) 
{
	String_t* V_0 = NULL;
	{
		// return AsJson.ToString();
		WitResponseClass_tB8A73CCFF2E00D717CD5D9F22465D8DEEE5DAE25* L_0;
		L_0 = WitDynamicEntities_get_AsJson_mBA5640F8C7834C711FCDA6AF2675DC56EE31B48B(__this, NULL);
		NullCheck(L_0);
		String_t* L_1;
		L_1 = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_0);
		V_0 = L_1;
		goto IL_000f;
	}

IL_000f:
	{
		// }
		String_t* L_2 = V_0;
		return L_2;
	}
}
// System.Collections.Generic.IEnumerator`1<Meta.WitAi.Data.Entities.WitDynamicEntity> Meta.WitAi.Data.Entities.WitDynamicEntities::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* WitDynamicEntities_GetEnumerator_m2798D5D10E2C24F46BED3D60814622BE9BBB2338 (WitDynamicEntities_t122029C03796D5F75B696CA70D8083DA16E33E38* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_t6BA07F015EFBC8AC247FAA712168596523D25994_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_GetEnumerator_m40B8555CCE497F3BEA05299B1246A4AAA82BF2C2_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public IEnumerator<WitDynamicEntity> GetEnumerator() => entities.GetEnumerator();
		List_1_t6D090AF9EB273D470FE30798680167DEBB0CC11B* L_0 = __this->___entities_0;
		NullCheck(L_0);
		Enumerator_t6BA07F015EFBC8AC247FAA712168596523D25994 L_1;
		L_1 = List_1_GetEnumerator_m40B8555CCE497F3BEA05299B1246A4AAA82BF2C2(L_0, List_1_GetEnumerator_m40B8555CCE497F3BEA05299B1246A4AAA82BF2C2_RuntimeMethod_var);
		Enumerator_t6BA07F015EFBC8AC247FAA712168596523D25994 L_2 = L_1;
		RuntimeObject* L_3 = Box(Enumerator_t6BA07F015EFBC8AC247FAA712168596523D25994_il2cpp_TypeInfo_var, &L_2);
		return (RuntimeObject*)L_3;
	}
}
// System.Collections.IEnumerator Meta.WitAi.Data.Entities.WitDynamicEntities::System.Collections.IEnumerable.GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* WitDynamicEntities_System_Collections_IEnumerable_GetEnumerator_m422A7EE85A3B3CE496403875B7DBBE8F5ADE2BD2 (WitDynamicEntities_t122029C03796D5F75B696CA70D8083DA16E33E38* __this, const RuntimeMethod* method) 
{
	RuntimeObject* V_0 = NULL;
	{
		// return GetEnumerator();
		RuntimeObject* L_0;
		L_0 = WitDynamicEntities_GetEnumerator_m2798D5D10E2C24F46BED3D60814622BE9BBB2338(__this, NULL);
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		// }
		RuntimeObject* L_1 = V_0;
		return L_1;
	}
}
// Meta.WitAi.Data.Entities.WitDynamicEntities Meta.WitAi.Data.Entities.WitDynamicEntities::GetDynamicEntities()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR WitDynamicEntities_t122029C03796D5F75B696CA70D8083DA16E33E38* WitDynamicEntities_GetDynamicEntities_mD56F7BA966CB00B78B97008A71ED57EA93CDEA8D (WitDynamicEntities_t122029C03796D5F75B696CA70D8083DA16E33E38* __this, const RuntimeMethod* method) 
{
	WitDynamicEntities_t122029C03796D5F75B696CA70D8083DA16E33E38* V_0 = NULL;
	{
		// return this;
		V_0 = __this;
		goto IL_0005;
	}

IL_0005:
	{
		// }
		WitDynamicEntities_t122029C03796D5F75B696CA70D8083DA16E33E38* L_0 = V_0;
		return L_0;
	}
}
// System.Void Meta.WitAi.Data.Entities.WitDynamicEntities::Merge(Meta.WitAi.Interfaces.IDynamicEntitiesProvider)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WitDynamicEntities_Merge_m19DC180CB06F978BC5C8F876DD6737560EC76142 (WitDynamicEntities_t122029C03796D5F75B696CA70D8083DA16E33E38* __this, RuntimeObject* ___provider0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDynamicEntitiesProvider_tBA0D49C35A9CCDC33A56C48C1DF22EAC2732BAAC_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_AddRange_m8BB499395EEDB4C9EAA873C7A66A7ACDAFD89907_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		// if (null == provider) return;
		RuntimeObject* L_0 = ___provider0;
		V_0 = (bool)((((RuntimeObject*)(RuntimeObject*)L_0) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_000b;
		}
	}
	{
		// if (null == provider) return;
		goto IL_001d;
	}

IL_000b:
	{
		// entities.AddRange(provider.GetDynamicEntities());
		List_1_t6D090AF9EB273D470FE30798680167DEBB0CC11B* L_2 = __this->___entities_0;
		RuntimeObject* L_3 = ___provider0;
		NullCheck(L_3);
		WitDynamicEntities_t122029C03796D5F75B696CA70D8083DA16E33E38* L_4;
		L_4 = InterfaceFuncInvoker0< WitDynamicEntities_t122029C03796D5F75B696CA70D8083DA16E33E38* >::Invoke(0 /* Meta.WitAi.Data.Entities.WitDynamicEntities Meta.WitAi.Interfaces.IDynamicEntitiesProvider::GetDynamicEntities() */, IDynamicEntitiesProvider_tBA0D49C35A9CCDC33A56C48C1DF22EAC2732BAAC_il2cpp_TypeInfo_var, L_3);
		NullCheck(L_2);
		List_1_AddRange_m8BB499395EEDB4C9EAA873C7A66A7ACDAFD89907(L_2, L_4, List_1_AddRange_m8BB499395EEDB4C9EAA873C7A66A7ACDAFD89907_RuntimeMethod_var);
	}

IL_001d:
	{
		// }
		return;
	}
}
// System.Void Meta.WitAi.Data.Entities.WitDynamicEntities::Merge(System.Collections.Generic.IEnumerable`1<Meta.WitAi.Data.Entities.WitDynamicEntity>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WitDynamicEntities_Merge_mBE6394E6A847703A623D9218D753815105F77C7A (WitDynamicEntities_t122029C03796D5F75B696CA70D8083DA16E33E38* __this, RuntimeObject* ___mergeEntities0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_AddRange_m8BB499395EEDB4C9EAA873C7A66A7ACDAFD89907_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		// if (null == mergeEntities) return;
		RuntimeObject* L_0 = ___mergeEntities0;
		V_0 = (bool)((((RuntimeObject*)(RuntimeObject*)L_0) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_000b;
		}
	}
	{
		// if (null == mergeEntities) return;
		goto IL_0018;
	}

IL_000b:
	{
		// entities.AddRange(mergeEntities);
		List_1_t6D090AF9EB273D470FE30798680167DEBB0CC11B* L_2 = __this->___entities_0;
		RuntimeObject* L_3 = ___mergeEntities0;
		NullCheck(L_2);
		List_1_AddRange_m8BB499395EEDB4C9EAA873C7A66A7ACDAFD89907(L_2, L_3, List_1_AddRange_m8BB499395EEDB4C9EAA873C7A66A7ACDAFD89907_RuntimeMethod_var);
	}

IL_0018:
	{
		// }
		return;
	}
}
// System.Void Meta.WitAi.Data.Entities.WitDynamicEntities::Add(Meta.WitAi.Data.Entities.WitDynamicEntity)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WitDynamicEntities_Add_mA982C93622B421F48CA0D74D96C78019FD872692 (WitDynamicEntities_t122029C03796D5F75B696CA70D8083DA16E33E38* __this, WitDynamicEntity_tE0824DEF90E6E8AA7D10CC0A6892B4C1018DE2B4* ___dynamicEntity0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_m67EDCB98B1E1D35BADFEAC5C05C3101FACF43EAF_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_FindIndex_mE9AA887D00D181BADF341807FD92E8991B62971A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Predicate_1_t39557AE2C0B3C676DB62FADB5D71DD45826B8572_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass12_0_U3CAddU3Eb__0_mF384E2ACF31F315D65B7489985AB5D8499961514_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass12_0_t7BAF63290242ED2FD3A4364665FEACF638C4DE20_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral875CAA93604F0482162CA6419410D92BDEF2B0F2);
		s_Il2CppMethodInitialized = true;
	}
	U3CU3Ec__DisplayClass12_0_t7BAF63290242ED2FD3A4364665FEACF638C4DE20* V_0 = NULL;
	int32_t V_1 = 0;
	bool V_2 = false;
	{
		U3CU3Ec__DisplayClass12_0_t7BAF63290242ED2FD3A4364665FEACF638C4DE20* L_0 = (U3CU3Ec__DisplayClass12_0_t7BAF63290242ED2FD3A4364665FEACF638C4DE20*)il2cpp_codegen_object_new(U3CU3Ec__DisplayClass12_0_t7BAF63290242ED2FD3A4364665FEACF638C4DE20_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CU3Ec__DisplayClass12_0__ctor_m8625D0F6873C66DEE7735131A8B75C1367016622(L_0, NULL);
		V_0 = L_0;
		U3CU3Ec__DisplayClass12_0_t7BAF63290242ED2FD3A4364665FEACF638C4DE20* L_1 = V_0;
		WitDynamicEntity_tE0824DEF90E6E8AA7D10CC0A6892B4C1018DE2B4* L_2 = ___dynamicEntity0;
		NullCheck(L_1);
		L_1->___dynamicEntity_0 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___dynamicEntity_0), (void*)L_2);
		// int index = entities.FindIndex(e => e.entity == dynamicEntity.entity);
		List_1_t6D090AF9EB273D470FE30798680167DEBB0CC11B* L_3 = __this->___entities_0;
		U3CU3Ec__DisplayClass12_0_t7BAF63290242ED2FD3A4364665FEACF638C4DE20* L_4 = V_0;
		Predicate_1_t39557AE2C0B3C676DB62FADB5D71DD45826B8572* L_5 = (Predicate_1_t39557AE2C0B3C676DB62FADB5D71DD45826B8572*)il2cpp_codegen_object_new(Predicate_1_t39557AE2C0B3C676DB62FADB5D71DD45826B8572_il2cpp_TypeInfo_var);
		NullCheck(L_5);
		Predicate_1__ctor_mF0DF589C32CDA697185F38B8E55927A8FDB6C6DD(L_5, L_4, (intptr_t)((void*)U3CU3Ec__DisplayClass12_0_U3CAddU3Eb__0_mF384E2ACF31F315D65B7489985AB5D8499961514_RuntimeMethod_var), NULL);
		NullCheck(L_3);
		int32_t L_6;
		L_6 = List_1_FindIndex_mE9AA887D00D181BADF341807FD92E8991B62971A(L_3, L_5, List_1_FindIndex_mE9AA887D00D181BADF341807FD92E8991B62971A_RuntimeMethod_var);
		V_1 = L_6;
		// if(index < 0) entities.Add(dynamicEntity);
		int32_t L_7 = V_1;
		V_2 = (bool)((((int32_t)L_7) < ((int32_t)0))? 1 : 0);
		bool L_8 = V_2;
		if (!L_8)
		{
			goto IL_0042;
		}
	}
	{
		// if(index < 0) entities.Add(dynamicEntity);
		List_1_t6D090AF9EB273D470FE30798680167DEBB0CC11B* L_9 = __this->___entities_0;
		U3CU3Ec__DisplayClass12_0_t7BAF63290242ED2FD3A4364665FEACF638C4DE20* L_10 = V_0;
		NullCheck(L_10);
		WitDynamicEntity_tE0824DEF90E6E8AA7D10CC0A6892B4C1018DE2B4* L_11 = L_10->___dynamicEntity_0;
		NullCheck(L_9);
		List_1_Add_m67EDCB98B1E1D35BADFEAC5C05C3101FACF43EAF_inline(L_9, L_11, List_1_Add_m67EDCB98B1E1D35BADFEAC5C05C3101FACF43EAF_RuntimeMethod_var);
		goto IL_005d;
	}

IL_0042:
	{
		// else VLog.W($"Cannot add entity, registry already has an entry for {dynamicEntity.entity}");
		U3CU3Ec__DisplayClass12_0_t7BAF63290242ED2FD3A4364665FEACF638C4DE20* L_12 = V_0;
		NullCheck(L_12);
		WitDynamicEntity_tE0824DEF90E6E8AA7D10CC0A6892B4C1018DE2B4* L_13 = L_12->___dynamicEntity_0;
		NullCheck(L_13);
		String_t* L_14 = L_13->___entity_0;
		String_t* L_15;
		L_15 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(_stringLiteral875CAA93604F0482162CA6419410D92BDEF2B0F2, L_14, NULL);
		VLog_W_m7943297ED32FD0E92544C324E6793089056A2344(L_15, NULL);
	}

IL_005d:
	{
		// }
		return;
	}
}
// System.Void Meta.WitAi.Data.Entities.WitDynamicEntities::Remove(Meta.WitAi.Data.Entities.WitDynamicEntity)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WitDynamicEntities_Remove_m3434D4F1593AB52345E99DA9DA9A1B0117F1486E (WitDynamicEntities_t122029C03796D5F75B696CA70D8083DA16E33E38* __this, WitDynamicEntity_tE0824DEF90E6E8AA7D10CC0A6892B4C1018DE2B4* ___dynamicEntity0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Remove_m07B166FD98004ECE5C0F7524AC18B8154F2E825B_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// entities.Remove(dynamicEntity);
		List_1_t6D090AF9EB273D470FE30798680167DEBB0CC11B* L_0 = __this->___entities_0;
		WitDynamicEntity_tE0824DEF90E6E8AA7D10CC0A6892B4C1018DE2B4* L_1 = ___dynamicEntity0;
		NullCheck(L_0);
		bool L_2;
		L_2 = List_1_Remove_m07B166FD98004ECE5C0F7524AC18B8154F2E825B(L_0, L_1, List_1_Remove_m07B166FD98004ECE5C0F7524AC18B8154F2E825B_RuntimeMethod_var);
		// }
		return;
	}
}
// System.Void Meta.WitAi.Data.Entities.WitDynamicEntities::AddKeyword(System.String,Meta.WitAi.Data.Info.WitEntityKeywordInfo)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WitDynamicEntities_AddKeyword_mCDF7E57A3B696A71CBE004DDB5E4784607A30601 (WitDynamicEntities_t122029C03796D5F75B696CA70D8083DA16E33E38* __this, String_t* ___entityName0, WitEntityKeywordInfo_tE0A290B8BFF00EF007649834C336D5DD48DA445B ___keyword1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Array_Empty_TisString_t_m9832B70DF2B936246FE60F75D3D12CB946C39D16_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_m67EDCB98B1E1D35BADFEAC5C05C3101FACF43EAF_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_mB785B35A5407068979C269B25532380F897AF875_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Find_m9760E5BE5F71037777382614940964F6DA618AE9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Predicate_1_t39557AE2C0B3C676DB62FADB5D71DD45826B8572_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass14_0_U3CAddKeywordU3Eb__0_mA448E8CFB07D995BF4676EFA305773A726B2511C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass14_0_tA27EEDC5333187C3AC128BA4030FEE5B3D6DE503_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WitDynamicEntity_tE0824DEF90E6E8AA7D10CC0A6892B4C1018DE2B4_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	U3CU3Ec__DisplayClass14_0_tA27EEDC5333187C3AC128BA4030FEE5B3D6DE503* V_0 = NULL;
	WitDynamicEntity_tE0824DEF90E6E8AA7D10CC0A6892B4C1018DE2B4* V_1 = NULL;
	bool V_2 = false;
	{
		U3CU3Ec__DisplayClass14_0_tA27EEDC5333187C3AC128BA4030FEE5B3D6DE503* L_0 = (U3CU3Ec__DisplayClass14_0_tA27EEDC5333187C3AC128BA4030FEE5B3D6DE503*)il2cpp_codegen_object_new(U3CU3Ec__DisplayClass14_0_tA27EEDC5333187C3AC128BA4030FEE5B3D6DE503_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CU3Ec__DisplayClass14_0__ctor_m654A4DE466127276F04E0102A64462482FB3F906(L_0, NULL);
		V_0 = L_0;
		U3CU3Ec__DisplayClass14_0_tA27EEDC5333187C3AC128BA4030FEE5B3D6DE503* L_1 = V_0;
		String_t* L_2 = ___entityName0;
		NullCheck(L_1);
		L_1->___entityName_0 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___entityName_0), (void*)L_2);
		// var entity = entities.Find(e => entityName == e.entity);
		List_1_t6D090AF9EB273D470FE30798680167DEBB0CC11B* L_3 = __this->___entities_0;
		U3CU3Ec__DisplayClass14_0_tA27EEDC5333187C3AC128BA4030FEE5B3D6DE503* L_4 = V_0;
		Predicate_1_t39557AE2C0B3C676DB62FADB5D71DD45826B8572* L_5 = (Predicate_1_t39557AE2C0B3C676DB62FADB5D71DD45826B8572*)il2cpp_codegen_object_new(Predicate_1_t39557AE2C0B3C676DB62FADB5D71DD45826B8572_il2cpp_TypeInfo_var);
		NullCheck(L_5);
		Predicate_1__ctor_mF0DF589C32CDA697185F38B8E55927A8FDB6C6DD(L_5, L_4, (intptr_t)((void*)U3CU3Ec__DisplayClass14_0_U3CAddKeywordU3Eb__0_mA448E8CFB07D995BF4676EFA305773A726B2511C_RuntimeMethod_var), NULL);
		NullCheck(L_3);
		WitDynamicEntity_tE0824DEF90E6E8AA7D10CC0A6892B4C1018DE2B4* L_6;
		L_6 = List_1_Find_m9760E5BE5F71037777382614940964F6DA618AE9(L_3, L_5, List_1_Find_m9760E5BE5F71037777382614940964F6DA618AE9_RuntimeMethod_var);
		V_1 = L_6;
		// if (null == entity)
		WitDynamicEntity_tE0824DEF90E6E8AA7D10CC0A6892B4C1018DE2B4* L_7 = V_1;
		V_2 = (bool)((((RuntimeObject*)(WitDynamicEntity_tE0824DEF90E6E8AA7D10CC0A6892B4C1018DE2B4*)L_7) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0);
		bool L_8 = V_2;
		if (!L_8)
		{
			goto IL_004e;
		}
	}
	{
		// entity = new WitDynamicEntity(entityName);
		U3CU3Ec__DisplayClass14_0_tA27EEDC5333187C3AC128BA4030FEE5B3D6DE503* L_9 = V_0;
		NullCheck(L_9);
		String_t* L_10 = L_9->___entityName_0;
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_11;
		L_11 = Array_Empty_TisString_t_m9832B70DF2B936246FE60F75D3D12CB946C39D16_inline(Array_Empty_TisString_t_m9832B70DF2B936246FE60F75D3D12CB946C39D16_RuntimeMethod_var);
		WitDynamicEntity_tE0824DEF90E6E8AA7D10CC0A6892B4C1018DE2B4* L_12 = (WitDynamicEntity_tE0824DEF90E6E8AA7D10CC0A6892B4C1018DE2B4*)il2cpp_codegen_object_new(WitDynamicEntity_tE0824DEF90E6E8AA7D10CC0A6892B4C1018DE2B4_il2cpp_TypeInfo_var);
		NullCheck(L_12);
		WitDynamicEntity__ctor_m0CA7E7E8120B52275414FD0AA60C03918C1BDB58(L_12, L_10, L_11, NULL);
		V_1 = L_12;
		// entities.Add(entity);
		List_1_t6D090AF9EB273D470FE30798680167DEBB0CC11B* L_13 = __this->___entities_0;
		WitDynamicEntity_tE0824DEF90E6E8AA7D10CC0A6892B4C1018DE2B4* L_14 = V_1;
		NullCheck(L_13);
		List_1_Add_m67EDCB98B1E1D35BADFEAC5C05C3101FACF43EAF_inline(L_13, L_14, List_1_Add_m67EDCB98B1E1D35BADFEAC5C05C3101FACF43EAF_RuntimeMethod_var);
	}

IL_004e:
	{
		// entity.keywords.Add(keyword);
		WitDynamicEntity_tE0824DEF90E6E8AA7D10CC0A6892B4C1018DE2B4* L_15 = V_1;
		NullCheck(L_15);
		List_1_t4F3133982BFC53A2508E8212590377CE60E9596C* L_16 = L_15->___keywords_1;
		WitEntityKeywordInfo_tE0A290B8BFF00EF007649834C336D5DD48DA445B L_17 = ___keyword1;
		NullCheck(L_16);
		List_1_Add_mB785B35A5407068979C269B25532380F897AF875_inline(L_16, L_17, List_1_Add_mB785B35A5407068979C269B25532380F897AF875_RuntimeMethod_var);
		// }
		return;
	}
}
// System.Void Meta.WitAi.Data.Entities.WitDynamicEntities::RemoveKeyword(System.String,Meta.WitAi.Data.Info.WitEntityKeywordInfo)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WitDynamicEntities_RemoveKeyword_m3AFEBE51C4699E7CEEBD4CCCF4C7FDC3754AEC15 (WitDynamicEntities_t122029C03796D5F75B696CA70D8083DA16E33E38* __this, String_t* ___entityName0, WitEntityKeywordInfo_tE0A290B8BFF00EF007649834C336D5DD48DA445B ___keyword1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_FindIndex_mE9AA887D00D181BADF341807FD92E8991B62971A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_RemoveAt_m9DD03354CB5AEA0DEF85D3DAA9099E9904847164_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Remove_m04D253F0F05F9150C8F833AD48BA9BD48A0F3F89_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_mE0AFF33D783CDEE097B45A7077DE1721E0138FE9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_m7B0EB16C24DB14F6557DC2080D4AF80F77AF1D56_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Predicate_1_t39557AE2C0B3C676DB62FADB5D71DD45826B8572_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass15_0_U3CRemoveKeywordU3Eb__0_mD0D93FDE02722772E6DC49248AAA9CAE4DC190EE_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass15_0_tACB191291E61806F1F8880014C1B1F30240781FC_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	U3CU3Ec__DisplayClass15_0_tACB191291E61806F1F8880014C1B1F30240781FC* V_0 = NULL;
	int32_t V_1 = 0;
	bool V_2 = false;
	bool V_3 = false;
	{
		U3CU3Ec__DisplayClass15_0_tACB191291E61806F1F8880014C1B1F30240781FC* L_0 = (U3CU3Ec__DisplayClass15_0_tACB191291E61806F1F8880014C1B1F30240781FC*)il2cpp_codegen_object_new(U3CU3Ec__DisplayClass15_0_tACB191291E61806F1F8880014C1B1F30240781FC_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CU3Ec__DisplayClass15_0__ctor_mCCCA1A6056023A410E46737A7DF6D7EA0957D6E0(L_0, NULL);
		V_0 = L_0;
		U3CU3Ec__DisplayClass15_0_tACB191291E61806F1F8880014C1B1F30240781FC* L_1 = V_0;
		String_t* L_2 = ___entityName0;
		NullCheck(L_1);
		L_1->___entityName_0 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___entityName_0), (void*)L_2);
		// int index = entities.FindIndex(e => e.entity == entityName);
		List_1_t6D090AF9EB273D470FE30798680167DEBB0CC11B* L_3 = __this->___entities_0;
		U3CU3Ec__DisplayClass15_0_tACB191291E61806F1F8880014C1B1F30240781FC* L_4 = V_0;
		Predicate_1_t39557AE2C0B3C676DB62FADB5D71DD45826B8572* L_5 = (Predicate_1_t39557AE2C0B3C676DB62FADB5D71DD45826B8572*)il2cpp_codegen_object_new(Predicate_1_t39557AE2C0B3C676DB62FADB5D71DD45826B8572_il2cpp_TypeInfo_var);
		NullCheck(L_5);
		Predicate_1__ctor_mF0DF589C32CDA697185F38B8E55927A8FDB6C6DD(L_5, L_4, (intptr_t)((void*)U3CU3Ec__DisplayClass15_0_U3CRemoveKeywordU3Eb__0_mD0D93FDE02722772E6DC49248AAA9CAE4DC190EE_RuntimeMethod_var), NULL);
		NullCheck(L_3);
		int32_t L_6;
		L_6 = List_1_FindIndex_mE9AA887D00D181BADF341807FD92E8991B62971A(L_3, L_5, List_1_FindIndex_mE9AA887D00D181BADF341807FD92E8991B62971A_RuntimeMethod_var);
		V_1 = L_6;
		// if (index >= 0)
		int32_t L_7 = V_1;
		V_2 = (bool)((((int32_t)((((int32_t)L_7) < ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_8 = V_2;
		if (!L_8)
		{
			goto IL_0075;
		}
	}
	{
		// entities[index].keywords.Remove(keyword);
		List_1_t6D090AF9EB273D470FE30798680167DEBB0CC11B* L_9 = __this->___entities_0;
		int32_t L_10 = V_1;
		NullCheck(L_9);
		WitDynamicEntity_tE0824DEF90E6E8AA7D10CC0A6892B4C1018DE2B4* L_11;
		L_11 = List_1_get_Item_m7B0EB16C24DB14F6557DC2080D4AF80F77AF1D56(L_9, L_10, List_1_get_Item_m7B0EB16C24DB14F6557DC2080D4AF80F77AF1D56_RuntimeMethod_var);
		NullCheck(L_11);
		List_1_t4F3133982BFC53A2508E8212590377CE60E9596C* L_12 = L_11->___keywords_1;
		WitEntityKeywordInfo_tE0A290B8BFF00EF007649834C336D5DD48DA445B L_13 = ___keyword1;
		NullCheck(L_12);
		bool L_14;
		L_14 = List_1_Remove_m04D253F0F05F9150C8F833AD48BA9BD48A0F3F89(L_12, L_13, List_1_Remove_m04D253F0F05F9150C8F833AD48BA9BD48A0F3F89_RuntimeMethod_var);
		// if(entities[index].keywords.Count == 0) entities.RemoveAt(index);
		List_1_t6D090AF9EB273D470FE30798680167DEBB0CC11B* L_15 = __this->___entities_0;
		int32_t L_16 = V_1;
		NullCheck(L_15);
		WitDynamicEntity_tE0824DEF90E6E8AA7D10CC0A6892B4C1018DE2B4* L_17;
		L_17 = List_1_get_Item_m7B0EB16C24DB14F6557DC2080D4AF80F77AF1D56(L_15, L_16, List_1_get_Item_m7B0EB16C24DB14F6557DC2080D4AF80F77AF1D56_RuntimeMethod_var);
		NullCheck(L_17);
		List_1_t4F3133982BFC53A2508E8212590377CE60E9596C* L_18 = L_17->___keywords_1;
		NullCheck(L_18);
		int32_t L_19;
		L_19 = List_1_get_Count_mE0AFF33D783CDEE097B45A7077DE1721E0138FE9_inline(L_18, List_1_get_Count_mE0AFF33D783CDEE097B45A7077DE1721E0138FE9_RuntimeMethod_var);
		V_3 = (bool)((((int32_t)L_19) == ((int32_t)0))? 1 : 0);
		bool L_20 = V_3;
		if (!L_20)
		{
			goto IL_0074;
		}
	}
	{
		// if(entities[index].keywords.Count == 0) entities.RemoveAt(index);
		List_1_t6D090AF9EB273D470FE30798680167DEBB0CC11B* L_21 = __this->___entities_0;
		int32_t L_22 = V_1;
		NullCheck(L_21);
		List_1_RemoveAt_m9DD03354CB5AEA0DEF85D3DAA9099E9904847164(L_21, L_22, List_1_RemoveAt_m9DD03354CB5AEA0DEF85D3DAA9099E9904847164_RuntimeMethod_var);
	}

IL_0074:
	{
	}

IL_0075:
	{
		// }
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
// System.Void Meta.WitAi.Data.Entities.WitDynamicEntities/<>c__DisplayClass12_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass12_0__ctor_m8625D0F6873C66DEE7735131A8B75C1367016622 (U3CU3Ec__DisplayClass12_0_t7BAF63290242ED2FD3A4364665FEACF638C4DE20* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// System.Boolean Meta.WitAi.Data.Entities.WitDynamicEntities/<>c__DisplayClass12_0::<Add>b__0(Meta.WitAi.Data.Entities.WitDynamicEntity)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CU3Ec__DisplayClass12_0_U3CAddU3Eb__0_mF384E2ACF31F315D65B7489985AB5D8499961514 (U3CU3Ec__DisplayClass12_0_t7BAF63290242ED2FD3A4364665FEACF638C4DE20* __this, WitDynamicEntity_tE0824DEF90E6E8AA7D10CC0A6892B4C1018DE2B4* ___e0, const RuntimeMethod* method) 
{
	{
		// int index = entities.FindIndex(e => e.entity == dynamicEntity.entity);
		WitDynamicEntity_tE0824DEF90E6E8AA7D10CC0A6892B4C1018DE2B4* L_0 = ___e0;
		NullCheck(L_0);
		String_t* L_1 = L_0->___entity_0;
		WitDynamicEntity_tE0824DEF90E6E8AA7D10CC0A6892B4C1018DE2B4* L_2 = __this->___dynamicEntity_0;
		NullCheck(L_2);
		String_t* L_3 = L_2->___entity_0;
		bool L_4;
		L_4 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_1, L_3, NULL);
		return L_4;
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
// System.Void Meta.WitAi.Data.Entities.WitDynamicEntities/<>c__DisplayClass14_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass14_0__ctor_m654A4DE466127276F04E0102A64462482FB3F906 (U3CU3Ec__DisplayClass14_0_tA27EEDC5333187C3AC128BA4030FEE5B3D6DE503* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// System.Boolean Meta.WitAi.Data.Entities.WitDynamicEntities/<>c__DisplayClass14_0::<AddKeyword>b__0(Meta.WitAi.Data.Entities.WitDynamicEntity)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CU3Ec__DisplayClass14_0_U3CAddKeywordU3Eb__0_mA448E8CFB07D995BF4676EFA305773A726B2511C (U3CU3Ec__DisplayClass14_0_tA27EEDC5333187C3AC128BA4030FEE5B3D6DE503* __this, WitDynamicEntity_tE0824DEF90E6E8AA7D10CC0A6892B4C1018DE2B4* ___e0, const RuntimeMethod* method) 
{
	{
		// var entity = entities.Find(e => entityName == e.entity);
		String_t* L_0 = __this->___entityName_0;
		WitDynamicEntity_tE0824DEF90E6E8AA7D10CC0A6892B4C1018DE2B4* L_1 = ___e0;
		NullCheck(L_1);
		String_t* L_2 = L_1->___entity_0;
		bool L_3;
		L_3 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_0, L_2, NULL);
		return L_3;
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
// System.Void Meta.WitAi.Data.Entities.WitDynamicEntities/<>c__DisplayClass15_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass15_0__ctor_mCCCA1A6056023A410E46737A7DF6D7EA0957D6E0 (U3CU3Ec__DisplayClass15_0_tACB191291E61806F1F8880014C1B1F30240781FC* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// System.Boolean Meta.WitAi.Data.Entities.WitDynamicEntities/<>c__DisplayClass15_0::<RemoveKeyword>b__0(Meta.WitAi.Data.Entities.WitDynamicEntity)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CU3Ec__DisplayClass15_0_U3CRemoveKeywordU3Eb__0_mD0D93FDE02722772E6DC49248AAA9CAE4DC190EE (U3CU3Ec__DisplayClass15_0_tACB191291E61806F1F8880014C1B1F30240781FC* __this, WitDynamicEntity_tE0824DEF90E6E8AA7D10CC0A6892B4C1018DE2B4* ___e0, const RuntimeMethod* method) 
{
	{
		// int index = entities.FindIndex(e => e.entity == entityName);
		WitDynamicEntity_tE0824DEF90E6E8AA7D10CC0A6892B4C1018DE2B4* L_0 = ___e0;
		NullCheck(L_0);
		String_t* L_1 = L_0->___entity_0;
		String_t* L_2 = __this->___entityName_0;
		bool L_3;
		L_3 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_1, L_2, NULL);
		return L_3;
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
// Meta.WitAi.Data.Entities.WitDynamicEntities Meta.WitAi.Data.Entities.WitDynamicEntitiesData::GetDynamicEntities()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR WitDynamicEntities_t122029C03796D5F75B696CA70D8083DA16E33E38* WitDynamicEntitiesData_GetDynamicEntities_m0A320C1B3BE69926729D203A0EE6FB9E84CF9EC8 (WitDynamicEntitiesData_t372BA7AB1BA929F633A88ADF252C252444A79146* __this, const RuntimeMethod* method) 
{
	WitDynamicEntities_t122029C03796D5F75B696CA70D8083DA16E33E38* V_0 = NULL;
	{
		// return entities;
		WitDynamicEntities_t122029C03796D5F75B696CA70D8083DA16E33E38* L_0 = __this->___entities_4;
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		// }
		WitDynamicEntities_t122029C03796D5F75B696CA70D8083DA16E33E38* L_1 = V_0;
		return L_1;
	}
}
// System.Void Meta.WitAi.Data.Entities.WitDynamicEntitiesData::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WitDynamicEntitiesData__ctor_m1A0932A0FA489DCE01CB2E39C360C053E311F398 (WitDynamicEntitiesData_t372BA7AB1BA929F633A88ADF252C252444A79146* __this, const RuntimeMethod* method) 
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
// System.Void Meta.WitAi.Data.Entities.WitDynamicEntity::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WitDynamicEntity__ctor_m0FD5BF7530DF8CE33CCD5C7B84AEDD3356EFA2E6 (WitDynamicEntity_tE0824DEF90E6E8AA7D10CC0A6892B4C1018DE2B4* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m038E1782678F97D19BF54E473C8DFF06B41723BD_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t4F3133982BFC53A2508E8212590377CE60E9596C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public List<WitEntityKeywordInfo> keywords = new List<WitEntityKeywordInfo>();
		List_1_t4F3133982BFC53A2508E8212590377CE60E9596C* L_0 = (List_1_t4F3133982BFC53A2508E8212590377CE60E9596C*)il2cpp_codegen_object_new(List_1_t4F3133982BFC53A2508E8212590377CE60E9596C_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		List_1__ctor_m038E1782678F97D19BF54E473C8DFF06B41723BD(L_0, List_1__ctor_m038E1782678F97D19BF54E473C8DFF06B41723BD_RuntimeMethod_var);
		__this->___keywords_1 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___keywords_1), (void*)L_0);
		// public WitDynamicEntity()
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		// }
		return;
	}
}
// System.Void Meta.WitAi.Data.Entities.WitDynamicEntity::.ctor(System.String,Meta.WitAi.Data.Info.WitEntityKeywordInfo)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WitDynamicEntity__ctor_m583895EB52E6165E929FC5E81264314754F26D7C (WitDynamicEntity_tE0824DEF90E6E8AA7D10CC0A6892B4C1018DE2B4* __this, String_t* ___entity0, WitEntityKeywordInfo_tE0A290B8BFF00EF007649834C336D5DD48DA445B ___keyword1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_mB785B35A5407068979C269B25532380F897AF875_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m038E1782678F97D19BF54E473C8DFF06B41723BD_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t4F3133982BFC53A2508E8212590377CE60E9596C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public List<WitEntityKeywordInfo> keywords = new List<WitEntityKeywordInfo>();
		List_1_t4F3133982BFC53A2508E8212590377CE60E9596C* L_0 = (List_1_t4F3133982BFC53A2508E8212590377CE60E9596C*)il2cpp_codegen_object_new(List_1_t4F3133982BFC53A2508E8212590377CE60E9596C_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		List_1__ctor_m038E1782678F97D19BF54E473C8DFF06B41723BD(L_0, List_1__ctor_m038E1782678F97D19BF54E473C8DFF06B41723BD_RuntimeMethod_var);
		__this->___keywords_1 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___keywords_1), (void*)L_0);
		// public WitDynamicEntity(string entity, WitEntityKeywordInfo keyword)
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		// this.entity = entity;
		String_t* L_1 = ___entity0;
		__this->___entity_0 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___entity_0), (void*)L_1);
		// this.keywords.Add(keyword);
		List_1_t4F3133982BFC53A2508E8212590377CE60E9596C* L_2 = __this->___keywords_1;
		WitEntityKeywordInfo_tE0A290B8BFF00EF007649834C336D5DD48DA445B L_3 = ___keyword1;
		NullCheck(L_2);
		List_1_Add_mB785B35A5407068979C269B25532380F897AF875_inline(L_2, L_3, List_1_Add_mB785B35A5407068979C269B25532380F897AF875_RuntimeMethod_var);
		// }
		return;
	}
}
// System.Void Meta.WitAi.Data.Entities.WitDynamicEntity::.ctor(System.String,System.String[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WitDynamicEntity__ctor_m0CA7E7E8120B52275414FD0AA60C03918C1BDB58 (WitDynamicEntity_tE0824DEF90E6E8AA7D10CC0A6892B4C1018DE2B4* __this, String_t* ___entity0, StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___keywords1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_mB785B35A5407068979C269B25532380F897AF875_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m038E1782678F97D19BF54E473C8DFF06B41723BD_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m0BAB01B25B1D62E100CC97401B1A9972D6DEB6EC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t4F3133982BFC53A2508E8212590377CE60E9596C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* V_0 = NULL;
	int32_t V_1 = 0;
	String_t* V_2 = NULL;
	WitEntityKeywordInfo_tE0A290B8BFF00EF007649834C336D5DD48DA445B V_3;
	memset((&V_3), 0, sizeof(V_3));
	{
		// public List<WitEntityKeywordInfo> keywords = new List<WitEntityKeywordInfo>();
		List_1_t4F3133982BFC53A2508E8212590377CE60E9596C* L_0 = (List_1_t4F3133982BFC53A2508E8212590377CE60E9596C*)il2cpp_codegen_object_new(List_1_t4F3133982BFC53A2508E8212590377CE60E9596C_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		List_1__ctor_m038E1782678F97D19BF54E473C8DFF06B41723BD(L_0, List_1__ctor_m038E1782678F97D19BF54E473C8DFF06B41723BD_RuntimeMethod_var);
		__this->___keywords_1 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___keywords_1), (void*)L_0);
		// public WitDynamicEntity(string entity, params string[] keywords)
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		// this.entity = entity;
		String_t* L_1 = ___entity0;
		__this->___entity_0 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___entity_0), (void*)L_1);
		// foreach (var keyword in keywords)
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_2 = ___keywords1;
		V_0 = L_2;
		V_1 = 0;
		goto IL_005e;
	}

IL_0021:
	{
		// foreach (var keyword in keywords)
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_3 = V_0;
		int32_t L_4 = V_1;
		NullCheck(L_3);
		int32_t L_5 = L_4;
		String_t* L_6 = (L_3)->GetAt(static_cast<il2cpp_array_size_t>(L_5));
		V_2 = L_6;
		// this.keywords.Add(new WitEntityKeywordInfo()
		// {
		//     keyword = keyword,
		//     synonyms = new List<string>(new string[] { keyword })
		// });
		List_1_t4F3133982BFC53A2508E8212590377CE60E9596C* L_7 = __this->___keywords_1;
		il2cpp_codegen_initobj((&V_3), sizeof(WitEntityKeywordInfo_tE0A290B8BFF00EF007649834C336D5DD48DA445B));
		String_t* L_8 = V_2;
		(&V_3)->___keyword_0 = L_8;
		Il2CppCodeGenWriteBarrier((void**)(&(&V_3)->___keyword_0), (void*)L_8);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_9 = (StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)SZArrayNew(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var, (uint32_t)1);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_10 = L_9;
		String_t* L_11 = V_2;
		NullCheck(L_10);
		ArrayElementTypeCheck (L_10, L_11);
		(L_10)->SetAt(static_cast<il2cpp_array_size_t>(0), (String_t*)L_11);
		List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_12 = (List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD*)il2cpp_codegen_object_new(List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD_il2cpp_TypeInfo_var);
		NullCheck(L_12);
		List_1__ctor_m0BAB01B25B1D62E100CC97401B1A9972D6DEB6EC(L_12, (RuntimeObject*)L_10, List_1__ctor_m0BAB01B25B1D62E100CC97401B1A9972D6DEB6EC_RuntimeMethod_var);
		(&V_3)->___synonyms_1 = L_12;
		Il2CppCodeGenWriteBarrier((void**)(&(&V_3)->___synonyms_1), (void*)L_12);
		WitEntityKeywordInfo_tE0A290B8BFF00EF007649834C336D5DD48DA445B L_13 = V_3;
		NullCheck(L_7);
		List_1_Add_mB785B35A5407068979C269B25532380F897AF875_inline(L_7, L_13, List_1_Add_mB785B35A5407068979C269B25532380F897AF875_RuntimeMethod_var);
		int32_t L_14 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_14, 1));
	}

IL_005e:
	{
		// foreach (var keyword in keywords)
		int32_t L_15 = V_1;
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_16 = V_0;
		NullCheck(L_16);
		if ((((int32_t)L_15) < ((int32_t)((int32_t)(((RuntimeArray*)L_16)->max_length)))))
		{
			goto IL_0021;
		}
	}
	{
		// }
		return;
	}
}
// System.Void Meta.WitAi.Data.Entities.WitDynamicEntity::.ctor(System.String,System.Collections.Generic.Dictionary`2<System.String,System.Collections.Generic.List`1<System.String>>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WitDynamicEntity__ctor_m192A8305D35A6C2DF9C1398D09D6FCE117976A5A (WitDynamicEntity_tE0824DEF90E6E8AA7D10CC0A6892B4C1018DE2B4* __this, String_t* ___entity0, Dictionary_2_t79BA378F246EFA4AD0AFFA017D788423CACA8638* ___keywordsToSynonyms1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_GetEnumerator_m7B0E05167CA47611244E25AD67EBCEBDF5DB5EDE_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_m7DE9243F0F854CE156AFB007FA010C1AB4321A44_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_mA71548765692C241BEFB57E80CBC1563829B1656_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_mB41E65E33E936ACBD32C200633257CBD3261A9E2_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&KeyValuePair_2_get_Key_m852B0BE1941AFE5DA3A393534C0020AEAB59D0A6_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&KeyValuePair_2_get_Value_mD55616E290F6591FA95053D1C8D2DDA2E49A058C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_mB785B35A5407068979C269B25532380F897AF875_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m038E1782678F97D19BF54E473C8DFF06B41723BD_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t4F3133982BFC53A2508E8212590377CE60E9596C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Enumerator_tF61ACA1FDE72603A35B49225874CAC6CA43B2250 V_0;
	memset((&V_0), 0, sizeof(V_0));
	KeyValuePair_2_tF2D5A036C624EBE9BEAB8512F34B28AB195C5D89 V_1;
	memset((&V_1), 0, sizeof(V_1));
	WitEntityKeywordInfo_tE0A290B8BFF00EF007649834C336D5DD48DA445B V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		// public List<WitEntityKeywordInfo> keywords = new List<WitEntityKeywordInfo>();
		List_1_t4F3133982BFC53A2508E8212590377CE60E9596C* L_0 = (List_1_t4F3133982BFC53A2508E8212590377CE60E9596C*)il2cpp_codegen_object_new(List_1_t4F3133982BFC53A2508E8212590377CE60E9596C_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		List_1__ctor_m038E1782678F97D19BF54E473C8DFF06B41723BD(L_0, List_1__ctor_m038E1782678F97D19BF54E473C8DFF06B41723BD_RuntimeMethod_var);
		__this->___keywords_1 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___keywords_1), (void*)L_0);
		// public WitDynamicEntity(string entity, Dictionary<string, List<string>> keywordsToSynonyms)
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		// this.entity = entity;
		String_t* L_1 = ___entity0;
		__this->___entity_0 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___entity_0), (void*)L_1);
		// foreach (var synonym in keywordsToSynonyms)
		Dictionary_2_t79BA378F246EFA4AD0AFFA017D788423CACA8638* L_2 = ___keywordsToSynonyms1;
		NullCheck(L_2);
		Enumerator_tF61ACA1FDE72603A35B49225874CAC6CA43B2250 L_3;
		L_3 = Dictionary_2_GetEnumerator_m7B0E05167CA47611244E25AD67EBCEBDF5DB5EDE(L_2, Dictionary_2_GetEnumerator_m7B0E05167CA47611244E25AD67EBCEBDF5DB5EDE_RuntimeMethod_var);
		V_0 = L_3;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_006a:
			{// begin finally (depth: 1)
				Enumerator_Dispose_m7DE9243F0F854CE156AFB007FA010C1AB4321A44((&V_0), Enumerator_Dispose_m7DE9243F0F854CE156AFB007FA010C1AB4321A44_RuntimeMethod_var);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_005f_1;
			}

IL_0024_1:
			{
				// foreach (var synonym in keywordsToSynonyms)
				KeyValuePair_2_tF2D5A036C624EBE9BEAB8512F34B28AB195C5D89 L_4;
				L_4 = Enumerator_get_Current_mB41E65E33E936ACBD32C200633257CBD3261A9E2_inline((&V_0), Enumerator_get_Current_mB41E65E33E936ACBD32C200633257CBD3261A9E2_RuntimeMethod_var);
				V_1 = L_4;
				// keywords.Add(new WitEntityKeywordInfo()
				// {
				//     keyword = synonym.Key,
				//     synonyms = synonym.Value
				// });
				List_1_t4F3133982BFC53A2508E8212590377CE60E9596C* L_5 = __this->___keywords_1;
				il2cpp_codegen_initobj((&V_2), sizeof(WitEntityKeywordInfo_tE0A290B8BFF00EF007649834C336D5DD48DA445B));
				String_t* L_6;
				L_6 = KeyValuePair_2_get_Key_m852B0BE1941AFE5DA3A393534C0020AEAB59D0A6_inline((&V_1), KeyValuePair_2_get_Key_m852B0BE1941AFE5DA3A393534C0020AEAB59D0A6_RuntimeMethod_var);
				(&V_2)->___keyword_0 = L_6;
				Il2CppCodeGenWriteBarrier((void**)(&(&V_2)->___keyword_0), (void*)L_6);
				List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_7;
				L_7 = KeyValuePair_2_get_Value_mD55616E290F6591FA95053D1C8D2DDA2E49A058C_inline((&V_1), KeyValuePair_2_get_Value_mD55616E290F6591FA95053D1C8D2DDA2E49A058C_RuntimeMethod_var);
				(&V_2)->___synonyms_1 = L_7;
				Il2CppCodeGenWriteBarrier((void**)(&(&V_2)->___synonyms_1), (void*)L_7);
				WitEntityKeywordInfo_tE0A290B8BFF00EF007649834C336D5DD48DA445B L_8 = V_2;
				NullCheck(L_5);
				List_1_Add_mB785B35A5407068979C269B25532380F897AF875_inline(L_5, L_8, List_1_Add_mB785B35A5407068979C269B25532380F897AF875_RuntimeMethod_var);
			}

IL_005f_1:
			{
				// foreach (var synonym in keywordsToSynonyms)
				bool L_9;
				L_9 = Enumerator_MoveNext_mA71548765692C241BEFB57E80CBC1563829B1656((&V_0), Enumerator_MoveNext_mA71548765692C241BEFB57E80CBC1563829B1656_RuntimeMethod_var);
				if (L_9)
				{
					goto IL_0024_1;
				}
			}
			{
				goto IL_0079;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0079:
	{
		// }
		return;
	}
}
// Meta.WitAi.Json.WitResponseArray Meta.WitAi.Data.Entities.WitDynamicEntity::get_AsJson()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR WitResponseArray_tAC1DCF75C6C2FAB0A70A7DB879A0F35999BAB30A* WitDynamicEntity_get_AsJson_mA7E4CB0E4036B333116C1897C8565D1FCFB2262C (WitDynamicEntity_tE0824DEF90E6E8AA7D10CC0A6892B4C1018DE2B4* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JsonConvert_SerializeToken_TisList_1_t4F3133982BFC53A2508E8212590377CE60E9596C_mE24CDA45C45ACB7605C3225C0CBE3D417CBB6E52_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JsonConvert_t69A348E775F1FA63C310F5FE324F3EE231AD8072_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	WitResponseArray_tAC1DCF75C6C2FAB0A70A7DB879A0F35999BAB30A* V_0 = NULL;
	{
		// return JsonConvert.SerializeToken(keywords).AsArray;
		List_1_t4F3133982BFC53A2508E8212590377CE60E9596C* L_0 = __this->___keywords_1;
		il2cpp_codegen_runtime_class_init_inline(JsonConvert_t69A348E775F1FA63C310F5FE324F3EE231AD8072_il2cpp_TypeInfo_var);
		WitResponseNode_t1BFF810F15B21416F5F6D0A1CAAF03CEF942038C* L_1;
		L_1 = JsonConvert_SerializeToken_TisList_1_t4F3133982BFC53A2508E8212590377CE60E9596C_mE24CDA45C45ACB7605C3225C0CBE3D417CBB6E52(L_0, (JsonConverterU5BU5D_tF117D3A16A2A7AAC2A66A7EDCD32E3F48B704DDA*)NULL, (bool)0, JsonConvert_SerializeToken_TisList_1_t4F3133982BFC53A2508E8212590377CE60E9596C_mE24CDA45C45ACB7605C3225C0CBE3D417CBB6E52_RuntimeMethod_var);
		NullCheck(L_1);
		WitResponseArray_tAC1DCF75C6C2FAB0A70A7DB879A0F35999BAB30A* L_2;
		L_2 = VirtualFuncInvoker0< WitResponseArray_tAC1DCF75C6C2FAB0A70A7DB879A0F35999BAB30A* >::Invoke(26 /* Meta.WitAi.Json.WitResponseArray Meta.WitAi.Json.WitResponseNode::get_AsArray() */, L_1);
		V_0 = L_2;
		goto IL_0016;
	}

IL_0016:
	{
		// }
		WitResponseArray_tAC1DCF75C6C2FAB0A70A7DB879A0F35999BAB30A* L_3 = V_0;
		return L_3;
	}
}
// Meta.WitAi.Data.Entities.WitDynamicEntities Meta.WitAi.Data.Entities.WitDynamicEntity::GetDynamicEntities()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR WitDynamicEntities_t122029C03796D5F75B696CA70D8083DA16E33E38* WitDynamicEntity_GetDynamicEntities_mC5C56494E038AF78DE89514A5103A5D07B6D1E6E (WitDynamicEntity_tE0824DEF90E6E8AA7D10CC0A6892B4C1018DE2B4* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_m67EDCB98B1E1D35BADFEAC5C05C3101FACF43EAF_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_mD90BDB6F3C75CE8C6843D60D583652B02327444F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t6D090AF9EB273D470FE30798680167DEBB0CC11B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WitDynamicEntities_t122029C03796D5F75B696CA70D8083DA16E33E38_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	WitDynamicEntities_t122029C03796D5F75B696CA70D8083DA16E33E38* V_0 = NULL;
	{
		// return new WitDynamicEntities()
		// {
		//     entities = new List<WitDynamicEntity>
		//     {
		//         this
		//     }
		// };
		WitDynamicEntities_t122029C03796D5F75B696CA70D8083DA16E33E38* L_0 = (WitDynamicEntities_t122029C03796D5F75B696CA70D8083DA16E33E38*)il2cpp_codegen_object_new(WitDynamicEntities_t122029C03796D5F75B696CA70D8083DA16E33E38_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		WitDynamicEntities__ctor_m5178CF6C94DACA3F959FBFE0CE323D6270EB72D1(L_0, NULL);
		WitDynamicEntities_t122029C03796D5F75B696CA70D8083DA16E33E38* L_1 = L_0;
		List_1_t6D090AF9EB273D470FE30798680167DEBB0CC11B* L_2 = (List_1_t6D090AF9EB273D470FE30798680167DEBB0CC11B*)il2cpp_codegen_object_new(List_1_t6D090AF9EB273D470FE30798680167DEBB0CC11B_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		List_1__ctor_mD90BDB6F3C75CE8C6843D60D583652B02327444F(L_2, List_1__ctor_mD90BDB6F3C75CE8C6843D60D583652B02327444F_RuntimeMethod_var);
		List_1_t6D090AF9EB273D470FE30798680167DEBB0CC11B* L_3 = L_2;
		NullCheck(L_3);
		List_1_Add_m67EDCB98B1E1D35BADFEAC5C05C3101FACF43EAF_inline(L_3, __this, List_1_Add_m67EDCB98B1E1D35BADFEAC5C05C3101FACF43EAF_RuntimeMethod_var);
		NullCheck(L_1);
		L_1->___entities_0 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___entities_0), (void*)L_3);
		V_0 = L_1;
		goto IL_001c;
	}

IL_001c:
	{
		// }
		WitDynamicEntities_t122029C03796D5F75B696CA70D8083DA16E33E38* L_4 = V_0;
		return L_4;
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
// System.Void Meta.WitAi.Data.Entities.WitEntityData::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WitEntityData__ctor_m58DBC0B0D1F0F7317866CF547004DF2E0BBA5BBA (WitEntityData_t3814C265B1FEF49FEBAD433FB102049418BB736B* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WitEntityDataBase_1__ctor_m144D832DF21C40D1F8A75A34553A283572EAB831_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public WitEntityData() {}
		WitEntityDataBase_1__ctor_m144D832DF21C40D1F8A75A34553A283572EAB831(__this, WitEntityDataBase_1__ctor_m144D832DF21C40D1F8A75A34553A283572EAB831_RuntimeMethod_var);
		// public WitEntityData() {}
		return;
	}
}
// System.Void Meta.WitAi.Data.Entities.WitEntityData::.ctor(Meta.WitAi.Json.WitResponseNode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WitEntityData__ctor_m8B64CFF96F87A0D9D658DC556D85D45487C412C0 (WitEntityData_t3814C265B1FEF49FEBAD433FB102049418BB736B* __this, WitResponseNode_t1BFF810F15B21416F5F6D0A1CAAF03CEF942038C* ___node0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WitEntityDataBase_1_FromEntityWitResponseNode_m1B28663CA966B383C72F30F0FA2D0AECCF378A52_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WitEntityDataBase_1__ctor_m144D832DF21C40D1F8A75A34553A283572EAB831_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public WitEntityData(WitResponseNode node)
		WitEntityDataBase_1__ctor_m144D832DF21C40D1F8A75A34553A283572EAB831(__this, WitEntityDataBase_1__ctor_m144D832DF21C40D1F8A75A34553A283572EAB831_RuntimeMethod_var);
		// FromEntityWitResponseNode(node);
		WitResponseNode_t1BFF810F15B21416F5F6D0A1CAAF03CEF942038C* L_0 = ___node0;
		WitEntityDataBase_1_t76EEB2E002923316F752746DDB37569F5D39FEB4* L_1;
		L_1 = WitEntityDataBase_1_FromEntityWitResponseNode_m1B28663CA966B383C72F30F0FA2D0AECCF378A52(__this, L_0, WitEntityDataBase_1_FromEntityWitResponseNode_m1B28663CA966B383C72F30F0FA2D0AECCF378A52_RuntimeMethod_var);
		// }
		return;
	}
}
// System.Boolean Meta.WitAi.Data.Entities.WitEntityData::op_Implicit(Meta.WitAi.Data.Entities.WitEntityData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WitEntityData_op_Implicit_mD30DAEB92AA72BE41E8FAEF27B2C4045BC37A6E5 (WitEntityData_t3814C265B1FEF49FEBAD433FB102049418BB736B* ___data0, const RuntimeMethod* method) 
{
	int32_t G_B3_0 = 0;
	{
		// public static implicit operator bool(WitEntityData data) => null != data && !string.IsNullOrEmpty(data.value);
		WitEntityData_t3814C265B1FEF49FEBAD433FB102049418BB736B* L_0 = ___data0;
		bool L_1;
		L_1 = WitEntityData_op_Inequality_m55449D5F2025E379D3490FC2D0FE1AF172A41657((WitEntityData_t3814C265B1FEF49FEBAD433FB102049418BB736B*)NULL, L_0, NULL);
		if (!L_1)
		{
			goto IL_0019;
		}
	}
	{
		WitEntityData_t3814C265B1FEF49FEBAD433FB102049418BB736B* L_2 = ___data0;
		NullCheck(L_2);
		String_t* L_3 = ((WitEntityDataBase_1_t76EEB2E002923316F752746DDB37569F5D39FEB4*)L_2)->___value_8;
		bool L_4;
		L_4 = String_IsNullOrEmpty_mEA9E3FB005AC28FE02E69FCF95A7B8456192B478(L_3, NULL);
		G_B3_0 = ((((int32_t)L_4) == ((int32_t)0))? 1 : 0);
		goto IL_001a;
	}

IL_0019:
	{
		G_B3_0 = 0;
	}

IL_001a:
	{
		return (bool)G_B3_0;
	}
}
// System.String Meta.WitAi.Data.Entities.WitEntityData::op_Implicit(Meta.WitAi.Data.Entities.WitEntityData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* WitEntityData_op_Implicit_m109E70F386AB6E6EC2B07ABAD38B6471A7B11585 (WitEntityData_t3814C265B1FEF49FEBAD433FB102049418BB736B* ___data0, const RuntimeMethod* method) 
{
	{
		// public static implicit operator string(WitEntityData data) => data.value;
		WitEntityData_t3814C265B1FEF49FEBAD433FB102049418BB736B* L_0 = ___data0;
		NullCheck(L_0);
		String_t* L_1 = ((WitEntityDataBase_1_t76EEB2E002923316F752746DDB37569F5D39FEB4*)L_0)->___value_8;
		return L_1;
	}
}
// System.Boolean Meta.WitAi.Data.Entities.WitEntityData::op_Equality(Meta.WitAi.Data.Entities.WitEntityData,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WitEntityData_op_Equality_m877FFBF94620C4EB079127C26F5275BBF0F540AD (WitEntityData_t3814C265B1FEF49FEBAD433FB102049418BB736B* ___data0, RuntimeObject* ___value1, const RuntimeMethod* method) 
{
	String_t* G_B3_0 = NULL;
	{
		// public static bool operator ==(WitEntityData data, object value) => Equals(data?.value, value);
		WitEntityData_t3814C265B1FEF49FEBAD433FB102049418BB736B* L_0 = ___data0;
		if (L_0)
		{
			goto IL_0006;
		}
	}
	{
		G_B3_0 = ((String_t*)(NULL));
		goto IL_000c;
	}

IL_0006:
	{
		WitEntityData_t3814C265B1FEF49FEBAD433FB102049418BB736B* L_1 = ___data0;
		NullCheck(L_1);
		String_t* L_2 = ((WitEntityDataBase_1_t76EEB2E002923316F752746DDB37569F5D39FEB4*)L_1)->___value_8;
		G_B3_0 = L_2;
	}

IL_000c:
	{
		RuntimeObject* L_3 = ___value1;
		bool L_4;
		L_4 = Object_Equals_m434DF93FDA204D5C06E889A9CB53BC2E5D39ABF7(G_B3_0, L_3, NULL);
		return L_4;
	}
}
// System.Boolean Meta.WitAi.Data.Entities.WitEntityData::op_Inequality(Meta.WitAi.Data.Entities.WitEntityData,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WitEntityData_op_Inequality_m55449D5F2025E379D3490FC2D0FE1AF172A41657 (WitEntityData_t3814C265B1FEF49FEBAD433FB102049418BB736B* ___data0, RuntimeObject* ___value1, const RuntimeMethod* method) 
{
	String_t* G_B3_0 = NULL;
	{
		// public static bool operator !=(WitEntityData data, object value) => !Equals(data?.value, value);
		WitEntityData_t3814C265B1FEF49FEBAD433FB102049418BB736B* L_0 = ___data0;
		if (L_0)
		{
			goto IL_0006;
		}
	}
	{
		G_B3_0 = ((String_t*)(NULL));
		goto IL_000c;
	}

IL_0006:
	{
		WitEntityData_t3814C265B1FEF49FEBAD433FB102049418BB736B* L_1 = ___data0;
		NullCheck(L_1);
		String_t* L_2 = ((WitEntityDataBase_1_t76EEB2E002923316F752746DDB37569F5D39FEB4*)L_1)->___value_8;
		G_B3_0 = L_2;
	}

IL_000c:
	{
		RuntimeObject* L_3 = ___value1;
		bool L_4;
		L_4 = Object_Equals_m434DF93FDA204D5C06E889A9CB53BC2E5D39ABF7(G_B3_0, L_3, NULL);
		return (bool)((((int32_t)L_4) == ((int32_t)0))? 1 : 0);
	}
}
// System.Boolean Meta.WitAi.Data.Entities.WitEntityData::Equals(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WitEntityData_Equals_m7166F48BDCA468DB6DE9231CE70FF73C6D0F8220 (WitEntityData_t3814C265B1FEF49FEBAD433FB102049418BB736B* __this, RuntimeObject* ___obj0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	bool V_1 = false;
	bool V_2 = false;
	{
		// if (obj is string s) return s == value;
		RuntimeObject* L_0 = ___obj0;
		V_0 = ((String_t*)IsInstSealed((RuntimeObject*)L_0, String_t_il2cpp_TypeInfo_var));
		String_t* L_1 = V_0;
		V_1 = (bool)((!(((RuntimeObject*)(String_t*)L_1) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		bool L_2 = V_1;
		if (!L_2)
		{
			goto IL_001f;
		}
	}
	{
		// if (obj is string s) return s == value;
		String_t* L_3 = V_0;
		String_t* L_4 = ((WitEntityDataBase_1_t76EEB2E002923316F752746DDB37569F5D39FEB4*)__this)->___value_8;
		bool L_5;
		L_5 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_3, L_4, NULL);
		V_2 = L_5;
		goto IL_0029;
	}

IL_001f:
	{
		// return base.Equals(obj);
		RuntimeObject* L_6 = ___obj0;
		bool L_7;
		L_7 = Object_Equals_m07105C4585D3FE204F2A80D58523D001DC43F63B(__this, L_6, NULL);
		V_2 = L_7;
		goto IL_0029;
	}

IL_0029:
	{
		// }
		bool L_8 = V_2;
		return L_8;
	}
}
// System.Int32 Meta.WitAi.Data.Entities.WitEntityData::GetHashCode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t WitEntityData_GetHashCode_m5281E85F460F5B200F3C8D831D1ABB37D7A0FAB8 (WitEntityData_t3814C265B1FEF49FEBAD433FB102049418BB736B* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		// return base.GetHashCode();
		int32_t L_0;
		L_0 = Object_GetHashCode_m372C5A7AB16CAC13307C11C4256D706CE57E090C(__this, NULL);
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		// }
		int32_t L_1 = V_0;
		return L_1;
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
// System.Void Meta.WitAi.Data.Entities.WitEntityFloatData::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WitEntityFloatData__ctor_m53756D5DEC028BB909A00DEBA4730AE9B60146A0 (WitEntityFloatData_t102A2BB5C9BCA8A0FEA4D3CC3F9D8B83AE31CCB8* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WitEntityDataBase_1__ctor_m02EB7DBBEE819293BC6F42383C89E3CABC514E3F_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public WitEntityFloatData() {}
		WitEntityDataBase_1__ctor_m02EB7DBBEE819293BC6F42383C89E3CABC514E3F(__this, WitEntityDataBase_1__ctor_m02EB7DBBEE819293BC6F42383C89E3CABC514E3F_RuntimeMethod_var);
		// public WitEntityFloatData() {}
		return;
	}
}
// System.Void Meta.WitAi.Data.Entities.WitEntityFloatData::.ctor(Meta.WitAi.Json.WitResponseNode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WitEntityFloatData__ctor_m00100779B3A814A136389B06171048AE41A4A7D9 (WitEntityFloatData_t102A2BB5C9BCA8A0FEA4D3CC3F9D8B83AE31CCB8* __this, WitResponseNode_t1BFF810F15B21416F5F6D0A1CAAF03CEF942038C* ___node0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WitEntityDataBase_1_FromEntityWitResponseNode_m697E7D61EF38859B86A67FAC7B6062E20F5C91B0_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WitEntityDataBase_1__ctor_m02EB7DBBEE819293BC6F42383C89E3CABC514E3F_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public WitEntityFloatData(WitResponseNode node)
		WitEntityDataBase_1__ctor_m02EB7DBBEE819293BC6F42383C89E3CABC514E3F(__this, WitEntityDataBase_1__ctor_m02EB7DBBEE819293BC6F42383C89E3CABC514E3F_RuntimeMethod_var);
		// FromEntityWitResponseNode(node);
		WitResponseNode_t1BFF810F15B21416F5F6D0A1CAAF03CEF942038C* L_0 = ___node0;
		WitEntityDataBase_1_t90E9F0FB214EED844AD8DD1A97EA3C1FD1EED960* L_1;
		L_1 = WitEntityDataBase_1_FromEntityWitResponseNode_m697E7D61EF38859B86A67FAC7B6062E20F5C91B0(__this, L_0, WitEntityDataBase_1_FromEntityWitResponseNode_m697E7D61EF38859B86A67FAC7B6062E20F5C91B0_RuntimeMethod_var);
		// }
		return;
	}
}
// System.Boolean Meta.WitAi.Data.Entities.WitEntityFloatData::op_Implicit(Meta.WitAi.Data.Entities.WitEntityFloatData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WitEntityFloatData_op_Implicit_mA7E3F7CBFB8245412B48F58DF8EB0C5CE89E5A2E (WitEntityFloatData_t102A2BB5C9BCA8A0FEA4D3CC3F9D8B83AE31CCB8* ___data0, const RuntimeMethod* method) 
{
	int32_t G_B3_0 = 0;
	{
		// null != data && data.hasData;
		WitEntityFloatData_t102A2BB5C9BCA8A0FEA4D3CC3F9D8B83AE31CCB8* L_0 = ___data0;
		if (!L_0)
		{
			goto IL_000b;
		}
	}
	{
		WitEntityFloatData_t102A2BB5C9BCA8A0FEA4D3CC3F9D8B83AE31CCB8* L_1 = ___data0;
		NullCheck(L_1);
		bool L_2 = ((WitEntityDataBase_1_t90E9F0FB214EED844AD8DD1A97EA3C1FD1EED960*)L_1)->___hasData_10;
		G_B3_0 = ((int32_t)(L_2));
		goto IL_000c;
	}

IL_000b:
	{
		G_B3_0 = 0;
	}

IL_000c:
	{
		return (bool)G_B3_0;
	}
}
// System.Boolean Meta.WitAi.Data.Entities.WitEntityFloatData::Approximately(System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WitEntityFloatData_Approximately_m7DDD2B08CD75EFA83FD4C834E7E65C2526A799A9 (WitEntityFloatData_t102A2BB5C9BCA8A0FEA4D3CC3F9D8B83AE31CCB8* __this, float ___v0, float ___tolerance1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public bool Approximately(float v, float tolerance = .001f) => Math.Abs(v - value) < tolerance;
		float L_0 = ___v0;
		float L_1 = ((WitEntityDataBase_1_t90E9F0FB214EED844AD8DD1A97EA3C1FD1EED960*)__this)->___value_8;
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		float L_2;
		L_2 = fabsf(((float)il2cpp_codegen_subtract(L_0, L_1)));
		float L_3 = ___tolerance1;
		return (bool)((((float)L_2) < ((float)L_3))? 1 : 0);
	}
}
// System.Boolean Meta.WitAi.Data.Entities.WitEntityFloatData::op_Equality(Meta.WitAi.Data.Entities.WitEntityFloatData,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WitEntityFloatData_op_Equality_m90CA170239EDBE24601DAB7C5CE1AEEF3929D6CC (WitEntityFloatData_t102A2BB5C9BCA8A0FEA4D3CC3F9D8B83AE31CCB8* ___data0, float ___value1, const RuntimeMethod* method) 
{
	int32_t G_B3_0 = 0;
	{
		// public static bool operator ==(WitEntityFloatData data, float value) => data?.value == value;
		WitEntityFloatData_t102A2BB5C9BCA8A0FEA4D3CC3F9D8B83AE31CCB8* L_0 = ___data0;
		if (L_0)
		{
			goto IL_0006;
		}
	}
	{
		G_B3_0 = 0;
		goto IL_000f;
	}

IL_0006:
	{
		WitEntityFloatData_t102A2BB5C9BCA8A0FEA4D3CC3F9D8B83AE31CCB8* L_1 = ___data0;
		NullCheck(L_1);
		float L_2 = ((WitEntityDataBase_1_t90E9F0FB214EED844AD8DD1A97EA3C1FD1EED960*)L_1)->___value_8;
		float L_3 = ___value1;
		G_B3_0 = ((((float)L_2) == ((float)L_3))? 1 : 0);
	}

IL_000f:
	{
		return (bool)G_B3_0;
	}
}
// System.Boolean Meta.WitAi.Data.Entities.WitEntityFloatData::op_Inequality(Meta.WitAi.Data.Entities.WitEntityFloatData,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WitEntityFloatData_op_Inequality_mF7146BC1EF07043C5EF2A4EEB799F165DAF4C67A (WitEntityFloatData_t102A2BB5C9BCA8A0FEA4D3CC3F9D8B83AE31CCB8* ___data0, float ___value1, const RuntimeMethod* method) 
{
	{
		// public static bool operator !=(WitEntityFloatData data, float value) => !(data == value);
		WitEntityFloatData_t102A2BB5C9BCA8A0FEA4D3CC3F9D8B83AE31CCB8* L_0 = ___data0;
		float L_1 = ___value1;
		bool L_2;
		L_2 = WitEntityFloatData_op_Equality_m90CA170239EDBE24601DAB7C5CE1AEEF3929D6CC(L_0, L_1, NULL);
		return (bool)((((int32_t)L_2) == ((int32_t)0))? 1 : 0);
	}
}
// System.Boolean Meta.WitAi.Data.Entities.WitEntityFloatData::op_Equality(Meta.WitAi.Data.Entities.WitEntityFloatData,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WitEntityFloatData_op_Equality_mD341BBB15F3074BAB5EBEBAB68F8D7DF9F6BD17F (WitEntityFloatData_t102A2BB5C9BCA8A0FEA4D3CC3F9D8B83AE31CCB8* ___data0, int32_t ___value1, const RuntimeMethod* method) 
{
	int32_t G_B3_0 = 0;
	{
		// public static bool operator ==(WitEntityFloatData data, int value) => data?.value == value;
		WitEntityFloatData_t102A2BB5C9BCA8A0FEA4D3CC3F9D8B83AE31CCB8* L_0 = ___data0;
		if (L_0)
		{
			goto IL_0006;
		}
	}
	{
		G_B3_0 = 0;
		goto IL_0010;
	}

IL_0006:
	{
		WitEntityFloatData_t102A2BB5C9BCA8A0FEA4D3CC3F9D8B83AE31CCB8* L_1 = ___data0;
		NullCheck(L_1);
		float L_2 = ((WitEntityDataBase_1_t90E9F0FB214EED844AD8DD1A97EA3C1FD1EED960*)L_1)->___value_8;
		int32_t L_3 = ___value1;
		G_B3_0 = ((((float)L_2) == ((float)((float)L_3)))? 1 : 0);
	}

IL_0010:
	{
		return (bool)G_B3_0;
	}
}
// System.Boolean Meta.WitAi.Data.Entities.WitEntityFloatData::op_Inequality(Meta.WitAi.Data.Entities.WitEntityFloatData,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WitEntityFloatData_op_Inequality_m0C5041BEF42206537467113A569E026462428A86 (WitEntityFloatData_t102A2BB5C9BCA8A0FEA4D3CC3F9D8B83AE31CCB8* ___data0, int32_t ___value1, const RuntimeMethod* method) 
{
	{
		// public static bool operator !=(WitEntityFloatData data, int value) => !(data == value);
		WitEntityFloatData_t102A2BB5C9BCA8A0FEA4D3CC3F9D8B83AE31CCB8* L_0 = ___data0;
		int32_t L_1 = ___value1;
		bool L_2;
		L_2 = WitEntityFloatData_op_Equality_mD341BBB15F3074BAB5EBEBAB68F8D7DF9F6BD17F(L_0, L_1, NULL);
		return (bool)((((int32_t)L_2) == ((int32_t)0))? 1 : 0);
	}
}
// System.Boolean Meta.WitAi.Data.Entities.WitEntityFloatData::op_Equality(System.Single,Meta.WitAi.Data.Entities.WitEntityFloatData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WitEntityFloatData_op_Equality_m8CD8562B2EB29689B014793B094ED64D1E1EA7C1 (float ___value0, WitEntityFloatData_t102A2BB5C9BCA8A0FEA4D3CC3F9D8B83AE31CCB8* ___data1, const RuntimeMethod* method) 
{
	int32_t G_B3_0 = 0;
	{
		// public static bool operator ==(float value, WitEntityFloatData data) => data?.value == value;
		WitEntityFloatData_t102A2BB5C9BCA8A0FEA4D3CC3F9D8B83AE31CCB8* L_0 = ___data1;
		if (L_0)
		{
			goto IL_0006;
		}
	}
	{
		G_B3_0 = 0;
		goto IL_000f;
	}

IL_0006:
	{
		WitEntityFloatData_t102A2BB5C9BCA8A0FEA4D3CC3F9D8B83AE31CCB8* L_1 = ___data1;
		NullCheck(L_1);
		float L_2 = ((WitEntityDataBase_1_t90E9F0FB214EED844AD8DD1A97EA3C1FD1EED960*)L_1)->___value_8;
		float L_3 = ___value0;
		G_B3_0 = ((((float)L_2) == ((float)L_3))? 1 : 0);
	}

IL_000f:
	{
		return (bool)G_B3_0;
	}
}
// System.Boolean Meta.WitAi.Data.Entities.WitEntityFloatData::op_Inequality(System.Single,Meta.WitAi.Data.Entities.WitEntityFloatData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WitEntityFloatData_op_Inequality_m8CC53B23FE362F5FB8DC8A5550669C3DAE557C50 (float ___value0, WitEntityFloatData_t102A2BB5C9BCA8A0FEA4D3CC3F9D8B83AE31CCB8* ___data1, const RuntimeMethod* method) 
{
	{
		// public static bool operator !=(float value, WitEntityFloatData data) => !(data == value);
		WitEntityFloatData_t102A2BB5C9BCA8A0FEA4D3CC3F9D8B83AE31CCB8* L_0 = ___data1;
		float L_1 = ___value0;
		bool L_2;
		L_2 = WitEntityFloatData_op_Equality_m90CA170239EDBE24601DAB7C5CE1AEEF3929D6CC(L_0, L_1, NULL);
		return (bool)((((int32_t)L_2) == ((int32_t)0))? 1 : 0);
	}
}
// System.Boolean Meta.WitAi.Data.Entities.WitEntityFloatData::op_Equality(System.Int32,Meta.WitAi.Data.Entities.WitEntityFloatData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WitEntityFloatData_op_Equality_m0E31EEA895FCDD849DD115D639909B6B049054B6 (int32_t ___value0, WitEntityFloatData_t102A2BB5C9BCA8A0FEA4D3CC3F9D8B83AE31CCB8* ___data1, const RuntimeMethod* method) 
{
	int32_t G_B3_0 = 0;
	{
		// public static bool operator ==(int value, WitEntityFloatData data) => data?.value == value;
		WitEntityFloatData_t102A2BB5C9BCA8A0FEA4D3CC3F9D8B83AE31CCB8* L_0 = ___data1;
		if (L_0)
		{
			goto IL_0006;
		}
	}
	{
		G_B3_0 = 0;
		goto IL_0010;
	}

IL_0006:
	{
		WitEntityFloatData_t102A2BB5C9BCA8A0FEA4D3CC3F9D8B83AE31CCB8* L_1 = ___data1;
		NullCheck(L_1);
		float L_2 = ((WitEntityDataBase_1_t90E9F0FB214EED844AD8DD1A97EA3C1FD1EED960*)L_1)->___value_8;
		int32_t L_3 = ___value0;
		G_B3_0 = ((((float)L_2) == ((float)((float)L_3)))? 1 : 0);
	}

IL_0010:
	{
		return (bool)G_B3_0;
	}
}
// System.Boolean Meta.WitAi.Data.Entities.WitEntityFloatData::op_Inequality(System.Int32,Meta.WitAi.Data.Entities.WitEntityFloatData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WitEntityFloatData_op_Inequality_m47CFC533FD93E448938B5358AFD7A6748BD1A2ED (int32_t ___value0, WitEntityFloatData_t102A2BB5C9BCA8A0FEA4D3CC3F9D8B83AE31CCB8* ___data1, const RuntimeMethod* method) 
{
	{
		// public static bool operator !=(int value, WitEntityFloatData data) => !(data == value);
		WitEntityFloatData_t102A2BB5C9BCA8A0FEA4D3CC3F9D8B83AE31CCB8* L_0 = ___data1;
		int32_t L_1 = ___value0;
		bool L_2;
		L_2 = WitEntityFloatData_op_Equality_mD341BBB15F3074BAB5EBEBAB68F8D7DF9F6BD17F(L_0, L_1, NULL);
		return (bool)((((int32_t)L_2) == ((int32_t)0))? 1 : 0);
	}
}
// System.Boolean Meta.WitAi.Data.Entities.WitEntityFloatData::Equals(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WitEntityFloatData_Equals_m902C004A5959B44F61F28A01F587D76DAD99E98D (WitEntityFloatData_t102A2BB5C9BCA8A0FEA4D3CC3F9D8B83AE31CCB8* __this, RuntimeObject* ___obj0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	bool V_1 = false;
	bool V_2 = false;
	int32_t G_B3_0 = 0;
	{
		// if (obj is float f) return f == value;
		RuntimeObject* L_0 = ___obj0;
		if (!((RuntimeObject*)IsInstSealed((RuntimeObject*)L_0, Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_il2cpp_TypeInfo_var)))
		{
			goto IL_0013;
		}
	}
	{
		RuntimeObject* L_1 = ___obj0;
		V_0 = ((*(float*)((float*)(float*)UnBox(L_1, Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_il2cpp_TypeInfo_var))));
		G_B3_0 = 1;
		goto IL_0014;
	}

IL_0013:
	{
		G_B3_0 = 0;
	}

IL_0014:
	{
		V_1 = (bool)G_B3_0;
		bool L_2 = V_1;
		if (!L_2)
		{
			goto IL_0024;
		}
	}
	{
		// if (obj is float f) return f == value;
		float L_3 = V_0;
		float L_4 = ((WitEntityDataBase_1_t90E9F0FB214EED844AD8DD1A97EA3C1FD1EED960*)__this)->___value_8;
		V_2 = (bool)((((float)L_3) == ((float)L_4))? 1 : 0);
		goto IL_002e;
	}

IL_0024:
	{
		// return base.Equals(obj);
		RuntimeObject* L_5 = ___obj0;
		bool L_6;
		L_6 = Object_Equals_m07105C4585D3FE204F2A80D58523D001DC43F63B(__this, L_5, NULL);
		V_2 = L_6;
		goto IL_002e;
	}

IL_002e:
	{
		// }
		bool L_7 = V_2;
		return L_7;
	}
}
// System.Int32 Meta.WitAi.Data.Entities.WitEntityFloatData::GetHashCode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t WitEntityFloatData_GetHashCode_m33671ACF7634FE16AEBB1D3E000D8ACFBF41F040 (WitEntityFloatData_t102A2BB5C9BCA8A0FEA4D3CC3F9D8B83AE31CCB8* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		// return base.GetHashCode();
		int32_t L_0;
		L_0 = Object_GetHashCode_m372C5A7AB16CAC13307C11C4256D706CE57E090C(__this, NULL);
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		// }
		int32_t L_1 = V_0;
		return L_1;
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
// System.Void Meta.WitAi.Data.Entities.WitEntityIntData::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WitEntityIntData__ctor_m5CC79C1DBC589C765FCEDB7C7954A23A50CA7AD6 (WitEntityIntData_t25F04B7F8B86E577ED2F1C8CA31E13A827F9CB3C* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WitEntityDataBase_1__ctor_m47659B0D37AAA587A516AB8F63573058A00A225D_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public WitEntityIntData() {}
		WitEntityDataBase_1__ctor_m47659B0D37AAA587A516AB8F63573058A00A225D(__this, WitEntityDataBase_1__ctor_m47659B0D37AAA587A516AB8F63573058A00A225D_RuntimeMethod_var);
		// public WitEntityIntData() {}
		return;
	}
}
// System.Void Meta.WitAi.Data.Entities.WitEntityIntData::.ctor(Meta.WitAi.Json.WitResponseNode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WitEntityIntData__ctor_mE13B7B014816D3A18F3A025D994949EF43D4F3D8 (WitEntityIntData_t25F04B7F8B86E577ED2F1C8CA31E13A827F9CB3C* __this, WitResponseNode_t1BFF810F15B21416F5F6D0A1CAAF03CEF942038C* ___node0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WitEntityDataBase_1_FromEntityWitResponseNode_m0AACEFF9E3C6FEA0A185EA5A1B1B4EF5FB491FBB_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WitEntityDataBase_1__ctor_m47659B0D37AAA587A516AB8F63573058A00A225D_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public WitEntityIntData(WitResponseNode node)
		WitEntityDataBase_1__ctor_m47659B0D37AAA587A516AB8F63573058A00A225D(__this, WitEntityDataBase_1__ctor_m47659B0D37AAA587A516AB8F63573058A00A225D_RuntimeMethod_var);
		// FromEntityWitResponseNode(node);
		WitResponseNode_t1BFF810F15B21416F5F6D0A1CAAF03CEF942038C* L_0 = ___node0;
		WitEntityDataBase_1_t46F92AF5EC7866816B6CD6D417773D4FFE270507* L_1;
		L_1 = WitEntityDataBase_1_FromEntityWitResponseNode_m0AACEFF9E3C6FEA0A185EA5A1B1B4EF5FB491FBB(__this, L_0, WitEntityDataBase_1_FromEntityWitResponseNode_m0AACEFF9E3C6FEA0A185EA5A1B1B4EF5FB491FBB_RuntimeMethod_var);
		// }
		return;
	}
}
// System.Boolean Meta.WitAi.Data.Entities.WitEntityIntData::op_Implicit(Meta.WitAi.Data.Entities.WitEntityIntData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WitEntityIntData_op_Implicit_mDC899683B1383B507B9528BA674AFEC3E8F2E423 (WitEntityIntData_t25F04B7F8B86E577ED2F1C8CA31E13A827F9CB3C* ___data0, const RuntimeMethod* method) 
{
	int32_t G_B3_0 = 0;
	{
		// null != data && data.hasData;
		WitEntityIntData_t25F04B7F8B86E577ED2F1C8CA31E13A827F9CB3C* L_0 = ___data0;
		if (!L_0)
		{
			goto IL_000b;
		}
	}
	{
		WitEntityIntData_t25F04B7F8B86E577ED2F1C8CA31E13A827F9CB3C* L_1 = ___data0;
		NullCheck(L_1);
		bool L_2 = ((WitEntityDataBase_1_t46F92AF5EC7866816B6CD6D417773D4FFE270507*)L_1)->___hasData_10;
		G_B3_0 = ((int32_t)(L_2));
		goto IL_000c;
	}

IL_000b:
	{
		G_B3_0 = 0;
	}

IL_000c:
	{
		return (bool)G_B3_0;
	}
}
// System.Boolean Meta.WitAi.Data.Entities.WitEntityIntData::op_Equality(Meta.WitAi.Data.Entities.WitEntityIntData,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WitEntityIntData_op_Equality_mD3AA460E9E6F75CB6C5570673F1C168915895B3A (WitEntityIntData_t25F04B7F8B86E577ED2F1C8CA31E13A827F9CB3C* ___data0, int32_t ___value1, const RuntimeMethod* method) 
{
	int32_t G_B3_0 = 0;
	{
		// public static bool operator ==(WitEntityIntData data, int value) => data?.value == value;
		WitEntityIntData_t25F04B7F8B86E577ED2F1C8CA31E13A827F9CB3C* L_0 = ___data0;
		if (L_0)
		{
			goto IL_0006;
		}
	}
	{
		G_B3_0 = 0;
		goto IL_000f;
	}

IL_0006:
	{
		WitEntityIntData_t25F04B7F8B86E577ED2F1C8CA31E13A827F9CB3C* L_1 = ___data0;
		NullCheck(L_1);
		int32_t L_2 = ((WitEntityDataBase_1_t46F92AF5EC7866816B6CD6D417773D4FFE270507*)L_1)->___value_8;
		int32_t L_3 = ___value1;
		G_B3_0 = ((((int32_t)L_2) == ((int32_t)L_3))? 1 : 0);
	}

IL_000f:
	{
		return (bool)G_B3_0;
	}
}
// System.Boolean Meta.WitAi.Data.Entities.WitEntityIntData::op_Inequality(Meta.WitAi.Data.Entities.WitEntityIntData,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WitEntityIntData_op_Inequality_m2872D4C47512CB1933FCF7D96544908107AF5D80 (WitEntityIntData_t25F04B7F8B86E577ED2F1C8CA31E13A827F9CB3C* ___data0, int32_t ___value1, const RuntimeMethod* method) 
{
	{
		// public static bool operator !=(WitEntityIntData data, int value) => !(data == value);
		WitEntityIntData_t25F04B7F8B86E577ED2F1C8CA31E13A827F9CB3C* L_0 = ___data0;
		int32_t L_1 = ___value1;
		bool L_2;
		L_2 = WitEntityIntData_op_Equality_mD3AA460E9E6F75CB6C5570673F1C168915895B3A(L_0, L_1, NULL);
		return (bool)((((int32_t)L_2) == ((int32_t)0))? 1 : 0);
	}
}
// System.Boolean Meta.WitAi.Data.Entities.WitEntityIntData::op_Equality(System.Int32,Meta.WitAi.Data.Entities.WitEntityIntData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WitEntityIntData_op_Equality_mA7F6196AFAA0F52AB34C4AEB8A18AEC7F1C198A6 (int32_t ___value0, WitEntityIntData_t25F04B7F8B86E577ED2F1C8CA31E13A827F9CB3C* ___data1, const RuntimeMethod* method) 
{
	int32_t G_B3_0 = 0;
	{
		// public static bool operator ==(int value, WitEntityIntData data) => data?.value == value;
		WitEntityIntData_t25F04B7F8B86E577ED2F1C8CA31E13A827F9CB3C* L_0 = ___data1;
		if (L_0)
		{
			goto IL_0006;
		}
	}
	{
		G_B3_0 = 0;
		goto IL_000f;
	}

IL_0006:
	{
		WitEntityIntData_t25F04B7F8B86E577ED2F1C8CA31E13A827F9CB3C* L_1 = ___data1;
		NullCheck(L_1);
		int32_t L_2 = ((WitEntityDataBase_1_t46F92AF5EC7866816B6CD6D417773D4FFE270507*)L_1)->___value_8;
		int32_t L_3 = ___value0;
		G_B3_0 = ((((int32_t)L_2) == ((int32_t)L_3))? 1 : 0);
	}

IL_000f:
	{
		return (bool)G_B3_0;
	}
}
// System.Boolean Meta.WitAi.Data.Entities.WitEntityIntData::op_Inequality(System.Int32,Meta.WitAi.Data.Entities.WitEntityIntData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WitEntityIntData_op_Inequality_mED238A694220036BAF3A5551CC93815E932DA6E2 (int32_t ___value0, WitEntityIntData_t25F04B7F8B86E577ED2F1C8CA31E13A827F9CB3C* ___data1, const RuntimeMethod* method) 
{
	{
		// public static bool operator !=(int value, WitEntityIntData data) => !(data == value);
		WitEntityIntData_t25F04B7F8B86E577ED2F1C8CA31E13A827F9CB3C* L_0 = ___data1;
		int32_t L_1 = ___value0;
		bool L_2;
		L_2 = WitEntityIntData_op_Equality_mD3AA460E9E6F75CB6C5570673F1C168915895B3A(L_0, L_1, NULL);
		return (bool)((((int32_t)L_2) == ((int32_t)0))? 1 : 0);
	}
}
// System.Boolean Meta.WitAi.Data.Entities.WitEntityIntData::Equals(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WitEntityIntData_Equals_m13EE815AB437EEDD9640744A6F4B2E99877507E0 (WitEntityIntData_t25F04B7F8B86E577ED2F1C8CA31E13A827F9CB3C* __this, RuntimeObject* ___obj0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	bool V_1 = false;
	bool V_2 = false;
	int32_t G_B3_0 = 0;
	{
		// if (obj is int i) return i == value;
		RuntimeObject* L_0 = ___obj0;
		if (!((RuntimeObject*)IsInstSealed((RuntimeObject*)L_0, Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var)))
		{
			goto IL_0013;
		}
	}
	{
		RuntimeObject* L_1 = ___obj0;
		V_0 = ((*(int32_t*)((int32_t*)(int32_t*)UnBox(L_1, Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var))));
		G_B3_0 = 1;
		goto IL_0014;
	}

IL_0013:
	{
		G_B3_0 = 0;
	}

IL_0014:
	{
		V_1 = (bool)G_B3_0;
		bool L_2 = V_1;
		if (!L_2)
		{
			goto IL_0024;
		}
	}
	{
		// if (obj is int i) return i == value;
		int32_t L_3 = V_0;
		int32_t L_4 = ((WitEntityDataBase_1_t46F92AF5EC7866816B6CD6D417773D4FFE270507*)__this)->___value_8;
		V_2 = (bool)((((int32_t)L_3) == ((int32_t)L_4))? 1 : 0);
		goto IL_002e;
	}

IL_0024:
	{
		// return base.Equals(obj);
		RuntimeObject* L_5 = ___obj0;
		bool L_6;
		L_6 = Object_Equals_m07105C4585D3FE204F2A80D58523D001DC43F63B(__this, L_5, NULL);
		V_2 = L_6;
		goto IL_002e;
	}

IL_002e:
	{
		// }
		bool L_7 = V_2;
		return L_7;
	}
}
// System.Int32 Meta.WitAi.Data.Entities.WitEntityIntData::GetHashCode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t WitEntityIntData_GetHashCode_m211CC04167F2DC2321B64F07975EECBB8DDA2B40 (WitEntityIntData_t25F04B7F8B86E577ED2F1C8CA31E13A827F9CB3C* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		// return base.GetHashCode();
		int32_t L_0;
		L_0 = Object_GetHashCode_m372C5A7AB16CAC13307C11C4256D706CE57E090C(__this, NULL);
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		// }
		int32_t L_1 = V_0;
		return L_1;
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
// Meta.WitAi.Data.Entities.WitDynamicEntities Meta.WitAi.Data.Entities.WitSimpleDynamicEntity::GetDynamicEntities()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR WitDynamicEntities_t122029C03796D5F75B696CA70D8083DA16E33E38* WitSimpleDynamicEntity_GetDynamicEntities_mA07B170F7F57E513F38146962F09F746342A7D88 (WitSimpleDynamicEntity_t936086F8CD53DE1BABD07C5133D814C5DD1937F1* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WitDynamicEntities_t122029C03796D5F75B696CA70D8083DA16E33E38_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WitDynamicEntityU5BU5D_tAF932D5132E6589F964FB76D2FB82BFA9E0EDB7F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WitDynamicEntity_tE0824DEF90E6E8AA7D10CC0A6892B4C1018DE2B4_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	WitDynamicEntity_tE0824DEF90E6E8AA7D10CC0A6892B4C1018DE2B4* V_0 = NULL;
	WitDynamicEntities_t122029C03796D5F75B696CA70D8083DA16E33E38* V_1 = NULL;
	WitDynamicEntities_t122029C03796D5F75B696CA70D8083DA16E33E38* V_2 = NULL;
	{
		// var entity = new WitDynamicEntity(entityName, keywords);
		String_t* L_0 = __this->___entityName_4;
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_1 = __this->___keywords_5;
		WitDynamicEntity_tE0824DEF90E6E8AA7D10CC0A6892B4C1018DE2B4* L_2 = (WitDynamicEntity_tE0824DEF90E6E8AA7D10CC0A6892B4C1018DE2B4*)il2cpp_codegen_object_new(WitDynamicEntity_tE0824DEF90E6E8AA7D10CC0A6892B4C1018DE2B4_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		WitDynamicEntity__ctor_m0CA7E7E8120B52275414FD0AA60C03918C1BDB58(L_2, L_0, L_1, NULL);
		V_0 = L_2;
		// var entities = new WitDynamicEntities(entity);
		WitDynamicEntityU5BU5D_tAF932D5132E6589F964FB76D2FB82BFA9E0EDB7F* L_3 = (WitDynamicEntityU5BU5D_tAF932D5132E6589F964FB76D2FB82BFA9E0EDB7F*)(WitDynamicEntityU5BU5D_tAF932D5132E6589F964FB76D2FB82BFA9E0EDB7F*)SZArrayNew(WitDynamicEntityU5BU5D_tAF932D5132E6589F964FB76D2FB82BFA9E0EDB7F_il2cpp_TypeInfo_var, (uint32_t)1);
		WitDynamicEntityU5BU5D_tAF932D5132E6589F964FB76D2FB82BFA9E0EDB7F* L_4 = L_3;
		WitDynamicEntity_tE0824DEF90E6E8AA7D10CC0A6892B4C1018DE2B4* L_5 = V_0;
		NullCheck(L_4);
		ArrayElementTypeCheck (L_4, L_5);
		(L_4)->SetAt(static_cast<il2cpp_array_size_t>(0), (WitDynamicEntity_tE0824DEF90E6E8AA7D10CC0A6892B4C1018DE2B4*)L_5);
		WitDynamicEntities_t122029C03796D5F75B696CA70D8083DA16E33E38* L_6 = (WitDynamicEntities_t122029C03796D5F75B696CA70D8083DA16E33E38*)il2cpp_codegen_object_new(WitDynamicEntities_t122029C03796D5F75B696CA70D8083DA16E33E38_il2cpp_TypeInfo_var);
		NullCheck(L_6);
		WitDynamicEntities__ctor_m7EFFDBF350D1BB930547DD8073093A2DF42D6AC7(L_6, L_4, NULL);
		V_1 = L_6;
		// return entities;
		WitDynamicEntities_t122029C03796D5F75B696CA70D8083DA16E33E38* L_7 = V_1;
		V_2 = L_7;
		goto IL_0027;
	}

IL_0027:
	{
		// }
		WitDynamicEntities_t122029C03796D5F75B696CA70D8083DA16E33E38* L_8 = V_2;
		return L_8;
	}
}
// System.Void Meta.WitAi.Data.Entities.WitSimpleDynamicEntity::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WitSimpleDynamicEntity__ctor_m2E77AC09DAB63D5291E39CDCA2BE243B3738C39F (WitSimpleDynamicEntity_t936086F8CD53DE1BABD07C5133D814C5DD1937F1* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
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
// System.String Meta.WitAi.Data.Configuration.WitConfiguration::get_ManifestLocalPath()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* WitConfiguration_get_ManifestLocalPath_m82FD26F09A51C2FF2FA8FD09BC8F61BE6588B799 (WitConfiguration_t85BCD6C826D35078E90334092184A53D1B69C72E* __this, const RuntimeMethod* method) 
{
	String_t* V_0 = NULL;
	{
		// return _manifestLocalPath;
		String_t* L_0 = __this->____manifestLocalPath_12;
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		// }
		String_t* L_1 = V_0;
		return L_1;
	}
}
// System.Void Meta.WitAi.Data.Configuration.WitConfiguration::ResetData()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WitConfiguration_ResetData_m18857D2ADA8777E1A18459BE1DCDEDC76F011A71 (WitConfiguration_t85BCD6C826D35078E90334092184A53D1B69C72E* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WitEndpointConfig_t7CCDA7CBBF1FDD2A7779DDF6745BAED47E69BB1D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// _configurationId = null;
		__this->____configurationId_7 = (String_t*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____configurationId_7), (void*)(String_t*)NULL);
		// _appInfo = new WitAppInfo();
		WitAppInfo_t172D41FCA64A8915FB21F90F2FD0A7639EB0C8D8* L_0 = (&__this->____appInfo_5);
		il2cpp_codegen_initobj(L_0, sizeof(WitAppInfo_t172D41FCA64A8915FB21F90F2FD0A7639EB0C8D8));
		// endpointConfiguration = new WitEndpointConfig();
		WitEndpointConfig_t7CCDA7CBBF1FDD2A7779DDF6745BAED47E69BB1D* L_1 = (WitEndpointConfig_t7CCDA7CBBF1FDD2A7779DDF6745BAED47E69BB1D*)il2cpp_codegen_object_new(WitEndpointConfig_t7CCDA7CBBF1FDD2A7779DDF6745BAED47E69BB1D_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		WitEndpointConfig__ctor_m732E92810A12A6690761C5B6E1A12C90F1569D12(L_1, NULL);
		__this->___endpointConfiguration_9 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___endpointConfiguration_9), (void*)L_1);
		// }
		return;
	}
}
// System.Void Meta.WitAi.Data.Configuration.WitConfiguration::UpdateDataAssets()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WitConfiguration_UpdateDataAssets_m3C88F4B949348419B8429488B3C7C66D5EF261D4 (WitConfiguration_t85BCD6C826D35078E90334092184A53D1B69C72E* __this, const RuntimeMethod* method) 
{
	WitConfigurationAssetDataU5BU5D_t700D5FE01B115D42C19FDAB600E6E52D045BAB9C* V_0 = NULL;
	int32_t V_1 = 0;
	WitConfigurationAssetData_t85BC866513E76C112B29F1EE070D1F062C84273A* V_2 = NULL;
	{
		// foreach (WitConfigurationAssetData data in _configData)
		WitConfigurationAssetDataU5BU5D_t700D5FE01B115D42C19FDAB600E6E52D045BAB9C* L_0 = __this->____configData_6;
		V_0 = L_0;
		V_1 = 0;
		goto IL_001f;
	}

IL_000d:
	{
		// foreach (WitConfigurationAssetData data in _configData)
		WitConfigurationAssetDataU5BU5D_t700D5FE01B115D42C19FDAB600E6E52D045BAB9C* L_1 = V_0;
		int32_t L_2 = V_1;
		NullCheck(L_1);
		int32_t L_3 = L_2;
		WitConfigurationAssetData_t85BC866513E76C112B29F1EE070D1F062C84273A* L_4 = (L_1)->GetAt(static_cast<il2cpp_array_size_t>(L_3));
		V_2 = L_4;
		// data.Refresh(this);
		WitConfigurationAssetData_t85BC866513E76C112B29F1EE070D1F062C84273A* L_5 = V_2;
		NullCheck(L_5);
		VirtualActionInvoker1< RuntimeObject* >::Invoke(4 /* System.Void Meta.WitAi.Data.Configuration.WitConfigurationAssetData::Refresh(Meta.WitAi.IWitRequestConfiguration) */, L_5, __this);
		int32_t L_6 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_6, 1));
	}

IL_001f:
	{
		// foreach (WitConfigurationAssetData data in _configData)
		int32_t L_7 = V_1;
		WitConfigurationAssetDataU5BU5D_t700D5FE01B115D42C19FDAB600E6E52D045BAB9C* L_8 = V_0;
		NullCheck(L_8);
		if ((((int32_t)L_7) < ((int32_t)((int32_t)(((RuntimeArray*)L_8)->max_length)))))
		{
			goto IL_000d;
		}
	}
	{
		// }
		return;
	}
}
// System.String Meta.WitAi.Data.Configuration.WitConfiguration::GetLoggerAppId()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* WitConfiguration_GetLoggerAppId_m320C33D2DC3EF5956C053F588C67CF7154F04728 (WitConfiguration_t85BCD6C826D35078E90334092184A53D1B69C72E* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral09D70245F3500CCD8237A0140F73164F286401D5);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral54B7CB83ADA12ACDA6A9603F52C4337EFF74DE53);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	bool V_1 = false;
	String_t* V_2 = NULL;
	bool V_3 = false;
	String_t* V_4 = NULL;
	{
		// string applicationId = GetApplicationId();
		String_t* L_0;
		L_0 = WitConfiguration_GetApplicationId_m9A06C8C514C88B5B1B783611EA60F6A7D8B80A65(__this, NULL);
		V_0 = L_0;
		// if (String.IsNullOrEmpty(applicationId))
		String_t* L_1 = V_0;
		bool L_2;
		L_2 = String_IsNullOrEmpty_mEA9E3FB005AC28FE02E69FCF95A7B8456192B478(L_1, NULL);
		V_1 = L_2;
		bool L_3 = V_1;
		if (!L_3)
		{
			goto IL_003a;
		}
	}
	{
		// string clientAccessToken = GetClientAccessToken();
		String_t* L_4;
		L_4 = WitConfiguration_GetClientAccessToken_m619DD2445232CA6A5C168763814741B3C75DCF47(__this, NULL);
		V_2 = L_4;
		// if (!string.IsNullOrEmpty(clientAccessToken))
		String_t* L_5 = V_2;
		bool L_6;
		L_6 = String_IsNullOrEmpty_mEA9E3FB005AC28FE02E69FCF95A7B8456192B478(L_5, NULL);
		V_3 = (bool)((((int32_t)L_6) == ((int32_t)0))? 1 : 0);
		bool L_7 = V_3;
		if (!L_7)
		{
			goto IL_0031;
		}
	}
	{
		// return INVALID_APP_ID_WITH_CLIENT_TOKEN;
		V_4 = _stringLiteral54B7CB83ADA12ACDA6A9603F52C4337EFF74DE53;
		goto IL_003f;
	}

IL_0031:
	{
		// return INVALID_APP_ID_NO_CLIENT_TOKEN;
		V_4 = _stringLiteral09D70245F3500CCD8237A0140F73164F286401D5;
		goto IL_003f;
	}

IL_003a:
	{
		// return applicationId;
		String_t* L_8 = V_0;
		V_4 = L_8;
		goto IL_003f;
	}

IL_003f:
	{
		// }
		String_t* L_9 = V_4;
		return L_9;
	}
}
// System.String Meta.WitAi.Data.Configuration.WitConfiguration::GetConfigurationId()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* WitConfiguration_GetConfigurationId_m59AD9B7FF6CA98BA466861967C7820DAD50EE6E2 (WitConfiguration_t85BCD6C826D35078E90334092184A53D1B69C72E* __this, const RuntimeMethod* method) 
{
	String_t* V_0 = NULL;
	{
		// return _configurationId;
		String_t* L_0 = __this->____configurationId_7;
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		// }
		String_t* L_1 = V_0;
		return L_1;
	}
}
// System.String Meta.WitAi.Data.Configuration.WitConfiguration::GetApplicationId()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* WitConfiguration_GetApplicationId_m9A06C8C514C88B5B1B783611EA60F6A7D8B80A65 (WitConfiguration_t85BCD6C826D35078E90334092184A53D1B69C72E* __this, const RuntimeMethod* method) 
{
	{
		// public string GetApplicationId() => _appInfo.id;
		WitAppInfo_t172D41FCA64A8915FB21F90F2FD0A7639EB0C8D8* L_0 = (&__this->____appInfo_5);
		String_t* L_1 = L_0->___id_1;
		return L_1;
	}
}
// Meta.WitAi.Data.Info.WitAppInfo Meta.WitAi.Data.Configuration.WitConfiguration::GetApplicationInfo()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR WitAppInfo_t172D41FCA64A8915FB21F90F2FD0A7639EB0C8D8 WitConfiguration_GetApplicationInfo_m0F8F809EBD0CE210AE0F1959AC0B1476EE6F9ED4 (WitConfiguration_t85BCD6C826D35078E90334092184A53D1B69C72E* __this, const RuntimeMethod* method) 
{
	{
		// public WitAppInfo GetApplicationInfo() => _appInfo;
		WitAppInfo_t172D41FCA64A8915FB21F90F2FD0A7639EB0C8D8 L_0 = __this->____appInfo_5;
		return L_0;
	}
}
// Meta.WitAi.Data.Configuration.WitConfigurationAssetData[] Meta.WitAi.Data.Configuration.WitConfiguration::GetConfigData()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR WitConfigurationAssetDataU5BU5D_t700D5FE01B115D42C19FDAB600E6E52D045BAB9C* WitConfiguration_GetConfigData_m69E9BDAF1FC556D926BA47CC5F04D287B742753C (WitConfiguration_t85BCD6C826D35078E90334092184A53D1B69C72E* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Array_Empty_TisWitConfigurationAssetData_t85BC866513E76C112B29F1EE070D1F062C84273A_m138630C81E2B640FF706E28F53711B37F639B010_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	WitConfigurationAssetDataU5BU5D_t700D5FE01B115D42C19FDAB600E6E52D045BAB9C* V_1 = NULL;
	{
		// if (_configData == null)
		WitConfigurationAssetDataU5BU5D_t700D5FE01B115D42C19FDAB600E6E52D045BAB9C* L_0 = __this->____configData_6;
		V_0 = (bool)((((RuntimeObject*)(WitConfigurationAssetDataU5BU5D_t700D5FE01B115D42C19FDAB600E6E52D045BAB9C*)L_0) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_001b;
		}
	}
	{
		// _configData = Array.Empty<WitConfigurationAssetData>();
		WitConfigurationAssetDataU5BU5D_t700D5FE01B115D42C19FDAB600E6E52D045BAB9C* L_2;
		L_2 = Array_Empty_TisWitConfigurationAssetData_t85BC866513E76C112B29F1EE070D1F062C84273A_m138630C81E2B640FF706E28F53711B37F639B010_inline(Array_Empty_TisWitConfigurationAssetData_t85BC866513E76C112B29F1EE070D1F062C84273A_m138630C81E2B640FF706E28F53711B37F639B010_RuntimeMethod_var);
		__this->____configData_6 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____configData_6), (void*)L_2);
	}

IL_001b:
	{
		// return _configData;
		WitConfigurationAssetDataU5BU5D_t700D5FE01B115D42C19FDAB600E6E52D045BAB9C* L_3 = __this->____configData_6;
		V_1 = L_3;
		goto IL_0024;
	}

IL_0024:
	{
		// }
		WitConfigurationAssetDataU5BU5D_t700D5FE01B115D42C19FDAB600E6E52D045BAB9C* L_4 = V_1;
		return L_4;
	}
}
// Meta.WitAi.IWitRequestEndpointInfo Meta.WitAi.Data.Configuration.WitConfiguration::GetEndpointInfo()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* WitConfiguration_GetEndpointInfo_mF60F512344B2E6E9C4F952AC961A5CBCC4156213 (WitConfiguration_t85BCD6C826D35078E90334092184A53D1B69C72E* __this, const RuntimeMethod* method) 
{
	{
		// public IWitRequestEndpointInfo GetEndpointInfo() => endpointConfiguration;
		WitEndpointConfig_t7CCDA7CBBF1FDD2A7779DDF6745BAED47E69BB1D* L_0 = __this->___endpointConfiguration_9;
		return L_0;
	}
}
// System.String Meta.WitAi.Data.Configuration.WitConfiguration::GetClientAccessToken()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* WitConfiguration_GetClientAccessToken_m619DD2445232CA6A5C168763814741B3C75DCF47 (WitConfiguration_t85BCD6C826D35078E90334092184A53D1B69C72E* __this, const RuntimeMethod* method) 
{
	String_t* V_0 = NULL;
	{
		// return _clientAccessToken;
		String_t* L_0 = __this->____clientAccessToken_4;
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		// }
		String_t* L_1 = V_0;
		return L_1;
	}
}
// System.Void Meta.WitAi.Data.Configuration.WitConfiguration::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WitConfiguration__ctor_mDE814CE102C9F736C0DCFACB0C6C412586FFB1AC (WitConfiguration_t85BCD6C826D35078E90334092184A53D1B69C72E* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_mF10DB1D3CBB0B14215F0E4F8AB4934A1955E5351_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_mCA8DD57EAC70C2B5923DBB9D5A77CEAC22E7068E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WitEndpointConfig_t7CCDA7CBBF1FDD2A7779DDF6745BAED47E69BB1D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral11AD741CBC6F6810EF049BB36B42BB4C32C2CB40);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4D19773218A7935AA0D38A8938C871D229F73665);
		s_Il2CppMethodInitialized = true;
	}
	{
		// [SerializeField] public int timeoutMS = 10000;
		__this->___timeoutMS_8 = ((int32_t)10000);
		// [SerializeField] public WitEndpointConfig endpointConfiguration = new WitEndpointConfig();
		WitEndpointConfig_t7CCDA7CBBF1FDD2A7779DDF6745BAED47E69BB1D* L_0 = (WitEndpointConfig_t7CCDA7CBBF1FDD2A7779DDF6745BAED47E69BB1D*)il2cpp_codegen_object_new(WitEndpointConfig_t7CCDA7CBBF1FDD2A7779DDF6745BAED47E69BB1D_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		WitEndpointConfig__ctor_m732E92810A12A6690761C5B6E1A12C90F1569D12(L_0, NULL);
		__this->___endpointConfiguration_9 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___endpointConfiguration_9), (void*)L_0);
		// [SerializeField] public bool useConduit = true;
		__this->___useConduit_11 = (bool)1;
		// [SerializeField] public List<string> excludedAssemblies = new List<string>
		// {
		//     "Oculus.Voice.Demo, Version=0.0.0.0, Culture=neutral, PublicKeyToken=null",
		//     "Meta.WitAi.Samples, Version=0.0.0.0, Culture=neutral, PublicKeyToken=null"
		// };
		List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_1 = (List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD*)il2cpp_codegen_object_new(List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		List_1__ctor_mCA8DD57EAC70C2B5923DBB9D5A77CEAC22E7068E(L_1, List_1__ctor_mCA8DD57EAC70C2B5923DBB9D5A77CEAC22E7068E_RuntimeMethod_var);
		List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_2 = L_1;
		NullCheck(L_2);
		List_1_Add_mF10DB1D3CBB0B14215F0E4F8AB4934A1955E5351_inline(L_2, _stringLiteral11AD741CBC6F6810EF049BB36B42BB4C32C2CB40, List_1_Add_mF10DB1D3CBB0B14215F0E4F8AB4934A1955E5351_RuntimeMethod_var);
		List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_3 = L_2;
		NullCheck(L_3);
		List_1_Add_mF10DB1D3CBB0B14215F0E4F8AB4934A1955E5351_inline(L_3, _stringLiteral4D19773218A7935AA0D38A8938C871D229F73665, List_1_Add_mF10DB1D3CBB0B14215F0E4F8AB4934A1955E5351_RuntimeMethod_var);
		__this->___excludedAssemblies_13 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___excludedAssemblies_13), (void*)L_3);
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
// System.Void Meta.WitAi.CallbackHandlers.ConfidenceRange::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConfidenceRange__ctor_mB266B7DEE86144481F95FDA0413052F3CB4969E7 (ConfidenceRange_tE0A93D2F39AE1C9E6340C39D30A9201709B737E8* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public UnityEvent onWithinConfidenceRange = new UnityEvent();
		UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* L_0 = (UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977*)il2cpp_codegen_object_new(UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		UnityEvent__ctor_m03D3E5121B9A6100351984D0CE3050B909CD3235(L_0, NULL);
		__this->___onWithinConfidenceRange_2 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___onWithinConfidenceRange_2), (void*)L_0);
		// public UnityEvent onOutsideConfidenceRange = new UnityEvent();
		UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* L_1 = (UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977*)il2cpp_codegen_object_new(UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		UnityEvent__ctor_m03D3E5121B9A6100351984D0CE3050B909CD3235(L_1, NULL);
		__this->___onOutsideConfidenceRange_3 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___onOutsideConfidenceRange_3), (void*)L_1);
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
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
// System.String Meta.WitAi.CallbackHandlers.OutOfScopeUtteranceHandler::OnValidateResponse(Meta.WitAi.Json.WitResponseNode,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* OutOfScopeUtteranceHandler_OnValidateResponse_m7E10CD1EC2E4E3D7B53A0B38FD8D7B0BC244A445 (OutOfScopeUtteranceHandler_t4CC5CCB5E0F34C1EE207A6E06C711C6DCC0F748B* __this, WitResponseNode_t1BFF810F15B21416F5F6D0A1CAAF03CEF942038C* ___response0, bool ___isEarlyResponse1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1AB086973FB6A2E7A02B81F80EC5E8066A9F65D8);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral497E0727E6D4098F7DA86E306F0B961AA34D95FF);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7767C46BE8F952DEC905B39693FC67366C25C4A1);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralAD5D95ACB5EE6A85F7764DF4051FD214127B906C);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	String_t* V_1 = NULL;
	bool V_2 = false;
	bool V_3 = false;
	{
		// if (response == null)
		WitResponseNode_t1BFF810F15B21416F5F6D0A1CAAF03CEF942038C* L_0 = ___response0;
		bool L_1;
		L_1 = WitResponseNode_op_Equality_m556CA10A38D4323CB11BF6BD64A0A22FA5055366(L_0, NULL, NULL);
		V_0 = L_1;
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_0015;
		}
	}
	{
		// return "Response is null";
		V_1 = _stringLiteral1AB086973FB6A2E7A02B81F80EC5E8066A9F65D8;
		goto IL_0067;
	}

IL_0015:
	{
		// if (response["intents"].Count > 0)
		WitResponseNode_t1BFF810F15B21416F5F6D0A1CAAF03CEF942038C* L_3 = ___response0;
		NullCheck(L_3);
		WitResponseNode_t1BFF810F15B21416F5F6D0A1CAAF03CEF942038C* L_4;
		L_4 = VirtualFuncInvoker1< WitResponseNode_t1BFF810F15B21416F5F6D0A1CAAF03CEF942038C*, String_t* >::Invoke(7 /* Meta.WitAi.Json.WitResponseNode Meta.WitAi.Json.WitResponseNode::get_Item(System.String) */, L_3, _stringLiteralAD5D95ACB5EE6A85F7764DF4051FD214127B906C);
		NullCheck(L_4);
		int32_t L_5;
		L_5 = VirtualFuncInvoker0< int32_t >::Invoke(11 /* System.Int32 Meta.WitAi.Json.WitResponseNode::get_Count() */, L_4);
		V_2 = (bool)((((int32_t)L_5) > ((int32_t)0))? 1 : 0);
		bool L_6 = V_2;
		if (!L_6)
		{
			goto IL_005f;
		}
	}
	{
		// if (response.GetFirstIntent()["confidence"].AsFloat < confidenceThreshold)
		WitResponseNode_t1BFF810F15B21416F5F6D0A1CAAF03CEF942038C* L_7 = ___response0;
		WitResponseNode_t1BFF810F15B21416F5F6D0A1CAAF03CEF942038C* L_8;
		L_8 = WitResultUtilities_GetFirstIntent_m45B7C2E800F23A78D0CD498157031D5D68342541(L_7, NULL);
		NullCheck(L_8);
		WitResponseNode_t1BFF810F15B21416F5F6D0A1CAAF03CEF942038C* L_9;
		L_9 = VirtualFuncInvoker1< WitResponseNode_t1BFF810F15B21416F5F6D0A1CAAF03CEF942038C*, String_t* >::Invoke(7 /* Meta.WitAi.Json.WitResponseNode Meta.WitAi.Json.WitResponseNode::get_Item(System.String) */, L_8, _stringLiteral497E0727E6D4098F7DA86E306F0B961AA34D95FF);
		NullCheck(L_9);
		float L_10;
		L_10 = VirtualFuncInvoker0< float >::Invoke(20 /* System.Single Meta.WitAi.Json.WitResponseNode::get_AsFloat() */, L_9);
		float L_11 = __this->___confidenceThreshold_7;
		V_3 = (bool)((((float)L_10) < ((float)L_11))? 1 : 0);
		bool L_12 = V_3;
		if (!L_12)
		{
			goto IL_0057;
		}
	}
	{
		// return string.Empty;
		String_t* L_13 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->___Empty_6;
		V_1 = L_13;
		goto IL_0067;
	}

IL_0057:
	{
		// return "Intents found";
		V_1 = _stringLiteral7767C46BE8F952DEC905B39693FC67366C25C4A1;
		goto IL_0067;
	}

IL_005f:
	{
		// return string.Empty;
		String_t* L_14 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->___Empty_6;
		V_1 = L_14;
		goto IL_0067;
	}

IL_0067:
	{
		// }
		String_t* L_15 = V_1;
		return L_15;
	}
}
// System.Void Meta.WitAi.CallbackHandlers.OutOfScopeUtteranceHandler::OnResponseInvalid(Meta.WitAi.Json.WitResponseNode,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OutOfScopeUtteranceHandler_OnResponseInvalid_m252717596FB935DA9DA424EDB2015C5B342AF85E (OutOfScopeUtteranceHandler_t4CC5CCB5E0F34C1EE207A6E06C711C6DCC0F748B* __this, WitResponseNode_t1BFF810F15B21416F5F6D0A1CAAF03CEF942038C* ___response0, String_t* ___error1, const RuntimeMethod* method) 
{
	{
		// protected override void OnResponseInvalid(WitResponseNode response, string error) {}
		return;
	}
}
// System.Void Meta.WitAi.CallbackHandlers.OutOfScopeUtteranceHandler::OnResponseSuccess(Meta.WitAi.Json.WitResponseNode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OutOfScopeUtteranceHandler_OnResponseSuccess_m200A4A0A33EF7C2BA65BF3C0ED54B1496824EE60 (OutOfScopeUtteranceHandler_t4CC5CCB5E0F34C1EE207A6E06C711C6DCC0F748B* __this, WitResponseNode_t1BFF810F15B21416F5F6D0A1CAAF03CEF942038C* ___response0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityEvent_1_Invoke_mA633B48B5D287DA856FB954AC3E4012487E63C15_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	StringEvent_tC948A866B2D2C1ECC0783ABC07A4B876C8E28B5B* G_B2_0 = NULL;
	StringEvent_tC948A866B2D2C1ECC0783ABC07A4B876C8E28B5B* G_B1_0 = NULL;
	{
		// onOutOfDomain?.Invoke(response.GetTranscription());
		StringEvent_tC948A866B2D2C1ECC0783ABC07A4B876C8E28B5B* L_0 = __this->___onOutOfDomain_8;
		StringEvent_tC948A866B2D2C1ECC0783ABC07A4B876C8E28B5B* L_1 = L_0;
		G_B1_0 = L_1;
		if (L_1)
		{
			G_B2_0 = L_1;
			goto IL_000d;
		}
	}
	{
		goto IL_0019;
	}

IL_000d:
	{
		WitResponseNode_t1BFF810F15B21416F5F6D0A1CAAF03CEF942038C* L_2 = ___response0;
		String_t* L_3;
		L_3 = WitResultUtilities_GetTranscription_m8B205AAE88950C55930BBF443E3473804483B60F(L_2, NULL);
		NullCheck(G_B2_0);
		UnityEvent_1_Invoke_mA633B48B5D287DA856FB954AC3E4012487E63C15(G_B2_0, L_3, UnityEvent_1_Invoke_mA633B48B5D287DA856FB954AC3E4012487E63C15_RuntimeMethod_var);
	}

IL_0019:
	{
		// }
		return;
	}
}
// System.Void Meta.WitAi.CallbackHandlers.OutOfScopeUtteranceHandler::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OutOfScopeUtteranceHandler__ctor_m02838A509E141EA1C59BF9A97D039A50525D7865 (OutOfScopeUtteranceHandler_t4CC5CCB5E0F34C1EE207A6E06C711C6DCC0F748B* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringEvent_tC948A866B2D2C1ECC0783ABC07A4B876C8E28B5B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// [SerializeField] private float confidenceThreshold = 0.0f;
		__this->___confidenceThreshold_7 = (0.0f);
		// [SerializeField] private StringEvent onOutOfDomain = new StringEvent();
		StringEvent_tC948A866B2D2C1ECC0783ABC07A4B876C8E28B5B* L_0 = (StringEvent_tC948A866B2D2C1ECC0783ABC07A4B876C8E28B5B*)il2cpp_codegen_object_new(StringEvent_tC948A866B2D2C1ECC0783ABC07A4B876C8E28B5B_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		StringEvent__ctor_mC31F214D17DD41F033445DF11C6B8DE61C3731A3(L_0, NULL);
		__this->___onOutOfDomain_8 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___onOutOfDomain_8), (void*)L_0);
		WitResponseHandler__ctor_mA92FB5CA1D631E9FDEB631D826AB0945A3E6D609(__this, NULL);
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
// UnityEngine.Events.UnityEvent Meta.WitAi.CallbackHandlers.SimpleIntentHandler::get_OnIntentTriggered()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* SimpleIntentHandler_get_OnIntentTriggered_m54396EB3E29DFFA585CC4F097ED6BF82EB89EE84 (SimpleIntentHandler_tF4B682B5036AF258B9F7E1D210A0945768A282F4* __this, const RuntimeMethod* method) 
{
	{
		// public UnityEvent OnIntentTriggered => onIntentTriggered;
		UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* L_0 = __this->___onIntentTriggered_9;
		return L_0;
	}
}
// System.Void Meta.WitAi.CallbackHandlers.SimpleIntentHandler::OnResponseSuccess(Meta.WitAi.Json.WitResponseNode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SimpleIntentHandler_OnResponseSuccess_m5DE8C9A8E94A44DFAB1D47238D41859BAD04E05B (SimpleIntentHandler_tF4B682B5036AF258B9F7E1D210A0945768A282F4* __this, WitResponseNode_t1BFF810F15B21416F5F6D0A1CAAF03CEF942038C* ___response0, const RuntimeMethod* method) 
{
	{
		// onIntentTriggered.Invoke();
		UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* L_0 = __this->___onIntentTriggered_9;
		NullCheck(L_0);
		UnityEvent_Invoke_mFBF80D59B03C30C5FE6A06F897D954ACADE061D2(L_0, NULL);
		// UpdateRanges(response);
		WitResponseNode_t1BFF810F15B21416F5F6D0A1CAAF03CEF942038C* L_1 = ___response0;
		SimpleIntentHandler_UpdateRanges_m90B622F3A0239426D20B075B9C2D524A664A29E1(__this, L_1, NULL);
		// }
		return;
	}
}
// System.Void Meta.WitAi.CallbackHandlers.SimpleIntentHandler::OnResponseInvalid(Meta.WitAi.Json.WitResponseNode,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SimpleIntentHandler_OnResponseInvalid_m99EC71E38EE84E806346717DD140D60E061EECB3 (SimpleIntentHandler_tF4B682B5036AF258B9F7E1D210A0945768A282F4* __this, WitResponseNode_t1BFF810F15B21416F5F6D0A1CAAF03CEF942038C* ___response0, String_t* ___error1, const RuntimeMethod* method) 
{
	{
		// UpdateRanges(response);
		WitResponseNode_t1BFF810F15B21416F5F6D0A1CAAF03CEF942038C* L_0 = ___response0;
		SimpleIntentHandler_UpdateRanges_m90B622F3A0239426D20B075B9C2D524A664A29E1(__this, L_0, NULL);
		// }
		return;
	}
}
// System.Void Meta.WitAi.CallbackHandlers.SimpleIntentHandler::UpdateRanges(Meta.WitAi.Json.WitResponseNode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SimpleIntentHandler_UpdateRanges_m90B622F3A0239426D20B075B9C2D524A664A29E1 (SimpleIntentHandler_tF4B682B5036AF258B9F7E1D210A0945768A282F4* __this, WitResponseNode_t1BFF810F15B21416F5F6D0A1CAAF03CEF942038C* ___response0, const RuntimeMethod* method) 
{
	WitIntentDataU5BU5D_tA1E1A7F9E9C566D8BA4049F086E2ECD245E7ABF4* V_0 = NULL;
	bool V_1 = false;
	WitIntentDataU5BU5D_tA1E1A7F9E9C566D8BA4049F086E2ECD245E7ABF4* V_2 = NULL;
	int32_t V_3 = 0;
	WitIntentData_tAEC870A54A863E27A1FDC98AE01CA9C99F22F515* V_4 = NULL;
	bool V_5 = false;
	WitIntentDataU5BU5D_tA1E1A7F9E9C566D8BA4049F086E2ECD245E7ABF4* G_B3_0 = NULL;
	{
		// var intents = response?.GetIntents();
		WitResponseNode_t1BFF810F15B21416F5F6D0A1CAAF03CEF942038C* L_0 = ___response0;
		if (L_0)
		{
			goto IL_0007;
		}
	}
	{
		G_B3_0 = ((WitIntentDataU5BU5D_tA1E1A7F9E9C566D8BA4049F086E2ECD245E7ABF4*)(NULL));
		goto IL_000d;
	}

IL_0007:
	{
		WitResponseNode_t1BFF810F15B21416F5F6D0A1CAAF03CEF942038C* L_1 = ___response0;
		WitIntentDataU5BU5D_tA1E1A7F9E9C566D8BA4049F086E2ECD245E7ABF4* L_2;
		L_2 = WitResultUtilities_GetIntents_m40E83F95A02AC47F9AD129CA1F7075C1C5EDD13A(L_1, NULL);
		G_B3_0 = L_2;
	}

IL_000d:
	{
		V_0 = G_B3_0;
		// if (intents == null)
		WitIntentDataU5BU5D_tA1E1A7F9E9C566D8BA4049F086E2ECD245E7ABF4* L_3 = V_0;
		V_1 = (bool)((((RuntimeObject*)(WitIntentDataU5BU5D_tA1E1A7F9E9C566D8BA4049F086E2ECD245E7ABF4*)L_3) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0);
		bool L_4 = V_1;
		if (!L_4)
		{
			goto IL_0019;
		}
	}
	{
		// return;
		goto IL_007d;
	}

IL_0019:
	{
		// foreach (var intentData in intents)
		WitIntentDataU5BU5D_tA1E1A7F9E9C566D8BA4049F086E2ECD245E7ABF4* L_5 = V_0;
		V_2 = L_5;
		V_3 = 0;
		goto IL_0060;
	}

IL_0020:
	{
		// foreach (var intentData in intents)
		WitIntentDataU5BU5D_tA1E1A7F9E9C566D8BA4049F086E2ECD245E7ABF4* L_6 = V_2;
		int32_t L_7 = V_3;
		NullCheck(L_6);
		int32_t L_8 = L_7;
		WitIntentData_tAEC870A54A863E27A1FDC98AE01CA9C99F22F515* L_9 = (L_6)->GetAt(static_cast<il2cpp_array_size_t>(L_8));
		V_4 = L_9;
		// if (string.Equals(intent, intentData.name, StringComparison.CurrentCultureIgnoreCase))
		String_t* L_10 = ((WitIntentMatcher_tE81387B012FD1CDC55B99B00878C5E8EFD0D7F8D*)__this)->___intent_7;
		WitIntentData_tAEC870A54A863E27A1FDC98AE01CA9C99F22F515* L_11 = V_4;
		NullCheck(L_11);
		String_t* L_12 = L_11->___name_2;
		bool L_13;
		L_13 = String_Equals_mCC34895D0DB2AD440C9D8767032215BC86B5C48B(L_10, L_12, 1, NULL);
		V_5 = L_13;
		bool L_14 = V_5;
		if (!L_14)
		{
			goto IL_005b;
		}
	}
	{
		// RefreshConfidenceRange(intentData.confidence, confidenceRanges, allowConfidenceOverlap);
		WitIntentData_tAEC870A54A863E27A1FDC98AE01CA9C99F22F515* L_15 = V_4;
		NullCheck(L_15);
		float L_16 = L_15->___confidence_3;
		ConfidenceRangeU5BU5D_t436B72D1C2A21AE91F57767E7CCA104C79700583* L_17 = __this->___confidenceRanges_11;
		bool L_18 = __this->___allowConfidenceOverlap_10;
		bool L_19;
		L_19 = WitResponseHandler_RefreshConfidenceRange_mB3DFDEC327EB0141BD398F8F3D6141514ECAF901(L_16, L_17, L_18, NULL);
		// return;
		goto IL_007d;
	}

IL_005b:
	{
		int32_t L_20 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_20, 1));
	}

IL_0060:
	{
		// foreach (var intentData in intents)
		int32_t L_21 = V_3;
		WitIntentDataU5BU5D_tA1E1A7F9E9C566D8BA4049F086E2ECD245E7ABF4* L_22 = V_2;
		NullCheck(L_22);
		if ((((int32_t)L_21) < ((int32_t)((int32_t)(((RuntimeArray*)L_22)->max_length)))))
		{
			goto IL_0020;
		}
	}
	{
		// RefreshConfidenceRange(0, confidenceRanges, allowConfidenceOverlap);
		ConfidenceRangeU5BU5D_t436B72D1C2A21AE91F57767E7CCA104C79700583* L_23 = __this->___confidenceRanges_11;
		bool L_24 = __this->___allowConfidenceOverlap_10;
		bool L_25;
		L_25 = WitResponseHandler_RefreshConfidenceRange_mB3DFDEC327EB0141BD398F8F3D6141514ECAF901((0.0f), L_23, L_24, NULL);
	}

IL_007d:
	{
		// }
		return;
	}
}
// System.Void Meta.WitAi.CallbackHandlers.SimpleIntentHandler::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SimpleIntentHandler__ctor_mF6D654FDE93151A7ECFBF5E3F5C24D07FE6E31A2 (SimpleIntentHandler_tF4B682B5036AF258B9F7E1D210A0945768A282F4* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// [SerializeField] private UnityEvent onIntentTriggered = new UnityEvent();
		UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* L_0 = (UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977*)il2cpp_codegen_object_new(UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		UnityEvent__ctor_m03D3E5121B9A6100351984D0CE3050B909CD3235(L_0, NULL);
		__this->___onIntentTriggered_9 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___onIntentTriggered_9), (void*)L_0);
		WitIntentMatcher__ctor_mBDA138A9E901DDC1C44B18C761362D8B5269EAA6(__this, NULL);
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
// Meta.WitAi.CallbackHandlers.StringEntityMatchEvent Meta.WitAi.CallbackHandlers.SimpleStringEntityHandler::get_OnIntentEntityTriggered()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StringEntityMatchEvent_t8736CD9A25D69C2A4CCBD5440CCC7069AC6B9201* SimpleStringEntityHandler_get_OnIntentEntityTriggered_m9FB7E92BA03C15F3023676F5D52C82799EE674AB (SimpleStringEntityHandler_t1E5B8A6888D5B1E62E7C31AAA90429635B7D5309* __this, const RuntimeMethod* method) 
{
	{
		// public StringEntityMatchEvent OnIntentEntityTriggered => onIntentEntityTriggered;
		StringEntityMatchEvent_t8736CD9A25D69C2A4CCBD5440CCC7069AC6B9201* L_0 = __this->___onIntentEntityTriggered_11;
		return L_0;
	}
}
// System.String Meta.WitAi.CallbackHandlers.SimpleStringEntityHandler::OnValidateResponse(Meta.WitAi.Json.WitResponseNode,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* SimpleStringEntityHandler_OnValidateResponse_m60DF5E2AB6B67BBB39856C12D89D30E121CD7B7C (SimpleStringEntityHandler_t1E5B8A6888D5B1E62E7C31AAA90429635B7D5309* __this, WitResponseNode_t1BFF810F15B21416F5F6D0A1CAAF03CEF942038C* ___response0, bool ___isEarlyResponse1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral493F2C980EC99D04772AED0654F76A3ED491B938);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	String_t* V_1 = NULL;
	bool V_2 = false;
	String_t* V_3 = NULL;
	bool V_4 = false;
	{
		// string result = base.OnValidateResponse(response, isEarlyResponse);
		WitResponseNode_t1BFF810F15B21416F5F6D0A1CAAF03CEF942038C* L_0 = ___response0;
		bool L_1 = ___isEarlyResponse1;
		String_t* L_2;
		L_2 = WitIntentMatcher_OnValidateResponse_m48D902D74EB6FAD8EB8FD83161207D8A83E97EEB(__this, L_0, L_1, NULL);
		V_0 = L_2;
		// if (!string.IsNullOrEmpty(result))
		String_t* L_3 = V_0;
		bool L_4;
		L_4 = String_IsNullOrEmpty_mEA9E3FB005AC28FE02E69FCF95A7B8456192B478(L_3, NULL);
		V_2 = (bool)((((int32_t)L_4) == ((int32_t)0))? 1 : 0);
		bool L_5 = V_2;
		if (!L_5)
		{
			goto IL_001c;
		}
	}
	{
		// return result;
		String_t* L_6 = V_0;
		V_3 = L_6;
		goto IL_0051;
	}

IL_001c:
	{
		// var entityValue = response.GetFirstEntityValue(entity);
		WitResponseNode_t1BFF810F15B21416F5F6D0A1CAAF03CEF942038C* L_7 = ___response0;
		String_t* L_8 = __this->___entity_9;
		String_t* L_9;
		L_9 = WitResultUtilities_GetFirstEntityValue_mE467D691546F55E99122FB55428570676A50D77F(L_7, L_8, NULL);
		V_1 = L_9;
		// if (string.IsNullOrEmpty(entityValue))
		String_t* L_10 = V_1;
		bool L_11;
		L_11 = String_IsNullOrEmpty_mEA9E3FB005AC28FE02E69FCF95A7B8456192B478(L_10, NULL);
		V_4 = L_11;
		bool L_12 = V_4;
		if (!L_12)
		{
			goto IL_0049;
		}
	}
	{
		// return $"Missing required entity: {entity}";
		String_t* L_13 = __this->___entity_9;
		String_t* L_14;
		L_14 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(_stringLiteral493F2C980EC99D04772AED0654F76A3ED491B938, L_13, NULL);
		V_3 = L_14;
		goto IL_0051;
	}

IL_0049:
	{
		// return string.Empty;
		String_t* L_15 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->___Empty_6;
		V_3 = L_15;
		goto IL_0051;
	}

IL_0051:
	{
		// }
		String_t* L_16 = V_3;
		return L_16;
	}
}
// System.Void Meta.WitAi.CallbackHandlers.SimpleStringEntityHandler::OnResponseInvalid(Meta.WitAi.Json.WitResponseNode,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SimpleStringEntityHandler_OnResponseInvalid_m731996E1C29F19A0A93D82A598A80338A02C60B9 (SimpleStringEntityHandler_t1E5B8A6888D5B1E62E7C31AAA90429635B7D5309* __this, WitResponseNode_t1BFF810F15B21416F5F6D0A1CAAF03CEF942038C* ___response0, String_t* ___error1, const RuntimeMethod* method) 
{
	{
		// protected override void OnResponseInvalid(WitResponseNode response, string error) { }
		return;
	}
}
// System.Void Meta.WitAi.CallbackHandlers.SimpleStringEntityHandler::OnResponseSuccess(Meta.WitAi.Json.WitResponseNode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SimpleStringEntityHandler_OnResponseSuccess_m19602DEC9500413B33EC522150A63605EA7C09D2 (SimpleStringEntityHandler_t1E5B8A6888D5B1E62E7C31AAA90429635B7D5309* __this, WitResponseNode_t1BFF810F15B21416F5F6D0A1CAAF03CEF942038C* ___response0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityEvent_1_Invoke_mA633B48B5D287DA856FB954AC3E4012487E63C15_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral057E47B1A5317B280AD5B6CE27C8F11073D42316);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	bool V_1 = false;
	{
		// var entityValue = response.GetFirstEntityValue(entity);
		WitResponseNode_t1BFF810F15B21416F5F6D0A1CAAF03CEF942038C* L_0 = ___response0;
		String_t* L_1 = __this->___entity_9;
		String_t* L_2;
		L_2 = WitResultUtilities_GetFirstEntityValue_mE467D691546F55E99122FB55428570676A50D77F(L_0, L_1, NULL);
		V_0 = L_2;
		// if (!string.IsNullOrEmpty(format))
		String_t* L_3 = __this->___format_10;
		bool L_4;
		L_4 = String_IsNullOrEmpty_mEA9E3FB005AC28FE02E69FCF95A7B8456192B478(L_3, NULL);
		V_1 = (bool)((((int32_t)L_4) == ((int32_t)0))? 1 : 0);
		bool L_5 = V_1;
		if (!L_5)
		{
			goto IL_0041;
		}
	}
	{
		// onIntentEntityTriggered.Invoke(format.Replace("{value}", entityValue));
		StringEntityMatchEvent_t8736CD9A25D69C2A4CCBD5440CCC7069AC6B9201* L_6 = __this->___onIntentEntityTriggered_11;
		String_t* L_7 = __this->___format_10;
		String_t* L_8 = V_0;
		NullCheck(L_7);
		String_t* L_9;
		L_9 = String_Replace_mABDB7003A1D0AEDCAE9FF85E3DFFFBA752D2A166(L_7, _stringLiteral057E47B1A5317B280AD5B6CE27C8F11073D42316, L_8, NULL);
		NullCheck(L_6);
		UnityEvent_1_Invoke_mA633B48B5D287DA856FB954AC3E4012487E63C15(L_6, L_9, UnityEvent_1_Invoke_mA633B48B5D287DA856FB954AC3E4012487E63C15_RuntimeMethod_var);
		goto IL_0050;
	}

IL_0041:
	{
		// onIntentEntityTriggered.Invoke(entityValue);
		StringEntityMatchEvent_t8736CD9A25D69C2A4CCBD5440CCC7069AC6B9201* L_10 = __this->___onIntentEntityTriggered_11;
		String_t* L_11 = V_0;
		NullCheck(L_10);
		UnityEvent_1_Invoke_mA633B48B5D287DA856FB954AC3E4012487E63C15(L_10, L_11, UnityEvent_1_Invoke_mA633B48B5D287DA856FB954AC3E4012487E63C15_RuntimeMethod_var);
	}

IL_0050:
	{
		// }
		return;
	}
}
// System.Void Meta.WitAi.CallbackHandlers.SimpleStringEntityHandler::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SimpleStringEntityHandler__ctor_mD9819FBE0562322424303A800ECF3EBBA41DB7DC (SimpleStringEntityHandler_t1E5B8A6888D5B1E62E7C31AAA90429635B7D5309* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringEntityMatchEvent_t8736CD9A25D69C2A4CCBD5440CCC7069AC6B9201_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// [SerializeField] private StringEntityMatchEvent onIntentEntityTriggered
		//     = new StringEntityMatchEvent();
		StringEntityMatchEvent_t8736CD9A25D69C2A4CCBD5440CCC7069AC6B9201* L_0 = (StringEntityMatchEvent_t8736CD9A25D69C2A4CCBD5440CCC7069AC6B9201*)il2cpp_codegen_object_new(StringEntityMatchEvent_t8736CD9A25D69C2A4CCBD5440CCC7069AC6B9201_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		StringEntityMatchEvent__ctor_mB87FF57138D7C56DE31EE2D5BAB057329B8C781B(L_0, NULL);
		__this->___onIntentEntityTriggered_11 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___onIntentEntityTriggered_11), (void*)L_0);
		WitIntentMatcher__ctor_mBDA138A9E901DDC1C44B18C761362D8B5269EAA6(__this, NULL);
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
// System.Void Meta.WitAi.CallbackHandlers.StringEntityMatchEvent::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StringEntityMatchEvent__ctor_mB87FF57138D7C56DE31EE2D5BAB057329B8C781B (StringEntityMatchEvent_t8736CD9A25D69C2A4CCBD5440CCC7069AC6B9201* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityEvent_1__ctor_m0F7D790DACD6F3D18E865D01FE4427603C1B0CC6_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		UnityEvent_1__ctor_m0F7D790DACD6F3D18E865D01FE4427603C1B0CC6(__this, UnityEvent_1__ctor_m0F7D790DACD6F3D18E865D01FE4427603C1B0CC6_RuntimeMethod_var);
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
// System.String Meta.WitAi.CallbackHandlers.WitIntentMatcher::OnValidateResponse(Meta.WitAi.Json.WitResponseNode,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* WitIntentMatcher_OnValidateResponse_m48D902D74EB6FAD8EB8FD83161207D8A83E97EEB (WitIntentMatcher_tE81387B012FD1CDC55B99B00878C5E8EFD0D7F8D* __this, WitResponseNode_t1BFF810F15B21416F5F6D0A1CAAF03CEF942038C* ___response0, bool ___isEarlyResponse1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral293FEA1788CBA62C70BB50A2D66B4CF52162FD84);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2EC4BDD76EA1B8DF254C40F3CA06D3C59FECB5E1);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral42646B33B50B6AA15E22733C8900716F0FE19E1D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral50DC73D47DBEF200FCB895315FB80FD4568558D6);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral76B984902098D790B36C506477F43BF329D2E00E);
		s_Il2CppMethodInitialized = true;
	}
	WitIntentDataU5BU5D_tA1E1A7F9E9C566D8BA4049F086E2ECD245E7ABF4* V_0 = NULL;
	WitIntentData_tAEC870A54A863E27A1FDC98AE01CA9C99F22F515* V_1 = NULL;
	bool V_2 = false;
	String_t* V_3 = NULL;
	bool V_4 = false;
	WitIntentDataU5BU5D_tA1E1A7F9E9C566D8BA4049F086E2ECD245E7ABF4* V_5 = NULL;
	int32_t V_6 = 0;
	WitIntentData_tAEC870A54A863E27A1FDC98AE01CA9C99F22F515* V_7 = NULL;
	bool V_8 = false;
	bool V_9 = false;
	bool V_10 = false;
	int32_t G_B5_0 = 0;
	{
		// if (response == null)
		WitResponseNode_t1BFF810F15B21416F5F6D0A1CAAF03CEF942038C* L_0 = ___response0;
		bool L_1;
		L_1 = WitResponseNode_op_Equality_m556CA10A38D4323CB11BF6BD64A0A22FA5055366(L_0, NULL, NULL);
		V_2 = L_1;
		bool L_2 = V_2;
		if (!L_2)
		{
			goto IL_0018;
		}
	}
	{
		// return "No response";
		V_3 = _stringLiteral2EC4BDD76EA1B8DF254C40F3CA06D3C59FECB5E1;
		goto IL_00e6;
	}

IL_0018:
	{
		// WitIntentData[] intents = response.GetIntents();
		WitResponseNode_t1BFF810F15B21416F5F6D0A1CAAF03CEF942038C* L_3 = ___response0;
		WitIntentDataU5BU5D_tA1E1A7F9E9C566D8BA4049F086E2ECD245E7ABF4* L_4;
		L_4 = WitResultUtilities_GetIntents_m40E83F95A02AC47F9AD129CA1F7075C1C5EDD13A(L_3, NULL);
		V_0 = L_4;
		// if (intents == null || intents.Length == 0)
		WitIntentDataU5BU5D_tA1E1A7F9E9C566D8BA4049F086E2ECD245E7ABF4* L_5 = V_0;
		if (!L_5)
		{
			goto IL_0029;
		}
	}
	{
		WitIntentDataU5BU5D_tA1E1A7F9E9C566D8BA4049F086E2ECD245E7ABF4* L_6 = V_0;
		NullCheck(L_6);
		G_B5_0 = ((((int32_t)(((RuntimeArray*)L_6)->max_length)) == ((int32_t)0))? 1 : 0);
		goto IL_002a;
	}

IL_0029:
	{
		G_B5_0 = 1;
	}

IL_002a:
	{
		V_4 = (bool)G_B5_0;
		bool L_7 = V_4;
		if (!L_7)
		{
			goto IL_003c;
		}
	}
	{
		// return "No intents found";
		V_3 = _stringLiteral293FEA1788CBA62C70BB50A2D66B4CF52162FD84;
		goto IL_00e6;
	}

IL_003c:
	{
		// WitIntentData found = null;
		V_1 = (WitIntentData_tAEC870A54A863E27A1FDC98AE01CA9C99F22F515*)NULL;
		// foreach (var intentData in intents)
		WitIntentDataU5BU5D_tA1E1A7F9E9C566D8BA4049F086E2ECD245E7ABF4* L_8 = V_0;
		V_5 = L_8;
		V_6 = 0;
		goto IL_0075;
	}

IL_0047:
	{
		// foreach (var intentData in intents)
		WitIntentDataU5BU5D_tA1E1A7F9E9C566D8BA4049F086E2ECD245E7ABF4* L_9 = V_5;
		int32_t L_10 = V_6;
		NullCheck(L_9);
		int32_t L_11 = L_10;
		WitIntentData_tAEC870A54A863E27A1FDC98AE01CA9C99F22F515* L_12 = (L_9)->GetAt(static_cast<il2cpp_array_size_t>(L_11));
		V_7 = L_12;
		// if (string.Equals(intent, intentData.name, StringComparison.CurrentCultureIgnoreCase))
		String_t* L_13 = __this->___intent_7;
		WitIntentData_tAEC870A54A863E27A1FDC98AE01CA9C99F22F515* L_14 = V_7;
		NullCheck(L_14);
		String_t* L_15 = L_14->___name_2;
		bool L_16;
		L_16 = String_Equals_mCC34895D0DB2AD440C9D8767032215BC86B5C48B(L_13, L_15, 1, NULL);
		V_8 = L_16;
		bool L_17 = V_8;
		if (!L_17)
		{
			goto IL_006e;
		}
	}
	{
		// found = intentData;
		WitIntentData_tAEC870A54A863E27A1FDC98AE01CA9C99F22F515* L_18 = V_7;
		V_1 = L_18;
		// break;
		goto IL_007d;
	}

IL_006e:
	{
		int32_t L_19 = V_6;
		V_6 = ((int32_t)il2cpp_codegen_add(L_19, 1));
	}

IL_0075:
	{
		// foreach (var intentData in intents)
		int32_t L_20 = V_6;
		WitIntentDataU5BU5D_tA1E1A7F9E9C566D8BA4049F086E2ECD245E7ABF4* L_21 = V_5;
		NullCheck(L_21);
		if ((((int32_t)L_20) < ((int32_t)((int32_t)(((RuntimeArray*)L_21)->max_length)))))
		{
			goto IL_0047;
		}
	}

IL_007d:
	{
		// if (found == null)
		WitIntentData_tAEC870A54A863E27A1FDC98AE01CA9C99F22F515* L_22 = V_1;
		V_9 = (bool)((((RuntimeObject*)(WitIntentData_tAEC870A54A863E27A1FDC98AE01CA9C99F22F515*)L_22) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0);
		bool L_23 = V_9;
		if (!L_23)
		{
			goto IL_00a0;
		}
	}
	{
		// return $"Missing required intent '{intent}'";
		String_t* L_24 = __this->___intent_7;
		String_t* L_25;
		L_25 = String_Concat_m8855A6DE10F84DA7F4EC113CADDB59873A25573B(_stringLiteral50DC73D47DBEF200FCB895315FB80FD4568558D6, L_24, _stringLiteral42646B33B50B6AA15E22733C8900716F0FE19E1D, NULL);
		V_3 = L_25;
		goto IL_00e6;
	}

IL_00a0:
	{
		// if (found.confidence < confidenceThreshold)
		WitIntentData_tAEC870A54A863E27A1FDC98AE01CA9C99F22F515* L_26 = V_1;
		NullCheck(L_26);
		float L_27 = L_26->___confidence_3;
		float L_28 = __this->___confidenceThreshold_8;
		V_10 = (bool)((((float)L_27) < ((float)L_28))? 1 : 0);
		bool L_29 = V_10;
		if (!L_29)
		{
			goto IL_00de;
		}
	}
	{
		// return $"Required intent '{intent}' confidence too low: {found.confidence:0.000}\nRequired: {confidenceThreshold:0.000}";
		String_t* L_30 = __this->___intent_7;
		WitIntentData_tAEC870A54A863E27A1FDC98AE01CA9C99F22F515* L_31 = V_1;
		NullCheck(L_31);
		float L_32 = L_31->___confidence_3;
		float L_33 = L_32;
		RuntimeObject* L_34 = Box(Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_il2cpp_TypeInfo_var, &L_33);
		float L_35 = __this->___confidenceThreshold_8;
		float L_36 = L_35;
		RuntimeObject* L_37 = Box(Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_il2cpp_TypeInfo_var, &L_36);
		String_t* L_38;
		L_38 = String_Format_mA0534D6E2AE4D67A6BD8D45B3321323930EB930C(_stringLiteral76B984902098D790B36C506477F43BF329D2E00E, L_30, L_34, L_37, NULL);
		V_3 = L_38;
		goto IL_00e6;
	}

IL_00de:
	{
		// return string.Empty;
		String_t* L_39 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->___Empty_6;
		V_3 = L_39;
		goto IL_00e6;
	}

IL_00e6:
	{
		// }
		String_t* L_40 = V_3;
		return L_40;
	}
}
// System.Void Meta.WitAi.CallbackHandlers.WitIntentMatcher::OnEnable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WitIntentMatcher_OnEnable_mDFB5071E0690A799B3BC07CF9BF43CD559FCD1CB (WitIntentMatcher_tE81387B012FD1CDC55B99B00878C5E8EFD0D7F8D* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_mF10DB1D3CBB0B14215F0E4F8AB4934A1955E5351_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Manifest_tDC9A75EB5733C48D7100139A792C661B4A60B9AB_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Manifest.WitResponseMatcherIntents.Add(intent);
		il2cpp_codegen_runtime_class_init_inline(Manifest_tDC9A75EB5733C48D7100139A792C661B4A60B9AB_il2cpp_TypeInfo_var);
		List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_0 = ((Manifest_tDC9A75EB5733C48D7100139A792C661B4A60B9AB_StaticFields*)il2cpp_codegen_static_fields_for(Manifest_tDC9A75EB5733C48D7100139A792C661B4A60B9AB_il2cpp_TypeInfo_var))->___WitResponseMatcherIntents_8;
		String_t* L_1 = __this->___intent_7;
		NullCheck(L_0);
		List_1_Add_mF10DB1D3CBB0B14215F0E4F8AB4934A1955E5351_inline(L_0, L_1, List_1_Add_mF10DB1D3CBB0B14215F0E4F8AB4934A1955E5351_RuntimeMethod_var);
		// base.OnEnable();
		WitResponseHandler_OnEnable_mFE8A0A36A8A37AF4136FBDCCBA9987D83396A80D(__this, NULL);
		// }
		return;
	}
}
// System.Void Meta.WitAi.CallbackHandlers.WitIntentMatcher::OnDisable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WitIntentMatcher_OnDisable_m047761450D71B676D48FA3C3A2734EFA68CF1D11 (WitIntentMatcher_tE81387B012FD1CDC55B99B00878C5E8EFD0D7F8D* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Remove_mD9E8CFB6777A99046B3C0195F7343FE771A2E99D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Manifest_tDC9A75EB5733C48D7100139A792C661B4A60B9AB_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Manifest.WitResponseMatcherIntents.Remove(intent);
		il2cpp_codegen_runtime_class_init_inline(Manifest_tDC9A75EB5733C48D7100139A792C661B4A60B9AB_il2cpp_TypeInfo_var);
		List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_0 = ((Manifest_tDC9A75EB5733C48D7100139A792C661B4A60B9AB_StaticFields*)il2cpp_codegen_static_fields_for(Manifest_tDC9A75EB5733C48D7100139A792C661B4A60B9AB_il2cpp_TypeInfo_var))->___WitResponseMatcherIntents_8;
		String_t* L_1 = __this->___intent_7;
		NullCheck(L_0);
		bool L_2;
		L_2 = List_1_Remove_mD9E8CFB6777A99046B3C0195F7343FE771A2E99D(L_0, L_1, List_1_Remove_mD9E8CFB6777A99046B3C0195F7343FE771A2E99D_RuntimeMethod_var);
		// base.OnDisable();
		WitResponseHandler_OnDisable_m02C1751177C34AA643B73970BE6F0E6E8DA23B56(__this, NULL);
		// }
		return;
	}
}
// System.Void Meta.WitAi.CallbackHandlers.WitIntentMatcher::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WitIntentMatcher__ctor_mBDA138A9E901DDC1C44B18C761362D8B5269EAA6 (WitIntentMatcher_tE81387B012FD1CDC55B99B00878C5E8EFD0D7F8D* __this, const RuntimeMethod* method) 
{
	{
		// [Range(0, 1f), SerializeField] public float confidenceThreshold = .6f;
		__this->___confidenceThreshold_8 = (0.600000024f);
		WitResponseHandler__ctor_mA92FB5CA1D631E9FDEB631D826AB0945A3E6D609(__this, NULL);
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
// System.Void Meta.WitAi.CallbackHandlers.WitResponseEvent::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WitResponseEvent__ctor_mEB8A2107D62FCF3E539D8C46674E3657EE53351D (WitResponseEvent_t6CC119DCF60FF27F3B61BA0E1A86AEDC1D26AA84* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityEvent_1__ctor_mF7AA5743E2CEC1E7B16598E449A80EE8E0D93E1F_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		UnityEvent_1__ctor_mF7AA5743E2CEC1E7B16598E449A80EE8E0D93E1F(__this, UnityEvent_1__ctor_mF7AA5743E2CEC1E7B16598E449A80EE8E0D93E1F_RuntimeMethod_var);
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
// System.Void Meta.WitAi.CallbackHandlers.WitResponseErrorEvent::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WitResponseErrorEvent__ctor_mC2D1603CF552BD5D67B1D38F1B798ABED8718CBD (WitResponseErrorEvent_t27A69D2F98CF74C1156030169D4E99C4D904F37B* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityEvent_2__ctor_m21C9872BB0486BA44FF463264947D9CFBF660DDA_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		UnityEvent_2__ctor_m21C9872BB0486BA44FF463264947D9CFBF660DDA(__this, UnityEvent_2__ctor_m21C9872BB0486BA44FF463264947D9CFBF660DDA_RuntimeMethod_var);
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
// System.Void Meta.WitAi.CallbackHandlers.WitResponseHandler::OnValidate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WitResponseHandler_OnValidate_m726AB689BA0091CCDDE1041DBDEC8DE9C346B4A8 (WitResponseHandler_t3BD2BF0058605CE13CD87228A0BBB9CDAFC74AF1* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_FindObjectOfType_TisVoiceService_t601CB0E6879961EC1F8179A8E20EB9DD7AF6A82E_mDA8F5B3610935B66B1EC441F14D138F7C47411EC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		// if (!Voice) Voice = FindObjectOfType<VoiceService>();
		VoiceService_t601CB0E6879961EC1F8179A8E20EB9DD7AF6A82E* L_0 = __this->___Voice_4;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Implicit_m93896EF7D68FA113C42D3FE2BC6F661FC7EF514A(L_0, NULL);
		V_0 = (bool)((((int32_t)L_1) == ((int32_t)0))? 1 : 0);
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_001e;
		}
	}
	{
		// if (!Voice) Voice = FindObjectOfType<VoiceService>();
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		VoiceService_t601CB0E6879961EC1F8179A8E20EB9DD7AF6A82E* L_3;
		L_3 = Object_FindObjectOfType_TisVoiceService_t601CB0E6879961EC1F8179A8E20EB9DD7AF6A82E_mDA8F5B3610935B66B1EC441F14D138F7C47411EC(Object_FindObjectOfType_TisVoiceService_t601CB0E6879961EC1F8179A8E20EB9DD7AF6A82E_mDA8F5B3610935B66B1EC441F14D138F7C47411EC_RuntimeMethod_var);
		__this->___Voice_4 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___Voice_4), (void*)L_3);
	}

IL_001e:
	{
		// }
		return;
	}
}
// System.Void Meta.WitAi.CallbackHandlers.WitResponseHandler::OnEnable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WitResponseHandler_OnEnable_mFE8A0A36A8A37AF4136FBDCCBA9987D83396A80D (WitResponseHandler_t3BD2BF0058605CE13CD87228A0BBB9CDAFC74AF1* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_FindObjectOfType_TisVoiceService_t601CB0E6879961EC1F8179A8E20EB9DD7AF6A82E_mDA8F5B3610935B66B1EC441F14D138F7C47411EC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityAction_1_t47424DEBAD5E8E58E4A0DD7FD64A5834C41F7896_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityAction_1_t7814257576DA9D92A82FF91BA3EE537553AC1BC8_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityAction_1_tF266B43F3B48247A8143BA850AC13FFC634512E9_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityEvent_1_AddListener_m03EDE8CB25D09EA569869E869DC2554E4D9E2F55_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityEvent_1_AddListener_m70247BB158E4AEFE0164279659FFD151906E2E7A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityEvent_1_AddListener_mB3C6662F34981931F4CECC821C289F26B199098F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0CF1C526BD3872B6F7B223B157F80669490DCBCF);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8E148930C0321183E9A2893B9D601B8F321E3760);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	{
		// if (!Voice) Voice = FindObjectOfType<VoiceService>();
		VoiceService_t601CB0E6879961EC1F8179A8E20EB9DD7AF6A82E* L_0 = __this->___Voice_4;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Implicit_m93896EF7D68FA113C42D3FE2BC6F661FC7EF514A(L_0, NULL);
		V_0 = (bool)((((int32_t)L_1) == ((int32_t)0))? 1 : 0);
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_001e;
		}
	}
	{
		// if (!Voice) Voice = FindObjectOfType<VoiceService>();
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		VoiceService_t601CB0E6879961EC1F8179A8E20EB9DD7AF6A82E* L_3;
		L_3 = Object_FindObjectOfType_TisVoiceService_t601CB0E6879961EC1F8179A8E20EB9DD7AF6A82E_mDA8F5B3610935B66B1EC441F14D138F7C47411EC(Object_FindObjectOfType_TisVoiceService_t601CB0E6879961EC1F8179A8E20EB9DD7AF6A82E_mDA8F5B3610935B66B1EC441F14D138F7C47411EC_RuntimeMethod_var);
		__this->___Voice_4 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___Voice_4), (void*)L_3);
	}

IL_001e:
	{
		// if (!Voice)
		VoiceService_t601CB0E6879961EC1F8179A8E20EB9DD7AF6A82E* L_4 = __this->___Voice_4;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_5;
		L_5 = Object_op_Implicit_m93896EF7D68FA113C42D3FE2BC6F661FC7EF514A(L_4, NULL);
		V_1 = (bool)((((int32_t)L_5) == ((int32_t)0))? 1 : 0);
		bool L_6 = V_1;
		if (!L_6)
		{
			goto IL_0067;
		}
	}
	{
		// VLog.E($"VoiceService not found in scene.\nDisabling {GetType().Name} on {gameObject.name}");
		Type_t* L_7;
		L_7 = Object_GetType_mE10A8FC1E57F3DF29972CCBC026C2DC3942263B3(__this, NULL);
		NullCheck(L_7);
		String_t* L_8;
		L_8 = VirtualFuncInvoker0< String_t* >::Invoke(7 /* System.String System.Reflection.MemberInfo::get_Name() */, L_7);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_9;
		L_9 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		NullCheck(L_9);
		String_t* L_10;
		L_10 = Object_get_name_mAC2F6B897CF1303BA4249B4CB55271AFACBB6392(L_9, NULL);
		String_t* L_11;
		L_11 = String_Concat_m093934F71A9B351911EE46311674ED463B180006(_stringLiteral8E148930C0321183E9A2893B9D601B8F321E3760, L_8, _stringLiteral0CF1C526BD3872B6F7B223B157F80669490DCBCF, L_10, NULL);
		VLog_E_m72B89ED9282703998618195366B61B9F26A40AC1(L_11, NULL);
		// enabled = false;
		Behaviour_set_enabled_mF1DCFE60EB09E0529FE9476CA804A3AA2D72B16A(__this, (bool)0, NULL);
		goto IL_00d2;
	}

IL_0067:
	{
		// Voice.VoiceEvents.OnSend.AddListener(OnRequestSend);
		VoiceService_t601CB0E6879961EC1F8179A8E20EB9DD7AF6A82E* L_12 = __this->___Voice_4;
		NullCheck(L_12);
		VoiceEvents_t7755B8C2A9074FA12090CF7288E5512DFD225EA9* L_13;
		L_13 = VirtualFuncInvoker0< VoiceEvents_t7755B8C2A9074FA12090CF7288E5512DFD225EA9* >::Invoke(35 /* Meta.WitAi.Events.VoiceEvents Meta.WitAi.VoiceService::get_VoiceEvents() */, L_12);
		NullCheck(L_13);
		VoiceServiceRequestEvent_t7340AD8EBA1B3D36E1A95E47C8DBCD954F1DED13* L_14;
		L_14 = SpeechEvents_get_OnSend_m848D965F028D864B6175BA77425848BA86153A13_inline(L_13, NULL);
		UnityAction_1_t47424DEBAD5E8E58E4A0DD7FD64A5834C41F7896* L_15 = (UnityAction_1_t47424DEBAD5E8E58E4A0DD7FD64A5834C41F7896*)il2cpp_codegen_object_new(UnityAction_1_t47424DEBAD5E8E58E4A0DD7FD64A5834C41F7896_il2cpp_TypeInfo_var);
		NullCheck(L_15);
		UnityAction_1__ctor_mA3112565DCE97F8CEE37CB0C23589F7B5385FE82(L_15, __this, (intptr_t)((void*)GetVirtualMethodInfo(__this, 6)), NULL);
		NullCheck(L_14);
		UnityEvent_1_AddListener_m70247BB158E4AEFE0164279659FFD151906E2E7A(L_14, L_15, UnityEvent_1_AddListener_m70247BB158E4AEFE0164279659FFD151906E2E7A_RuntimeMethod_var);
		// Voice.VoiceEvents.OnValidatePartialResponse.AddListener(HandleValidateEarlyResponse);
		VoiceService_t601CB0E6879961EC1F8179A8E20EB9DD7AF6A82E* L_16 = __this->___Voice_4;
		NullCheck(L_16);
		VoiceEvents_t7755B8C2A9074FA12090CF7288E5512DFD225EA9* L_17;
		L_17 = VirtualFuncInvoker0< VoiceEvents_t7755B8C2A9074FA12090CF7288E5512DFD225EA9* >::Invoke(35 /* Meta.WitAi.Events.VoiceEvents Meta.WitAi.VoiceService::get_VoiceEvents() */, L_16);
		NullCheck(L_17);
		WitValidationEvent_t731FF211C8D0215476601B54ECDDD2D1DF38974C* L_18;
		L_18 = VoiceEvents_get_OnValidatePartialResponse_m62DE8DDDEE5ADC162380EAF17572CE4472913667_inline(L_17, NULL);
		UnityAction_1_tF266B43F3B48247A8143BA850AC13FFC634512E9* L_19 = (UnityAction_1_tF266B43F3B48247A8143BA850AC13FFC634512E9*)il2cpp_codegen_object_new(UnityAction_1_tF266B43F3B48247A8143BA850AC13FFC634512E9_il2cpp_TypeInfo_var);
		NullCheck(L_19);
		UnityAction_1__ctor_mBA2D24276288A034439DDF2DC789550CB1DA6C22(L_19, __this, (intptr_t)((void*)GetVirtualMethodInfo(__this, 7)), NULL);
		NullCheck(L_18);
		UnityEvent_1_AddListener_mB3C6662F34981931F4CECC821C289F26B199098F(L_18, L_19, UnityEvent_1_AddListener_mB3C6662F34981931F4CECC821C289F26B199098F_RuntimeMethod_var);
		// Voice.VoiceEvents.OnResponse.AddListener(HandleFinalResponse);
		VoiceService_t601CB0E6879961EC1F8179A8E20EB9DD7AF6A82E* L_20 = __this->___Voice_4;
		NullCheck(L_20);
		VoiceEvents_t7755B8C2A9074FA12090CF7288E5512DFD225EA9* L_21;
		L_21 = VirtualFuncInvoker0< VoiceEvents_t7755B8C2A9074FA12090CF7288E5512DFD225EA9* >::Invoke(35 /* Meta.WitAi.Events.VoiceEvents Meta.WitAi.VoiceService::get_VoiceEvents() */, L_20);
		NullCheck(L_21);
		WitResponseEvent_tC85152AAABC87956DF604749EEA671ADAA9EFFDA* L_22;
		L_22 = SpeechEvents_get_OnResponse_m35A479475B9CCCE66CDA4028A0A6AE6343E50400_inline(L_21, NULL);
		UnityAction_1_t7814257576DA9D92A82FF91BA3EE537553AC1BC8* L_23 = (UnityAction_1_t7814257576DA9D92A82FF91BA3EE537553AC1BC8*)il2cpp_codegen_object_new(UnityAction_1_t7814257576DA9D92A82FF91BA3EE537553AC1BC8_il2cpp_TypeInfo_var);
		NullCheck(L_23);
		UnityAction_1__ctor_m8B1FC56332BDF48F305E5F292D2F751AAC2A90EE(L_23, __this, (intptr_t)((void*)GetVirtualMethodInfo(__this, 8)), NULL);
		NullCheck(L_22);
		UnityEvent_1_AddListener_m03EDE8CB25D09EA569869E869DC2554E4D9E2F55(L_22, L_23, UnityEvent_1_AddListener_m03EDE8CB25D09EA569869E869DC2554E4D9E2F55_RuntimeMethod_var);
	}

IL_00d2:
	{
		// }
		return;
	}
}
// System.Void Meta.WitAi.CallbackHandlers.WitResponseHandler::OnDisable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WitResponseHandler_OnDisable_m02C1751177C34AA643B73970BE6F0E6E8DA23B56 (WitResponseHandler_t3BD2BF0058605CE13CD87228A0BBB9CDAFC74AF1* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityAction_1_t47424DEBAD5E8E58E4A0DD7FD64A5834C41F7896_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityAction_1_t7814257576DA9D92A82FF91BA3EE537553AC1BC8_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityAction_1_tF266B43F3B48247A8143BA850AC13FFC634512E9_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityEvent_1_RemoveListener_m24E95CAC4E4F02CF9CB50F3BAC259486D572D04D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityEvent_1_RemoveListener_m3B91983165CA1EF3E27EB37077C0476839079395_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityEvent_1_RemoveListener_m84C07A346FB285EE2C1488B1F0D69BC6557E8D54_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		// if (Voice)
		VoiceService_t601CB0E6879961EC1F8179A8E20EB9DD7AF6A82E* L_0 = __this->___Voice_4;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Implicit_m93896EF7D68FA113C42D3FE2BC6F661FC7EF514A(L_0, NULL);
		V_0 = L_1;
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_007b;
		}
	}
	{
		// Voice.VoiceEvents.OnSend.RemoveListener(OnRequestSend);
		VoiceService_t601CB0E6879961EC1F8179A8E20EB9DD7AF6A82E* L_3 = __this->___Voice_4;
		NullCheck(L_3);
		VoiceEvents_t7755B8C2A9074FA12090CF7288E5512DFD225EA9* L_4;
		L_4 = VirtualFuncInvoker0< VoiceEvents_t7755B8C2A9074FA12090CF7288E5512DFD225EA9* >::Invoke(35 /* Meta.WitAi.Events.VoiceEvents Meta.WitAi.VoiceService::get_VoiceEvents() */, L_3);
		NullCheck(L_4);
		VoiceServiceRequestEvent_t7340AD8EBA1B3D36E1A95E47C8DBCD954F1DED13* L_5;
		L_5 = SpeechEvents_get_OnSend_m848D965F028D864B6175BA77425848BA86153A13_inline(L_4, NULL);
		UnityAction_1_t47424DEBAD5E8E58E4A0DD7FD64A5834C41F7896* L_6 = (UnityAction_1_t47424DEBAD5E8E58E4A0DD7FD64A5834C41F7896*)il2cpp_codegen_object_new(UnityAction_1_t47424DEBAD5E8E58E4A0DD7FD64A5834C41F7896_il2cpp_TypeInfo_var);
		NullCheck(L_6);
		UnityAction_1__ctor_mA3112565DCE97F8CEE37CB0C23589F7B5385FE82(L_6, __this, (intptr_t)((void*)GetVirtualMethodInfo(__this, 6)), NULL);
		NullCheck(L_5);
		UnityEvent_1_RemoveListener_m24E95CAC4E4F02CF9CB50F3BAC259486D572D04D(L_5, L_6, UnityEvent_1_RemoveListener_m24E95CAC4E4F02CF9CB50F3BAC259486D572D04D_RuntimeMethod_var);
		// Voice.VoiceEvents.OnValidatePartialResponse.RemoveListener(HandleValidateEarlyResponse);
		VoiceService_t601CB0E6879961EC1F8179A8E20EB9DD7AF6A82E* L_7 = __this->___Voice_4;
		NullCheck(L_7);
		VoiceEvents_t7755B8C2A9074FA12090CF7288E5512DFD225EA9* L_8;
		L_8 = VirtualFuncInvoker0< VoiceEvents_t7755B8C2A9074FA12090CF7288E5512DFD225EA9* >::Invoke(35 /* Meta.WitAi.Events.VoiceEvents Meta.WitAi.VoiceService::get_VoiceEvents() */, L_7);
		NullCheck(L_8);
		WitValidationEvent_t731FF211C8D0215476601B54ECDDD2D1DF38974C* L_9;
		L_9 = VoiceEvents_get_OnValidatePartialResponse_m62DE8DDDEE5ADC162380EAF17572CE4472913667_inline(L_8, NULL);
		UnityAction_1_tF266B43F3B48247A8143BA850AC13FFC634512E9* L_10 = (UnityAction_1_tF266B43F3B48247A8143BA850AC13FFC634512E9*)il2cpp_codegen_object_new(UnityAction_1_tF266B43F3B48247A8143BA850AC13FFC634512E9_il2cpp_TypeInfo_var);
		NullCheck(L_10);
		UnityAction_1__ctor_mBA2D24276288A034439DDF2DC789550CB1DA6C22(L_10, __this, (intptr_t)((void*)GetVirtualMethodInfo(__this, 7)), NULL);
		NullCheck(L_9);
		UnityEvent_1_RemoveListener_m3B91983165CA1EF3E27EB37077C0476839079395(L_9, L_10, UnityEvent_1_RemoveListener_m3B91983165CA1EF3E27EB37077C0476839079395_RuntimeMethod_var);
		// Voice.VoiceEvents.OnResponse.RemoveListener(HandleFinalResponse);
		VoiceService_t601CB0E6879961EC1F8179A8E20EB9DD7AF6A82E* L_11 = __this->___Voice_4;
		NullCheck(L_11);
		VoiceEvents_t7755B8C2A9074FA12090CF7288E5512DFD225EA9* L_12;
		L_12 = VirtualFuncInvoker0< VoiceEvents_t7755B8C2A9074FA12090CF7288E5512DFD225EA9* >::Invoke(35 /* Meta.WitAi.Events.VoiceEvents Meta.WitAi.VoiceService::get_VoiceEvents() */, L_11);
		NullCheck(L_12);
		WitResponseEvent_tC85152AAABC87956DF604749EEA671ADAA9EFFDA* L_13;
		L_13 = SpeechEvents_get_OnResponse_m35A479475B9CCCE66CDA4028A0A6AE6343E50400_inline(L_12, NULL);
		UnityAction_1_t7814257576DA9D92A82FF91BA3EE537553AC1BC8* L_14 = (UnityAction_1_t7814257576DA9D92A82FF91BA3EE537553AC1BC8*)il2cpp_codegen_object_new(UnityAction_1_t7814257576DA9D92A82FF91BA3EE537553AC1BC8_il2cpp_TypeInfo_var);
		NullCheck(L_14);
		UnityAction_1__ctor_m8B1FC56332BDF48F305E5F292D2F751AAC2A90EE(L_14, __this, (intptr_t)((void*)GetVirtualMethodInfo(__this, 8)), NULL);
		NullCheck(L_13);
		UnityEvent_1_RemoveListener_m84C07A346FB285EE2C1488B1F0D69BC6557E8D54(L_13, L_14, UnityEvent_1_RemoveListener_m84C07A346FB285EE2C1488B1F0D69BC6557E8D54_RuntimeMethod_var);
	}

IL_007b:
	{
		// }
		return;
	}
}
// System.Void Meta.WitAi.CallbackHandlers.WitResponseHandler::OnRequestSend(Meta.WitAi.Requests.VoiceServiceRequest)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WitResponseHandler_OnRequestSend_mF64C9124E1403D3B1DD07586112BD9D40E015D33 (WitResponseHandler_t3BD2BF0058605CE13CD87228A0BBB9CDAFC74AF1* __this, VoiceServiceRequest_tCF844F597C059D6A354311EB2BD5644AE5E8E536* ___request0, const RuntimeMethod* method) 
{
	{
		// _validated = false;
		__this->____validated_6 = (bool)0;
		// }
		return;
	}
}
// System.Void Meta.WitAi.CallbackHandlers.WitResponseHandler::HandleValidateEarlyResponse(Meta.WitAi.Data.VoiceSession)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WitResponseHandler_HandleValidateEarlyResponse_m4EA66386A19F9C6F5FA6ED7E18A2129BDD6E55CA (WitResponseHandler_t3BD2BF0058605CE13CD87228A0BBB9CDAFC74AF1* __this, VoiceSession_t375D68D23448E9C51C8E4CE1972477813E92E68B* ___session0, const RuntimeMethod* method) 
{
	bool V_0 = false;
	String_t* V_1 = NULL;
	bool V_2 = false;
	int32_t G_B3_0 = 0;
	{
		// if (ValidateEarly && !_validated)
		bool L_0 = __this->___ValidateEarly_5;
		if (!L_0)
		{
			goto IL_0014;
		}
	}
	{
		bool L_1 = __this->____validated_6;
		G_B3_0 = ((((int32_t)L_1) == ((int32_t)0))? 1 : 0);
		goto IL_0015;
	}

IL_0014:
	{
		G_B3_0 = 0;
	}

IL_0015:
	{
		V_0 = (bool)G_B3_0;
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_0050;
		}
	}
	{
		// string invalidReason = OnValidateResponse(session.response, true);
		VoiceSession_t375D68D23448E9C51C8E4CE1972477813E92E68B* L_3 = ___session0;
		NullCheck(L_3);
		WitResponseNode_t1BFF810F15B21416F5F6D0A1CAAF03CEF942038C* L_4 = L_3->___response_1;
		String_t* L_5;
		L_5 = VirtualFuncInvoker2< String_t*, WitResponseNode_t1BFF810F15B21416F5F6D0A1CAAF03CEF942038C*, bool >::Invoke(9 /* System.String Meta.WitAi.CallbackHandlers.WitResponseHandler::OnValidateResponse(Meta.WitAi.Json.WitResponseNode,System.Boolean) */, __this, L_4, (bool)1);
		V_1 = L_5;
		// if (string.IsNullOrEmpty(invalidReason))
		String_t* L_6 = V_1;
		bool L_7;
		L_7 = String_IsNullOrEmpty_mEA9E3FB005AC28FE02E69FCF95A7B8456192B478(L_6, NULL);
		V_2 = L_7;
		bool L_8 = V_2;
		if (!L_8)
		{
			goto IL_004f;
		}
	}
	{
		// _validated = true;
		__this->____validated_6 = (bool)1;
		// OnResponseSuccess(session.response);
		VoiceSession_t375D68D23448E9C51C8E4CE1972477813E92E68B* L_9 = ___session0;
		NullCheck(L_9);
		WitResponseNode_t1BFF810F15B21416F5F6D0A1CAAF03CEF942038C* L_10 = L_9->___response_1;
		VirtualActionInvoker1< WitResponseNode_t1BFF810F15B21416F5F6D0A1CAAF03CEF942038C* >::Invoke(11 /* System.Void Meta.WitAi.CallbackHandlers.WitResponseHandler::OnResponseSuccess(Meta.WitAi.Json.WitResponseNode) */, __this, L_10);
		// session.validResponse = true;
		VoiceSession_t375D68D23448E9C51C8E4CE1972477813E92E68B* L_11 = ___session0;
		NullCheck(L_11);
		L_11->___validResponse_2 = (bool)1;
	}

IL_004f:
	{
	}

IL_0050:
	{
		// }
		return;
	}
}
// System.Void Meta.WitAi.CallbackHandlers.WitResponseHandler::HandleFinalResponse(Meta.WitAi.Json.WitResponseNode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WitResponseHandler_HandleFinalResponse_mA72C4C58DE375B3A6B091F98E0A4658F6F0B0E1D (WitResponseHandler_t3BD2BF0058605CE13CD87228A0BBB9CDAFC74AF1* __this, WitResponseNode_t1BFF810F15B21416F5F6D0A1CAAF03CEF942038C* ___response0, const RuntimeMethod* method) 
{
	bool V_0 = false;
	String_t* V_1 = NULL;
	bool V_2 = false;
	{
		// if (!_validated)
		bool L_0 = __this->____validated_6;
		V_0 = (bool)((((int32_t)L_0) == ((int32_t)0))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0044;
		}
	}
	{
		// string invalidReason = OnValidateResponse(response, false);
		WitResponseNode_t1BFF810F15B21416F5F6D0A1CAAF03CEF942038C* L_2 = ___response0;
		String_t* L_3;
		L_3 = VirtualFuncInvoker2< String_t*, WitResponseNode_t1BFF810F15B21416F5F6D0A1CAAF03CEF942038C*, bool >::Invoke(9 /* System.String Meta.WitAi.CallbackHandlers.WitResponseHandler::OnValidateResponse(Meta.WitAi.Json.WitResponseNode,System.Boolean) */, __this, L_2, (bool)0);
		V_1 = L_3;
		// if (!string.IsNullOrEmpty(invalidReason))
		String_t* L_4 = V_1;
		bool L_5;
		L_5 = String_IsNullOrEmpty_mEA9E3FB005AC28FE02E69FCF95A7B8456192B478(L_4, NULL);
		V_2 = (bool)((((int32_t)L_5) == ((int32_t)0))? 1 : 0);
		bool L_6 = V_2;
		if (!L_6)
		{
			goto IL_0032;
		}
	}
	{
		// OnResponseInvalid(response, invalidReason);
		WitResponseNode_t1BFF810F15B21416F5F6D0A1CAAF03CEF942038C* L_7 = ___response0;
		String_t* L_8 = V_1;
		VirtualActionInvoker2< WitResponseNode_t1BFF810F15B21416F5F6D0A1CAAF03CEF942038C*, String_t* >::Invoke(10 /* System.Void Meta.WitAi.CallbackHandlers.WitResponseHandler::OnResponseInvalid(Meta.WitAi.Json.WitResponseNode,System.String) */, __this, L_7, L_8);
		goto IL_003c;
	}

IL_0032:
	{
		// OnResponseSuccess(response);
		WitResponseNode_t1BFF810F15B21416F5F6D0A1CAAF03CEF942038C* L_9 = ___response0;
		VirtualActionInvoker1< WitResponseNode_t1BFF810F15B21416F5F6D0A1CAAF03CEF942038C* >::Invoke(11 /* System.Void Meta.WitAi.CallbackHandlers.WitResponseHandler::OnResponseSuccess(Meta.WitAi.Json.WitResponseNode) */, __this, L_9);
	}

IL_003c:
	{
		// _validated = true;
		__this->____validated_6 = (bool)1;
	}

IL_0044:
	{
		// }
		return;
	}
}
// System.Boolean Meta.WitAi.CallbackHandlers.WitResponseHandler::RefreshConfidenceRange(System.Single,Meta.WitAi.CallbackHandlers.ConfidenceRange[],System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WitResponseHandler_RefreshConfidenceRange_mB3DFDEC327EB0141BD398F8F3D6141514ECAF901 (float ___confidence0, ConfidenceRangeU5BU5D_t436B72D1C2A21AE91F57767E7CCA104C79700583* ___confidenceRanges1, bool ___allowConfidenceOverlap2, const RuntimeMethod* method) 
{
	bool V_0 = false;
	bool V_1 = false;
	int32_t V_2 = 0;
	ConfidenceRange_tE0A93D2F39AE1C9E6340C39D30A9201709B737E8* V_3 = NULL;
	bool V_4 = false;
	bool V_5 = false;
	bool V_6 = false;
	bool V_7 = false;
	bool V_8 = false;
	int32_t G_B4_0 = 0;
	UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* G_B9_0 = NULL;
	UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* G_B8_0 = NULL;
	UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* G_B15_0 = NULL;
	UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* G_B14_0 = NULL;
	int32_t G_B22_0 = 0;
	{
		// bool foundIn = false;
		V_0 = (bool)0;
		// bool foundOut = false;
		V_1 = (bool)0;
		// for (int i = 0; null != confidenceRanges && i < confidenceRanges.Length; i++)
		V_2 = 0;
		goto IL_007d;
	}

IL_0009:
	{
		// var range = confidenceRanges[i];
		ConfidenceRangeU5BU5D_t436B72D1C2A21AE91F57767E7CCA104C79700583* L_0 = ___confidenceRanges1;
		int32_t L_1 = V_2;
		NullCheck(L_0);
		int32_t L_2 = L_1;
		ConfidenceRange_tE0A93D2F39AE1C9E6340C39D30A9201709B737E8* L_3 = (L_0)->GetAt(static_cast<il2cpp_array_size_t>(L_2));
		V_3 = L_3;
		// if (confidence >= range.minConfidence &&
		//     confidence <= range.maxConfidence)
		float L_4 = ___confidence0;
		ConfidenceRange_tE0A93D2F39AE1C9E6340C39D30A9201709B737E8* L_5 = V_3;
		NullCheck(L_5);
		float L_6 = L_5->___minConfidence_0;
		if ((!(((float)L_4) >= ((float)L_6))))
		{
			goto IL_0025;
		}
	}
	{
		float L_7 = ___confidence0;
		ConfidenceRange_tE0A93D2F39AE1C9E6340C39D30A9201709B737E8* L_8 = V_3;
		NullCheck(L_8);
		float L_9 = L_8->___maxConfidence_1;
		G_B4_0 = ((((int32_t)((!(((float)L_7) <= ((float)L_9)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		goto IL_0026;
	}

IL_0025:
	{
		G_B4_0 = 0;
	}

IL_0026:
	{
		V_4 = (bool)G_B4_0;
		bool L_10 = V_4;
		if (!L_10)
		{
			goto IL_0053;
		}
	}
	{
		// if (!allowConfidenceOverlap && foundIn)
		bool L_11 = ___allowConfidenceOverlap2;
		bool L_12 = V_0;
		V_5 = (bool)((int32_t)(((((int32_t)L_11) == ((int32_t)0))? 1 : 0)&(int32_t)L_12));
		bool L_13 = V_5;
		if (!L_13)
		{
			goto IL_003c;
		}
	}
	{
		// continue;
		goto IL_0079;
	}

IL_003c:
	{
		// range.onWithinConfidenceRange?.Invoke();
		ConfidenceRange_tE0A93D2F39AE1C9E6340C39D30A9201709B737E8* L_14 = V_3;
		NullCheck(L_14);
		UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* L_15 = L_14->___onWithinConfidenceRange_2;
		UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* L_16 = L_15;
		G_B8_0 = L_16;
		if (L_16)
		{
			G_B9_0 = L_16;
			goto IL_0048;
		}
	}
	{
		goto IL_004e;
	}

IL_0048:
	{
		NullCheck(G_B9_0);
		UnityEvent_Invoke_mFBF80D59B03C30C5FE6A06F897D954ACADE061D2(G_B9_0, NULL);
	}

IL_004e:
	{
		// foundIn = true;
		V_0 = (bool)1;
		goto IL_0078;
	}

IL_0053:
	{
		// if (!allowConfidenceOverlap && foundOut)
		bool L_17 = ___allowConfidenceOverlap2;
		bool L_18 = V_1;
		V_6 = (bool)((int32_t)(((((int32_t)L_17) == ((int32_t)0))? 1 : 0)&(int32_t)L_18));
		bool L_19 = V_6;
		if (!L_19)
		{
			goto IL_0063;
		}
	}
	{
		// continue;
		goto IL_0079;
	}

IL_0063:
	{
		// range.onOutsideConfidenceRange?.Invoke();
		ConfidenceRange_tE0A93D2F39AE1C9E6340C39D30A9201709B737E8* L_20 = V_3;
		NullCheck(L_20);
		UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* L_21 = L_20->___onOutsideConfidenceRange_3;
		UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* L_22 = L_21;
		G_B14_0 = L_22;
		if (L_22)
		{
			G_B15_0 = L_22;
			goto IL_006f;
		}
	}
	{
		goto IL_0075;
	}

IL_006f:
	{
		NullCheck(G_B15_0);
		UnityEvent_Invoke_mFBF80D59B03C30C5FE6A06F897D954ACADE061D2(G_B15_0, NULL);
	}

IL_0075:
	{
		// foundOut = true;
		V_1 = (bool)1;
	}

IL_0078:
	{
	}

IL_0079:
	{
		// for (int i = 0; null != confidenceRanges && i < confidenceRanges.Length; i++)
		int32_t L_23 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_23, 1));
	}

IL_007d:
	{
		// for (int i = 0; null != confidenceRanges && i < confidenceRanges.Length; i++)
		ConfidenceRangeU5BU5D_t436B72D1C2A21AE91F57767E7CCA104C79700583* L_24 = ___confidenceRanges1;
		if (!L_24)
		{
			goto IL_0088;
		}
	}
	{
		int32_t L_25 = V_2;
		ConfidenceRangeU5BU5D_t436B72D1C2A21AE91F57767E7CCA104C79700583* L_26 = ___confidenceRanges1;
		NullCheck(L_26);
		G_B22_0 = ((((int32_t)L_25) < ((int32_t)((int32_t)(((RuntimeArray*)L_26)->max_length))))? 1 : 0);
		goto IL_0089;
	}

IL_0088:
	{
		G_B22_0 = 0;
	}

IL_0089:
	{
		V_7 = (bool)G_B22_0;
		bool L_27 = V_7;
		if (L_27)
		{
			goto IL_0009;
		}
	}
	{
		// return foundIn;
		bool L_28 = V_0;
		V_8 = L_28;
		goto IL_0097;
	}

IL_0097:
	{
		// }
		bool L_29 = V_8;
		return L_29;
	}
}
// System.Void Meta.WitAi.CallbackHandlers.WitResponseHandler::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WitResponseHandler__ctor_mA92FB5CA1D631E9FDEB631D826AB0945A3E6D609 (WitResponseHandler_t3BD2BF0058605CE13CD87228A0BBB9CDAFC74AF1* __this, const RuntimeMethod* method) 
{
	{
		// [SerializeField] public bool ValidateEarly = false;
		__this->___ValidateEarly_5 = (bool)0;
		// private bool _validated = false;
		__this->____validated_6 = (bool)0;
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
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
// System.String Meta.WitAi.CallbackHandlers.WitResponseMatcher::OnValidateResponse(Meta.WitAi.Json.WitResponseNode,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* WitResponseMatcher_OnValidateResponse_m370C2401BB4867D568DC09F2FD73C3AF676FBDBE (WitResponseMatcher_t6B41EE08DD1CEB6E51894DCB19B4BFE874BA22D8* __this, WitResponseNode_t1BFF810F15B21416F5F6D0A1CAAF03CEF942038C* ___response0, bool ___isEarlyResponse1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral83DFE3E28BC3DAE984C331299C4274E1BB11B69D);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	bool V_1 = false;
	String_t* V_2 = NULL;
	bool V_3 = false;
	int32_t G_B5_0 = 0;
	{
		// string result = base.OnValidateResponse(response, isEarlyResponse);
		WitResponseNode_t1BFF810F15B21416F5F6D0A1CAAF03CEF942038C* L_0 = ___response0;
		bool L_1 = ___isEarlyResponse1;
		String_t* L_2;
		L_2 = WitIntentMatcher_OnValidateResponse_m48D902D74EB6FAD8EB8FD83161207D8A83E97EEB(__this, L_0, L_1, NULL);
		V_0 = L_2;
		// if (!string.IsNullOrEmpty(result))
		String_t* L_3 = V_0;
		bool L_4;
		L_4 = String_IsNullOrEmpty_mEA9E3FB005AC28FE02E69FCF95A7B8456192B478(L_3, NULL);
		V_1 = (bool)((((int32_t)L_4) == ((int32_t)0))? 1 : 0);
		bool L_5 = V_1;
		if (!L_5)
		{
			goto IL_001c;
		}
	}
	{
		// return result;
		String_t* L_6 = V_0;
		V_2 = L_6;
		goto IL_0041;
	}

IL_001c:
	{
		// if (isEarlyResponse && !ValueMatches(response))
		bool L_7 = ___isEarlyResponse1;
		if (!L_7)
		{
			goto IL_002b;
		}
	}
	{
		WitResponseNode_t1BFF810F15B21416F5F6D0A1CAAF03CEF942038C* L_8 = ___response0;
		bool L_9;
		L_9 = WitResponseMatcher_ValueMatches_mC0BCB87B0C3758708495D1BA1F3C39DD888FCFDA(__this, L_8, NULL);
		G_B5_0 = ((((int32_t)L_9) == ((int32_t)0))? 1 : 0);
		goto IL_002c;
	}

IL_002b:
	{
		G_B5_0 = 0;
	}

IL_002c:
	{
		V_3 = (bool)G_B5_0;
		bool L_10 = V_3;
		if (!L_10)
		{
			goto IL_0039;
		}
	}
	{
		// return "No value matches";
		V_2 = _stringLiteral83DFE3E28BC3DAE984C331299C4274E1BB11B69D;
		goto IL_0041;
	}

IL_0039:
	{
		// return string.Empty;
		String_t* L_11 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->___Empty_6;
		V_2 = L_11;
		goto IL_0041;
	}

IL_0041:
	{
		// }
		String_t* L_12 = V_2;
		return L_12;
	}
}
// System.Void Meta.WitAi.CallbackHandlers.WitResponseMatcher::OnResponseInvalid(Meta.WitAi.Json.WitResponseNode,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WitResponseMatcher_OnResponseInvalid_m6BBA9D0C9A3CEB80A84D86C8C7ECE14AB7D84599 (WitResponseMatcher_t6B41EE08DD1CEB6E51894DCB19B4BFE874BA22D8* __this, WitResponseNode_t1BFF810F15B21416F5F6D0A1CAAF03CEF942038C* ___response0, String_t* ___error1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityEvent_1_Invoke_mA633B48B5D287DA856FB954AC3E4012487E63C15_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	int32_t G_B3_0 = 0;
	StringEvent_tC948A866B2D2C1ECC0783ABC07A4B876C8E28B5B* G_B6_0 = NULL;
	StringEvent_tC948A866B2D2C1ECC0783ABC07A4B876C8E28B5B* G_B5_0 = NULL;
	StringEvent_tC948A866B2D2C1ECC0783ABC07A4B876C8E28B5B* G_B11_0 = NULL;
	StringEvent_tC948A866B2D2C1ECC0783ABC07A4B876C8E28B5B* G_B10_0 = NULL;
	{
		// if (response.GetIntents().Length > 0 || response.EntityCount() > 0)
		WitResponseNode_t1BFF810F15B21416F5F6D0A1CAAF03CEF942038C* L_0 = ___response0;
		WitIntentDataU5BU5D_tA1E1A7F9E9C566D8BA4049F086E2ECD245E7ABF4* L_1;
		L_1 = WitResultUtilities_GetIntents_m40E83F95A02AC47F9AD129CA1F7075C1C5EDD13A(L_0, NULL);
		NullCheck(L_1);
		if ((((RuntimeArray*)L_1)->max_length))
		{
			goto IL_0015;
		}
	}
	{
		WitResponseNode_t1BFF810F15B21416F5F6D0A1CAAF03CEF942038C* L_2 = ___response0;
		int32_t L_3;
		L_3 = WitResultUtilities_EntityCount_mEECB7771340132F814293C379CF8CCDC15D782E9(L_2, NULL);
		G_B3_0 = ((((int32_t)L_3) > ((int32_t)0))? 1 : 0);
		goto IL_0016;
	}

IL_0015:
	{
		G_B3_0 = 1;
	}

IL_0016:
	{
		V_0 = (bool)G_B3_0;
		bool L_4 = V_0;
		if (!L_4)
		{
			goto IL_0034;
		}
	}
	{
		// onDidNotMatch?.Invoke(response.GetTranscription());
		StringEvent_tC948A866B2D2C1ECC0783ABC07A4B876C8E28B5B* L_5 = __this->___onDidNotMatch_12;
		StringEvent_tC948A866B2D2C1ECC0783ABC07A4B876C8E28B5B* L_6 = L_5;
		G_B5_0 = L_6;
		if (L_6)
		{
			G_B6_0 = L_6;
			goto IL_0027;
		}
	}
	{
		goto IL_0033;
	}

IL_0027:
	{
		WitResponseNode_t1BFF810F15B21416F5F6D0A1CAAF03CEF942038C* L_7 = ___response0;
		String_t* L_8;
		L_8 = WitResultUtilities_GetTranscription_m8B205AAE88950C55930BBF443E3473804483B60F(L_7, NULL);
		NullCheck(G_B6_0);
		UnityEvent_1_Invoke_mA633B48B5D287DA856FB954AC3E4012487E63C15(G_B6_0, L_8, UnityEvent_1_Invoke_mA633B48B5D287DA856FB954AC3E4012487E63C15_RuntimeMethod_var);
	}

IL_0033:
	{
	}

IL_0034:
	{
		// if (response.GetIntents().Length == 0)
		WitResponseNode_t1BFF810F15B21416F5F6D0A1CAAF03CEF942038C* L_9 = ___response0;
		WitIntentDataU5BU5D_tA1E1A7F9E9C566D8BA4049F086E2ECD245E7ABF4* L_10;
		L_10 = WitResultUtilities_GetIntents_m40E83F95A02AC47F9AD129CA1F7075C1C5EDD13A(L_9, NULL);
		NullCheck(L_10);
		V_1 = (bool)((((int32_t)(((RuntimeArray*)L_10)->max_length)) == ((int32_t)0))? 1 : 0);
		bool L_11 = V_1;
		if (!L_11)
		{
			goto IL_005c;
		}
	}
	{
		// onOutOfDomain?.Invoke(response.GetTranscription());
		StringEvent_tC948A866B2D2C1ECC0783ABC07A4B876C8E28B5B* L_12 = __this->___onOutOfDomain_13;
		StringEvent_tC948A866B2D2C1ECC0783ABC07A4B876C8E28B5B* L_13 = L_12;
		G_B10_0 = L_13;
		if (L_13)
		{
			G_B11_0 = L_13;
			goto IL_004f;
		}
	}
	{
		goto IL_005b;
	}

IL_004f:
	{
		WitResponseNode_t1BFF810F15B21416F5F6D0A1CAAF03CEF942038C* L_14 = ___response0;
		String_t* L_15;
		L_15 = WitResultUtilities_GetTranscription_m8B205AAE88950C55930BBF443E3473804483B60F(L_14, NULL);
		NullCheck(G_B11_0);
		UnityEvent_1_Invoke_mA633B48B5D287DA856FB954AC3E4012487E63C15(G_B11_0, L_15, UnityEvent_1_Invoke_mA633B48B5D287DA856FB954AC3E4012487E63C15_RuntimeMethod_var);
	}

IL_005b:
	{
	}

IL_005c:
	{
		// }
		return;
	}
}
// System.Void Meta.WitAi.CallbackHandlers.WitResponseMatcher::OnResponseSuccess(Meta.WitAi.Json.WitResponseNode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WitResponseMatcher_OnResponseSuccess_m2DEB51AE589F7EB483BF2935963387580C247CCC (WitResponseMatcher_t6B41EE08DD1CEB6E51894DCB19B4BFE874BA22D8* __this, WitResponseNode_t1BFF810F15B21416F5F6D0A1CAAF03CEF942038C* ___response0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_mF10DB1D3CBB0B14215F0E4F8AB4934A1955E5351_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_ToArray_m2C402D882AA60FC1D5C7C09A129BE7779F833B4A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_mCA8DD57EAC70C2B5923DBB9D5A77CEAC22E7068E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityEvent_1_Invoke_mA633B48B5D287DA856FB954AC3E4012487E63C15_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityEvent_1_Invoke_mDABA5BBDA189937099CB491730CD6AC57D7A5F94_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WitResponseMatcher_t6B41EE08DD1CEB6E51894DCB19B4BFE874BA22D8_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0C3C6829C3CCF8020C6AC45B87963ADC095CD44A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4D8D9C94AC5DA5FCED2EC8A64E10E714A2515C30);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		s_Il2CppMethodInitialized = true;
	}
	List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* V_0 = NULL;
	bool V_1 = false;
	int32_t V_2 = 0;
	FormattedValueEvents_t0D0D440F35C91FAA243428A4B45156402090018C* V_3 = NULL;
	String_t* V_4 = NULL;
	int32_t V_5 = 0;
	WitResponseReference_t7B74D84BF98481046E19F0CE0EB5A3F4203D2581* V_6 = NULL;
	String_t* V_7 = NULL;
	bool V_8 = false;
	bool V_9 = false;
	bool V_10 = false;
	bool V_11 = false;
	bool V_12 = false;
	bool V_13 = false;
	ValuePathMatcherU5BU5D_tDC6C5FBC8AD9CDC953975B35F515F2F1EC24066E* V_14 = NULL;
	int32_t V_15 = 0;
	ValuePathMatcher_t2058BD1F2F9C5A162DFBD3FE61BD97F2D840E35E* V_16 = NULL;
	String_t* V_17 = NULL;
	bool V_18 = false;
	float V_19 = 0.0f;
	ValueEvent_t7E99BC212C04EA8B32FFF6900F7AEC1C55A2AC32* G_B14_0 = NULL;
	ValueEvent_t7E99BC212C04EA8B32FFF6900F7AEC1C55A2AC32* G_B13_0 = NULL;
	StringEvent_tC948A866B2D2C1ECC0783ABC07A4B876C8E28B5B* G_B21_0 = NULL;
	StringEvent_tC948A866B2D2C1ECC0783ABC07A4B876C8E28B5B* G_B20_0 = NULL;
	float G_B28_0 = 0.0f;
	{
		// if (ValueMatches(response))
		WitResponseNode_t1BFF810F15B21416F5F6D0A1CAAF03CEF942038C* L_0 = ___response0;
		bool L_1;
		L_1 = WitResponseMatcher_ValueMatches_mC0BCB87B0C3758708495D1BA1F3C39DD888FCFDA(__this, L_0, NULL);
		V_1 = L_1;
		bool L_2 = V_1;
		if (!L_2)
		{
			goto IL_0133;
		}
	}
	{
		// for (int j = 0; j < formattedValueEvents.Length; j++)
		V_2 = 0;
		goto IL_011c;
	}

IL_0017:
	{
		// var formatEvent = formattedValueEvents[j];
		FormattedValueEventsU5BU5D_t0E1D60C2D6BF5C4DCF75ABCAF224658107EF33F5* L_3 = __this->___formattedValueEvents_10;
		int32_t L_4 = V_2;
		NullCheck(L_3);
		int32_t L_5 = L_4;
		FormattedValueEvents_t0D0D440F35C91FAA243428A4B45156402090018C* L_6 = (L_3)->GetAt(static_cast<il2cpp_array_size_t>(L_5));
		V_3 = L_6;
		// var result = formatEvent.format;
		FormattedValueEvents_t0D0D440F35C91FAA243428A4B45156402090018C* L_7 = V_3;
		NullCheck(L_7);
		String_t* L_8 = L_7->___format_0;
		V_4 = L_8;
		// for (int i = 0; i < valueMatchers.Length; i++)
		V_5 = 0;
		goto IL_00dc;
	}

IL_0031:
	{
		// var reference = valueMatchers[i].Reference;
		ValuePathMatcherU5BU5D_tDC6C5FBC8AD9CDC953975B35F515F2F1EC24066E* L_9 = __this->___valueMatchers_9;
		int32_t L_10 = V_5;
		NullCheck(L_9);
		int32_t L_11 = L_10;
		ValuePathMatcher_t2058BD1F2F9C5A162DFBD3FE61BD97F2D840E35E* L_12 = (L_9)->GetAt(static_cast<il2cpp_array_size_t>(L_11));
		NullCheck(L_12);
		WitResponseReference_t7B74D84BF98481046E19F0CE0EB5A3F4203D2581* L_13;
		L_13 = ValuePathMatcher_get_Reference_m6808DF8159190FC28164BFC885B56EBCEF4B0F97(L_12, NULL);
		V_6 = L_13;
		// var value = reference.GetStringValue(response);
		WitResponseReference_t7B74D84BF98481046E19F0CE0EB5A3F4203D2581* L_14 = V_6;
		WitResponseNode_t1BFF810F15B21416F5F6D0A1CAAF03CEF942038C* L_15 = ___response0;
		NullCheck(L_14);
		String_t* L_16;
		L_16 = VirtualFuncInvoker1< String_t*, WitResponseNode_t1BFF810F15B21416F5F6D0A1CAAF03CEF942038C* >::Invoke(4 /* System.String Meta.WitAi.WitResponseReference::GetStringValue(Meta.WitAi.Json.WitResponseNode) */, L_14, L_15);
		V_7 = L_16;
		// if (!string.IsNullOrEmpty(formatEvent.format))
		FormattedValueEvents_t0D0D440F35C91FAA243428A4B45156402090018C* L_17 = V_3;
		NullCheck(L_17);
		String_t* L_18 = L_17->___format_0;
		bool L_19;
		L_19 = String_IsNullOrEmpty_mEA9E3FB005AC28FE02E69FCF95A7B8456192B478(L_18, NULL);
		V_8 = (bool)((((int32_t)L_19) == ((int32_t)0))? 1 : 0);
		bool L_20 = V_8;
		if (!L_20)
		{
			goto IL_00d5;
		}
	}
	{
		// if (!string.IsNullOrEmpty(value))
		String_t* L_21 = V_7;
		bool L_22;
		L_22 = String_IsNullOrEmpty_mEA9E3FB005AC28FE02E69FCF95A7B8456192B478(L_21, NULL);
		V_9 = (bool)((((int32_t)L_22) == ((int32_t)0))? 1 : 0);
		bool L_23 = V_9;
		if (!L_23)
		{
			goto IL_00a7;
		}
	}
	{
		// result = valueRegex.Replace(result, value, 1);
		il2cpp_codegen_runtime_class_init_inline(WitResponseMatcher_t6B41EE08DD1CEB6E51894DCB19B4BFE874BA22D8_il2cpp_TypeInfo_var);
		Regex_tE773142C2BE45C5D362B0F815AFF831707A51772* L_24 = ((WitResponseMatcher_t6B41EE08DD1CEB6E51894DCB19B4BFE874BA22D8_StaticFields*)il2cpp_codegen_static_fields_for(WitResponseMatcher_t6B41EE08DD1CEB6E51894DCB19B4BFE874BA22D8_il2cpp_TypeInfo_var))->___valueRegex_14;
		String_t* L_25 = V_4;
		String_t* L_26 = V_7;
		NullCheck(L_24);
		String_t* L_27;
		L_27 = Regex_Replace_m7CFA4979545DFCE842FC4DEFBAFD25F505559492(L_24, L_25, L_26, 1, NULL);
		V_4 = L_27;
		// result = result.Replace("{" + i + "}", value);
		String_t* L_28 = V_4;
		String_t* L_29;
		L_29 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5((&V_5), NULL);
		String_t* L_30;
		L_30 = String_Concat_m8855A6DE10F84DA7F4EC113CADDB59873A25573B(_stringLiteral0C3C6829C3CCF8020C6AC45B87963ADC095CD44A, L_29, _stringLiteral4D8D9C94AC5DA5FCED2EC8A64E10E714A2515C30, NULL);
		String_t* L_31 = V_7;
		NullCheck(L_28);
		String_t* L_32;
		L_32 = String_Replace_mABDB7003A1D0AEDCAE9FF85E3DFFFBA752D2A166(L_28, L_30, L_31, NULL);
		V_4 = L_32;
		goto IL_00d4;
	}

IL_00a7:
	{
		// else if (result.Contains("{" + i + "}"))
		String_t* L_33 = V_4;
		String_t* L_34;
		L_34 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5((&V_5), NULL);
		String_t* L_35;
		L_35 = String_Concat_m8855A6DE10F84DA7F4EC113CADDB59873A25573B(_stringLiteral0C3C6829C3CCF8020C6AC45B87963ADC095CD44A, L_34, _stringLiteral4D8D9C94AC5DA5FCED2EC8A64E10E714A2515C30, NULL);
		NullCheck(L_33);
		bool L_36;
		L_36 = String_Contains_m6D77B121FADA7CA5F397C0FABB65DA62DF03B6C3(L_33, L_35, NULL);
		V_10 = L_36;
		bool L_37 = V_10;
		if (!L_37)
		{
			goto IL_00d4;
		}
	}
	{
		// result = "";
		V_4 = _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
		// break;
		goto IL_00f1;
	}

IL_00d4:
	{
	}

IL_00d5:
	{
		// for (int i = 0; i < valueMatchers.Length; i++)
		int32_t L_38 = V_5;
		V_5 = ((int32_t)il2cpp_codegen_add(L_38, 1));
	}

IL_00dc:
	{
		// for (int i = 0; i < valueMatchers.Length; i++)
		int32_t L_39 = V_5;
		ValuePathMatcherU5BU5D_tDC6C5FBC8AD9CDC953975B35F515F2F1EC24066E* L_40 = __this->___valueMatchers_9;
		NullCheck(L_40);
		V_11 = (bool)((((int32_t)L_39) < ((int32_t)((int32_t)(((RuntimeArray*)L_40)->max_length))))? 1 : 0);
		bool L_41 = V_11;
		if (L_41)
		{
			goto IL_0031;
		}
	}

IL_00f1:
	{
		// if (!string.IsNullOrEmpty(result))
		String_t* L_42 = V_4;
		bool L_43;
		L_43 = String_IsNullOrEmpty_mEA9E3FB005AC28FE02E69FCF95A7B8456192B478(L_42, NULL);
		V_12 = (bool)((((int32_t)L_43) == ((int32_t)0))? 1 : 0);
		bool L_44 = V_12;
		if (!L_44)
		{
			goto IL_0117;
		}
	}
	{
		// formatEvent.onFormattedValueEvent?.Invoke(result);
		FormattedValueEvents_t0D0D440F35C91FAA243428A4B45156402090018C* L_45 = V_3;
		NullCheck(L_45);
		ValueEvent_t7E99BC212C04EA8B32FFF6900F7AEC1C55A2AC32* L_46 = L_45->___onFormattedValueEvent_1;
		ValueEvent_t7E99BC212C04EA8B32FFF6900F7AEC1C55A2AC32* L_47 = L_46;
		G_B13_0 = L_47;
		if (L_47)
		{
			G_B14_0 = L_47;
			goto IL_010e;
		}
	}
	{
		goto IL_0116;
	}

IL_010e:
	{
		String_t* L_48 = V_4;
		NullCheck(G_B14_0);
		UnityEvent_1_Invoke_mA633B48B5D287DA856FB954AC3E4012487E63C15(G_B14_0, L_48, UnityEvent_1_Invoke_mA633B48B5D287DA856FB954AC3E4012487E63C15_RuntimeMethod_var);
	}

IL_0116:
	{
	}

IL_0117:
	{
		// for (int j = 0; j < formattedValueEvents.Length; j++)
		int32_t L_49 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_49, 1));
	}

IL_011c:
	{
		// for (int j = 0; j < formattedValueEvents.Length; j++)
		int32_t L_50 = V_2;
		FormattedValueEventsU5BU5D_t0E1D60C2D6BF5C4DCF75ABCAF224658107EF33F5* L_51 = __this->___formattedValueEvents_10;
		NullCheck(L_51);
		V_13 = (bool)((((int32_t)L_50) < ((int32_t)((int32_t)(((RuntimeArray*)L_51)->max_length))))? 1 : 0);
		bool L_52 = V_13;
		if (L_52)
		{
			goto IL_0017;
		}
	}
	{
		goto IL_014d;
	}

IL_0133:
	{
		// onDidNotMatch?.Invoke(response.GetTranscription());
		StringEvent_tC948A866B2D2C1ECC0783ABC07A4B876C8E28B5B* L_53 = __this->___onDidNotMatch_12;
		StringEvent_tC948A866B2D2C1ECC0783ABC07A4B876C8E28B5B* L_54 = L_53;
		G_B20_0 = L_54;
		if (L_54)
		{
			G_B21_0 = L_54;
			goto IL_0140;
		}
	}
	{
		goto IL_014c;
	}

IL_0140:
	{
		WitResponseNode_t1BFF810F15B21416F5F6D0A1CAAF03CEF942038C* L_55 = ___response0;
		String_t* L_56;
		L_56 = WitResultUtilities_GetTranscription_m8B205AAE88950C55930BBF443E3473804483B60F(L_55, NULL);
		NullCheck(G_B21_0);
		UnityEvent_1_Invoke_mA633B48B5D287DA856FB954AC3E4012487E63C15(G_B21_0, L_56, UnityEvent_1_Invoke_mA633B48B5D287DA856FB954AC3E4012487E63C15_RuntimeMethod_var);
	}

IL_014c:
	{
	}

IL_014d:
	{
		// List<string> values = new List<string>();
		List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_57 = (List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD*)il2cpp_codegen_object_new(List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD_il2cpp_TypeInfo_var);
		NullCheck(L_57);
		List_1__ctor_mCA8DD57EAC70C2B5923DBB9D5A77CEAC22E7068E(L_57, List_1__ctor_mCA8DD57EAC70C2B5923DBB9D5A77CEAC22E7068E_RuntimeMethod_var);
		V_0 = L_57;
		// foreach (var matcher in valueMatchers)
		ValuePathMatcherU5BU5D_tDC6C5FBC8AD9CDC953975B35F515F2F1EC24066E* L_58 = __this->___valueMatchers_9;
		V_14 = L_58;
		V_15 = 0;
		goto IL_01d1;
	}

IL_0161:
	{
		// foreach (var matcher in valueMatchers)
		ValuePathMatcherU5BU5D_tDC6C5FBC8AD9CDC953975B35F515F2F1EC24066E* L_59 = V_14;
		int32_t L_60 = V_15;
		NullCheck(L_59);
		int32_t L_61 = L_60;
		ValuePathMatcher_t2058BD1F2F9C5A162DFBD3FE61BD97F2D840E35E* L_62 = (L_59)->GetAt(static_cast<il2cpp_array_size_t>(L_61));
		V_16 = L_62;
		// var value = matcher.Reference.GetStringValue(response);
		ValuePathMatcher_t2058BD1F2F9C5A162DFBD3FE61BD97F2D840E35E* L_63 = V_16;
		NullCheck(L_63);
		WitResponseReference_t7B74D84BF98481046E19F0CE0EB5A3F4203D2581* L_64;
		L_64 = ValuePathMatcher_get_Reference_m6808DF8159190FC28164BFC885B56EBCEF4B0F97(L_63, NULL);
		WitResponseNode_t1BFF810F15B21416F5F6D0A1CAAF03CEF942038C* L_65 = ___response0;
		NullCheck(L_64);
		String_t* L_66;
		L_66 = VirtualFuncInvoker1< String_t*, WitResponseNode_t1BFF810F15B21416F5F6D0A1CAAF03CEF942038C* >::Invoke(4 /* System.String Meta.WitAi.WitResponseReference::GetStringValue(Meta.WitAi.Json.WitResponseNode) */, L_64, L_65);
		V_17 = L_66;
		// values.Add(value);
		List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_67 = V_0;
		String_t* L_68 = V_17;
		NullCheck(L_67);
		List_1_Add_mF10DB1D3CBB0B14215F0E4F8AB4934A1955E5351_inline(L_67, L_68, List_1_Add_mF10DB1D3CBB0B14215F0E4F8AB4934A1955E5351_RuntimeMethod_var);
		// if (matcher.ConfidenceReference != null)
		ValuePathMatcher_t2058BD1F2F9C5A162DFBD3FE61BD97F2D840E35E* L_69 = V_16;
		NullCheck(L_69);
		WitResponseReference_t7B74D84BF98481046E19F0CE0EB5A3F4203D2581* L_70;
		L_70 = ValuePathMatcher_get_ConfidenceReference_m2D4B1E2F00437CEC9E4E3ECCCEB19058DDE9B382(L_69, NULL);
		V_18 = (bool)((!(((RuntimeObject*)(WitResponseReference_t7B74D84BF98481046E19F0CE0EB5A3F4203D2581*)L_70) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		bool L_71 = V_18;
		if (!L_71)
		{
			goto IL_01ca;
		}
	}
	{
		// float confidenceValue = ValueMatches(response, matcher)
		//     ? matcher.ConfidenceReference.GetFloatValue(response)
		//     : 0f;
		WitResponseNode_t1BFF810F15B21416F5F6D0A1CAAF03CEF942038C* L_72 = ___response0;
		ValuePathMatcher_t2058BD1F2F9C5A162DFBD3FE61BD97F2D840E35E* L_73 = V_16;
		bool L_74;
		L_74 = WitResponseMatcher_ValueMatches_m75D0D3E582C499BA6D4B9CA1D170697ECF4EEEE2(__this, L_72, L_73, NULL);
		if (L_74)
		{
			goto IL_01a4;
		}
	}
	{
		G_B28_0 = (0.0f);
		goto IL_01b1;
	}

IL_01a4:
	{
		ValuePathMatcher_t2058BD1F2F9C5A162DFBD3FE61BD97F2D840E35E* L_75 = V_16;
		NullCheck(L_75);
		WitResponseReference_t7B74D84BF98481046E19F0CE0EB5A3F4203D2581* L_76;
		L_76 = ValuePathMatcher_get_ConfidenceReference_m2D4B1E2F00437CEC9E4E3ECCCEB19058DDE9B382(L_75, NULL);
		WitResponseNode_t1BFF810F15B21416F5F6D0A1CAAF03CEF942038C* L_77 = ___response0;
		NullCheck(L_76);
		float L_78;
		L_78 = VirtualFuncInvoker1< float, WitResponseNode_t1BFF810F15B21416F5F6D0A1CAAF03CEF942038C* >::Invoke(6 /* System.Single Meta.WitAi.WitResponseReference::GetFloatValue(Meta.WitAi.Json.WitResponseNode) */, L_76, L_77);
		G_B28_0 = L_78;
	}

IL_01b1:
	{
		V_19 = G_B28_0;
		// RefreshConfidenceRange(confidenceValue, matcher.confidenceRanges, matcher.allowConfidenceOverlap);
		float L_79 = V_19;
		ValuePathMatcher_t2058BD1F2F9C5A162DFBD3FE61BD97F2D840E35E* L_80 = V_16;
		NullCheck(L_80);
		ConfidenceRangeU5BU5D_t436B72D1C2A21AE91F57767E7CCA104C79700583* L_81 = L_80->___confidenceRanges_8;
		ValuePathMatcher_t2058BD1F2F9C5A162DFBD3FE61BD97F2D840E35E* L_82 = V_16;
		NullCheck(L_82);
		bool L_83 = L_82->___allowConfidenceOverlap_7;
		bool L_84;
		L_84 = WitResponseHandler_RefreshConfidenceRange_mB3DFDEC327EB0141BD398F8F3D6141514ECAF901(L_79, L_81, L_83, NULL);
	}

IL_01ca:
	{
		int32_t L_85 = V_15;
		V_15 = ((int32_t)il2cpp_codegen_add(L_85, 1));
	}

IL_01d1:
	{
		// foreach (var matcher in valueMatchers)
		int32_t L_86 = V_15;
		ValuePathMatcherU5BU5D_tDC6C5FBC8AD9CDC953975B35F515F2F1EC24066E* L_87 = V_14;
		NullCheck(L_87);
		if ((((int32_t)L_86) < ((int32_t)((int32_t)(((RuntimeArray*)L_87)->max_length)))))
		{
			goto IL_0161;
		}
	}
	{
		// onMultiValueEvent.Invoke(values.ToArray());
		MultiValueEvent_t00CB59BD55FD6C3F27DABCC7A9A5A3394E717C06* L_88 = __this->___onMultiValueEvent_11;
		List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_89 = V_0;
		NullCheck(L_89);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_90;
		L_90 = List_1_ToArray_m2C402D882AA60FC1D5C7C09A129BE7779F833B4A(L_89, List_1_ToArray_m2C402D882AA60FC1D5C7C09A129BE7779F833B4A_RuntimeMethod_var);
		NullCheck(L_88);
		UnityEvent_1_Invoke_mDABA5BBDA189937099CB491730CD6AC57D7A5F94(L_88, L_90, UnityEvent_1_Invoke_mDABA5BBDA189937099CB491730CD6AC57D7A5F94_RuntimeMethod_var);
		// }
		return;
	}
}
// System.Boolean Meta.WitAi.CallbackHandlers.WitResponseMatcher::ValueMatches(Meta.WitAi.Json.WitResponseNode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WitResponseMatcher_ValueMatches_mC0BCB87B0C3758708495D1BA1F3C39DD888FCFDA (WitResponseMatcher_t6B41EE08DD1CEB6E51894DCB19B4BFE874BA22D8* __this, WitResponseNode_t1BFF810F15B21416F5F6D0A1CAAF03CEF942038C* ___response0, const RuntimeMethod* method) 
{
	bool V_0 = false;
	int32_t V_1 = 0;
	bool V_2 = false;
	bool V_3 = false;
	{
		// bool matches = true;
		V_0 = (bool)1;
		// for (int i = 0; i < valueMatchers.Length && matches; i++)
		V_1 = 0;
		goto IL_001f;
	}

IL_0007:
	{
		// matches &= ValueMatches(response, valueMatchers[i]);
		bool L_0 = V_0;
		WitResponseNode_t1BFF810F15B21416F5F6D0A1CAAF03CEF942038C* L_1 = ___response0;
		ValuePathMatcherU5BU5D_tDC6C5FBC8AD9CDC953975B35F515F2F1EC24066E* L_2 = __this->___valueMatchers_9;
		int32_t L_3 = V_1;
		NullCheck(L_2);
		int32_t L_4 = L_3;
		ValuePathMatcher_t2058BD1F2F9C5A162DFBD3FE61BD97F2D840E35E* L_5 = (L_2)->GetAt(static_cast<il2cpp_array_size_t>(L_4));
		bool L_6;
		L_6 = WitResponseMatcher_ValueMatches_m75D0D3E582C499BA6D4B9CA1D170697ECF4EEEE2(__this, L_1, L_5, NULL);
		V_0 = (bool)((int32_t)((int32_t)L_0&(int32_t)L_6));
		// for (int i = 0; i < valueMatchers.Length && matches; i++)
		int32_t L_7 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_7, 1));
	}

IL_001f:
	{
		// for (int i = 0; i < valueMatchers.Length && matches; i++)
		int32_t L_8 = V_1;
		ValuePathMatcherU5BU5D_tDC6C5FBC8AD9CDC953975B35F515F2F1EC24066E* L_9 = __this->___valueMatchers_9;
		NullCheck(L_9);
		bool L_10 = V_0;
		V_2 = (bool)((int32_t)(((((int32_t)L_8) < ((int32_t)((int32_t)(((RuntimeArray*)L_9)->max_length))))? 1 : 0)&(int32_t)L_10));
		bool L_11 = V_2;
		if (L_11)
		{
			goto IL_0007;
		}
	}
	{
		// return matches;
		bool L_12 = V_0;
		V_3 = L_12;
		goto IL_0034;
	}

IL_0034:
	{
		// }
		bool L_13 = V_3;
		return L_13;
	}
}
// System.Boolean Meta.WitAi.CallbackHandlers.WitResponseMatcher::ValueMatches(Meta.WitAi.Json.WitResponseNode,Meta.WitAi.CallbackHandlers.ValuePathMatcher)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WitResponseMatcher_ValueMatches_m75D0D3E582C499BA6D4B9CA1D170697ECF4EEEE2 (WitResponseMatcher_t6B41EE08DD1CEB6E51894DCB19B4BFE874BA22D8* __this, WitResponseNode_t1BFF810F15B21416F5F6D0A1CAAF03CEF942038C* ___response0, ValuePathMatcher_t2058BD1F2F9C5A162DFBD3FE61BD97F2D840E35E* ___matcher1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Regex_tE773142C2BE45C5D362B0F815AFF831707A51772_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	bool V_1 = false;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	bool V_4 = false;
	int32_t G_B3_0 = 0;
	{
		// var value = matcher.Reference.GetStringValue(response);
		ValuePathMatcher_t2058BD1F2F9C5A162DFBD3FE61BD97F2D840E35E* L_0 = ___matcher1;
		NullCheck(L_0);
		WitResponseReference_t7B74D84BF98481046E19F0CE0EB5A3F4203D2581* L_1;
		L_1 = ValuePathMatcher_get_Reference_m6808DF8159190FC28164BFC885B56EBCEF4B0F97(L_0, NULL);
		WitResponseNode_t1BFF810F15B21416F5F6D0A1CAAF03CEF942038C* L_2 = ___response0;
		NullCheck(L_1);
		String_t* L_3;
		L_3 = VirtualFuncInvoker1< String_t*, WitResponseNode_t1BFF810F15B21416F5F6D0A1CAAF03CEF942038C* >::Invoke(4 /* System.String Meta.WitAi.WitResponseReference::GetStringValue(Meta.WitAi.Json.WitResponseNode) */, L_1, L_2);
		V_0 = L_3;
		// bool result = !matcher.contentRequired || !string.IsNullOrEmpty(value);
		ValuePathMatcher_t2058BD1F2F9C5A162DFBD3FE61BD97F2D840E35E* L_4 = ___matcher1;
		NullCheck(L_4);
		bool L_5 = L_4->___contentRequired_2;
		if (!L_5)
		{
			goto IL_0021;
		}
	}
	{
		String_t* L_6 = V_0;
		bool L_7;
		L_7 = String_IsNullOrEmpty_mEA9E3FB005AC28FE02E69FCF95A7B8456192B478(L_6, NULL);
		G_B3_0 = ((((int32_t)L_7) == ((int32_t)0))? 1 : 0);
		goto IL_0022;
	}

IL_0021:
	{
		G_B3_0 = 1;
	}

IL_0022:
	{
		V_1 = (bool)G_B3_0;
		// switch (matcher.matchMethod)
		ValuePathMatcher_t2058BD1F2F9C5A162DFBD3FE61BD97F2D840E35E* L_8 = ___matcher1;
		NullCheck(L_8);
		int32_t L_9 = L_8->___matchMethod_3;
		V_3 = L_9;
		int32_t L_10 = V_3;
		V_2 = L_10;
		int32_t L_11 = V_2;
		switch (((int32_t)il2cpp_codegen_subtract((int32_t)L_11, 1)))
		{
			case 0:
			{
				goto IL_0060;
			}
			case 1:
			{
				goto IL_004a;
			}
			case 2:
			{
				goto IL_0071;
			}
			case 3:
			{
				goto IL_007e;
			}
			case 4:
			{
				goto IL_008b;
			}
		}
	}
	{
		goto IL_0098;
	}

IL_004a:
	{
		// result &= Regex.Match(value, matcher.matchValue).Success;
		bool L_12 = V_1;
		String_t* L_13 = V_0;
		ValuePathMatcher_t2058BD1F2F9C5A162DFBD3FE61BD97F2D840E35E* L_14 = ___matcher1;
		NullCheck(L_14);
		String_t* L_15 = L_14->___matchValue_5;
		il2cpp_codegen_runtime_class_init_inline(Regex_tE773142C2BE45C5D362B0F815AFF831707A51772_il2cpp_TypeInfo_var);
		Match_tFBEBCF225BD8EA17BCE6CE3FE5C1BD8E3074105F* L_16;
		L_16 = Regex_Match_mE3EC82B72BF82AA4B8749251C12C383047531972(L_13, L_15, NULL);
		NullCheck(L_16);
		bool L_17;
		L_17 = Group_get_Success_m4E0238EE4B1E7F927E2AF13E2E5901BCA92BE62F(L_16, NULL);
		V_1 = (bool)((int32_t)((int32_t)L_12&(int32_t)L_17));
		// break;
		goto IL_0098;
	}

IL_0060:
	{
		// result &= value == matcher.matchValue;
		bool L_18 = V_1;
		String_t* L_19 = V_0;
		ValuePathMatcher_t2058BD1F2F9C5A162DFBD3FE61BD97F2D840E35E* L_20 = ___matcher1;
		NullCheck(L_20);
		String_t* L_21 = L_20->___matchValue_5;
		bool L_22;
		L_22 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_19, L_21, NULL);
		V_1 = (bool)((int32_t)((int32_t)L_18&(int32_t)L_22));
		// break;
		goto IL_0098;
	}

IL_0071:
	{
		// result &= CompareInt(value, matcher);
		bool L_23 = V_1;
		String_t* L_24 = V_0;
		ValuePathMatcher_t2058BD1F2F9C5A162DFBD3FE61BD97F2D840E35E* L_25 = ___matcher1;
		bool L_26;
		L_26 = WitResponseMatcher_CompareInt_mF7A9B8987A576CA840CED46B06EF5E3D4748EAAC(__this, L_24, L_25, NULL);
		V_1 = (bool)((int32_t)((int32_t)L_23&(int32_t)L_26));
		// break;
		goto IL_0098;
	}

IL_007e:
	{
		// result &= CompareFloat(value, matcher);
		bool L_27 = V_1;
		String_t* L_28 = V_0;
		ValuePathMatcher_t2058BD1F2F9C5A162DFBD3FE61BD97F2D840E35E* L_29 = ___matcher1;
		bool L_30;
		L_30 = WitResponseMatcher_CompareFloat_m6CF5105F3ADDAAFF79DD0EEF3ECBC9036AA7FBD4(__this, L_28, L_29, NULL);
		V_1 = (bool)((int32_t)((int32_t)L_27&(int32_t)L_30));
		// break;
		goto IL_0098;
	}

IL_008b:
	{
		// result &= CompareDouble(value, matcher);
		bool L_31 = V_1;
		String_t* L_32 = V_0;
		ValuePathMatcher_t2058BD1F2F9C5A162DFBD3FE61BD97F2D840E35E* L_33 = ___matcher1;
		bool L_34;
		L_34 = WitResponseMatcher_CompareDouble_m00B144D8B150C07F1B175FC77F0517FD8DD446B7(__this, L_32, L_33, NULL);
		V_1 = (bool)((int32_t)((int32_t)L_31&(int32_t)L_34));
		// break;
		goto IL_0098;
	}

IL_0098:
	{
		// return result;
		bool L_35 = V_1;
		V_4 = L_35;
		goto IL_009d;
	}

IL_009d:
	{
		// }
		bool L_36 = V_4;
		return L_36;
	}
}
// System.Boolean Meta.WitAi.CallbackHandlers.WitResponseMatcher::CompareDouble(System.String,Meta.WitAi.CallbackHandlers.ValuePathMatcher)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WitResponseMatcher_CompareDouble_m00B144D8B150C07F1B175FC77F0517FD8DD446B7 (WitResponseMatcher_t6B41EE08DD1CEB6E51894DCB19B4BFE874BA22D8* __this, String_t* ___value0, ValuePathMatcher_t2058BD1F2F9C5A162DFBD3FE61BD97F2D840E35E* ___matcher1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	double V_0 = 0.0;
	double V_1 = 0.0;
	bool V_2 = false;
	bool V_3 = false;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	{
		// if (!double.TryParse(value, out double dValue)) return false;
		String_t* L_0 = ___value0;
		bool L_1;
		L_1 = Double_TryParse_m60AD55BC181D70F661BC2A2294E66B5466C3C018(L_0, (&V_0), NULL);
		V_2 = (bool)((((int32_t)L_1) == ((int32_t)0))? 1 : 0);
		bool L_2 = V_2;
		if (!L_2)
		{
			goto IL_0017;
		}
	}
	{
		// if (!double.TryParse(value, out double dValue)) return false;
		V_3 = (bool)0;
		goto IL_009c;
	}

IL_0017:
	{
		// double dMatchValue = double.Parse(matcher.matchValue);
		ValuePathMatcher_t2058BD1F2F9C5A162DFBD3FE61BD97F2D840E35E* L_3 = ___matcher1;
		NullCheck(L_3);
		String_t* L_4 = L_3->___matchValue_5;
		double L_5;
		L_5 = Double_Parse_mEBC644CE0C86A405283EC4839F872EF9E556670A(L_4, NULL);
		V_1 = L_5;
		// switch (matcher.comparisonMethod)
		ValuePathMatcher_t2058BD1F2F9C5A162DFBD3FE61BD97F2D840E35E* L_6 = ___matcher1;
		NullCheck(L_6);
		int32_t L_7 = L_6->___comparisonMethod_4;
		V_5 = L_7;
		int32_t L_8 = V_5;
		V_4 = L_8;
		int32_t L_9 = V_4;
		switch (L_9)
		{
			case 0:
			{
				goto IL_0050;
			}
			case 1:
			{
				goto IL_0063;
			}
			case 2:
			{
				goto IL_0076;
			}
			case 3:
			{
				goto IL_0084;
			}
			case 4:
			{
				goto IL_007d;
			}
			case 5:
			{
				goto IL_008e;
			}
		}
	}
	{
		goto IL_0098;
	}

IL_0050:
	{
		// return Math.Abs(dValue - dMatchValue) < matcher.floatingPointComparisonTolerance;
		double L_10 = V_0;
		double L_11 = V_1;
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		double L_12;
		L_12 = fabs(((double)il2cpp_codegen_subtract(L_10, L_11)));
		ValuePathMatcher_t2058BD1F2F9C5A162DFBD3FE61BD97F2D840E35E* L_13 = ___matcher1;
		NullCheck(L_13);
		double L_14 = L_13->___floatingPointComparisonTolerance_6;
		V_3 = (bool)((((double)L_12) < ((double)L_14))? 1 : 0);
		goto IL_009c;
	}

IL_0063:
	{
		// return Math.Abs(dValue - dMatchValue) > matcher.floatingPointComparisonTolerance;
		double L_15 = V_0;
		double L_16 = V_1;
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		double L_17;
		L_17 = fabs(((double)il2cpp_codegen_subtract(L_15, L_16)));
		ValuePathMatcher_t2058BD1F2F9C5A162DFBD3FE61BD97F2D840E35E* L_18 = ___matcher1;
		NullCheck(L_18);
		double L_19 = L_18->___floatingPointComparisonTolerance_6;
		V_3 = (bool)((((double)L_17) > ((double)L_19))? 1 : 0);
		goto IL_009c;
	}

IL_0076:
	{
		// return dValue > dMatchValue;
		double L_20 = V_0;
		double L_21 = V_1;
		V_3 = (bool)((((double)L_20) > ((double)L_21))? 1 : 0);
		goto IL_009c;
	}

IL_007d:
	{
		// return dValue < dMatchValue;
		double L_22 = V_0;
		double L_23 = V_1;
		V_3 = (bool)((((double)L_22) < ((double)L_23))? 1 : 0);
		goto IL_009c;
	}

IL_0084:
	{
		// return dValue >= dMatchValue;
		double L_24 = V_0;
		double L_25 = V_1;
		V_3 = (bool)((((int32_t)((!(((double)L_24) >= ((double)L_25)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		goto IL_009c;
	}

IL_008e:
	{
		// return dValue <= dMatchValue;
		double L_26 = V_0;
		double L_27 = V_1;
		V_3 = (bool)((((int32_t)((!(((double)L_26) <= ((double)L_27)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		goto IL_009c;
	}

IL_0098:
	{
		// return false;
		V_3 = (bool)0;
		goto IL_009c;
	}

IL_009c:
	{
		// }
		bool L_28 = V_3;
		return L_28;
	}
}
// System.Boolean Meta.WitAi.CallbackHandlers.WitResponseMatcher::CompareFloat(System.String,Meta.WitAi.CallbackHandlers.ValuePathMatcher)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WitResponseMatcher_CompareFloat_m6CF5105F3ADDAAFF79DD0EEF3ECBC9036AA7FBD4 (WitResponseMatcher_t6B41EE08DD1CEB6E51894DCB19B4BFE874BA22D8* __this, String_t* ___value0, ValuePathMatcher_t2058BD1F2F9C5A162DFBD3FE61BD97F2D840E35E* ___matcher1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	bool V_2 = false;
	bool V_3 = false;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	{
		// if (!float.TryParse(value, out float dValue)) return false;
		String_t* L_0 = ___value0;
		bool L_1;
		L_1 = Single_TryParse_mC39FC2D8F1F33DE64685F3A8CE6BDD2164FB9423(L_0, (&V_0), NULL);
		V_2 = (bool)((((int32_t)L_1) == ((int32_t)0))? 1 : 0);
		bool L_2 = V_2;
		if (!L_2)
		{
			goto IL_0017;
		}
	}
	{
		// if (!float.TryParse(value, out float dValue)) return false;
		V_3 = (bool)0;
		goto IL_009e;
	}

IL_0017:
	{
		// float dMatchValue = float.Parse(matcher.matchValue);
		ValuePathMatcher_t2058BD1F2F9C5A162DFBD3FE61BD97F2D840E35E* L_3 = ___matcher1;
		NullCheck(L_3);
		String_t* L_4 = L_3->___matchValue_5;
		float L_5;
		L_5 = Single_Parse_m621F610BB84997A2E3C4686913F482316CD3E6B8(L_4, NULL);
		V_1 = L_5;
		// switch (matcher.comparisonMethod)
		ValuePathMatcher_t2058BD1F2F9C5A162DFBD3FE61BD97F2D840E35E* L_6 = ___matcher1;
		NullCheck(L_6);
		int32_t L_7 = L_6->___comparisonMethod_4;
		V_5 = L_7;
		int32_t L_8 = V_5;
		V_4 = L_8;
		int32_t L_9 = V_4;
		switch (L_9)
		{
			case 0:
			{
				goto IL_0050;
			}
			case 1:
			{
				goto IL_0064;
			}
			case 2:
			{
				goto IL_0078;
			}
			case 3:
			{
				goto IL_0086;
			}
			case 4:
			{
				goto IL_007f;
			}
			case 5:
			{
				goto IL_0090;
			}
		}
	}
	{
		goto IL_009a;
	}

IL_0050:
	{
		// return Math.Abs(dValue - dMatchValue) <
		//        matcher.floatingPointComparisonTolerance;
		float L_10 = V_0;
		float L_11 = V_1;
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		float L_12;
		L_12 = fabsf(((float)il2cpp_codegen_subtract(L_10, L_11)));
		ValuePathMatcher_t2058BD1F2F9C5A162DFBD3FE61BD97F2D840E35E* L_13 = ___matcher1;
		NullCheck(L_13);
		double L_14 = L_13->___floatingPointComparisonTolerance_6;
		V_3 = (bool)((((double)((double)L_12)) < ((double)L_14))? 1 : 0);
		goto IL_009e;
	}

IL_0064:
	{
		// return Math.Abs(dValue - dMatchValue) >
		//        matcher.floatingPointComparisonTolerance;
		float L_15 = V_0;
		float L_16 = V_1;
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		float L_17;
		L_17 = fabsf(((float)il2cpp_codegen_subtract(L_15, L_16)));
		ValuePathMatcher_t2058BD1F2F9C5A162DFBD3FE61BD97F2D840E35E* L_18 = ___matcher1;
		NullCheck(L_18);
		double L_19 = L_18->___floatingPointComparisonTolerance_6;
		V_3 = (bool)((((double)((double)L_17)) > ((double)L_19))? 1 : 0);
		goto IL_009e;
	}

IL_0078:
	{
		// return dValue > dMatchValue;
		float L_20 = V_0;
		float L_21 = V_1;
		V_3 = (bool)((((float)L_20) > ((float)L_21))? 1 : 0);
		goto IL_009e;
	}

IL_007f:
	{
		// return dValue < dMatchValue;
		float L_22 = V_0;
		float L_23 = V_1;
		V_3 = (bool)((((float)L_22) < ((float)L_23))? 1 : 0);
		goto IL_009e;
	}

IL_0086:
	{
		// return dValue >= dMatchValue;
		float L_24 = V_0;
		float L_25 = V_1;
		V_3 = (bool)((((int32_t)((!(((float)L_24) >= ((float)L_25)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		goto IL_009e;
	}

IL_0090:
	{
		// return dValue <= dMatchValue;
		float L_26 = V_0;
		float L_27 = V_1;
		V_3 = (bool)((((int32_t)((!(((float)L_26) <= ((float)L_27)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		goto IL_009e;
	}

IL_009a:
	{
		// return false;
		V_3 = (bool)0;
		goto IL_009e;
	}

IL_009e:
	{
		// }
		bool L_28 = V_3;
		return L_28;
	}
}
// System.Boolean Meta.WitAi.CallbackHandlers.WitResponseMatcher::CompareInt(System.String,Meta.WitAi.CallbackHandlers.ValuePathMatcher)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WitResponseMatcher_CompareInt_mF7A9B8987A576CA840CED46B06EF5E3D4748EAAC (WitResponseMatcher_t6B41EE08DD1CEB6E51894DCB19B4BFE874BA22D8* __this, String_t* ___value0, ValuePathMatcher_t2058BD1F2F9C5A162DFBD3FE61BD97F2D840E35E* ___matcher1, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	bool V_2 = false;
	bool V_3 = false;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	{
		// if (!int.TryParse(value, out int dValue)) return false;
		String_t* L_0 = ___value0;
		bool L_1;
		L_1 = Int32_TryParse_mC928DE2FEC1C35ED5298BDDCA9868076E94B8A21(L_0, (&V_0), NULL);
		V_2 = (bool)((((int32_t)L_1) == ((int32_t)0))? 1 : 0);
		bool L_2 = V_2;
		if (!L_2)
		{
			goto IL_0014;
		}
	}
	{
		// if (!int.TryParse(value, out int dValue)) return false;
		V_3 = (bool)0;
		goto IL_0084;
	}

IL_0014:
	{
		// int dMatchValue = int.Parse(matcher.matchValue);
		ValuePathMatcher_t2058BD1F2F9C5A162DFBD3FE61BD97F2D840E35E* L_3 = ___matcher1;
		NullCheck(L_3);
		String_t* L_4 = L_3->___matchValue_5;
		int32_t L_5;
		L_5 = Int32_Parse_m273CA1A9C7717C99641291A95C543711C0202AF0(L_4, NULL);
		V_1 = L_5;
		// switch (matcher.comparisonMethod)
		ValuePathMatcher_t2058BD1F2F9C5A162DFBD3FE61BD97F2D840E35E* L_6 = ___matcher1;
		NullCheck(L_6);
		int32_t L_7 = L_6->___comparisonMethod_4;
		V_5 = L_7;
		int32_t L_8 = V_5;
		V_4 = L_8;
		int32_t L_9 = V_4;
		switch (L_9)
		{
			case 0:
			{
				goto IL_004d;
			}
			case 1:
			{
				goto IL_0054;
			}
			case 2:
			{
				goto IL_005e;
			}
			case 3:
			{
				goto IL_006c;
			}
			case 4:
			{
				goto IL_0065;
			}
			case 5:
			{
				goto IL_0076;
			}
		}
	}
	{
		goto IL_0080;
	}

IL_004d:
	{
		// return dValue == dMatchValue;
		int32_t L_10 = V_0;
		int32_t L_11 = V_1;
		V_3 = (bool)((((int32_t)L_10) == ((int32_t)L_11))? 1 : 0);
		goto IL_0084;
	}

IL_0054:
	{
		// return dValue != dMatchValue;
		int32_t L_12 = V_0;
		int32_t L_13 = V_1;
		V_3 = (bool)((((int32_t)((((int32_t)L_12) == ((int32_t)L_13))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		goto IL_0084;
	}

IL_005e:
	{
		// return dValue > dMatchValue;
		int32_t L_14 = V_0;
		int32_t L_15 = V_1;
		V_3 = (bool)((((int32_t)L_14) > ((int32_t)L_15))? 1 : 0);
		goto IL_0084;
	}

IL_0065:
	{
		// return dValue < dMatchValue;
		int32_t L_16 = V_0;
		int32_t L_17 = V_1;
		V_3 = (bool)((((int32_t)L_16) < ((int32_t)L_17))? 1 : 0);
		goto IL_0084;
	}

IL_006c:
	{
		// return dValue >= dMatchValue;
		int32_t L_18 = V_0;
		int32_t L_19 = V_1;
		V_3 = (bool)((((int32_t)((((int32_t)L_18) < ((int32_t)L_19))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		goto IL_0084;
	}

IL_0076:
	{
		// return dValue <= dMatchValue;
		int32_t L_20 = V_0;
		int32_t L_21 = V_1;
		V_3 = (bool)((((int32_t)((((int32_t)L_20) > ((int32_t)L_21))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		goto IL_0084;
	}

IL_0080:
	{
		// return false;
		V_3 = (bool)0;
		goto IL_0084;
	}

IL_0084:
	{
		// }
		bool L_22 = V_3;
		return L_22;
	}
}
// System.Void Meta.WitAi.CallbackHandlers.WitResponseMatcher::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WitResponseMatcher__ctor_m15B71CF2202B13D134164FA1679EB8242D1C39CE (WitResponseMatcher_t6B41EE08DD1CEB6E51894DCB19B4BFE874BA22D8* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MultiValueEvent_t00CB59BD55FD6C3F27DABCC7A9A5A3394E717C06_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringEvent_tC948A866B2D2C1ECC0783ABC07A4B876C8E28B5B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// [SerializeField] private MultiValueEvent onMultiValueEvent = new MultiValueEvent();
		MultiValueEvent_t00CB59BD55FD6C3F27DABCC7A9A5A3394E717C06* L_0 = (MultiValueEvent_t00CB59BD55FD6C3F27DABCC7A9A5A3394E717C06*)il2cpp_codegen_object_new(MultiValueEvent_t00CB59BD55FD6C3F27DABCC7A9A5A3394E717C06_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		MultiValueEvent__ctor_m8B3EB1BCB05AC78C773AD743D9D1BAE3F11595F6(L_0, NULL);
		__this->___onMultiValueEvent_11 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___onMultiValueEvent_11), (void*)L_0);
		// [SerializeField] private StringEvent onDidNotMatch = new StringEvent();
		StringEvent_tC948A866B2D2C1ECC0783ABC07A4B876C8E28B5B* L_1 = (StringEvent_tC948A866B2D2C1ECC0783ABC07A4B876C8E28B5B*)il2cpp_codegen_object_new(StringEvent_tC948A866B2D2C1ECC0783ABC07A4B876C8E28B5B_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		StringEvent__ctor_mC31F214D17DD41F033445DF11C6B8DE61C3731A3(L_1, NULL);
		__this->___onDidNotMatch_12 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___onDidNotMatch_12), (void*)L_1);
		// [SerializeField] private StringEvent onOutOfDomain = new StringEvent();
		StringEvent_tC948A866B2D2C1ECC0783ABC07A4B876C8E28B5B* L_2 = (StringEvent_tC948A866B2D2C1ECC0783ABC07A4B876C8E28B5B*)il2cpp_codegen_object_new(StringEvent_tC948A866B2D2C1ECC0783ABC07A4B876C8E28B5B_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		StringEvent__ctor_mC31F214D17DD41F033445DF11C6B8DE61C3731A3(L_2, NULL);
		__this->___onOutOfDomain_13 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___onOutOfDomain_13), (void*)L_2);
		WitIntentMatcher__ctor_mBDA138A9E901DDC1C44B18C761362D8B5269EAA6(__this, NULL);
		return;
	}
}
// System.Void Meta.WitAi.CallbackHandlers.WitResponseMatcher::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WitResponseMatcher__cctor_mB51DBF05D137B61E4228C21220980F86281F6313 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Regex_tE773142C2BE45C5D362B0F815AFF831707A51772_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WitResponseMatcher_t6B41EE08DD1CEB6E51894DCB19B4BFE874BA22D8_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral057E47B1A5317B280AD5B6CE27C8F11073D42316);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private static Regex valueRegex = new Regex(Regex.Escape("{value}"), RegexOptions.Compiled);
		il2cpp_codegen_runtime_class_init_inline(Regex_tE773142C2BE45C5D362B0F815AFF831707A51772_il2cpp_TypeInfo_var);
		String_t* L_0;
		L_0 = Regex_Escape_mCBB92EEA6FB5B703811AF678FD53918F6A364227(_stringLiteral057E47B1A5317B280AD5B6CE27C8F11073D42316, NULL);
		Regex_tE773142C2BE45C5D362B0F815AFF831707A51772* L_1 = (Regex_tE773142C2BE45C5D362B0F815AFF831707A51772*)il2cpp_codegen_object_new(Regex_tE773142C2BE45C5D362B0F815AFF831707A51772_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		Regex__ctor_mE3996C71B04A4A6845745D01C93B1D27423D0621(L_1, L_0, 8, NULL);
		((WitResponseMatcher_t6B41EE08DD1CEB6E51894DCB19B4BFE874BA22D8_StaticFields*)il2cpp_codegen_static_fields_for(WitResponseMatcher_t6B41EE08DD1CEB6E51894DCB19B4BFE874BA22D8_il2cpp_TypeInfo_var))->___valueRegex_14 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&((WitResponseMatcher_t6B41EE08DD1CEB6E51894DCB19B4BFE874BA22D8_StaticFields*)il2cpp_codegen_static_fields_for(WitResponseMatcher_t6B41EE08DD1CEB6E51894DCB19B4BFE874BA22D8_il2cpp_TypeInfo_var))->___valueRegex_14), (void*)L_1);
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
// System.Void Meta.WitAi.CallbackHandlers.MultiValueEvent::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MultiValueEvent__ctor_m8B3EB1BCB05AC78C773AD743D9D1BAE3F11595F6 (MultiValueEvent_t00CB59BD55FD6C3F27DABCC7A9A5A3394E717C06* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityEvent_1__ctor_mA1CAC73F82FF0E8BC4870AEBF137B7F72614957D_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		UnityEvent_1__ctor_mA1CAC73F82FF0E8BC4870AEBF137B7F72614957D(__this, UnityEvent_1__ctor_mA1CAC73F82FF0E8BC4870AEBF137B7F72614957D_RuntimeMethod_var);
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
// System.Void Meta.WitAi.CallbackHandlers.ValueEvent::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ValueEvent__ctor_m870BC4590DAF54F220D66CAFCC1B1F7A8D692BC7 (ValueEvent_t7E99BC212C04EA8B32FFF6900F7AEC1C55A2AC32* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityEvent_1__ctor_m0F7D790DACD6F3D18E865D01FE4427603C1B0CC6_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		UnityEvent_1__ctor_m0F7D790DACD6F3D18E865D01FE4427603C1B0CC6(__this, UnityEvent_1__ctor_m0F7D790DACD6F3D18E865D01FE4427603C1B0CC6_RuntimeMethod_var);
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
// System.Void Meta.WitAi.CallbackHandlers.FormattedValueEvents::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FormattedValueEvents__ctor_m4F5464C9A565D08A0E4FAFCC55DD1B6444CEBD91 (FormattedValueEvents_t0D0D440F35C91FAA243428A4B45156402090018C* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ValueEvent_t7E99BC212C04EA8B32FFF6900F7AEC1C55A2AC32_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public ValueEvent onFormattedValueEvent = new ValueEvent();
		ValueEvent_t7E99BC212C04EA8B32FFF6900F7AEC1C55A2AC32* L_0 = (ValueEvent_t7E99BC212C04EA8B32FFF6900F7AEC1C55A2AC32*)il2cpp_codegen_object_new(ValueEvent_t7E99BC212C04EA8B32FFF6900F7AEC1C55A2AC32_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		ValueEvent__ctor_m870BC4590DAF54F220D66CAFCC1B1F7A8D692BC7(L_0, NULL);
		__this->___onFormattedValueEvent_1 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___onFormattedValueEvent_1), (void*)L_0);
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
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
// Meta.WitAi.WitResponseReference Meta.WitAi.CallbackHandlers.ValuePathMatcher::get_ConfidenceReference()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR WitResponseReference_t7B74D84BF98481046E19F0CE0EB5A3F4203D2581* ValuePathMatcher_get_ConfidenceReference_m2D4B1E2F00437CEC9E4E3ECCCEB19058DDE9B382 (ValuePathMatcher_t2058BD1F2F9C5A162DFBD3FE61BD97F2D840E35E* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBFC27499BD5186964D062DE5FE7C222AE471C53E);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF3E84B722399601AD7E281754E917478AA9AD48D);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	bool V_1 = false;
	WitResponseReference_t7B74D84BF98481046E19F0CE0EB5A3F4203D2581* V_2 = NULL;
	bool V_3 = false;
	WitResponseReference_t7B74D84BF98481046E19F0CE0EB5A3F4203D2581* G_B4_0 = NULL;
	WitResponseReference_t7B74D84BF98481046E19F0CE0EB5A3F4203D2581* G_B3_0 = NULL;
	String_t* G_B5_0 = NULL;
	{
		// if (null != confidencePathReference) return confidencePathReference;
		WitResponseReference_t7B74D84BF98481046E19F0CE0EB5A3F4203D2581* L_0 = __this->___confidencePathReference_10;
		V_1 = (bool)((!(((RuntimeObject*)(WitResponseReference_t7B74D84BF98481046E19F0CE0EB5A3F4203D2581*)L_0) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		bool L_1 = V_1;
		if (!L_1)
		{
			goto IL_0017;
		}
	}
	{
		// if (null != confidencePathReference) return confidencePathReference;
		WitResponseReference_t7B74D84BF98481046E19F0CE0EB5A3F4203D2581* L_2 = __this->___confidencePathReference_10;
		V_2 = L_2;
		goto IL_006d;
	}

IL_0017:
	{
		// var confidencePath = Reference?.path;
		WitResponseReference_t7B74D84BF98481046E19F0CE0EB5A3F4203D2581* L_3;
		L_3 = ValuePathMatcher_get_Reference_m6808DF8159190FC28164BFC885B56EBCEF4B0F97(__this, NULL);
		WitResponseReference_t7B74D84BF98481046E19F0CE0EB5A3F4203D2581* L_4 = L_3;
		G_B3_0 = L_4;
		if (L_4)
		{
			G_B4_0 = L_4;
			goto IL_0024;
		}
	}
	{
		G_B5_0 = ((String_t*)(NULL));
		goto IL_0029;
	}

IL_0024:
	{
		NullCheck(G_B4_0);
		String_t* L_5 = G_B4_0->___path_1;
		G_B5_0 = L_5;
	}

IL_0029:
	{
		V_0 = G_B5_0;
		// if (!string.IsNullOrEmpty(confidencePath))
		String_t* L_6 = V_0;
		bool L_7;
		L_7 = String_IsNullOrEmpty_mEA9E3FB005AC28FE02E69FCF95A7B8456192B478(L_6, NULL);
		V_3 = (bool)((((int32_t)L_7) == ((int32_t)0))? 1 : 0);
		bool L_8 = V_3;
		if (!L_8)
		{
			goto IL_0064;
		}
	}
	{
		// confidencePath = confidencePath.Substring(0, confidencePath.LastIndexOf("."));
		String_t* L_9 = V_0;
		String_t* L_10 = V_0;
		NullCheck(L_10);
		int32_t L_11;
		L_11 = String_LastIndexOf_m8923DBD89F2B3E5A34190B038B48F402E0C17E40(L_10, _stringLiteralF3E84B722399601AD7E281754E917478AA9AD48D, NULL);
		NullCheck(L_9);
		String_t* L_12;
		L_12 = String_Substring_mB1D94F47935D22E130FF2C01DBB6A4135FBB76CE(L_9, 0, L_11, NULL);
		V_0 = L_12;
		// confidencePath += ".confidence";
		String_t* L_13 = V_0;
		String_t* L_14;
		L_14 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(L_13, _stringLiteralBFC27499BD5186964D062DE5FE7C222AE471C53E, NULL);
		V_0 = L_14;
		// confidencePathReference = WitResultUtilities.GetWitResponseReference(confidencePath);
		String_t* L_15 = V_0;
		WitResponseReference_t7B74D84BF98481046E19F0CE0EB5A3F4203D2581* L_16;
		L_16 = WitResultUtilities_GetWitResponseReference_m1C6C4F70C12A0D48CA263069DC326994DCB5FA60(L_15, NULL);
		__this->___confidencePathReference_10 = L_16;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___confidencePathReference_10), (void*)L_16);
	}

IL_0064:
	{
		// return confidencePathReference;
		WitResponseReference_t7B74D84BF98481046E19F0CE0EB5A3F4203D2581* L_17 = __this->___confidencePathReference_10;
		V_2 = L_17;
		goto IL_006d;
	}

IL_006d:
	{
		// }
		WitResponseReference_t7B74D84BF98481046E19F0CE0EB5A3F4203D2581* L_18 = V_2;
		return L_18;
	}
}
// Meta.WitAi.WitResponseReference Meta.WitAi.CallbackHandlers.ValuePathMatcher::get_Reference()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR WitResponseReference_t7B74D84BF98481046E19F0CE0EB5A3F4203D2581* ValuePathMatcher_get_Reference_m6808DF8159190FC28164BFC885B56EBCEF4B0F97 (ValuePathMatcher_t2058BD1F2F9C5A162DFBD3FE61BD97F2D840E35E* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	WitResponseReference_t7B74D84BF98481046E19F0CE0EB5A3F4203D2581* V_1 = NULL;
	bool V_2 = false;
	int32_t G_B5_0 = 0;
	{
		// if (witValueReference) return witValueReference.Reference;
		WitValue_t62896259CA1F095F305381482D891DC0E1ED1092* L_0 = __this->___witValueReference_1;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Implicit_m93896EF7D68FA113C42D3FE2BC6F661FC7EF514A(L_0, NULL);
		V_0 = L_1;
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_001e;
		}
	}
	{
		// if (witValueReference) return witValueReference.Reference;
		WitValue_t62896259CA1F095F305381482D891DC0E1ED1092* L_3 = __this->___witValueReference_1;
		NullCheck(L_3);
		WitResponseReference_t7B74D84BF98481046E19F0CE0EB5A3F4203D2581* L_4;
		L_4 = WitValue_get_Reference_m235DE334635AE00B4D91508074C9FEEE6983A521(L_3, NULL);
		V_1 = L_4;
		goto IL_005f;
	}

IL_001e:
	{
		// if (null == pathReference || pathReference.path != path)
		WitResponseReference_t7B74D84BF98481046E19F0CE0EB5A3F4203D2581* L_5 = __this->___pathReference_9;
		if (!L_5)
		{
			goto IL_003e;
		}
	}
	{
		WitResponseReference_t7B74D84BF98481046E19F0CE0EB5A3F4203D2581* L_6 = __this->___pathReference_9;
		NullCheck(L_6);
		String_t* L_7 = L_6->___path_1;
		String_t* L_8 = __this->___path_0;
		bool L_9;
		L_9 = String_op_Inequality_m8C940F3CFC42866709D7CA931B3D77B4BE94BCB6(L_7, L_8, NULL);
		G_B5_0 = ((int32_t)(L_9));
		goto IL_003f;
	}

IL_003e:
	{
		G_B5_0 = 1;
	}

IL_003f:
	{
		V_2 = (bool)G_B5_0;
		bool L_10 = V_2;
		if (!L_10)
		{
			goto IL_0056;
		}
	}
	{
		// pathReference = WitResultUtilities.GetWitResponseReference(path);
		String_t* L_11 = __this->___path_0;
		WitResponseReference_t7B74D84BF98481046E19F0CE0EB5A3F4203D2581* L_12;
		L_12 = WitResultUtilities_GetWitResponseReference_m1C6C4F70C12A0D48CA263069DC326994DCB5FA60(L_11, NULL);
		__this->___pathReference_9 = L_12;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___pathReference_9), (void*)L_12);
	}

IL_0056:
	{
		// return pathReference;
		WitResponseReference_t7B74D84BF98481046E19F0CE0EB5A3F4203D2581* L_13 = __this->___pathReference_9;
		V_1 = L_13;
		goto IL_005f;
	}

IL_005f:
	{
		// }
		WitResponseReference_t7B74D84BF98481046E19F0CE0EB5A3F4203D2581* L_14 = V_1;
		return L_14;
	}
}
// System.Void Meta.WitAi.CallbackHandlers.ValuePathMatcher::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ValuePathMatcher__ctor_m217C778A08D77714D81C3168B0DEFA6A9075613C (ValuePathMatcher_t2058BD1F2F9C5A162DFBD3FE61BD97F2D840E35E* __this, const RuntimeMethod* method) 
{
	{
		// public bool contentRequired = true;
		__this->___contentRequired_2 = (bool)1;
		// public double floatingPointComparisonTolerance = .0001f;
		__this->___floatingPointComparisonTolerance_6 = (9.9999997473787516E-05);
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
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
// System.String Meta.WitAi.CallbackHandlers.WitUtteranceMatcher::OnValidateResponse(Meta.WitAi.Json.WitResponseNode,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* WitUtteranceMatcher_OnValidateResponse_m2551E293B3A7FCCEE25F5252D8177CBB2C0D7125 (WitUtteranceMatcher_t61084ECD5166E15FF9C36660DCD7A42241EAB098* __this, WitResponseNode_t1BFF810F15B21416F5F6D0A1CAAF03CEF942038C* ___response0, bool ___isEarlyResponse1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral30F03FEA1314DE8FA093A051C30C5B7CD90359B0);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBFCC6EE94F1B7AA05A04750903E25F93A7188AE0);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	bool V_1 = false;
	String_t* V_2 = NULL;
	{
		// var text = response["text"].Value;
		WitResponseNode_t1BFF810F15B21416F5F6D0A1CAAF03CEF942038C* L_0 = ___response0;
		NullCheck(L_0);
		WitResponseNode_t1BFF810F15B21416F5F6D0A1CAAF03CEF942038C* L_1;
		L_1 = VirtualFuncInvoker1< WitResponseNode_t1BFF810F15B21416F5F6D0A1CAAF03CEF942038C*, String_t* >::Invoke(7 /* Meta.WitAi.Json.WitResponseNode Meta.WitAi.Json.WitResponseNode::get_Item(System.String) */, L_0, _stringLiteralBFCC6EE94F1B7AA05A04750903E25F93A7188AE0);
		NullCheck(L_1);
		String_t* L_2;
		L_2 = VirtualFuncInvoker0< String_t* >::Invoke(9 /* System.String Meta.WitAi.Json.WitResponseNode::get_Value() */, L_1);
		V_0 = L_2;
		// if (!IsMatch(text))
		String_t* L_3 = V_0;
		bool L_4;
		L_4 = WitUtteranceMatcher_IsMatch_mB8EE7E23D6CD96D97E11182F23A97E5484143817(__this, L_3, NULL);
		V_1 = (bool)((((int32_t)L_4) == ((int32_t)0))? 1 : 0);
		bool L_5 = V_1;
		if (!L_5)
		{
			goto IL_0029;
		}
	}
	{
		// return "Required utterance does not match";
		V_2 = _stringLiteral30F03FEA1314DE8FA093A051C30C5B7CD90359B0;
		goto IL_0031;
	}

IL_0029:
	{
		// return "";
		V_2 = _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
		goto IL_0031;
	}

IL_0031:
	{
		// }
		String_t* L_6 = V_2;
		return L_6;
	}
}
// System.Void Meta.WitAi.CallbackHandlers.WitUtteranceMatcher::OnResponseInvalid(Meta.WitAi.Json.WitResponseNode,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WitUtteranceMatcher_OnResponseInvalid_m298720942103F62B7413E24A7CB99B544406DA0E (WitUtteranceMatcher_t61084ECD5166E15FF9C36660DCD7A42241EAB098* __this, WitResponseNode_t1BFF810F15B21416F5F6D0A1CAAF03CEF942038C* ___response0, String_t* ___error1, const RuntimeMethod* method) 
{
	{
		// protected override void OnResponseInvalid(WitResponseNode response, string error){}
		return;
	}
}
// System.Void Meta.WitAi.CallbackHandlers.WitUtteranceMatcher::OnResponseSuccess(Meta.WitAi.Json.WitResponseNode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WitUtteranceMatcher_OnResponseSuccess_mD0D71280596EB5A9DAA364A89918326221411165 (WitUtteranceMatcher_t61084ECD5166E15FF9C36660DCD7A42241EAB098* __this, WitResponseNode_t1BFF810F15B21416F5F6D0A1CAAF03CEF942038C* ___response0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityEvent_1_Invoke_mA633B48B5D287DA856FB954AC3E4012487E63C15_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBFCC6EE94F1B7AA05A04750903E25F93A7188AE0);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	StringEvent_tC948A866B2D2C1ECC0783ABC07A4B876C8E28B5B* G_B2_0 = NULL;
	StringEvent_tC948A866B2D2C1ECC0783ABC07A4B876C8E28B5B* G_B1_0 = NULL;
	{
		// var text = response["text"].Value;
		WitResponseNode_t1BFF810F15B21416F5F6D0A1CAAF03CEF942038C* L_0 = ___response0;
		NullCheck(L_0);
		WitResponseNode_t1BFF810F15B21416F5F6D0A1CAAF03CEF942038C* L_1;
		L_1 = VirtualFuncInvoker1< WitResponseNode_t1BFF810F15B21416F5F6D0A1CAAF03CEF942038C*, String_t* >::Invoke(7 /* Meta.WitAi.Json.WitResponseNode Meta.WitAi.Json.WitResponseNode::get_Item(System.String) */, L_0, _stringLiteralBFCC6EE94F1B7AA05A04750903E25F93A7188AE0);
		NullCheck(L_1);
		String_t* L_2;
		L_2 = VirtualFuncInvoker0< String_t* >::Invoke(9 /* System.String Meta.WitAi.Json.WitResponseNode::get_Value() */, L_1);
		V_0 = L_2;
		// onUtteranceMatched?.Invoke(text);
		StringEvent_tC948A866B2D2C1ECC0783ABC07A4B876C8E28B5B* L_3 = __this->___onUtteranceMatched_10;
		StringEvent_tC948A866B2D2C1ECC0783ABC07A4B876C8E28B5B* L_4 = L_3;
		G_B1_0 = L_4;
		if (L_4)
		{
			G_B2_0 = L_4;
			goto IL_001e;
		}
	}
	{
		goto IL_0025;
	}

IL_001e:
	{
		String_t* L_5 = V_0;
		NullCheck(G_B2_0);
		UnityEvent_1_Invoke_mA633B48B5D287DA856FB954AC3E4012487E63C15(G_B2_0, L_5, UnityEvent_1_Invoke_mA633B48B5D287DA856FB954AC3E4012487E63C15_RuntimeMethod_var);
	}

IL_0025:
	{
		// }
		return;
	}
}
// System.Boolean Meta.WitAi.CallbackHandlers.WitUtteranceMatcher::IsMatch(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WitUtteranceMatcher_IsMatch_mB8EE7E23D6CD96D97E11182F23A97E5484143817 (WitUtteranceMatcher_t61084ECD5166E15FF9C36660DCD7A42241EAB098* __this, String_t* ___text0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Regex_tE773142C2BE45C5D362B0F815AFF831707A51772_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	Match_tFBEBCF225BD8EA17BCE6CE3FE5C1BD8E3074105F* V_1 = NULL;
	bool V_2 = false;
	bool V_3 = false;
	bool V_4 = false;
	bool V_5 = false;
	bool V_6 = false;
	bool V_7 = false;
	int32_t G_B7_0 = 0;
	int32_t G_B14_0 = 0;
	{
		// if (useRegex)
		bool L_0 = __this->___useRegex_9;
		V_0 = L_0;
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0072;
		}
	}
	{
		// if (null == regex)
		Regex_tE773142C2BE45C5D362B0F815AFF831707A51772* L_2 = __this->___regex_11;
		V_2 = (bool)((((RuntimeObject*)(Regex_tE773142C2BE45C5D362B0F815AFF831707A51772*)L_2) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0);
		bool L_3 = V_2;
		if (!L_3)
		{
			goto IL_002e;
		}
	}
	{
		// regex = new Regex(searchText, RegexOptions.Compiled | RegexOptions.IgnoreCase);
		String_t* L_4 = __this->___searchText_7;
		Regex_tE773142C2BE45C5D362B0F815AFF831707A51772* L_5 = (Regex_tE773142C2BE45C5D362B0F815AFF831707A51772*)il2cpp_codegen_object_new(Regex_tE773142C2BE45C5D362B0F815AFF831707A51772_il2cpp_TypeInfo_var);
		NullCheck(L_5);
		Regex__ctor_mE3996C71B04A4A6845745D01C93B1D27423D0621(L_5, L_4, ((int32_t)9), NULL);
		__this->___regex_11 = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___regex_11), (void*)L_5);
	}

IL_002e:
	{
		// var match = regex.Match(text);
		Regex_tE773142C2BE45C5D362B0F815AFF831707A51772* L_6 = __this->___regex_11;
		String_t* L_7 = ___text0;
		NullCheck(L_6);
		Match_tFBEBCF225BD8EA17BCE6CE3FE5C1BD8E3074105F* L_8;
		L_8 = Regex_Match_m58565ECF23ACCD2CA77D6F10A6A182B03CF0FF84(L_6, L_7, NULL);
		V_1 = L_8;
		// if (match.Success)
		Match_tFBEBCF225BD8EA17BCE6CE3FE5C1BD8E3074105F* L_9 = V_1;
		NullCheck(L_9);
		bool L_10;
		L_10 = Group_get_Success_m4E0238EE4B1E7F927E2AF13E2E5901BCA92BE62F(L_9, NULL);
		V_3 = L_10;
		bool L_11 = V_3;
		if (!L_11)
		{
			goto IL_006f;
		}
	}
	{
		// if (exactMatch && match.Value == text)
		bool L_12 = __this->___exactMatch_8;
		if (!L_12)
		{
			goto IL_005c;
		}
	}
	{
		Match_tFBEBCF225BD8EA17BCE6CE3FE5C1BD8E3074105F* L_13 = V_1;
		NullCheck(L_13);
		String_t* L_14;
		L_14 = Capture_get_Value_m1AB4193C2FC4B0D08AA34FECF10D03876D848BDC(L_13, NULL);
		String_t* L_15 = ___text0;
		bool L_16;
		L_16 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_14, L_15, NULL);
		G_B7_0 = ((int32_t)(L_16));
		goto IL_005d;
	}

IL_005c:
	{
		G_B7_0 = 0;
	}

IL_005d:
	{
		V_4 = (bool)G_B7_0;
		bool L_17 = V_4;
		if (!L_17)
		{
			goto IL_0069;
		}
	}
	{
		// return true;
		V_5 = (bool)1;
		goto IL_00c6;
	}

IL_0069:
	{
		// return true;
		V_5 = (bool)1;
		goto IL_00c6;
	}

IL_006f:
	{
		goto IL_00c1;
	}

IL_0072:
	{
		// else if (exactMatch && text.ToLower() == searchText.ToLower())
		bool L_18 = __this->___exactMatch_8;
		if (!L_18)
		{
			goto IL_0092;
		}
	}
	{
		String_t* L_19 = ___text0;
		NullCheck(L_19);
		String_t* L_20;
		L_20 = String_ToLower_m6191ABA3DC514ED47C10BDA23FD0DDCEAE7ACFBD(L_19, NULL);
		String_t* L_21 = __this->___searchText_7;
		NullCheck(L_21);
		String_t* L_22;
		L_22 = String_ToLower_m6191ABA3DC514ED47C10BDA23FD0DDCEAE7ACFBD(L_21, NULL);
		bool L_23;
		L_23 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_20, L_22, NULL);
		G_B14_0 = ((int32_t)(L_23));
		goto IL_0093;
	}

IL_0092:
	{
		G_B14_0 = 0;
	}

IL_0093:
	{
		V_6 = (bool)G_B14_0;
		bool L_24 = V_6;
		if (!L_24)
		{
			goto IL_009f;
		}
	}
	{
		// return true;
		V_5 = (bool)1;
		goto IL_00c6;
	}

IL_009f:
	{
		// else if (text.ToLower().Contains(searchText.ToLower()))
		String_t* L_25 = ___text0;
		NullCheck(L_25);
		String_t* L_26;
		L_26 = String_ToLower_m6191ABA3DC514ED47C10BDA23FD0DDCEAE7ACFBD(L_25, NULL);
		String_t* L_27 = __this->___searchText_7;
		NullCheck(L_27);
		String_t* L_28;
		L_28 = String_ToLower_m6191ABA3DC514ED47C10BDA23FD0DDCEAE7ACFBD(L_27, NULL);
		NullCheck(L_26);
		bool L_29;
		L_29 = String_Contains_m6D77B121FADA7CA5F397C0FABB65DA62DF03B6C3(L_26, L_28, NULL);
		V_7 = L_29;
		bool L_30 = V_7;
		if (!L_30)
		{
			goto IL_00c1;
		}
	}
	{
		// return true;
		V_5 = (bool)1;
		goto IL_00c6;
	}

IL_00c1:
	{
		// return false;
		V_5 = (bool)0;
		goto IL_00c6;
	}

IL_00c6:
	{
		// }
		bool L_31 = V_5;
		return L_31;
	}
}
// System.Void Meta.WitAi.CallbackHandlers.WitUtteranceMatcher::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WitUtteranceMatcher__ctor_m4C14137AA9E9CCE83EA0033E58813FD8FA07D59B (WitUtteranceMatcher_t61084ECD5166E15FF9C36660DCD7A42241EAB098* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringEvent_tC948A866B2D2C1ECC0783ABC07A4B876C8E28B5B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// [SerializeField] private bool exactMatch = true;
		__this->___exactMatch_8 = (bool)1;
		// [SerializeField] private StringEvent onUtteranceMatched = new StringEvent();
		StringEvent_tC948A866B2D2C1ECC0783ABC07A4B876C8E28B5B* L_0 = (StringEvent_tC948A866B2D2C1ECC0783ABC07A4B876C8E28B5B*)il2cpp_codegen_object_new(StringEvent_tC948A866B2D2C1ECC0783ABC07A4B876C8E28B5B_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		StringEvent__ctor_mC31F214D17DD41F033445DF11C6B8DE61C3731A3(L_0, NULL);
		__this->___onUtteranceMatched_10 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___onUtteranceMatched_10), (void*)L_0);
		WitResponseHandler__ctor_mA92FB5CA1D631E9FDEB631D826AB0945A3E6D609(__this, NULL);
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
// System.String Meta.WitAi.Attributes.TooltipBoxAttribute::get_Text()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* TooltipBoxAttribute_get_Text_mB54DDB968D09F1A168D9B7E70FDD518583C8A0EB (TooltipBoxAttribute_t6E9488D357587D404789CE0549F8C32A110A8779* __this, const RuntimeMethod* method) 
{
	{
		// public string Text { get; private set; }
		String_t* L_0 = __this->___U3CTextU3Ek__BackingField_1;
		return L_0;
	}
}
// System.Void Meta.WitAi.Attributes.TooltipBoxAttribute::set_Text(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TooltipBoxAttribute_set_Text_mC7790F03154E767CA88A9CDCFEF87516B846BBD5 (TooltipBoxAttribute_t6E9488D357587D404789CE0549F8C32A110A8779* __this, String_t* ___value0, const RuntimeMethod* method) 
{
	{
		// public string Text { get; private set; }
		String_t* L_0 = ___value0;
		__this->___U3CTextU3Ek__BackingField_1 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CTextU3Ek__BackingField_1), (void*)L_0);
		return;
	}
}
// System.Void Meta.WitAi.Attributes.TooltipBoxAttribute::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TooltipBoxAttribute__ctor_m56F263B8BCC8AA94D9E3F2DA6E12852572E73F8E (TooltipBoxAttribute_t6E9488D357587D404789CE0549F8C32A110A8779* __this, String_t* ___text0, const RuntimeMethod* method) 
{
	{
		// public TooltipBoxAttribute(string text)
		PropertyAttribute__ctor_m19247686E165101F140615C7306DC2DA3953D97D(__this, NULL);
		// Text = text;
		String_t* L_0 = ___text0;
		TooltipBoxAttribute_set_Text_mC7790F03154E767CA88A9CDCFEF87516B846BBD5_inline(__this, L_0, NULL);
		// }
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void WitUnityRequest_set_Configuration_mE080793F4FCBDCF7EDE3C186D9E8D13558227E16_inline (WitUnityRequest_t8F143C19E420F145BAF16B53988A2AF5B37CB202* __this, WitConfiguration_t85BCD6C826D35078E90334092184A53D1B69C72E* ___value0, const RuntimeMethod* method) 
{
	{
		// public WitConfiguration Configuration { get; private set; }
		WitConfiguration_t85BCD6C826D35078E90334092184A53D1B69C72E* L_0 = ___value0;
		__this->___U3CConfigurationU3Ek__BackingField_13 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CConfigurationU3Ek__BackingField_13), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR WitConfiguration_t85BCD6C826D35078E90334092184A53D1B69C72E* WitUnityRequest_get_Configuration_m918FD8ACDB178E13C2E9B871978254E6761EE896_inline (WitUnityRequest_t8F143C19E420F145BAF16B53988A2AF5B37CB202* __this, const RuntimeMethod* method) 
{
	{
		// public WitConfiguration Configuration { get; private set; }
		WitConfiguration_t85BCD6C826D35078E90334092184A53D1B69C72E* L_0 = __this->___U3CConfigurationU3Ek__BackingField_13;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* VoiceServiceRequestOptions_get_RequestId_mC465590B47E4B5F542BD3E9BED1074D032C1446F_inline (VoiceServiceRequestOptions_tBB80C39F5D734638F03442F09F4F106BD5F20EE4* __this, const RuntimeMethod* method) 
{
	{
		// public string RequestId { get; private set; }
		String_t* L_0 = __this->___U3CRequestIdU3Ek__BackingField_0;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* WitConfiguration_GetEndpointInfo_mF60F512344B2E6E9C4F952AC961A5CBCC4156213_inline (WitConfiguration_t85BCD6C826D35078E90334092184A53D1B69C72E* __this, const RuntimeMethod* method) 
{
	{
		// public IWitRequestEndpointInfo GetEndpointInfo() => endpointConfiguration;
		WitEndpointConfig_t7CCDA7CBBF1FDD2A7779DDF6745BAED47E69BB1D* L_0 = __this->___endpointConfiguration_9;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void WitUnityRequest_set_Endpoint_m30D4CF525E3F22D6A3A5D83C9A14DCC4ED1853C7_inline (WitUnityRequest_t8F143C19E420F145BAF16B53988A2AF5B37CB202* __this, String_t* ___value0, const RuntimeMethod* method) 
{
	{
		// public string Endpoint { get; set; }
		String_t* L_0 = ___value0;
		__this->___U3CEndpointU3Ek__BackingField_15 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CEndpointU3Ek__BackingField_15), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Mathf_RoundToInt_m60F8B66CF27F1FA75AA219342BD184B75771EB4B_inline (float ___f0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		float L_0 = ___f0;
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		double L_1;
		L_1 = bankers_round(((double)L_0));
		V_0 = il2cpp_codegen_cast_double_to_int<int32_t>(L_1);
		goto IL_000c;
	}

IL_000c:
	{
		int32_t L_2 = V_0;
		return L_2;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void VRequest_set_Timeout_mB1621F4CBAEBF2E3F8FE30866911BE2915A2E87B_inline (VRequest_tFD9B8F15B7482BF5BE064752EAE7162E3588B8A1* __this, int32_t ___value0, const RuntimeMethod* method) 
{
	{
		// public int Timeout { get; set; } = 5;
		int32_t L_0 = ___value0;
		__this->___U3CTimeoutU3Ek__BackingField_2 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void WitUnityRequest_set_ShouldPost_m99AF92DC351CA890996AEE8DEC8C226BEC51E241_inline (WitUnityRequest_t8F143C19E420F145BAF16B53988A2AF5B37CB202* __this, bool ___value0, const RuntimeMethod* method) 
{
	{
		// public bool ShouldPost { get; set; }
		bool L_0 = ___value0;
		__this->___U3CShouldPostU3Ek__BackingField_16 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* WitUnityRequest_get_Endpoint_m28357885FB9A1AA8959288E442B8F40F9D8B645F_inline (WitUnityRequest_t8F143C19E420F145BAF16B53988A2AF5B37CB202* __this, const RuntimeMethod* method) 
{
	{
		// public string Endpoint { get; set; }
		String_t* L_0 = __this->___U3CEndpointU3Ek__BackingField_15;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool WitUnityRequest_get_ShouldPost_m3BECCE1A3CC848CC2CFE93B97E1EE2197AC1F206_inline (WitUnityRequest_t8F143C19E420F145BAF16B53988A2AF5B37CB202* __this, const RuntimeMethod* method) 
{
	{
		// public bool ShouldPost { get; set; }
		bool L_0 = __this->___U3CShouldPostU3Ek__BackingField_16;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* VoiceServiceRequestOptions_get_Text_m78FC14117147FF7042E92666EBC0633FA4BD8AD0_inline (VoiceServiceRequestOptions_tBB80C39F5D734638F03442F09F4F106BD5F20EE4* __this, const RuntimeMethod* method) 
{
	{
		// public string Text { get; set; }
		String_t* L_0 = __this->___U3CTextU3Ek__BackingField_2;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* VoiceServiceRequestOptions_get_QueryParams_mF622577A065A19AA734F436AB99F4C7149DE8FAD_inline (VoiceServiceRequestOptions_tBB80C39F5D734638F03442F09F4F106BD5F20EE4* __this, const RuntimeMethod* method) 
{
	{
		// public Dictionary<string, string> QueryParams { get; private set; }
		Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* L_0 = __this->___U3CQueryParamsU3Ek__BackingField_1;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t VRequest_get_ResponseCode_mD26D66C2F4A4998F1A95B078EE48A9709FDD8CA2_inline (VRequest_tFD9B8F15B7482BF5BE064752EAE7162E3588B8A1* __this, const RuntimeMethod* method) 
{
	{
		// public int ResponseCode { get; set; } = 0;
		int32_t L_0 = __this->___U3CResponseCodeU3Ek__BackingField_5;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* SpeechEvents_get_OnStartListening_m1AE66AF56C8A79496E386C26CCB815E99EBB4DA7_inline (SpeechEvents_tB51C31627EF79AB5734270C1558A6C6F67A5040E* __this, const RuntimeMethod* method) 
{
	{
		// public UnityEvent OnStartListening => _onStartListening;
		UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* L_0 = __this->____onStartListening_24;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* SpeechEvents_get_OnStoppedListening_mB59F3490B5F895B311DA82A0288DC2AEACF87586_inline (SpeechEvents_tB51C31627EF79AB5734270C1558A6C6F67A5040E* __this, const RuntimeMethod* method) 
{
	{
		// public UnityEvent OnStoppedListening => _onStoppedListening;
		UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* L_0 = __this->____onStoppedListening_25;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR WitMicLevelChangedEvent_tA9B2889CB33EAA09656739F26AA70252ED15DEF7* SpeechEvents_get_OnMicLevelChanged_mF6437F7C9C8E60935C01C02C57CDFE62741F8CE8_inline (SpeechEvents_tB51C31627EF79AB5734270C1558A6C6F67A5040E* __this, const RuntimeMethod* method) 
{
	{
		// public WitMicLevelChangedEvent OnMicLevelChanged => _onMicLevelChanged;
		WitMicLevelChangedEvent_tA9B2889CB33EAA09656739F26AA70252ED15DEF7* L_0 = __this->____onMicLevelChanged_26;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR WitTranscriptionEvent_t51292FC7EB7BAF38C2EC6B57D87724C1BEB3C739* SpeechEvents_get_OnPartialTranscription_m0BA26BCC13243D100712E20D4A6AE8DD56C64B18_inline (SpeechEvents_tB51C31627EF79AB5734270C1558A6C6F67A5040E* __this, const RuntimeMethod* method) 
{
	{
		// public WitTranscriptionEvent OnPartialTranscription => _onPartialTranscription;
		WitTranscriptionEvent_t51292FC7EB7BAF38C2EC6B57D87724C1BEB3C739* L_0 = __this->____onPartialTranscription_28;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR WitTranscriptionEvent_t51292FC7EB7BAF38C2EC6B57D87724C1BEB3C739* SpeechEvents_get_OnFullTranscription_m72C7935CDD9EBD2FCAC9C0ECADC2830417512065_inline (SpeechEvents_tB51C31627EF79AB5734270C1558A6C6F67A5040E* __this, const RuntimeMethod* method) 
{
	{
		// public WitTranscriptionEvent OnFullTranscription => _onFullTranscription;
		WitTranscriptionEvent_t51292FC7EB7BAF38C2EC6B57D87724C1BEB3C739* L_0 = __this->____onFullTranscription_29;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* __this, float ___x0, float ___y1, const RuntimeMethod* method) 
{
	{
		float L_0 = ___x0;
		__this->___x_0 = L_0;
		float L_1 = ___y1;
		__this->___y_1 = L_1;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void OnSampleReadyEvent_Invoke_m9A89B018C8F93B365D23D6EF11B3C445D481782C_inline (OnSampleReadyEvent_t43C9DCB6394FF2C5F335602AC5455C1A6B430486* __this, Marker_t80D0133ECCCB8414D295FFD7C3FB9E6E564F5E42* ___marker0, float ___levelMax1, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, Marker_t80D0133ECCCB8414D295FFD7C3FB9E6E564F5E42*, float, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___marker0, ___levelMax1, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR VoiceServiceRequestEvent_t7340AD8EBA1B3D36E1A95E47C8DBCD954F1DED13* SpeechEvents_get_OnSend_m848D965F028D864B6175BA77425848BA86153A13_inline (SpeechEvents_tB51C31627EF79AB5734270C1558A6C6F67A5040E* __this, const RuntimeMethod* method) 
{
	{
		// public VoiceServiceRequestEvent OnSend => _onSend;
		VoiceServiceRequestEvent_t7340AD8EBA1B3D36E1A95E47C8DBCD954F1DED13* L_0 = __this->____onSend_6;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR WitValidationEvent_t731FF211C8D0215476601B54ECDDD2D1DF38974C* VoiceEvents_get_OnValidatePartialResponse_m62DE8DDDEE5ADC162380EAF17572CE4472913667_inline (VoiceEvents_t7755B8C2A9074FA12090CF7288E5512DFD225EA9* __this, const RuntimeMethod* method) 
{
	{
		// public WitValidationEvent OnValidatePartialResponse => _onValidatePartialResponse;
		WitValidationEvent_t731FF211C8D0215476601B54ECDDD2D1DF38974C* L_0 = __this->____onValidatePartialResponse_34;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR WitResponseEvent_tC85152AAABC87956DF604749EEA671ADAA9EFFDA* SpeechEvents_get_OnResponse_m35A479475B9CCCE66CDA4028A0A6AE6343E50400_inline (SpeechEvents_tB51C31627EF79AB5734270C1558A6C6F67A5040E* __this, const RuntimeMethod* method) 
{
	{
		// public WitResponseEvent OnResponse => _onResponse;
		WitResponseEvent_tC85152AAABC87956DF604749EEA671ADAA9EFFDA* L_0 = __this->____onResponse_19;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void TooltipBoxAttribute_set_Text_mC7790F03154E767CA88A9CDCFEF87516B846BBD5_inline (TooltipBoxAttribute_t6E9488D357587D404789CE0549F8C32A110A8779* __this, String_t* ___value0, const RuntimeMethod* method) 
{
	{
		// public string Text { get; private set; }
		String_t* L_0 = ___value0;
		__this->___U3CTextU3Ek__BackingField_1 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CTextU3Ek__BackingField_1), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t NLPRequest_4_get_InputType_mC9E0344101339A2209EA096521A03EF91B035FA7_gshared_inline (NLPRequest_4_t79F59B9AB3FBFADB04B729AEF19245FE89658855* __this, const RuntimeMethod* method) 
{
	{
		// public NLPRequestInputType InputType { get; private set; }
		int32_t L_0 = (int32_t)__this->___U3CInputTypeU3Ek__BackingField_9;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* VoiceRequest_4_get_Options_m9E49C7F16D2A38536F351223A546E161B86E6F1A_gshared_inline (VoiceRequest_4_t6799EEA3F92FAD2873D8E4F7650667AA90E2F95B* __this, const RuntimeMethod* method) 
{
	{
		// public TOptions Options { get; private set; }
		RuntimeObject* L_0 = (RuntimeObject*)__this->___U3COptionsU3Ek__BackingField_4;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, RuntimeObject* ___item0, const RuntimeMethod* method) 
{
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* V_0 = NULL;
	int32_t V_1 = 0;
	{
		int32_t L_0 = (int32_t)__this->____version_3;
		__this->____version_3 = ((int32_t)il2cpp_codegen_add(L_0, 1));
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_1 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)__this->____items_1;
		V_0 = L_1;
		int32_t L_2 = (int32_t)__this->____size_2;
		V_1 = L_2;
		int32_t L_3 = V_1;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_4 = V_0;
		NullCheck(L_4);
		if ((!(((uint32_t)L_3) < ((uint32_t)((int32_t)(((RuntimeArray*)L_4)->max_length))))))
		{
			goto IL_0034;
		}
	}
	{
		int32_t L_5 = V_1;
		__this->____size_2 = ((int32_t)il2cpp_codegen_add(L_5, 1));
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_6 = V_0;
		int32_t L_7 = V_1;
		RuntimeObject* L_8 = ___item0;
		NullCheck(L_6);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(L_7), (RuntimeObject*)L_8);
		return;
	}

IL_0034:
	{
		RuntimeObject* L_9 = ___item0;
		((  void (*) (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D*, RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 11)))(__this, L_9, il2cpp_rgctx_method(method->klass->rgctx_data, 11));
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t HashSet_1_get_Count_m41CC85EEB7855CEFA3BC7A32F115387939318ED3_gshared_inline (HashSet_1_t2F33BEB06EEA4A872E2FAF464382422AA39AE885* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = (int32_t)__this->____count_9;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* Func_2_Invoke_mDBA25DA5DA5B7E056FB9B026AF041F1385FB58A9_gshared_inline (Func_2_tACBF5A1656250800CE861707354491F0611F6624* __this, RuntimeObject* ___arg0, const RuntimeMethod* method) 
{
	typedef RuntimeObject* (*FunctionPointerType) (RuntimeObject*, RuntimeObject*, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___arg0, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* Enumerator_get_Current_m139A176CD271A0532D75BE08DA7831C8C45CE28F_gshared_inline (Enumerator_t72556E98D7DDBE118A973D782D523D15A96461C8* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = (RuntimeObject*)__this->____current_3;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* Enumerator_get_Current_mD6472FA27D28B9AE64A0FEF796C72ABBC2420EBF_gshared_inline (Enumerator_t65CC956745B1180C04CE6C6910FB27C5F32BB9FF* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = (RuntimeObject*)__this->____currentKey_3;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_gshared_inline (const RuntimeMethod* method) 
{
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->rgctx_data, 0));
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_0 = ((EmptyArray_1_tDF0DD7256B115243AA6BD5558417387A734240EE_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->rgctx_data, 0)))->___Value_0;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* Enumerator_get_Current_m6330F15D18EE4F547C05DF9BF83C5EB710376027_gshared_inline (Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = (RuntimeObject*)__this->____current_3;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Add_mB785B35A5407068979C269B25532380F897AF875_gshared_inline (List_1_t4F3133982BFC53A2508E8212590377CE60E9596C* __this, WitEntityKeywordInfo_tE0A290B8BFF00EF007649834C336D5DD48DA445B ___item0, const RuntimeMethod* method) 
{
	WitEntityKeywordInfoU5BU5D_tF62D7B36A857239604E3BF89B6088F63129EF811* V_0 = NULL;
	int32_t V_1 = 0;
	{
		int32_t L_0 = (int32_t)__this->____version_3;
		__this->____version_3 = ((int32_t)il2cpp_codegen_add(L_0, 1));
		WitEntityKeywordInfoU5BU5D_tF62D7B36A857239604E3BF89B6088F63129EF811* L_1 = (WitEntityKeywordInfoU5BU5D_tF62D7B36A857239604E3BF89B6088F63129EF811*)__this->____items_1;
		V_0 = L_1;
		int32_t L_2 = (int32_t)__this->____size_2;
		V_1 = L_2;
		int32_t L_3 = V_1;
		WitEntityKeywordInfoU5BU5D_tF62D7B36A857239604E3BF89B6088F63129EF811* L_4 = V_0;
		NullCheck(L_4);
		if ((!(((uint32_t)L_3) < ((uint32_t)((int32_t)(((RuntimeArray*)L_4)->max_length))))))
		{
			goto IL_0034;
		}
	}
	{
		int32_t L_5 = V_1;
		__this->____size_2 = ((int32_t)il2cpp_codegen_add(L_5, 1));
		WitEntityKeywordInfoU5BU5D_tF62D7B36A857239604E3BF89B6088F63129EF811* L_6 = V_0;
		int32_t L_7 = V_1;
		WitEntityKeywordInfo_tE0A290B8BFF00EF007649834C336D5DD48DA445B L_8 = ___item0;
		NullCheck(L_6);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(L_7), (WitEntityKeywordInfo_tE0A290B8BFF00EF007649834C336D5DD48DA445B)L_8);
		return;
	}

IL_0034:
	{
		WitEntityKeywordInfo_tE0A290B8BFF00EF007649834C336D5DD48DA445B L_9 = ___item0;
		((  void (*) (List_1_t4F3133982BFC53A2508E8212590377CE60E9596C*, WitEntityKeywordInfo_tE0A290B8BFF00EF007649834C336D5DD48DA445B, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 11)))(__this, L_9, il2cpp_rgctx_method(method->klass->rgctx_data, 11));
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_mE0AFF33D783CDEE097B45A7077DE1721E0138FE9_gshared_inline (List_1_t4F3133982BFC53A2508E8212590377CE60E9596C* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = (int32_t)__this->____size_2;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230 Enumerator_get_Current_mE3475384B761E1C7971D3639BD09117FE8363422_gshared_inline (Enumerator_tEA93FE2B778D098F590CA168BEFC4CD85D73A6B9* __this, const RuntimeMethod* method) 
{
	{
		KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230 L_0 = (KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230)__this->____current_3;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* KeyValuePair_2_get_Key_mBD8EA7557C27E6956F2AF29DA3F7499B2F51A282_gshared_inline (KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = (RuntimeObject*)__this->___key_0;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* KeyValuePair_2_get_Value_mC6BD8075F9C9DDEF7B4D731E5C38EC19103988E7_gshared_inline (KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = (RuntimeObject*)__this->___value_1;
		return L_0;
	}
}
