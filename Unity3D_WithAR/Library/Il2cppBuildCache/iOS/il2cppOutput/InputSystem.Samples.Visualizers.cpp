#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>
#include <stdint.h>


template <typename T1, typename T2>
struct VirtActionInvoker2
{
	typedef void (*Action)(void*, T1, T2, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
	}
};
template <typename R>
struct VirtFuncInvoker0
{
	typedef R (*Func)(void*, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename R, typename T1>
struct VirtFuncInvoker1
{
	typedef R (*Func)(void*, T1, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
template <typename T1>
struct VirtActionInvoker1
{
	typedef void (*Action)(void*, T1, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};

// System.Action`1<UnityEngine.InputSystem.InputAction/CallbackContext>
struct Action_1_t7A6E0E94B21008B707D8BEA0DA19B65A96D58416;
// System.Action`2<UnityEngine.InputSystem.InputDevice,UnityEngine.InputSystem.InputDeviceChange>
struct Action_2_tCA9E945868CD5BF442EF675FE455A9E807CED9D1;
// System.Action`2<UnityEngine.InputSystem.LowLevel.InputEventPtr,UnityEngine.InputSystem.InputDevice>
struct Action_2_t83E2B2D05A16B14F487969D4D187AEC66413E199;
// System.Action`2<UnityEngine.InputSystem.LowLevel.InputEventPtr,System.Object>
struct Action_2_t370D10E4C6BCCE1A1946F8EA77CF164889F8A226;
// System.Action`2<System.Object,UnityEngine.InputSystem.InputActionChange>
struct Action_2_tACB2F8D6B2F70F78DC65A6BC64A3108B0B1AC539;
// System.Action`2<System.Object,System.Int32Enum>
struct Action_2_t961B8FC40C595B3E8948D3CB85E51EB90540D7EF;
// System.Collections.Generic.Dictionary`2<UnityEngine.InputSystem.Utilities.InternedString,System.Func`1<UnityEngine.InputSystem.Layouts.InputControlLayout>>
struct Dictionary_2_t73E7A2CC7CD17B4CBC4DBC5B50FC3A085745875D;
// System.Collections.Generic.Dictionary`2<UnityEngine.InputSystem.Utilities.InternedString,UnityEngine.InputSystem.Utilities.InternedString[]>
struct Dictionary_2_t6B8207956EB1FAAEB6DBD37E3FD84A30466F2BA8;
// System.Collections.Generic.Dictionary`2<UnityEngine.InputSystem.Utilities.InternedString,UnityEngine.InputSystem.Layouts.InputControlLayout>
struct Dictionary_2_tDCF55C892C8E630B68A32A8B68C04B47E837C8A7;
// System.Collections.Generic.Dictionary`2<UnityEngine.InputSystem.Utilities.InternedString,UnityEngine.InputSystem.Utilities.InternedString>
struct Dictionary_2_tBE5A6550789B79F0A18DA883DF48023D1D980096;
// System.Collections.Generic.Dictionary`2<UnityEngine.InputSystem.Utilities.InternedString,System.String>
struct Dictionary_2_tDA5E5646D36E737D207FA28F7AB4CE457B42B367;
// System.Collections.Generic.Dictionary`2<UnityEngine.InputSystem.Utilities.InternedString,System.Type>
struct Dictionary_2_t9AFCC08689B78B2E9999C1E77045DE7FE2E38939;
// System.Collections.Generic.HashSet`1<UnityEngine.InputSystem.Utilities.InternedString>
struct HashSet_1_t68A0DBD19F3F3043FF8AC0D854B63BAA7BEB4064;
// System.Collections.Generic.List`1<UnityEngine.InputSystem.InputAction>
struct List_1_t1A9DEE7C61AA50CC920704B4671771EDF3E8D417;
// System.Collections.Generic.List`1<UnityEngine.InputSystem.Samples.InputActionVisualizer>
struct List_1_t875D9DC885BBF5157329E3844ACC8835F3F5F066;
// System.Collections.Generic.List`1<UnityEngine.InputSystem.Samples.InputControlVisualizer>
struct List_1_tD92B93CD7F6D0E73500ED17BEEE90D9C77282117;
// System.Collections.Generic.List`1<System.Object>
struct List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5;
// System.Collections.Generic.List`1<UnityEngine.InputSystem.Layouts.InputControlLayout/Collection/LayoutMatcher>
struct List_1_tE0D0016948365B54865C0A62B95211A71F2FB9A6;
// UnityEngine.InputSystem.Samples.VisualizationHelpers/ScalarVisualizer`1<System.Int32>
struct ScalarVisualizer_1_t0A41B5E8896145168954EDE0B3253E18A0572203;
// UnityEngine.InputSystem.Samples.VisualizationHelpers/ScalarVisualizer`1<System.Single>
struct ScalarVisualizer_1_tE953A574A31F5BCD8A798C67C82BE1940BBE698B;
// UnityEngine.InputSystem.Samples.VisualizationHelpers/ValueVisualizer`1<UnityEngine.Vector2>
struct ValueVisualizer_1_t80E00BEE21AB8F001F08BF2B39E8894884283EDE;
// System.Action`1<UnityEngine.InputSystem.InputAction/CallbackContext>[]
struct Action_1U5BU5D_t960376E04EEB1EB1830312AF536B2B78F2FF40B0;
// System.Byte[]
struct ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726;
// System.Char[]
struct CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34;
// UnityEngine.Color[]
struct ColorU5BU5D_t358DD89F511301E663AD9157305B94A2DEFF8834;
// System.Delegate[]
struct DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8;
// UnityEngine.GUIContent[]
struct GUIContentU5BU5D_t4830CE7B2E15B52385D7BD1EBCACD92346DBD53C;
// UnityEngine.InputSystem.InputAction[]
struct InputActionU5BU5D_t612D1F4255E82373FD5E5514AD83FA50B21A6A73;
// UnityEngine.InputSystem.Samples.InputActionVisualizer[]
struct InputActionVisualizerU5BU5D_t5A63D4C70F13BD38114B83B056FE7A3C78267DDE;
// UnityEngine.InputSystem.InputBinding[]
struct InputBindingU5BU5D_t3CCBD5F5A51F370BFD0A373A770C8720F2A6115E;
// UnityEngine.InputSystem.InputControl[]
struct InputControlU5BU5D_t4668D8411829C981759512FED1506B20F902CA67;
// UnityEngine.InputSystem.Samples.InputControlVisualizer[]
struct InputControlVisualizerU5BU5D_t4C213ABA231659BE525FEBC59A80D692A1EACFEA;
// UnityEngine.InputSystem.InputDevice[]
struct InputDeviceU5BU5D_t51F80AEE3E39E34077F38FD56C262347F180A2B2;
// System.Int32[]
struct Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32;
// System.IntPtr[]
struct IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6;
// UnityEngine.InputSystem.Utilities.InternedString[]
struct InternedStringU5BU5D_t1B3BD9ED90129E67B58E1681B1944E72F8E0E648;
// System.Object[]
struct ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE;
// System.Single[]
struct SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971;
// System.String[]
struct StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A;
// System.Type[]
struct TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755;
// UnityEngine.Vector2[]
struct Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA;
// UnityEngine.InputSystem.Layouts.InputControlLayout/ControlItem[]
struct ControlItemU5BU5D_t5AFF1520667DFF9AA06E17887A3D0B77BEB173BB;
// UnityEngine.InputSystem.Samples.VisualizationHelpers/TimelineVisualizer/FrameSample[]
struct FrameSampleU5BU5D_tBA74E48DF191E29A396F4A514962F3C376704B33;
// UnityEngine.InputSystem.Samples.VisualizationHelpers/TimelineVisualizer/TimeSample[]
struct TimeSampleU5BU5D_t6C6F367D6314FB5D033F2645A4E5D8CCF68838C9;
// UnityEngine.InputSystem.Samples.VisualizationHelpers/TimelineVisualizer/Timeline[]
struct TimelineU5BU5D_tC4060193BF7CE25CDC70D417EEDC7175EA74B44F;
// System.AsyncCallback
struct AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA;
// System.Reflection.Binder
struct Binder_t2BEE27FD84737D1E79BC47FD67F6D3DD2F2DDA30;
// UnityEngine.Component
struct Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684;
// System.DelegateData
struct DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288;
// UnityEngine.Event
struct Event_tED49F8EC5A2514F6E877E301B1AB7ABE4647253E;
// UnityEngine.GUIContent
struct GUIContent_t39256993BF4A33F76E073488D6A2F13D678DF60E;
// UnityEngine.GUIStyle
struct GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726;
// UnityEngine.GUIStyleState
struct GUIStyleState_tC89202668617B1D7884980314F293AD382B9AAD9;
// System.IAsyncResult
struct IAsyncResult_tC9F97BF36FCF122D29D3101D80642278297BF370;
// System.Collections.IDictionary
struct IDictionary_t99871C56B8EC2452AC5C4CF3831695E617B89D3A;
// System.IFormatProvider
struct IFormatProvider_tF2AECC4B14F41D36718920D67F930CED940412DF;
// UnityEngine.InputSystem.IInputInteraction
struct IInputInteraction_tB652FF871AB2CA3CA5AA406B66C2B02EBD833220;
// UnityEngine.InputSystem.InputAction
struct InputAction_tF0C77AF72E0C19608B020E77A2C36C04E9DCBE48;
// UnityEngine.InputSystem.InputActionAsset
struct InputActionAsset_tB1114F77EFFAE61A28A8A559662A6FCCF444F70E;
// UnityEngine.InputSystem.InputActionMap
struct InputActionMap_tBA45B784C5957091166E0007413402A3E83DD226;
// UnityEngine.InputSystem.InputActionReference
struct InputActionReference_tB2E9E368D60A4C8E066C7CE0EE2A80C62320C28E;
// UnityEngine.InputSystem.InputActionState
struct InputActionState_tE8F8D2439CDB9528D77707FB251FBE280C34664C;
// UnityEngine.InputSystem.Samples.InputActionVisualizer
struct InputActionVisualizer_t726DF6A67FB0B18AEECDBAB992EABF3B82E339C6;
// UnityEngine.InputSystem.InputControl
struct InputControl_t3CDD1115017147EEC9D825834637D7700669C006;
// UnityEngine.InputSystem.Layouts.InputControlLayout
struct InputControlLayout_t012E8BC3C93CE8A2A35BFC6A70C52530FFB55917;
// UnityEngine.InputSystem.Samples.InputControlVisualizer
struct InputControlVisualizer_t83B42575FEC0B8A79280A7D5AE2886C0494BC6AF;
// UnityEngine.InputSystem.InputDevice
struct InputDevice_t9E276EAE78C382539051998DEA1CD0ECF2E91323;
// UnityEngine.InputSystem.LowLevel.InputEvent
struct InputEvent_t501FCA2333E787A4DA3C7FF85383FBA452091C92;
// UnityEngine.InputSystem.InputSettings
struct InputSettings_tCA238DEE6F6A4A12B38A7FE9B66B9B8F557DAAE2;
// UnityEngine.InputSystem.Samples.InputVisualizer
struct InputVisualizer_t51917CF1458037727EDDF8C090AEB773F3EAC29E;
// System.InvalidOperationException
struct InvalidOperationException_t10D3EE59AD28EC641ACEE05BCA4271A527E5ECAB;
// System.Reflection.MemberFilter
struct MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// UnityEngine.MonoBehaviour
struct MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A;
// System.NotImplementedException
struct NotImplementedException_t26260C4EE0444C5FA022994203060B3A42A3ADE6;
// UnityEngine.Object
struct Object_tF2F3778131EFF286AF62B7B013A170F95A91571A;
// UnityEngine.InputSystem.Utilities.PrimitiveValue
struct PrimitiveValue_tB787C76E9A37444599C45519DD7E4D3A1D4730C8;
// UnityEngine.RectOffset
struct RectOffset_tE3A58467CD0749AD9D3E1271F9E315B38F39AE70;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F;
// System.String
struct String_t;
// UnityEngine.Texture
struct Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE;
// UnityEngine.Texture2D
struct Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF;
// UnityEngine.Transform
struct Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1;
// System.Type
struct Type_t;
// System.Void
struct Void_t700C6383A2A510C2CF4DD86DABD5CA9FF70ADAC5;
// UnityEngine.InputSystem.Samples.VisualizationHelpers/TimelineVisualizer
struct TimelineVisualizer_tDCF8FE655A93D562471977C145A8B989803EA315;
// UnityEngine.InputSystem.Samples.VisualizationHelpers/Vector2Visualizer
struct Vector2Visualizer_t4F4D343145C411ED0B1D42FF5AEF4E5303BA9EFC;
// UnityEngine.InputSystem.Samples.VisualizationHelpers/Visualizer
struct Visualizer_t48757514E9C44C7B20B531BB6D2713A570AA8B74;

IL2CPP_EXTERN_C RuntimeClass* Action_1_t7A6E0E94B21008B707D8BEA0DA19B65A96D58416_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Action_2_t83E2B2D05A16B14F487969D4D187AEC66413E199_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Action_2_tACB2F8D6B2F70F78DC65A6BC64A3108B0B1AC539_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Action_2_tCA9E945868CD5BF442EF675FE455A9E807CED9D1_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ColorU5BU5D_t358DD89F511301E663AD9157305B94A2DEFF8834_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* GUIContent_t39256993BF4A33F76E073488D6A2F13D678DF60E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* GUI_tBCBBE29117D8093644C6E72B1CE3FB65C2CDCCC1_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* InputActionVisualizer_t726DF6A67FB0B18AEECDBAB992EABF3B82E339C6_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* InputControlVisualizer_t83B42575FEC0B8A79280A7D5AE2886C0494BC6AF_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* InputSystem_t6F1EF32494CBBFE3270F03F3BF728BCADA04940D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* InputUpdate_t6B12FF38E9BE2CAE1B9775A2DC9C11C504CB5C88_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* InputVisualizer_t51917CF1458037727EDDF8C090AEB773F3EAC29E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* InvalidOperationException_t10D3EE59AD28EC641ACEE05BCA4271A527E5ECAB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_t875D9DC885BBF5157329E3844ACC8835F3F5F066_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_tD92B93CD7F6D0E73500ED17BEEE90D9C77282117_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* NotImplementedException_t26260C4EE0444C5FA022994203060B3A42A3ADE6_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ScalarVisualizer_1_t0A41B5E8896145168954EDE0B3253E18A0572203_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ScalarVisualizer_1_tE953A574A31F5BCD8A798C67C82BE1940BBE698B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* TimelineVisualizer_tDCF8FE655A93D562471977C145A8B989803EA315_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Type_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Vector2Visualizer_t4F4D343145C411ED0B1D42FF5AEF4E5303BA9EFC_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* VisualizationHelpers_t590688A7583BD35BAF03F9B4FB826286BBE01817_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral036574DB104539870D64DB8BF1AA8ED56D7F9C29;
IL2CPP_EXTERN_C String_t* _stringLiteral5BFB046F8A244A5090ECD5F19EF3A6A728E2F5B7;
IL2CPP_EXTERN_C String_t* _stringLiteral77B615B8ED1ABB8FC1395D85A5AE524A9789D947;
IL2CPP_EXTERN_C String_t* _stringLiteral8AE7F0B9FDD5F8620EA07E4472F7641A988C1766;
IL2CPP_EXTERN_C String_t* _stringLiteral9D5313975DA8153FF9A5262016CB413A4E84846E;
IL2CPP_EXTERN_C String_t* _stringLiteralAF29A356E2E2350A3712E86EFEC38A631035EEDC;
IL2CPP_EXTERN_C String_t* _stringLiteralAF8E649A3EF1AB74A43C9F88015FA68AC719215A;
IL2CPP_EXTERN_C String_t* _stringLiteralC5A3783CC15F62D9BA371F6EB72C7E9BDC2E4BD0;
IL2CPP_EXTERN_C String_t* _stringLiteralCB6A2B38DC2432574D81DC487BCF0A5E25DE305E;
IL2CPP_EXTERN_C const RuntimeMethod* Action_1__ctor_m8902DCFE8589EFD9B0A1C1655AC5664A0047F8D0_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Action_2__ctor_m20C0B0DB3C956DB848BF90395196756465C09EFC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Action_2__ctor_m8F70F3969874295277CB0CE383C84E1F6DC33BDA_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Action_2__ctor_mA825B05311876E5576DD29D45058F7A3FDF5927D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Array_Resize_TisTimeline_t0E8C3B4B157DAE25A77A695529CE737933D5CCBE_mBA8BC27E328677C85F6EB666EACBA917A90FB009_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisInputControlVisualizer_t83B42575FEC0B8A79280A7D5AE2886C0494BC6AF_m0394BFEEEC6FAEFDA8837ACBDC369708DC222D64_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_Dispose_mD479379B537ADEC411563180E523F9BD86134E4F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_MoveNext_mB430C73730C3EEFF9B5489CB853FA51BB1BEA590_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_get_Current_mFEB303E405B7355CC1F5908DA8789D43616C6817_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* InputActionVisualizer_OnActionChange_m94EB0C9561390248679EA8B639BFA440A0D915CF_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* InputActionVisualizer_OnActionTriggered_m0ACD93B19C536B4ACE8B93F108A2A5A32B6E6BCC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* InputControlList_1_Dispose_m89933A9B868B8E5D9EF0C8528B85D5A308169127_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* InputControlList_1_get_Count_m6C41B033AC753606385ED7F9C15DC5C0960BE592_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* InputControlList_1_get_Item_mA00C10A722E15D8FACC324A8042364DC6BC8CC20_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* InputControlVisualizer_OnDeviceChange_m2966E6BA3CFDCFCB04449ED781D6D4A44EBEAA6F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* InputControlVisualizer_OnEvent_mAA88F1CC6BC21555C7AF65C7C4C58DB8BDFE7516_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* InputControlVisualizer_SetupVisualizer_m3E23B649646E07919F7D988D55DE005D24F5ECE7_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* InputEventPtr_IsA_TisDeltaStateEvent_t8CA8FF8F0CF816316C0682FE4A0387DB02D3334A_m95E3ABAF4B7FAAAE53BCCFF687591BBDCB587CC8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* InputEventPtr_IsA_TisStateEvent_t5FC3789364630893748679234A6A7FDE4BA64B70_mB234D9EBB5E6AE99FF42493115B2BFCA7609026A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_m14CE625BA41D15CEFAB485E8AC718C8F033E9A68_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_m35E826ECBC0E1C8CA43EE8338888C3958CC07128_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_GetEnumerator_m0F2C51150435B0E7B758F3D4769F4C5D3DCFC8D9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Remove_m729CBC2A75F04AA56FF09800A55ED048A9EB3FEE_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Remove_mF983F9F989DFCF421AF7224082DD7BC022F25828_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_m8BFEF9870EEC090F96A2C5657A511307B32B6B7B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_mEF0ED01B6F1A8B15D034E031141EBA514B03F2A3_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Count_m4615D7BF299A0DA3A8D79F79A55A134518AF2796_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Count_m69DE315A508A83D4D5285EDA046A2BC454A5A2C1_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Item_m5F44DB67A0DAA8DF872581776D0F560B865927E9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Item_mDD32886AF1B275B69654CE61C1DDFB3542159D91_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* RingBuffer_1_Append_m5EEA4129391DF819A18C217E469874629F2CF98B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* RingBuffer_1_Append_mDC563C0021BB061ED5797274D0E98835815A9E40_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* RingBuffer_1__ctor_m008DAFC556453D757AC430CFBCE66287F415776E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* RingBuffer_1__ctor_m41C93D129E54821358D0152E7184702894B5BC1E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* RingBuffer_1_get_Item_m324251981EEDA84F8C57FDBB08FB72521CD65892_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* RingBuffer_1_get_Item_m50590F07DFD1B70212B4CABD643088E1C99D0AE0_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* RingBuffer_1_get_Item_m8A5C3B43B9D54B9F9588C402031DC5ECC59DBBE1_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* RingBuffer_1_get_Item_mF7D35F29AD84949BD33FCD9F6F4AB2F5787DB756_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ScalarVisualizer_1__ctor_m2980C02FB3A3B4FF9DDF664DE2D5C2B4EE6F9872_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ScalarVisualizer_1__ctor_m2AF7C1BBF921A1693F885C380A15AC214205E430_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TimelineVisualizer_AddSample_mA34350BEAB3A9FB50EAD43AE3BE6747CAEDD4AE6_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ValueVisualizer_1_AddSample_mE5681CB696F7117D8BDECC59AFE262D0875904DE_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ValueVisualizer_1__ctor_m549DFCBB6C3329F6E1B2F8185D2F7D56349883FB_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* VisualizationHelpers_DrawAxis_m41296CB0B344F006E81C7DCCD6F00F77C1456E2C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeType* Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* Single_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_0_0_0_var;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;
struct GUIContent_t39256993BF4A33F76E073488D6A2F13D678DF60E;;
struct GUIContent_t39256993BF4A33F76E073488D6A2F13D678DF60E_marshaled_com;
struct GUIContent_t39256993BF4A33F76E073488D6A2F13D678DF60E_marshaled_com;;
struct GUIContent_t39256993BF4A33F76E073488D6A2F13D678DF60E_marshaled_pinvoke;
struct GUIContent_t39256993BF4A33F76E073488D6A2F13D678DF60E_marshaled_pinvoke;;
struct GUIStyleState_tC89202668617B1D7884980314F293AD382B9AAD9_marshaled_com;
struct GUIStyleState_tC89202668617B1D7884980314F293AD382B9AAD9_marshaled_pinvoke;
struct GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726_marshaled_com;
struct GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726_marshaled_pinvoke;
struct PrimitiveValue_tB787C76E9A37444599C45519DD7E4D3A1D4730C8;;
struct PrimitiveValue_tB787C76E9A37444599C45519DD7E4D3A1D4730C8_marshaled_com;
struct PrimitiveValue_tB787C76E9A37444599C45519DD7E4D3A1D4730C8_marshaled_com;;
struct PrimitiveValue_tB787C76E9A37444599C45519DD7E4D3A1D4730C8_marshaled_pinvoke;
struct PrimitiveValue_tB787C76E9A37444599C45519DD7E4D3A1D4730C8_marshaled_pinvoke;;
struct RectOffset_tE3A58467CD0749AD9D3E1271F9E315B38F39AE70_marshaled_com;

struct ColorU5BU5D_t358DD89F511301E663AD9157305B94A2DEFF8834;
struct ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE;
struct Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA;
struct TimelineU5BU5D_tC4060193BF7CE25CDC70D417EEDC7175EA74B44F;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct U3CModuleU3E_tDE79895256A66581FFE21F1CD4ECBC36EE373463 
{
public:

public:
};


// System.Object


// System.Collections.Generic.List`1<UnityEngine.InputSystem.InputAction>
struct List_1_t1A9DEE7C61AA50CC920704B4671771EDF3E8D417  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	InputActionU5BU5D_t612D1F4255E82373FD5E5514AD83FA50B21A6A73* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t1A9DEE7C61AA50CC920704B4671771EDF3E8D417, ____items_1)); }
	inline InputActionU5BU5D_t612D1F4255E82373FD5E5514AD83FA50B21A6A73* get__items_1() const { return ____items_1; }
	inline InputActionU5BU5D_t612D1F4255E82373FD5E5514AD83FA50B21A6A73** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(InputActionU5BU5D_t612D1F4255E82373FD5E5514AD83FA50B21A6A73* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____items_1), (void*)value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t1A9DEE7C61AA50CC920704B4671771EDF3E8D417, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t1A9DEE7C61AA50CC920704B4671771EDF3E8D417, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_t1A9DEE7C61AA50CC920704B4671771EDF3E8D417, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_4), (void*)value);
	}
};

struct List_1_t1A9DEE7C61AA50CC920704B4671771EDF3E8D417_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	InputActionU5BU5D_t612D1F4255E82373FD5E5514AD83FA50B21A6A73* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_t1A9DEE7C61AA50CC920704B4671771EDF3E8D417_StaticFields, ____emptyArray_5)); }
	inline InputActionU5BU5D_t612D1F4255E82373FD5E5514AD83FA50B21A6A73* get__emptyArray_5() const { return ____emptyArray_5; }
	inline InputActionU5BU5D_t612D1F4255E82373FD5E5514AD83FA50B21A6A73** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(InputActionU5BU5D_t612D1F4255E82373FD5E5514AD83FA50B21A6A73* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____emptyArray_5), (void*)value);
	}
};


// System.Collections.Generic.List`1<UnityEngine.InputSystem.Samples.InputActionVisualizer>
struct List_1_t875D9DC885BBF5157329E3844ACC8835F3F5F066  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	InputActionVisualizerU5BU5D_t5A63D4C70F13BD38114B83B056FE7A3C78267DDE* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t875D9DC885BBF5157329E3844ACC8835F3F5F066, ____items_1)); }
	inline InputActionVisualizerU5BU5D_t5A63D4C70F13BD38114B83B056FE7A3C78267DDE* get__items_1() const { return ____items_1; }
	inline InputActionVisualizerU5BU5D_t5A63D4C70F13BD38114B83B056FE7A3C78267DDE** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(InputActionVisualizerU5BU5D_t5A63D4C70F13BD38114B83B056FE7A3C78267DDE* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____items_1), (void*)value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t875D9DC885BBF5157329E3844ACC8835F3F5F066, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t875D9DC885BBF5157329E3844ACC8835F3F5F066, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_t875D9DC885BBF5157329E3844ACC8835F3F5F066, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_4), (void*)value);
	}
};

struct List_1_t875D9DC885BBF5157329E3844ACC8835F3F5F066_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	InputActionVisualizerU5BU5D_t5A63D4C70F13BD38114B83B056FE7A3C78267DDE* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_t875D9DC885BBF5157329E3844ACC8835F3F5F066_StaticFields, ____emptyArray_5)); }
	inline InputActionVisualizerU5BU5D_t5A63D4C70F13BD38114B83B056FE7A3C78267DDE* get__emptyArray_5() const { return ____emptyArray_5; }
	inline InputActionVisualizerU5BU5D_t5A63D4C70F13BD38114B83B056FE7A3C78267DDE** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(InputActionVisualizerU5BU5D_t5A63D4C70F13BD38114B83B056FE7A3C78267DDE* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____emptyArray_5), (void*)value);
	}
};


// System.Collections.Generic.List`1<UnityEngine.InputSystem.Samples.InputControlVisualizer>
struct List_1_tD92B93CD7F6D0E73500ED17BEEE90D9C77282117  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	InputControlVisualizerU5BU5D_t4C213ABA231659BE525FEBC59A80D692A1EACFEA* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_tD92B93CD7F6D0E73500ED17BEEE90D9C77282117, ____items_1)); }
	inline InputControlVisualizerU5BU5D_t4C213ABA231659BE525FEBC59A80D692A1EACFEA* get__items_1() const { return ____items_1; }
	inline InputControlVisualizerU5BU5D_t4C213ABA231659BE525FEBC59A80D692A1EACFEA** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(InputControlVisualizerU5BU5D_t4C213ABA231659BE525FEBC59A80D692A1EACFEA* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____items_1), (void*)value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_tD92B93CD7F6D0E73500ED17BEEE90D9C77282117, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_tD92B93CD7F6D0E73500ED17BEEE90D9C77282117, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_tD92B93CD7F6D0E73500ED17BEEE90D9C77282117, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_4), (void*)value);
	}
};

struct List_1_tD92B93CD7F6D0E73500ED17BEEE90D9C77282117_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	InputControlVisualizerU5BU5D_t4C213ABA231659BE525FEBC59A80D692A1EACFEA* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_tD92B93CD7F6D0E73500ED17BEEE90D9C77282117_StaticFields, ____emptyArray_5)); }
	inline InputControlVisualizerU5BU5D_t4C213ABA231659BE525FEBC59A80D692A1EACFEA* get__emptyArray_5() const { return ____emptyArray_5; }
	inline InputControlVisualizerU5BU5D_t4C213ABA231659BE525FEBC59A80D692A1EACFEA** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(InputControlVisualizerU5BU5D_t4C213ABA231659BE525FEBC59A80D692A1EACFEA* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____emptyArray_5), (void*)value);
	}
};


// System.Collections.Generic.List`1<System.Object>
struct List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5, ____items_1)); }
	inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* get__items_1() const { return ____items_1; }
	inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____items_1), (void*)value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_4), (void*)value);
	}
};

struct List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5_StaticFields, ____emptyArray_5)); }
	inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* get__emptyArray_5() const { return ____emptyArray_5; }
	inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____emptyArray_5), (void*)value);
	}
};

struct Il2CppArrayBounds;

// System.Array


// UnityEngine.GUIContent
struct GUIContent_t39256993BF4A33F76E073488D6A2F13D678DF60E  : public RuntimeObject
{
public:
	// System.String UnityEngine.GUIContent::m_Text
	String_t* ___m_Text_0;
	// UnityEngine.Texture UnityEngine.GUIContent::m_Image
	Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE * ___m_Image_1;
	// System.String UnityEngine.GUIContent::m_Tooltip
	String_t* ___m_Tooltip_2;

public:
	inline static int32_t get_offset_of_m_Text_0() { return static_cast<int32_t>(offsetof(GUIContent_t39256993BF4A33F76E073488D6A2F13D678DF60E, ___m_Text_0)); }
	inline String_t* get_m_Text_0() const { return ___m_Text_0; }
	inline String_t** get_address_of_m_Text_0() { return &___m_Text_0; }
	inline void set_m_Text_0(String_t* value)
	{
		___m_Text_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Text_0), (void*)value);
	}

	inline static int32_t get_offset_of_m_Image_1() { return static_cast<int32_t>(offsetof(GUIContent_t39256993BF4A33F76E073488D6A2F13D678DF60E, ___m_Image_1)); }
	inline Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE * get_m_Image_1() const { return ___m_Image_1; }
	inline Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE ** get_address_of_m_Image_1() { return &___m_Image_1; }
	inline void set_m_Image_1(Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE * value)
	{
		___m_Image_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Image_1), (void*)value);
	}

	inline static int32_t get_offset_of_m_Tooltip_2() { return static_cast<int32_t>(offsetof(GUIContent_t39256993BF4A33F76E073488D6A2F13D678DF60E, ___m_Tooltip_2)); }
	inline String_t* get_m_Tooltip_2() const { return ___m_Tooltip_2; }
	inline String_t** get_address_of_m_Tooltip_2() { return &___m_Tooltip_2; }
	inline void set_m_Tooltip_2(String_t* value)
	{
		___m_Tooltip_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Tooltip_2), (void*)value);
	}
};

struct GUIContent_t39256993BF4A33F76E073488D6A2F13D678DF60E_StaticFields
{
public:
	// UnityEngine.GUIContent UnityEngine.GUIContent::s_Text
	GUIContent_t39256993BF4A33F76E073488D6A2F13D678DF60E * ___s_Text_3;
	// UnityEngine.GUIContent UnityEngine.GUIContent::s_Image
	GUIContent_t39256993BF4A33F76E073488D6A2F13D678DF60E * ___s_Image_4;
	// UnityEngine.GUIContent UnityEngine.GUIContent::s_TextImage
	GUIContent_t39256993BF4A33F76E073488D6A2F13D678DF60E * ___s_TextImage_5;
	// UnityEngine.GUIContent UnityEngine.GUIContent::none
	GUIContent_t39256993BF4A33F76E073488D6A2F13D678DF60E * ___none_6;

public:
	inline static int32_t get_offset_of_s_Text_3() { return static_cast<int32_t>(offsetof(GUIContent_t39256993BF4A33F76E073488D6A2F13D678DF60E_StaticFields, ___s_Text_3)); }
	inline GUIContent_t39256993BF4A33F76E073488D6A2F13D678DF60E * get_s_Text_3() const { return ___s_Text_3; }
	inline GUIContent_t39256993BF4A33F76E073488D6A2F13D678DF60E ** get_address_of_s_Text_3() { return &___s_Text_3; }
	inline void set_s_Text_3(GUIContent_t39256993BF4A33F76E073488D6A2F13D678DF60E * value)
	{
		___s_Text_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_Text_3), (void*)value);
	}

	inline static int32_t get_offset_of_s_Image_4() { return static_cast<int32_t>(offsetof(GUIContent_t39256993BF4A33F76E073488D6A2F13D678DF60E_StaticFields, ___s_Image_4)); }
	inline GUIContent_t39256993BF4A33F76E073488D6A2F13D678DF60E * get_s_Image_4() const { return ___s_Image_4; }
	inline GUIContent_t39256993BF4A33F76E073488D6A2F13D678DF60E ** get_address_of_s_Image_4() { return &___s_Image_4; }
	inline void set_s_Image_4(GUIContent_t39256993BF4A33F76E073488D6A2F13D678DF60E * value)
	{
		___s_Image_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_Image_4), (void*)value);
	}

	inline static int32_t get_offset_of_s_TextImage_5() { return static_cast<int32_t>(offsetof(GUIContent_t39256993BF4A33F76E073488D6A2F13D678DF60E_StaticFields, ___s_TextImage_5)); }
	inline GUIContent_t39256993BF4A33F76E073488D6A2F13D678DF60E * get_s_TextImage_5() const { return ___s_TextImage_5; }
	inline GUIContent_t39256993BF4A33F76E073488D6A2F13D678DF60E ** get_address_of_s_TextImage_5() { return &___s_TextImage_5; }
	inline void set_s_TextImage_5(GUIContent_t39256993BF4A33F76E073488D6A2F13D678DF60E * value)
	{
		___s_TextImage_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_TextImage_5), (void*)value);
	}

	inline static int32_t get_offset_of_none_6() { return static_cast<int32_t>(offsetof(GUIContent_t39256993BF4A33F76E073488D6A2F13D678DF60E_StaticFields, ___none_6)); }
	inline GUIContent_t39256993BF4A33F76E073488D6A2F13D678DF60E * get_none_6() const { return ___none_6; }
	inline GUIContent_t39256993BF4A33F76E073488D6A2F13D678DF60E ** get_address_of_none_6() { return &___none_6; }
	inline void set_none_6(GUIContent_t39256993BF4A33F76E073488D6A2F13D678DF60E * value)
	{
		___none_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___none_6), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.GUIContent
struct GUIContent_t39256993BF4A33F76E073488D6A2F13D678DF60E_marshaled_pinvoke
{
	char* ___m_Text_0;
	Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE * ___m_Image_1;
	char* ___m_Tooltip_2;
};
// Native definition for COM marshalling of UnityEngine.GUIContent
struct GUIContent_t39256993BF4A33F76E073488D6A2F13D678DF60E_marshaled_com
{
	Il2CppChar* ___m_Text_0;
	Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE * ___m_Image_1;
	Il2CppChar* ___m_Tooltip_2;
};

// System.Reflection.MemberInfo
struct MemberInfo_t  : public RuntimeObject
{
public:

public:
};


// System.String
struct String_t  : public RuntimeObject
{
public:
	// System.Int32 System.String::m_stringLength
	int32_t ___m_stringLength_0;
	// System.Char System.String::m_firstChar
	Il2CppChar ___m_firstChar_1;

public:
	inline static int32_t get_offset_of_m_stringLength_0() { return static_cast<int32_t>(offsetof(String_t, ___m_stringLength_0)); }
	inline int32_t get_m_stringLength_0() const { return ___m_stringLength_0; }
	inline int32_t* get_address_of_m_stringLength_0() { return &___m_stringLength_0; }
	inline void set_m_stringLength_0(int32_t value)
	{
		___m_stringLength_0 = value;
	}

	inline static int32_t get_offset_of_m_firstChar_1() { return static_cast<int32_t>(offsetof(String_t, ___m_firstChar_1)); }
	inline Il2CppChar get_m_firstChar_1() const { return ___m_firstChar_1; }
	inline Il2CppChar* get_address_of_m_firstChar_1() { return &___m_firstChar_1; }
	inline void set_m_firstChar_1(Il2CppChar value)
	{
		___m_firstChar_1 = value;
	}
};

struct String_t_StaticFields
{
public:
	// System.String System.String::Empty
	String_t* ___Empty_5;

public:
	inline static int32_t get_offset_of_Empty_5() { return static_cast<int32_t>(offsetof(String_t_StaticFields, ___Empty_5)); }
	inline String_t* get_Empty_5() const { return ___Empty_5; }
	inline String_t** get_address_of_Empty_5() { return &___Empty_5; }
	inline void set_Empty_5(String_t* value)
	{
		___Empty_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Empty_5), (void*)value);
	}
};


// System.ValueType
struct ValueType_tDBF999C1B75C48C68621878250DBF6CDBCF51E52  : public RuntimeObject
{
public:

public:
};

// Native definition for P/Invoke marshalling of System.ValueType
struct ValueType_tDBF999C1B75C48C68621878250DBF6CDBCF51E52_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.ValueType
struct ValueType_tDBF999C1B75C48C68621878250DBF6CDBCF51E52_marshaled_com
{
};

// UnityEngine.InputSystem.Samples.VisualizationHelpers
struct VisualizationHelpers_t590688A7583BD35BAF03F9B4FB826286BBE01817  : public RuntimeObject
{
public:

public:
};

struct VisualizationHelpers_t590688A7583BD35BAF03F9B4FB826286BBE01817_StaticFields
{
public:
	// UnityEngine.Texture2D UnityEngine.InputSystem.Samples.VisualizationHelpers::s_OnePixTex
	Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * ___s_OnePixTex_0;
	// UnityEngine.GUIStyle UnityEngine.InputSystem.Samples.VisualizationHelpers::s_ValueTextStyle
	GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * ___s_ValueTextStyle_1;

public:
	inline static int32_t get_offset_of_s_OnePixTex_0() { return static_cast<int32_t>(offsetof(VisualizationHelpers_t590688A7583BD35BAF03F9B4FB826286BBE01817_StaticFields, ___s_OnePixTex_0)); }
	inline Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * get_s_OnePixTex_0() const { return ___s_OnePixTex_0; }
	inline Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF ** get_address_of_s_OnePixTex_0() { return &___s_OnePixTex_0; }
	inline void set_s_OnePixTex_0(Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * value)
	{
		___s_OnePixTex_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_OnePixTex_0), (void*)value);
	}

	inline static int32_t get_offset_of_s_ValueTextStyle_1() { return static_cast<int32_t>(offsetof(VisualizationHelpers_t590688A7583BD35BAF03F9B4FB826286BBE01817_StaticFields, ___s_ValueTextStyle_1)); }
	inline GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * get_s_ValueTextStyle_1() const { return ___s_ValueTextStyle_1; }
	inline GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 ** get_address_of_s_ValueTextStyle_1() { return &___s_ValueTextStyle_1; }
	inline void set_s_ValueTextStyle_1(GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * value)
	{
		___s_ValueTextStyle_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_ValueTextStyle_1), (void*)value);
	}
};


// UnityEngine.InputSystem.Samples.VisualizationHelpers/Visualizer
struct Visualizer_t48757514E9C44C7B20B531BB6D2713A570AA8B74  : public RuntimeObject
{
public:

public:
};


// System.Collections.Generic.List`1/Enumerator<UnityEngine.InputSystem.InputAction>
struct Enumerator_tA547514D47C2255448922E93CB4A07E699198716 
{
public:
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1/Enumerator::list
	List_1_t1A9DEE7C61AA50CC920704B4671771EDF3E8D417 * ___list_0;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::index
	int32_t ___index_1;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::version
	int32_t ___version_2;
	// T System.Collections.Generic.List`1/Enumerator::current
	InputAction_tF0C77AF72E0C19608B020E77A2C36C04E9DCBE48 * ___current_3;

public:
	inline static int32_t get_offset_of_list_0() { return static_cast<int32_t>(offsetof(Enumerator_tA547514D47C2255448922E93CB4A07E699198716, ___list_0)); }
	inline List_1_t1A9DEE7C61AA50CC920704B4671771EDF3E8D417 * get_list_0() const { return ___list_0; }
	inline List_1_t1A9DEE7C61AA50CC920704B4671771EDF3E8D417 ** get_address_of_list_0() { return &___list_0; }
	inline void set_list_0(List_1_t1A9DEE7C61AA50CC920704B4671771EDF3E8D417 * value)
	{
		___list_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___list_0), (void*)value);
	}

	inline static int32_t get_offset_of_index_1() { return static_cast<int32_t>(offsetof(Enumerator_tA547514D47C2255448922E93CB4A07E699198716, ___index_1)); }
	inline int32_t get_index_1() const { return ___index_1; }
	inline int32_t* get_address_of_index_1() { return &___index_1; }
	inline void set_index_1(int32_t value)
	{
		___index_1 = value;
	}

	inline static int32_t get_offset_of_version_2() { return static_cast<int32_t>(offsetof(Enumerator_tA547514D47C2255448922E93CB4A07E699198716, ___version_2)); }
	inline int32_t get_version_2() const { return ___version_2; }
	inline int32_t* get_address_of_version_2() { return &___version_2; }
	inline void set_version_2(int32_t value)
	{
		___version_2 = value;
	}

	inline static int32_t get_offset_of_current_3() { return static_cast<int32_t>(offsetof(Enumerator_tA547514D47C2255448922E93CB4A07E699198716, ___current_3)); }
	inline InputAction_tF0C77AF72E0C19608B020E77A2C36C04E9DCBE48 * get_current_3() const { return ___current_3; }
	inline InputAction_tF0C77AF72E0C19608B020E77A2C36C04E9DCBE48 ** get_address_of_current_3() { return &___current_3; }
	inline void set_current_3(InputAction_tF0C77AF72E0C19608B020E77A2C36C04E9DCBE48 * value)
	{
		___current_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___current_3), (void*)value);
	}
};


// System.Collections.Generic.List`1/Enumerator<System.Object>
struct Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6 
{
public:
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1/Enumerator::list
	List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * ___list_0;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::index
	int32_t ___index_1;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::version
	int32_t ___version_2;
	// T System.Collections.Generic.List`1/Enumerator::current
	RuntimeObject * ___current_3;

public:
	inline static int32_t get_offset_of_list_0() { return static_cast<int32_t>(offsetof(Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6, ___list_0)); }
	inline List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * get_list_0() const { return ___list_0; }
	inline List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 ** get_address_of_list_0() { return &___list_0; }
	inline void set_list_0(List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * value)
	{
		___list_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___list_0), (void*)value);
	}

	inline static int32_t get_offset_of_index_1() { return static_cast<int32_t>(offsetof(Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6, ___index_1)); }
	inline int32_t get_index_1() const { return ___index_1; }
	inline int32_t* get_address_of_index_1() { return &___index_1; }
	inline void set_index_1(int32_t value)
	{
		___index_1 = value;
	}

	inline static int32_t get_offset_of_version_2() { return static_cast<int32_t>(offsetof(Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6, ___version_2)); }
	inline int32_t get_version_2() const { return ___version_2; }
	inline int32_t* get_address_of_version_2() { return &___version_2; }
	inline void set_version_2(int32_t value)
	{
		___version_2 = value;
	}

	inline static int32_t get_offset_of_current_3() { return static_cast<int32_t>(offsetof(Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6, ___current_3)); }
	inline RuntimeObject * get_current_3() const { return ___current_3; }
	inline RuntimeObject ** get_address_of_current_3() { return &___current_3; }
	inline void set_current_3(RuntimeObject * value)
	{
		___current_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___current_3), (void*)value);
	}
};


// UnityEngine.InputSystem.Utilities.InlinedArray`1<System.Action`1<UnityEngine.InputSystem.InputAction/CallbackContext>>
struct InlinedArray_1_tD8F648109EC431FFA4D6E31DC56D88C27692A37E 
{
public:
	// System.Int32 UnityEngine.InputSystem.Utilities.InlinedArray`1::length
	int32_t ___length_0;
	// TValue UnityEngine.InputSystem.Utilities.InlinedArray`1::firstValue
	Action_1_t7A6E0E94B21008B707D8BEA0DA19B65A96D58416 * ___firstValue_1;
	// TValue[] UnityEngine.InputSystem.Utilities.InlinedArray`1::additionalValues
	Action_1U5BU5D_t960376E04EEB1EB1830312AF536B2B78F2FF40B0* ___additionalValues_2;

public:
	inline static int32_t get_offset_of_length_0() { return static_cast<int32_t>(offsetof(InlinedArray_1_tD8F648109EC431FFA4D6E31DC56D88C27692A37E, ___length_0)); }
	inline int32_t get_length_0() const { return ___length_0; }
	inline int32_t* get_address_of_length_0() { return &___length_0; }
	inline void set_length_0(int32_t value)
	{
		___length_0 = value;
	}

	inline static int32_t get_offset_of_firstValue_1() { return static_cast<int32_t>(offsetof(InlinedArray_1_tD8F648109EC431FFA4D6E31DC56D88C27692A37E, ___firstValue_1)); }
	inline Action_1_t7A6E0E94B21008B707D8BEA0DA19B65A96D58416 * get_firstValue_1() const { return ___firstValue_1; }
	inline Action_1_t7A6E0E94B21008B707D8BEA0DA19B65A96D58416 ** get_address_of_firstValue_1() { return &___firstValue_1; }
	inline void set_firstValue_1(Action_1_t7A6E0E94B21008B707D8BEA0DA19B65A96D58416 * value)
	{
		___firstValue_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___firstValue_1), (void*)value);
	}

	inline static int32_t get_offset_of_additionalValues_2() { return static_cast<int32_t>(offsetof(InlinedArray_1_tD8F648109EC431FFA4D6E31DC56D88C27692A37E, ___additionalValues_2)); }
	inline Action_1U5BU5D_t960376E04EEB1EB1830312AF536B2B78F2FF40B0* get_additionalValues_2() const { return ___additionalValues_2; }
	inline Action_1U5BU5D_t960376E04EEB1EB1830312AF536B2B78F2FF40B0** get_address_of_additionalValues_2() { return &___additionalValues_2; }
	inline void set_additionalValues_2(Action_1U5BU5D_t960376E04EEB1EB1830312AF536B2B78F2FF40B0* value)
	{
		___additionalValues_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___additionalValues_2), (void*)value);
	}
};


// System.Nullable`1<System.Boolean>
struct Nullable_1_t1D1CD146BFCBDC2E53E1F700889F8C5C21063EF3 
{
public:
	// T System.Nullable`1::value
	bool ___value_0;
	// System.Boolean System.Nullable`1::has_value
	bool ___has_value_1;

public:
	inline static int32_t get_offset_of_value_0() { return static_cast<int32_t>(offsetof(Nullable_1_t1D1CD146BFCBDC2E53E1F700889F8C5C21063EF3, ___value_0)); }
	inline bool get_value_0() const { return ___value_0; }
	inline bool* get_address_of_value_0() { return &___value_0; }
	inline void set_value_0(bool value)
	{
		___value_0 = value;
	}

	inline static int32_t get_offset_of_has_value_1() { return static_cast<int32_t>(offsetof(Nullable_1_t1D1CD146BFCBDC2E53E1F700889F8C5C21063EF3, ___has_value_1)); }
	inline bool get_has_value_1() const { return ___has_value_1; }
	inline bool* get_address_of_has_value_1() { return &___has_value_1; }
	inline void set_has_value_1(bool value)
	{
		___has_value_1 = value;
	}
};


// UnityEngine.InputSystem.Samples.VisualizationHelpers/RingBuffer`1<UnityEngine.GUIContent>
struct RingBuffer_1_t92C8E8147EA971F447C8085E01FEDD0A208062D6 
{
public:
	// TValue[] UnityEngine.InputSystem.Samples.VisualizationHelpers/RingBuffer`1::array
	GUIContentU5BU5D_t4830CE7B2E15B52385D7BD1EBCACD92346DBD53C* ___array_0;
	// System.Int32 UnityEngine.InputSystem.Samples.VisualizationHelpers/RingBuffer`1::head
	int32_t ___head_1;
	// System.Int32 UnityEngine.InputSystem.Samples.VisualizationHelpers/RingBuffer`1::count
	int32_t ___count_2;

public:
	inline static int32_t get_offset_of_array_0() { return static_cast<int32_t>(offsetof(RingBuffer_1_t92C8E8147EA971F447C8085E01FEDD0A208062D6, ___array_0)); }
	inline GUIContentU5BU5D_t4830CE7B2E15B52385D7BD1EBCACD92346DBD53C* get_array_0() const { return ___array_0; }
	inline GUIContentU5BU5D_t4830CE7B2E15B52385D7BD1EBCACD92346DBD53C** get_address_of_array_0() { return &___array_0; }
	inline void set_array_0(GUIContentU5BU5D_t4830CE7B2E15B52385D7BD1EBCACD92346DBD53C* value)
	{
		___array_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___array_0), (void*)value);
	}

	inline static int32_t get_offset_of_head_1() { return static_cast<int32_t>(offsetof(RingBuffer_1_t92C8E8147EA971F447C8085E01FEDD0A208062D6, ___head_1)); }
	inline int32_t get_head_1() const { return ___head_1; }
	inline int32_t* get_address_of_head_1() { return &___head_1; }
	inline void set_head_1(int32_t value)
	{
		___head_1 = value;
	}

	inline static int32_t get_offset_of_count_2() { return static_cast<int32_t>(offsetof(RingBuffer_1_t92C8E8147EA971F447C8085E01FEDD0A208062D6, ___count_2)); }
	inline int32_t get_count_2() const { return ___count_2; }
	inline int32_t* get_address_of_count_2() { return &___count_2; }
	inline void set_count_2(int32_t value)
	{
		___count_2 = value;
	}
};


// UnityEngine.InputSystem.Samples.VisualizationHelpers/RingBuffer`1<System.Int32>
struct RingBuffer_1_t63E18EFF351C05B185859CD92E4E4C3112ADBEAA 
{
public:
	// TValue[] UnityEngine.InputSystem.Samples.VisualizationHelpers/RingBuffer`1::array
	Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ___array_0;
	// System.Int32 UnityEngine.InputSystem.Samples.VisualizationHelpers/RingBuffer`1::head
	int32_t ___head_1;
	// System.Int32 UnityEngine.InputSystem.Samples.VisualizationHelpers/RingBuffer`1::count
	int32_t ___count_2;

public:
	inline static int32_t get_offset_of_array_0() { return static_cast<int32_t>(offsetof(RingBuffer_1_t63E18EFF351C05B185859CD92E4E4C3112ADBEAA, ___array_0)); }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* get_array_0() const { return ___array_0; }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32** get_address_of_array_0() { return &___array_0; }
	inline void set_array_0(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* value)
	{
		___array_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___array_0), (void*)value);
	}

	inline static int32_t get_offset_of_head_1() { return static_cast<int32_t>(offsetof(RingBuffer_1_t63E18EFF351C05B185859CD92E4E4C3112ADBEAA, ___head_1)); }
	inline int32_t get_head_1() const { return ___head_1; }
	inline int32_t* get_address_of_head_1() { return &___head_1; }
	inline void set_head_1(int32_t value)
	{
		___head_1 = value;
	}

	inline static int32_t get_offset_of_count_2() { return static_cast<int32_t>(offsetof(RingBuffer_1_t63E18EFF351C05B185859CD92E4E4C3112ADBEAA, ___count_2)); }
	inline int32_t get_count_2() const { return ___count_2; }
	inline int32_t* get_address_of_count_2() { return &___count_2; }
	inline void set_count_2(int32_t value)
	{
		___count_2 = value;
	}
};


// UnityEngine.InputSystem.Samples.VisualizationHelpers/RingBuffer`1<System.Object>
struct RingBuffer_1_tFEB8D7EE12AD11C4DAC985C2F72C0D4BD23865B2 
{
public:
	// TValue[] UnityEngine.InputSystem.Samples.VisualizationHelpers/RingBuffer`1::array
	ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* ___array_0;
	// System.Int32 UnityEngine.InputSystem.Samples.VisualizationHelpers/RingBuffer`1::head
	int32_t ___head_1;
	// System.Int32 UnityEngine.InputSystem.Samples.VisualizationHelpers/RingBuffer`1::count
	int32_t ___count_2;

public:
	inline static int32_t get_offset_of_array_0() { return static_cast<int32_t>(offsetof(RingBuffer_1_tFEB8D7EE12AD11C4DAC985C2F72C0D4BD23865B2, ___array_0)); }
	inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* get_array_0() const { return ___array_0; }
	inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE** get_address_of_array_0() { return &___array_0; }
	inline void set_array_0(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* value)
	{
		___array_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___array_0), (void*)value);
	}

	inline static int32_t get_offset_of_head_1() { return static_cast<int32_t>(offsetof(RingBuffer_1_tFEB8D7EE12AD11C4DAC985C2F72C0D4BD23865B2, ___head_1)); }
	inline int32_t get_head_1() const { return ___head_1; }
	inline int32_t* get_address_of_head_1() { return &___head_1; }
	inline void set_head_1(int32_t value)
	{
		___head_1 = value;
	}

	inline static int32_t get_offset_of_count_2() { return static_cast<int32_t>(offsetof(RingBuffer_1_tFEB8D7EE12AD11C4DAC985C2F72C0D4BD23865B2, ___count_2)); }
	inline int32_t get_count_2() const { return ___count_2; }
	inline int32_t* get_address_of_count_2() { return &___count_2; }
	inline void set_count_2(int32_t value)
	{
		___count_2 = value;
	}
};


// UnityEngine.InputSystem.Samples.VisualizationHelpers/RingBuffer`1<System.Single>
struct RingBuffer_1_t1C60AF65075B2CC33A4BCA2685383E13C76DB50C 
{
public:
	// TValue[] UnityEngine.InputSystem.Samples.VisualizationHelpers/RingBuffer`1::array
	SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* ___array_0;
	// System.Int32 UnityEngine.InputSystem.Samples.VisualizationHelpers/RingBuffer`1::head
	int32_t ___head_1;
	// System.Int32 UnityEngine.InputSystem.Samples.VisualizationHelpers/RingBuffer`1::count
	int32_t ___count_2;

public:
	inline static int32_t get_offset_of_array_0() { return static_cast<int32_t>(offsetof(RingBuffer_1_t1C60AF65075B2CC33A4BCA2685383E13C76DB50C, ___array_0)); }
	inline SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* get_array_0() const { return ___array_0; }
	inline SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA** get_address_of_array_0() { return &___array_0; }
	inline void set_array_0(SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* value)
	{
		___array_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___array_0), (void*)value);
	}

	inline static int32_t get_offset_of_head_1() { return static_cast<int32_t>(offsetof(RingBuffer_1_t1C60AF65075B2CC33A4BCA2685383E13C76DB50C, ___head_1)); }
	inline int32_t get_head_1() const { return ___head_1; }
	inline int32_t* get_address_of_head_1() { return &___head_1; }
	inline void set_head_1(int32_t value)
	{
		___head_1 = value;
	}

	inline static int32_t get_offset_of_count_2() { return static_cast<int32_t>(offsetof(RingBuffer_1_t1C60AF65075B2CC33A4BCA2685383E13C76DB50C, ___count_2)); }
	inline int32_t get_count_2() const { return ___count_2; }
	inline int32_t* get_address_of_count_2() { return &___count_2; }
	inline void set_count_2(int32_t value)
	{
		___count_2 = value;
	}
};


// UnityEngine.InputSystem.Samples.VisualizationHelpers/RingBuffer`1<UnityEngine.Vector2>
struct RingBuffer_1_t2DABFCD363F6958F876B34BE08D978FE3CC2F270 
{
public:
	// TValue[] UnityEngine.InputSystem.Samples.VisualizationHelpers/RingBuffer`1::array
	Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* ___array_0;
	// System.Int32 UnityEngine.InputSystem.Samples.VisualizationHelpers/RingBuffer`1::head
	int32_t ___head_1;
	// System.Int32 UnityEngine.InputSystem.Samples.VisualizationHelpers/RingBuffer`1::count
	int32_t ___count_2;

public:
	inline static int32_t get_offset_of_array_0() { return static_cast<int32_t>(offsetof(RingBuffer_1_t2DABFCD363F6958F876B34BE08D978FE3CC2F270, ___array_0)); }
	inline Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* get_array_0() const { return ___array_0; }
	inline Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA** get_address_of_array_0() { return &___array_0; }
	inline void set_array_0(Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* value)
	{
		___array_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___array_0), (void*)value);
	}

	inline static int32_t get_offset_of_head_1() { return static_cast<int32_t>(offsetof(RingBuffer_1_t2DABFCD363F6958F876B34BE08D978FE3CC2F270, ___head_1)); }
	inline int32_t get_head_1() const { return ___head_1; }
	inline int32_t* get_address_of_head_1() { return &___head_1; }
	inline void set_head_1(int32_t value)
	{
		___head_1 = value;
	}

	inline static int32_t get_offset_of_count_2() { return static_cast<int32_t>(offsetof(RingBuffer_1_t2DABFCD363F6958F876B34BE08D978FE3CC2F270, ___count_2)); }
	inline int32_t get_count_2() const { return ___count_2; }
	inline int32_t* get_address_of_count_2() { return &___count_2; }
	inline void set_count_2(int32_t value)
	{
		___count_2 = value;
	}
};


// UnityEngine.InputSystem.Samples.VisualizationHelpers/RingBuffer`1<UnityEngine.InputSystem.Samples.VisualizationHelpers/TimelineVisualizer/FrameSample>
struct RingBuffer_1_t6C5FD528A08BBDFABB08C4C1A6086AF9E61B794E 
{
public:
	// TValue[] UnityEngine.InputSystem.Samples.VisualizationHelpers/RingBuffer`1::array
	FrameSampleU5BU5D_tBA74E48DF191E29A396F4A514962F3C376704B33* ___array_0;
	// System.Int32 UnityEngine.InputSystem.Samples.VisualizationHelpers/RingBuffer`1::head
	int32_t ___head_1;
	// System.Int32 UnityEngine.InputSystem.Samples.VisualizationHelpers/RingBuffer`1::count
	int32_t ___count_2;

public:
	inline static int32_t get_offset_of_array_0() { return static_cast<int32_t>(offsetof(RingBuffer_1_t6C5FD528A08BBDFABB08C4C1A6086AF9E61B794E, ___array_0)); }
	inline FrameSampleU5BU5D_tBA74E48DF191E29A396F4A514962F3C376704B33* get_array_0() const { return ___array_0; }
	inline FrameSampleU5BU5D_tBA74E48DF191E29A396F4A514962F3C376704B33** get_address_of_array_0() { return &___array_0; }
	inline void set_array_0(FrameSampleU5BU5D_tBA74E48DF191E29A396F4A514962F3C376704B33* value)
	{
		___array_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___array_0), (void*)value);
	}

	inline static int32_t get_offset_of_head_1() { return static_cast<int32_t>(offsetof(RingBuffer_1_t6C5FD528A08BBDFABB08C4C1A6086AF9E61B794E, ___head_1)); }
	inline int32_t get_head_1() const { return ___head_1; }
	inline int32_t* get_address_of_head_1() { return &___head_1; }
	inline void set_head_1(int32_t value)
	{
		___head_1 = value;
	}

	inline static int32_t get_offset_of_count_2() { return static_cast<int32_t>(offsetof(RingBuffer_1_t6C5FD528A08BBDFABB08C4C1A6086AF9E61B794E, ___count_2)); }
	inline int32_t get_count_2() const { return ___count_2; }
	inline int32_t* get_address_of_count_2() { return &___count_2; }
	inline void set_count_2(int32_t value)
	{
		___count_2 = value;
	}
};


// UnityEngine.InputSystem.Samples.VisualizationHelpers/RingBuffer`1<UnityEngine.InputSystem.Samples.VisualizationHelpers/TimelineVisualizer/TimeSample>
struct RingBuffer_1_tD482466EFEACC434BCF1AE233235CA27903B4370 
{
public:
	// TValue[] UnityEngine.InputSystem.Samples.VisualizationHelpers/RingBuffer`1::array
	TimeSampleU5BU5D_t6C6F367D6314FB5D033F2645A4E5D8CCF68838C9* ___array_0;
	// System.Int32 UnityEngine.InputSystem.Samples.VisualizationHelpers/RingBuffer`1::head
	int32_t ___head_1;
	// System.Int32 UnityEngine.InputSystem.Samples.VisualizationHelpers/RingBuffer`1::count
	int32_t ___count_2;

public:
	inline static int32_t get_offset_of_array_0() { return static_cast<int32_t>(offsetof(RingBuffer_1_tD482466EFEACC434BCF1AE233235CA27903B4370, ___array_0)); }
	inline TimeSampleU5BU5D_t6C6F367D6314FB5D033F2645A4E5D8CCF68838C9* get_array_0() const { return ___array_0; }
	inline TimeSampleU5BU5D_t6C6F367D6314FB5D033F2645A4E5D8CCF68838C9** get_address_of_array_0() { return &___array_0; }
	inline void set_array_0(TimeSampleU5BU5D_t6C6F367D6314FB5D033F2645A4E5D8CCF68838C9* value)
	{
		___array_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___array_0), (void*)value);
	}

	inline static int32_t get_offset_of_head_1() { return static_cast<int32_t>(offsetof(RingBuffer_1_tD482466EFEACC434BCF1AE233235CA27903B4370, ___head_1)); }
	inline int32_t get_head_1() const { return ___head_1; }
	inline int32_t* get_address_of_head_1() { return &___head_1; }
	inline void set_head_1(int32_t value)
	{
		___head_1 = value;
	}

	inline static int32_t get_offset_of_count_2() { return static_cast<int32_t>(offsetof(RingBuffer_1_tD482466EFEACC434BCF1AE233235CA27903B4370, ___count_2)); }
	inline int32_t get_count_2() const { return ___count_2; }
	inline int32_t* get_address_of_count_2() { return &___count_2; }
	inline void set_count_2(int32_t value)
	{
		___count_2 = value;
	}
};


// System.Boolean
struct Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37 
{
public:
	// System.Boolean System.Boolean::m_value
	bool ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37, ___m_value_0)); }
	inline bool get_m_value_0() const { return ___m_value_0; }
	inline bool* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(bool value)
	{
		___m_value_0 = value;
	}
};

struct Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_StaticFields
{
public:
	// System.String System.Boolean::TrueString
	String_t* ___TrueString_5;
	// System.String System.Boolean::FalseString
	String_t* ___FalseString_6;

public:
	inline static int32_t get_offset_of_TrueString_5() { return static_cast<int32_t>(offsetof(Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_StaticFields, ___TrueString_5)); }
	inline String_t* get_TrueString_5() const { return ___TrueString_5; }
	inline String_t** get_address_of_TrueString_5() { return &___TrueString_5; }
	inline void set_TrueString_5(String_t* value)
	{
		___TrueString_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___TrueString_5), (void*)value);
	}

	inline static int32_t get_offset_of_FalseString_6() { return static_cast<int32_t>(offsetof(Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_StaticFields, ___FalseString_6)); }
	inline String_t* get_FalseString_6() const { return ___FalseString_6; }
	inline String_t** get_address_of_FalseString_6() { return &___FalseString_6; }
	inline void set_FalseString_6(String_t* value)
	{
		___FalseString_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___FalseString_6), (void*)value);
	}
};


// System.Char
struct Char_tFF60D8E7E89A20BE2294A003734341BD1DF43E14 
{
public:
	// System.Char System.Char::m_value
	Il2CppChar ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Char_tFF60D8E7E89A20BE2294A003734341BD1DF43E14, ___m_value_0)); }
	inline Il2CppChar get_m_value_0() const { return ___m_value_0; }
	inline Il2CppChar* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(Il2CppChar value)
	{
		___m_value_0 = value;
	}
};

struct Char_tFF60D8E7E89A20BE2294A003734341BD1DF43E14_StaticFields
{
public:
	// System.Byte[] System.Char::categoryForLatin1
	ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___categoryForLatin1_3;

public:
	inline static int32_t get_offset_of_categoryForLatin1_3() { return static_cast<int32_t>(offsetof(Char_tFF60D8E7E89A20BE2294A003734341BD1DF43E14_StaticFields, ___categoryForLatin1_3)); }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* get_categoryForLatin1_3() const { return ___categoryForLatin1_3; }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726** get_address_of_categoryForLatin1_3() { return &___categoryForLatin1_3; }
	inline void set_categoryForLatin1_3(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* value)
	{
		___categoryForLatin1_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___categoryForLatin1_3), (void*)value);
	}
};


// UnityEngine.Color
struct Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 
{
public:
	// System.Single UnityEngine.Color::r
	float ___r_0;
	// System.Single UnityEngine.Color::g
	float ___g_1;
	// System.Single UnityEngine.Color::b
	float ___b_2;
	// System.Single UnityEngine.Color::a
	float ___a_3;

public:
	inline static int32_t get_offset_of_r_0() { return static_cast<int32_t>(offsetof(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659, ___r_0)); }
	inline float get_r_0() const { return ___r_0; }
	inline float* get_address_of_r_0() { return &___r_0; }
	inline void set_r_0(float value)
	{
		___r_0 = value;
	}

	inline static int32_t get_offset_of_g_1() { return static_cast<int32_t>(offsetof(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659, ___g_1)); }
	inline float get_g_1() const { return ___g_1; }
	inline float* get_address_of_g_1() { return &___g_1; }
	inline void set_g_1(float value)
	{
		___g_1 = value;
	}

	inline static int32_t get_offset_of_b_2() { return static_cast<int32_t>(offsetof(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659, ___b_2)); }
	inline float get_b_2() const { return ___b_2; }
	inline float* get_address_of_b_2() { return &___b_2; }
	inline void set_b_2(float value)
	{
		___b_2 = value;
	}

	inline static int32_t get_offset_of_a_3() { return static_cast<int32_t>(offsetof(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659, ___a_3)); }
	inline float get_a_3() const { return ___a_3; }
	inline float* get_address_of_a_3() { return &___a_3; }
	inline void set_a_3(float value)
	{
		___a_3 = value;
	}
};


// System.Double
struct Double_t42821932CB52DE2057E685D0E1AF3DE5033D2181 
{
public:
	// System.Double System.Double::m_value
	double ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Double_t42821932CB52DE2057E685D0E1AF3DE5033D2181, ___m_value_0)); }
	inline double get_m_value_0() const { return ___m_value_0; }
	inline double* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(double value)
	{
		___m_value_0 = value;
	}
};

struct Double_t42821932CB52DE2057E685D0E1AF3DE5033D2181_StaticFields
{
public:
	// System.Double System.Double::NegativeZero
	double ___NegativeZero_7;

public:
	inline static int32_t get_offset_of_NegativeZero_7() { return static_cast<int32_t>(offsetof(Double_t42821932CB52DE2057E685D0E1AF3DE5033D2181_StaticFields, ___NegativeZero_7)); }
	inline double get_NegativeZero_7() const { return ___NegativeZero_7; }
	inline double* get_address_of_NegativeZero_7() { return &___NegativeZero_7; }
	inline void set_NegativeZero_7(double value)
	{
		___NegativeZero_7 = value;
	}
};


// System.Enum
struct Enum_t23B90B40F60E677A8025267341651C94AE079CDA  : public ValueType_tDBF999C1B75C48C68621878250DBF6CDBCF51E52
{
public:

public:
};

struct Enum_t23B90B40F60E677A8025267341651C94AE079CDA_StaticFields
{
public:
	// System.Char[] System.Enum::enumSeperatorCharArray
	CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* ___enumSeperatorCharArray_0;

public:
	inline static int32_t get_offset_of_enumSeperatorCharArray_0() { return static_cast<int32_t>(offsetof(Enum_t23B90B40F60E677A8025267341651C94AE079CDA_StaticFields, ___enumSeperatorCharArray_0)); }
	inline CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* get_enumSeperatorCharArray_0() const { return ___enumSeperatorCharArray_0; }
	inline CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34** get_address_of_enumSeperatorCharArray_0() { return &___enumSeperatorCharArray_0; }
	inline void set_enumSeperatorCharArray_0(CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* value)
	{
		___enumSeperatorCharArray_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___enumSeperatorCharArray_0), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of System.Enum
struct Enum_t23B90B40F60E677A8025267341651C94AE079CDA_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.Enum
struct Enum_t23B90B40F60E677A8025267341651C94AE079CDA_marshaled_com
{
};

// UnityEngine.InputSystem.Utilities.FourCC
struct FourCC_tB18951639903964A6B5533C4BAFD8DA17AA8FD9D 
{
public:
	// System.Int32 UnityEngine.InputSystem.Utilities.FourCC::m_Code
	int32_t ___m_Code_0;

public:
	inline static int32_t get_offset_of_m_Code_0() { return static_cast<int32_t>(offsetof(FourCC_tB18951639903964A6B5533C4BAFD8DA17AA8FD9D, ___m_Code_0)); }
	inline int32_t get_m_Code_0() const { return ___m_Code_0; }
	inline int32_t* get_address_of_m_Code_0() { return &___m_Code_0; }
	inline void set_m_Code_0(int32_t value)
	{
		___m_Code_0 = value;
	}
};


// UnityEngine.InputSystem.Layouts.InputDeviceDescription
struct InputDeviceDescription_tDCF3D4C660B97F28D8AB46D82C0BA8EA727E48C3 
{
public:
	// System.String UnityEngine.InputSystem.Layouts.InputDeviceDescription::m_InterfaceName
	String_t* ___m_InterfaceName_0;
	// System.String UnityEngine.InputSystem.Layouts.InputDeviceDescription::m_DeviceClass
	String_t* ___m_DeviceClass_1;
	// System.String UnityEngine.InputSystem.Layouts.InputDeviceDescription::m_Manufacturer
	String_t* ___m_Manufacturer_2;
	// System.String UnityEngine.InputSystem.Layouts.InputDeviceDescription::m_Product
	String_t* ___m_Product_3;
	// System.String UnityEngine.InputSystem.Layouts.InputDeviceDescription::m_Serial
	String_t* ___m_Serial_4;
	// System.String UnityEngine.InputSystem.Layouts.InputDeviceDescription::m_Version
	String_t* ___m_Version_5;
	// System.String UnityEngine.InputSystem.Layouts.InputDeviceDescription::m_Capabilities
	String_t* ___m_Capabilities_6;

public:
	inline static int32_t get_offset_of_m_InterfaceName_0() { return static_cast<int32_t>(offsetof(InputDeviceDescription_tDCF3D4C660B97F28D8AB46D82C0BA8EA727E48C3, ___m_InterfaceName_0)); }
	inline String_t* get_m_InterfaceName_0() const { return ___m_InterfaceName_0; }
	inline String_t** get_address_of_m_InterfaceName_0() { return &___m_InterfaceName_0; }
	inline void set_m_InterfaceName_0(String_t* value)
	{
		___m_InterfaceName_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_InterfaceName_0), (void*)value);
	}

	inline static int32_t get_offset_of_m_DeviceClass_1() { return static_cast<int32_t>(offsetof(InputDeviceDescription_tDCF3D4C660B97F28D8AB46D82C0BA8EA727E48C3, ___m_DeviceClass_1)); }
	inline String_t* get_m_DeviceClass_1() const { return ___m_DeviceClass_1; }
	inline String_t** get_address_of_m_DeviceClass_1() { return &___m_DeviceClass_1; }
	inline void set_m_DeviceClass_1(String_t* value)
	{
		___m_DeviceClass_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_DeviceClass_1), (void*)value);
	}

	inline static int32_t get_offset_of_m_Manufacturer_2() { return static_cast<int32_t>(offsetof(InputDeviceDescription_tDCF3D4C660B97F28D8AB46D82C0BA8EA727E48C3, ___m_Manufacturer_2)); }
	inline String_t* get_m_Manufacturer_2() const { return ___m_Manufacturer_2; }
	inline String_t** get_address_of_m_Manufacturer_2() { return &___m_Manufacturer_2; }
	inline void set_m_Manufacturer_2(String_t* value)
	{
		___m_Manufacturer_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Manufacturer_2), (void*)value);
	}

	inline static int32_t get_offset_of_m_Product_3() { return static_cast<int32_t>(offsetof(InputDeviceDescription_tDCF3D4C660B97F28D8AB46D82C0BA8EA727E48C3, ___m_Product_3)); }
	inline String_t* get_m_Product_3() const { return ___m_Product_3; }
	inline String_t** get_address_of_m_Product_3() { return &___m_Product_3; }
	inline void set_m_Product_3(String_t* value)
	{
		___m_Product_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Product_3), (void*)value);
	}

	inline static int32_t get_offset_of_m_Serial_4() { return static_cast<int32_t>(offsetof(InputDeviceDescription_tDCF3D4C660B97F28D8AB46D82C0BA8EA727E48C3, ___m_Serial_4)); }
	inline String_t* get_m_Serial_4() const { return ___m_Serial_4; }
	inline String_t** get_address_of_m_Serial_4() { return &___m_Serial_4; }
	inline void set_m_Serial_4(String_t* value)
	{
		___m_Serial_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Serial_4), (void*)value);
	}

	inline static int32_t get_offset_of_m_Version_5() { return static_cast<int32_t>(offsetof(InputDeviceDescription_tDCF3D4C660B97F28D8AB46D82C0BA8EA727E48C3, ___m_Version_5)); }
	inline String_t* get_m_Version_5() const { return ___m_Version_5; }
	inline String_t** get_address_of_m_Version_5() { return &___m_Version_5; }
	inline void set_m_Version_5(String_t* value)
	{
		___m_Version_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Version_5), (void*)value);
	}

	inline static int32_t get_offset_of_m_Capabilities_6() { return static_cast<int32_t>(offsetof(InputDeviceDescription_tDCF3D4C660B97F28D8AB46D82C0BA8EA727E48C3, ___m_Capabilities_6)); }
	inline String_t* get_m_Capabilities_6() const { return ___m_Capabilities_6; }
	inline String_t** get_address_of_m_Capabilities_6() { return &___m_Capabilities_6; }
	inline void set_m_Capabilities_6(String_t* value)
	{
		___m_Capabilities_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Capabilities_6), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.InputSystem.Layouts.InputDeviceDescription
struct InputDeviceDescription_tDCF3D4C660B97F28D8AB46D82C0BA8EA727E48C3_marshaled_pinvoke
{
	char* ___m_InterfaceName_0;
	char* ___m_DeviceClass_1;
	char* ___m_Manufacturer_2;
	char* ___m_Product_3;
	char* ___m_Serial_4;
	char* ___m_Version_5;
	char* ___m_Capabilities_6;
};
// Native definition for COM marshalling of UnityEngine.InputSystem.Layouts.InputDeviceDescription
struct InputDeviceDescription_tDCF3D4C660B97F28D8AB46D82C0BA8EA727E48C3_marshaled_com
{
	Il2CppChar* ___m_InterfaceName_0;
	Il2CppChar* ___m_DeviceClass_1;
	Il2CppChar* ___m_Manufacturer_2;
	Il2CppChar* ___m_Product_3;
	Il2CppChar* ___m_Serial_4;
	Il2CppChar* ___m_Version_5;
	Il2CppChar* ___m_Capabilities_6;
};

// UnityEngine.InputSystem.LowLevel.InputEventPtr
struct InputEventPtr_tC7799829CE3FDCA9E191C7BC946ABE0DB17B377D 
{
public:
	// UnityEngine.InputSystem.LowLevel.InputEvent* UnityEngine.InputSystem.LowLevel.InputEventPtr::m_EventPtr
	InputEvent_t501FCA2333E787A4DA3C7FF85383FBA452091C92 * ___m_EventPtr_0;

public:
	inline static int32_t get_offset_of_m_EventPtr_0() { return static_cast<int32_t>(offsetof(InputEventPtr_tC7799829CE3FDCA9E191C7BC946ABE0DB17B377D, ___m_EventPtr_0)); }
	inline InputEvent_t501FCA2333E787A4DA3C7FF85383FBA452091C92 * get_m_EventPtr_0() const { return ___m_EventPtr_0; }
	inline InputEvent_t501FCA2333E787A4DA3C7FF85383FBA452091C92 ** get_address_of_m_EventPtr_0() { return &___m_EventPtr_0; }
	inline void set_m_EventPtr_0(InputEvent_t501FCA2333E787A4DA3C7FF85383FBA452091C92 * value)
	{
		___m_EventPtr_0 = value;
	}
};


// System.Int32
struct Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046 
{
public:
	// System.Int32 System.Int32::m_value
	int32_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046, ___m_value_0)); }
	inline int32_t get_m_value_0() const { return ___m_value_0; }
	inline int32_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(int32_t value)
	{
		___m_value_0 = value;
	}
};


// System.Int64
struct Int64_t378EE0D608BD3107E77238E85F30D2BBD46981F3 
{
public:
	// System.Int64 System.Int64::m_value
	int64_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Int64_t378EE0D608BD3107E77238E85F30D2BBD46981F3, ___m_value_0)); }
	inline int64_t get_m_value_0() const { return ___m_value_0; }
	inline int64_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(int64_t value)
	{
		___m_value_0 = value;
	}
};


// System.IntPtr
struct IntPtr_t 
{
public:
	// System.Void* System.IntPtr::m_value
	void* ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(IntPtr_t, ___m_value_0)); }
	inline void* get_m_value_0() const { return ___m_value_0; }
	inline void** get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(void* value)
	{
		___m_value_0 = value;
	}
};

struct IntPtr_t_StaticFields
{
public:
	// System.IntPtr System.IntPtr::Zero
	intptr_t ___Zero_1;

public:
	inline static int32_t get_offset_of_Zero_1() { return static_cast<int32_t>(offsetof(IntPtr_t_StaticFields, ___Zero_1)); }
	inline intptr_t get_Zero_1() const { return ___Zero_1; }
	inline intptr_t* get_address_of_Zero_1() { return &___Zero_1; }
	inline void set_Zero_1(intptr_t value)
	{
		___Zero_1 = value;
	}
};


// UnityEngine.InputSystem.Utilities.InternedString
struct InternedString_tD1138602E8B7EA0F5B4851812B13C7E0551E25C8 
{
public:
	// System.String UnityEngine.InputSystem.Utilities.InternedString::m_StringOriginalCase
	String_t* ___m_StringOriginalCase_0;
	// System.String UnityEngine.InputSystem.Utilities.InternedString::m_StringLowerCase
	String_t* ___m_StringLowerCase_1;

public:
	inline static int32_t get_offset_of_m_StringOriginalCase_0() { return static_cast<int32_t>(offsetof(InternedString_tD1138602E8B7EA0F5B4851812B13C7E0551E25C8, ___m_StringOriginalCase_0)); }
	inline String_t* get_m_StringOriginalCase_0() const { return ___m_StringOriginalCase_0; }
	inline String_t** get_address_of_m_StringOriginalCase_0() { return &___m_StringOriginalCase_0; }
	inline void set_m_StringOriginalCase_0(String_t* value)
	{
		___m_StringOriginalCase_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_StringOriginalCase_0), (void*)value);
	}

	inline static int32_t get_offset_of_m_StringLowerCase_1() { return static_cast<int32_t>(offsetof(InternedString_tD1138602E8B7EA0F5B4851812B13C7E0551E25C8, ___m_StringLowerCase_1)); }
	inline String_t* get_m_StringLowerCase_1() const { return ___m_StringLowerCase_1; }
	inline String_t** get_address_of_m_StringLowerCase_1() { return &___m_StringLowerCase_1; }
	inline void set_m_StringLowerCase_1(String_t* value)
	{
		___m_StringLowerCase_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_StringLowerCase_1), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.InputSystem.Utilities.InternedString
struct InternedString_tD1138602E8B7EA0F5B4851812B13C7E0551E25C8_marshaled_pinvoke
{
	char* ___m_StringOriginalCase_0;
	char* ___m_StringLowerCase_1;
};
// Native definition for COM marshalling of UnityEngine.InputSystem.Utilities.InternedString
struct InternedString_tD1138602E8B7EA0F5B4851812B13C7E0551E25C8_marshaled_com
{
	Il2CppChar* ___m_StringOriginalCase_0;
	Il2CppChar* ___m_StringLowerCase_1;
};

// UnityEngine.Matrix4x4
struct Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461 
{
public:
	// System.Single UnityEngine.Matrix4x4::m00
	float ___m00_0;
	// System.Single UnityEngine.Matrix4x4::m10
	float ___m10_1;
	// System.Single UnityEngine.Matrix4x4::m20
	float ___m20_2;
	// System.Single UnityEngine.Matrix4x4::m30
	float ___m30_3;
	// System.Single UnityEngine.Matrix4x4::m01
	float ___m01_4;
	// System.Single UnityEngine.Matrix4x4::m11
	float ___m11_5;
	// System.Single UnityEngine.Matrix4x4::m21
	float ___m21_6;
	// System.Single UnityEngine.Matrix4x4::m31
	float ___m31_7;
	// System.Single UnityEngine.Matrix4x4::m02
	float ___m02_8;
	// System.Single UnityEngine.Matrix4x4::m12
	float ___m12_9;
	// System.Single UnityEngine.Matrix4x4::m22
	float ___m22_10;
	// System.Single UnityEngine.Matrix4x4::m32
	float ___m32_11;
	// System.Single UnityEngine.Matrix4x4::m03
	float ___m03_12;
	// System.Single UnityEngine.Matrix4x4::m13
	float ___m13_13;
	// System.Single UnityEngine.Matrix4x4::m23
	float ___m23_14;
	// System.Single UnityEngine.Matrix4x4::m33
	float ___m33_15;

public:
	inline static int32_t get_offset_of_m00_0() { return static_cast<int32_t>(offsetof(Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461, ___m00_0)); }
	inline float get_m00_0() const { return ___m00_0; }
	inline float* get_address_of_m00_0() { return &___m00_0; }
	inline void set_m00_0(float value)
	{
		___m00_0 = value;
	}

	inline static int32_t get_offset_of_m10_1() { return static_cast<int32_t>(offsetof(Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461, ___m10_1)); }
	inline float get_m10_1() const { return ___m10_1; }
	inline float* get_address_of_m10_1() { return &___m10_1; }
	inline void set_m10_1(float value)
	{
		___m10_1 = value;
	}

	inline static int32_t get_offset_of_m20_2() { return static_cast<int32_t>(offsetof(Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461, ___m20_2)); }
	inline float get_m20_2() const { return ___m20_2; }
	inline float* get_address_of_m20_2() { return &___m20_2; }
	inline void set_m20_2(float value)
	{
		___m20_2 = value;
	}

	inline static int32_t get_offset_of_m30_3() { return static_cast<int32_t>(offsetof(Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461, ___m30_3)); }
	inline float get_m30_3() const { return ___m30_3; }
	inline float* get_address_of_m30_3() { return &___m30_3; }
	inline void set_m30_3(float value)
	{
		___m30_3 = value;
	}

	inline static int32_t get_offset_of_m01_4() { return static_cast<int32_t>(offsetof(Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461, ___m01_4)); }
	inline float get_m01_4() const { return ___m01_4; }
	inline float* get_address_of_m01_4() { return &___m01_4; }
	inline void set_m01_4(float value)
	{
		___m01_4 = value;
	}

	inline static int32_t get_offset_of_m11_5() { return static_cast<int32_t>(offsetof(Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461, ___m11_5)); }
	inline float get_m11_5() const { return ___m11_5; }
	inline float* get_address_of_m11_5() { return &___m11_5; }
	inline void set_m11_5(float value)
	{
		___m11_5 = value;
	}

	inline static int32_t get_offset_of_m21_6() { return static_cast<int32_t>(offsetof(Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461, ___m21_6)); }
	inline float get_m21_6() const { return ___m21_6; }
	inline float* get_address_of_m21_6() { return &___m21_6; }
	inline void set_m21_6(float value)
	{
		___m21_6 = value;
	}

	inline static int32_t get_offset_of_m31_7() { return static_cast<int32_t>(offsetof(Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461, ___m31_7)); }
	inline float get_m31_7() const { return ___m31_7; }
	inline float* get_address_of_m31_7() { return &___m31_7; }
	inline void set_m31_7(float value)
	{
		___m31_7 = value;
	}

	inline static int32_t get_offset_of_m02_8() { return static_cast<int32_t>(offsetof(Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461, ___m02_8)); }
	inline float get_m02_8() const { return ___m02_8; }
	inline float* get_address_of_m02_8() { return &___m02_8; }
	inline void set_m02_8(float value)
	{
		___m02_8 = value;
	}

	inline static int32_t get_offset_of_m12_9() { return static_cast<int32_t>(offsetof(Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461, ___m12_9)); }
	inline float get_m12_9() const { return ___m12_9; }
	inline float* get_address_of_m12_9() { return &___m12_9; }
	inline void set_m12_9(float value)
	{
		___m12_9 = value;
	}

	inline static int32_t get_offset_of_m22_10() { return static_cast<int32_t>(offsetof(Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461, ___m22_10)); }
	inline float get_m22_10() const { return ___m22_10; }
	inline float* get_address_of_m22_10() { return &___m22_10; }
	inline void set_m22_10(float value)
	{
		___m22_10 = value;
	}

	inline static int32_t get_offset_of_m32_11() { return static_cast<int32_t>(offsetof(Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461, ___m32_11)); }
	inline float get_m32_11() const { return ___m32_11; }
	inline float* get_address_of_m32_11() { return &___m32_11; }
	inline void set_m32_11(float value)
	{
		___m32_11 = value;
	}

	inline static int32_t get_offset_of_m03_12() { return static_cast<int32_t>(offsetof(Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461, ___m03_12)); }
	inline float get_m03_12() const { return ___m03_12; }
	inline float* get_address_of_m03_12() { return &___m03_12; }
	inline void set_m03_12(float value)
	{
		___m03_12 = value;
	}

	inline static int32_t get_offset_of_m13_13() { return static_cast<int32_t>(offsetof(Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461, ___m13_13)); }
	inline float get_m13_13() const { return ___m13_13; }
	inline float* get_address_of_m13_13() { return &___m13_13; }
	inline void set_m13_13(float value)
	{
		___m13_13 = value;
	}

	inline static int32_t get_offset_of_m23_14() { return static_cast<int32_t>(offsetof(Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461, ___m23_14)); }
	inline float get_m23_14() const { return ___m23_14; }
	inline float* get_address_of_m23_14() { return &___m23_14; }
	inline void set_m23_14(float value)
	{
		___m23_14 = value;
	}

	inline static int32_t get_offset_of_m33_15() { return static_cast<int32_t>(offsetof(Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461, ___m33_15)); }
	inline float get_m33_15() const { return ___m33_15; }
	inline float* get_address_of_m33_15() { return &___m33_15; }
	inline void set_m33_15(float value)
	{
		___m33_15 = value;
	}
};

struct Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461_StaticFields
{
public:
	// UnityEngine.Matrix4x4 UnityEngine.Matrix4x4::zeroMatrix
	Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  ___zeroMatrix_16;
	// UnityEngine.Matrix4x4 UnityEngine.Matrix4x4::identityMatrix
	Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  ___identityMatrix_17;

public:
	inline static int32_t get_offset_of_zeroMatrix_16() { return static_cast<int32_t>(offsetof(Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461_StaticFields, ___zeroMatrix_16)); }
	inline Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  get_zeroMatrix_16() const { return ___zeroMatrix_16; }
	inline Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461 * get_address_of_zeroMatrix_16() { return &___zeroMatrix_16; }
	inline void set_zeroMatrix_16(Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  value)
	{
		___zeroMatrix_16 = value;
	}

	inline static int32_t get_offset_of_identityMatrix_17() { return static_cast<int32_t>(offsetof(Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461_StaticFields, ___identityMatrix_17)); }
	inline Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  get_identityMatrix_17() const { return ___identityMatrix_17; }
	inline Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461 * get_address_of_identityMatrix_17() { return &___identityMatrix_17; }
	inline void set_identityMatrix_17(Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  value)
	{
		___identityMatrix_17 = value;
	}
};


// UnityEngine.Rect
struct Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878 
{
public:
	// System.Single UnityEngine.Rect::m_XMin
	float ___m_XMin_0;
	// System.Single UnityEngine.Rect::m_YMin
	float ___m_YMin_1;
	// System.Single UnityEngine.Rect::m_Width
	float ___m_Width_2;
	// System.Single UnityEngine.Rect::m_Height
	float ___m_Height_3;

public:
	inline static int32_t get_offset_of_m_XMin_0() { return static_cast<int32_t>(offsetof(Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878, ___m_XMin_0)); }
	inline float get_m_XMin_0() const { return ___m_XMin_0; }
	inline float* get_address_of_m_XMin_0() { return &___m_XMin_0; }
	inline void set_m_XMin_0(float value)
	{
		___m_XMin_0 = value;
	}

	inline static int32_t get_offset_of_m_YMin_1() { return static_cast<int32_t>(offsetof(Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878, ___m_YMin_1)); }
	inline float get_m_YMin_1() const { return ___m_YMin_1; }
	inline float* get_address_of_m_YMin_1() { return &___m_YMin_1; }
	inline void set_m_YMin_1(float value)
	{
		___m_YMin_1 = value;
	}

	inline static int32_t get_offset_of_m_Width_2() { return static_cast<int32_t>(offsetof(Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878, ___m_Width_2)); }
	inline float get_m_Width_2() const { return ___m_Width_2; }
	inline float* get_address_of_m_Width_2() { return &___m_Width_2; }
	inline void set_m_Width_2(float value)
	{
		___m_Width_2 = value;
	}

	inline static int32_t get_offset_of_m_Height_3() { return static_cast<int32_t>(offsetof(Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878, ___m_Height_3)); }
	inline float get_m_Height_3() const { return ___m_Height_3; }
	inline float* get_address_of_m_Height_3() { return &___m_Height_3; }
	inline void set_m_Height_3(float value)
	{
		___m_Height_3 = value;
	}
};


// System.Single
struct Single_tE07797BA3C98D4CA9B5A19413C19A76688AB899E 
{
public:
	// System.Single System.Single::m_value
	float ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Single_tE07797BA3C98D4CA9B5A19413C19A76688AB899E, ___m_value_0)); }
	inline float get_m_value_0() const { return ___m_value_0; }
	inline float* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(float value)
	{
		___m_value_0 = value;
	}
};


// System.UInt32
struct UInt32_tE60352A06233E4E69DD198BCC67142159F686B15 
{
public:
	// System.UInt32 System.UInt32::m_value
	uint32_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(UInt32_tE60352A06233E4E69DD198BCC67142159F686B15, ___m_value_0)); }
	inline uint32_t get_m_value_0() const { return ___m_value_0; }
	inline uint32_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(uint32_t value)
	{
		___m_value_0 = value;
	}
};


// UnityEngine.Vector2
struct Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 
{
public:
	// System.Single UnityEngine.Vector2::x
	float ___x_0;
	// System.Single UnityEngine.Vector2::y
	float ___y_1;

public:
	inline static int32_t get_offset_of_x_0() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9, ___x_0)); }
	inline float get_x_0() const { return ___x_0; }
	inline float* get_address_of_x_0() { return &___x_0; }
	inline void set_x_0(float value)
	{
		___x_0 = value;
	}

	inline static int32_t get_offset_of_y_1() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9, ___y_1)); }
	inline float get_y_1() const { return ___y_1; }
	inline float* get_address_of_y_1() { return &___y_1; }
	inline void set_y_1(float value)
	{
		___y_1 = value;
	}
};

struct Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields
{
public:
	// UnityEngine.Vector2 UnityEngine.Vector2::zeroVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___zeroVector_2;
	// UnityEngine.Vector2 UnityEngine.Vector2::oneVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___oneVector_3;
	// UnityEngine.Vector2 UnityEngine.Vector2::upVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___upVector_4;
	// UnityEngine.Vector2 UnityEngine.Vector2::downVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___downVector_5;
	// UnityEngine.Vector2 UnityEngine.Vector2::leftVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___leftVector_6;
	// UnityEngine.Vector2 UnityEngine.Vector2::rightVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___rightVector_7;
	// UnityEngine.Vector2 UnityEngine.Vector2::positiveInfinityVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___positiveInfinityVector_8;
	// UnityEngine.Vector2 UnityEngine.Vector2::negativeInfinityVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___negativeInfinityVector_9;

public:
	inline static int32_t get_offset_of_zeroVector_2() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___zeroVector_2)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_zeroVector_2() const { return ___zeroVector_2; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_zeroVector_2() { return &___zeroVector_2; }
	inline void set_zeroVector_2(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___zeroVector_2 = value;
	}

	inline static int32_t get_offset_of_oneVector_3() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___oneVector_3)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_oneVector_3() const { return ___oneVector_3; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_oneVector_3() { return &___oneVector_3; }
	inline void set_oneVector_3(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___oneVector_3 = value;
	}

	inline static int32_t get_offset_of_upVector_4() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___upVector_4)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_upVector_4() const { return ___upVector_4; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_upVector_4() { return &___upVector_4; }
	inline void set_upVector_4(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___upVector_4 = value;
	}

	inline static int32_t get_offset_of_downVector_5() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___downVector_5)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_downVector_5() const { return ___downVector_5; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_downVector_5() { return &___downVector_5; }
	inline void set_downVector_5(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___downVector_5 = value;
	}

	inline static int32_t get_offset_of_leftVector_6() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___leftVector_6)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_leftVector_6() const { return ___leftVector_6; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_leftVector_6() { return &___leftVector_6; }
	inline void set_leftVector_6(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___leftVector_6 = value;
	}

	inline static int32_t get_offset_of_rightVector_7() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___rightVector_7)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_rightVector_7() const { return ___rightVector_7; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_rightVector_7() { return &___rightVector_7; }
	inline void set_rightVector_7(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___rightVector_7 = value;
	}

	inline static int32_t get_offset_of_positiveInfinityVector_8() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___positiveInfinityVector_8)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_positiveInfinityVector_8() const { return ___positiveInfinityVector_8; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_positiveInfinityVector_8() { return &___positiveInfinityVector_8; }
	inline void set_positiveInfinityVector_8(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___positiveInfinityVector_8 = value;
	}

	inline static int32_t get_offset_of_negativeInfinityVector_9() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___negativeInfinityVector_9)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_negativeInfinityVector_9() const { return ___negativeInfinityVector_9; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_negativeInfinityVector_9() { return &___negativeInfinityVector_9; }
	inline void set_negativeInfinityVector_9(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___negativeInfinityVector_9 = value;
	}
};


// UnityEngine.Vector3
struct Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E 
{
public:
	// System.Single UnityEngine.Vector3::x
	float ___x_2;
	// System.Single UnityEngine.Vector3::y
	float ___y_3;
	// System.Single UnityEngine.Vector3::z
	float ___z_4;

public:
	inline static int32_t get_offset_of_x_2() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E, ___x_2)); }
	inline float get_x_2() const { return ___x_2; }
	inline float* get_address_of_x_2() { return &___x_2; }
	inline void set_x_2(float value)
	{
		___x_2 = value;
	}

	inline static int32_t get_offset_of_y_3() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E, ___y_3)); }
	inline float get_y_3() const { return ___y_3; }
	inline float* get_address_of_y_3() { return &___y_3; }
	inline void set_y_3(float value)
	{
		___y_3 = value;
	}

	inline static int32_t get_offset_of_z_4() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E, ___z_4)); }
	inline float get_z_4() const { return ___z_4; }
	inline float* get_address_of_z_4() { return &___z_4; }
	inline void set_z_4(float value)
	{
		___z_4 = value;
	}
};

struct Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields
{
public:
	// UnityEngine.Vector3 UnityEngine.Vector3::zeroVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___zeroVector_5;
	// UnityEngine.Vector3 UnityEngine.Vector3::oneVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___oneVector_6;
	// UnityEngine.Vector3 UnityEngine.Vector3::upVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___upVector_7;
	// UnityEngine.Vector3 UnityEngine.Vector3::downVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___downVector_8;
	// UnityEngine.Vector3 UnityEngine.Vector3::leftVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___leftVector_9;
	// UnityEngine.Vector3 UnityEngine.Vector3::rightVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___rightVector_10;
	// UnityEngine.Vector3 UnityEngine.Vector3::forwardVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___forwardVector_11;
	// UnityEngine.Vector3 UnityEngine.Vector3::backVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___backVector_12;
	// UnityEngine.Vector3 UnityEngine.Vector3::positiveInfinityVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___positiveInfinityVector_13;
	// UnityEngine.Vector3 UnityEngine.Vector3::negativeInfinityVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___negativeInfinityVector_14;

public:
	inline static int32_t get_offset_of_zeroVector_5() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___zeroVector_5)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_zeroVector_5() const { return ___zeroVector_5; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_zeroVector_5() { return &___zeroVector_5; }
	inline void set_zeroVector_5(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___zeroVector_5 = value;
	}

	inline static int32_t get_offset_of_oneVector_6() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___oneVector_6)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_oneVector_6() const { return ___oneVector_6; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_oneVector_6() { return &___oneVector_6; }
	inline void set_oneVector_6(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___oneVector_6 = value;
	}

	inline static int32_t get_offset_of_upVector_7() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___upVector_7)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_upVector_7() const { return ___upVector_7; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_upVector_7() { return &___upVector_7; }
	inline void set_upVector_7(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___upVector_7 = value;
	}

	inline static int32_t get_offset_of_downVector_8() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___downVector_8)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_downVector_8() const { return ___downVector_8; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_downVector_8() { return &___downVector_8; }
	inline void set_downVector_8(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___downVector_8 = value;
	}

	inline static int32_t get_offset_of_leftVector_9() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___leftVector_9)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_leftVector_9() const { return ___leftVector_9; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_leftVector_9() { return &___leftVector_9; }
	inline void set_leftVector_9(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___leftVector_9 = value;
	}

	inline static int32_t get_offset_of_rightVector_10() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___rightVector_10)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_rightVector_10() const { return ___rightVector_10; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_rightVector_10() { return &___rightVector_10; }
	inline void set_rightVector_10(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___rightVector_10 = value;
	}

	inline static int32_t get_offset_of_forwardVector_11() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___forwardVector_11)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_forwardVector_11() const { return ___forwardVector_11; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_forwardVector_11() { return &___forwardVector_11; }
	inline void set_forwardVector_11(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___forwardVector_11 = value;
	}

	inline static int32_t get_offset_of_backVector_12() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___backVector_12)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_backVector_12() const { return ___backVector_12; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_backVector_12() { return &___backVector_12; }
	inline void set_backVector_12(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___backVector_12 = value;
	}

	inline static int32_t get_offset_of_positiveInfinityVector_13() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___positiveInfinityVector_13)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_positiveInfinityVector_13() const { return ___positiveInfinityVector_13; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_positiveInfinityVector_13() { return &___positiveInfinityVector_13; }
	inline void set_positiveInfinityVector_13(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___positiveInfinityVector_13 = value;
	}

	inline static int32_t get_offset_of_negativeInfinityVector_14() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___negativeInfinityVector_14)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_negativeInfinityVector_14() const { return ___negativeInfinityVector_14; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_negativeInfinityVector_14() { return &___negativeInfinityVector_14; }
	inline void set_negativeInfinityVector_14(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___negativeInfinityVector_14 = value;
	}
};


// System.Void
struct Void_t700C6383A2A510C2CF4DD86DABD5CA9FF70ADAC5 
{
public:
	union
	{
		struct
		{
		};
		uint8_t Void_t700C6383A2A510C2CF4DD86DABD5CA9FF70ADAC5__padding[1];
	};

public:
};


// UnityEngine.InputSystem.InputAction/CallbackContext
struct CallbackContext_tFAD329A5B98475EEDBD898FFDA3378C44BC12E0B 
{
public:
	// UnityEngine.InputSystem.InputActionState UnityEngine.InputSystem.InputAction/CallbackContext::m_State
	InputActionState_tE8F8D2439CDB9528D77707FB251FBE280C34664C * ___m_State_0;
	// System.Int32 UnityEngine.InputSystem.InputAction/CallbackContext::m_ActionIndex
	int32_t ___m_ActionIndex_1;

public:
	inline static int32_t get_offset_of_m_State_0() { return static_cast<int32_t>(offsetof(CallbackContext_tFAD329A5B98475EEDBD898FFDA3378C44BC12E0B, ___m_State_0)); }
	inline InputActionState_tE8F8D2439CDB9528D77707FB251FBE280C34664C * get_m_State_0() const { return ___m_State_0; }
	inline InputActionState_tE8F8D2439CDB9528D77707FB251FBE280C34664C ** get_address_of_m_State_0() { return &___m_State_0; }
	inline void set_m_State_0(InputActionState_tE8F8D2439CDB9528D77707FB251FBE280C34664C * value)
	{
		___m_State_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_State_0), (void*)value);
	}

	inline static int32_t get_offset_of_m_ActionIndex_1() { return static_cast<int32_t>(offsetof(CallbackContext_tFAD329A5B98475EEDBD898FFDA3378C44BC12E0B, ___m_ActionIndex_1)); }
	inline int32_t get_m_ActionIndex_1() const { return ___m_ActionIndex_1; }
	inline int32_t* get_address_of_m_ActionIndex_1() { return &___m_ActionIndex_1; }
	inline void set_m_ActionIndex_1(int32_t value)
	{
		___m_ActionIndex_1 = value;
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.InputSystem.InputAction/CallbackContext
struct CallbackContext_tFAD329A5B98475EEDBD898FFDA3378C44BC12E0B_marshaled_pinvoke
{
	InputActionState_tE8F8D2439CDB9528D77707FB251FBE280C34664C * ___m_State_0;
	int32_t ___m_ActionIndex_1;
};
// Native definition for COM marshalling of UnityEngine.InputSystem.InputAction/CallbackContext
struct CallbackContext_tFAD329A5B98475EEDBD898FFDA3378C44BC12E0B_marshaled_com
{
	InputActionState_tE8F8D2439CDB9528D77707FB251FBE280C34664C * ___m_State_0;
	int32_t ___m_ActionIndex_1;
};

// UnityEngine.InputSystem.Layouts.InputControlLayout/Cache
struct Cache_t9F49740128E8F04886120C99F392DC7CEBC6AA67 
{
public:
	// System.Collections.Generic.Dictionary`2<UnityEngine.InputSystem.Utilities.InternedString,UnityEngine.InputSystem.Layouts.InputControlLayout> UnityEngine.InputSystem.Layouts.InputControlLayout/Cache::table
	Dictionary_2_tDCF55C892C8E630B68A32A8B68C04B47E837C8A7 * ___table_0;

public:
	inline static int32_t get_offset_of_table_0() { return static_cast<int32_t>(offsetof(Cache_t9F49740128E8F04886120C99F392DC7CEBC6AA67, ___table_0)); }
	inline Dictionary_2_tDCF55C892C8E630B68A32A8B68C04B47E837C8A7 * get_table_0() const { return ___table_0; }
	inline Dictionary_2_tDCF55C892C8E630B68A32A8B68C04B47E837C8A7 ** get_address_of_table_0() { return &___table_0; }
	inline void set_table_0(Dictionary_2_tDCF55C892C8E630B68A32A8B68C04B47E837C8A7 * value)
	{
		___table_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___table_0), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.InputSystem.Layouts.InputControlLayout/Cache
struct Cache_t9F49740128E8F04886120C99F392DC7CEBC6AA67_marshaled_pinvoke
{
	Dictionary_2_tDCF55C892C8E630B68A32A8B68C04B47E837C8A7 * ___table_0;
};
// Native definition for COM marshalling of UnityEngine.InputSystem.Layouts.InputControlLayout/Cache
struct Cache_t9F49740128E8F04886120C99F392DC7CEBC6AA67_marshaled_com
{
	Dictionary_2_tDCF55C892C8E630B68A32A8B68C04B47E837C8A7 * ___table_0;
};

// UnityEngine.InputSystem.Layouts.InputControlLayout/Collection
struct Collection_tDBA0BC36ACE448001ABFFED32EF785467D714D7B 
{
public:
	// System.Collections.Generic.Dictionary`2<UnityEngine.InputSystem.Utilities.InternedString,System.Type> UnityEngine.InputSystem.Layouts.InputControlLayout/Collection::layoutTypes
	Dictionary_2_t9AFCC08689B78B2E9999C1E77045DE7FE2E38939 * ___layoutTypes_1;
	// System.Collections.Generic.Dictionary`2<UnityEngine.InputSystem.Utilities.InternedString,System.String> UnityEngine.InputSystem.Layouts.InputControlLayout/Collection::layoutStrings
	Dictionary_2_tDA5E5646D36E737D207FA28F7AB4CE457B42B367 * ___layoutStrings_2;
	// System.Collections.Generic.Dictionary`2<UnityEngine.InputSystem.Utilities.InternedString,System.Func`1<UnityEngine.InputSystem.Layouts.InputControlLayout>> UnityEngine.InputSystem.Layouts.InputControlLayout/Collection::layoutBuilders
	Dictionary_2_t73E7A2CC7CD17B4CBC4DBC5B50FC3A085745875D * ___layoutBuilders_3;
	// System.Collections.Generic.Dictionary`2<UnityEngine.InputSystem.Utilities.InternedString,UnityEngine.InputSystem.Utilities.InternedString> UnityEngine.InputSystem.Layouts.InputControlLayout/Collection::baseLayoutTable
	Dictionary_2_tBE5A6550789B79F0A18DA883DF48023D1D980096 * ___baseLayoutTable_4;
	// System.Collections.Generic.Dictionary`2<UnityEngine.InputSystem.Utilities.InternedString,UnityEngine.InputSystem.Utilities.InternedString[]> UnityEngine.InputSystem.Layouts.InputControlLayout/Collection::layoutOverrides
	Dictionary_2_t6B8207956EB1FAAEB6DBD37E3FD84A30466F2BA8 * ___layoutOverrides_5;
	// System.Collections.Generic.HashSet`1<UnityEngine.InputSystem.Utilities.InternedString> UnityEngine.InputSystem.Layouts.InputControlLayout/Collection::layoutOverrideNames
	HashSet_1_t68A0DBD19F3F3043FF8AC0D854B63BAA7BEB4064 * ___layoutOverrideNames_6;
	// System.Collections.Generic.List`1<UnityEngine.InputSystem.Layouts.InputControlLayout/Collection/LayoutMatcher> UnityEngine.InputSystem.Layouts.InputControlLayout/Collection::layoutMatchers
	List_1_tE0D0016948365B54865C0A62B95211A71F2FB9A6 * ___layoutMatchers_7;

public:
	inline static int32_t get_offset_of_layoutTypes_1() { return static_cast<int32_t>(offsetof(Collection_tDBA0BC36ACE448001ABFFED32EF785467D714D7B, ___layoutTypes_1)); }
	inline Dictionary_2_t9AFCC08689B78B2E9999C1E77045DE7FE2E38939 * get_layoutTypes_1() const { return ___layoutTypes_1; }
	inline Dictionary_2_t9AFCC08689B78B2E9999C1E77045DE7FE2E38939 ** get_address_of_layoutTypes_1() { return &___layoutTypes_1; }
	inline void set_layoutTypes_1(Dictionary_2_t9AFCC08689B78B2E9999C1E77045DE7FE2E38939 * value)
	{
		___layoutTypes_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___layoutTypes_1), (void*)value);
	}

	inline static int32_t get_offset_of_layoutStrings_2() { return static_cast<int32_t>(offsetof(Collection_tDBA0BC36ACE448001ABFFED32EF785467D714D7B, ___layoutStrings_2)); }
	inline Dictionary_2_tDA5E5646D36E737D207FA28F7AB4CE457B42B367 * get_layoutStrings_2() const { return ___layoutStrings_2; }
	inline Dictionary_2_tDA5E5646D36E737D207FA28F7AB4CE457B42B367 ** get_address_of_layoutStrings_2() { return &___layoutStrings_2; }
	inline void set_layoutStrings_2(Dictionary_2_tDA5E5646D36E737D207FA28F7AB4CE457B42B367 * value)
	{
		___layoutStrings_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___layoutStrings_2), (void*)value);
	}

	inline static int32_t get_offset_of_layoutBuilders_3() { return static_cast<int32_t>(offsetof(Collection_tDBA0BC36ACE448001ABFFED32EF785467D714D7B, ___layoutBuilders_3)); }
	inline Dictionary_2_t73E7A2CC7CD17B4CBC4DBC5B50FC3A085745875D * get_layoutBuilders_3() const { return ___layoutBuilders_3; }
	inline Dictionary_2_t73E7A2CC7CD17B4CBC4DBC5B50FC3A085745875D ** get_address_of_layoutBuilders_3() { return &___layoutBuilders_3; }
	inline void set_layoutBuilders_3(Dictionary_2_t73E7A2CC7CD17B4CBC4DBC5B50FC3A085745875D * value)
	{
		___layoutBuilders_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___layoutBuilders_3), (void*)value);
	}

	inline static int32_t get_offset_of_baseLayoutTable_4() { return static_cast<int32_t>(offsetof(Collection_tDBA0BC36ACE448001ABFFED32EF785467D714D7B, ___baseLayoutTable_4)); }
	inline Dictionary_2_tBE5A6550789B79F0A18DA883DF48023D1D980096 * get_baseLayoutTable_4() const { return ___baseLayoutTable_4; }
	inline Dictionary_2_tBE5A6550789B79F0A18DA883DF48023D1D980096 ** get_address_of_baseLayoutTable_4() { return &___baseLayoutTable_4; }
	inline void set_baseLayoutTable_4(Dictionary_2_tBE5A6550789B79F0A18DA883DF48023D1D980096 * value)
	{
		___baseLayoutTable_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___baseLayoutTable_4), (void*)value);
	}

	inline static int32_t get_offset_of_layoutOverrides_5() { return static_cast<int32_t>(offsetof(Collection_tDBA0BC36ACE448001ABFFED32EF785467D714D7B, ___layoutOverrides_5)); }
	inline Dictionary_2_t6B8207956EB1FAAEB6DBD37E3FD84A30466F2BA8 * get_layoutOverrides_5() const { return ___layoutOverrides_5; }
	inline Dictionary_2_t6B8207956EB1FAAEB6DBD37E3FD84A30466F2BA8 ** get_address_of_layoutOverrides_5() { return &___layoutOverrides_5; }
	inline void set_layoutOverrides_5(Dictionary_2_t6B8207956EB1FAAEB6DBD37E3FD84A30466F2BA8 * value)
	{
		___layoutOverrides_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___layoutOverrides_5), (void*)value);
	}

	inline static int32_t get_offset_of_layoutOverrideNames_6() { return static_cast<int32_t>(offsetof(Collection_tDBA0BC36ACE448001ABFFED32EF785467D714D7B, ___layoutOverrideNames_6)); }
	inline HashSet_1_t68A0DBD19F3F3043FF8AC0D854B63BAA7BEB4064 * get_layoutOverrideNames_6() const { return ___layoutOverrideNames_6; }
	inline HashSet_1_t68A0DBD19F3F3043FF8AC0D854B63BAA7BEB4064 ** get_address_of_layoutOverrideNames_6() { return &___layoutOverrideNames_6; }
	inline void set_layoutOverrideNames_6(HashSet_1_t68A0DBD19F3F3043FF8AC0D854B63BAA7BEB4064 * value)
	{
		___layoutOverrideNames_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___layoutOverrideNames_6), (void*)value);
	}

	inline static int32_t get_offset_of_layoutMatchers_7() { return static_cast<int32_t>(offsetof(Collection_tDBA0BC36ACE448001ABFFED32EF785467D714D7B, ___layoutMatchers_7)); }
	inline List_1_tE0D0016948365B54865C0A62B95211A71F2FB9A6 * get_layoutMatchers_7() const { return ___layoutMatchers_7; }
	inline List_1_tE0D0016948365B54865C0A62B95211A71F2FB9A6 ** get_address_of_layoutMatchers_7() { return &___layoutMatchers_7; }
	inline void set_layoutMatchers_7(List_1_tE0D0016948365B54865C0A62B95211A71F2FB9A6 * value)
	{
		___layoutMatchers_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___layoutMatchers_7), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.InputSystem.Layouts.InputControlLayout/Collection
struct Collection_tDBA0BC36ACE448001ABFFED32EF785467D714D7B_marshaled_pinvoke
{
	Dictionary_2_t9AFCC08689B78B2E9999C1E77045DE7FE2E38939 * ___layoutTypes_1;
	Dictionary_2_tDA5E5646D36E737D207FA28F7AB4CE457B42B367 * ___layoutStrings_2;
	Dictionary_2_t73E7A2CC7CD17B4CBC4DBC5B50FC3A085745875D * ___layoutBuilders_3;
	Dictionary_2_tBE5A6550789B79F0A18DA883DF48023D1D980096 * ___baseLayoutTable_4;
	Dictionary_2_t6B8207956EB1FAAEB6DBD37E3FD84A30466F2BA8 * ___layoutOverrides_5;
	HashSet_1_t68A0DBD19F3F3043FF8AC0D854B63BAA7BEB4064 * ___layoutOverrideNames_6;
	List_1_tE0D0016948365B54865C0A62B95211A71F2FB9A6 * ___layoutMatchers_7;
};
// Native definition for COM marshalling of UnityEngine.InputSystem.Layouts.InputControlLayout/Collection
struct Collection_tDBA0BC36ACE448001ABFFED32EF785467D714D7B_marshaled_com
{
	Dictionary_2_t9AFCC08689B78B2E9999C1E77045DE7FE2E38939 * ___layoutTypes_1;
	Dictionary_2_tDA5E5646D36E737D207FA28F7AB4CE457B42B367 * ___layoutStrings_2;
	Dictionary_2_t73E7A2CC7CD17B4CBC4DBC5B50FC3A085745875D * ___layoutBuilders_3;
	Dictionary_2_tBE5A6550789B79F0A18DA883DF48023D1D980096 * ___baseLayoutTable_4;
	Dictionary_2_t6B8207956EB1FAAEB6DBD37E3FD84A30466F2BA8 * ___layoutOverrides_5;
	HashSet_1_t68A0DBD19F3F3043FF8AC0D854B63BAA7BEB4064 * ___layoutOverrideNames_6;
	List_1_tE0D0016948365B54865C0A62B95211A71F2FB9A6 * ___layoutMatchers_7;
};

// UnityEngine.InputSystem.Utilities.InlinedArray`1<UnityEngine.InputSystem.Utilities.InternedString>
struct InlinedArray_1_t7B73159E4B6A8AD12C99ED22A9138E32D7408FA0 
{
public:
	// System.Int32 UnityEngine.InputSystem.Utilities.InlinedArray`1::length
	int32_t ___length_0;
	// TValue UnityEngine.InputSystem.Utilities.InlinedArray`1::firstValue
	InternedString_tD1138602E8B7EA0F5B4851812B13C7E0551E25C8  ___firstValue_1;
	// TValue[] UnityEngine.InputSystem.Utilities.InlinedArray`1::additionalValues
	InternedStringU5BU5D_t1B3BD9ED90129E67B58E1681B1944E72F8E0E648* ___additionalValues_2;

public:
	inline static int32_t get_offset_of_length_0() { return static_cast<int32_t>(offsetof(InlinedArray_1_t7B73159E4B6A8AD12C99ED22A9138E32D7408FA0, ___length_0)); }
	inline int32_t get_length_0() const { return ___length_0; }
	inline int32_t* get_address_of_length_0() { return &___length_0; }
	inline void set_length_0(int32_t value)
	{
		___length_0 = value;
	}

	inline static int32_t get_offset_of_firstValue_1() { return static_cast<int32_t>(offsetof(InlinedArray_1_t7B73159E4B6A8AD12C99ED22A9138E32D7408FA0, ___firstValue_1)); }
	inline InternedString_tD1138602E8B7EA0F5B4851812B13C7E0551E25C8  get_firstValue_1() const { return ___firstValue_1; }
	inline InternedString_tD1138602E8B7EA0F5B4851812B13C7E0551E25C8 * get_address_of_firstValue_1() { return &___firstValue_1; }
	inline void set_firstValue_1(InternedString_tD1138602E8B7EA0F5B4851812B13C7E0551E25C8  value)
	{
		___firstValue_1 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___firstValue_1))->___m_StringOriginalCase_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___firstValue_1))->___m_StringLowerCase_1), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_additionalValues_2() { return static_cast<int32_t>(offsetof(InlinedArray_1_t7B73159E4B6A8AD12C99ED22A9138E32D7408FA0, ___additionalValues_2)); }
	inline InternedStringU5BU5D_t1B3BD9ED90129E67B58E1681B1944E72F8E0E648* get_additionalValues_2() const { return ___additionalValues_2; }
	inline InternedStringU5BU5D_t1B3BD9ED90129E67B58E1681B1944E72F8E0E648** get_address_of_additionalValues_2() { return &___additionalValues_2; }
	inline void set_additionalValues_2(InternedStringU5BU5D_t1B3BD9ED90129E67B58E1681B1944E72F8E0E648* value)
	{
		___additionalValues_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___additionalValues_2), (void*)value);
	}
};


// UnityEngine.InputSystem.Samples.VisualizationHelpers/ValueVisualizer`1<System.Int32>
struct ValueVisualizer_1_t9FC76EB6B8852DF3A7F9CF8190EFDFFEFA78A1F2  : public Visualizer_t48757514E9C44C7B20B531BB6D2713A570AA8B74
{
public:
	// UnityEngine.InputSystem.Samples.VisualizationHelpers/RingBuffer`1<TValue> UnityEngine.InputSystem.Samples.VisualizationHelpers/ValueVisualizer`1::samples
	RingBuffer_1_t63E18EFF351C05B185859CD92E4E4C3112ADBEAA  ___samples_0;
	// UnityEngine.InputSystem.Samples.VisualizationHelpers/RingBuffer`1<UnityEngine.GUIContent> UnityEngine.InputSystem.Samples.VisualizationHelpers/ValueVisualizer`1::samplesText
	RingBuffer_1_t92C8E8147EA971F447C8085E01FEDD0A208062D6  ___samplesText_1;

public:
	inline static int32_t get_offset_of_samples_0() { return static_cast<int32_t>(offsetof(ValueVisualizer_1_t9FC76EB6B8852DF3A7F9CF8190EFDFFEFA78A1F2, ___samples_0)); }
	inline RingBuffer_1_t63E18EFF351C05B185859CD92E4E4C3112ADBEAA  get_samples_0() const { return ___samples_0; }
	inline RingBuffer_1_t63E18EFF351C05B185859CD92E4E4C3112ADBEAA * get_address_of_samples_0() { return &___samples_0; }
	inline void set_samples_0(RingBuffer_1_t63E18EFF351C05B185859CD92E4E4C3112ADBEAA  value)
	{
		___samples_0 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___samples_0))->___array_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_samplesText_1() { return static_cast<int32_t>(offsetof(ValueVisualizer_1_t9FC76EB6B8852DF3A7F9CF8190EFDFFEFA78A1F2, ___samplesText_1)); }
	inline RingBuffer_1_t92C8E8147EA971F447C8085E01FEDD0A208062D6  get_samplesText_1() const { return ___samplesText_1; }
	inline RingBuffer_1_t92C8E8147EA971F447C8085E01FEDD0A208062D6 * get_address_of_samplesText_1() { return &___samplesText_1; }
	inline void set_samplesText_1(RingBuffer_1_t92C8E8147EA971F447C8085E01FEDD0A208062D6  value)
	{
		___samplesText_1 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___samplesText_1))->___array_0), (void*)NULL);
	}
};


// UnityEngine.InputSystem.Samples.VisualizationHelpers/ValueVisualizer`1<System.Single>
struct ValueVisualizer_1_t2E1FED8314A7BA8343042EEBAFCFED8867B7EAFB  : public Visualizer_t48757514E9C44C7B20B531BB6D2713A570AA8B74
{
public:
	// UnityEngine.InputSystem.Samples.VisualizationHelpers/RingBuffer`1<TValue> UnityEngine.InputSystem.Samples.VisualizationHelpers/ValueVisualizer`1::samples
	RingBuffer_1_t1C60AF65075B2CC33A4BCA2685383E13C76DB50C  ___samples_0;
	// UnityEngine.InputSystem.Samples.VisualizationHelpers/RingBuffer`1<UnityEngine.GUIContent> UnityEngine.InputSystem.Samples.VisualizationHelpers/ValueVisualizer`1::samplesText
	RingBuffer_1_t92C8E8147EA971F447C8085E01FEDD0A208062D6  ___samplesText_1;

public:
	inline static int32_t get_offset_of_samples_0() { return static_cast<int32_t>(offsetof(ValueVisualizer_1_t2E1FED8314A7BA8343042EEBAFCFED8867B7EAFB, ___samples_0)); }
	inline RingBuffer_1_t1C60AF65075B2CC33A4BCA2685383E13C76DB50C  get_samples_0() const { return ___samples_0; }
	inline RingBuffer_1_t1C60AF65075B2CC33A4BCA2685383E13C76DB50C * get_address_of_samples_0() { return &___samples_0; }
	inline void set_samples_0(RingBuffer_1_t1C60AF65075B2CC33A4BCA2685383E13C76DB50C  value)
	{
		___samples_0 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___samples_0))->___array_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_samplesText_1() { return static_cast<int32_t>(offsetof(ValueVisualizer_1_t2E1FED8314A7BA8343042EEBAFCFED8867B7EAFB, ___samplesText_1)); }
	inline RingBuffer_1_t92C8E8147EA971F447C8085E01FEDD0A208062D6  get_samplesText_1() const { return ___samplesText_1; }
	inline RingBuffer_1_t92C8E8147EA971F447C8085E01FEDD0A208062D6 * get_address_of_samplesText_1() { return &___samplesText_1; }
	inline void set_samplesText_1(RingBuffer_1_t92C8E8147EA971F447C8085E01FEDD0A208062D6  value)
	{
		___samplesText_1 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___samplesText_1))->___array_0), (void*)NULL);
	}
};


// UnityEngine.InputSystem.Samples.VisualizationHelpers/ValueVisualizer`1<UnityEngine.Vector2>
struct ValueVisualizer_1_t80E00BEE21AB8F001F08BF2B39E8894884283EDE  : public Visualizer_t48757514E9C44C7B20B531BB6D2713A570AA8B74
{
public:
	// UnityEngine.InputSystem.Samples.VisualizationHelpers/RingBuffer`1<TValue> UnityEngine.InputSystem.Samples.VisualizationHelpers/ValueVisualizer`1::samples
	RingBuffer_1_t2DABFCD363F6958F876B34BE08D978FE3CC2F270  ___samples_0;
	// UnityEngine.InputSystem.Samples.VisualizationHelpers/RingBuffer`1<UnityEngine.GUIContent> UnityEngine.InputSystem.Samples.VisualizationHelpers/ValueVisualizer`1::samplesText
	RingBuffer_1_t92C8E8147EA971F447C8085E01FEDD0A208062D6  ___samplesText_1;

public:
	inline static int32_t get_offset_of_samples_0() { return static_cast<int32_t>(offsetof(ValueVisualizer_1_t80E00BEE21AB8F001F08BF2B39E8894884283EDE, ___samples_0)); }
	inline RingBuffer_1_t2DABFCD363F6958F876B34BE08D978FE3CC2F270  get_samples_0() const { return ___samples_0; }
	inline RingBuffer_1_t2DABFCD363F6958F876B34BE08D978FE3CC2F270 * get_address_of_samples_0() { return &___samples_0; }
	inline void set_samples_0(RingBuffer_1_t2DABFCD363F6958F876B34BE08D978FE3CC2F270  value)
	{
		___samples_0 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___samples_0))->___array_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_samplesText_1() { return static_cast<int32_t>(offsetof(ValueVisualizer_1_t80E00BEE21AB8F001F08BF2B39E8894884283EDE, ___samplesText_1)); }
	inline RingBuffer_1_t92C8E8147EA971F447C8085E01FEDD0A208062D6  get_samplesText_1() const { return ___samplesText_1; }
	inline RingBuffer_1_t92C8E8147EA971F447C8085E01FEDD0A208062D6 * get_address_of_samplesText_1() { return &___samplesText_1; }
	inline void set_samplesText_1(RingBuffer_1_t92C8E8147EA971F447C8085E01FEDD0A208062D6  value)
	{
		___samplesText_1 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___samplesText_1))->___array_0), (void*)NULL);
	}
};


// Unity.Collections.Allocator
struct Allocator_t9888223DEF4F46F3419ECFCCD0753599BEE52A05 
{
public:
	// System.Int32 Unity.Collections.Allocator::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(Allocator_t9888223DEF4F46F3419ECFCCD0753599BEE52A05, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// System.Reflection.BindingFlags
struct BindingFlags_tAAAB07D9AC588F0D55D844E51D7035E96DF94733 
{
public:
	// System.Int32 System.Reflection.BindingFlags::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(BindingFlags_tAAAB07D9AC588F0D55D844E51D7035E96DF94733, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// System.Delegate
struct Delegate_t  : public RuntimeObject
{
public:
	// System.IntPtr System.Delegate::method_ptr
	Il2CppMethodPointer ___method_ptr_0;
	// System.IntPtr System.Delegate::invoke_impl
	intptr_t ___invoke_impl_1;
	// System.Object System.Delegate::m_target
	RuntimeObject * ___m_target_2;
	// System.IntPtr System.Delegate::method
	intptr_t ___method_3;
	// System.IntPtr System.Delegate::delegate_trampoline
	intptr_t ___delegate_trampoline_4;
	// System.IntPtr System.Delegate::extra_arg
	intptr_t ___extra_arg_5;
	// System.IntPtr System.Delegate::method_code
	intptr_t ___method_code_6;
	// System.Reflection.MethodInfo System.Delegate::method_info
	MethodInfo_t * ___method_info_7;
	// System.Reflection.MethodInfo System.Delegate::original_method_info
	MethodInfo_t * ___original_method_info_8;
	// System.DelegateData System.Delegate::data
	DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288 * ___data_9;
	// System.Boolean System.Delegate::method_is_virtual
	bool ___method_is_virtual_10;

public:
	inline static int32_t get_offset_of_method_ptr_0() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_ptr_0)); }
	inline Il2CppMethodPointer get_method_ptr_0() const { return ___method_ptr_0; }
	inline Il2CppMethodPointer* get_address_of_method_ptr_0() { return &___method_ptr_0; }
	inline void set_method_ptr_0(Il2CppMethodPointer value)
	{
		___method_ptr_0 = value;
	}

	inline static int32_t get_offset_of_invoke_impl_1() { return static_cast<int32_t>(offsetof(Delegate_t, ___invoke_impl_1)); }
	inline intptr_t get_invoke_impl_1() const { return ___invoke_impl_1; }
	inline intptr_t* get_address_of_invoke_impl_1() { return &___invoke_impl_1; }
	inline void set_invoke_impl_1(intptr_t value)
	{
		___invoke_impl_1 = value;
	}

	inline static int32_t get_offset_of_m_target_2() { return static_cast<int32_t>(offsetof(Delegate_t, ___m_target_2)); }
	inline RuntimeObject * get_m_target_2() const { return ___m_target_2; }
	inline RuntimeObject ** get_address_of_m_target_2() { return &___m_target_2; }
	inline void set_m_target_2(RuntimeObject * value)
	{
		___m_target_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_target_2), (void*)value);
	}

	inline static int32_t get_offset_of_method_3() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_3)); }
	inline intptr_t get_method_3() const { return ___method_3; }
	inline intptr_t* get_address_of_method_3() { return &___method_3; }
	inline void set_method_3(intptr_t value)
	{
		___method_3 = value;
	}

	inline static int32_t get_offset_of_delegate_trampoline_4() { return static_cast<int32_t>(offsetof(Delegate_t, ___delegate_trampoline_4)); }
	inline intptr_t get_delegate_trampoline_4() const { return ___delegate_trampoline_4; }
	inline intptr_t* get_address_of_delegate_trampoline_4() { return &___delegate_trampoline_4; }
	inline void set_delegate_trampoline_4(intptr_t value)
	{
		___delegate_trampoline_4 = value;
	}

	inline static int32_t get_offset_of_extra_arg_5() { return static_cast<int32_t>(offsetof(Delegate_t, ___extra_arg_5)); }
	inline intptr_t get_extra_arg_5() const { return ___extra_arg_5; }
	inline intptr_t* get_address_of_extra_arg_5() { return &___extra_arg_5; }
	inline void set_extra_arg_5(intptr_t value)
	{
		___extra_arg_5 = value;
	}

	inline static int32_t get_offset_of_method_code_6() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_code_6)); }
	inline intptr_t get_method_code_6() const { return ___method_code_6; }
	inline intptr_t* get_address_of_method_code_6() { return &___method_code_6; }
	inline void set_method_code_6(intptr_t value)
	{
		___method_code_6 = value;
	}

	inline static int32_t get_offset_of_method_info_7() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_info_7)); }
	inline MethodInfo_t * get_method_info_7() const { return ___method_info_7; }
	inline MethodInfo_t ** get_address_of_method_info_7() { return &___method_info_7; }
	inline void set_method_info_7(MethodInfo_t * value)
	{
		___method_info_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___method_info_7), (void*)value);
	}

	inline static int32_t get_offset_of_original_method_info_8() { return static_cast<int32_t>(offsetof(Delegate_t, ___original_method_info_8)); }
	inline MethodInfo_t * get_original_method_info_8() const { return ___original_method_info_8; }
	inline MethodInfo_t ** get_address_of_original_method_info_8() { return &___original_method_info_8; }
	inline void set_original_method_info_8(MethodInfo_t * value)
	{
		___original_method_info_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___original_method_info_8), (void*)value);
	}

	inline static int32_t get_offset_of_data_9() { return static_cast<int32_t>(offsetof(Delegate_t, ___data_9)); }
	inline DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288 * get_data_9() const { return ___data_9; }
	inline DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288 ** get_address_of_data_9() { return &___data_9; }
	inline void set_data_9(DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288 * value)
	{
		___data_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___data_9), (void*)value);
	}

	inline static int32_t get_offset_of_method_is_virtual_10() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_is_virtual_10)); }
	inline bool get_method_is_virtual_10() const { return ___method_is_virtual_10; }
	inline bool* get_address_of_method_is_virtual_10() { return &___method_is_virtual_10; }
	inline void set_method_is_virtual_10(bool value)
	{
		___method_is_virtual_10 = value;
	}
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
	MethodInfo_t * ___method_info_7;
	MethodInfo_t * ___original_method_info_8;
	DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288 * ___data_9;
	int32_t ___method_is_virtual_10;
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
	MethodInfo_t * ___method_info_7;
	MethodInfo_t * ___original_method_info_8;
	DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288 * ___data_9;
	int32_t ___method_is_virtual_10;
};

// UnityEngine.Event
struct Event_tED49F8EC5A2514F6E877E301B1AB7ABE4647253E  : public RuntimeObject
{
public:
	// System.IntPtr UnityEngine.Event::m_Ptr
	intptr_t ___m_Ptr_0;

public:
	inline static int32_t get_offset_of_m_Ptr_0() { return static_cast<int32_t>(offsetof(Event_tED49F8EC5A2514F6E877E301B1AB7ABE4647253E, ___m_Ptr_0)); }
	inline intptr_t get_m_Ptr_0() const { return ___m_Ptr_0; }
	inline intptr_t* get_address_of_m_Ptr_0() { return &___m_Ptr_0; }
	inline void set_m_Ptr_0(intptr_t value)
	{
		___m_Ptr_0 = value;
	}
};

struct Event_tED49F8EC5A2514F6E877E301B1AB7ABE4647253E_StaticFields
{
public:
	// UnityEngine.Event UnityEngine.Event::s_Current
	Event_tED49F8EC5A2514F6E877E301B1AB7ABE4647253E * ___s_Current_1;
	// UnityEngine.Event UnityEngine.Event::s_MasterEvent
	Event_tED49F8EC5A2514F6E877E301B1AB7ABE4647253E * ___s_MasterEvent_2;

public:
	inline static int32_t get_offset_of_s_Current_1() { return static_cast<int32_t>(offsetof(Event_tED49F8EC5A2514F6E877E301B1AB7ABE4647253E_StaticFields, ___s_Current_1)); }
	inline Event_tED49F8EC5A2514F6E877E301B1AB7ABE4647253E * get_s_Current_1() const { return ___s_Current_1; }
	inline Event_tED49F8EC5A2514F6E877E301B1AB7ABE4647253E ** get_address_of_s_Current_1() { return &___s_Current_1; }
	inline void set_s_Current_1(Event_tED49F8EC5A2514F6E877E301B1AB7ABE4647253E * value)
	{
		___s_Current_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_Current_1), (void*)value);
	}

	inline static int32_t get_offset_of_s_MasterEvent_2() { return static_cast<int32_t>(offsetof(Event_tED49F8EC5A2514F6E877E301B1AB7ABE4647253E_StaticFields, ___s_MasterEvent_2)); }
	inline Event_tED49F8EC5A2514F6E877E301B1AB7ABE4647253E * get_s_MasterEvent_2() const { return ___s_MasterEvent_2; }
	inline Event_tED49F8EC5A2514F6E877E301B1AB7ABE4647253E ** get_address_of_s_MasterEvent_2() { return &___s_MasterEvent_2; }
	inline void set_s_MasterEvent_2(Event_tED49F8EC5A2514F6E877E301B1AB7ABE4647253E * value)
	{
		___s_MasterEvent_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_MasterEvent_2), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.Event
struct Event_tED49F8EC5A2514F6E877E301B1AB7ABE4647253E_marshaled_pinvoke
{
	intptr_t ___m_Ptr_0;
};
// Native definition for COM marshalling of UnityEngine.Event
struct Event_tED49F8EC5A2514F6E877E301B1AB7ABE4647253E_marshaled_com
{
	intptr_t ___m_Ptr_0;
};

// UnityEngine.EventType
struct EventType_t7441C817FAEEF7090BC0D9084E6DB3E7F635815F 
{
public:
	// System.Int32 UnityEngine.EventType::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(EventType_t7441C817FAEEF7090BC0D9084E6DB3E7F635815F, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// System.Exception
struct Exception_t  : public RuntimeObject
{
public:
	// System.String System.Exception::_className
	String_t* ____className_1;
	// System.String System.Exception::_message
	String_t* ____message_2;
	// System.Collections.IDictionary System.Exception::_data
	RuntimeObject* ____data_3;
	// System.Exception System.Exception::_innerException
	Exception_t * ____innerException_4;
	// System.String System.Exception::_helpURL
	String_t* ____helpURL_5;
	// System.Object System.Exception::_stackTrace
	RuntimeObject * ____stackTrace_6;
	// System.String System.Exception::_stackTraceString
	String_t* ____stackTraceString_7;
	// System.String System.Exception::_remoteStackTraceString
	String_t* ____remoteStackTraceString_8;
	// System.Int32 System.Exception::_remoteStackIndex
	int32_t ____remoteStackIndex_9;
	// System.Object System.Exception::_dynamicMethods
	RuntimeObject * ____dynamicMethods_10;
	// System.Int32 System.Exception::_HResult
	int32_t ____HResult_11;
	// System.String System.Exception::_source
	String_t* ____source_12;
	// System.Runtime.Serialization.SafeSerializationManager System.Exception::_safeSerializationManager
	SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F * ____safeSerializationManager_13;
	// System.Diagnostics.StackTrace[] System.Exception::captured_traces
	StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971* ___captured_traces_14;
	// System.IntPtr[] System.Exception::native_trace_ips
	IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6* ___native_trace_ips_15;

public:
	inline static int32_t get_offset_of__className_1() { return static_cast<int32_t>(offsetof(Exception_t, ____className_1)); }
	inline String_t* get__className_1() const { return ____className_1; }
	inline String_t** get_address_of__className_1() { return &____className_1; }
	inline void set__className_1(String_t* value)
	{
		____className_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____className_1), (void*)value);
	}

	inline static int32_t get_offset_of__message_2() { return static_cast<int32_t>(offsetof(Exception_t, ____message_2)); }
	inline String_t* get__message_2() const { return ____message_2; }
	inline String_t** get_address_of__message_2() { return &____message_2; }
	inline void set__message_2(String_t* value)
	{
		____message_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____message_2), (void*)value);
	}

	inline static int32_t get_offset_of__data_3() { return static_cast<int32_t>(offsetof(Exception_t, ____data_3)); }
	inline RuntimeObject* get__data_3() const { return ____data_3; }
	inline RuntimeObject** get_address_of__data_3() { return &____data_3; }
	inline void set__data_3(RuntimeObject* value)
	{
		____data_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____data_3), (void*)value);
	}

	inline static int32_t get_offset_of__innerException_4() { return static_cast<int32_t>(offsetof(Exception_t, ____innerException_4)); }
	inline Exception_t * get__innerException_4() const { return ____innerException_4; }
	inline Exception_t ** get_address_of__innerException_4() { return &____innerException_4; }
	inline void set__innerException_4(Exception_t * value)
	{
		____innerException_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____innerException_4), (void*)value);
	}

	inline static int32_t get_offset_of__helpURL_5() { return static_cast<int32_t>(offsetof(Exception_t, ____helpURL_5)); }
	inline String_t* get__helpURL_5() const { return ____helpURL_5; }
	inline String_t** get_address_of__helpURL_5() { return &____helpURL_5; }
	inline void set__helpURL_5(String_t* value)
	{
		____helpURL_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____helpURL_5), (void*)value);
	}

	inline static int32_t get_offset_of__stackTrace_6() { return static_cast<int32_t>(offsetof(Exception_t, ____stackTrace_6)); }
	inline RuntimeObject * get__stackTrace_6() const { return ____stackTrace_6; }
	inline RuntimeObject ** get_address_of__stackTrace_6() { return &____stackTrace_6; }
	inline void set__stackTrace_6(RuntimeObject * value)
	{
		____stackTrace_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____stackTrace_6), (void*)value);
	}

	inline static int32_t get_offset_of__stackTraceString_7() { return static_cast<int32_t>(offsetof(Exception_t, ____stackTraceString_7)); }
	inline String_t* get__stackTraceString_7() const { return ____stackTraceString_7; }
	inline String_t** get_address_of__stackTraceString_7() { return &____stackTraceString_7; }
	inline void set__stackTraceString_7(String_t* value)
	{
		____stackTraceString_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____stackTraceString_7), (void*)value);
	}

	inline static int32_t get_offset_of__remoteStackTraceString_8() { return static_cast<int32_t>(offsetof(Exception_t, ____remoteStackTraceString_8)); }
	inline String_t* get__remoteStackTraceString_8() const { return ____remoteStackTraceString_8; }
	inline String_t** get_address_of__remoteStackTraceString_8() { return &____remoteStackTraceString_8; }
	inline void set__remoteStackTraceString_8(String_t* value)
	{
		____remoteStackTraceString_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____remoteStackTraceString_8), (void*)value);
	}

	inline static int32_t get_offset_of__remoteStackIndex_9() { return static_cast<int32_t>(offsetof(Exception_t, ____remoteStackIndex_9)); }
	inline int32_t get__remoteStackIndex_9() const { return ____remoteStackIndex_9; }
	inline int32_t* get_address_of__remoteStackIndex_9() { return &____remoteStackIndex_9; }
	inline void set__remoteStackIndex_9(int32_t value)
	{
		____remoteStackIndex_9 = value;
	}

	inline static int32_t get_offset_of__dynamicMethods_10() { return static_cast<int32_t>(offsetof(Exception_t, ____dynamicMethods_10)); }
	inline RuntimeObject * get__dynamicMethods_10() const { return ____dynamicMethods_10; }
	inline RuntimeObject ** get_address_of__dynamicMethods_10() { return &____dynamicMethods_10; }
	inline void set__dynamicMethods_10(RuntimeObject * value)
	{
		____dynamicMethods_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____dynamicMethods_10), (void*)value);
	}

	inline static int32_t get_offset_of__HResult_11() { return static_cast<int32_t>(offsetof(Exception_t, ____HResult_11)); }
	inline int32_t get__HResult_11() const { return ____HResult_11; }
	inline int32_t* get_address_of__HResult_11() { return &____HResult_11; }
	inline void set__HResult_11(int32_t value)
	{
		____HResult_11 = value;
	}

	inline static int32_t get_offset_of__source_12() { return static_cast<int32_t>(offsetof(Exception_t, ____source_12)); }
	inline String_t* get__source_12() const { return ____source_12; }
	inline String_t** get_address_of__source_12() { return &____source_12; }
	inline void set__source_12(String_t* value)
	{
		____source_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____source_12), (void*)value);
	}

	inline static int32_t get_offset_of__safeSerializationManager_13() { return static_cast<int32_t>(offsetof(Exception_t, ____safeSerializationManager_13)); }
	inline SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F * get__safeSerializationManager_13() const { return ____safeSerializationManager_13; }
	inline SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F ** get_address_of__safeSerializationManager_13() { return &____safeSerializationManager_13; }
	inline void set__safeSerializationManager_13(SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F * value)
	{
		____safeSerializationManager_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____safeSerializationManager_13), (void*)value);
	}

	inline static int32_t get_offset_of_captured_traces_14() { return static_cast<int32_t>(offsetof(Exception_t, ___captured_traces_14)); }
	inline StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971* get_captured_traces_14() const { return ___captured_traces_14; }
	inline StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971** get_address_of_captured_traces_14() { return &___captured_traces_14; }
	inline void set_captured_traces_14(StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971* value)
	{
		___captured_traces_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___captured_traces_14), (void*)value);
	}

	inline static int32_t get_offset_of_native_trace_ips_15() { return static_cast<int32_t>(offsetof(Exception_t, ___native_trace_ips_15)); }
	inline IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6* get_native_trace_ips_15() const { return ___native_trace_ips_15; }
	inline IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6** get_address_of_native_trace_ips_15() { return &___native_trace_ips_15; }
	inline void set_native_trace_ips_15(IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6* value)
	{
		___native_trace_ips_15 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___native_trace_ips_15), (void*)value);
	}
};

struct Exception_t_StaticFields
{
public:
	// System.Object System.Exception::s_EDILock
	RuntimeObject * ___s_EDILock_0;

public:
	inline static int32_t get_offset_of_s_EDILock_0() { return static_cast<int32_t>(offsetof(Exception_t_StaticFields, ___s_EDILock_0)); }
	inline RuntimeObject * get_s_EDILock_0() const { return ___s_EDILock_0; }
	inline RuntimeObject ** get_address_of_s_EDILock_0() { return &___s_EDILock_0; }
	inline void set_s_EDILock_0(RuntimeObject * value)
	{
		___s_EDILock_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_EDILock_0), (void*)value);
	}
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
	SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F * ____safeSerializationManager_13;
	StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971* ___captured_traces_14;
	Il2CppSafeArray/*NONE*/* ___native_trace_ips_15;
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
	SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F * ____safeSerializationManager_13;
	StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971* ___captured_traces_14;
	Il2CppSafeArray/*NONE*/* ___native_trace_ips_15;
};

// UnityEngine.GUIStyleState
struct GUIStyleState_tC89202668617B1D7884980314F293AD382B9AAD9  : public RuntimeObject
{
public:
	// System.IntPtr UnityEngine.GUIStyleState::m_Ptr
	intptr_t ___m_Ptr_0;
	// UnityEngine.GUIStyle UnityEngine.GUIStyleState::m_SourceStyle
	GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * ___m_SourceStyle_1;

public:
	inline static int32_t get_offset_of_m_Ptr_0() { return static_cast<int32_t>(offsetof(GUIStyleState_tC89202668617B1D7884980314F293AD382B9AAD9, ___m_Ptr_0)); }
	inline intptr_t get_m_Ptr_0() const { return ___m_Ptr_0; }
	inline intptr_t* get_address_of_m_Ptr_0() { return &___m_Ptr_0; }
	inline void set_m_Ptr_0(intptr_t value)
	{
		___m_Ptr_0 = value;
	}

	inline static int32_t get_offset_of_m_SourceStyle_1() { return static_cast<int32_t>(offsetof(GUIStyleState_tC89202668617B1D7884980314F293AD382B9AAD9, ___m_SourceStyle_1)); }
	inline GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * get_m_SourceStyle_1() const { return ___m_SourceStyle_1; }
	inline GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 ** get_address_of_m_SourceStyle_1() { return &___m_SourceStyle_1; }
	inline void set_m_SourceStyle_1(GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * value)
	{
		___m_SourceStyle_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_SourceStyle_1), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.GUIStyleState
struct GUIStyleState_tC89202668617B1D7884980314F293AD382B9AAD9_marshaled_pinvoke
{
	intptr_t ___m_Ptr_0;
	GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726_marshaled_pinvoke* ___m_SourceStyle_1;
};
// Native definition for COM marshalling of UnityEngine.GUIStyleState
struct GUIStyleState_tC89202668617B1D7884980314F293AD382B9AAD9_marshaled_com
{
	intptr_t ___m_Ptr_0;
	GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726_marshaled_com* ___m_SourceStyle_1;
};

// UnityEngine.InputSystem.InputActionChange
struct InputActionChange_tCD5AFDB2B35422167929A81375F2DEBB592B79D6 
{
public:
	// System.Int32 UnityEngine.InputSystem.InputActionChange::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(InputActionChange_tCD5AFDB2B35422167929A81375F2DEBB592B79D6, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.InputSystem.InputActionPhase
struct InputActionPhase_t10B92A32A4518A0D9284B677640A971AB3C81BE4 
{
public:
	// System.Int32 UnityEngine.InputSystem.InputActionPhase::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(InputActionPhase_t10B92A32A4518A0D9284B677640A971AB3C81BE4, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.InputSystem.InputActionType
struct InputActionType_t913CC58784CA34E9791C18B15436C791CD465901 
{
public:
	// System.Int32 UnityEngine.InputSystem.InputActionType::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(InputActionType_t913CC58784CA34E9791C18B15436C791CD465901, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.InputSystem.InputDeviceChange
struct InputDeviceChange_tC73CF05C4838442D95834B3F669C587831B187B1 
{
public:
	// System.Int32 UnityEngine.InputSystem.InputDeviceChange::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(InputDeviceChange_tC73CF05C4838442D95834B3F669C587831B187B1, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.InputSystem.LowLevel.InputStateBlock
struct InputStateBlock_tD9C8DE6181F5D1871DA69E53EB426B9303915291 
{
public:
	// UnityEngine.InputSystem.Utilities.FourCC UnityEngine.InputSystem.LowLevel.InputStateBlock::<format>k__BackingField
	FourCC_tB18951639903964A6B5533C4BAFD8DA17AA8FD9D  ___U3CformatU3Ek__BackingField_21;
	// System.UInt32 UnityEngine.InputSystem.LowLevel.InputStateBlock::<byteOffset>k__BackingField
	uint32_t ___U3CbyteOffsetU3Ek__BackingField_22;
	// System.UInt32 UnityEngine.InputSystem.LowLevel.InputStateBlock::<bitOffset>k__BackingField
	uint32_t ___U3CbitOffsetU3Ek__BackingField_23;
	// System.UInt32 UnityEngine.InputSystem.LowLevel.InputStateBlock::<sizeInBits>k__BackingField
	uint32_t ___U3CsizeInBitsU3Ek__BackingField_24;

public:
	inline static int32_t get_offset_of_U3CformatU3Ek__BackingField_21() { return static_cast<int32_t>(offsetof(InputStateBlock_tD9C8DE6181F5D1871DA69E53EB426B9303915291, ___U3CformatU3Ek__BackingField_21)); }
	inline FourCC_tB18951639903964A6B5533C4BAFD8DA17AA8FD9D  get_U3CformatU3Ek__BackingField_21() const { return ___U3CformatU3Ek__BackingField_21; }
	inline FourCC_tB18951639903964A6B5533C4BAFD8DA17AA8FD9D * get_address_of_U3CformatU3Ek__BackingField_21() { return &___U3CformatU3Ek__BackingField_21; }
	inline void set_U3CformatU3Ek__BackingField_21(FourCC_tB18951639903964A6B5533C4BAFD8DA17AA8FD9D  value)
	{
		___U3CformatU3Ek__BackingField_21 = value;
	}

	inline static int32_t get_offset_of_U3CbyteOffsetU3Ek__BackingField_22() { return static_cast<int32_t>(offsetof(InputStateBlock_tD9C8DE6181F5D1871DA69E53EB426B9303915291, ___U3CbyteOffsetU3Ek__BackingField_22)); }
	inline uint32_t get_U3CbyteOffsetU3Ek__BackingField_22() const { return ___U3CbyteOffsetU3Ek__BackingField_22; }
	inline uint32_t* get_address_of_U3CbyteOffsetU3Ek__BackingField_22() { return &___U3CbyteOffsetU3Ek__BackingField_22; }
	inline void set_U3CbyteOffsetU3Ek__BackingField_22(uint32_t value)
	{
		___U3CbyteOffsetU3Ek__BackingField_22 = value;
	}

	inline static int32_t get_offset_of_U3CbitOffsetU3Ek__BackingField_23() { return static_cast<int32_t>(offsetof(InputStateBlock_tD9C8DE6181F5D1871DA69E53EB426B9303915291, ___U3CbitOffsetU3Ek__BackingField_23)); }
	inline uint32_t get_U3CbitOffsetU3Ek__BackingField_23() const { return ___U3CbitOffsetU3Ek__BackingField_23; }
	inline uint32_t* get_address_of_U3CbitOffsetU3Ek__BackingField_23() { return &___U3CbitOffsetU3Ek__BackingField_23; }
	inline void set_U3CbitOffsetU3Ek__BackingField_23(uint32_t value)
	{
		___U3CbitOffsetU3Ek__BackingField_23 = value;
	}

	inline static int32_t get_offset_of_U3CsizeInBitsU3Ek__BackingField_24() { return static_cast<int32_t>(offsetof(InputStateBlock_tD9C8DE6181F5D1871DA69E53EB426B9303915291, ___U3CsizeInBitsU3Ek__BackingField_24)); }
	inline uint32_t get_U3CsizeInBitsU3Ek__BackingField_24() const { return ___U3CsizeInBitsU3Ek__BackingField_24; }
	inline uint32_t* get_address_of_U3CsizeInBitsU3Ek__BackingField_24() { return &___U3CsizeInBitsU3Ek__BackingField_24; }
	inline void set_U3CsizeInBitsU3Ek__BackingField_24(uint32_t value)
	{
		___U3CsizeInBitsU3Ek__BackingField_24 = value;
	}
};

struct InputStateBlock_tD9C8DE6181F5D1871DA69E53EB426B9303915291_StaticFields
{
public:
	// UnityEngine.InputSystem.Utilities.FourCC UnityEngine.InputSystem.LowLevel.InputStateBlock::FormatBit
	FourCC_tB18951639903964A6B5533C4BAFD8DA17AA8FD9D  ___FormatBit_2;
	// UnityEngine.InputSystem.Utilities.FourCC UnityEngine.InputSystem.LowLevel.InputStateBlock::FormatSBit
	FourCC_tB18951639903964A6B5533C4BAFD8DA17AA8FD9D  ___FormatSBit_3;
	// UnityEngine.InputSystem.Utilities.FourCC UnityEngine.InputSystem.LowLevel.InputStateBlock::FormatInt
	FourCC_tB18951639903964A6B5533C4BAFD8DA17AA8FD9D  ___FormatInt_4;
	// UnityEngine.InputSystem.Utilities.FourCC UnityEngine.InputSystem.LowLevel.InputStateBlock::FormatUInt
	FourCC_tB18951639903964A6B5533C4BAFD8DA17AA8FD9D  ___FormatUInt_5;
	// UnityEngine.InputSystem.Utilities.FourCC UnityEngine.InputSystem.LowLevel.InputStateBlock::FormatShort
	FourCC_tB18951639903964A6B5533C4BAFD8DA17AA8FD9D  ___FormatShort_6;
	// UnityEngine.InputSystem.Utilities.FourCC UnityEngine.InputSystem.LowLevel.InputStateBlock::FormatUShort
	FourCC_tB18951639903964A6B5533C4BAFD8DA17AA8FD9D  ___FormatUShort_7;
	// UnityEngine.InputSystem.Utilities.FourCC UnityEngine.InputSystem.LowLevel.InputStateBlock::FormatByte
	FourCC_tB18951639903964A6B5533C4BAFD8DA17AA8FD9D  ___FormatByte_8;
	// UnityEngine.InputSystem.Utilities.FourCC UnityEngine.InputSystem.LowLevel.InputStateBlock::FormatSByte
	FourCC_tB18951639903964A6B5533C4BAFD8DA17AA8FD9D  ___FormatSByte_9;
	// UnityEngine.InputSystem.Utilities.FourCC UnityEngine.InputSystem.LowLevel.InputStateBlock::FormatLong
	FourCC_tB18951639903964A6B5533C4BAFD8DA17AA8FD9D  ___FormatLong_10;
	// UnityEngine.InputSystem.Utilities.FourCC UnityEngine.InputSystem.LowLevel.InputStateBlock::FormatULong
	FourCC_tB18951639903964A6B5533C4BAFD8DA17AA8FD9D  ___FormatULong_11;
	// UnityEngine.InputSystem.Utilities.FourCC UnityEngine.InputSystem.LowLevel.InputStateBlock::FormatFloat
	FourCC_tB18951639903964A6B5533C4BAFD8DA17AA8FD9D  ___FormatFloat_12;
	// UnityEngine.InputSystem.Utilities.FourCC UnityEngine.InputSystem.LowLevel.InputStateBlock::FormatDouble
	FourCC_tB18951639903964A6B5533C4BAFD8DA17AA8FD9D  ___FormatDouble_13;
	// UnityEngine.InputSystem.Utilities.FourCC UnityEngine.InputSystem.LowLevel.InputStateBlock::FormatVector2
	FourCC_tB18951639903964A6B5533C4BAFD8DA17AA8FD9D  ___FormatVector2_14;
	// UnityEngine.InputSystem.Utilities.FourCC UnityEngine.InputSystem.LowLevel.InputStateBlock::FormatVector3
	FourCC_tB18951639903964A6B5533C4BAFD8DA17AA8FD9D  ___FormatVector3_15;
	// UnityEngine.InputSystem.Utilities.FourCC UnityEngine.InputSystem.LowLevel.InputStateBlock::FormatQuaternion
	FourCC_tB18951639903964A6B5533C4BAFD8DA17AA8FD9D  ___FormatQuaternion_16;
	// UnityEngine.InputSystem.Utilities.FourCC UnityEngine.InputSystem.LowLevel.InputStateBlock::FormatVector2Short
	FourCC_tB18951639903964A6B5533C4BAFD8DA17AA8FD9D  ___FormatVector2Short_17;
	// UnityEngine.InputSystem.Utilities.FourCC UnityEngine.InputSystem.LowLevel.InputStateBlock::FormatVector3Short
	FourCC_tB18951639903964A6B5533C4BAFD8DA17AA8FD9D  ___FormatVector3Short_18;
	// UnityEngine.InputSystem.Utilities.FourCC UnityEngine.InputSystem.LowLevel.InputStateBlock::FormatVector2Byte
	FourCC_tB18951639903964A6B5533C4BAFD8DA17AA8FD9D  ___FormatVector2Byte_19;
	// UnityEngine.InputSystem.Utilities.FourCC UnityEngine.InputSystem.LowLevel.InputStateBlock::FormatVector3Byte
	FourCC_tB18951639903964A6B5533C4BAFD8DA17AA8FD9D  ___FormatVector3Byte_20;

public:
	inline static int32_t get_offset_of_FormatBit_2() { return static_cast<int32_t>(offsetof(InputStateBlock_tD9C8DE6181F5D1871DA69E53EB426B9303915291_StaticFields, ___FormatBit_2)); }
	inline FourCC_tB18951639903964A6B5533C4BAFD8DA17AA8FD9D  get_FormatBit_2() const { return ___FormatBit_2; }
	inline FourCC_tB18951639903964A6B5533C4BAFD8DA17AA8FD9D * get_address_of_FormatBit_2() { return &___FormatBit_2; }
	inline void set_FormatBit_2(FourCC_tB18951639903964A6B5533C4BAFD8DA17AA8FD9D  value)
	{
		___FormatBit_2 = value;
	}

	inline static int32_t get_offset_of_FormatSBit_3() { return static_cast<int32_t>(offsetof(InputStateBlock_tD9C8DE6181F5D1871DA69E53EB426B9303915291_StaticFields, ___FormatSBit_3)); }
	inline FourCC_tB18951639903964A6B5533C4BAFD8DA17AA8FD9D  get_FormatSBit_3() const { return ___FormatSBit_3; }
	inline FourCC_tB18951639903964A6B5533C4BAFD8DA17AA8FD9D * get_address_of_FormatSBit_3() { return &___FormatSBit_3; }
	inline void set_FormatSBit_3(FourCC_tB18951639903964A6B5533C4BAFD8DA17AA8FD9D  value)
	{
		___FormatSBit_3 = value;
	}

	inline static int32_t get_offset_of_FormatInt_4() { return static_cast<int32_t>(offsetof(InputStateBlock_tD9C8DE6181F5D1871DA69E53EB426B9303915291_StaticFields, ___FormatInt_4)); }
	inline FourCC_tB18951639903964A6B5533C4BAFD8DA17AA8FD9D  get_FormatInt_4() const { return ___FormatInt_4; }
	inline FourCC_tB18951639903964A6B5533C4BAFD8DA17AA8FD9D * get_address_of_FormatInt_4() { return &___FormatInt_4; }
	inline void set_FormatInt_4(FourCC_tB18951639903964A6B5533C4BAFD8DA17AA8FD9D  value)
	{
		___FormatInt_4 = value;
	}

	inline static int32_t get_offset_of_FormatUInt_5() { return static_cast<int32_t>(offsetof(InputStateBlock_tD9C8DE6181F5D1871DA69E53EB426B9303915291_StaticFields, ___FormatUInt_5)); }
	inline FourCC_tB18951639903964A6B5533C4BAFD8DA17AA8FD9D  get_FormatUInt_5() const { return ___FormatUInt_5; }
	inline FourCC_tB18951639903964A6B5533C4BAFD8DA17AA8FD9D * get_address_of_FormatUInt_5() { return &___FormatUInt_5; }
	inline void set_FormatUInt_5(FourCC_tB18951639903964A6B5533C4BAFD8DA17AA8FD9D  value)
	{
		___FormatUInt_5 = value;
	}

	inline static int32_t get_offset_of_FormatShort_6() { return static_cast<int32_t>(offsetof(InputStateBlock_tD9C8DE6181F5D1871DA69E53EB426B9303915291_StaticFields, ___FormatShort_6)); }
	inline FourCC_tB18951639903964A6B5533C4BAFD8DA17AA8FD9D  get_FormatShort_6() const { return ___FormatShort_6; }
	inline FourCC_tB18951639903964A6B5533C4BAFD8DA17AA8FD9D * get_address_of_FormatShort_6() { return &___FormatShort_6; }
	inline void set_FormatShort_6(FourCC_tB18951639903964A6B5533C4BAFD8DA17AA8FD9D  value)
	{
		___FormatShort_6 = value;
	}

	inline static int32_t get_offset_of_FormatUShort_7() { return static_cast<int32_t>(offsetof(InputStateBlock_tD9C8DE6181F5D1871DA69E53EB426B9303915291_StaticFields, ___FormatUShort_7)); }
	inline FourCC_tB18951639903964A6B5533C4BAFD8DA17AA8FD9D  get_FormatUShort_7() const { return ___FormatUShort_7; }
	inline FourCC_tB18951639903964A6B5533C4BAFD8DA17AA8FD9D * get_address_of_FormatUShort_7() { return &___FormatUShort_7; }
	inline void set_FormatUShort_7(FourCC_tB18951639903964A6B5533C4BAFD8DA17AA8FD9D  value)
	{
		___FormatUShort_7 = value;
	}

	inline static int32_t get_offset_of_FormatByte_8() { return static_cast<int32_t>(offsetof(InputStateBlock_tD9C8DE6181F5D1871DA69E53EB426B9303915291_StaticFields, ___FormatByte_8)); }
	inline FourCC_tB18951639903964A6B5533C4BAFD8DA17AA8FD9D  get_FormatByte_8() const { return ___FormatByte_8; }
	inline FourCC_tB18951639903964A6B5533C4BAFD8DA17AA8FD9D * get_address_of_FormatByte_8() { return &___FormatByte_8; }
	inline void set_FormatByte_8(FourCC_tB18951639903964A6B5533C4BAFD8DA17AA8FD9D  value)
	{
		___FormatByte_8 = value;
	}

	inline static int32_t get_offset_of_FormatSByte_9() { return static_cast<int32_t>(offsetof(InputStateBlock_tD9C8DE6181F5D1871DA69E53EB426B9303915291_StaticFields, ___FormatSByte_9)); }
	inline FourCC_tB18951639903964A6B5533C4BAFD8DA17AA8FD9D  get_FormatSByte_9() const { return ___FormatSByte_9; }
	inline FourCC_tB18951639903964A6B5533C4BAFD8DA17AA8FD9D * get_address_of_FormatSByte_9() { return &___FormatSByte_9; }
	inline void set_FormatSByte_9(FourCC_tB18951639903964A6B5533C4BAFD8DA17AA8FD9D  value)
	{
		___FormatSByte_9 = value;
	}

	inline static int32_t get_offset_of_FormatLong_10() { return static_cast<int32_t>(offsetof(InputStateBlock_tD9C8DE6181F5D1871DA69E53EB426B9303915291_StaticFields, ___FormatLong_10)); }
	inline FourCC_tB18951639903964A6B5533C4BAFD8DA17AA8FD9D  get_FormatLong_10() const { return ___FormatLong_10; }
	inline FourCC_tB18951639903964A6B5533C4BAFD8DA17AA8FD9D * get_address_of_FormatLong_10() { return &___FormatLong_10; }
	inline void set_FormatLong_10(FourCC_tB18951639903964A6B5533C4BAFD8DA17AA8FD9D  value)
	{
		___FormatLong_10 = value;
	}

	inline static int32_t get_offset_of_FormatULong_11() { return static_cast<int32_t>(offsetof(InputStateBlock_tD9C8DE6181F5D1871DA69E53EB426B9303915291_StaticFields, ___FormatULong_11)); }
	inline FourCC_tB18951639903964A6B5533C4BAFD8DA17AA8FD9D  get_FormatULong_11() const { return ___FormatULong_11; }
	inline FourCC_tB18951639903964A6B5533C4BAFD8DA17AA8FD9D * get_address_of_FormatULong_11() { return &___FormatULong_11; }
	inline void set_FormatULong_11(FourCC_tB18951639903964A6B5533C4BAFD8DA17AA8FD9D  value)
	{
		___FormatULong_11 = value;
	}

	inline static int32_t get_offset_of_FormatFloat_12() { return static_cast<int32_t>(offsetof(InputStateBlock_tD9C8DE6181F5D1871DA69E53EB426B9303915291_StaticFields, ___FormatFloat_12)); }
	inline FourCC_tB18951639903964A6B5533C4BAFD8DA17AA8FD9D  get_FormatFloat_12() const { return ___FormatFloat_12; }
	inline FourCC_tB18951639903964A6B5533C4BAFD8DA17AA8FD9D * get_address_of_FormatFloat_12() { return &___FormatFloat_12; }
	inline void set_FormatFloat_12(FourCC_tB18951639903964A6B5533C4BAFD8DA17AA8FD9D  value)
	{
		___FormatFloat_12 = value;
	}

	inline static int32_t get_offset_of_FormatDouble_13() { return static_cast<int32_t>(offsetof(InputStateBlock_tD9C8DE6181F5D1871DA69E53EB426B9303915291_StaticFields, ___FormatDouble_13)); }
	inline FourCC_tB18951639903964A6B5533C4BAFD8DA17AA8FD9D  get_FormatDouble_13() const { return ___FormatDouble_13; }
	inline FourCC_tB18951639903964A6B5533C4BAFD8DA17AA8FD9D * get_address_of_FormatDouble_13() { return &___FormatDouble_13; }
	inline void set_FormatDouble_13(FourCC_tB18951639903964A6B5533C4BAFD8DA17AA8FD9D  value)
	{
		___FormatDouble_13 = value;
	}

	inline static int32_t get_offset_of_FormatVector2_14() { return static_cast<int32_t>(offsetof(InputStateBlock_tD9C8DE6181F5D1871DA69E53EB426B9303915291_StaticFields, ___FormatVector2_14)); }
	inline FourCC_tB18951639903964A6B5533C4BAFD8DA17AA8FD9D  get_FormatVector2_14() const { return ___FormatVector2_14; }
	inline FourCC_tB18951639903964A6B5533C4BAFD8DA17AA8FD9D * get_address_of_FormatVector2_14() { return &___FormatVector2_14; }
	inline void set_FormatVector2_14(FourCC_tB18951639903964A6B5533C4BAFD8DA17AA8FD9D  value)
	{
		___FormatVector2_14 = value;
	}

	inline static int32_t get_offset_of_FormatVector3_15() { return static_cast<int32_t>(offsetof(InputStateBlock_tD9C8DE6181F5D1871DA69E53EB426B9303915291_StaticFields, ___FormatVector3_15)); }
	inline FourCC_tB18951639903964A6B5533C4BAFD8DA17AA8FD9D  get_FormatVector3_15() const { return ___FormatVector3_15; }
	inline FourCC_tB18951639903964A6B5533C4BAFD8DA17AA8FD9D * get_address_of_FormatVector3_15() { return &___FormatVector3_15; }
	inline void set_FormatVector3_15(FourCC_tB18951639903964A6B5533C4BAFD8DA17AA8FD9D  value)
	{
		___FormatVector3_15 = value;
	}

	inline static int32_t get_offset_of_FormatQuaternion_16() { return static_cast<int32_t>(offsetof(InputStateBlock_tD9C8DE6181F5D1871DA69E53EB426B9303915291_StaticFields, ___FormatQuaternion_16)); }
	inline FourCC_tB18951639903964A6B5533C4BAFD8DA17AA8FD9D  get_FormatQuaternion_16() const { return ___FormatQuaternion_16; }
	inline FourCC_tB18951639903964A6B5533C4BAFD8DA17AA8FD9D * get_address_of_FormatQuaternion_16() { return &___FormatQuaternion_16; }
	inline void set_FormatQuaternion_16(FourCC_tB18951639903964A6B5533C4BAFD8DA17AA8FD9D  value)
	{
		___FormatQuaternion_16 = value;
	}

	inline static int32_t get_offset_of_FormatVector2Short_17() { return static_cast<int32_t>(offsetof(InputStateBlock_tD9C8DE6181F5D1871DA69E53EB426B9303915291_StaticFields, ___FormatVector2Short_17)); }
	inline FourCC_tB18951639903964A6B5533C4BAFD8DA17AA8FD9D  get_FormatVector2Short_17() const { return ___FormatVector2Short_17; }
	inline FourCC_tB18951639903964A6B5533C4BAFD8DA17AA8FD9D * get_address_of_FormatVector2Short_17() { return &___FormatVector2Short_17; }
	inline void set_FormatVector2Short_17(FourCC_tB18951639903964A6B5533C4BAFD8DA17AA8FD9D  value)
	{
		___FormatVector2Short_17 = value;
	}

	inline static int32_t get_offset_of_FormatVector3Short_18() { return static_cast<int32_t>(offsetof(InputStateBlock_tD9C8DE6181F5D1871DA69E53EB426B9303915291_StaticFields, ___FormatVector3Short_18)); }
	inline FourCC_tB18951639903964A6B5533C4BAFD8DA17AA8FD9D  get_FormatVector3Short_18() const { return ___FormatVector3Short_18; }
	inline FourCC_tB18951639903964A6B5533C4BAFD8DA17AA8FD9D * get_address_of_FormatVector3Short_18() { return &___FormatVector3Short_18; }
	inline void set_FormatVector3Short_18(FourCC_tB18951639903964A6B5533C4BAFD8DA17AA8FD9D  value)
	{
		___FormatVector3Short_18 = value;
	}

	inline static int32_t get_offset_of_FormatVector2Byte_19() { return static_cast<int32_t>(offsetof(InputStateBlock_tD9C8DE6181F5D1871DA69E53EB426B9303915291_StaticFields, ___FormatVector2Byte_19)); }
	inline FourCC_tB18951639903964A6B5533C4BAFD8DA17AA8FD9D  get_FormatVector2Byte_19() const { return ___FormatVector2Byte_19; }
	inline FourCC_tB18951639903964A6B5533C4BAFD8DA17AA8FD9D * get_address_of_FormatVector2Byte_19() { return &___FormatVector2Byte_19; }
	inline void set_FormatVector2Byte_19(FourCC_tB18951639903964A6B5533C4BAFD8DA17AA8FD9D  value)
	{
		___FormatVector2Byte_19 = value;
	}

	inline static int32_t get_offset_of_FormatVector3Byte_20() { return static_cast<int32_t>(offsetof(InputStateBlock_tD9C8DE6181F5D1871DA69E53EB426B9303915291_StaticFields, ___FormatVector3Byte_20)); }
	inline FourCC_tB18951639903964A6B5533C4BAFD8DA17AA8FD9D  get_FormatVector3Byte_20() const { return ___FormatVector3Byte_20; }
	inline FourCC_tB18951639903964A6B5533C4BAFD8DA17AA8FD9D * get_address_of_FormatVector3Byte_20() { return &___FormatVector3Byte_20; }
	inline void set_FormatVector3Byte_20(FourCC_tB18951639903964A6B5533C4BAFD8DA17AA8FD9D  value)
	{
		___FormatVector3Byte_20 = value;
	}
};


// UnityEngine.InputSystem.LowLevel.InputUpdateType
struct InputUpdateType_tA060011ED619C3E06A933963E857167028B0AE69 
{
public:
	// System.Int32 UnityEngine.InputSystem.LowLevel.InputUpdateType::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(InputUpdateType_tA060011ED619C3E06A933963E857167028B0AE69, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.Object
struct Object_tF2F3778131EFF286AF62B7B013A170F95A91571A  : public RuntimeObject
{
public:
	// System.IntPtr UnityEngine.Object::m_CachedPtr
	intptr_t ___m_CachedPtr_0;

public:
	inline static int32_t get_offset_of_m_CachedPtr_0() { return static_cast<int32_t>(offsetof(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A, ___m_CachedPtr_0)); }
	inline intptr_t get_m_CachedPtr_0() const { return ___m_CachedPtr_0; }
	inline intptr_t* get_address_of_m_CachedPtr_0() { return &___m_CachedPtr_0; }
	inline void set_m_CachedPtr_0(intptr_t value)
	{
		___m_CachedPtr_0 = value;
	}
};

struct Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_StaticFields
{
public:
	// System.Int32 UnityEngine.Object::OffsetOfInstanceIDInCPlusPlusObject
	int32_t ___OffsetOfInstanceIDInCPlusPlusObject_1;

public:
	inline static int32_t get_offset_of_OffsetOfInstanceIDInCPlusPlusObject_1() { return static_cast<int32_t>(offsetof(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_StaticFields, ___OffsetOfInstanceIDInCPlusPlusObject_1)); }
	inline int32_t get_OffsetOfInstanceIDInCPlusPlusObject_1() const { return ___OffsetOfInstanceIDInCPlusPlusObject_1; }
	inline int32_t* get_address_of_OffsetOfInstanceIDInCPlusPlusObject_1() { return &___OffsetOfInstanceIDInCPlusPlusObject_1; }
	inline void set_OffsetOfInstanceIDInCPlusPlusObject_1(int32_t value)
	{
		___OffsetOfInstanceIDInCPlusPlusObject_1 = value;
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.Object
struct Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_marshaled_pinvoke
{
	intptr_t ___m_CachedPtr_0;
};
// Native definition for COM marshalling of UnityEngine.Object
struct Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_marshaled_com
{
	intptr_t ___m_CachedPtr_0;
};

// UnityEngine.RectOffset
struct RectOffset_tE3A58467CD0749AD9D3E1271F9E315B38F39AE70  : public RuntimeObject
{
public:
	// System.IntPtr UnityEngine.RectOffset::m_Ptr
	intptr_t ___m_Ptr_0;
	// System.Object UnityEngine.RectOffset::m_SourceStyle
	RuntimeObject * ___m_SourceStyle_1;

public:
	inline static int32_t get_offset_of_m_Ptr_0() { return static_cast<int32_t>(offsetof(RectOffset_tE3A58467CD0749AD9D3E1271F9E315B38F39AE70, ___m_Ptr_0)); }
	inline intptr_t get_m_Ptr_0() const { return ___m_Ptr_0; }
	inline intptr_t* get_address_of_m_Ptr_0() { return &___m_Ptr_0; }
	inline void set_m_Ptr_0(intptr_t value)
	{
		___m_Ptr_0 = value;
	}

	inline static int32_t get_offset_of_m_SourceStyle_1() { return static_cast<int32_t>(offsetof(RectOffset_tE3A58467CD0749AD9D3E1271F9E315B38F39AE70, ___m_SourceStyle_1)); }
	inline RuntimeObject * get_m_SourceStyle_1() const { return ___m_SourceStyle_1; }
	inline RuntimeObject ** get_address_of_m_SourceStyle_1() { return &___m_SourceStyle_1; }
	inline void set_m_SourceStyle_1(RuntimeObject * value)
	{
		___m_SourceStyle_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_SourceStyle_1), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.RectOffset
struct RectOffset_tE3A58467CD0749AD9D3E1271F9E315B38F39AE70_marshaled_pinvoke
{
	intptr_t ___m_Ptr_0;
	Il2CppIUnknown* ___m_SourceStyle_1;
};
// Native definition for COM marshalling of UnityEngine.RectOffset
struct RectOffset_tE3A58467CD0749AD9D3E1271F9E315B38F39AE70_marshaled_com
{
	intptr_t ___m_Ptr_0;
	Il2CppIUnknown* ___m_SourceStyle_1;
};

// System.RuntimeTypeHandle
struct RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9 
{
public:
	// System.IntPtr System.RuntimeTypeHandle::value
	intptr_t ___value_0;

public:
	inline static int32_t get_offset_of_value_0() { return static_cast<int32_t>(offsetof(RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9, ___value_0)); }
	inline intptr_t get_value_0() const { return ___value_0; }
	inline intptr_t* get_address_of_value_0() { return &___value_0; }
	inline void set_value_0(intptr_t value)
	{
		___value_0 = value;
	}
};


// System.StringComparison
struct StringComparison_tCC9F72B9B1E2C3C6D2566DD0D3A61E1621048998 
{
public:
	// System.Int32 System.StringComparison::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(StringComparison_tCC9F72B9B1E2C3C6D2566DD0D3A61E1621048998, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// System.TypeCode
struct TypeCode_tCB39BAB5CFB7A1E0BCB521413E3C46B81C31AA7C 
{
public:
	// System.Int32 System.TypeCode::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(TypeCode_tCB39BAB5CFB7A1E0BCB521413E3C46B81C31AA7C, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.InputSystem.Samples.InputActionVisualizer/Visualization
struct Visualization_tA5E064D2E4ED3330F41C77BBA84E5C7714080555 
{
public:
	// System.Int32 UnityEngine.InputSystem.Samples.InputActionVisualizer/Visualization::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(Visualization_tA5E064D2E4ED3330F41C77BBA84E5C7714080555, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.InputSystem.InputBinding/Flags
struct Flags_t96BD9B15406A59FB60DE4A1F11DF96FB70426BF5 
{
public:
	// System.Int32 UnityEngine.InputSystem.InputBinding/Flags::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(Flags_t96BD9B15406A59FB60DE4A1F11DF96FB70426BF5, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.InputSystem.InputControl/ControlFlags
struct ControlFlags_t4E905D93025A8EA82F8A643C2CF1B96150A035AF 
{
public:
	// System.Int32 UnityEngine.InputSystem.InputControl/ControlFlags::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(ControlFlags_t4E905D93025A8EA82F8A643C2CF1B96150A035AF, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.InputSystem.Layouts.InputControlLayout/Flags
struct Flags_tAEF279DC7A9D86C63534C8EB1562B90382307466 
{
public:
	// System.Int32 UnityEngine.InputSystem.Layouts.InputControlLayout/Flags::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(Flags_tAEF279DC7A9D86C63534C8EB1562B90382307466, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.InputSystem.Samples.InputControlVisualizer/Mode
struct Mode_tAB0D34776EABA17179B5BEE6166E0974B563FF6A 
{
public:
	// System.Int32 UnityEngine.InputSystem.Samples.InputControlVisualizer/Mode::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(Mode_tAB0D34776EABA17179B5BEE6166E0974B563FF6A, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.InputSystem.InputDevice/DeviceFlags
struct DeviceFlags_tFA512F7F09EC7A0F7A695F96DC860C91EF15BCFF 
{
public:
	// System.Int32 UnityEngine.InputSystem.InputDevice/DeviceFlags::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(DeviceFlags_tFA512F7F09EC7A0F7A695F96DC860C91EF15BCFF, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.InputSystem.InputSettings/UpdateMode
struct UpdateMode_tCE27D61D90349C84AD17EFB4F0626A6E0740E374 
{
public:
	// System.Int32 UnityEngine.InputSystem.InputSettings/UpdateMode::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(UpdateMode_tCE27D61D90349C84AD17EFB4F0626A6E0740E374, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.InputSystem.Samples.VisualizationHelpers/Axis
struct Axis_t90D8FF5CC32EB59D4AB9F7E1EA99207235D907DB 
{
public:
	// System.Int32 UnityEngine.InputSystem.Samples.VisualizationHelpers/Axis::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(Axis_t90D8FF5CC32EB59D4AB9F7E1EA99207235D907DB, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.InputSystem.Samples.VisualizationHelpers/TimelineVisualizer/PlotType
struct PlotType_t745B0D39CA90A19FF8DEC4BD4018E055DAD2919C 
{
public:
	// System.Int32 UnityEngine.InputSystem.Samples.VisualizationHelpers/TimelineVisualizer/PlotType::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(PlotType_t745B0D39CA90A19FF8DEC4BD4018E055DAD2919C, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.InputSystem.Samples.VisualizationHelpers/TimelineVisualizer/TimeUnit
struct TimeUnit_tB2DF6EA3F89AE1E20E276747605A7B9948C5DA53 
{
public:
	// System.Int32 UnityEngine.InputSystem.Samples.VisualizationHelpers/TimelineVisualizer/TimeUnit::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(TimeUnit_tB2DF6EA3F89AE1E20E276747605A7B9948C5DA53, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Unity.Collections.NativeArray`1<System.UInt64>
struct NativeArray_1_t9D118727A643E61710D0A4DF5B0C8CD1A918A40B 
{
public:
	// System.Void* Unity.Collections.NativeArray`1::m_Buffer
	void* ___m_Buffer_0;
	// System.Int32 Unity.Collections.NativeArray`1::m_Length
	int32_t ___m_Length_1;
	// Unity.Collections.Allocator Unity.Collections.NativeArray`1::m_AllocatorLabel
	int32_t ___m_AllocatorLabel_2;

public:
	inline static int32_t get_offset_of_m_Buffer_0() { return static_cast<int32_t>(offsetof(NativeArray_1_t9D118727A643E61710D0A4DF5B0C8CD1A918A40B, ___m_Buffer_0)); }
	inline void* get_m_Buffer_0() const { return ___m_Buffer_0; }
	inline void** get_address_of_m_Buffer_0() { return &___m_Buffer_0; }
	inline void set_m_Buffer_0(void* value)
	{
		___m_Buffer_0 = value;
	}

	inline static int32_t get_offset_of_m_Length_1() { return static_cast<int32_t>(offsetof(NativeArray_1_t9D118727A643E61710D0A4DF5B0C8CD1A918A40B, ___m_Length_1)); }
	inline int32_t get_m_Length_1() const { return ___m_Length_1; }
	inline int32_t* get_address_of_m_Length_1() { return &___m_Length_1; }
	inline void set_m_Length_1(int32_t value)
	{
		___m_Length_1 = value;
	}

	inline static int32_t get_offset_of_m_AllocatorLabel_2() { return static_cast<int32_t>(offsetof(NativeArray_1_t9D118727A643E61710D0A4DF5B0C8CD1A918A40B, ___m_AllocatorLabel_2)); }
	inline int32_t get_m_AllocatorLabel_2() const { return ___m_AllocatorLabel_2; }
	inline int32_t* get_address_of_m_AllocatorLabel_2() { return &___m_AllocatorLabel_2; }
	inline void set_m_AllocatorLabel_2(int32_t value)
	{
		___m_AllocatorLabel_2 = value;
	}
};


// UnityEngine.InputSystem.Samples.VisualizationHelpers/ScalarVisualizer`1<System.Int32>
struct ScalarVisualizer_1_t0A41B5E8896145168954EDE0B3253E18A0572203  : public ValueVisualizer_1_t9FC76EB6B8852DF3A7F9CF8190EFDFFEFA78A1F2
{
public:
	// TValue UnityEngine.InputSystem.Samples.VisualizationHelpers/ScalarVisualizer`1::limitMin
	int32_t ___limitMin_2;
	// TValue UnityEngine.InputSystem.Samples.VisualizationHelpers/ScalarVisualizer`1::limitMax
	int32_t ___limitMax_3;
	// TValue UnityEngine.InputSystem.Samples.VisualizationHelpers/ScalarVisualizer`1::min
	int32_t ___min_4;
	// TValue UnityEngine.InputSystem.Samples.VisualizationHelpers/ScalarVisualizer`1::max
	int32_t ___max_5;

public:
	inline static int32_t get_offset_of_limitMin_2() { return static_cast<int32_t>(offsetof(ScalarVisualizer_1_t0A41B5E8896145168954EDE0B3253E18A0572203, ___limitMin_2)); }
	inline int32_t get_limitMin_2() const { return ___limitMin_2; }
	inline int32_t* get_address_of_limitMin_2() { return &___limitMin_2; }
	inline void set_limitMin_2(int32_t value)
	{
		___limitMin_2 = value;
	}

	inline static int32_t get_offset_of_limitMax_3() { return static_cast<int32_t>(offsetof(ScalarVisualizer_1_t0A41B5E8896145168954EDE0B3253E18A0572203, ___limitMax_3)); }
	inline int32_t get_limitMax_3() const { return ___limitMax_3; }
	inline int32_t* get_address_of_limitMax_3() { return &___limitMax_3; }
	inline void set_limitMax_3(int32_t value)
	{
		___limitMax_3 = value;
	}

	inline static int32_t get_offset_of_min_4() { return static_cast<int32_t>(offsetof(ScalarVisualizer_1_t0A41B5E8896145168954EDE0B3253E18A0572203, ___min_4)); }
	inline int32_t get_min_4() const { return ___min_4; }
	inline int32_t* get_address_of_min_4() { return &___min_4; }
	inline void set_min_4(int32_t value)
	{
		___min_4 = value;
	}

	inline static int32_t get_offset_of_max_5() { return static_cast<int32_t>(offsetof(ScalarVisualizer_1_t0A41B5E8896145168954EDE0B3253E18A0572203, ___max_5)); }
	inline int32_t get_max_5() const { return ___max_5; }
	inline int32_t* get_address_of_max_5() { return &___max_5; }
	inline void set_max_5(int32_t value)
	{
		___max_5 = value;
	}
};


// UnityEngine.InputSystem.Samples.VisualizationHelpers/ScalarVisualizer`1<System.Single>
struct ScalarVisualizer_1_tE953A574A31F5BCD8A798C67C82BE1940BBE698B  : public ValueVisualizer_1_t2E1FED8314A7BA8343042EEBAFCFED8867B7EAFB
{
public:
	// TValue UnityEngine.InputSystem.Samples.VisualizationHelpers/ScalarVisualizer`1::limitMin
	float ___limitMin_2;
	// TValue UnityEngine.InputSystem.Samples.VisualizationHelpers/ScalarVisualizer`1::limitMax
	float ___limitMax_3;
	// TValue UnityEngine.InputSystem.Samples.VisualizationHelpers/ScalarVisualizer`1::min
	float ___min_4;
	// TValue UnityEngine.InputSystem.Samples.VisualizationHelpers/ScalarVisualizer`1::max
	float ___max_5;

public:
	inline static int32_t get_offset_of_limitMin_2() { return static_cast<int32_t>(offsetof(ScalarVisualizer_1_tE953A574A31F5BCD8A798C67C82BE1940BBE698B, ___limitMin_2)); }
	inline float get_limitMin_2() const { return ___limitMin_2; }
	inline float* get_address_of_limitMin_2() { return &___limitMin_2; }
	inline void set_limitMin_2(float value)
	{
		___limitMin_2 = value;
	}

	inline static int32_t get_offset_of_limitMax_3() { return static_cast<int32_t>(offsetof(ScalarVisualizer_1_tE953A574A31F5BCD8A798C67C82BE1940BBE698B, ___limitMax_3)); }
	inline float get_limitMax_3() const { return ___limitMax_3; }
	inline float* get_address_of_limitMax_3() { return &___limitMax_3; }
	inline void set_limitMax_3(float value)
	{
		___limitMax_3 = value;
	}

	inline static int32_t get_offset_of_min_4() { return static_cast<int32_t>(offsetof(ScalarVisualizer_1_tE953A574A31F5BCD8A798C67C82BE1940BBE698B, ___min_4)); }
	inline float get_min_4() const { return ___min_4; }
	inline float* get_address_of_min_4() { return &___min_4; }
	inline void set_min_4(float value)
	{
		___min_4 = value;
	}

	inline static int32_t get_offset_of_max_5() { return static_cast<int32_t>(offsetof(ScalarVisualizer_1_tE953A574A31F5BCD8A798C67C82BE1940BBE698B, ___max_5)); }
	inline float get_max_5() const { return ___max_5; }
	inline float* get_address_of_max_5() { return &___max_5; }
	inline void set_max_5(float value)
	{
		___max_5 = value;
	}
};


// UnityEngine.Component
struct Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684  : public Object_tF2F3778131EFF286AF62B7B013A170F95A91571A
{
public:

public:
};


// UnityEngine.GUIStyle
struct GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726  : public RuntimeObject
{
public:
	// System.IntPtr UnityEngine.GUIStyle::m_Ptr
	intptr_t ___m_Ptr_0;
	// UnityEngine.GUIStyleState UnityEngine.GUIStyle::m_Normal
	GUIStyleState_tC89202668617B1D7884980314F293AD382B9AAD9 * ___m_Normal_1;
	// UnityEngine.GUIStyleState UnityEngine.GUIStyle::m_Hover
	GUIStyleState_tC89202668617B1D7884980314F293AD382B9AAD9 * ___m_Hover_2;
	// UnityEngine.GUIStyleState UnityEngine.GUIStyle::m_Active
	GUIStyleState_tC89202668617B1D7884980314F293AD382B9AAD9 * ___m_Active_3;
	// UnityEngine.GUIStyleState UnityEngine.GUIStyle::m_Focused
	GUIStyleState_tC89202668617B1D7884980314F293AD382B9AAD9 * ___m_Focused_4;
	// UnityEngine.GUIStyleState UnityEngine.GUIStyle::m_OnNormal
	GUIStyleState_tC89202668617B1D7884980314F293AD382B9AAD9 * ___m_OnNormal_5;
	// UnityEngine.GUIStyleState UnityEngine.GUIStyle::m_OnHover
	GUIStyleState_tC89202668617B1D7884980314F293AD382B9AAD9 * ___m_OnHover_6;
	// UnityEngine.GUIStyleState UnityEngine.GUIStyle::m_OnActive
	GUIStyleState_tC89202668617B1D7884980314F293AD382B9AAD9 * ___m_OnActive_7;
	// UnityEngine.GUIStyleState UnityEngine.GUIStyle::m_OnFocused
	GUIStyleState_tC89202668617B1D7884980314F293AD382B9AAD9 * ___m_OnFocused_8;
	// UnityEngine.RectOffset UnityEngine.GUIStyle::m_Border
	RectOffset_tE3A58467CD0749AD9D3E1271F9E315B38F39AE70 * ___m_Border_9;
	// UnityEngine.RectOffset UnityEngine.GUIStyle::m_Padding
	RectOffset_tE3A58467CD0749AD9D3E1271F9E315B38F39AE70 * ___m_Padding_10;
	// UnityEngine.RectOffset UnityEngine.GUIStyle::m_Margin
	RectOffset_tE3A58467CD0749AD9D3E1271F9E315B38F39AE70 * ___m_Margin_11;
	// UnityEngine.RectOffset UnityEngine.GUIStyle::m_Overflow
	RectOffset_tE3A58467CD0749AD9D3E1271F9E315B38F39AE70 * ___m_Overflow_12;
	// System.String UnityEngine.GUIStyle::m_Name
	String_t* ___m_Name_13;

public:
	inline static int32_t get_offset_of_m_Ptr_0() { return static_cast<int32_t>(offsetof(GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726, ___m_Ptr_0)); }
	inline intptr_t get_m_Ptr_0() const { return ___m_Ptr_0; }
	inline intptr_t* get_address_of_m_Ptr_0() { return &___m_Ptr_0; }
	inline void set_m_Ptr_0(intptr_t value)
	{
		___m_Ptr_0 = value;
	}

	inline static int32_t get_offset_of_m_Normal_1() { return static_cast<int32_t>(offsetof(GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726, ___m_Normal_1)); }
	inline GUIStyleState_tC89202668617B1D7884980314F293AD382B9AAD9 * get_m_Normal_1() const { return ___m_Normal_1; }
	inline GUIStyleState_tC89202668617B1D7884980314F293AD382B9AAD9 ** get_address_of_m_Normal_1() { return &___m_Normal_1; }
	inline void set_m_Normal_1(GUIStyleState_tC89202668617B1D7884980314F293AD382B9AAD9 * value)
	{
		___m_Normal_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Normal_1), (void*)value);
	}

	inline static int32_t get_offset_of_m_Hover_2() { return static_cast<int32_t>(offsetof(GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726, ___m_Hover_2)); }
	inline GUIStyleState_tC89202668617B1D7884980314F293AD382B9AAD9 * get_m_Hover_2() const { return ___m_Hover_2; }
	inline GUIStyleState_tC89202668617B1D7884980314F293AD382B9AAD9 ** get_address_of_m_Hover_2() { return &___m_Hover_2; }
	inline void set_m_Hover_2(GUIStyleState_tC89202668617B1D7884980314F293AD382B9AAD9 * value)
	{
		___m_Hover_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Hover_2), (void*)value);
	}

	inline static int32_t get_offset_of_m_Active_3() { return static_cast<int32_t>(offsetof(GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726, ___m_Active_3)); }
	inline GUIStyleState_tC89202668617B1D7884980314F293AD382B9AAD9 * get_m_Active_3() const { return ___m_Active_3; }
	inline GUIStyleState_tC89202668617B1D7884980314F293AD382B9AAD9 ** get_address_of_m_Active_3() { return &___m_Active_3; }
	inline void set_m_Active_3(GUIStyleState_tC89202668617B1D7884980314F293AD382B9AAD9 * value)
	{
		___m_Active_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Active_3), (void*)value);
	}

	inline static int32_t get_offset_of_m_Focused_4() { return static_cast<int32_t>(offsetof(GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726, ___m_Focused_4)); }
	inline GUIStyleState_tC89202668617B1D7884980314F293AD382B9AAD9 * get_m_Focused_4() const { return ___m_Focused_4; }
	inline GUIStyleState_tC89202668617B1D7884980314F293AD382B9AAD9 ** get_address_of_m_Focused_4() { return &___m_Focused_4; }
	inline void set_m_Focused_4(GUIStyleState_tC89202668617B1D7884980314F293AD382B9AAD9 * value)
	{
		___m_Focused_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Focused_4), (void*)value);
	}

	inline static int32_t get_offset_of_m_OnNormal_5() { return static_cast<int32_t>(offsetof(GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726, ___m_OnNormal_5)); }
	inline GUIStyleState_tC89202668617B1D7884980314F293AD382B9AAD9 * get_m_OnNormal_5() const { return ___m_OnNormal_5; }
	inline GUIStyleState_tC89202668617B1D7884980314F293AD382B9AAD9 ** get_address_of_m_OnNormal_5() { return &___m_OnNormal_5; }
	inline void set_m_OnNormal_5(GUIStyleState_tC89202668617B1D7884980314F293AD382B9AAD9 * value)
	{
		___m_OnNormal_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_OnNormal_5), (void*)value);
	}

	inline static int32_t get_offset_of_m_OnHover_6() { return static_cast<int32_t>(offsetof(GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726, ___m_OnHover_6)); }
	inline GUIStyleState_tC89202668617B1D7884980314F293AD382B9AAD9 * get_m_OnHover_6() const { return ___m_OnHover_6; }
	inline GUIStyleState_tC89202668617B1D7884980314F293AD382B9AAD9 ** get_address_of_m_OnHover_6() { return &___m_OnHover_6; }
	inline void set_m_OnHover_6(GUIStyleState_tC89202668617B1D7884980314F293AD382B9AAD9 * value)
	{
		___m_OnHover_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_OnHover_6), (void*)value);
	}

	inline static int32_t get_offset_of_m_OnActive_7() { return static_cast<int32_t>(offsetof(GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726, ___m_OnActive_7)); }
	inline GUIStyleState_tC89202668617B1D7884980314F293AD382B9AAD9 * get_m_OnActive_7() const { return ___m_OnActive_7; }
	inline GUIStyleState_tC89202668617B1D7884980314F293AD382B9AAD9 ** get_address_of_m_OnActive_7() { return &___m_OnActive_7; }
	inline void set_m_OnActive_7(GUIStyleState_tC89202668617B1D7884980314F293AD382B9AAD9 * value)
	{
		___m_OnActive_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_OnActive_7), (void*)value);
	}

	inline static int32_t get_offset_of_m_OnFocused_8() { return static_cast<int32_t>(offsetof(GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726, ___m_OnFocused_8)); }
	inline GUIStyleState_tC89202668617B1D7884980314F293AD382B9AAD9 * get_m_OnFocused_8() const { return ___m_OnFocused_8; }
	inline GUIStyleState_tC89202668617B1D7884980314F293AD382B9AAD9 ** get_address_of_m_OnFocused_8() { return &___m_OnFocused_8; }
	inline void set_m_OnFocused_8(GUIStyleState_tC89202668617B1D7884980314F293AD382B9AAD9 * value)
	{
		___m_OnFocused_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_OnFocused_8), (void*)value);
	}

	inline static int32_t get_offset_of_m_Border_9() { return static_cast<int32_t>(offsetof(GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726, ___m_Border_9)); }
	inline RectOffset_tE3A58467CD0749AD9D3E1271F9E315B38F39AE70 * get_m_Border_9() const { return ___m_Border_9; }
	inline RectOffset_tE3A58467CD0749AD9D3E1271F9E315B38F39AE70 ** get_address_of_m_Border_9() { return &___m_Border_9; }
	inline void set_m_Border_9(RectOffset_tE3A58467CD0749AD9D3E1271F9E315B38F39AE70 * value)
	{
		___m_Border_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Border_9), (void*)value);
	}

	inline static int32_t get_offset_of_m_Padding_10() { return static_cast<int32_t>(offsetof(GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726, ___m_Padding_10)); }
	inline RectOffset_tE3A58467CD0749AD9D3E1271F9E315B38F39AE70 * get_m_Padding_10() const { return ___m_Padding_10; }
	inline RectOffset_tE3A58467CD0749AD9D3E1271F9E315B38F39AE70 ** get_address_of_m_Padding_10() { return &___m_Padding_10; }
	inline void set_m_Padding_10(RectOffset_tE3A58467CD0749AD9D3E1271F9E315B38F39AE70 * value)
	{
		___m_Padding_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Padding_10), (void*)value);
	}

	inline static int32_t get_offset_of_m_Margin_11() { return static_cast<int32_t>(offsetof(GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726, ___m_Margin_11)); }
	inline RectOffset_tE3A58467CD0749AD9D3E1271F9E315B38F39AE70 * get_m_Margin_11() const { return ___m_Margin_11; }
	inline RectOffset_tE3A58467CD0749AD9D3E1271F9E315B38F39AE70 ** get_address_of_m_Margin_11() { return &___m_Margin_11; }
	inline void set_m_Margin_11(RectOffset_tE3A58467CD0749AD9D3E1271F9E315B38F39AE70 * value)
	{
		___m_Margin_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Margin_11), (void*)value);
	}

	inline static int32_t get_offset_of_m_Overflow_12() { return static_cast<int32_t>(offsetof(GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726, ___m_Overflow_12)); }
	inline RectOffset_tE3A58467CD0749AD9D3E1271F9E315B38F39AE70 * get_m_Overflow_12() const { return ___m_Overflow_12; }
	inline RectOffset_tE3A58467CD0749AD9D3E1271F9E315B38F39AE70 ** get_address_of_m_Overflow_12() { return &___m_Overflow_12; }
	inline void set_m_Overflow_12(RectOffset_tE3A58467CD0749AD9D3E1271F9E315B38F39AE70 * value)
	{
		___m_Overflow_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Overflow_12), (void*)value);
	}

	inline static int32_t get_offset_of_m_Name_13() { return static_cast<int32_t>(offsetof(GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726, ___m_Name_13)); }
	inline String_t* get_m_Name_13() const { return ___m_Name_13; }
	inline String_t** get_address_of_m_Name_13() { return &___m_Name_13; }
	inline void set_m_Name_13(String_t* value)
	{
		___m_Name_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Name_13), (void*)value);
	}
};

struct GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726_StaticFields
{
public:
	// System.Boolean UnityEngine.GUIStyle::showKeyboardFocus
	bool ___showKeyboardFocus_14;
	// UnityEngine.GUIStyle UnityEngine.GUIStyle::s_None
	GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * ___s_None_15;

public:
	inline static int32_t get_offset_of_showKeyboardFocus_14() { return static_cast<int32_t>(offsetof(GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726_StaticFields, ___showKeyboardFocus_14)); }
	inline bool get_showKeyboardFocus_14() const { return ___showKeyboardFocus_14; }
	inline bool* get_address_of_showKeyboardFocus_14() { return &___showKeyboardFocus_14; }
	inline void set_showKeyboardFocus_14(bool value)
	{
		___showKeyboardFocus_14 = value;
	}

	inline static int32_t get_offset_of_s_None_15() { return static_cast<int32_t>(offsetof(GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726_StaticFields, ___s_None_15)); }
	inline GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * get_s_None_15() const { return ___s_None_15; }
	inline GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 ** get_address_of_s_None_15() { return &___s_None_15; }
	inline void set_s_None_15(GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * value)
	{
		___s_None_15 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_None_15), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.GUIStyle
struct GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726_marshaled_pinvoke
{
	intptr_t ___m_Ptr_0;
	GUIStyleState_tC89202668617B1D7884980314F293AD382B9AAD9_marshaled_pinvoke* ___m_Normal_1;
	GUIStyleState_tC89202668617B1D7884980314F293AD382B9AAD9_marshaled_pinvoke* ___m_Hover_2;
	GUIStyleState_tC89202668617B1D7884980314F293AD382B9AAD9_marshaled_pinvoke* ___m_Active_3;
	GUIStyleState_tC89202668617B1D7884980314F293AD382B9AAD9_marshaled_pinvoke* ___m_Focused_4;
	GUIStyleState_tC89202668617B1D7884980314F293AD382B9AAD9_marshaled_pinvoke* ___m_OnNormal_5;
	GUIStyleState_tC89202668617B1D7884980314F293AD382B9AAD9_marshaled_pinvoke* ___m_OnHover_6;
	GUIStyleState_tC89202668617B1D7884980314F293AD382B9AAD9_marshaled_pinvoke* ___m_OnActive_7;
	GUIStyleState_tC89202668617B1D7884980314F293AD382B9AAD9_marshaled_pinvoke* ___m_OnFocused_8;
	RectOffset_tE3A58467CD0749AD9D3E1271F9E315B38F39AE70_marshaled_pinvoke ___m_Border_9;
	RectOffset_tE3A58467CD0749AD9D3E1271F9E315B38F39AE70_marshaled_pinvoke ___m_Padding_10;
	RectOffset_tE3A58467CD0749AD9D3E1271F9E315B38F39AE70_marshaled_pinvoke ___m_Margin_11;
	RectOffset_tE3A58467CD0749AD9D3E1271F9E315B38F39AE70_marshaled_pinvoke ___m_Overflow_12;
	char* ___m_Name_13;
};
// Native definition for COM marshalling of UnityEngine.GUIStyle
struct GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726_marshaled_com
{
	intptr_t ___m_Ptr_0;
	GUIStyleState_tC89202668617B1D7884980314F293AD382B9AAD9_marshaled_com* ___m_Normal_1;
	GUIStyleState_tC89202668617B1D7884980314F293AD382B9AAD9_marshaled_com* ___m_Hover_2;
	GUIStyleState_tC89202668617B1D7884980314F293AD382B9AAD9_marshaled_com* ___m_Active_3;
	GUIStyleState_tC89202668617B1D7884980314F293AD382B9AAD9_marshaled_com* ___m_Focused_4;
	GUIStyleState_tC89202668617B1D7884980314F293AD382B9AAD9_marshaled_com* ___m_OnNormal_5;
	GUIStyleState_tC89202668617B1D7884980314F293AD382B9AAD9_marshaled_com* ___m_OnHover_6;
	GUIStyleState_tC89202668617B1D7884980314F293AD382B9AAD9_marshaled_com* ___m_OnActive_7;
	GUIStyleState_tC89202668617B1D7884980314F293AD382B9AAD9_marshaled_com* ___m_OnFocused_8;
	RectOffset_tE3A58467CD0749AD9D3E1271F9E315B38F39AE70_marshaled_com* ___m_Border_9;
	RectOffset_tE3A58467CD0749AD9D3E1271F9E315B38F39AE70_marshaled_com* ___m_Padding_10;
	RectOffset_tE3A58467CD0749AD9D3E1271F9E315B38F39AE70_marshaled_com* ___m_Margin_11;
	RectOffset_tE3A58467CD0749AD9D3E1271F9E315B38F39AE70_marshaled_com* ___m_Overflow_12;
	Il2CppChar* ___m_Name_13;
};

// UnityEngine.InputSystem.InputBinding
struct InputBinding_t18B68FF9E7C08763BFC653E20E79B63389CF80CD 
{
public:
	// System.String UnityEngine.InputSystem.InputBinding::m_Name
	String_t* ___m_Name_2;
	// System.String UnityEngine.InputSystem.InputBinding::m_Id
	String_t* ___m_Id_3;
	// System.String UnityEngine.InputSystem.InputBinding::m_Path
	String_t* ___m_Path_4;
	// System.String UnityEngine.InputSystem.InputBinding::m_Interactions
	String_t* ___m_Interactions_5;
	// System.String UnityEngine.InputSystem.InputBinding::m_Processors
	String_t* ___m_Processors_6;
	// System.String UnityEngine.InputSystem.InputBinding::m_Groups
	String_t* ___m_Groups_7;
	// System.String UnityEngine.InputSystem.InputBinding::m_Action
	String_t* ___m_Action_8;
	// UnityEngine.InputSystem.InputBinding/Flags UnityEngine.InputSystem.InputBinding::m_Flags
	int32_t ___m_Flags_9;
	// System.String UnityEngine.InputSystem.InputBinding::m_OverridePath
	String_t* ___m_OverridePath_10;
	// System.String UnityEngine.InputSystem.InputBinding::m_OverrideInteractions
	String_t* ___m_OverrideInteractions_11;
	// System.String UnityEngine.InputSystem.InputBinding::m_OverrideProcessors
	String_t* ___m_OverrideProcessors_12;

public:
	inline static int32_t get_offset_of_m_Name_2() { return static_cast<int32_t>(offsetof(InputBinding_t18B68FF9E7C08763BFC653E20E79B63389CF80CD, ___m_Name_2)); }
	inline String_t* get_m_Name_2() const { return ___m_Name_2; }
	inline String_t** get_address_of_m_Name_2() { return &___m_Name_2; }
	inline void set_m_Name_2(String_t* value)
	{
		___m_Name_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Name_2), (void*)value);
	}

	inline static int32_t get_offset_of_m_Id_3() { return static_cast<int32_t>(offsetof(InputBinding_t18B68FF9E7C08763BFC653E20E79B63389CF80CD, ___m_Id_3)); }
	inline String_t* get_m_Id_3() const { return ___m_Id_3; }
	inline String_t** get_address_of_m_Id_3() { return &___m_Id_3; }
	inline void set_m_Id_3(String_t* value)
	{
		___m_Id_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Id_3), (void*)value);
	}

	inline static int32_t get_offset_of_m_Path_4() { return static_cast<int32_t>(offsetof(InputBinding_t18B68FF9E7C08763BFC653E20E79B63389CF80CD, ___m_Path_4)); }
	inline String_t* get_m_Path_4() const { return ___m_Path_4; }
	inline String_t** get_address_of_m_Path_4() { return &___m_Path_4; }
	inline void set_m_Path_4(String_t* value)
	{
		___m_Path_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Path_4), (void*)value);
	}

	inline static int32_t get_offset_of_m_Interactions_5() { return static_cast<int32_t>(offsetof(InputBinding_t18B68FF9E7C08763BFC653E20E79B63389CF80CD, ___m_Interactions_5)); }
	inline String_t* get_m_Interactions_5() const { return ___m_Interactions_5; }
	inline String_t** get_address_of_m_Interactions_5() { return &___m_Interactions_5; }
	inline void set_m_Interactions_5(String_t* value)
	{
		___m_Interactions_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Interactions_5), (void*)value);
	}

	inline static int32_t get_offset_of_m_Processors_6() { return static_cast<int32_t>(offsetof(InputBinding_t18B68FF9E7C08763BFC653E20E79B63389CF80CD, ___m_Processors_6)); }
	inline String_t* get_m_Processors_6() const { return ___m_Processors_6; }
	inline String_t** get_address_of_m_Processors_6() { return &___m_Processors_6; }
	inline void set_m_Processors_6(String_t* value)
	{
		___m_Processors_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Processors_6), (void*)value);
	}

	inline static int32_t get_offset_of_m_Groups_7() { return static_cast<int32_t>(offsetof(InputBinding_t18B68FF9E7C08763BFC653E20E79B63389CF80CD, ___m_Groups_7)); }
	inline String_t* get_m_Groups_7() const { return ___m_Groups_7; }
	inline String_t** get_address_of_m_Groups_7() { return &___m_Groups_7; }
	inline void set_m_Groups_7(String_t* value)
	{
		___m_Groups_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Groups_7), (void*)value);
	}

	inline static int32_t get_offset_of_m_Action_8() { return static_cast<int32_t>(offsetof(InputBinding_t18B68FF9E7C08763BFC653E20E79B63389CF80CD, ___m_Action_8)); }
	inline String_t* get_m_Action_8() const { return ___m_Action_8; }
	inline String_t** get_address_of_m_Action_8() { return &___m_Action_8; }
	inline void set_m_Action_8(String_t* value)
	{
		___m_Action_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Action_8), (void*)value);
	}

	inline static int32_t get_offset_of_m_Flags_9() { return static_cast<int32_t>(offsetof(InputBinding_t18B68FF9E7C08763BFC653E20E79B63389CF80CD, ___m_Flags_9)); }
	inline int32_t get_m_Flags_9() const { return ___m_Flags_9; }
	inline int32_t* get_address_of_m_Flags_9() { return &___m_Flags_9; }
	inline void set_m_Flags_9(int32_t value)
	{
		___m_Flags_9 = value;
	}

	inline static int32_t get_offset_of_m_OverridePath_10() { return static_cast<int32_t>(offsetof(InputBinding_t18B68FF9E7C08763BFC653E20E79B63389CF80CD, ___m_OverridePath_10)); }
	inline String_t* get_m_OverridePath_10() const { return ___m_OverridePath_10; }
	inline String_t** get_address_of_m_OverridePath_10() { return &___m_OverridePath_10; }
	inline void set_m_OverridePath_10(String_t* value)
	{
		___m_OverridePath_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_OverridePath_10), (void*)value);
	}

	inline static int32_t get_offset_of_m_OverrideInteractions_11() { return static_cast<int32_t>(offsetof(InputBinding_t18B68FF9E7C08763BFC653E20E79B63389CF80CD, ___m_OverrideInteractions_11)); }
	inline String_t* get_m_OverrideInteractions_11() const { return ___m_OverrideInteractions_11; }
	inline String_t** get_address_of_m_OverrideInteractions_11() { return &___m_OverrideInteractions_11; }
	inline void set_m_OverrideInteractions_11(String_t* value)
	{
		___m_OverrideInteractions_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_OverrideInteractions_11), (void*)value);
	}

	inline static int32_t get_offset_of_m_OverrideProcessors_12() { return static_cast<int32_t>(offsetof(InputBinding_t18B68FF9E7C08763BFC653E20E79B63389CF80CD, ___m_OverrideProcessors_12)); }
	inline String_t* get_m_OverrideProcessors_12() const { return ___m_OverrideProcessors_12; }
	inline String_t** get_address_of_m_OverrideProcessors_12() { return &___m_OverrideProcessors_12; }
	inline void set_m_OverrideProcessors_12(String_t* value)
	{
		___m_OverrideProcessors_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_OverrideProcessors_12), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.InputSystem.InputBinding
struct InputBinding_t18B68FF9E7C08763BFC653E20E79B63389CF80CD_marshaled_pinvoke
{
	char* ___m_Name_2;
	char* ___m_Id_3;
	char* ___m_Path_4;
	char* ___m_Interactions_5;
	char* ___m_Processors_6;
	char* ___m_Groups_7;
	char* ___m_Action_8;
	int32_t ___m_Flags_9;
	char* ___m_OverridePath_10;
	char* ___m_OverrideInteractions_11;
	char* ___m_OverrideProcessors_12;
};
// Native definition for COM marshalling of UnityEngine.InputSystem.InputBinding
struct InputBinding_t18B68FF9E7C08763BFC653E20E79B63389CF80CD_marshaled_com
{
	Il2CppChar* ___m_Name_2;
	Il2CppChar* ___m_Id_3;
	Il2CppChar* ___m_Path_4;
	Il2CppChar* ___m_Interactions_5;
	Il2CppChar* ___m_Processors_6;
	Il2CppChar* ___m_Groups_7;
	Il2CppChar* ___m_Action_8;
	int32_t ___m_Flags_9;
	Il2CppChar* ___m_OverridePath_10;
	Il2CppChar* ___m_OverrideInteractions_11;
	Il2CppChar* ___m_OverrideProcessors_12;
};

// UnityEngine.InputSystem.Layouts.InputControlLayout
struct InputControlLayout_t012E8BC3C93CE8A2A35BFC6A70C52530FFB55917  : public RuntimeObject
{
public:
	// UnityEngine.InputSystem.Utilities.InternedString UnityEngine.InputSystem.Layouts.InputControlLayout::m_Name
	InternedString_tD1138602E8B7EA0F5B4851812B13C7E0551E25C8  ___m_Name_2;
	// System.Type UnityEngine.InputSystem.Layouts.InputControlLayout::m_Type
	Type_t * ___m_Type_3;
	// UnityEngine.InputSystem.Utilities.InternedString UnityEngine.InputSystem.Layouts.InputControlLayout::m_Variants
	InternedString_tD1138602E8B7EA0F5B4851812B13C7E0551E25C8  ___m_Variants_4;
	// UnityEngine.InputSystem.Utilities.FourCC UnityEngine.InputSystem.Layouts.InputControlLayout::m_StateFormat
	FourCC_tB18951639903964A6B5533C4BAFD8DA17AA8FD9D  ___m_StateFormat_5;
	// System.Int32 UnityEngine.InputSystem.Layouts.InputControlLayout::m_StateSizeInBytes
	int32_t ___m_StateSizeInBytes_6;
	// System.Nullable`1<System.Boolean> UnityEngine.InputSystem.Layouts.InputControlLayout::m_UpdateBeforeRender
	Nullable_1_t1D1CD146BFCBDC2E53E1F700889F8C5C21063EF3  ___m_UpdateBeforeRender_7;
	// UnityEngine.InputSystem.Utilities.InlinedArray`1<UnityEngine.InputSystem.Utilities.InternedString> UnityEngine.InputSystem.Layouts.InputControlLayout::m_BaseLayouts
	InlinedArray_1_t7B73159E4B6A8AD12C99ED22A9138E32D7408FA0  ___m_BaseLayouts_8;
	// UnityEngine.InputSystem.Utilities.InlinedArray`1<UnityEngine.InputSystem.Utilities.InternedString> UnityEngine.InputSystem.Layouts.InputControlLayout::m_AppliedOverrides
	InlinedArray_1_t7B73159E4B6A8AD12C99ED22A9138E32D7408FA0  ___m_AppliedOverrides_9;
	// UnityEngine.InputSystem.Utilities.InternedString[] UnityEngine.InputSystem.Layouts.InputControlLayout::m_CommonUsages
	InternedStringU5BU5D_t1B3BD9ED90129E67B58E1681B1944E72F8E0E648* ___m_CommonUsages_10;
	// UnityEngine.InputSystem.Layouts.InputControlLayout/ControlItem[] UnityEngine.InputSystem.Layouts.InputControlLayout::m_Controls
	ControlItemU5BU5D_t5AFF1520667DFF9AA06E17887A3D0B77BEB173BB* ___m_Controls_11;
	// System.String UnityEngine.InputSystem.Layouts.InputControlLayout::m_DisplayName
	String_t* ___m_DisplayName_12;
	// System.String UnityEngine.InputSystem.Layouts.InputControlLayout::m_Description
	String_t* ___m_Description_13;
	// UnityEngine.InputSystem.Layouts.InputControlLayout/Flags UnityEngine.InputSystem.Layouts.InputControlLayout::m_Flags
	int32_t ___m_Flags_14;

public:
	inline static int32_t get_offset_of_m_Name_2() { return static_cast<int32_t>(offsetof(InputControlLayout_t012E8BC3C93CE8A2A35BFC6A70C52530FFB55917, ___m_Name_2)); }
	inline InternedString_tD1138602E8B7EA0F5B4851812B13C7E0551E25C8  get_m_Name_2() const { return ___m_Name_2; }
	inline InternedString_tD1138602E8B7EA0F5B4851812B13C7E0551E25C8 * get_address_of_m_Name_2() { return &___m_Name_2; }
	inline void set_m_Name_2(InternedString_tD1138602E8B7EA0F5B4851812B13C7E0551E25C8  value)
	{
		___m_Name_2 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_Name_2))->___m_StringOriginalCase_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_Name_2))->___m_StringLowerCase_1), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_m_Type_3() { return static_cast<int32_t>(offsetof(InputControlLayout_t012E8BC3C93CE8A2A35BFC6A70C52530FFB55917, ___m_Type_3)); }
	inline Type_t * get_m_Type_3() const { return ___m_Type_3; }
	inline Type_t ** get_address_of_m_Type_3() { return &___m_Type_3; }
	inline void set_m_Type_3(Type_t * value)
	{
		___m_Type_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Type_3), (void*)value);
	}

	inline static int32_t get_offset_of_m_Variants_4() { return static_cast<int32_t>(offsetof(InputControlLayout_t012E8BC3C93CE8A2A35BFC6A70C52530FFB55917, ___m_Variants_4)); }
	inline InternedString_tD1138602E8B7EA0F5B4851812B13C7E0551E25C8  get_m_Variants_4() const { return ___m_Variants_4; }
	inline InternedString_tD1138602E8B7EA0F5B4851812B13C7E0551E25C8 * get_address_of_m_Variants_4() { return &___m_Variants_4; }
	inline void set_m_Variants_4(InternedString_tD1138602E8B7EA0F5B4851812B13C7E0551E25C8  value)
	{
		___m_Variants_4 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_Variants_4))->___m_StringOriginalCase_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_Variants_4))->___m_StringLowerCase_1), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_m_StateFormat_5() { return static_cast<int32_t>(offsetof(InputControlLayout_t012E8BC3C93CE8A2A35BFC6A70C52530FFB55917, ___m_StateFormat_5)); }
	inline FourCC_tB18951639903964A6B5533C4BAFD8DA17AA8FD9D  get_m_StateFormat_5() const { return ___m_StateFormat_5; }
	inline FourCC_tB18951639903964A6B5533C4BAFD8DA17AA8FD9D * get_address_of_m_StateFormat_5() { return &___m_StateFormat_5; }
	inline void set_m_StateFormat_5(FourCC_tB18951639903964A6B5533C4BAFD8DA17AA8FD9D  value)
	{
		___m_StateFormat_5 = value;
	}

	inline static int32_t get_offset_of_m_StateSizeInBytes_6() { return static_cast<int32_t>(offsetof(InputControlLayout_t012E8BC3C93CE8A2A35BFC6A70C52530FFB55917, ___m_StateSizeInBytes_6)); }
	inline int32_t get_m_StateSizeInBytes_6() const { return ___m_StateSizeInBytes_6; }
	inline int32_t* get_address_of_m_StateSizeInBytes_6() { return &___m_StateSizeInBytes_6; }
	inline void set_m_StateSizeInBytes_6(int32_t value)
	{
		___m_StateSizeInBytes_6 = value;
	}

	inline static int32_t get_offset_of_m_UpdateBeforeRender_7() { return static_cast<int32_t>(offsetof(InputControlLayout_t012E8BC3C93CE8A2A35BFC6A70C52530FFB55917, ___m_UpdateBeforeRender_7)); }
	inline Nullable_1_t1D1CD146BFCBDC2E53E1F700889F8C5C21063EF3  get_m_UpdateBeforeRender_7() const { return ___m_UpdateBeforeRender_7; }
	inline Nullable_1_t1D1CD146BFCBDC2E53E1F700889F8C5C21063EF3 * get_address_of_m_UpdateBeforeRender_7() { return &___m_UpdateBeforeRender_7; }
	inline void set_m_UpdateBeforeRender_7(Nullable_1_t1D1CD146BFCBDC2E53E1F700889F8C5C21063EF3  value)
	{
		___m_UpdateBeforeRender_7 = value;
	}

	inline static int32_t get_offset_of_m_BaseLayouts_8() { return static_cast<int32_t>(offsetof(InputControlLayout_t012E8BC3C93CE8A2A35BFC6A70C52530FFB55917, ___m_BaseLayouts_8)); }
	inline InlinedArray_1_t7B73159E4B6A8AD12C99ED22A9138E32D7408FA0  get_m_BaseLayouts_8() const { return ___m_BaseLayouts_8; }
	inline InlinedArray_1_t7B73159E4B6A8AD12C99ED22A9138E32D7408FA0 * get_address_of_m_BaseLayouts_8() { return &___m_BaseLayouts_8; }
	inline void set_m_BaseLayouts_8(InlinedArray_1_t7B73159E4B6A8AD12C99ED22A9138E32D7408FA0  value)
	{
		___m_BaseLayouts_8 = value;
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_BaseLayouts_8))->___firstValue_1))->___m_StringOriginalCase_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_BaseLayouts_8))->___firstValue_1))->___m_StringLowerCase_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_BaseLayouts_8))->___additionalValues_2), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_m_AppliedOverrides_9() { return static_cast<int32_t>(offsetof(InputControlLayout_t012E8BC3C93CE8A2A35BFC6A70C52530FFB55917, ___m_AppliedOverrides_9)); }
	inline InlinedArray_1_t7B73159E4B6A8AD12C99ED22A9138E32D7408FA0  get_m_AppliedOverrides_9() const { return ___m_AppliedOverrides_9; }
	inline InlinedArray_1_t7B73159E4B6A8AD12C99ED22A9138E32D7408FA0 * get_address_of_m_AppliedOverrides_9() { return &___m_AppliedOverrides_9; }
	inline void set_m_AppliedOverrides_9(InlinedArray_1_t7B73159E4B6A8AD12C99ED22A9138E32D7408FA0  value)
	{
		___m_AppliedOverrides_9 = value;
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_AppliedOverrides_9))->___firstValue_1))->___m_StringOriginalCase_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_AppliedOverrides_9))->___firstValue_1))->___m_StringLowerCase_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_AppliedOverrides_9))->___additionalValues_2), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_m_CommonUsages_10() { return static_cast<int32_t>(offsetof(InputControlLayout_t012E8BC3C93CE8A2A35BFC6A70C52530FFB55917, ___m_CommonUsages_10)); }
	inline InternedStringU5BU5D_t1B3BD9ED90129E67B58E1681B1944E72F8E0E648* get_m_CommonUsages_10() const { return ___m_CommonUsages_10; }
	inline InternedStringU5BU5D_t1B3BD9ED90129E67B58E1681B1944E72F8E0E648** get_address_of_m_CommonUsages_10() { return &___m_CommonUsages_10; }
	inline void set_m_CommonUsages_10(InternedStringU5BU5D_t1B3BD9ED90129E67B58E1681B1944E72F8E0E648* value)
	{
		___m_CommonUsages_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_CommonUsages_10), (void*)value);
	}

	inline static int32_t get_offset_of_m_Controls_11() { return static_cast<int32_t>(offsetof(InputControlLayout_t012E8BC3C93CE8A2A35BFC6A70C52530FFB55917, ___m_Controls_11)); }
	inline ControlItemU5BU5D_t5AFF1520667DFF9AA06E17887A3D0B77BEB173BB* get_m_Controls_11() const { return ___m_Controls_11; }
	inline ControlItemU5BU5D_t5AFF1520667DFF9AA06E17887A3D0B77BEB173BB** get_address_of_m_Controls_11() { return &___m_Controls_11; }
	inline void set_m_Controls_11(ControlItemU5BU5D_t5AFF1520667DFF9AA06E17887A3D0B77BEB173BB* value)
	{
		___m_Controls_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Controls_11), (void*)value);
	}

	inline static int32_t get_offset_of_m_DisplayName_12() { return static_cast<int32_t>(offsetof(InputControlLayout_t012E8BC3C93CE8A2A35BFC6A70C52530FFB55917, ___m_DisplayName_12)); }
	inline String_t* get_m_DisplayName_12() const { return ___m_DisplayName_12; }
	inline String_t** get_address_of_m_DisplayName_12() { return &___m_DisplayName_12; }
	inline void set_m_DisplayName_12(String_t* value)
	{
		___m_DisplayName_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_DisplayName_12), (void*)value);
	}

	inline static int32_t get_offset_of_m_Description_13() { return static_cast<int32_t>(offsetof(InputControlLayout_t012E8BC3C93CE8A2A35BFC6A70C52530FFB55917, ___m_Description_13)); }
	inline String_t* get_m_Description_13() const { return ___m_Description_13; }
	inline String_t** get_address_of_m_Description_13() { return &___m_Description_13; }
	inline void set_m_Description_13(String_t* value)
	{
		___m_Description_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Description_13), (void*)value);
	}

	inline static int32_t get_offset_of_m_Flags_14() { return static_cast<int32_t>(offsetof(InputControlLayout_t012E8BC3C93CE8A2A35BFC6A70C52530FFB55917, ___m_Flags_14)); }
	inline int32_t get_m_Flags_14() const { return ___m_Flags_14; }
	inline int32_t* get_address_of_m_Flags_14() { return &___m_Flags_14; }
	inline void set_m_Flags_14(int32_t value)
	{
		___m_Flags_14 = value;
	}
};

struct InputControlLayout_t012E8BC3C93CE8A2A35BFC6A70C52530FFB55917_StaticFields
{
public:
	// UnityEngine.InputSystem.Utilities.InternedString UnityEngine.InputSystem.Layouts.InputControlLayout::s_DefaultVariant
	InternedString_tD1138602E8B7EA0F5B4851812B13C7E0551E25C8  ___s_DefaultVariant_0;
	// UnityEngine.InputSystem.Layouts.InputControlLayout/Collection UnityEngine.InputSystem.Layouts.InputControlLayout::s_Layouts
	Collection_tDBA0BC36ACE448001ABFFED32EF785467D714D7B  ___s_Layouts_15;
	// UnityEngine.InputSystem.Layouts.InputControlLayout/Cache UnityEngine.InputSystem.Layouts.InputControlLayout::s_CacheInstance
	Cache_t9F49740128E8F04886120C99F392DC7CEBC6AA67  ___s_CacheInstance_16;
	// System.Int32 UnityEngine.InputSystem.Layouts.InputControlLayout::s_CacheInstanceRef
	int32_t ___s_CacheInstanceRef_17;

public:
	inline static int32_t get_offset_of_s_DefaultVariant_0() { return static_cast<int32_t>(offsetof(InputControlLayout_t012E8BC3C93CE8A2A35BFC6A70C52530FFB55917_StaticFields, ___s_DefaultVariant_0)); }
	inline InternedString_tD1138602E8B7EA0F5B4851812B13C7E0551E25C8  get_s_DefaultVariant_0() const { return ___s_DefaultVariant_0; }
	inline InternedString_tD1138602E8B7EA0F5B4851812B13C7E0551E25C8 * get_address_of_s_DefaultVariant_0() { return &___s_DefaultVariant_0; }
	inline void set_s_DefaultVariant_0(InternedString_tD1138602E8B7EA0F5B4851812B13C7E0551E25C8  value)
	{
		___s_DefaultVariant_0 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___s_DefaultVariant_0))->___m_StringOriginalCase_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___s_DefaultVariant_0))->___m_StringLowerCase_1), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_s_Layouts_15() { return static_cast<int32_t>(offsetof(InputControlLayout_t012E8BC3C93CE8A2A35BFC6A70C52530FFB55917_StaticFields, ___s_Layouts_15)); }
	inline Collection_tDBA0BC36ACE448001ABFFED32EF785467D714D7B  get_s_Layouts_15() const { return ___s_Layouts_15; }
	inline Collection_tDBA0BC36ACE448001ABFFED32EF785467D714D7B * get_address_of_s_Layouts_15() { return &___s_Layouts_15; }
	inline void set_s_Layouts_15(Collection_tDBA0BC36ACE448001ABFFED32EF785467D714D7B  value)
	{
		___s_Layouts_15 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___s_Layouts_15))->___layoutTypes_1), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___s_Layouts_15))->___layoutStrings_2), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___s_Layouts_15))->___layoutBuilders_3), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___s_Layouts_15))->___baseLayoutTable_4), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___s_Layouts_15))->___layoutOverrides_5), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___s_Layouts_15))->___layoutOverrideNames_6), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___s_Layouts_15))->___layoutMatchers_7), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_s_CacheInstance_16() { return static_cast<int32_t>(offsetof(InputControlLayout_t012E8BC3C93CE8A2A35BFC6A70C52530FFB55917_StaticFields, ___s_CacheInstance_16)); }
	inline Cache_t9F49740128E8F04886120C99F392DC7CEBC6AA67  get_s_CacheInstance_16() const { return ___s_CacheInstance_16; }
	inline Cache_t9F49740128E8F04886120C99F392DC7CEBC6AA67 * get_address_of_s_CacheInstance_16() { return &___s_CacheInstance_16; }
	inline void set_s_CacheInstance_16(Cache_t9F49740128E8F04886120C99F392DC7CEBC6AA67  value)
	{
		___s_CacheInstance_16 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___s_CacheInstance_16))->___table_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_s_CacheInstanceRef_17() { return static_cast<int32_t>(offsetof(InputControlLayout_t012E8BC3C93CE8A2A35BFC6A70C52530FFB55917_StaticFields, ___s_CacheInstanceRef_17)); }
	inline int32_t get_s_CacheInstanceRef_17() const { return ___s_CacheInstanceRef_17; }
	inline int32_t* get_address_of_s_CacheInstanceRef_17() { return &___s_CacheInstanceRef_17; }
	inline void set_s_CacheInstanceRef_17(int32_t value)
	{
		___s_CacheInstanceRef_17 = value;
	}
};


// UnityEngine.InputSystem.LowLevel.InputUpdate
struct InputUpdate_t6B12FF38E9BE2CAE1B9775A2DC9C11C504CB5C88  : public RuntimeObject
{
public:

public:
};

struct InputUpdate_t6B12FF38E9BE2CAE1B9775A2DC9C11C504CB5C88_StaticFields
{
public:
	// UnityEngine.InputSystem.LowLevel.InputUpdateType UnityEngine.InputSystem.LowLevel.InputUpdate::s_LastUpdateType
	int32_t ___s_LastUpdateType_0;
	// System.UInt32 UnityEngine.InputSystem.LowLevel.InputUpdate::s_UpdateStepCount
	uint32_t ___s_UpdateStepCount_1;
	// System.UInt32 UnityEngine.InputSystem.LowLevel.InputUpdate::s_LastUpdateRetainedEventBytes
	uint32_t ___s_LastUpdateRetainedEventBytes_2;
	// System.UInt32 UnityEngine.InputSystem.LowLevel.InputUpdate::s_LastUpdateRetainedEventCount
	uint32_t ___s_LastUpdateRetainedEventCount_3;

public:
	inline static int32_t get_offset_of_s_LastUpdateType_0() { return static_cast<int32_t>(offsetof(InputUpdate_t6B12FF38E9BE2CAE1B9775A2DC9C11C504CB5C88_StaticFields, ___s_LastUpdateType_0)); }
	inline int32_t get_s_LastUpdateType_0() const { return ___s_LastUpdateType_0; }
	inline int32_t* get_address_of_s_LastUpdateType_0() { return &___s_LastUpdateType_0; }
	inline void set_s_LastUpdateType_0(int32_t value)
	{
		___s_LastUpdateType_0 = value;
	}

	inline static int32_t get_offset_of_s_UpdateStepCount_1() { return static_cast<int32_t>(offsetof(InputUpdate_t6B12FF38E9BE2CAE1B9775A2DC9C11C504CB5C88_StaticFields, ___s_UpdateStepCount_1)); }
	inline uint32_t get_s_UpdateStepCount_1() const { return ___s_UpdateStepCount_1; }
	inline uint32_t* get_address_of_s_UpdateStepCount_1() { return &___s_UpdateStepCount_1; }
	inline void set_s_UpdateStepCount_1(uint32_t value)
	{
		___s_UpdateStepCount_1 = value;
	}

	inline static int32_t get_offset_of_s_LastUpdateRetainedEventBytes_2() { return static_cast<int32_t>(offsetof(InputUpdate_t6B12FF38E9BE2CAE1B9775A2DC9C11C504CB5C88_StaticFields, ___s_LastUpdateRetainedEventBytes_2)); }
	inline uint32_t get_s_LastUpdateRetainedEventBytes_2() const { return ___s_LastUpdateRetainedEventBytes_2; }
	inline uint32_t* get_address_of_s_LastUpdateRetainedEventBytes_2() { return &___s_LastUpdateRetainedEventBytes_2; }
	inline void set_s_LastUpdateRetainedEventBytes_2(uint32_t value)
	{
		___s_LastUpdateRetainedEventBytes_2 = value;
	}

	inline static int32_t get_offset_of_s_LastUpdateRetainedEventCount_3() { return static_cast<int32_t>(offsetof(InputUpdate_t6B12FF38E9BE2CAE1B9775A2DC9C11C504CB5C88_StaticFields, ___s_LastUpdateRetainedEventCount_3)); }
	inline uint32_t get_s_LastUpdateRetainedEventCount_3() const { return ___s_LastUpdateRetainedEventCount_3; }
	inline uint32_t* get_address_of_s_LastUpdateRetainedEventCount_3() { return &___s_LastUpdateRetainedEventCount_3; }
	inline void set_s_LastUpdateRetainedEventCount_3(uint32_t value)
	{
		___s_LastUpdateRetainedEventCount_3 = value;
	}
};


// System.MulticastDelegate
struct MulticastDelegate_t  : public Delegate_t
{
public:
	// System.Delegate[] System.MulticastDelegate::delegates
	DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* ___delegates_11;

public:
	inline static int32_t get_offset_of_delegates_11() { return static_cast<int32_t>(offsetof(MulticastDelegate_t, ___delegates_11)); }
	inline DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* get_delegates_11() const { return ___delegates_11; }
	inline DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8** get_address_of_delegates_11() { return &___delegates_11; }
	inline void set_delegates_11(DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* value)
	{
		___delegates_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___delegates_11), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of System.MulticastDelegate
struct MulticastDelegate_t_marshaled_pinvoke : public Delegate_t_marshaled_pinvoke
{
	Delegate_t_marshaled_pinvoke** ___delegates_11;
};
// Native definition for COM marshalling of System.MulticastDelegate
struct MulticastDelegate_t_marshaled_com : public Delegate_t_marshaled_com
{
	Delegate_t_marshaled_com** ___delegates_11;
};

// UnityEngine.InputSystem.Utilities.PrimitiveValue
struct PrimitiveValue_tB787C76E9A37444599C45519DD7E4D3A1D4730C8 
{
public:
	union
	{
		#pragma pack(push, tp, 1)
		struct
		{
			// System.TypeCode UnityEngine.InputSystem.Utilities.PrimitiveValue::m_Type
			int32_t ___m_Type_0;
		};
		#pragma pack(pop, tp)
		struct
		{
			int32_t ___m_Type_0_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_BoolValue_1_OffsetPadding[4];
			// System.Boolean UnityEngine.InputSystem.Utilities.PrimitiveValue::m_BoolValue
			bool ___m_BoolValue_1;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_BoolValue_1_OffsetPadding_forAlignmentOnly[4];
			bool ___m_BoolValue_1_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_CharValue_2_OffsetPadding[4];
			// System.Char UnityEngine.InputSystem.Utilities.PrimitiveValue::m_CharValue
			Il2CppChar ___m_CharValue_2;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_CharValue_2_OffsetPadding_forAlignmentOnly[4];
			Il2CppChar ___m_CharValue_2_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_ByteValue_3_OffsetPadding[4];
			// System.Byte UnityEngine.InputSystem.Utilities.PrimitiveValue::m_ByteValue
			uint8_t ___m_ByteValue_3;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_ByteValue_3_OffsetPadding_forAlignmentOnly[4];
			uint8_t ___m_ByteValue_3_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_SByteValue_4_OffsetPadding[4];
			// System.SByte UnityEngine.InputSystem.Utilities.PrimitiveValue::m_SByteValue
			int8_t ___m_SByteValue_4;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_SByteValue_4_OffsetPadding_forAlignmentOnly[4];
			int8_t ___m_SByteValue_4_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_ShortValue_5_OffsetPadding[4];
			// System.Int16 UnityEngine.InputSystem.Utilities.PrimitiveValue::m_ShortValue
			int16_t ___m_ShortValue_5;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_ShortValue_5_OffsetPadding_forAlignmentOnly[4];
			int16_t ___m_ShortValue_5_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_UShortValue_6_OffsetPadding[4];
			// System.UInt16 UnityEngine.InputSystem.Utilities.PrimitiveValue::m_UShortValue
			uint16_t ___m_UShortValue_6;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_UShortValue_6_OffsetPadding_forAlignmentOnly[4];
			uint16_t ___m_UShortValue_6_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_IntValue_7_OffsetPadding[4];
			// System.Int32 UnityEngine.InputSystem.Utilities.PrimitiveValue::m_IntValue
			int32_t ___m_IntValue_7;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_IntValue_7_OffsetPadding_forAlignmentOnly[4];
			int32_t ___m_IntValue_7_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_UIntValue_8_OffsetPadding[4];
			// System.UInt32 UnityEngine.InputSystem.Utilities.PrimitiveValue::m_UIntValue
			uint32_t ___m_UIntValue_8;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_UIntValue_8_OffsetPadding_forAlignmentOnly[4];
			uint32_t ___m_UIntValue_8_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_LongValue_9_OffsetPadding[4];
			// System.Int64 UnityEngine.InputSystem.Utilities.PrimitiveValue::m_LongValue
			int64_t ___m_LongValue_9;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_LongValue_9_OffsetPadding_forAlignmentOnly[4];
			int64_t ___m_LongValue_9_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_ULongValue_10_OffsetPadding[4];
			// System.UInt64 UnityEngine.InputSystem.Utilities.PrimitiveValue::m_ULongValue
			uint64_t ___m_ULongValue_10;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_ULongValue_10_OffsetPadding_forAlignmentOnly[4];
			uint64_t ___m_ULongValue_10_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_FloatValue_11_OffsetPadding[4];
			// System.Single UnityEngine.InputSystem.Utilities.PrimitiveValue::m_FloatValue
			float ___m_FloatValue_11;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_FloatValue_11_OffsetPadding_forAlignmentOnly[4];
			float ___m_FloatValue_11_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_DoubleValue_12_OffsetPadding[4];
			// System.Double UnityEngine.InputSystem.Utilities.PrimitiveValue::m_DoubleValue
			double ___m_DoubleValue_12;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_DoubleValue_12_OffsetPadding_forAlignmentOnly[4];
			double ___m_DoubleValue_12_forAlignmentOnly;
		};
	};

public:
	inline static int32_t get_offset_of_m_Type_0() { return static_cast<int32_t>(offsetof(PrimitiveValue_tB787C76E9A37444599C45519DD7E4D3A1D4730C8, ___m_Type_0)); }
	inline int32_t get_m_Type_0() const { return ___m_Type_0; }
	inline int32_t* get_address_of_m_Type_0() { return &___m_Type_0; }
	inline void set_m_Type_0(int32_t value)
	{
		___m_Type_0 = value;
	}

	inline static int32_t get_offset_of_m_BoolValue_1() { return static_cast<int32_t>(offsetof(PrimitiveValue_tB787C76E9A37444599C45519DD7E4D3A1D4730C8, ___m_BoolValue_1)); }
	inline bool get_m_BoolValue_1() const { return ___m_BoolValue_1; }
	inline bool* get_address_of_m_BoolValue_1() { return &___m_BoolValue_1; }
	inline void set_m_BoolValue_1(bool value)
	{
		___m_BoolValue_1 = value;
	}

	inline static int32_t get_offset_of_m_CharValue_2() { return static_cast<int32_t>(offsetof(PrimitiveValue_tB787C76E9A37444599C45519DD7E4D3A1D4730C8, ___m_CharValue_2)); }
	inline Il2CppChar get_m_CharValue_2() const { return ___m_CharValue_2; }
	inline Il2CppChar* get_address_of_m_CharValue_2() { return &___m_CharValue_2; }
	inline void set_m_CharValue_2(Il2CppChar value)
	{
		___m_CharValue_2 = value;
	}

	inline static int32_t get_offset_of_m_ByteValue_3() { return static_cast<int32_t>(offsetof(PrimitiveValue_tB787C76E9A37444599C45519DD7E4D3A1D4730C8, ___m_ByteValue_3)); }
	inline uint8_t get_m_ByteValue_3() const { return ___m_ByteValue_3; }
	inline uint8_t* get_address_of_m_ByteValue_3() { return &___m_ByteValue_3; }
	inline void set_m_ByteValue_3(uint8_t value)
	{
		___m_ByteValue_3 = value;
	}

	inline static int32_t get_offset_of_m_SByteValue_4() { return static_cast<int32_t>(offsetof(PrimitiveValue_tB787C76E9A37444599C45519DD7E4D3A1D4730C8, ___m_SByteValue_4)); }
	inline int8_t get_m_SByteValue_4() const { return ___m_SByteValue_4; }
	inline int8_t* get_address_of_m_SByteValue_4() { return &___m_SByteValue_4; }
	inline void set_m_SByteValue_4(int8_t value)
	{
		___m_SByteValue_4 = value;
	}

	inline static int32_t get_offset_of_m_ShortValue_5() { return static_cast<int32_t>(offsetof(PrimitiveValue_tB787C76E9A37444599C45519DD7E4D3A1D4730C8, ___m_ShortValue_5)); }
	inline int16_t get_m_ShortValue_5() const { return ___m_ShortValue_5; }
	inline int16_t* get_address_of_m_ShortValue_5() { return &___m_ShortValue_5; }
	inline void set_m_ShortValue_5(int16_t value)
	{
		___m_ShortValue_5 = value;
	}

	inline static int32_t get_offset_of_m_UShortValue_6() { return static_cast<int32_t>(offsetof(PrimitiveValue_tB787C76E9A37444599C45519DD7E4D3A1D4730C8, ___m_UShortValue_6)); }
	inline uint16_t get_m_UShortValue_6() const { return ___m_UShortValue_6; }
	inline uint16_t* get_address_of_m_UShortValue_6() { return &___m_UShortValue_6; }
	inline void set_m_UShortValue_6(uint16_t value)
	{
		___m_UShortValue_6 = value;
	}

	inline static int32_t get_offset_of_m_IntValue_7() { return static_cast<int32_t>(offsetof(PrimitiveValue_tB787C76E9A37444599C45519DD7E4D3A1D4730C8, ___m_IntValue_7)); }
	inline int32_t get_m_IntValue_7() const { return ___m_IntValue_7; }
	inline int32_t* get_address_of_m_IntValue_7() { return &___m_IntValue_7; }
	inline void set_m_IntValue_7(int32_t value)
	{
		___m_IntValue_7 = value;
	}

	inline static int32_t get_offset_of_m_UIntValue_8() { return static_cast<int32_t>(offsetof(PrimitiveValue_tB787C76E9A37444599C45519DD7E4D3A1D4730C8, ___m_UIntValue_8)); }
	inline uint32_t get_m_UIntValue_8() const { return ___m_UIntValue_8; }
	inline uint32_t* get_address_of_m_UIntValue_8() { return &___m_UIntValue_8; }
	inline void set_m_UIntValue_8(uint32_t value)
	{
		___m_UIntValue_8 = value;
	}

	inline static int32_t get_offset_of_m_LongValue_9() { return static_cast<int32_t>(offsetof(PrimitiveValue_tB787C76E9A37444599C45519DD7E4D3A1D4730C8, ___m_LongValue_9)); }
	inline int64_t get_m_LongValue_9() const { return ___m_LongValue_9; }
	inline int64_t* get_address_of_m_LongValue_9() { return &___m_LongValue_9; }
	inline void set_m_LongValue_9(int64_t value)
	{
		___m_LongValue_9 = value;
	}

	inline static int32_t get_offset_of_m_ULongValue_10() { return static_cast<int32_t>(offsetof(PrimitiveValue_tB787C76E9A37444599C45519DD7E4D3A1D4730C8, ___m_ULongValue_10)); }
	inline uint64_t get_m_ULongValue_10() const { return ___m_ULongValue_10; }
	inline uint64_t* get_address_of_m_ULongValue_10() { return &___m_ULongValue_10; }
	inline void set_m_ULongValue_10(uint64_t value)
	{
		___m_ULongValue_10 = value;
	}

	inline static int32_t get_offset_of_m_FloatValue_11() { return static_cast<int32_t>(offsetof(PrimitiveValue_tB787C76E9A37444599C45519DD7E4D3A1D4730C8, ___m_FloatValue_11)); }
	inline float get_m_FloatValue_11() const { return ___m_FloatValue_11; }
	inline float* get_address_of_m_FloatValue_11() { return &___m_FloatValue_11; }
	inline void set_m_FloatValue_11(float value)
	{
		___m_FloatValue_11 = value;
	}

	inline static int32_t get_offset_of_m_DoubleValue_12() { return static_cast<int32_t>(offsetof(PrimitiveValue_tB787C76E9A37444599C45519DD7E4D3A1D4730C8, ___m_DoubleValue_12)); }
	inline double get_m_DoubleValue_12() const { return ___m_DoubleValue_12; }
	inline double* get_address_of_m_DoubleValue_12() { return &___m_DoubleValue_12; }
	inline void set_m_DoubleValue_12(double value)
	{
		___m_DoubleValue_12 = value;
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.InputSystem.Utilities.PrimitiveValue
struct PrimitiveValue_tB787C76E9A37444599C45519DD7E4D3A1D4730C8_marshaled_pinvoke
{
	union
	{
		#pragma pack(push, tp, 1)
		struct
		{
			int32_t ___m_Type_0;
		};
		#pragma pack(pop, tp)
		struct
		{
			int32_t ___m_Type_0_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_BoolValue_1_OffsetPadding[4];
			int32_t ___m_BoolValue_1;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_BoolValue_1_OffsetPadding_forAlignmentOnly[4];
			int32_t ___m_BoolValue_1_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_CharValue_2_OffsetPadding[4];
			uint8_t ___m_CharValue_2;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_CharValue_2_OffsetPadding_forAlignmentOnly[4];
			uint8_t ___m_CharValue_2_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_ByteValue_3_OffsetPadding[4];
			uint8_t ___m_ByteValue_3;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_ByteValue_3_OffsetPadding_forAlignmentOnly[4];
			uint8_t ___m_ByteValue_3_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_SByteValue_4_OffsetPadding[4];
			int8_t ___m_SByteValue_4;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_SByteValue_4_OffsetPadding_forAlignmentOnly[4];
			int8_t ___m_SByteValue_4_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_ShortValue_5_OffsetPadding[4];
			int16_t ___m_ShortValue_5;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_ShortValue_5_OffsetPadding_forAlignmentOnly[4];
			int16_t ___m_ShortValue_5_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_UShortValue_6_OffsetPadding[4];
			uint16_t ___m_UShortValue_6;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_UShortValue_6_OffsetPadding_forAlignmentOnly[4];
			uint16_t ___m_UShortValue_6_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_IntValue_7_OffsetPadding[4];
			int32_t ___m_IntValue_7;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_IntValue_7_OffsetPadding_forAlignmentOnly[4];
			int32_t ___m_IntValue_7_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_UIntValue_8_OffsetPadding[4];
			uint32_t ___m_UIntValue_8;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_UIntValue_8_OffsetPadding_forAlignmentOnly[4];
			uint32_t ___m_UIntValue_8_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_LongValue_9_OffsetPadding[4];
			int64_t ___m_LongValue_9;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_LongValue_9_OffsetPadding_forAlignmentOnly[4];
			int64_t ___m_LongValue_9_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_ULongValue_10_OffsetPadding[4];
			uint64_t ___m_ULongValue_10;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_ULongValue_10_OffsetPadding_forAlignmentOnly[4];
			uint64_t ___m_ULongValue_10_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_FloatValue_11_OffsetPadding[4];
			float ___m_FloatValue_11;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_FloatValue_11_OffsetPadding_forAlignmentOnly[4];
			float ___m_FloatValue_11_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_DoubleValue_12_OffsetPadding[4];
			double ___m_DoubleValue_12;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_DoubleValue_12_OffsetPadding_forAlignmentOnly[4];
			double ___m_DoubleValue_12_forAlignmentOnly;
		};
	};
};
// Native definition for COM marshalling of UnityEngine.InputSystem.Utilities.PrimitiveValue
struct PrimitiveValue_tB787C76E9A37444599C45519DD7E4D3A1D4730C8_marshaled_com
{
	union
	{
		#pragma pack(push, tp, 1)
		struct
		{
			int32_t ___m_Type_0;
		};
		#pragma pack(pop, tp)
		struct
		{
			int32_t ___m_Type_0_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_BoolValue_1_OffsetPadding[4];
			int32_t ___m_BoolValue_1;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_BoolValue_1_OffsetPadding_forAlignmentOnly[4];
			int32_t ___m_BoolValue_1_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_CharValue_2_OffsetPadding[4];
			uint8_t ___m_CharValue_2;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_CharValue_2_OffsetPadding_forAlignmentOnly[4];
			uint8_t ___m_CharValue_2_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_ByteValue_3_OffsetPadding[4];
			uint8_t ___m_ByteValue_3;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_ByteValue_3_OffsetPadding_forAlignmentOnly[4];
			uint8_t ___m_ByteValue_3_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_SByteValue_4_OffsetPadding[4];
			int8_t ___m_SByteValue_4;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_SByteValue_4_OffsetPadding_forAlignmentOnly[4];
			int8_t ___m_SByteValue_4_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_ShortValue_5_OffsetPadding[4];
			int16_t ___m_ShortValue_5;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_ShortValue_5_OffsetPadding_forAlignmentOnly[4];
			int16_t ___m_ShortValue_5_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_UShortValue_6_OffsetPadding[4];
			uint16_t ___m_UShortValue_6;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_UShortValue_6_OffsetPadding_forAlignmentOnly[4];
			uint16_t ___m_UShortValue_6_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_IntValue_7_OffsetPadding[4];
			int32_t ___m_IntValue_7;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_IntValue_7_OffsetPadding_forAlignmentOnly[4];
			int32_t ___m_IntValue_7_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_UIntValue_8_OffsetPadding[4];
			uint32_t ___m_UIntValue_8;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_UIntValue_8_OffsetPadding_forAlignmentOnly[4];
			uint32_t ___m_UIntValue_8_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_LongValue_9_OffsetPadding[4];
			int64_t ___m_LongValue_9;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_LongValue_9_OffsetPadding_forAlignmentOnly[4];
			int64_t ___m_LongValue_9_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_ULongValue_10_OffsetPadding[4];
			uint64_t ___m_ULongValue_10;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_ULongValue_10_OffsetPadding_forAlignmentOnly[4];
			uint64_t ___m_ULongValue_10_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_FloatValue_11_OffsetPadding[4];
			float ___m_FloatValue_11;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_FloatValue_11_OffsetPadding_forAlignmentOnly[4];
			float ___m_FloatValue_11_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_DoubleValue_12_OffsetPadding[4];
			double ___m_DoubleValue_12;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_DoubleValue_12_OffsetPadding_forAlignmentOnly[4];
			double ___m_DoubleValue_12_forAlignmentOnly;
		};
	};
};

// UnityEngine.ScriptableObject
struct ScriptableObject_t4361E08CEBF052C650D3666C7CEC37EB31DE116A  : public Object_tF2F3778131EFF286AF62B7B013A170F95A91571A
{
public:

public:
};

// Native definition for P/Invoke marshalling of UnityEngine.ScriptableObject
struct ScriptableObject_t4361E08CEBF052C650D3666C7CEC37EB31DE116A_marshaled_pinvoke : public Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_marshaled_pinvoke
{
};
// Native definition for COM marshalling of UnityEngine.ScriptableObject
struct ScriptableObject_t4361E08CEBF052C650D3666C7CEC37EB31DE116A_marshaled_com : public Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_marshaled_com
{
};

// System.SystemException
struct SystemException_tC551B4D6EE3772B5F32C71EE8C719F4B43ECCC62  : public Exception_t
{
public:

public:
};


// UnityEngine.Texture
struct Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE  : public Object_tF2F3778131EFF286AF62B7B013A170F95A91571A
{
public:

public:
};

struct Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE_StaticFields
{
public:
	// System.Int32 UnityEngine.Texture::GenerateAllMips
	int32_t ___GenerateAllMips_4;

public:
	inline static int32_t get_offset_of_GenerateAllMips_4() { return static_cast<int32_t>(offsetof(Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE_StaticFields, ___GenerateAllMips_4)); }
	inline int32_t get_GenerateAllMips_4() const { return ___GenerateAllMips_4; }
	inline int32_t* get_address_of_GenerateAllMips_4() { return &___GenerateAllMips_4; }
	inline void set_GenerateAllMips_4(int32_t value)
	{
		___GenerateAllMips_4 = value;
	}
};


// System.Type
struct Type_t  : public MemberInfo_t
{
public:
	// System.RuntimeTypeHandle System.Type::_impl
	RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  ____impl_9;

public:
	inline static int32_t get_offset_of__impl_9() { return static_cast<int32_t>(offsetof(Type_t, ____impl_9)); }
	inline RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  get__impl_9() const { return ____impl_9; }
	inline RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9 * get_address_of__impl_9() { return &____impl_9; }
	inline void set__impl_9(RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  value)
	{
		____impl_9 = value;
	}
};

struct Type_t_StaticFields
{
public:
	// System.Reflection.MemberFilter System.Type::FilterAttribute
	MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 * ___FilterAttribute_0;
	// System.Reflection.MemberFilter System.Type::FilterName
	MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 * ___FilterName_1;
	// System.Reflection.MemberFilter System.Type::FilterNameIgnoreCase
	MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 * ___FilterNameIgnoreCase_2;
	// System.Object System.Type::Missing
	RuntimeObject * ___Missing_3;
	// System.Char System.Type::Delimiter
	Il2CppChar ___Delimiter_4;
	// System.Type[] System.Type::EmptyTypes
	TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755* ___EmptyTypes_5;
	// System.Reflection.Binder System.Type::defaultBinder
	Binder_t2BEE27FD84737D1E79BC47FD67F6D3DD2F2DDA30 * ___defaultBinder_6;

public:
	inline static int32_t get_offset_of_FilterAttribute_0() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___FilterAttribute_0)); }
	inline MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 * get_FilterAttribute_0() const { return ___FilterAttribute_0; }
	inline MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 ** get_address_of_FilterAttribute_0() { return &___FilterAttribute_0; }
	inline void set_FilterAttribute_0(MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 * value)
	{
		___FilterAttribute_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___FilterAttribute_0), (void*)value);
	}

	inline static int32_t get_offset_of_FilterName_1() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___FilterName_1)); }
	inline MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 * get_FilterName_1() const { return ___FilterName_1; }
	inline MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 ** get_address_of_FilterName_1() { return &___FilterName_1; }
	inline void set_FilterName_1(MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 * value)
	{
		___FilterName_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___FilterName_1), (void*)value);
	}

	inline static int32_t get_offset_of_FilterNameIgnoreCase_2() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___FilterNameIgnoreCase_2)); }
	inline MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 * get_FilterNameIgnoreCase_2() const { return ___FilterNameIgnoreCase_2; }
	inline MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 ** get_address_of_FilterNameIgnoreCase_2() { return &___FilterNameIgnoreCase_2; }
	inline void set_FilterNameIgnoreCase_2(MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 * value)
	{
		___FilterNameIgnoreCase_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___FilterNameIgnoreCase_2), (void*)value);
	}

	inline static int32_t get_offset_of_Missing_3() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___Missing_3)); }
	inline RuntimeObject * get_Missing_3() const { return ___Missing_3; }
	inline RuntimeObject ** get_address_of_Missing_3() { return &___Missing_3; }
	inline void set_Missing_3(RuntimeObject * value)
	{
		___Missing_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Missing_3), (void*)value);
	}

	inline static int32_t get_offset_of_Delimiter_4() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___Delimiter_4)); }
	inline Il2CppChar get_Delimiter_4() const { return ___Delimiter_4; }
	inline Il2CppChar* get_address_of_Delimiter_4() { return &___Delimiter_4; }
	inline void set_Delimiter_4(Il2CppChar value)
	{
		___Delimiter_4 = value;
	}

	inline static int32_t get_offset_of_EmptyTypes_5() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___EmptyTypes_5)); }
	inline TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755* get_EmptyTypes_5() const { return ___EmptyTypes_5; }
	inline TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755** get_address_of_EmptyTypes_5() { return &___EmptyTypes_5; }
	inline void set_EmptyTypes_5(TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755* value)
	{
		___EmptyTypes_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___EmptyTypes_5), (void*)value);
	}

	inline static int32_t get_offset_of_defaultBinder_6() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___defaultBinder_6)); }
	inline Binder_t2BEE27FD84737D1E79BC47FD67F6D3DD2F2DDA30 * get_defaultBinder_6() const { return ___defaultBinder_6; }
	inline Binder_t2BEE27FD84737D1E79BC47FD67F6D3DD2F2DDA30 ** get_address_of_defaultBinder_6() { return &___defaultBinder_6; }
	inline void set_defaultBinder_6(Binder_t2BEE27FD84737D1E79BC47FD67F6D3DD2F2DDA30 * value)
	{
		___defaultBinder_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___defaultBinder_6), (void*)value);
	}
};


// UnityEngine.InputSystem.Samples.VisualizationHelpers/TimelineVisualizer
struct TimelineVisualizer_tDCF8FE655A93D562471977C145A8B989803EA315  : public Visualizer_t48757514E9C44C7B20B531BB6D2713A570AA8B74
{
public:
	// System.Boolean UnityEngine.InputSystem.Samples.VisualizationHelpers/TimelineVisualizer::<showLegend>k__BackingField
	bool ___U3CshowLegendU3Ek__BackingField_0;
	// System.Boolean UnityEngine.InputSystem.Samples.VisualizationHelpers/TimelineVisualizer::<showLimits>k__BackingField
	bool ___U3CshowLimitsU3Ek__BackingField_1;
	// UnityEngine.InputSystem.Samples.VisualizationHelpers/TimelineVisualizer/TimeUnit UnityEngine.InputSystem.Samples.VisualizationHelpers/TimelineVisualizer::<timeUnit>k__BackingField
	int32_t ___U3CtimeUnitU3Ek__BackingField_2;
	// UnityEngine.GUIContent UnityEngine.InputSystem.Samples.VisualizationHelpers/TimelineVisualizer::<valueUnit>k__BackingField
	GUIContent_t39256993BF4A33F76E073488D6A2F13D678DF60E * ___U3CvalueUnitU3Ek__BackingField_3;
	// System.Int32 UnityEngine.InputSystem.Samples.VisualizationHelpers/TimelineVisualizer::<historyDepth>k__BackingField
	int32_t ___U3ChistoryDepthU3Ek__BackingField_4;
	// System.Single UnityEngine.InputSystem.Samples.VisualizationHelpers/TimelineVisualizer::m_TotalTimeUnitsShown
	float ___m_TotalTimeUnitsShown_5;
	// UnityEngine.Vector2 UnityEngine.InputSystem.Samples.VisualizationHelpers/TimelineVisualizer::m_LimitsY
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___m_LimitsY_6;
	// UnityEngine.GUIContent UnityEngine.InputSystem.Samples.VisualizationHelpers/TimelineVisualizer::m_LimitsYMin
	GUIContent_t39256993BF4A33F76E073488D6A2F13D678DF60E * ___m_LimitsYMin_7;
	// UnityEngine.GUIContent UnityEngine.InputSystem.Samples.VisualizationHelpers/TimelineVisualizer::m_LimitsYMax
	GUIContent_t39256993BF4A33F76E073488D6A2F13D678DF60E * ___m_LimitsYMax_8;
	// UnityEngine.InputSystem.Samples.VisualizationHelpers/TimelineVisualizer/Timeline[] UnityEngine.InputSystem.Samples.VisualizationHelpers/TimelineVisualizer::m_Timelines
	TimelineU5BU5D_tC4060193BF7CE25CDC70D417EEDC7175EA74B44F* ___m_Timelines_9;

public:
	inline static int32_t get_offset_of_U3CshowLegendU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(TimelineVisualizer_tDCF8FE655A93D562471977C145A8B989803EA315, ___U3CshowLegendU3Ek__BackingField_0)); }
	inline bool get_U3CshowLegendU3Ek__BackingField_0() const { return ___U3CshowLegendU3Ek__BackingField_0; }
	inline bool* get_address_of_U3CshowLegendU3Ek__BackingField_0() { return &___U3CshowLegendU3Ek__BackingField_0; }
	inline void set_U3CshowLegendU3Ek__BackingField_0(bool value)
	{
		___U3CshowLegendU3Ek__BackingField_0 = value;
	}

	inline static int32_t get_offset_of_U3CshowLimitsU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(TimelineVisualizer_tDCF8FE655A93D562471977C145A8B989803EA315, ___U3CshowLimitsU3Ek__BackingField_1)); }
	inline bool get_U3CshowLimitsU3Ek__BackingField_1() const { return ___U3CshowLimitsU3Ek__BackingField_1; }
	inline bool* get_address_of_U3CshowLimitsU3Ek__BackingField_1() { return &___U3CshowLimitsU3Ek__BackingField_1; }
	inline void set_U3CshowLimitsU3Ek__BackingField_1(bool value)
	{
		___U3CshowLimitsU3Ek__BackingField_1 = value;
	}

	inline static int32_t get_offset_of_U3CtimeUnitU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(TimelineVisualizer_tDCF8FE655A93D562471977C145A8B989803EA315, ___U3CtimeUnitU3Ek__BackingField_2)); }
	inline int32_t get_U3CtimeUnitU3Ek__BackingField_2() const { return ___U3CtimeUnitU3Ek__BackingField_2; }
	inline int32_t* get_address_of_U3CtimeUnitU3Ek__BackingField_2() { return &___U3CtimeUnitU3Ek__BackingField_2; }
	inline void set_U3CtimeUnitU3Ek__BackingField_2(int32_t value)
	{
		___U3CtimeUnitU3Ek__BackingField_2 = value;
	}

	inline static int32_t get_offset_of_U3CvalueUnitU3Ek__BackingField_3() { return static_cast<int32_t>(offsetof(TimelineVisualizer_tDCF8FE655A93D562471977C145A8B989803EA315, ___U3CvalueUnitU3Ek__BackingField_3)); }
	inline GUIContent_t39256993BF4A33F76E073488D6A2F13D678DF60E * get_U3CvalueUnitU3Ek__BackingField_3() const { return ___U3CvalueUnitU3Ek__BackingField_3; }
	inline GUIContent_t39256993BF4A33F76E073488D6A2F13D678DF60E ** get_address_of_U3CvalueUnitU3Ek__BackingField_3() { return &___U3CvalueUnitU3Ek__BackingField_3; }
	inline void set_U3CvalueUnitU3Ek__BackingField_3(GUIContent_t39256993BF4A33F76E073488D6A2F13D678DF60E * value)
	{
		___U3CvalueUnitU3Ek__BackingField_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CvalueUnitU3Ek__BackingField_3), (void*)value);
	}

	inline static int32_t get_offset_of_U3ChistoryDepthU3Ek__BackingField_4() { return static_cast<int32_t>(offsetof(TimelineVisualizer_tDCF8FE655A93D562471977C145A8B989803EA315, ___U3ChistoryDepthU3Ek__BackingField_4)); }
	inline int32_t get_U3ChistoryDepthU3Ek__BackingField_4() const { return ___U3ChistoryDepthU3Ek__BackingField_4; }
	inline int32_t* get_address_of_U3ChistoryDepthU3Ek__BackingField_4() { return &___U3ChistoryDepthU3Ek__BackingField_4; }
	inline void set_U3ChistoryDepthU3Ek__BackingField_4(int32_t value)
	{
		___U3ChistoryDepthU3Ek__BackingField_4 = value;
	}

	inline static int32_t get_offset_of_m_TotalTimeUnitsShown_5() { return static_cast<int32_t>(offsetof(TimelineVisualizer_tDCF8FE655A93D562471977C145A8B989803EA315, ___m_TotalTimeUnitsShown_5)); }
	inline float get_m_TotalTimeUnitsShown_5() const { return ___m_TotalTimeUnitsShown_5; }
	inline float* get_address_of_m_TotalTimeUnitsShown_5() { return &___m_TotalTimeUnitsShown_5; }
	inline void set_m_TotalTimeUnitsShown_5(float value)
	{
		___m_TotalTimeUnitsShown_5 = value;
	}

	inline static int32_t get_offset_of_m_LimitsY_6() { return static_cast<int32_t>(offsetof(TimelineVisualizer_tDCF8FE655A93D562471977C145A8B989803EA315, ___m_LimitsY_6)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_m_LimitsY_6() const { return ___m_LimitsY_6; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_m_LimitsY_6() { return &___m_LimitsY_6; }
	inline void set_m_LimitsY_6(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___m_LimitsY_6 = value;
	}

	inline static int32_t get_offset_of_m_LimitsYMin_7() { return static_cast<int32_t>(offsetof(TimelineVisualizer_tDCF8FE655A93D562471977C145A8B989803EA315, ___m_LimitsYMin_7)); }
	inline GUIContent_t39256993BF4A33F76E073488D6A2F13D678DF60E * get_m_LimitsYMin_7() const { return ___m_LimitsYMin_7; }
	inline GUIContent_t39256993BF4A33F76E073488D6A2F13D678DF60E ** get_address_of_m_LimitsYMin_7() { return &___m_LimitsYMin_7; }
	inline void set_m_LimitsYMin_7(GUIContent_t39256993BF4A33F76E073488D6A2F13D678DF60E * value)
	{
		___m_LimitsYMin_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_LimitsYMin_7), (void*)value);
	}

	inline static int32_t get_offset_of_m_LimitsYMax_8() { return static_cast<int32_t>(offsetof(TimelineVisualizer_tDCF8FE655A93D562471977C145A8B989803EA315, ___m_LimitsYMax_8)); }
	inline GUIContent_t39256993BF4A33F76E073488D6A2F13D678DF60E * get_m_LimitsYMax_8() const { return ___m_LimitsYMax_8; }
	inline GUIContent_t39256993BF4A33F76E073488D6A2F13D678DF60E ** get_address_of_m_LimitsYMax_8() { return &___m_LimitsYMax_8; }
	inline void set_m_LimitsYMax_8(GUIContent_t39256993BF4A33F76E073488D6A2F13D678DF60E * value)
	{
		___m_LimitsYMax_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_LimitsYMax_8), (void*)value);
	}

	inline static int32_t get_offset_of_m_Timelines_9() { return static_cast<int32_t>(offsetof(TimelineVisualizer_tDCF8FE655A93D562471977C145A8B989803EA315, ___m_Timelines_9)); }
	inline TimelineU5BU5D_tC4060193BF7CE25CDC70D417EEDC7175EA74B44F* get_m_Timelines_9() const { return ___m_Timelines_9; }
	inline TimelineU5BU5D_tC4060193BF7CE25CDC70D417EEDC7175EA74B44F** get_address_of_m_Timelines_9() { return &___m_Timelines_9; }
	inline void set_m_Timelines_9(TimelineU5BU5D_tC4060193BF7CE25CDC70D417EEDC7175EA74B44F* value)
	{
		___m_Timelines_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Timelines_9), (void*)value);
	}
};


// UnityEngine.InputSystem.Samples.VisualizationHelpers/Vector2Visualizer
struct Vector2Visualizer_t4F4D343145C411ED0B1D42FF5AEF4E5303BA9EFC  : public ValueVisualizer_1_t80E00BEE21AB8F001F08BF2B39E8894884283EDE
{
public:
	// UnityEngine.Vector2[] UnityEngine.InputSystem.Samples.VisualizationHelpers/Vector2Visualizer::maximums
	Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* ___maximums_2;
	// UnityEngine.Vector2 UnityEngine.InputSystem.Samples.VisualizationHelpers/Vector2Visualizer::limits
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___limits_3;
	// UnityEngine.GUIContent UnityEngine.InputSystem.Samples.VisualizationHelpers/Vector2Visualizer::limitsXText
	GUIContent_t39256993BF4A33F76E073488D6A2F13D678DF60E * ___limitsXText_4;
	// UnityEngine.GUIContent UnityEngine.InputSystem.Samples.VisualizationHelpers/Vector2Visualizer::limitsYText
	GUIContent_t39256993BF4A33F76E073488D6A2F13D678DF60E * ___limitsYText_5;

public:
	inline static int32_t get_offset_of_maximums_2() { return static_cast<int32_t>(offsetof(Vector2Visualizer_t4F4D343145C411ED0B1D42FF5AEF4E5303BA9EFC, ___maximums_2)); }
	inline Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* get_maximums_2() const { return ___maximums_2; }
	inline Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA** get_address_of_maximums_2() { return &___maximums_2; }
	inline void set_maximums_2(Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* value)
	{
		___maximums_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___maximums_2), (void*)value);
	}

	inline static int32_t get_offset_of_limits_3() { return static_cast<int32_t>(offsetof(Vector2Visualizer_t4F4D343145C411ED0B1D42FF5AEF4E5303BA9EFC, ___limits_3)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_limits_3() const { return ___limits_3; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_limits_3() { return &___limits_3; }
	inline void set_limits_3(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___limits_3 = value;
	}

	inline static int32_t get_offset_of_limitsXText_4() { return static_cast<int32_t>(offsetof(Vector2Visualizer_t4F4D343145C411ED0B1D42FF5AEF4E5303BA9EFC, ___limitsXText_4)); }
	inline GUIContent_t39256993BF4A33F76E073488D6A2F13D678DF60E * get_limitsXText_4() const { return ___limitsXText_4; }
	inline GUIContent_t39256993BF4A33F76E073488D6A2F13D678DF60E ** get_address_of_limitsXText_4() { return &___limitsXText_4; }
	inline void set_limitsXText_4(GUIContent_t39256993BF4A33F76E073488D6A2F13D678DF60E * value)
	{
		___limitsXText_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___limitsXText_4), (void*)value);
	}

	inline static int32_t get_offset_of_limitsYText_5() { return static_cast<int32_t>(offsetof(Vector2Visualizer_t4F4D343145C411ED0B1D42FF5AEF4E5303BA9EFC, ___limitsYText_5)); }
	inline GUIContent_t39256993BF4A33F76E073488D6A2F13D678DF60E * get_limitsYText_5() const { return ___limitsYText_5; }
	inline GUIContent_t39256993BF4A33F76E073488D6A2F13D678DF60E ** get_address_of_limitsYText_5() { return &___limitsYText_5; }
	inline void set_limitsYText_5(GUIContent_t39256993BF4A33F76E073488D6A2F13D678DF60E * value)
	{
		___limitsYText_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___limitsYText_5), (void*)value);
	}
};


// System.Action`1<UnityEngine.InputSystem.InputAction/CallbackContext>
struct Action_1_t7A6E0E94B21008B707D8BEA0DA19B65A96D58416  : public MulticastDelegate_t
{
public:

public:
};


// System.Action`2<UnityEngine.InputSystem.InputDevice,UnityEngine.InputSystem.InputDeviceChange>
struct Action_2_tCA9E945868CD5BF442EF675FE455A9E807CED9D1  : public MulticastDelegate_t
{
public:

public:
};


// System.Action`2<UnityEngine.InputSystem.LowLevel.InputEventPtr,UnityEngine.InputSystem.InputDevice>
struct Action_2_t83E2B2D05A16B14F487969D4D187AEC66413E199  : public MulticastDelegate_t
{
public:

public:
};


// System.Action`2<System.Object,UnityEngine.InputSystem.InputActionChange>
struct Action_2_tACB2F8D6B2F70F78DC65A6BC64A3108B0B1AC539  : public MulticastDelegate_t
{
public:

public:
};


// UnityEngine.InputSystem.InputControlList`1<UnityEngine.InputSystem.InputControl>
struct InputControlList_1_tC251485A8EBE20F32C1828D6F68B450DAB732E96 
{
public:
	// System.Int32 UnityEngine.InputSystem.InputControlList`1::m_Count
	int32_t ___m_Count_0;
	// Unity.Collections.NativeArray`1<System.UInt64> UnityEngine.InputSystem.InputControlList`1::m_Indices
	NativeArray_1_t9D118727A643E61710D0A4DF5B0C8CD1A918A40B  ___m_Indices_1;
	// Unity.Collections.Allocator UnityEngine.InputSystem.InputControlList`1::m_Allocator
	int32_t ___m_Allocator_2;

public:
	inline static int32_t get_offset_of_m_Count_0() { return static_cast<int32_t>(offsetof(InputControlList_1_tC251485A8EBE20F32C1828D6F68B450DAB732E96, ___m_Count_0)); }
	inline int32_t get_m_Count_0() const { return ___m_Count_0; }
	inline int32_t* get_address_of_m_Count_0() { return &___m_Count_0; }
	inline void set_m_Count_0(int32_t value)
	{
		___m_Count_0 = value;
	}

	inline static int32_t get_offset_of_m_Indices_1() { return static_cast<int32_t>(offsetof(InputControlList_1_tC251485A8EBE20F32C1828D6F68B450DAB732E96, ___m_Indices_1)); }
	inline NativeArray_1_t9D118727A643E61710D0A4DF5B0C8CD1A918A40B  get_m_Indices_1() const { return ___m_Indices_1; }
	inline NativeArray_1_t9D118727A643E61710D0A4DF5B0C8CD1A918A40B * get_address_of_m_Indices_1() { return &___m_Indices_1; }
	inline void set_m_Indices_1(NativeArray_1_t9D118727A643E61710D0A4DF5B0C8CD1A918A40B  value)
	{
		___m_Indices_1 = value;
	}

	inline static int32_t get_offset_of_m_Allocator_2() { return static_cast<int32_t>(offsetof(InputControlList_1_tC251485A8EBE20F32C1828D6F68B450DAB732E96, ___m_Allocator_2)); }
	inline int32_t get_m_Allocator_2() const { return ___m_Allocator_2; }
	inline int32_t* get_address_of_m_Allocator_2() { return &___m_Allocator_2; }
	inline void set_m_Allocator_2(int32_t value)
	{
		___m_Allocator_2 = value;
	}
};


// UnityEngine.InputSystem.InputControlList`1<System.Object>
struct InputControlList_1_t0C5A7D203415CFD1DE620B841FB9904AE4DA28CA 
{
public:
	// System.Int32 UnityEngine.InputSystem.InputControlList`1::m_Count
	int32_t ___m_Count_0;
	// Unity.Collections.NativeArray`1<System.UInt64> UnityEngine.InputSystem.InputControlList`1::m_Indices
	NativeArray_1_t9D118727A643E61710D0A4DF5B0C8CD1A918A40B  ___m_Indices_1;
	// Unity.Collections.Allocator UnityEngine.InputSystem.InputControlList`1::m_Allocator
	int32_t ___m_Allocator_2;

public:
	inline static int32_t get_offset_of_m_Count_0() { return static_cast<int32_t>(offsetof(InputControlList_1_t0C5A7D203415CFD1DE620B841FB9904AE4DA28CA, ___m_Count_0)); }
	inline int32_t get_m_Count_0() const { return ___m_Count_0; }
	inline int32_t* get_address_of_m_Count_0() { return &___m_Count_0; }
	inline void set_m_Count_0(int32_t value)
	{
		___m_Count_0 = value;
	}

	inline static int32_t get_offset_of_m_Indices_1() { return static_cast<int32_t>(offsetof(InputControlList_1_t0C5A7D203415CFD1DE620B841FB9904AE4DA28CA, ___m_Indices_1)); }
	inline NativeArray_1_t9D118727A643E61710D0A4DF5B0C8CD1A918A40B  get_m_Indices_1() const { return ___m_Indices_1; }
	inline NativeArray_1_t9D118727A643E61710D0A4DF5B0C8CD1A918A40B * get_address_of_m_Indices_1() { return &___m_Indices_1; }
	inline void set_m_Indices_1(NativeArray_1_t9D118727A643E61710D0A4DF5B0C8CD1A918A40B  value)
	{
		___m_Indices_1 = value;
	}

	inline static int32_t get_offset_of_m_Allocator_2() { return static_cast<int32_t>(offsetof(InputControlList_1_t0C5A7D203415CFD1DE620B841FB9904AE4DA28CA, ___m_Allocator_2)); }
	inline int32_t get_m_Allocator_2() const { return ___m_Allocator_2; }
	inline int32_t* get_address_of_m_Allocator_2() { return &___m_Allocator_2; }
	inline void set_m_Allocator_2(int32_t value)
	{
		___m_Allocator_2 = value;
	}
};


// System.Nullable`1<UnityEngine.InputSystem.InputBinding>
struct Nullable_1_tAF2F42FC2F7DC5A356BAC77371758E4D7339F104 
{
public:
	// T System.Nullable`1::value
	InputBinding_t18B68FF9E7C08763BFC653E20E79B63389CF80CD  ___value_0;
	// System.Boolean System.Nullable`1::has_value
	bool ___has_value_1;

public:
	inline static int32_t get_offset_of_value_0() { return static_cast<int32_t>(offsetof(Nullable_1_tAF2F42FC2F7DC5A356BAC77371758E4D7339F104, ___value_0)); }
	inline InputBinding_t18B68FF9E7C08763BFC653E20E79B63389CF80CD  get_value_0() const { return ___value_0; }
	inline InputBinding_t18B68FF9E7C08763BFC653E20E79B63389CF80CD * get_address_of_value_0() { return &___value_0; }
	inline void set_value_0(InputBinding_t18B68FF9E7C08763BFC653E20E79B63389CF80CD  value)
	{
		___value_0 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___value_0))->___m_Name_2), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___value_0))->___m_Id_3), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___value_0))->___m_Path_4), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___value_0))->___m_Interactions_5), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___value_0))->___m_Processors_6), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___value_0))->___m_Groups_7), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___value_0))->___m_Action_8), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___value_0))->___m_OverridePath_10), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___value_0))->___m_OverrideInteractions_11), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___value_0))->___m_OverrideProcessors_12), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_has_value_1() { return static_cast<int32_t>(offsetof(Nullable_1_tAF2F42FC2F7DC5A356BAC77371758E4D7339F104, ___has_value_1)); }
	inline bool get_has_value_1() const { return ___has_value_1; }
	inline bool* get_address_of_has_value_1() { return &___has_value_1; }
	inline void set_has_value_1(bool value)
	{
		___has_value_1 = value;
	}
};


// UnityEngine.Behaviour
struct Behaviour_t1A3DDDCF73B4627928FBFE02ED52B7251777DBD9  : public Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684
{
public:

public:
};


// UnityEngine.InputSystem.InputActionReference
struct InputActionReference_tB2E9E368D60A4C8E066C7CE0EE2A80C62320C28E  : public ScriptableObject_t4361E08CEBF052C650D3666C7CEC37EB31DE116A
{
public:
	// UnityEngine.InputSystem.InputActionAsset UnityEngine.InputSystem.InputActionReference::m_Asset
	InputActionAsset_tB1114F77EFFAE61A28A8A559662A6FCCF444F70E * ___m_Asset_4;
	// System.String UnityEngine.InputSystem.InputActionReference::m_ActionId
	String_t* ___m_ActionId_5;
	// UnityEngine.InputSystem.InputAction UnityEngine.InputSystem.InputActionReference::m_Action
	InputAction_tF0C77AF72E0C19608B020E77A2C36C04E9DCBE48 * ___m_Action_6;

public:
	inline static int32_t get_offset_of_m_Asset_4() { return static_cast<int32_t>(offsetof(InputActionReference_tB2E9E368D60A4C8E066C7CE0EE2A80C62320C28E, ___m_Asset_4)); }
	inline InputActionAsset_tB1114F77EFFAE61A28A8A559662A6FCCF444F70E * get_m_Asset_4() const { return ___m_Asset_4; }
	inline InputActionAsset_tB1114F77EFFAE61A28A8A559662A6FCCF444F70E ** get_address_of_m_Asset_4() { return &___m_Asset_4; }
	inline void set_m_Asset_4(InputActionAsset_tB1114F77EFFAE61A28A8A559662A6FCCF444F70E * value)
	{
		___m_Asset_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Asset_4), (void*)value);
	}

	inline static int32_t get_offset_of_m_ActionId_5() { return static_cast<int32_t>(offsetof(InputActionReference_tB2E9E368D60A4C8E066C7CE0EE2A80C62320C28E, ___m_ActionId_5)); }
	inline String_t* get_m_ActionId_5() const { return ___m_ActionId_5; }
	inline String_t** get_address_of_m_ActionId_5() { return &___m_ActionId_5; }
	inline void set_m_ActionId_5(String_t* value)
	{
		___m_ActionId_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_ActionId_5), (void*)value);
	}

	inline static int32_t get_offset_of_m_Action_6() { return static_cast<int32_t>(offsetof(InputActionReference_tB2E9E368D60A4C8E066C7CE0EE2A80C62320C28E, ___m_Action_6)); }
	inline InputAction_tF0C77AF72E0C19608B020E77A2C36C04E9DCBE48 * get_m_Action_6() const { return ___m_Action_6; }
	inline InputAction_tF0C77AF72E0C19608B020E77A2C36C04E9DCBE48 ** get_address_of_m_Action_6() { return &___m_Action_6; }
	inline void set_m_Action_6(InputAction_tF0C77AF72E0C19608B020E77A2C36C04E9DCBE48 * value)
	{
		___m_Action_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Action_6), (void*)value);
	}
};


// UnityEngine.InputSystem.InputControl
struct InputControl_t3CDD1115017147EEC9D825834637D7700669C006  : public RuntimeObject
{
public:
	// UnityEngine.InputSystem.LowLevel.InputStateBlock UnityEngine.InputSystem.InputControl::m_StateBlock
	InputStateBlock_tD9C8DE6181F5D1871DA69E53EB426B9303915291  ___m_StateBlock_0;
	// UnityEngine.InputSystem.Utilities.InternedString UnityEngine.InputSystem.InputControl::m_Name
	InternedString_tD1138602E8B7EA0F5B4851812B13C7E0551E25C8  ___m_Name_1;
	// System.String UnityEngine.InputSystem.InputControl::m_Path
	String_t* ___m_Path_2;
	// System.String UnityEngine.InputSystem.InputControl::m_DisplayName
	String_t* ___m_DisplayName_3;
	// System.String UnityEngine.InputSystem.InputControl::m_DisplayNameFromLayout
	String_t* ___m_DisplayNameFromLayout_4;
	// System.String UnityEngine.InputSystem.InputControl::m_ShortDisplayName
	String_t* ___m_ShortDisplayName_5;
	// System.String UnityEngine.InputSystem.InputControl::m_ShortDisplayNameFromLayout
	String_t* ___m_ShortDisplayNameFromLayout_6;
	// UnityEngine.InputSystem.Utilities.InternedString UnityEngine.InputSystem.InputControl::m_Layout
	InternedString_tD1138602E8B7EA0F5B4851812B13C7E0551E25C8  ___m_Layout_7;
	// UnityEngine.InputSystem.Utilities.InternedString UnityEngine.InputSystem.InputControl::m_Variants
	InternedString_tD1138602E8B7EA0F5B4851812B13C7E0551E25C8  ___m_Variants_8;
	// UnityEngine.InputSystem.InputDevice UnityEngine.InputSystem.InputControl::m_Device
	InputDevice_t9E276EAE78C382539051998DEA1CD0ECF2E91323 * ___m_Device_9;
	// UnityEngine.InputSystem.InputControl UnityEngine.InputSystem.InputControl::m_Parent
	InputControl_t3CDD1115017147EEC9D825834637D7700669C006 * ___m_Parent_10;
	// System.Int32 UnityEngine.InputSystem.InputControl::m_UsageCount
	int32_t ___m_UsageCount_11;
	// System.Int32 UnityEngine.InputSystem.InputControl::m_UsageStartIndex
	int32_t ___m_UsageStartIndex_12;
	// System.Int32 UnityEngine.InputSystem.InputControl::m_AliasCount
	int32_t ___m_AliasCount_13;
	// System.Int32 UnityEngine.InputSystem.InputControl::m_AliasStartIndex
	int32_t ___m_AliasStartIndex_14;
	// System.Int32 UnityEngine.InputSystem.InputControl::m_ChildCount
	int32_t ___m_ChildCount_15;
	// System.Int32 UnityEngine.InputSystem.InputControl::m_ChildStartIndex
	int32_t ___m_ChildStartIndex_16;
	// UnityEngine.InputSystem.InputControl/ControlFlags UnityEngine.InputSystem.InputControl::m_ControlFlags
	int32_t ___m_ControlFlags_17;
	// UnityEngine.InputSystem.Utilities.PrimitiveValue UnityEngine.InputSystem.InputControl::m_DefaultState
	PrimitiveValue_tB787C76E9A37444599C45519DD7E4D3A1D4730C8  ___m_DefaultState_18;
	// UnityEngine.InputSystem.Utilities.PrimitiveValue UnityEngine.InputSystem.InputControl::m_MinValue
	PrimitiveValue_tB787C76E9A37444599C45519DD7E4D3A1D4730C8  ___m_MinValue_19;
	// UnityEngine.InputSystem.Utilities.PrimitiveValue UnityEngine.InputSystem.InputControl::m_MaxValue
	PrimitiveValue_tB787C76E9A37444599C45519DD7E4D3A1D4730C8  ___m_MaxValue_20;

public:
	inline static int32_t get_offset_of_m_StateBlock_0() { return static_cast<int32_t>(offsetof(InputControl_t3CDD1115017147EEC9D825834637D7700669C006, ___m_StateBlock_0)); }
	inline InputStateBlock_tD9C8DE6181F5D1871DA69E53EB426B9303915291  get_m_StateBlock_0() const { return ___m_StateBlock_0; }
	inline InputStateBlock_tD9C8DE6181F5D1871DA69E53EB426B9303915291 * get_address_of_m_StateBlock_0() { return &___m_StateBlock_0; }
	inline void set_m_StateBlock_0(InputStateBlock_tD9C8DE6181F5D1871DA69E53EB426B9303915291  value)
	{
		___m_StateBlock_0 = value;
	}

	inline static int32_t get_offset_of_m_Name_1() { return static_cast<int32_t>(offsetof(InputControl_t3CDD1115017147EEC9D825834637D7700669C006, ___m_Name_1)); }
	inline InternedString_tD1138602E8B7EA0F5B4851812B13C7E0551E25C8  get_m_Name_1() const { return ___m_Name_1; }
	inline InternedString_tD1138602E8B7EA0F5B4851812B13C7E0551E25C8 * get_address_of_m_Name_1() { return &___m_Name_1; }
	inline void set_m_Name_1(InternedString_tD1138602E8B7EA0F5B4851812B13C7E0551E25C8  value)
	{
		___m_Name_1 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_Name_1))->___m_StringOriginalCase_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_Name_1))->___m_StringLowerCase_1), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_m_Path_2() { return static_cast<int32_t>(offsetof(InputControl_t3CDD1115017147EEC9D825834637D7700669C006, ___m_Path_2)); }
	inline String_t* get_m_Path_2() const { return ___m_Path_2; }
	inline String_t** get_address_of_m_Path_2() { return &___m_Path_2; }
	inline void set_m_Path_2(String_t* value)
	{
		___m_Path_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Path_2), (void*)value);
	}

	inline static int32_t get_offset_of_m_DisplayName_3() { return static_cast<int32_t>(offsetof(InputControl_t3CDD1115017147EEC9D825834637D7700669C006, ___m_DisplayName_3)); }
	inline String_t* get_m_DisplayName_3() const { return ___m_DisplayName_3; }
	inline String_t** get_address_of_m_DisplayName_3() { return &___m_DisplayName_3; }
	inline void set_m_DisplayName_3(String_t* value)
	{
		___m_DisplayName_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_DisplayName_3), (void*)value);
	}

	inline static int32_t get_offset_of_m_DisplayNameFromLayout_4() { return static_cast<int32_t>(offsetof(InputControl_t3CDD1115017147EEC9D825834637D7700669C006, ___m_DisplayNameFromLayout_4)); }
	inline String_t* get_m_DisplayNameFromLayout_4() const { return ___m_DisplayNameFromLayout_4; }
	inline String_t** get_address_of_m_DisplayNameFromLayout_4() { return &___m_DisplayNameFromLayout_4; }
	inline void set_m_DisplayNameFromLayout_4(String_t* value)
	{
		___m_DisplayNameFromLayout_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_DisplayNameFromLayout_4), (void*)value);
	}

	inline static int32_t get_offset_of_m_ShortDisplayName_5() { return static_cast<int32_t>(offsetof(InputControl_t3CDD1115017147EEC9D825834637D7700669C006, ___m_ShortDisplayName_5)); }
	inline String_t* get_m_ShortDisplayName_5() const { return ___m_ShortDisplayName_5; }
	inline String_t** get_address_of_m_ShortDisplayName_5() { return &___m_ShortDisplayName_5; }
	inline void set_m_ShortDisplayName_5(String_t* value)
	{
		___m_ShortDisplayName_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_ShortDisplayName_5), (void*)value);
	}

	inline static int32_t get_offset_of_m_ShortDisplayNameFromLayout_6() { return static_cast<int32_t>(offsetof(InputControl_t3CDD1115017147EEC9D825834637D7700669C006, ___m_ShortDisplayNameFromLayout_6)); }
	inline String_t* get_m_ShortDisplayNameFromLayout_6() const { return ___m_ShortDisplayNameFromLayout_6; }
	inline String_t** get_address_of_m_ShortDisplayNameFromLayout_6() { return &___m_ShortDisplayNameFromLayout_6; }
	inline void set_m_ShortDisplayNameFromLayout_6(String_t* value)
	{
		___m_ShortDisplayNameFromLayout_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_ShortDisplayNameFromLayout_6), (void*)value);
	}

	inline static int32_t get_offset_of_m_Layout_7() { return static_cast<int32_t>(offsetof(InputControl_t3CDD1115017147EEC9D825834637D7700669C006, ___m_Layout_7)); }
	inline InternedString_tD1138602E8B7EA0F5B4851812B13C7E0551E25C8  get_m_Layout_7() const { return ___m_Layout_7; }
	inline InternedString_tD1138602E8B7EA0F5B4851812B13C7E0551E25C8 * get_address_of_m_Layout_7() { return &___m_Layout_7; }
	inline void set_m_Layout_7(InternedString_tD1138602E8B7EA0F5B4851812B13C7E0551E25C8  value)
	{
		___m_Layout_7 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_Layout_7))->___m_StringOriginalCase_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_Layout_7))->___m_StringLowerCase_1), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_m_Variants_8() { return static_cast<int32_t>(offsetof(InputControl_t3CDD1115017147EEC9D825834637D7700669C006, ___m_Variants_8)); }
	inline InternedString_tD1138602E8B7EA0F5B4851812B13C7E0551E25C8  get_m_Variants_8() const { return ___m_Variants_8; }
	inline InternedString_tD1138602E8B7EA0F5B4851812B13C7E0551E25C8 * get_address_of_m_Variants_8() { return &___m_Variants_8; }
	inline void set_m_Variants_8(InternedString_tD1138602E8B7EA0F5B4851812B13C7E0551E25C8  value)
	{
		___m_Variants_8 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_Variants_8))->___m_StringOriginalCase_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_Variants_8))->___m_StringLowerCase_1), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_m_Device_9() { return static_cast<int32_t>(offsetof(InputControl_t3CDD1115017147EEC9D825834637D7700669C006, ___m_Device_9)); }
	inline InputDevice_t9E276EAE78C382539051998DEA1CD0ECF2E91323 * get_m_Device_9() const { return ___m_Device_9; }
	inline InputDevice_t9E276EAE78C382539051998DEA1CD0ECF2E91323 ** get_address_of_m_Device_9() { return &___m_Device_9; }
	inline void set_m_Device_9(InputDevice_t9E276EAE78C382539051998DEA1CD0ECF2E91323 * value)
	{
		___m_Device_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Device_9), (void*)value);
	}

	inline static int32_t get_offset_of_m_Parent_10() { return static_cast<int32_t>(offsetof(InputControl_t3CDD1115017147EEC9D825834637D7700669C006, ___m_Parent_10)); }
	inline InputControl_t3CDD1115017147EEC9D825834637D7700669C006 * get_m_Parent_10() const { return ___m_Parent_10; }
	inline InputControl_t3CDD1115017147EEC9D825834637D7700669C006 ** get_address_of_m_Parent_10() { return &___m_Parent_10; }
	inline void set_m_Parent_10(InputControl_t3CDD1115017147EEC9D825834637D7700669C006 * value)
	{
		___m_Parent_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Parent_10), (void*)value);
	}

	inline static int32_t get_offset_of_m_UsageCount_11() { return static_cast<int32_t>(offsetof(InputControl_t3CDD1115017147EEC9D825834637D7700669C006, ___m_UsageCount_11)); }
	inline int32_t get_m_UsageCount_11() const { return ___m_UsageCount_11; }
	inline int32_t* get_address_of_m_UsageCount_11() { return &___m_UsageCount_11; }
	inline void set_m_UsageCount_11(int32_t value)
	{
		___m_UsageCount_11 = value;
	}

	inline static int32_t get_offset_of_m_UsageStartIndex_12() { return static_cast<int32_t>(offsetof(InputControl_t3CDD1115017147EEC9D825834637D7700669C006, ___m_UsageStartIndex_12)); }
	inline int32_t get_m_UsageStartIndex_12() const { return ___m_UsageStartIndex_12; }
	inline int32_t* get_address_of_m_UsageStartIndex_12() { return &___m_UsageStartIndex_12; }
	inline void set_m_UsageStartIndex_12(int32_t value)
	{
		___m_UsageStartIndex_12 = value;
	}

	inline static int32_t get_offset_of_m_AliasCount_13() { return static_cast<int32_t>(offsetof(InputControl_t3CDD1115017147EEC9D825834637D7700669C006, ___m_AliasCount_13)); }
	inline int32_t get_m_AliasCount_13() const { return ___m_AliasCount_13; }
	inline int32_t* get_address_of_m_AliasCount_13() { return &___m_AliasCount_13; }
	inline void set_m_AliasCount_13(int32_t value)
	{
		___m_AliasCount_13 = value;
	}

	inline static int32_t get_offset_of_m_AliasStartIndex_14() { return static_cast<int32_t>(offsetof(InputControl_t3CDD1115017147EEC9D825834637D7700669C006, ___m_AliasStartIndex_14)); }
	inline int32_t get_m_AliasStartIndex_14() const { return ___m_AliasStartIndex_14; }
	inline int32_t* get_address_of_m_AliasStartIndex_14() { return &___m_AliasStartIndex_14; }
	inline void set_m_AliasStartIndex_14(int32_t value)
	{
		___m_AliasStartIndex_14 = value;
	}

	inline static int32_t get_offset_of_m_ChildCount_15() { return static_cast<int32_t>(offsetof(InputControl_t3CDD1115017147EEC9D825834637D7700669C006, ___m_ChildCount_15)); }
	inline int32_t get_m_ChildCount_15() const { return ___m_ChildCount_15; }
	inline int32_t* get_address_of_m_ChildCount_15() { return &___m_ChildCount_15; }
	inline void set_m_ChildCount_15(int32_t value)
	{
		___m_ChildCount_15 = value;
	}

	inline static int32_t get_offset_of_m_ChildStartIndex_16() { return static_cast<int32_t>(offsetof(InputControl_t3CDD1115017147EEC9D825834637D7700669C006, ___m_ChildStartIndex_16)); }
	inline int32_t get_m_ChildStartIndex_16() const { return ___m_ChildStartIndex_16; }
	inline int32_t* get_address_of_m_ChildStartIndex_16() { return &___m_ChildStartIndex_16; }
	inline void set_m_ChildStartIndex_16(int32_t value)
	{
		___m_ChildStartIndex_16 = value;
	}

	inline static int32_t get_offset_of_m_ControlFlags_17() { return static_cast<int32_t>(offsetof(InputControl_t3CDD1115017147EEC9D825834637D7700669C006, ___m_ControlFlags_17)); }
	inline int32_t get_m_ControlFlags_17() const { return ___m_ControlFlags_17; }
	inline int32_t* get_address_of_m_ControlFlags_17() { return &___m_ControlFlags_17; }
	inline void set_m_ControlFlags_17(int32_t value)
	{
		___m_ControlFlags_17 = value;
	}

	inline static int32_t get_offset_of_m_DefaultState_18() { return static_cast<int32_t>(offsetof(InputControl_t3CDD1115017147EEC9D825834637D7700669C006, ___m_DefaultState_18)); }
	inline PrimitiveValue_tB787C76E9A37444599C45519DD7E4D3A1D4730C8  get_m_DefaultState_18() const { return ___m_DefaultState_18; }
	inline PrimitiveValue_tB787C76E9A37444599C45519DD7E4D3A1D4730C8 * get_address_of_m_DefaultState_18() { return &___m_DefaultState_18; }
	inline void set_m_DefaultState_18(PrimitiveValue_tB787C76E9A37444599C45519DD7E4D3A1D4730C8  value)
	{
		___m_DefaultState_18 = value;
	}

	inline static int32_t get_offset_of_m_MinValue_19() { return static_cast<int32_t>(offsetof(InputControl_t3CDD1115017147EEC9D825834637D7700669C006, ___m_MinValue_19)); }
	inline PrimitiveValue_tB787C76E9A37444599C45519DD7E4D3A1D4730C8  get_m_MinValue_19() const { return ___m_MinValue_19; }
	inline PrimitiveValue_tB787C76E9A37444599C45519DD7E4D3A1D4730C8 * get_address_of_m_MinValue_19() { return &___m_MinValue_19; }
	inline void set_m_MinValue_19(PrimitiveValue_tB787C76E9A37444599C45519DD7E4D3A1D4730C8  value)
	{
		___m_MinValue_19 = value;
	}

	inline static int32_t get_offset_of_m_MaxValue_20() { return static_cast<int32_t>(offsetof(InputControl_t3CDD1115017147EEC9D825834637D7700669C006, ___m_MaxValue_20)); }
	inline PrimitiveValue_tB787C76E9A37444599C45519DD7E4D3A1D4730C8  get_m_MaxValue_20() const { return ___m_MaxValue_20; }
	inline PrimitiveValue_tB787C76E9A37444599C45519DD7E4D3A1D4730C8 * get_address_of_m_MaxValue_20() { return &___m_MaxValue_20; }
	inline void set_m_MaxValue_20(PrimitiveValue_tB787C76E9A37444599C45519DD7E4D3A1D4730C8  value)
	{
		___m_MaxValue_20 = value;
	}
};


// UnityEngine.InputSystem.InputSettings
struct InputSettings_tCA238DEE6F6A4A12B38A7FE9B66B9B8F557DAAE2  : public ScriptableObject_t4361E08CEBF052C650D3666C7CEC37EB31DE116A
{
public:
	// System.String[] UnityEngine.InputSystem.InputSettings::m_SupportedDevices
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* ___m_SupportedDevices_4;
	// UnityEngine.InputSystem.InputSettings/UpdateMode UnityEngine.InputSystem.InputSettings::m_UpdateMode
	int32_t ___m_UpdateMode_5;
	// System.Boolean UnityEngine.InputSystem.InputSettings::m_CompensateForScreenOrientation
	bool ___m_CompensateForScreenOrientation_6;
	// System.Boolean UnityEngine.InputSystem.InputSettings::m_FilterNoiseOnCurrent
	bool ___m_FilterNoiseOnCurrent_7;
	// System.Single UnityEngine.InputSystem.InputSettings::m_DefaultDeadzoneMin
	float ___m_DefaultDeadzoneMin_8;
	// System.Single UnityEngine.InputSystem.InputSettings::m_DefaultDeadzoneMax
	float ___m_DefaultDeadzoneMax_9;
	// System.Single UnityEngine.InputSystem.InputSettings::m_DefaultButtonPressPoint
	float ___m_DefaultButtonPressPoint_10;
	// System.Single UnityEngine.InputSystem.InputSettings::m_DefaultTapTime
	float ___m_DefaultTapTime_11;
	// System.Single UnityEngine.InputSystem.InputSettings::m_DefaultSlowTapTime
	float ___m_DefaultSlowTapTime_12;
	// System.Single UnityEngine.InputSystem.InputSettings::m_DefaultHoldTime
	float ___m_DefaultHoldTime_13;
	// System.Single UnityEngine.InputSystem.InputSettings::m_TapRadius
	float ___m_TapRadius_14;
	// System.Single UnityEngine.InputSystem.InputSettings::m_MultiTapDelayTime
	float ___m_MultiTapDelayTime_15;

public:
	inline static int32_t get_offset_of_m_SupportedDevices_4() { return static_cast<int32_t>(offsetof(InputSettings_tCA238DEE6F6A4A12B38A7FE9B66B9B8F557DAAE2, ___m_SupportedDevices_4)); }
	inline StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* get_m_SupportedDevices_4() const { return ___m_SupportedDevices_4; }
	inline StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A** get_address_of_m_SupportedDevices_4() { return &___m_SupportedDevices_4; }
	inline void set_m_SupportedDevices_4(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* value)
	{
		___m_SupportedDevices_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_SupportedDevices_4), (void*)value);
	}

	inline static int32_t get_offset_of_m_UpdateMode_5() { return static_cast<int32_t>(offsetof(InputSettings_tCA238DEE6F6A4A12B38A7FE9B66B9B8F557DAAE2, ___m_UpdateMode_5)); }
	inline int32_t get_m_UpdateMode_5() const { return ___m_UpdateMode_5; }
	inline int32_t* get_address_of_m_UpdateMode_5() { return &___m_UpdateMode_5; }
	inline void set_m_UpdateMode_5(int32_t value)
	{
		___m_UpdateMode_5 = value;
	}

	inline static int32_t get_offset_of_m_CompensateForScreenOrientation_6() { return static_cast<int32_t>(offsetof(InputSettings_tCA238DEE6F6A4A12B38A7FE9B66B9B8F557DAAE2, ___m_CompensateForScreenOrientation_6)); }
	inline bool get_m_CompensateForScreenOrientation_6() const { return ___m_CompensateForScreenOrientation_6; }
	inline bool* get_address_of_m_CompensateForScreenOrientation_6() { return &___m_CompensateForScreenOrientation_6; }
	inline void set_m_CompensateForScreenOrientation_6(bool value)
	{
		___m_CompensateForScreenOrientation_6 = value;
	}

	inline static int32_t get_offset_of_m_FilterNoiseOnCurrent_7() { return static_cast<int32_t>(offsetof(InputSettings_tCA238DEE6F6A4A12B38A7FE9B66B9B8F557DAAE2, ___m_FilterNoiseOnCurrent_7)); }
	inline bool get_m_FilterNoiseOnCurrent_7() const { return ___m_FilterNoiseOnCurrent_7; }
	inline bool* get_address_of_m_FilterNoiseOnCurrent_7() { return &___m_FilterNoiseOnCurrent_7; }
	inline void set_m_FilterNoiseOnCurrent_7(bool value)
	{
		___m_FilterNoiseOnCurrent_7 = value;
	}

	inline static int32_t get_offset_of_m_DefaultDeadzoneMin_8() { return static_cast<int32_t>(offsetof(InputSettings_tCA238DEE6F6A4A12B38A7FE9B66B9B8F557DAAE2, ___m_DefaultDeadzoneMin_8)); }
	inline float get_m_DefaultDeadzoneMin_8() const { return ___m_DefaultDeadzoneMin_8; }
	inline float* get_address_of_m_DefaultDeadzoneMin_8() { return &___m_DefaultDeadzoneMin_8; }
	inline void set_m_DefaultDeadzoneMin_8(float value)
	{
		___m_DefaultDeadzoneMin_8 = value;
	}

	inline static int32_t get_offset_of_m_DefaultDeadzoneMax_9() { return static_cast<int32_t>(offsetof(InputSettings_tCA238DEE6F6A4A12B38A7FE9B66B9B8F557DAAE2, ___m_DefaultDeadzoneMax_9)); }
	inline float get_m_DefaultDeadzoneMax_9() const { return ___m_DefaultDeadzoneMax_9; }
	inline float* get_address_of_m_DefaultDeadzoneMax_9() { return &___m_DefaultDeadzoneMax_9; }
	inline void set_m_DefaultDeadzoneMax_9(float value)
	{
		___m_DefaultDeadzoneMax_9 = value;
	}

	inline static int32_t get_offset_of_m_DefaultButtonPressPoint_10() { return static_cast<int32_t>(offsetof(InputSettings_tCA238DEE6F6A4A12B38A7FE9B66B9B8F557DAAE2, ___m_DefaultButtonPressPoint_10)); }
	inline float get_m_DefaultButtonPressPoint_10() const { return ___m_DefaultButtonPressPoint_10; }
	inline float* get_address_of_m_DefaultButtonPressPoint_10() { return &___m_DefaultButtonPressPoint_10; }
	inline void set_m_DefaultButtonPressPoint_10(float value)
	{
		___m_DefaultButtonPressPoint_10 = value;
	}

	inline static int32_t get_offset_of_m_DefaultTapTime_11() { return static_cast<int32_t>(offsetof(InputSettings_tCA238DEE6F6A4A12B38A7FE9B66B9B8F557DAAE2, ___m_DefaultTapTime_11)); }
	inline float get_m_DefaultTapTime_11() const { return ___m_DefaultTapTime_11; }
	inline float* get_address_of_m_DefaultTapTime_11() { return &___m_DefaultTapTime_11; }
	inline void set_m_DefaultTapTime_11(float value)
	{
		___m_DefaultTapTime_11 = value;
	}

	inline static int32_t get_offset_of_m_DefaultSlowTapTime_12() { return static_cast<int32_t>(offsetof(InputSettings_tCA238DEE6F6A4A12B38A7FE9B66B9B8F557DAAE2, ___m_DefaultSlowTapTime_12)); }
	inline float get_m_DefaultSlowTapTime_12() const { return ___m_DefaultSlowTapTime_12; }
	inline float* get_address_of_m_DefaultSlowTapTime_12() { return &___m_DefaultSlowTapTime_12; }
	inline void set_m_DefaultSlowTapTime_12(float value)
	{
		___m_DefaultSlowTapTime_12 = value;
	}

	inline static int32_t get_offset_of_m_DefaultHoldTime_13() { return static_cast<int32_t>(offsetof(InputSettings_tCA238DEE6F6A4A12B38A7FE9B66B9B8F557DAAE2, ___m_DefaultHoldTime_13)); }
	inline float get_m_DefaultHoldTime_13() const { return ___m_DefaultHoldTime_13; }
	inline float* get_address_of_m_DefaultHoldTime_13() { return &___m_DefaultHoldTime_13; }
	inline void set_m_DefaultHoldTime_13(float value)
	{
		___m_DefaultHoldTime_13 = value;
	}

	inline static int32_t get_offset_of_m_TapRadius_14() { return static_cast<int32_t>(offsetof(InputSettings_tCA238DEE6F6A4A12B38A7FE9B66B9B8F557DAAE2, ___m_TapRadius_14)); }
	inline float get_m_TapRadius_14() const { return ___m_TapRadius_14; }
	inline float* get_address_of_m_TapRadius_14() { return &___m_TapRadius_14; }
	inline void set_m_TapRadius_14(float value)
	{
		___m_TapRadius_14 = value;
	}

	inline static int32_t get_offset_of_m_MultiTapDelayTime_15() { return static_cast<int32_t>(offsetof(InputSettings_tCA238DEE6F6A4A12B38A7FE9B66B9B8F557DAAE2, ___m_MultiTapDelayTime_15)); }
	inline float get_m_MultiTapDelayTime_15() const { return ___m_MultiTapDelayTime_15; }
	inline float* get_address_of_m_MultiTapDelayTime_15() { return &___m_MultiTapDelayTime_15; }
	inline void set_m_MultiTapDelayTime_15(float value)
	{
		___m_MultiTapDelayTime_15 = value;
	}
};


// System.InvalidOperationException
struct InvalidOperationException_t10D3EE59AD28EC641ACEE05BCA4271A527E5ECAB  : public SystemException_tC551B4D6EE3772B5F32C71EE8C719F4B43ECCC62
{
public:

public:
};


// System.NotImplementedException
struct NotImplementedException_t26260C4EE0444C5FA022994203060B3A42A3ADE6  : public SystemException_tC551B4D6EE3772B5F32C71EE8C719F4B43ECCC62
{
public:

public:
};


// UnityEngine.Texture2D
struct Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF  : public Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE
{
public:

public:
};


// UnityEngine.Transform
struct Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1  : public Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684
{
public:

public:
};


// UnityEngine.InputSystem.Samples.VisualizationHelpers/TimelineVisualizer/FrameSample
struct FrameSample_t8064F61DD3BB94546FB62C119AB80FAD66546E1B 
{
public:
	// UnityEngine.InputSystem.Utilities.PrimitiveValue UnityEngine.InputSystem.Samples.VisualizationHelpers/TimelineVisualizer/FrameSample::value
	PrimitiveValue_tB787C76E9A37444599C45519DD7E4D3A1D4730C8  ___value_0;
	// System.Int32 UnityEngine.InputSystem.Samples.VisualizationHelpers/TimelineVisualizer/FrameSample::frame
	int32_t ___frame_1;

public:
	inline static int32_t get_offset_of_value_0() { return static_cast<int32_t>(offsetof(FrameSample_t8064F61DD3BB94546FB62C119AB80FAD66546E1B, ___value_0)); }
	inline PrimitiveValue_tB787C76E9A37444599C45519DD7E4D3A1D4730C8  get_value_0() const { return ___value_0; }
	inline PrimitiveValue_tB787C76E9A37444599C45519DD7E4D3A1D4730C8 * get_address_of_value_0() { return &___value_0; }
	inline void set_value_0(PrimitiveValue_tB787C76E9A37444599C45519DD7E4D3A1D4730C8  value)
	{
		___value_0 = value;
	}

	inline static int32_t get_offset_of_frame_1() { return static_cast<int32_t>(offsetof(FrameSample_t8064F61DD3BB94546FB62C119AB80FAD66546E1B, ___frame_1)); }
	inline int32_t get_frame_1() const { return ___frame_1; }
	inline int32_t* get_address_of_frame_1() { return &___frame_1; }
	inline void set_frame_1(int32_t value)
	{
		___frame_1 = value;
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.InputSystem.Samples.VisualizationHelpers/TimelineVisualizer/FrameSample
struct FrameSample_t8064F61DD3BB94546FB62C119AB80FAD66546E1B_marshaled_pinvoke
{
	PrimitiveValue_tB787C76E9A37444599C45519DD7E4D3A1D4730C8_marshaled_pinvoke ___value_0;
	int32_t ___frame_1;
};
// Native definition for COM marshalling of UnityEngine.InputSystem.Samples.VisualizationHelpers/TimelineVisualizer/FrameSample
struct FrameSample_t8064F61DD3BB94546FB62C119AB80FAD66546E1B_marshaled_com
{
	PrimitiveValue_tB787C76E9A37444599C45519DD7E4D3A1D4730C8_marshaled_com ___value_0;
	int32_t ___frame_1;
};

// UnityEngine.InputSystem.Samples.VisualizationHelpers/TimelineVisualizer/TimeSample
struct TimeSample_t926350553A4576F5F20E71A9CFB9A19E37F35C2B 
{
public:
	// UnityEngine.InputSystem.Utilities.PrimitiveValue UnityEngine.InputSystem.Samples.VisualizationHelpers/TimelineVisualizer/TimeSample::value
	PrimitiveValue_tB787C76E9A37444599C45519DD7E4D3A1D4730C8  ___value_0;
	// System.Single UnityEngine.InputSystem.Samples.VisualizationHelpers/TimelineVisualizer/TimeSample::time
	float ___time_1;

public:
	inline static int32_t get_offset_of_value_0() { return static_cast<int32_t>(offsetof(TimeSample_t926350553A4576F5F20E71A9CFB9A19E37F35C2B, ___value_0)); }
	inline PrimitiveValue_tB787C76E9A37444599C45519DD7E4D3A1D4730C8  get_value_0() const { return ___value_0; }
	inline PrimitiveValue_tB787C76E9A37444599C45519DD7E4D3A1D4730C8 * get_address_of_value_0() { return &___value_0; }
	inline void set_value_0(PrimitiveValue_tB787C76E9A37444599C45519DD7E4D3A1D4730C8  value)
	{
		___value_0 = value;
	}

	inline static int32_t get_offset_of_time_1() { return static_cast<int32_t>(offsetof(TimeSample_t926350553A4576F5F20E71A9CFB9A19E37F35C2B, ___time_1)); }
	inline float get_time_1() const { return ___time_1; }
	inline float* get_address_of_time_1() { return &___time_1; }
	inline void set_time_1(float value)
	{
		___time_1 = value;
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.InputSystem.Samples.VisualizationHelpers/TimelineVisualizer/TimeSample
struct TimeSample_t926350553A4576F5F20E71A9CFB9A19E37F35C2B_marshaled_pinvoke
{
	PrimitiveValue_tB787C76E9A37444599C45519DD7E4D3A1D4730C8_marshaled_pinvoke ___value_0;
	float ___time_1;
};
// Native definition for COM marshalling of UnityEngine.InputSystem.Samples.VisualizationHelpers/TimelineVisualizer/TimeSample
struct TimeSample_t926350553A4576F5F20E71A9CFB9A19E37F35C2B_marshaled_com
{
	PrimitiveValue_tB787C76E9A37444599C45519DD7E4D3A1D4730C8_marshaled_com ___value_0;
	float ___time_1;
};

// UnityEngine.InputSystem.Samples.VisualizationHelpers/TimelineVisualizer/Timeline
struct Timeline_t0E8C3B4B157DAE25A77A695529CE737933D5CCBE 
{
public:
	// UnityEngine.GUIContent UnityEngine.InputSystem.Samples.VisualizationHelpers/TimelineVisualizer/Timeline::name
	GUIContent_t39256993BF4A33F76E073488D6A2F13D678DF60E * ___name_0;
	// UnityEngine.Color UnityEngine.InputSystem.Samples.VisualizationHelpers/TimelineVisualizer/Timeline::color
	Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___color_1;
	// UnityEngine.InputSystem.Samples.VisualizationHelpers/RingBuffer`1<UnityEngine.InputSystem.Samples.VisualizationHelpers/TimelineVisualizer/TimeSample> UnityEngine.InputSystem.Samples.VisualizationHelpers/TimelineVisualizer/Timeline::timeSamples
	RingBuffer_1_tD482466EFEACC434BCF1AE233235CA27903B4370  ___timeSamples_2;
	// UnityEngine.InputSystem.Samples.VisualizationHelpers/RingBuffer`1<UnityEngine.InputSystem.Samples.VisualizationHelpers/TimelineVisualizer/FrameSample> UnityEngine.InputSystem.Samples.VisualizationHelpers/TimelineVisualizer/Timeline::frameSamples
	RingBuffer_1_t6C5FD528A08BBDFABB08C4C1A6086AF9E61B794E  ___frameSamples_3;
	// UnityEngine.InputSystem.Utilities.PrimitiveValue UnityEngine.InputSystem.Samples.VisualizationHelpers/TimelineVisualizer/Timeline::minValue
	PrimitiveValue_tB787C76E9A37444599C45519DD7E4D3A1D4730C8  ___minValue_4;
	// UnityEngine.InputSystem.Utilities.PrimitiveValue UnityEngine.InputSystem.Samples.VisualizationHelpers/TimelineVisualizer/Timeline::maxValue
	PrimitiveValue_tB787C76E9A37444599C45519DD7E4D3A1D4730C8  ___maxValue_5;
	// UnityEngine.InputSystem.Samples.VisualizationHelpers/TimelineVisualizer/PlotType UnityEngine.InputSystem.Samples.VisualizationHelpers/TimelineVisualizer/Timeline::plotType
	int32_t ___plotType_6;

public:
	inline static int32_t get_offset_of_name_0() { return static_cast<int32_t>(offsetof(Timeline_t0E8C3B4B157DAE25A77A695529CE737933D5CCBE, ___name_0)); }
	inline GUIContent_t39256993BF4A33F76E073488D6A2F13D678DF60E * get_name_0() const { return ___name_0; }
	inline GUIContent_t39256993BF4A33F76E073488D6A2F13D678DF60E ** get_address_of_name_0() { return &___name_0; }
	inline void set_name_0(GUIContent_t39256993BF4A33F76E073488D6A2F13D678DF60E * value)
	{
		___name_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___name_0), (void*)value);
	}

	inline static int32_t get_offset_of_color_1() { return static_cast<int32_t>(offsetof(Timeline_t0E8C3B4B157DAE25A77A695529CE737933D5CCBE, ___color_1)); }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  get_color_1() const { return ___color_1; }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 * get_address_of_color_1() { return &___color_1; }
	inline void set_color_1(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  value)
	{
		___color_1 = value;
	}

	inline static int32_t get_offset_of_timeSamples_2() { return static_cast<int32_t>(offsetof(Timeline_t0E8C3B4B157DAE25A77A695529CE737933D5CCBE, ___timeSamples_2)); }
	inline RingBuffer_1_tD482466EFEACC434BCF1AE233235CA27903B4370  get_timeSamples_2() const { return ___timeSamples_2; }
	inline RingBuffer_1_tD482466EFEACC434BCF1AE233235CA27903B4370 * get_address_of_timeSamples_2() { return &___timeSamples_2; }
	inline void set_timeSamples_2(RingBuffer_1_tD482466EFEACC434BCF1AE233235CA27903B4370  value)
	{
		___timeSamples_2 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___timeSamples_2))->___array_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_frameSamples_3() { return static_cast<int32_t>(offsetof(Timeline_t0E8C3B4B157DAE25A77A695529CE737933D5CCBE, ___frameSamples_3)); }
	inline RingBuffer_1_t6C5FD528A08BBDFABB08C4C1A6086AF9E61B794E  get_frameSamples_3() const { return ___frameSamples_3; }
	inline RingBuffer_1_t6C5FD528A08BBDFABB08C4C1A6086AF9E61B794E * get_address_of_frameSamples_3() { return &___frameSamples_3; }
	inline void set_frameSamples_3(RingBuffer_1_t6C5FD528A08BBDFABB08C4C1A6086AF9E61B794E  value)
	{
		___frameSamples_3 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___frameSamples_3))->___array_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_minValue_4() { return static_cast<int32_t>(offsetof(Timeline_t0E8C3B4B157DAE25A77A695529CE737933D5CCBE, ___minValue_4)); }
	inline PrimitiveValue_tB787C76E9A37444599C45519DD7E4D3A1D4730C8  get_minValue_4() const { return ___minValue_4; }
	inline PrimitiveValue_tB787C76E9A37444599C45519DD7E4D3A1D4730C8 * get_address_of_minValue_4() { return &___minValue_4; }
	inline void set_minValue_4(PrimitiveValue_tB787C76E9A37444599C45519DD7E4D3A1D4730C8  value)
	{
		___minValue_4 = value;
	}

	inline static int32_t get_offset_of_maxValue_5() { return static_cast<int32_t>(offsetof(Timeline_t0E8C3B4B157DAE25A77A695529CE737933D5CCBE, ___maxValue_5)); }
	inline PrimitiveValue_tB787C76E9A37444599C45519DD7E4D3A1D4730C8  get_maxValue_5() const { return ___maxValue_5; }
	inline PrimitiveValue_tB787C76E9A37444599C45519DD7E4D3A1D4730C8 * get_address_of_maxValue_5() { return &___maxValue_5; }
	inline void set_maxValue_5(PrimitiveValue_tB787C76E9A37444599C45519DD7E4D3A1D4730C8  value)
	{
		___maxValue_5 = value;
	}

	inline static int32_t get_offset_of_plotType_6() { return static_cast<int32_t>(offsetof(Timeline_t0E8C3B4B157DAE25A77A695529CE737933D5CCBE, ___plotType_6)); }
	inline int32_t get_plotType_6() const { return ___plotType_6; }
	inline int32_t* get_address_of_plotType_6() { return &___plotType_6; }
	inline void set_plotType_6(int32_t value)
	{
		___plotType_6 = value;
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.InputSystem.Samples.VisualizationHelpers/TimelineVisualizer/Timeline
struct Timeline_t0E8C3B4B157DAE25A77A695529CE737933D5CCBE_marshaled_pinvoke
{
	GUIContent_t39256993BF4A33F76E073488D6A2F13D678DF60E_marshaled_pinvoke* ___name_0;
	Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___color_1;
	RingBuffer_1_tD482466EFEACC434BCF1AE233235CA27903B4370  ___timeSamples_2;
	RingBuffer_1_t6C5FD528A08BBDFABB08C4C1A6086AF9E61B794E  ___frameSamples_3;
	PrimitiveValue_tB787C76E9A37444599C45519DD7E4D3A1D4730C8_marshaled_pinvoke ___minValue_4;
	PrimitiveValue_tB787C76E9A37444599C45519DD7E4D3A1D4730C8_marshaled_pinvoke ___maxValue_5;
	int32_t ___plotType_6;
};
// Native definition for COM marshalling of UnityEngine.InputSystem.Samples.VisualizationHelpers/TimelineVisualizer/Timeline
struct Timeline_t0E8C3B4B157DAE25A77A695529CE737933D5CCBE_marshaled_com
{
	GUIContent_t39256993BF4A33F76E073488D6A2F13D678DF60E_marshaled_com* ___name_0;
	Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___color_1;
	RingBuffer_1_tD482466EFEACC434BCF1AE233235CA27903B4370  ___timeSamples_2;
	RingBuffer_1_t6C5FD528A08BBDFABB08C4C1A6086AF9E61B794E  ___frameSamples_3;
	PrimitiveValue_tB787C76E9A37444599C45519DD7E4D3A1D4730C8_marshaled_com ___minValue_4;
	PrimitiveValue_tB787C76E9A37444599C45519DD7E4D3A1D4730C8_marshaled_com ___maxValue_5;
	int32_t ___plotType_6;
};

// UnityEngine.InputSystem.InputAction
struct InputAction_tF0C77AF72E0C19608B020E77A2C36C04E9DCBE48  : public RuntimeObject
{
public:
	// System.String UnityEngine.InputSystem.InputAction::m_Name
	String_t* ___m_Name_0;
	// UnityEngine.InputSystem.InputActionType UnityEngine.InputSystem.InputAction::m_Type
	int32_t ___m_Type_1;
	// System.String UnityEngine.InputSystem.InputAction::m_ExpectedControlType
	String_t* ___m_ExpectedControlType_2;
	// System.String UnityEngine.InputSystem.InputAction::m_Id
	String_t* ___m_Id_3;
	// System.String UnityEngine.InputSystem.InputAction::m_Processors
	String_t* ___m_Processors_4;
	// System.String UnityEngine.InputSystem.InputAction::m_Interactions
	String_t* ___m_Interactions_5;
	// UnityEngine.InputSystem.InputBinding[] UnityEngine.InputSystem.InputAction::m_SingletonActionBindings
	InputBindingU5BU5D_t3CCBD5F5A51F370BFD0A373A770C8720F2A6115E* ___m_SingletonActionBindings_6;
	// System.Nullable`1<UnityEngine.InputSystem.InputBinding> UnityEngine.InputSystem.InputAction::m_BindingMask
	Nullable_1_tAF2F42FC2F7DC5A356BAC77371758E4D7339F104  ___m_BindingMask_7;
	// System.Int32 UnityEngine.InputSystem.InputAction::m_BindingsStartIndex
	int32_t ___m_BindingsStartIndex_8;
	// System.Int32 UnityEngine.InputSystem.InputAction::m_BindingsCount
	int32_t ___m_BindingsCount_9;
	// System.Int32 UnityEngine.InputSystem.InputAction::m_ControlStartIndex
	int32_t ___m_ControlStartIndex_10;
	// System.Int32 UnityEngine.InputSystem.InputAction::m_ControlCount
	int32_t ___m_ControlCount_11;
	// System.Int32 UnityEngine.InputSystem.InputAction::m_ActionIndexInState
	int32_t ___m_ActionIndexInState_12;
	// UnityEngine.InputSystem.InputActionMap UnityEngine.InputSystem.InputAction::m_ActionMap
	InputActionMap_tBA45B784C5957091166E0007413402A3E83DD226 * ___m_ActionMap_13;
	// UnityEngine.InputSystem.Utilities.InlinedArray`1<System.Action`1<UnityEngine.InputSystem.InputAction/CallbackContext>> UnityEngine.InputSystem.InputAction::m_OnStarted
	InlinedArray_1_tD8F648109EC431FFA4D6E31DC56D88C27692A37E  ___m_OnStarted_14;
	// UnityEngine.InputSystem.Utilities.InlinedArray`1<System.Action`1<UnityEngine.InputSystem.InputAction/CallbackContext>> UnityEngine.InputSystem.InputAction::m_OnCanceled
	InlinedArray_1_tD8F648109EC431FFA4D6E31DC56D88C27692A37E  ___m_OnCanceled_15;
	// UnityEngine.InputSystem.Utilities.InlinedArray`1<System.Action`1<UnityEngine.InputSystem.InputAction/CallbackContext>> UnityEngine.InputSystem.InputAction::m_OnPerformed
	InlinedArray_1_tD8F648109EC431FFA4D6E31DC56D88C27692A37E  ___m_OnPerformed_16;

public:
	inline static int32_t get_offset_of_m_Name_0() { return static_cast<int32_t>(offsetof(InputAction_tF0C77AF72E0C19608B020E77A2C36C04E9DCBE48, ___m_Name_0)); }
	inline String_t* get_m_Name_0() const { return ___m_Name_0; }
	inline String_t** get_address_of_m_Name_0() { return &___m_Name_0; }
	inline void set_m_Name_0(String_t* value)
	{
		___m_Name_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Name_0), (void*)value);
	}

	inline static int32_t get_offset_of_m_Type_1() { return static_cast<int32_t>(offsetof(InputAction_tF0C77AF72E0C19608B020E77A2C36C04E9DCBE48, ___m_Type_1)); }
	inline int32_t get_m_Type_1() const { return ___m_Type_1; }
	inline int32_t* get_address_of_m_Type_1() { return &___m_Type_1; }
	inline void set_m_Type_1(int32_t value)
	{
		___m_Type_1 = value;
	}

	inline static int32_t get_offset_of_m_ExpectedControlType_2() { return static_cast<int32_t>(offsetof(InputAction_tF0C77AF72E0C19608B020E77A2C36C04E9DCBE48, ___m_ExpectedControlType_2)); }
	inline String_t* get_m_ExpectedControlType_2() const { return ___m_ExpectedControlType_2; }
	inline String_t** get_address_of_m_ExpectedControlType_2() { return &___m_ExpectedControlType_2; }
	inline void set_m_ExpectedControlType_2(String_t* value)
	{
		___m_ExpectedControlType_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_ExpectedControlType_2), (void*)value);
	}

	inline static int32_t get_offset_of_m_Id_3() { return static_cast<int32_t>(offsetof(InputAction_tF0C77AF72E0C19608B020E77A2C36C04E9DCBE48, ___m_Id_3)); }
	inline String_t* get_m_Id_3() const { return ___m_Id_3; }
	inline String_t** get_address_of_m_Id_3() { return &___m_Id_3; }
	inline void set_m_Id_3(String_t* value)
	{
		___m_Id_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Id_3), (void*)value);
	}

	inline static int32_t get_offset_of_m_Processors_4() { return static_cast<int32_t>(offsetof(InputAction_tF0C77AF72E0C19608B020E77A2C36C04E9DCBE48, ___m_Processors_4)); }
	inline String_t* get_m_Processors_4() const { return ___m_Processors_4; }
	inline String_t** get_address_of_m_Processors_4() { return &___m_Processors_4; }
	inline void set_m_Processors_4(String_t* value)
	{
		___m_Processors_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Processors_4), (void*)value);
	}

	inline static int32_t get_offset_of_m_Interactions_5() { return static_cast<int32_t>(offsetof(InputAction_tF0C77AF72E0C19608B020E77A2C36C04E9DCBE48, ___m_Interactions_5)); }
	inline String_t* get_m_Interactions_5() const { return ___m_Interactions_5; }
	inline String_t** get_address_of_m_Interactions_5() { return &___m_Interactions_5; }
	inline void set_m_Interactions_5(String_t* value)
	{
		___m_Interactions_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Interactions_5), (void*)value);
	}

	inline static int32_t get_offset_of_m_SingletonActionBindings_6() { return static_cast<int32_t>(offsetof(InputAction_tF0C77AF72E0C19608B020E77A2C36C04E9DCBE48, ___m_SingletonActionBindings_6)); }
	inline InputBindingU5BU5D_t3CCBD5F5A51F370BFD0A373A770C8720F2A6115E* get_m_SingletonActionBindings_6() const { return ___m_SingletonActionBindings_6; }
	inline InputBindingU5BU5D_t3CCBD5F5A51F370BFD0A373A770C8720F2A6115E** get_address_of_m_SingletonActionBindings_6() { return &___m_SingletonActionBindings_6; }
	inline void set_m_SingletonActionBindings_6(InputBindingU5BU5D_t3CCBD5F5A51F370BFD0A373A770C8720F2A6115E* value)
	{
		___m_SingletonActionBindings_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_SingletonActionBindings_6), (void*)value);
	}

	inline static int32_t get_offset_of_m_BindingMask_7() { return static_cast<int32_t>(offsetof(InputAction_tF0C77AF72E0C19608B020E77A2C36C04E9DCBE48, ___m_BindingMask_7)); }
	inline Nullable_1_tAF2F42FC2F7DC5A356BAC77371758E4D7339F104  get_m_BindingMask_7() const { return ___m_BindingMask_7; }
	inline Nullable_1_tAF2F42FC2F7DC5A356BAC77371758E4D7339F104 * get_address_of_m_BindingMask_7() { return &___m_BindingMask_7; }
	inline void set_m_BindingMask_7(Nullable_1_tAF2F42FC2F7DC5A356BAC77371758E4D7339F104  value)
	{
		___m_BindingMask_7 = value;
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_BindingMask_7))->___value_0))->___m_Name_2), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_BindingMask_7))->___value_0))->___m_Id_3), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_BindingMask_7))->___value_0))->___m_Path_4), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_BindingMask_7))->___value_0))->___m_Interactions_5), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_BindingMask_7))->___value_0))->___m_Processors_6), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_BindingMask_7))->___value_0))->___m_Groups_7), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_BindingMask_7))->___value_0))->___m_Action_8), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_BindingMask_7))->___value_0))->___m_OverridePath_10), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_BindingMask_7))->___value_0))->___m_OverrideInteractions_11), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_BindingMask_7))->___value_0))->___m_OverrideProcessors_12), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_m_BindingsStartIndex_8() { return static_cast<int32_t>(offsetof(InputAction_tF0C77AF72E0C19608B020E77A2C36C04E9DCBE48, ___m_BindingsStartIndex_8)); }
	inline int32_t get_m_BindingsStartIndex_8() const { return ___m_BindingsStartIndex_8; }
	inline int32_t* get_address_of_m_BindingsStartIndex_8() { return &___m_BindingsStartIndex_8; }
	inline void set_m_BindingsStartIndex_8(int32_t value)
	{
		___m_BindingsStartIndex_8 = value;
	}

	inline static int32_t get_offset_of_m_BindingsCount_9() { return static_cast<int32_t>(offsetof(InputAction_tF0C77AF72E0C19608B020E77A2C36C04E9DCBE48, ___m_BindingsCount_9)); }
	inline int32_t get_m_BindingsCount_9() const { return ___m_BindingsCount_9; }
	inline int32_t* get_address_of_m_BindingsCount_9() { return &___m_BindingsCount_9; }
	inline void set_m_BindingsCount_9(int32_t value)
	{
		___m_BindingsCount_9 = value;
	}

	inline static int32_t get_offset_of_m_ControlStartIndex_10() { return static_cast<int32_t>(offsetof(InputAction_tF0C77AF72E0C19608B020E77A2C36C04E9DCBE48, ___m_ControlStartIndex_10)); }
	inline int32_t get_m_ControlStartIndex_10() const { return ___m_ControlStartIndex_10; }
	inline int32_t* get_address_of_m_ControlStartIndex_10() { return &___m_ControlStartIndex_10; }
	inline void set_m_ControlStartIndex_10(int32_t value)
	{
		___m_ControlStartIndex_10 = value;
	}

	inline static int32_t get_offset_of_m_ControlCount_11() { return static_cast<int32_t>(offsetof(InputAction_tF0C77AF72E0C19608B020E77A2C36C04E9DCBE48, ___m_ControlCount_11)); }
	inline int32_t get_m_ControlCount_11() const { return ___m_ControlCount_11; }
	inline int32_t* get_address_of_m_ControlCount_11() { return &___m_ControlCount_11; }
	inline void set_m_ControlCount_11(int32_t value)
	{
		___m_ControlCount_11 = value;
	}

	inline static int32_t get_offset_of_m_ActionIndexInState_12() { return static_cast<int32_t>(offsetof(InputAction_tF0C77AF72E0C19608B020E77A2C36C04E9DCBE48, ___m_ActionIndexInState_12)); }
	inline int32_t get_m_ActionIndexInState_12() const { return ___m_ActionIndexInState_12; }
	inline int32_t* get_address_of_m_ActionIndexInState_12() { return &___m_ActionIndexInState_12; }
	inline void set_m_ActionIndexInState_12(int32_t value)
	{
		___m_ActionIndexInState_12 = value;
	}

	inline static int32_t get_offset_of_m_ActionMap_13() { return static_cast<int32_t>(offsetof(InputAction_tF0C77AF72E0C19608B020E77A2C36C04E9DCBE48, ___m_ActionMap_13)); }
	inline InputActionMap_tBA45B784C5957091166E0007413402A3E83DD226 * get_m_ActionMap_13() const { return ___m_ActionMap_13; }
	inline InputActionMap_tBA45B784C5957091166E0007413402A3E83DD226 ** get_address_of_m_ActionMap_13() { return &___m_ActionMap_13; }
	inline void set_m_ActionMap_13(InputActionMap_tBA45B784C5957091166E0007413402A3E83DD226 * value)
	{
		___m_ActionMap_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_ActionMap_13), (void*)value);
	}

	inline static int32_t get_offset_of_m_OnStarted_14() { return static_cast<int32_t>(offsetof(InputAction_tF0C77AF72E0C19608B020E77A2C36C04E9DCBE48, ___m_OnStarted_14)); }
	inline InlinedArray_1_tD8F648109EC431FFA4D6E31DC56D88C27692A37E  get_m_OnStarted_14() const { return ___m_OnStarted_14; }
	inline InlinedArray_1_tD8F648109EC431FFA4D6E31DC56D88C27692A37E * get_address_of_m_OnStarted_14() { return &___m_OnStarted_14; }
	inline void set_m_OnStarted_14(InlinedArray_1_tD8F648109EC431FFA4D6E31DC56D88C27692A37E  value)
	{
		___m_OnStarted_14 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_OnStarted_14))->___firstValue_1), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_OnStarted_14))->___additionalValues_2), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_m_OnCanceled_15() { return static_cast<int32_t>(offsetof(InputAction_tF0C77AF72E0C19608B020E77A2C36C04E9DCBE48, ___m_OnCanceled_15)); }
	inline InlinedArray_1_tD8F648109EC431FFA4D6E31DC56D88C27692A37E  get_m_OnCanceled_15() const { return ___m_OnCanceled_15; }
	inline InlinedArray_1_tD8F648109EC431FFA4D6E31DC56D88C27692A37E * get_address_of_m_OnCanceled_15() { return &___m_OnCanceled_15; }
	inline void set_m_OnCanceled_15(InlinedArray_1_tD8F648109EC431FFA4D6E31DC56D88C27692A37E  value)
	{
		___m_OnCanceled_15 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_OnCanceled_15))->___firstValue_1), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_OnCanceled_15))->___additionalValues_2), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_m_OnPerformed_16() { return static_cast<int32_t>(offsetof(InputAction_tF0C77AF72E0C19608B020E77A2C36C04E9DCBE48, ___m_OnPerformed_16)); }
	inline InlinedArray_1_tD8F648109EC431FFA4D6E31DC56D88C27692A37E  get_m_OnPerformed_16() const { return ___m_OnPerformed_16; }
	inline InlinedArray_1_tD8F648109EC431FFA4D6E31DC56D88C27692A37E * get_address_of_m_OnPerformed_16() { return &___m_OnPerformed_16; }
	inline void set_m_OnPerformed_16(InlinedArray_1_tD8F648109EC431FFA4D6E31DC56D88C27692A37E  value)
	{
		___m_OnPerformed_16 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_OnPerformed_16))->___firstValue_1), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_OnPerformed_16))->___additionalValues_2), (void*)NULL);
		#endif
	}
};


// UnityEngine.InputSystem.InputActionMap
struct InputActionMap_tBA45B784C5957091166E0007413402A3E83DD226  : public RuntimeObject
{
public:
	// System.String UnityEngine.InputSystem.InputActionMap::m_Name
	String_t* ___m_Name_0;
	// System.String UnityEngine.InputSystem.InputActionMap::m_Id
	String_t* ___m_Id_1;
	// UnityEngine.InputSystem.InputActionAsset UnityEngine.InputSystem.InputActionMap::m_Asset
	InputActionAsset_tB1114F77EFFAE61A28A8A559662A6FCCF444F70E * ___m_Asset_2;
	// UnityEngine.InputSystem.InputAction[] UnityEngine.InputSystem.InputActionMap::m_Actions
	InputActionU5BU5D_t612D1F4255E82373FD5E5514AD83FA50B21A6A73* ___m_Actions_3;
	// UnityEngine.InputSystem.InputBinding[] UnityEngine.InputSystem.InputActionMap::m_Bindings
	InputBindingU5BU5D_t3CCBD5F5A51F370BFD0A373A770C8720F2A6115E* ___m_Bindings_4;
	// UnityEngine.InputSystem.InputBinding[] UnityEngine.InputSystem.InputActionMap::m_BindingsForEachAction
	InputBindingU5BU5D_t3CCBD5F5A51F370BFD0A373A770C8720F2A6115E* ___m_BindingsForEachAction_5;
	// UnityEngine.InputSystem.InputControl[] UnityEngine.InputSystem.InputActionMap::m_ControlsForEachAction
	InputControlU5BU5D_t4668D8411829C981759512FED1506B20F902CA67* ___m_ControlsForEachAction_6;
	// System.Int32 UnityEngine.InputSystem.InputActionMap::m_EnabledActionsCount
	int32_t ___m_EnabledActionsCount_7;
	// UnityEngine.InputSystem.InputAction UnityEngine.InputSystem.InputActionMap::m_SingletonAction
	InputAction_tF0C77AF72E0C19608B020E77A2C36C04E9DCBE48 * ___m_SingletonAction_8;
	// System.Int32 UnityEngine.InputSystem.InputActionMap::m_MapIndexInState
	int32_t ___m_MapIndexInState_9;
	// UnityEngine.InputSystem.InputActionState UnityEngine.InputSystem.InputActionMap::m_State
	InputActionState_tE8F8D2439CDB9528D77707FB251FBE280C34664C * ___m_State_10;
	// System.Boolean UnityEngine.InputSystem.InputActionMap::m_NeedToResolveBindings
	bool ___m_NeedToResolveBindings_11;
	// System.Nullable`1<UnityEngine.InputSystem.InputBinding> UnityEngine.InputSystem.InputActionMap::m_BindingMask
	Nullable_1_tAF2F42FC2F7DC5A356BAC77371758E4D7339F104  ___m_BindingMask_12;
	// System.Int32 UnityEngine.InputSystem.InputActionMap::m_DevicesCount
	int32_t ___m_DevicesCount_13;
	// UnityEngine.InputSystem.InputDevice[] UnityEngine.InputSystem.InputActionMap::m_DevicesArray
	InputDeviceU5BU5D_t51F80AEE3E39E34077F38FD56C262347F180A2B2* ___m_DevicesArray_14;
	// UnityEngine.InputSystem.Utilities.InlinedArray`1<System.Action`1<UnityEngine.InputSystem.InputAction/CallbackContext>> UnityEngine.InputSystem.InputActionMap::m_ActionCallbacks
	InlinedArray_1_tD8F648109EC431FFA4D6E31DC56D88C27692A37E  ___m_ActionCallbacks_15;

public:
	inline static int32_t get_offset_of_m_Name_0() { return static_cast<int32_t>(offsetof(InputActionMap_tBA45B784C5957091166E0007413402A3E83DD226, ___m_Name_0)); }
	inline String_t* get_m_Name_0() const { return ___m_Name_0; }
	inline String_t** get_address_of_m_Name_0() { return &___m_Name_0; }
	inline void set_m_Name_0(String_t* value)
	{
		___m_Name_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Name_0), (void*)value);
	}

	inline static int32_t get_offset_of_m_Id_1() { return static_cast<int32_t>(offsetof(InputActionMap_tBA45B784C5957091166E0007413402A3E83DD226, ___m_Id_1)); }
	inline String_t* get_m_Id_1() const { return ___m_Id_1; }
	inline String_t** get_address_of_m_Id_1() { return &___m_Id_1; }
	inline void set_m_Id_1(String_t* value)
	{
		___m_Id_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Id_1), (void*)value);
	}

	inline static int32_t get_offset_of_m_Asset_2() { return static_cast<int32_t>(offsetof(InputActionMap_tBA45B784C5957091166E0007413402A3E83DD226, ___m_Asset_2)); }
	inline InputActionAsset_tB1114F77EFFAE61A28A8A559662A6FCCF444F70E * get_m_Asset_2() const { return ___m_Asset_2; }
	inline InputActionAsset_tB1114F77EFFAE61A28A8A559662A6FCCF444F70E ** get_address_of_m_Asset_2() { return &___m_Asset_2; }
	inline void set_m_Asset_2(InputActionAsset_tB1114F77EFFAE61A28A8A559662A6FCCF444F70E * value)
	{
		___m_Asset_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Asset_2), (void*)value);
	}

	inline static int32_t get_offset_of_m_Actions_3() { return static_cast<int32_t>(offsetof(InputActionMap_tBA45B784C5957091166E0007413402A3E83DD226, ___m_Actions_3)); }
	inline InputActionU5BU5D_t612D1F4255E82373FD5E5514AD83FA50B21A6A73* get_m_Actions_3() const { return ___m_Actions_3; }
	inline InputActionU5BU5D_t612D1F4255E82373FD5E5514AD83FA50B21A6A73** get_address_of_m_Actions_3() { return &___m_Actions_3; }
	inline void set_m_Actions_3(InputActionU5BU5D_t612D1F4255E82373FD5E5514AD83FA50B21A6A73* value)
	{
		___m_Actions_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Actions_3), (void*)value);
	}

	inline static int32_t get_offset_of_m_Bindings_4() { return static_cast<int32_t>(offsetof(InputActionMap_tBA45B784C5957091166E0007413402A3E83DD226, ___m_Bindings_4)); }
	inline InputBindingU5BU5D_t3CCBD5F5A51F370BFD0A373A770C8720F2A6115E* get_m_Bindings_4() const { return ___m_Bindings_4; }
	inline InputBindingU5BU5D_t3CCBD5F5A51F370BFD0A373A770C8720F2A6115E** get_address_of_m_Bindings_4() { return &___m_Bindings_4; }
	inline void set_m_Bindings_4(InputBindingU5BU5D_t3CCBD5F5A51F370BFD0A373A770C8720F2A6115E* value)
	{
		___m_Bindings_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Bindings_4), (void*)value);
	}

	inline static int32_t get_offset_of_m_BindingsForEachAction_5() { return static_cast<int32_t>(offsetof(InputActionMap_tBA45B784C5957091166E0007413402A3E83DD226, ___m_BindingsForEachAction_5)); }
	inline InputBindingU5BU5D_t3CCBD5F5A51F370BFD0A373A770C8720F2A6115E* get_m_BindingsForEachAction_5() const { return ___m_BindingsForEachAction_5; }
	inline InputBindingU5BU5D_t3CCBD5F5A51F370BFD0A373A770C8720F2A6115E** get_address_of_m_BindingsForEachAction_5() { return &___m_BindingsForEachAction_5; }
	inline void set_m_BindingsForEachAction_5(InputBindingU5BU5D_t3CCBD5F5A51F370BFD0A373A770C8720F2A6115E* value)
	{
		___m_BindingsForEachAction_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_BindingsForEachAction_5), (void*)value);
	}

	inline static int32_t get_offset_of_m_ControlsForEachAction_6() { return static_cast<int32_t>(offsetof(InputActionMap_tBA45B784C5957091166E0007413402A3E83DD226, ___m_ControlsForEachAction_6)); }
	inline InputControlU5BU5D_t4668D8411829C981759512FED1506B20F902CA67* get_m_ControlsForEachAction_6() const { return ___m_ControlsForEachAction_6; }
	inline InputControlU5BU5D_t4668D8411829C981759512FED1506B20F902CA67** get_address_of_m_ControlsForEachAction_6() { return &___m_ControlsForEachAction_6; }
	inline void set_m_ControlsForEachAction_6(InputControlU5BU5D_t4668D8411829C981759512FED1506B20F902CA67* value)
	{
		___m_ControlsForEachAction_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_ControlsForEachAction_6), (void*)value);
	}

	inline static int32_t get_offset_of_m_EnabledActionsCount_7() { return static_cast<int32_t>(offsetof(InputActionMap_tBA45B784C5957091166E0007413402A3E83DD226, ___m_EnabledActionsCount_7)); }
	inline int32_t get_m_EnabledActionsCount_7() const { return ___m_EnabledActionsCount_7; }
	inline int32_t* get_address_of_m_EnabledActionsCount_7() { return &___m_EnabledActionsCount_7; }
	inline void set_m_EnabledActionsCount_7(int32_t value)
	{
		___m_EnabledActionsCount_7 = value;
	}

	inline static int32_t get_offset_of_m_SingletonAction_8() { return static_cast<int32_t>(offsetof(InputActionMap_tBA45B784C5957091166E0007413402A3E83DD226, ___m_SingletonAction_8)); }
	inline InputAction_tF0C77AF72E0C19608B020E77A2C36C04E9DCBE48 * get_m_SingletonAction_8() const { return ___m_SingletonAction_8; }
	inline InputAction_tF0C77AF72E0C19608B020E77A2C36C04E9DCBE48 ** get_address_of_m_SingletonAction_8() { return &___m_SingletonAction_8; }
	inline void set_m_SingletonAction_8(InputAction_tF0C77AF72E0C19608B020E77A2C36C04E9DCBE48 * value)
	{
		___m_SingletonAction_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_SingletonAction_8), (void*)value);
	}

	inline static int32_t get_offset_of_m_MapIndexInState_9() { return static_cast<int32_t>(offsetof(InputActionMap_tBA45B784C5957091166E0007413402A3E83DD226, ___m_MapIndexInState_9)); }
	inline int32_t get_m_MapIndexInState_9() const { return ___m_MapIndexInState_9; }
	inline int32_t* get_address_of_m_MapIndexInState_9() { return &___m_MapIndexInState_9; }
	inline void set_m_MapIndexInState_9(int32_t value)
	{
		___m_MapIndexInState_9 = value;
	}

	inline static int32_t get_offset_of_m_State_10() { return static_cast<int32_t>(offsetof(InputActionMap_tBA45B784C5957091166E0007413402A3E83DD226, ___m_State_10)); }
	inline InputActionState_tE8F8D2439CDB9528D77707FB251FBE280C34664C * get_m_State_10() const { return ___m_State_10; }
	inline InputActionState_tE8F8D2439CDB9528D77707FB251FBE280C34664C ** get_address_of_m_State_10() { return &___m_State_10; }
	inline void set_m_State_10(InputActionState_tE8F8D2439CDB9528D77707FB251FBE280C34664C * value)
	{
		___m_State_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_State_10), (void*)value);
	}

	inline static int32_t get_offset_of_m_NeedToResolveBindings_11() { return static_cast<int32_t>(offsetof(InputActionMap_tBA45B784C5957091166E0007413402A3E83DD226, ___m_NeedToResolveBindings_11)); }
	inline bool get_m_NeedToResolveBindings_11() const { return ___m_NeedToResolveBindings_11; }
	inline bool* get_address_of_m_NeedToResolveBindings_11() { return &___m_NeedToResolveBindings_11; }
	inline void set_m_NeedToResolveBindings_11(bool value)
	{
		___m_NeedToResolveBindings_11 = value;
	}

	inline static int32_t get_offset_of_m_BindingMask_12() { return static_cast<int32_t>(offsetof(InputActionMap_tBA45B784C5957091166E0007413402A3E83DD226, ___m_BindingMask_12)); }
	inline Nullable_1_tAF2F42FC2F7DC5A356BAC77371758E4D7339F104  get_m_BindingMask_12() const { return ___m_BindingMask_12; }
	inline Nullable_1_tAF2F42FC2F7DC5A356BAC77371758E4D7339F104 * get_address_of_m_BindingMask_12() { return &___m_BindingMask_12; }
	inline void set_m_BindingMask_12(Nullable_1_tAF2F42FC2F7DC5A356BAC77371758E4D7339F104  value)
	{
		___m_BindingMask_12 = value;
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_BindingMask_12))->___value_0))->___m_Name_2), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_BindingMask_12))->___value_0))->___m_Id_3), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_BindingMask_12))->___value_0))->___m_Path_4), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_BindingMask_12))->___value_0))->___m_Interactions_5), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_BindingMask_12))->___value_0))->___m_Processors_6), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_BindingMask_12))->___value_0))->___m_Groups_7), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_BindingMask_12))->___value_0))->___m_Action_8), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_BindingMask_12))->___value_0))->___m_OverridePath_10), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_BindingMask_12))->___value_0))->___m_OverrideInteractions_11), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_BindingMask_12))->___value_0))->___m_OverrideProcessors_12), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_m_DevicesCount_13() { return static_cast<int32_t>(offsetof(InputActionMap_tBA45B784C5957091166E0007413402A3E83DD226, ___m_DevicesCount_13)); }
	inline int32_t get_m_DevicesCount_13() const { return ___m_DevicesCount_13; }
	inline int32_t* get_address_of_m_DevicesCount_13() { return &___m_DevicesCount_13; }
	inline void set_m_DevicesCount_13(int32_t value)
	{
		___m_DevicesCount_13 = value;
	}

	inline static int32_t get_offset_of_m_DevicesArray_14() { return static_cast<int32_t>(offsetof(InputActionMap_tBA45B784C5957091166E0007413402A3E83DD226, ___m_DevicesArray_14)); }
	inline InputDeviceU5BU5D_t51F80AEE3E39E34077F38FD56C262347F180A2B2* get_m_DevicesArray_14() const { return ___m_DevicesArray_14; }
	inline InputDeviceU5BU5D_t51F80AEE3E39E34077F38FD56C262347F180A2B2** get_address_of_m_DevicesArray_14() { return &___m_DevicesArray_14; }
	inline void set_m_DevicesArray_14(InputDeviceU5BU5D_t51F80AEE3E39E34077F38FD56C262347F180A2B2* value)
	{
		___m_DevicesArray_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_DevicesArray_14), (void*)value);
	}

	inline static int32_t get_offset_of_m_ActionCallbacks_15() { return static_cast<int32_t>(offsetof(InputActionMap_tBA45B784C5957091166E0007413402A3E83DD226, ___m_ActionCallbacks_15)); }
	inline InlinedArray_1_tD8F648109EC431FFA4D6E31DC56D88C27692A37E  get_m_ActionCallbacks_15() const { return ___m_ActionCallbacks_15; }
	inline InlinedArray_1_tD8F648109EC431FFA4D6E31DC56D88C27692A37E * get_address_of_m_ActionCallbacks_15() { return &___m_ActionCallbacks_15; }
	inline void set_m_ActionCallbacks_15(InlinedArray_1_tD8F648109EC431FFA4D6E31DC56D88C27692A37E  value)
	{
		___m_ActionCallbacks_15 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_ActionCallbacks_15))->___firstValue_1), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_ActionCallbacks_15))->___additionalValues_2), (void*)NULL);
		#endif
	}
};

struct InputActionMap_tBA45B784C5957091166E0007413402A3E83DD226_StaticFields
{
public:
	// System.Int32 UnityEngine.InputSystem.InputActionMap::s_DeferBindingResolution
	int32_t ___s_DeferBindingResolution_16;

public:
	inline static int32_t get_offset_of_s_DeferBindingResolution_16() { return static_cast<int32_t>(offsetof(InputActionMap_tBA45B784C5957091166E0007413402A3E83DD226_StaticFields, ___s_DeferBindingResolution_16)); }
	inline int32_t get_s_DeferBindingResolution_16() const { return ___s_DeferBindingResolution_16; }
	inline int32_t* get_address_of_s_DeferBindingResolution_16() { return &___s_DeferBindingResolution_16; }
	inline void set_s_DeferBindingResolution_16(int32_t value)
	{
		___s_DeferBindingResolution_16 = value;
	}
};


// UnityEngine.InputSystem.InputDevice
struct InputDevice_t9E276EAE78C382539051998DEA1CD0ECF2E91323  : public InputControl_t3CDD1115017147EEC9D825834637D7700669C006
{
public:
	// UnityEngine.InputSystem.InputDevice/DeviceFlags UnityEngine.InputSystem.InputDevice::m_DeviceFlags
	int32_t ___m_DeviceFlags_24;
	// System.Int32 UnityEngine.InputSystem.InputDevice::m_DeviceId
	int32_t ___m_DeviceId_25;
	// System.Int32 UnityEngine.InputSystem.InputDevice::m_ParticipantId
	int32_t ___m_ParticipantId_26;
	// System.Int32 UnityEngine.InputSystem.InputDevice::m_DeviceIndex
	int32_t ___m_DeviceIndex_27;
	// UnityEngine.InputSystem.Layouts.InputDeviceDescription UnityEngine.InputSystem.InputDevice::m_Description
	InputDeviceDescription_tDCF3D4C660B97F28D8AB46D82C0BA8EA727E48C3  ___m_Description_28;
	// System.Double UnityEngine.InputSystem.InputDevice::m_LastUpdateTimeInternal
	double ___m_LastUpdateTimeInternal_29;
	// System.UInt32 UnityEngine.InputSystem.InputDevice::m_CurrentUpdateStepCount
	uint32_t ___m_CurrentUpdateStepCount_30;
	// UnityEngine.InputSystem.Utilities.InternedString[] UnityEngine.InputSystem.InputDevice::m_AliasesForEachControl
	InternedStringU5BU5D_t1B3BD9ED90129E67B58E1681B1944E72F8E0E648* ___m_AliasesForEachControl_31;
	// UnityEngine.InputSystem.Utilities.InternedString[] UnityEngine.InputSystem.InputDevice::m_UsagesForEachControl
	InternedStringU5BU5D_t1B3BD9ED90129E67B58E1681B1944E72F8E0E648* ___m_UsagesForEachControl_32;
	// UnityEngine.InputSystem.InputControl[] UnityEngine.InputSystem.InputDevice::m_UsageToControl
	InputControlU5BU5D_t4668D8411829C981759512FED1506B20F902CA67* ___m_UsageToControl_33;
	// UnityEngine.InputSystem.InputControl[] UnityEngine.InputSystem.InputDevice::m_ChildrenForEachControl
	InputControlU5BU5D_t4668D8411829C981759512FED1506B20F902CA67* ___m_ChildrenForEachControl_34;

public:
	inline static int32_t get_offset_of_m_DeviceFlags_24() { return static_cast<int32_t>(offsetof(InputDevice_t9E276EAE78C382539051998DEA1CD0ECF2E91323, ___m_DeviceFlags_24)); }
	inline int32_t get_m_DeviceFlags_24() const { return ___m_DeviceFlags_24; }
	inline int32_t* get_address_of_m_DeviceFlags_24() { return &___m_DeviceFlags_24; }
	inline void set_m_DeviceFlags_24(int32_t value)
	{
		___m_DeviceFlags_24 = value;
	}

	inline static int32_t get_offset_of_m_DeviceId_25() { return static_cast<int32_t>(offsetof(InputDevice_t9E276EAE78C382539051998DEA1CD0ECF2E91323, ___m_DeviceId_25)); }
	inline int32_t get_m_DeviceId_25() const { return ___m_DeviceId_25; }
	inline int32_t* get_address_of_m_DeviceId_25() { return &___m_DeviceId_25; }
	inline void set_m_DeviceId_25(int32_t value)
	{
		___m_DeviceId_25 = value;
	}

	inline static int32_t get_offset_of_m_ParticipantId_26() { return static_cast<int32_t>(offsetof(InputDevice_t9E276EAE78C382539051998DEA1CD0ECF2E91323, ___m_ParticipantId_26)); }
	inline int32_t get_m_ParticipantId_26() const { return ___m_ParticipantId_26; }
	inline int32_t* get_address_of_m_ParticipantId_26() { return &___m_ParticipantId_26; }
	inline void set_m_ParticipantId_26(int32_t value)
	{
		___m_ParticipantId_26 = value;
	}

	inline static int32_t get_offset_of_m_DeviceIndex_27() { return static_cast<int32_t>(offsetof(InputDevice_t9E276EAE78C382539051998DEA1CD0ECF2E91323, ___m_DeviceIndex_27)); }
	inline int32_t get_m_DeviceIndex_27() const { return ___m_DeviceIndex_27; }
	inline int32_t* get_address_of_m_DeviceIndex_27() { return &___m_DeviceIndex_27; }
	inline void set_m_DeviceIndex_27(int32_t value)
	{
		___m_DeviceIndex_27 = value;
	}

	inline static int32_t get_offset_of_m_Description_28() { return static_cast<int32_t>(offsetof(InputDevice_t9E276EAE78C382539051998DEA1CD0ECF2E91323, ___m_Description_28)); }
	inline InputDeviceDescription_tDCF3D4C660B97F28D8AB46D82C0BA8EA727E48C3  get_m_Description_28() const { return ___m_Description_28; }
	inline InputDeviceDescription_tDCF3D4C660B97F28D8AB46D82C0BA8EA727E48C3 * get_address_of_m_Description_28() { return &___m_Description_28; }
	inline void set_m_Description_28(InputDeviceDescription_tDCF3D4C660B97F28D8AB46D82C0BA8EA727E48C3  value)
	{
		___m_Description_28 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_Description_28))->___m_InterfaceName_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_Description_28))->___m_DeviceClass_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_Description_28))->___m_Manufacturer_2), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_Description_28))->___m_Product_3), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_Description_28))->___m_Serial_4), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_Description_28))->___m_Version_5), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_Description_28))->___m_Capabilities_6), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_m_LastUpdateTimeInternal_29() { return static_cast<int32_t>(offsetof(InputDevice_t9E276EAE78C382539051998DEA1CD0ECF2E91323, ___m_LastUpdateTimeInternal_29)); }
	inline double get_m_LastUpdateTimeInternal_29() const { return ___m_LastUpdateTimeInternal_29; }
	inline double* get_address_of_m_LastUpdateTimeInternal_29() { return &___m_LastUpdateTimeInternal_29; }
	inline void set_m_LastUpdateTimeInternal_29(double value)
	{
		___m_LastUpdateTimeInternal_29 = value;
	}

	inline static int32_t get_offset_of_m_CurrentUpdateStepCount_30() { return static_cast<int32_t>(offsetof(InputDevice_t9E276EAE78C382539051998DEA1CD0ECF2E91323, ___m_CurrentUpdateStepCount_30)); }
	inline uint32_t get_m_CurrentUpdateStepCount_30() const { return ___m_CurrentUpdateStepCount_30; }
	inline uint32_t* get_address_of_m_CurrentUpdateStepCount_30() { return &___m_CurrentUpdateStepCount_30; }
	inline void set_m_CurrentUpdateStepCount_30(uint32_t value)
	{
		___m_CurrentUpdateStepCount_30 = value;
	}

	inline static int32_t get_offset_of_m_AliasesForEachControl_31() { return static_cast<int32_t>(offsetof(InputDevice_t9E276EAE78C382539051998DEA1CD0ECF2E91323, ___m_AliasesForEachControl_31)); }
	inline InternedStringU5BU5D_t1B3BD9ED90129E67B58E1681B1944E72F8E0E648* get_m_AliasesForEachControl_31() const { return ___m_AliasesForEachControl_31; }
	inline InternedStringU5BU5D_t1B3BD9ED90129E67B58E1681B1944E72F8E0E648** get_address_of_m_AliasesForEachControl_31() { return &___m_AliasesForEachControl_31; }
	inline void set_m_AliasesForEachControl_31(InternedStringU5BU5D_t1B3BD9ED90129E67B58E1681B1944E72F8E0E648* value)
	{
		___m_AliasesForEachControl_31 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_AliasesForEachControl_31), (void*)value);
	}

	inline static int32_t get_offset_of_m_UsagesForEachControl_32() { return static_cast<int32_t>(offsetof(InputDevice_t9E276EAE78C382539051998DEA1CD0ECF2E91323, ___m_UsagesForEachControl_32)); }
	inline InternedStringU5BU5D_t1B3BD9ED90129E67B58E1681B1944E72F8E0E648* get_m_UsagesForEachControl_32() const { return ___m_UsagesForEachControl_32; }
	inline InternedStringU5BU5D_t1B3BD9ED90129E67B58E1681B1944E72F8E0E648** get_address_of_m_UsagesForEachControl_32() { return &___m_UsagesForEachControl_32; }
	inline void set_m_UsagesForEachControl_32(InternedStringU5BU5D_t1B3BD9ED90129E67B58E1681B1944E72F8E0E648* value)
	{
		___m_UsagesForEachControl_32 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_UsagesForEachControl_32), (void*)value);
	}

	inline static int32_t get_offset_of_m_UsageToControl_33() { return static_cast<int32_t>(offsetof(InputDevice_t9E276EAE78C382539051998DEA1CD0ECF2E91323, ___m_UsageToControl_33)); }
	inline InputControlU5BU5D_t4668D8411829C981759512FED1506B20F902CA67* get_m_UsageToControl_33() const { return ___m_UsageToControl_33; }
	inline InputControlU5BU5D_t4668D8411829C981759512FED1506B20F902CA67** get_address_of_m_UsageToControl_33() { return &___m_UsageToControl_33; }
	inline void set_m_UsageToControl_33(InputControlU5BU5D_t4668D8411829C981759512FED1506B20F902CA67* value)
	{
		___m_UsageToControl_33 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_UsageToControl_33), (void*)value);
	}

	inline static int32_t get_offset_of_m_ChildrenForEachControl_34() { return static_cast<int32_t>(offsetof(InputDevice_t9E276EAE78C382539051998DEA1CD0ECF2E91323, ___m_ChildrenForEachControl_34)); }
	inline InputControlU5BU5D_t4668D8411829C981759512FED1506B20F902CA67* get_m_ChildrenForEachControl_34() const { return ___m_ChildrenForEachControl_34; }
	inline InputControlU5BU5D_t4668D8411829C981759512FED1506B20F902CA67** get_address_of_m_ChildrenForEachControl_34() { return &___m_ChildrenForEachControl_34; }
	inline void set_m_ChildrenForEachControl_34(InputControlU5BU5D_t4668D8411829C981759512FED1506B20F902CA67* value)
	{
		___m_ChildrenForEachControl_34 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_ChildrenForEachControl_34), (void*)value);
	}
};


// UnityEngine.MonoBehaviour
struct MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A  : public Behaviour_t1A3DDDCF73B4627928FBFE02ED52B7251777DBD9
{
public:

public:
};


// UnityEngine.InputSystem.Samples.InputVisualizer
struct InputVisualizer_t51917CF1458037727EDDF8C090AEB773F3EAC29E  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// System.String UnityEngine.InputSystem.Samples.InputVisualizer::m_Label
	String_t* ___m_Label_4;
	// System.Int32 UnityEngine.InputSystem.Samples.InputVisualizer::m_HistorySamples
	int32_t ___m_HistorySamples_5;
	// System.Single UnityEngine.InputSystem.Samples.InputVisualizer::m_TimeWindow
	float ___m_TimeWindow_6;
	// UnityEngine.Rect UnityEngine.InputSystem.Samples.InputVisualizer::m_Rect
	Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878  ___m_Rect_7;
	// UnityEngine.GUIContent UnityEngine.InputSystem.Samples.InputVisualizer::m_LabelContent
	GUIContent_t39256993BF4A33F76E073488D6A2F13D678DF60E * ___m_LabelContent_8;
	// UnityEngine.InputSystem.Samples.VisualizationHelpers/Visualizer UnityEngine.InputSystem.Samples.InputVisualizer::m_Visualizer
	Visualizer_t48757514E9C44C7B20B531BB6D2713A570AA8B74 * ___m_Visualizer_9;
	// UnityEngine.InputSystem.Samples.InputVisualizer UnityEngine.InputSystem.Samples.InputVisualizer::m_Parent
	InputVisualizer_t51917CF1458037727EDDF8C090AEB773F3EAC29E * ___m_Parent_10;

public:
	inline static int32_t get_offset_of_m_Label_4() { return static_cast<int32_t>(offsetof(InputVisualizer_t51917CF1458037727EDDF8C090AEB773F3EAC29E, ___m_Label_4)); }
	inline String_t* get_m_Label_4() const { return ___m_Label_4; }
	inline String_t** get_address_of_m_Label_4() { return &___m_Label_4; }
	inline void set_m_Label_4(String_t* value)
	{
		___m_Label_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Label_4), (void*)value);
	}

	inline static int32_t get_offset_of_m_HistorySamples_5() { return static_cast<int32_t>(offsetof(InputVisualizer_t51917CF1458037727EDDF8C090AEB773F3EAC29E, ___m_HistorySamples_5)); }
	inline int32_t get_m_HistorySamples_5() const { return ___m_HistorySamples_5; }
	inline int32_t* get_address_of_m_HistorySamples_5() { return &___m_HistorySamples_5; }
	inline void set_m_HistorySamples_5(int32_t value)
	{
		___m_HistorySamples_5 = value;
	}

	inline static int32_t get_offset_of_m_TimeWindow_6() { return static_cast<int32_t>(offsetof(InputVisualizer_t51917CF1458037727EDDF8C090AEB773F3EAC29E, ___m_TimeWindow_6)); }
	inline float get_m_TimeWindow_6() const { return ___m_TimeWindow_6; }
	inline float* get_address_of_m_TimeWindow_6() { return &___m_TimeWindow_6; }
	inline void set_m_TimeWindow_6(float value)
	{
		___m_TimeWindow_6 = value;
	}

	inline static int32_t get_offset_of_m_Rect_7() { return static_cast<int32_t>(offsetof(InputVisualizer_t51917CF1458037727EDDF8C090AEB773F3EAC29E, ___m_Rect_7)); }
	inline Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878  get_m_Rect_7() const { return ___m_Rect_7; }
	inline Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878 * get_address_of_m_Rect_7() { return &___m_Rect_7; }
	inline void set_m_Rect_7(Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878  value)
	{
		___m_Rect_7 = value;
	}

	inline static int32_t get_offset_of_m_LabelContent_8() { return static_cast<int32_t>(offsetof(InputVisualizer_t51917CF1458037727EDDF8C090AEB773F3EAC29E, ___m_LabelContent_8)); }
	inline GUIContent_t39256993BF4A33F76E073488D6A2F13D678DF60E * get_m_LabelContent_8() const { return ___m_LabelContent_8; }
	inline GUIContent_t39256993BF4A33F76E073488D6A2F13D678DF60E ** get_address_of_m_LabelContent_8() { return &___m_LabelContent_8; }
	inline void set_m_LabelContent_8(GUIContent_t39256993BF4A33F76E073488D6A2F13D678DF60E * value)
	{
		___m_LabelContent_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_LabelContent_8), (void*)value);
	}

	inline static int32_t get_offset_of_m_Visualizer_9() { return static_cast<int32_t>(offsetof(InputVisualizer_t51917CF1458037727EDDF8C090AEB773F3EAC29E, ___m_Visualizer_9)); }
	inline Visualizer_t48757514E9C44C7B20B531BB6D2713A570AA8B74 * get_m_Visualizer_9() const { return ___m_Visualizer_9; }
	inline Visualizer_t48757514E9C44C7B20B531BB6D2713A570AA8B74 ** get_address_of_m_Visualizer_9() { return &___m_Visualizer_9; }
	inline void set_m_Visualizer_9(Visualizer_t48757514E9C44C7B20B531BB6D2713A570AA8B74 * value)
	{
		___m_Visualizer_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Visualizer_9), (void*)value);
	}

	inline static int32_t get_offset_of_m_Parent_10() { return static_cast<int32_t>(offsetof(InputVisualizer_t51917CF1458037727EDDF8C090AEB773F3EAC29E, ___m_Parent_10)); }
	inline InputVisualizer_t51917CF1458037727EDDF8C090AEB773F3EAC29E * get_m_Parent_10() const { return ___m_Parent_10; }
	inline InputVisualizer_t51917CF1458037727EDDF8C090AEB773F3EAC29E ** get_address_of_m_Parent_10() { return &___m_Parent_10; }
	inline void set_m_Parent_10(InputVisualizer_t51917CF1458037727EDDF8C090AEB773F3EAC29E * value)
	{
		___m_Parent_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Parent_10), (void*)value);
	}
};

struct InputVisualizer_t51917CF1458037727EDDF8C090AEB773F3EAC29E_StaticFields
{
public:
	// UnityEngine.GUIStyle UnityEngine.InputSystem.Samples.InputVisualizer::s_LabelStyle
	GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * ___s_LabelStyle_11;

public:
	inline static int32_t get_offset_of_s_LabelStyle_11() { return static_cast<int32_t>(offsetof(InputVisualizer_t51917CF1458037727EDDF8C090AEB773F3EAC29E_StaticFields, ___s_LabelStyle_11)); }
	inline GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * get_s_LabelStyle_11() const { return ___s_LabelStyle_11; }
	inline GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 ** get_address_of_s_LabelStyle_11() { return &___s_LabelStyle_11; }
	inline void set_s_LabelStyle_11(GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * value)
	{
		___s_LabelStyle_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_LabelStyle_11), (void*)value);
	}
};


// UnityEngine.InputSystem.Samples.InputActionVisualizer
struct InputActionVisualizer_t726DF6A67FB0B18AEECDBAB992EABF3B82E339C6  : public InputVisualizer_t51917CF1458037727EDDF8C090AEB773F3EAC29E
{
public:
	// UnityEngine.InputSystem.Samples.InputActionVisualizer/Visualization UnityEngine.InputSystem.Samples.InputActionVisualizer::m_Visualization
	int32_t ___m_Visualization_12;
	// UnityEngine.InputSystem.InputActionReference UnityEngine.InputSystem.Samples.InputActionVisualizer::m_ActionReference
	InputActionReference_tB2E9E368D60A4C8E066C7CE0EE2A80C62320C28E * ___m_ActionReference_13;
	// System.String UnityEngine.InputSystem.Samples.InputActionVisualizer::m_ActionName
	String_t* ___m_ActionName_14;
	// System.Boolean UnityEngine.InputSystem.Samples.InputActionVisualizer::m_ShowControlName
	bool ___m_ShowControlName_15;
	// UnityEngine.InputSystem.InputAction UnityEngine.InputSystem.Samples.InputActionVisualizer::m_Action
	InputAction_tF0C77AF72E0C19608B020E77A2C36C04E9DCBE48 * ___m_Action_16;
	// UnityEngine.InputSystem.InputControl UnityEngine.InputSystem.Samples.InputActionVisualizer::m_ActiveControl
	InputControl_t3CDD1115017147EEC9D825834637D7700669C006 * ___m_ActiveControl_17;
	// UnityEngine.GUIContent UnityEngine.InputSystem.Samples.InputActionVisualizer::m_ActiveControlName
	GUIContent_t39256993BF4A33F76E073488D6A2F13D678DF60E * ___m_ActiveControlName_18;

public:
	inline static int32_t get_offset_of_m_Visualization_12() { return static_cast<int32_t>(offsetof(InputActionVisualizer_t726DF6A67FB0B18AEECDBAB992EABF3B82E339C6, ___m_Visualization_12)); }
	inline int32_t get_m_Visualization_12() const { return ___m_Visualization_12; }
	inline int32_t* get_address_of_m_Visualization_12() { return &___m_Visualization_12; }
	inline void set_m_Visualization_12(int32_t value)
	{
		___m_Visualization_12 = value;
	}

	inline static int32_t get_offset_of_m_ActionReference_13() { return static_cast<int32_t>(offsetof(InputActionVisualizer_t726DF6A67FB0B18AEECDBAB992EABF3B82E339C6, ___m_ActionReference_13)); }
	inline InputActionReference_tB2E9E368D60A4C8E066C7CE0EE2A80C62320C28E * get_m_ActionReference_13() const { return ___m_ActionReference_13; }
	inline InputActionReference_tB2E9E368D60A4C8E066C7CE0EE2A80C62320C28E ** get_address_of_m_ActionReference_13() { return &___m_ActionReference_13; }
	inline void set_m_ActionReference_13(InputActionReference_tB2E9E368D60A4C8E066C7CE0EE2A80C62320C28E * value)
	{
		___m_ActionReference_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_ActionReference_13), (void*)value);
	}

	inline static int32_t get_offset_of_m_ActionName_14() { return static_cast<int32_t>(offsetof(InputActionVisualizer_t726DF6A67FB0B18AEECDBAB992EABF3B82E339C6, ___m_ActionName_14)); }
	inline String_t* get_m_ActionName_14() const { return ___m_ActionName_14; }
	inline String_t** get_address_of_m_ActionName_14() { return &___m_ActionName_14; }
	inline void set_m_ActionName_14(String_t* value)
	{
		___m_ActionName_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_ActionName_14), (void*)value);
	}

	inline static int32_t get_offset_of_m_ShowControlName_15() { return static_cast<int32_t>(offsetof(InputActionVisualizer_t726DF6A67FB0B18AEECDBAB992EABF3B82E339C6, ___m_ShowControlName_15)); }
	inline bool get_m_ShowControlName_15() const { return ___m_ShowControlName_15; }
	inline bool* get_address_of_m_ShowControlName_15() { return &___m_ShowControlName_15; }
	inline void set_m_ShowControlName_15(bool value)
	{
		___m_ShowControlName_15 = value;
	}

	inline static int32_t get_offset_of_m_Action_16() { return static_cast<int32_t>(offsetof(InputActionVisualizer_t726DF6A67FB0B18AEECDBAB992EABF3B82E339C6, ___m_Action_16)); }
	inline InputAction_tF0C77AF72E0C19608B020E77A2C36C04E9DCBE48 * get_m_Action_16() const { return ___m_Action_16; }
	inline InputAction_tF0C77AF72E0C19608B020E77A2C36C04E9DCBE48 ** get_address_of_m_Action_16() { return &___m_Action_16; }
	inline void set_m_Action_16(InputAction_tF0C77AF72E0C19608B020E77A2C36C04E9DCBE48 * value)
	{
		___m_Action_16 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Action_16), (void*)value);
	}

	inline static int32_t get_offset_of_m_ActiveControl_17() { return static_cast<int32_t>(offsetof(InputActionVisualizer_t726DF6A67FB0B18AEECDBAB992EABF3B82E339C6, ___m_ActiveControl_17)); }
	inline InputControl_t3CDD1115017147EEC9D825834637D7700669C006 * get_m_ActiveControl_17() const { return ___m_ActiveControl_17; }
	inline InputControl_t3CDD1115017147EEC9D825834637D7700669C006 ** get_address_of_m_ActiveControl_17() { return &___m_ActiveControl_17; }
	inline void set_m_ActiveControl_17(InputControl_t3CDD1115017147EEC9D825834637D7700669C006 * value)
	{
		___m_ActiveControl_17 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_ActiveControl_17), (void*)value);
	}

	inline static int32_t get_offset_of_m_ActiveControlName_18() { return static_cast<int32_t>(offsetof(InputActionVisualizer_t726DF6A67FB0B18AEECDBAB992EABF3B82E339C6, ___m_ActiveControlName_18)); }
	inline GUIContent_t39256993BF4A33F76E073488D6A2F13D678DF60E * get_m_ActiveControlName_18() const { return ___m_ActiveControlName_18; }
	inline GUIContent_t39256993BF4A33F76E073488D6A2F13D678DF60E ** get_address_of_m_ActiveControlName_18() { return &___m_ActiveControlName_18; }
	inline void set_m_ActiveControlName_18(GUIContent_t39256993BF4A33F76E073488D6A2F13D678DF60E * value)
	{
		___m_ActiveControlName_18 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_ActiveControlName_18), (void*)value);
	}
};

struct InputActionVisualizer_t726DF6A67FB0B18AEECDBAB992EABF3B82E339C6_StaticFields
{
public:
	// System.Collections.Generic.List`1<UnityEngine.InputSystem.Samples.InputActionVisualizer> UnityEngine.InputSystem.Samples.InputActionVisualizer::s_EnabledInstances
	List_1_t875D9DC885BBF5157329E3844ACC8835F3F5F066 * ___s_EnabledInstances_19;
	// UnityEngine.Color[] UnityEngine.InputSystem.Samples.InputActionVisualizer::s_InteractionColors
	ColorU5BU5D_t358DD89F511301E663AD9157305B94A2DEFF8834* ___s_InteractionColors_20;

public:
	inline static int32_t get_offset_of_s_EnabledInstances_19() { return static_cast<int32_t>(offsetof(InputActionVisualizer_t726DF6A67FB0B18AEECDBAB992EABF3B82E339C6_StaticFields, ___s_EnabledInstances_19)); }
	inline List_1_t875D9DC885BBF5157329E3844ACC8835F3F5F066 * get_s_EnabledInstances_19() const { return ___s_EnabledInstances_19; }
	inline List_1_t875D9DC885BBF5157329E3844ACC8835F3F5F066 ** get_address_of_s_EnabledInstances_19() { return &___s_EnabledInstances_19; }
	inline void set_s_EnabledInstances_19(List_1_t875D9DC885BBF5157329E3844ACC8835F3F5F066 * value)
	{
		___s_EnabledInstances_19 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_EnabledInstances_19), (void*)value);
	}

	inline static int32_t get_offset_of_s_InteractionColors_20() { return static_cast<int32_t>(offsetof(InputActionVisualizer_t726DF6A67FB0B18AEECDBAB992EABF3B82E339C6_StaticFields, ___s_InteractionColors_20)); }
	inline ColorU5BU5D_t358DD89F511301E663AD9157305B94A2DEFF8834* get_s_InteractionColors_20() const { return ___s_InteractionColors_20; }
	inline ColorU5BU5D_t358DD89F511301E663AD9157305B94A2DEFF8834** get_address_of_s_InteractionColors_20() { return &___s_InteractionColors_20; }
	inline void set_s_InteractionColors_20(ColorU5BU5D_t358DD89F511301E663AD9157305B94A2DEFF8834* value)
	{
		___s_InteractionColors_20 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_InteractionColors_20), (void*)value);
	}
};


// UnityEngine.InputSystem.Samples.InputControlVisualizer
struct InputControlVisualizer_t83B42575FEC0B8A79280A7D5AE2886C0494BC6AF  : public InputVisualizer_t51917CF1458037727EDDF8C090AEB773F3EAC29E
{
public:
	// UnityEngine.InputSystem.Samples.InputControlVisualizer/Mode UnityEngine.InputSystem.Samples.InputControlVisualizer::m_Visualization
	int32_t ___m_Visualization_12;
	// System.String UnityEngine.InputSystem.Samples.InputControlVisualizer::m_ControlPath
	String_t* ___m_ControlPath_13;
	// System.Int32 UnityEngine.InputSystem.Samples.InputControlVisualizer::m_ControlIndex
	int32_t ___m_ControlIndex_14;
	// UnityEngine.InputSystem.InputControl UnityEngine.InputSystem.Samples.InputControlVisualizer::m_Control
	InputControl_t3CDD1115017147EEC9D825834637D7700669C006 * ___m_Control_15;

public:
	inline static int32_t get_offset_of_m_Visualization_12() { return static_cast<int32_t>(offsetof(InputControlVisualizer_t83B42575FEC0B8A79280A7D5AE2886C0494BC6AF, ___m_Visualization_12)); }
	inline int32_t get_m_Visualization_12() const { return ___m_Visualization_12; }
	inline int32_t* get_address_of_m_Visualization_12() { return &___m_Visualization_12; }
	inline void set_m_Visualization_12(int32_t value)
	{
		___m_Visualization_12 = value;
	}

	inline static int32_t get_offset_of_m_ControlPath_13() { return static_cast<int32_t>(offsetof(InputControlVisualizer_t83B42575FEC0B8A79280A7D5AE2886C0494BC6AF, ___m_ControlPath_13)); }
	inline String_t* get_m_ControlPath_13() const { return ___m_ControlPath_13; }
	inline String_t** get_address_of_m_ControlPath_13() { return &___m_ControlPath_13; }
	inline void set_m_ControlPath_13(String_t* value)
	{
		___m_ControlPath_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_ControlPath_13), (void*)value);
	}

	inline static int32_t get_offset_of_m_ControlIndex_14() { return static_cast<int32_t>(offsetof(InputControlVisualizer_t83B42575FEC0B8A79280A7D5AE2886C0494BC6AF, ___m_ControlIndex_14)); }
	inline int32_t get_m_ControlIndex_14() const { return ___m_ControlIndex_14; }
	inline int32_t* get_address_of_m_ControlIndex_14() { return &___m_ControlIndex_14; }
	inline void set_m_ControlIndex_14(int32_t value)
	{
		___m_ControlIndex_14 = value;
	}

	inline static int32_t get_offset_of_m_Control_15() { return static_cast<int32_t>(offsetof(InputControlVisualizer_t83B42575FEC0B8A79280A7D5AE2886C0494BC6AF, ___m_Control_15)); }
	inline InputControl_t3CDD1115017147EEC9D825834637D7700669C006 * get_m_Control_15() const { return ___m_Control_15; }
	inline InputControl_t3CDD1115017147EEC9D825834637D7700669C006 ** get_address_of_m_Control_15() { return &___m_Control_15; }
	inline void set_m_Control_15(InputControl_t3CDD1115017147EEC9D825834637D7700669C006 * value)
	{
		___m_Control_15 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Control_15), (void*)value);
	}
};

struct InputControlVisualizer_t83B42575FEC0B8A79280A7D5AE2886C0494BC6AF_StaticFields
{
public:
	// System.Collections.Generic.List`1<UnityEngine.InputSystem.Samples.InputControlVisualizer> UnityEngine.InputSystem.Samples.InputControlVisualizer::s_EnabledInstances
	List_1_tD92B93CD7F6D0E73500ED17BEEE90D9C77282117 * ___s_EnabledInstances_16;

public:
	inline static int32_t get_offset_of_s_EnabledInstances_16() { return static_cast<int32_t>(offsetof(InputControlVisualizer_t83B42575FEC0B8A79280A7D5AE2886C0494BC6AF_StaticFields, ___s_EnabledInstances_16)); }
	inline List_1_tD92B93CD7F6D0E73500ED17BEEE90D9C77282117 * get_s_EnabledInstances_16() const { return ___s_EnabledInstances_16; }
	inline List_1_tD92B93CD7F6D0E73500ED17BEEE90D9C77282117 ** get_address_of_s_EnabledInstances_16() { return &___s_EnabledInstances_16; }
	inline void set_s_EnabledInstances_16(List_1_tD92B93CD7F6D0E73500ED17BEEE90D9C77282117 * value)
	{
		___s_EnabledInstances_16 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_EnabledInstances_16), (void*)value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// UnityEngine.Color[]
struct ColorU5BU5D_t358DD89F511301E663AD9157305B94A2DEFF8834  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  m_Items[1];

public:
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 * GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 * GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  value)
	{
		m_Items[index] = value;
	}
};
// UnityEngine.InputSystem.Samples.VisualizationHelpers/TimelineVisualizer/Timeline[]
struct TimelineU5BU5D_tC4060193BF7CE25CDC70D417EEDC7175EA74B44F  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) Timeline_t0E8C3B4B157DAE25A77A695529CE737933D5CCBE  m_Items[1];

public:
	inline Timeline_t0E8C3B4B157DAE25A77A695529CE737933D5CCBE  GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Timeline_t0E8C3B4B157DAE25A77A695529CE737933D5CCBE * GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Timeline_t0E8C3B4B157DAE25A77A695529CE737933D5CCBE  value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___name_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((m_Items + index)->___timeSamples_2))->___array_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((m_Items + index)->___frameSamples_3))->___array_0), (void*)NULL);
		#endif
	}
	inline Timeline_t0E8C3B4B157DAE25A77A695529CE737933D5CCBE  GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Timeline_t0E8C3B4B157DAE25A77A695529CE737933D5CCBE * GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Timeline_t0E8C3B4B157DAE25A77A695529CE737933D5CCBE  value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___name_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((m_Items + index)->___timeSamples_2))->___array_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((m_Items + index)->___frameSamples_3))->___array_0), (void*)NULL);
		#endif
	}
};
// UnityEngine.Vector2[]
struct Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  m_Items[1];

public:
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		m_Items[index] = value;
	}
};
// System.Object[]
struct ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) RuntimeObject * m_Items[1];

public:
	inline RuntimeObject * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline RuntimeObject ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, RuntimeObject * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline RuntimeObject * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline RuntimeObject ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, RuntimeObject * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};

IL2CPP_EXTERN_C void PrimitiveValue_tB787C76E9A37444599C45519DD7E4D3A1D4730C8_marshal_pinvoke(const PrimitiveValue_tB787C76E9A37444599C45519DD7E4D3A1D4730C8& unmarshaled, PrimitiveValue_tB787C76E9A37444599C45519DD7E4D3A1D4730C8_marshaled_pinvoke& marshaled);
IL2CPP_EXTERN_C void PrimitiveValue_tB787C76E9A37444599C45519DD7E4D3A1D4730C8_marshal_pinvoke_back(const PrimitiveValue_tB787C76E9A37444599C45519DD7E4D3A1D4730C8_marshaled_pinvoke& marshaled, PrimitiveValue_tB787C76E9A37444599C45519DD7E4D3A1D4730C8& unmarshaled);
IL2CPP_EXTERN_C void PrimitiveValue_tB787C76E9A37444599C45519DD7E4D3A1D4730C8_marshal_pinvoke_cleanup(PrimitiveValue_tB787C76E9A37444599C45519DD7E4D3A1D4730C8_marshaled_pinvoke& marshaled);
IL2CPP_EXTERN_C void PrimitiveValue_tB787C76E9A37444599C45519DD7E4D3A1D4730C8_marshal_com(const PrimitiveValue_tB787C76E9A37444599C45519DD7E4D3A1D4730C8& unmarshaled, PrimitiveValue_tB787C76E9A37444599C45519DD7E4D3A1D4730C8_marshaled_com& marshaled);
IL2CPP_EXTERN_C void PrimitiveValue_tB787C76E9A37444599C45519DD7E4D3A1D4730C8_marshal_com_back(const PrimitiveValue_tB787C76E9A37444599C45519DD7E4D3A1D4730C8_marshaled_com& marshaled, PrimitiveValue_tB787C76E9A37444599C45519DD7E4D3A1D4730C8& unmarshaled);
IL2CPP_EXTERN_C void PrimitiveValue_tB787C76E9A37444599C45519DD7E4D3A1D4730C8_marshal_com_cleanup(PrimitiveValue_tB787C76E9A37444599C45519DD7E4D3A1D4730C8_marshaled_com& marshaled);
IL2CPP_EXTERN_C void GUIContent_t39256993BF4A33F76E073488D6A2F13D678DF60E_marshal_pinvoke(const GUIContent_t39256993BF4A33F76E073488D6A2F13D678DF60E& unmarshaled, GUIContent_t39256993BF4A33F76E073488D6A2F13D678DF60E_marshaled_pinvoke& marshaled);
IL2CPP_EXTERN_C void GUIContent_t39256993BF4A33F76E073488D6A2F13D678DF60E_marshal_pinvoke_back(const GUIContent_t39256993BF4A33F76E073488D6A2F13D678DF60E_marshaled_pinvoke& marshaled, GUIContent_t39256993BF4A33F76E073488D6A2F13D678DF60E& unmarshaled);
IL2CPP_EXTERN_C void GUIContent_t39256993BF4A33F76E073488D6A2F13D678DF60E_marshal_pinvoke_cleanup(GUIContent_t39256993BF4A33F76E073488D6A2F13D678DF60E_marshaled_pinvoke& marshaled);
IL2CPP_EXTERN_C void GUIContent_t39256993BF4A33F76E073488D6A2F13D678DF60E_marshal_com(const GUIContent_t39256993BF4A33F76E073488D6A2F13D678DF60E& unmarshaled, GUIContent_t39256993BF4A33F76E073488D6A2F13D678DF60E_marshaled_com& marshaled);
IL2CPP_EXTERN_C void GUIContent_t39256993BF4A33F76E073488D6A2F13D678DF60E_marshal_com_back(const GUIContent_t39256993BF4A33F76E073488D6A2F13D678DF60E_marshaled_com& marshaled, GUIContent_t39256993BF4A33F76E073488D6A2F13D678DF60E& unmarshaled);
IL2CPP_EXTERN_C void GUIContent_t39256993BF4A33F76E073488D6A2F13D678DF60E_marshal_com_cleanup(GUIContent_t39256993BF4A33F76E073488D6A2F13D678DF60E_marshaled_com& marshaled);

// System.Void System.Collections.Generic.List`1<System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_m0F0E00088CF56FEACC9E32D8B7D91B93D91DAA3B_gshared (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, const RuntimeMethod* method);
// System.Int32 System.Collections.Generic.List`1<System.Object>::get_Count()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m5D847939ABB9A78203B062CAFFE975792174D00F_gshared_inline (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, const RuntimeMethod* method);
// System.Void System.Action`2<System.Object,System.Int32Enum>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action_2__ctor_m60DAAA2A0145306F160B759BC2135A372C0E40B3_gshared (Action_2_t961B8FC40C595B3E8948D3CB85E51EB90540D7EF * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Object>::Add(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Add_mE5B3CBB3A625606D9BC4337FEAAF1D66BCB6F96E_gshared (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, RuntimeObject * ___item0, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.List`1<System.Object>::Remove(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool List_1_Remove_m753F7B4281CC4D02C07AE90726F51EF34B588DF7_gshared (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, RuntimeObject * ___item0, const RuntimeMethod* method);
// System.Void System.Action`1<UnityEngine.InputSystem.InputAction/CallbackContext>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action_1__ctor_m8902DCFE8589EFD9B0A1C1655AC5664A0047F8D0_gshared (Action_1_t7A6E0E94B21008B707D8BEA0DA19B65A96D58416 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// System.Collections.Generic.List`1/Enumerator<!0> System.Collections.Generic.List`1<System.Object>::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6  List_1_GetEnumerator_m1739A5E25DF502A6984F9B98CFCAC2D3FABCF233_gshared (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, const RuntimeMethod* method);
// !0 System.Collections.Generic.List`1/Enumerator<System.Object>::get_Current()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject * Enumerator_get_Current_m9C4EBBD2108B51885E750F927D7936290C8E20EE_gshared_inline (Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6 * __this, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.List`1/Enumerator<System.Object>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Enumerator_MoveNext_m2E56233762839CE55C67E00AC8DD3D4D3F6C0DF0_gshared (Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1/Enumerator<System.Object>::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator_Dispose_mCFB225D9E5E597A1CC8F958E53BEA1367D8AC7B8_gshared (Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.InputSystem.Samples.VisualizationHelpers/ScalarVisualizer`1<System.Single>::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ScalarVisualizer_1__ctor_m2AF7C1BBF921A1693F885C380A15AC214205E430_gshared (ScalarVisualizer_1_tE953A574A31F5BCD8A798C67C82BE1940BBE698B * __this, int32_t ___numSamples0, const RuntimeMethod* method);
// System.Void UnityEngine.InputSystem.Samples.VisualizationHelpers/ScalarVisualizer`1<System.Int32>::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ScalarVisualizer_1__ctor_m2980C02FB3A3B4FF9DDF664DE2D5C2B4EE6F9872_gshared (ScalarVisualizer_1_t0A41B5E8896145168954EDE0B3253E18A0572203 * __this, int32_t ___numSamples0, const RuntimeMethod* method);
// !0 System.Collections.Generic.List`1<System.Object>::get_Item(System.Int32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject * List_1_get_Item_mF00B574E58FB078BB753B05A3B86DD0A7A266B63_gshared_inline (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, int32_t ___index0, const RuntimeMethod* method);
// System.Void System.Action`2<UnityEngine.InputSystem.LowLevel.InputEventPtr,System.Object>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action_2__ctor_mB6BCE3EF50770B837367BC293E698D74568FE394_gshared (Action_2_t370D10E4C6BCCE1A1946F8EA77CF164889F8A226 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// System.Int32 UnityEngine.InputSystem.InputControlList`1<System.Object>::get_Count()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t InputControlList_1_get_Count_m7A8114381D67F6EA7D09BA3B0676CA7257F62A5F_gshared_inline (InputControlList_1_t0C5A7D203415CFD1DE620B841FB9904AE4DA28CA * __this, const RuntimeMethod* method);
// !0 UnityEngine.InputSystem.InputControlList`1<System.Object>::get_Item(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * InputControlList_1_get_Item_mD7ECFAA9D15817BF09A2E2FC9F5D3E962C853A6F_gshared (InputControlList_1_t0C5A7D203415CFD1DE620B841FB9904AE4DA28CA * __this, int32_t ___index0, const RuntimeMethod* method);
// System.Void UnityEngine.InputSystem.InputControlList`1<System.Object>::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InputControlList_1_Dispose_m59C755B89A523F016D9C28CEE52363B853FE1BE2_gshared (InputControlList_1_t0C5A7D203415CFD1DE620B841FB9904AE4DA28CA * __this, const RuntimeMethod* method);
// System.Boolean UnityEngine.InputSystem.LowLevel.InputEventPtr::IsA<UnityEngine.InputSystem.LowLevel.StateEvent>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool InputEventPtr_IsA_TisStateEvent_t5FC3789364630893748679234A6A7FDE4BA64B70_mB234D9EBB5E6AE99FF42493115B2BFCA7609026A_gshared (InputEventPtr_tC7799829CE3FDCA9E191C7BC946ABE0DB17B377D * __this, const RuntimeMethod* method);
// System.Boolean UnityEngine.InputSystem.LowLevel.InputEventPtr::IsA<UnityEngine.InputSystem.LowLevel.DeltaStateEvent>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool InputEventPtr_IsA_TisDeltaStateEvent_t8CA8FF8F0CF816316C0682FE4A0387DB02D3334A_m95E3ABAF4B7FAAAE53BCCFF687591BBDCB587CC8_gshared (InputEventPtr_tC7799829CE3FDCA9E191C7BC946ABE0DB17B377D * __this, const RuntimeMethod* method);
// !!0 UnityEngine.Component::GetComponent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * Component_GetComponent_TisRuntimeObject_m69D9C576D6DD024C709E29EEADBC8041299A3AA7_gshared (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, const RuntimeMethod* method);
// TValue& UnityEngine.InputSystem.Samples.VisualizationHelpers/RingBuffer`1<UnityEngine.InputSystem.Samples.VisualizationHelpers/TimelineVisualizer/TimeSample>::get_Item(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TimeSample_t926350553A4576F5F20E71A9CFB9A19E37F35C2B * RingBuffer_1_get_Item_mF7D35F29AD84949BD33FCD9F6F4AB2F5787DB756_gshared (RingBuffer_1_tD482466EFEACC434BCF1AE233235CA27903B4370 * __this, int32_t ___index0, const RuntimeMethod* method);
// TValue& UnityEngine.InputSystem.Samples.VisualizationHelpers/RingBuffer`1<UnityEngine.InputSystem.Samples.VisualizationHelpers/TimelineVisualizer/FrameSample>::get_Item(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR FrameSample_t8064F61DD3BB94546FB62C119AB80FAD66546E1B * RingBuffer_1_get_Item_m324251981EEDA84F8C57FDBB08FB72521CD65892_gshared (RingBuffer_1_t6C5FD528A08BBDFABB08C4C1A6086AF9E61B794E * __this, int32_t ___index0, const RuntimeMethod* method);
// System.Void UnityEngine.InputSystem.Samples.VisualizationHelpers/RingBuffer`1<UnityEngine.InputSystem.Samples.VisualizationHelpers/TimelineVisualizer/FrameSample>::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RingBuffer_1__ctor_m41C93D129E54821358D0152E7184702894B5BC1E_gshared (RingBuffer_1_t6C5FD528A08BBDFABB08C4C1A6086AF9E61B794E * __this, int32_t ___size0, const RuntimeMethod* method);
// System.Void UnityEngine.InputSystem.Samples.VisualizationHelpers/RingBuffer`1<UnityEngine.InputSystem.Samples.VisualizationHelpers/TimelineVisualizer/TimeSample>::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RingBuffer_1__ctor_m008DAFC556453D757AC430CFBCE66287F415776E_gshared (RingBuffer_1_tD482466EFEACC434BCF1AE233235CA27903B4370 * __this, int32_t ___size0, const RuntimeMethod* method);
// System.Void System.Array::Resize<UnityEngine.InputSystem.Samples.VisualizationHelpers/TimelineVisualizer/Timeline>(!!0[]&,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Array_Resize_TisTimeline_t0E8C3B4B157DAE25A77A695529CE737933D5CCBE_mBA8BC27E328677C85F6EB666EACBA917A90FB009_gshared (TimelineU5BU5D_tC4060193BF7CE25CDC70D417EEDC7175EA74B44F** ___array0, int32_t ___newSize1, const RuntimeMethod* method);
// TValue& UnityEngine.InputSystem.Samples.VisualizationHelpers/RingBuffer`1<UnityEngine.InputSystem.Samples.VisualizationHelpers/TimelineVisualizer/TimeSample>::Append(TValue)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TimeSample_t926350553A4576F5F20E71A9CFB9A19E37F35C2B * RingBuffer_1_Append_m5EEA4129391DF819A18C217E469874629F2CF98B_gshared (RingBuffer_1_tD482466EFEACC434BCF1AE233235CA27903B4370 * __this, TimeSample_t926350553A4576F5F20E71A9CFB9A19E37F35C2B  ___value0, const RuntimeMethod* method);
// TValue& UnityEngine.InputSystem.Samples.VisualizationHelpers/RingBuffer`1<UnityEngine.InputSystem.Samples.VisualizationHelpers/TimelineVisualizer/FrameSample>::Append(TValue)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR FrameSample_t8064F61DD3BB94546FB62C119AB80FAD66546E1B * RingBuffer_1_Append_mDC563C0021BB061ED5797274D0E98835815A9E40_gshared (RingBuffer_1_t6C5FD528A08BBDFABB08C4C1A6086AF9E61B794E * __this, FrameSample_t8064F61DD3BB94546FB62C119AB80FAD66546E1B  ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.InputSystem.Samples.VisualizationHelpers/ValueVisualizer`1<UnityEngine.Vector2>::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ValueVisualizer_1__ctor_m549DFCBB6C3329F6E1B2F8185D2F7D56349883FB_gshared (ValueVisualizer_1_t80E00BEE21AB8F001F08BF2B39E8894884283EDE * __this, int32_t ___numSamples0, const RuntimeMethod* method);
// System.Void UnityEngine.InputSystem.Samples.VisualizationHelpers/ValueVisualizer`1<UnityEngine.Vector2>::AddSample(System.Object,System.Double)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ValueVisualizer_1_AddSample_mE5681CB696F7117D8BDECC59AFE262D0875904DE_gshared (ValueVisualizer_1_t80E00BEE21AB8F001F08BF2B39E8894884283EDE * __this, RuntimeObject * ___value0, double ___time1, const RuntimeMethod* method);
// TValue& UnityEngine.InputSystem.Samples.VisualizationHelpers/RingBuffer`1<UnityEngine.Vector2>::get_Item(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * RingBuffer_1_get_Item_m8A5C3B43B9D54B9F9588C402031DC5ECC59DBBE1_gshared (RingBuffer_1_t2DABFCD363F6958F876B34BE08D978FE3CC2F270 * __this, int32_t ___index0, const RuntimeMethod* method);
// TValue& UnityEngine.InputSystem.Samples.VisualizationHelpers/RingBuffer`1<System.Object>::get_Item(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject ** RingBuffer_1_get_Item_m51D08260D1388DF170C706A9A5698225D5B8F52B_gshared (RingBuffer_1_tFEB8D7EE12AD11C4DAC985C2F72C0D4BD23865B2 * __this, int32_t ___index0, const RuntimeMethod* method);

// UnityEngine.InputSystem.InputSettings UnityEngine.InputSystem.InputSystem::get_settings()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR InputSettings_tCA238DEE6F6A4A12B38A7FE9B66B9B8F557DAAE2 * InputSystem_get_settings_m669AE4024AE19C6D1CD004791DA35408E0527747 (const RuntimeMethod* method);
// UnityEngine.InputSystem.InputSettings/UpdateMode UnityEngine.InputSystem.InputSettings::get_updateMode()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t InputSettings_get_updateMode_mF5342E2FBF3829B1A2F951A1BD140318BA2C8F01_inline (InputSettings_tCA238DEE6F6A4A12B38A7FE9B66B9B8F557DAAE2 * __this, const RuntimeMethod* method);
// System.Single UnityEngine.Time::get_fixedTime()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Time_get_fixedTime_mE4630B2127C67597CA450A81FFDF25E63A2CC7B5 (const RuntimeMethod* method);
// System.Void UnityEngine.InputSystem.Samples.InputActionVisualizer::RecordValue(System.Double)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InputActionVisualizer_RecordValue_mDE85E6726F4BF8702D51173DF6C658131B45C412 (InputActionVisualizer_t726DF6A67FB0B18AEECDBAB992EABF3B82E339C6 * __this, double ___time0, const RuntimeMethod* method);
// System.Single UnityEngine.Time::get_time()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Time_get_time_m1A186074B1FCD448AB13A4B9D715AB9ED0B40844 (const RuntimeMethod* method);
// System.Void UnityEngine.InputSystem.Samples.InputVisualizer::OnEnable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InputVisualizer_OnEnable_m2E397BD5719AD2BB97ED81D27208B446989D727A (InputVisualizer_t51917CF1458037727EDDF8C090AEB773F3EAC29E * __this, const RuntimeMethod* method);
// System.Void UnityEngine.InputSystem.Samples.InputActionVisualizer::ResolveAction()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InputActionVisualizer_ResolveAction_m91784D0AD0D0CCA120C933406114FA15DF925218 (InputActionVisualizer_t726DF6A67FB0B18AEECDBAB992EABF3B82E339C6 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.InputSystem.Samples.InputActionVisualizer::SetupVisualizer()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InputActionVisualizer_SetupVisualizer_m537AFAD0D3CB4522D8B8BBBD40320C77A9F420CD (InputActionVisualizer_t726DF6A67FB0B18AEECDBAB992EABF3B82E339C6 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<UnityEngine.InputSystem.Samples.InputActionVisualizer>::.ctor()
inline void List_1__ctor_m8BFEF9870EEC090F96A2C5657A511307B32B6B7B (List_1_t875D9DC885BBF5157329E3844ACC8835F3F5F066 * __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t875D9DC885BBF5157329E3844ACC8835F3F5F066 *, const RuntimeMethod*))List_1__ctor_m0F0E00088CF56FEACC9E32D8B7D91B93D91DAA3B_gshared)(__this, method);
}
// System.Int32 System.Collections.Generic.List`1<UnityEngine.InputSystem.Samples.InputActionVisualizer>::get_Count()
inline int32_t List_1_get_Count_m4615D7BF299A0DA3A8D79F79A55A134518AF2796_inline (List_1_t875D9DC885BBF5157329E3844ACC8835F3F5F066 * __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_t875D9DC885BBF5157329E3844ACC8835F3F5F066 *, const RuntimeMethod*))List_1_get_Count_m5D847939ABB9A78203B062CAFFE975792174D00F_gshared_inline)(__this, method);
}
// System.Void System.Action`2<System.Object,UnityEngine.InputSystem.InputActionChange>::.ctor(System.Object,System.IntPtr)
inline void Action_2__ctor_mA825B05311876E5576DD29D45058F7A3FDF5927D (Action_2_tACB2F8D6B2F70F78DC65A6BC64A3108B0B1AC539 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Action_2_tACB2F8D6B2F70F78DC65A6BC64A3108B0B1AC539 *, RuntimeObject *, intptr_t, const RuntimeMethod*))Action_2__ctor_m60DAAA2A0145306F160B759BC2135A372C0E40B3_gshared)(__this, ___object0, ___method1, method);
}
// System.Void UnityEngine.InputSystem.InputSystem::add_onActionChange(System.Action`2<System.Object,UnityEngine.InputSystem.InputActionChange>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InputSystem_add_onActionChange_m1CA7D531804EB9B29861F3680312417635E49517 (Action_2_tACB2F8D6B2F70F78DC65A6BC64A3108B0B1AC539 * ___value0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<UnityEngine.InputSystem.Samples.InputActionVisualizer>::Add(!0)
inline void List_1_Add_m14CE625BA41D15CEFAB485E8AC718C8F033E9A68 (List_1_t875D9DC885BBF5157329E3844ACC8835F3F5F066 * __this, InputActionVisualizer_t726DF6A67FB0B18AEECDBAB992EABF3B82E339C6 * ___item0, const RuntimeMethod* method)
{
	((  void (*) (List_1_t875D9DC885BBF5157329E3844ACC8835F3F5F066 *, InputActionVisualizer_t726DF6A67FB0B18AEECDBAB992EABF3B82E339C6 *, const RuntimeMethod*))List_1_Add_mE5B3CBB3A625606D9BC4337FEAAF1D66BCB6F96E_gshared)(__this, ___item0, method);
}
// System.Void UnityEngine.InputSystem.Samples.InputVisualizer::OnDisable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InputVisualizer_OnDisable_m2A0FD7F73BD976313A8B397C2D72676D3A65C161 (InputVisualizer_t51917CF1458037727EDDF8C090AEB773F3EAC29E * __this, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.List`1<UnityEngine.InputSystem.Samples.InputActionVisualizer>::Remove(!0)
inline bool List_1_Remove_mF983F9F989DFCF421AF7224082DD7BC022F25828 (List_1_t875D9DC885BBF5157329E3844ACC8835F3F5F066 * __this, InputActionVisualizer_t726DF6A67FB0B18AEECDBAB992EABF3B82E339C6 * ___item0, const RuntimeMethod* method)
{
	return ((  bool (*) (List_1_t875D9DC885BBF5157329E3844ACC8835F3F5F066 *, InputActionVisualizer_t726DF6A67FB0B18AEECDBAB992EABF3B82E339C6 *, const RuntimeMethod*))List_1_Remove_m753F7B4281CC4D02C07AE90726F51EF34B588DF7_gshared)(__this, ___item0, method);
}
// System.Void UnityEngine.InputSystem.InputSystem::remove_onActionChange(System.Action`2<System.Object,UnityEngine.InputSystem.InputActionChange>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InputSystem_remove_onActionChange_m285E3028F206E877D7AD2EA790E51D144EA60949 (Action_2_tACB2F8D6B2F70F78DC65A6BC64A3108B0B1AC539 * ___value0, const RuntimeMethod* method);
// System.Void System.Action`1<UnityEngine.InputSystem.InputAction/CallbackContext>::.ctor(System.Object,System.IntPtr)
inline void Action_1__ctor_m8902DCFE8589EFD9B0A1C1655AC5664A0047F8D0 (Action_1_t7A6E0E94B21008B707D8BEA0DA19B65A96D58416 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Action_1_t7A6E0E94B21008B707D8BEA0DA19B65A96D58416 *, RuntimeObject *, intptr_t, const RuntimeMethod*))Action_1__ctor_m8902DCFE8589EFD9B0A1C1655AC5664A0047F8D0_gshared)(__this, ___object0, ___method1, method);
}
// System.Void UnityEngine.InputSystem.InputAction::remove_started(System.Action`1<UnityEngine.InputSystem.InputAction/CallbackContext>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InputAction_remove_started_m365C97F93610FB6AE39AD14291F66B18CD569F62 (InputAction_tF0C77AF72E0C19608B020E77A2C36C04E9DCBE48 * __this, Action_1_t7A6E0E94B21008B707D8BEA0DA19B65A96D58416 * ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.InputSystem.InputAction::remove_performed(System.Action`1<UnityEngine.InputSystem.InputAction/CallbackContext>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InputAction_remove_performed_m6D13571BE4651E97A4B5FFDB9DD7725D93879B90 (InputAction_tF0C77AF72E0C19608B020E77A2C36C04E9DCBE48 * __this, Action_1_t7A6E0E94B21008B707D8BEA0DA19B65A96D58416 * ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.InputSystem.InputAction::remove_canceled(System.Action`1<UnityEngine.InputSystem.InputAction/CallbackContext>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InputAction_remove_canceled_mD3D5FF749E8E3A7966E32B6DB7E505817CD54A51 (InputAction_tF0C77AF72E0C19608B020E77A2C36C04E9DCBE48 * __this, Action_1_t7A6E0E94B21008B707D8BEA0DA19B65A96D58416 * ___value0, const RuntimeMethod* method);
// UnityEngine.Event UnityEngine.Event::get_current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Event_tED49F8EC5A2514F6E877E301B1AB7ABE4647253E * Event_get_current_m069E3E742E6CBC32C3BC958B85153E75B0192443 (const RuntimeMethod* method);
// UnityEngine.EventType UnityEngine.Event::get_type()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Event_get_type_mA5010AB8C34B098E0783949046C708B9E1BA811D (Event_tED49F8EC5A2514F6E877E301B1AB7ABE4647253E * __this, const RuntimeMethod* method);
// System.Void UnityEngine.InputSystem.Samples.InputVisualizer::OnGUI()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InputVisualizer_OnGUI_m62F3B05F1A6BCA9AEDC1FDBE7AA4339769DF3D09 (InputVisualizer_t51917CF1458037727EDDF8C090AEB773F3EAC29E * __this, const RuntimeMethod* method);
// System.Single UnityEngine.Rect::get_x()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Rect_get_x_mA61220F6F26ECD6951B779FFA7CAD7ECE11D6987 (Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878 * __this, const RuntimeMethod* method);
// System.Single UnityEngine.Rect::get_yMax()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Rect_get_yMax_m9685BF55B44C51FF9BA080F9995073E458E1CDC3 (Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Vector2::.ctor(System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector2__ctor_m9F1F2D5EB5D1FF7091BB527AC8A72CBB309D115E_inline (Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * __this, float ___x0, float ___y1, const RuntimeMethod* method);
// UnityEngine.GUIStyle UnityEngine.InputSystem.Samples.VisualizationHelpers::get_ValueTextStyle()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * VisualizationHelpers_get_ValueTextStyle_mDDD19B37F92A291767250B60899DE7F393E3F6E9 (const RuntimeMethod* method);
// System.Void UnityEngine.InputSystem.Samples.VisualizationHelpers::DrawText(UnityEngine.GUIContent,UnityEngine.Vector2,UnityEngine.GUIStyle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VisualizationHelpers_DrawText_m75EAB1C9E4CA84D969F2EFD1BF20605FFEDE88C7 (GUIContent_t39256993BF4A33F76E073488D6A2F13D678DF60E * ___text0, Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___pos1, GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * ___style2, const RuntimeMethod* method);
// System.Void UnityEngine.Debug::Assert(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_Assert_m9AB596E4960380752FD4CB3292D07A86E995938B (bool ___condition0, const RuntimeMethod* method);
// System.Object UnityEngine.InputSystem.InputAction::ReadValueAsObject()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * InputAction_ReadValueAsObject_mD22F8A5A74FCE03848E5BE81A38182FF49020CAC (InputAction_tF0C77AF72E0C19608B020E77A2C36C04E9DCBE48 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.InputSystem.Samples.InputActionVisualizer::RecordControlName()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InputActionVisualizer_RecordControlName_m11A8C4FCFE691D9F37E0CD31B97F455D0BC792AF (InputActionVisualizer_t726DF6A67FB0B18AEECDBAB992EABF3B82E339C6 * __this, const RuntimeMethod* method);
// UnityEngine.InputSystem.InputControl UnityEngine.InputSystem.InputAction::get_activeControl()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR InputControl_t3CDD1115017147EEC9D825834637D7700669C006 * InputAction_get_activeControl_m7B38F0EC4622B9036F4E1770EB8AE732F4B55AEB (InputAction_tF0C77AF72E0C19608B020E77A2C36C04E9DCBE48 * __this, const RuntimeMethod* method);
// System.String UnityEngine.InputSystem.InputControl::get_path()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* InputControl_get_path_m0EE38AED32CCE357E6BD806A6CE0728AA23237CA (InputControl_t3CDD1115017147EEC9D825834637D7700669C006 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.GUIContent::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GUIContent__ctor_m3FABF20C213051E685B41CA898A20885E02111F0 (GUIContent_t39256993BF4A33F76E073488D6A2F13D678DF60E * __this, String_t* ___text0, const RuntimeMethod* method);
// System.Boolean UnityEngine.Object::op_Inequality(UnityEngine.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Inequality_mE1F187520BD83FB7D86A6D850710C4D42B864E90 (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * ___x0, Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * ___y1, const RuntimeMethod* method);
// UnityEngine.InputSystem.InputAction UnityEngine.InputSystem.InputActionReference::get_action()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR InputAction_tF0C77AF72E0C19608B020E77A2C36C04E9DCBE48 * InputActionReference_get_action_m50A5F0AF7B4FB329079FCFB2290AC851DCE7CAA3 (InputActionReference_tB2E9E368D60A4C8E066C7CE0EE2A80C62320C28E * __this, const RuntimeMethod* method);
// System.Boolean System.String::IsNullOrEmpty(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_IsNullOrEmpty_m9AFBB5335B441B94E884B8A9D4A27AD60E3D7F7C (String_t* ___value0, const RuntimeMethod* method);
// System.Int32 System.String::IndexOf(System.Char)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t String_IndexOf_mEE2D2F738175E3FF05580366D6226DBD673CA2BE (String_t* __this, Il2CppChar ___value0, const RuntimeMethod* method);
// System.String System.String::Substring(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Substring_m7A39A2AC0893AE940CF4CEC841326D56FFB9D86B (String_t* __this, int32_t ___startIndex0, int32_t ___length1, const RuntimeMethod* method);
// System.String System.String::Substring(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Substring_mB6B87FD76552BBF6D4E2B9F07F857FE051DCE190 (String_t* __this, int32_t ___startIndex0, const RuntimeMethod* method);
// System.Collections.Generic.List`1<UnityEngine.InputSystem.InputAction> UnityEngine.InputSystem.InputSystem::ListEnabledActions()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR List_1_t1A9DEE7C61AA50CC920704B4671771EDF3E8D417 * InputSystem_ListEnabledActions_m26B1E288C27A20B490A2A0E241FEC0910875C785 (const RuntimeMethod* method);
// System.Collections.Generic.List`1/Enumerator<!0> System.Collections.Generic.List`1<UnityEngine.InputSystem.InputAction>::GetEnumerator()
inline Enumerator_tA547514D47C2255448922E93CB4A07E699198716  List_1_GetEnumerator_m0F2C51150435B0E7B758F3D4769F4C5D3DCFC8D9 (List_1_t1A9DEE7C61AA50CC920704B4671771EDF3E8D417 * __this, const RuntimeMethod* method)
{
	return ((  Enumerator_tA547514D47C2255448922E93CB4A07E699198716  (*) (List_1_t1A9DEE7C61AA50CC920704B4671771EDF3E8D417 *, const RuntimeMethod*))List_1_GetEnumerator_m1739A5E25DF502A6984F9B98CFCAC2D3FABCF233_gshared)(__this, method);
}
// !0 System.Collections.Generic.List`1/Enumerator<UnityEngine.InputSystem.InputAction>::get_Current()
inline InputAction_tF0C77AF72E0C19608B020E77A2C36C04E9DCBE48 * Enumerator_get_Current_mFEB303E405B7355CC1F5908DA8789D43616C6817_inline (Enumerator_tA547514D47C2255448922E93CB4A07E699198716 * __this, const RuntimeMethod* method)
{
	return ((  InputAction_tF0C77AF72E0C19608B020E77A2C36C04E9DCBE48 * (*) (Enumerator_tA547514D47C2255448922E93CB4A07E699198716 *, const RuntimeMethod*))Enumerator_get_Current_m9C4EBBD2108B51885E750F927D7936290C8E20EE_gshared_inline)(__this, method);
}
// System.String UnityEngine.InputSystem.InputAction::get_name()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* InputAction_get_name_m593E2EDA5FEE091CEBB226A2459645A30449D32A_inline (InputAction_tF0C77AF72E0C19608B020E77A2C36C04E9DCBE48 * __this, const RuntimeMethod* method);
// System.Int32 System.String::Compare(System.String,System.String,System.StringComparison)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t String_Compare_mDAE9D10BC450FF38960C691874EBFC3EAF6A39DD (String_t* ___strA0, String_t* ___strB1, int32_t ___comparisonType2, const RuntimeMethod* method);
// UnityEngine.InputSystem.InputActionMap UnityEngine.InputSystem.InputAction::get_actionMap()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR InputActionMap_tBA45B784C5957091166E0007413402A3E83DD226 * InputAction_get_actionMap_mD6F927473CBBB756ECA0A90A073052F3BC2CCB76 (InputAction_tF0C77AF72E0C19608B020E77A2C36C04E9DCBE48 * __this, const RuntimeMethod* method);
// System.String UnityEngine.InputSystem.InputActionMap::get_name()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* InputActionMap_get_name_mFB11C9955411C1C77B74A28F74694007133A84B5_inline (InputActionMap_tBA45B784C5957091166E0007413402A3E83DD226 * __this, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.List`1/Enumerator<UnityEngine.InputSystem.InputAction>::MoveNext()
inline bool Enumerator_MoveNext_mB430C73730C3EEFF9B5489CB853FA51BB1BEA590 (Enumerator_tA547514D47C2255448922E93CB4A07E699198716 * __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_tA547514D47C2255448922E93CB4A07E699198716 *, const RuntimeMethod*))Enumerator_MoveNext_m2E56233762839CE55C67E00AC8DD3D4D3F6C0DF0_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1/Enumerator<UnityEngine.InputSystem.InputAction>::Dispose()
inline void Enumerator_Dispose_mD479379B537ADEC411563180E523F9BD86134E4F (Enumerator_tA547514D47C2255448922E93CB4A07E699198716 * __this, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_tA547514D47C2255448922E93CB4A07E699198716 *, const RuntimeMethod*))Enumerator_Dispose_mCFB225D9E5E597A1CC8F958E53BEA1367D8AC7B8_gshared)(__this, method);
}
// System.Void UnityEngine.InputSystem.InputAction::add_performed(System.Action`1<UnityEngine.InputSystem.InputAction/CallbackContext>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InputAction_add_performed_m08BA8B41633027A527B1ABA1F0F647DD665FB18E (InputAction_tF0C77AF72E0C19608B020E77A2C36C04E9DCBE48 * __this, Action_1_t7A6E0E94B21008B707D8BEA0DA19B65A96D58416 * ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.InputSystem.InputAction::add_started(System.Action`1<UnityEngine.InputSystem.InputAction/CallbackContext>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InputAction_add_started_m7C0A1C6831F4DBFC1C3E846EA92D752A73F24578 (InputAction_tF0C77AF72E0C19608B020E77A2C36C04E9DCBE48 * __this, Action_1_t7A6E0E94B21008B707D8BEA0DA19B65A96D58416 * ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.InputSystem.InputAction::add_canceled(System.Action`1<UnityEngine.InputSystem.InputAction/CallbackContext>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InputAction_add_canceled_mE043BDF3F4333CD70CFF05BE475DD516EC59EB49 (InputAction_tF0C77AF72E0C19608B020E77A2C36C04E9DCBE48 * __this, Action_1_t7A6E0E94B21008B707D8BEA0DA19B65A96D58416 * ___value0, const RuntimeMethod* method);
// UnityEngine.InputSystem.InputActionType UnityEngine.InputSystem.InputAction::get_type()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t InputAction_get_type_mE6E1C035E03262F5B354DC73B80F2113DC68B66D_inline (InputAction_tF0C77AF72E0C19608B020E77A2C36C04E9DCBE48 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.InputSystem.Samples.VisualizationHelpers/ScalarVisualizer`1<System.Single>::.ctor(System.Int32)
inline void ScalarVisualizer_1__ctor_m2AF7C1BBF921A1693F885C380A15AC214205E430 (ScalarVisualizer_1_tE953A574A31F5BCD8A798C67C82BE1940BBE698B * __this, int32_t ___numSamples0, const RuntimeMethod* method)
{
	((  void (*) (ScalarVisualizer_1_tE953A574A31F5BCD8A798C67C82BE1940BBE698B *, int32_t, const RuntimeMethod*))ScalarVisualizer_1__ctor_m2AF7C1BBF921A1693F885C380A15AC214205E430_gshared)(__this, ___numSamples0, method);
}
// System.String UnityEngine.InputSystem.InputAction::get_expectedControlType()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* InputAction_get_expectedControlType_m6D142ABF3B8F6A0C330418F368D4C67A329BCE10_inline (InputAction_tF0C77AF72E0C19608B020E77A2C36C04E9DCBE48 * __this, const RuntimeMethod* method);
// UnityEngine.InputSystem.Layouts.InputControlLayout UnityEngine.InputSystem.InputSystem::LoadLayout(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR InputControlLayout_t012E8BC3C93CE8A2A35BFC6A70C52530FFB55917 * InputSystem_LoadLayout_mC45113F7B95512F6E5800EA5C2ADB51B785118C2 (String_t* ___name0, const RuntimeMethod* method);
// System.Type UnityEngine.InputSystem.Layouts.InputControlLayout::GetValueType()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t * InputControlLayout_GetValueType_m1AA2A7ACC9A2198B6F59EB8F63148919A43CDF88 (InputControlLayout_t012E8BC3C93CE8A2A35BFC6A70C52530FFB55917 * __this, const RuntimeMethod* method);
// System.Type System.Type::GetTypeFromHandle(System.RuntimeTypeHandle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t * Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E (RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  ___handle0, const RuntimeMethod* method);
// System.Boolean System.Type::op_Equality(System.Type,System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Type_op_Equality_mA438719A1FDF103C7BBBB08AEF564E7FAEEA0046 (Type_t * ___left0, Type_t * ___right1, const RuntimeMethod* method);
// System.Void UnityEngine.InputSystem.Samples.VisualizationHelpers/ScalarVisualizer`1<System.Int32>::.ctor(System.Int32)
inline void ScalarVisualizer_1__ctor_m2980C02FB3A3B4FF9DDF664DE2D5C2B4EE6F9872 (ScalarVisualizer_1_t0A41B5E8896145168954EDE0B3253E18A0572203 * __this, int32_t ___numSamples0, const RuntimeMethod* method)
{
	((  void (*) (ScalarVisualizer_1_t0A41B5E8896145168954EDE0B3253E18A0572203 *, int32_t, const RuntimeMethod*))ScalarVisualizer_1__ctor_m2980C02FB3A3B4FF9DDF664DE2D5C2B4EE6F9872_gshared)(__this, ___numSamples0, method);
}
// System.Void UnityEngine.InputSystem.Samples.VisualizationHelpers/Vector2Visualizer::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Vector2Visualizer__ctor_mC2753BF29D07F05BB1D6BBF86553AA6518AB0410 (Vector2Visualizer_t4F4D343145C411ED0B1D42FF5AEF4E5303BA9EFC * __this, int32_t ___numSamples0, const RuntimeMethod* method);
// System.Void UnityEngine.InputSystem.Samples.VisualizationHelpers/TimelineVisualizer::.ctor(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TimelineVisualizer__ctor_mE49C33F4374AF61480A4C1CD7DB5B933366293BA (TimelineVisualizer_tDCF8FE655A93D562471977C145A8B989803EA315 * __this, float ___totalTimeUnitsShown0, const RuntimeMethod* method);
// UnityEngine.InputSystem.IInputInteraction UnityEngine.InputSystem.InputAction/CallbackContext::get_interaction()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* CallbackContext_get_interaction_mA267635233BDF671DC168A4C654DC0175E6D3394 (CallbackContext_tFAD329A5B98475EEDBD898FFDA3378C44BC12E0B * __this, const RuntimeMethod* method);
// System.Type System.Object::GetType()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t * Object_GetType_m571FE8360C10B98C23AAF1F066D92C08CC94F45B (RuntimeObject * __this, const RuntimeMethod* method);
// System.Boolean System.String::EndsWith(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_EndsWith_m9A6011FDF8EBFFD3BCB51FE5BE58BE265116DCBE (String_t* __this, String_t* ___value0, const RuntimeMethod* method);
// System.Int32 System.String::get_Length()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t String_get_Length_m129FC0ADA02FECBED3C0B1A809AE84A5AEE1CF09_inline (String_t* __this, const RuntimeMethod* method);
// System.Int32 UnityEngine.InputSystem.Samples.VisualizationHelpers/TimelineVisualizer::GetTimeline(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t TimelineVisualizer_GetTimeline_m965C2B519C8D85BEF8B22FF598F6E4D063278F4C (TimelineVisualizer_tDCF8FE655A93D562471977C145A8B989803EA315 * __this, String_t* ___name0, const RuntimeMethod* method);
// System.Int32 UnityEngine.InputSystem.Samples.VisualizationHelpers/TimelineVisualizer::get_timelineCount()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t TimelineVisualizer_get_timelineCount_m7DF69E3DC601AF2B2B8DFBE4FE651A19D5E29932 (TimelineVisualizer_tDCF8FE655A93D562471977C145A8B989803EA315 * __this, const RuntimeMethod* method);
// System.Single UnityEngine.Random::get_value()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Random_get_value_m9AEBC7DF0BB6C57C928B0798349A7D3C0B3FB872 (const RuntimeMethod* method);
// System.Void UnityEngine.Color::.ctor(System.Single,System.Single,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Color__ctor_m679019E6084BF7A6F82590F66F5F695F6A50ECC5 (Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 * __this, float ___r0, float ___g1, float ___b2, float ___a3, const RuntimeMethod* method);
// System.Int32 UnityEngine.InputSystem.Samples.VisualizationHelpers/TimelineVisualizer::AddTimeline(System.String,UnityEngine.Color,UnityEngine.InputSystem.Samples.VisualizationHelpers/TimelineVisualizer/PlotType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t TimelineVisualizer_AddTimeline_mB61A89F5E28EDA9F1BE4A85B5AD626E15B00353C (TimelineVisualizer_tDCF8FE655A93D562471977C145A8B989803EA315 * __this, String_t* ___name0, Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___color1, int32_t ___plotType2, const RuntimeMethod* method);
// System.Void UnityEngine.InputSystem.Samples.VisualizationHelpers/TimelineVisualizer::set_showLegend(System.Boolean)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void TimelineVisualizer_set_showLegend_mB4E3E5417669492C804D1718D0370657C6A6434B_inline (TimelineVisualizer_tDCF8FE655A93D562471977C145A8B989803EA315 * __this, bool ___value0, const RuntimeMethod* method);
// System.Double UnityEngine.InputSystem.InputAction/CallbackContext::get_time()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR double CallbackContext_get_time_mA769B61755D90B8D8BE6B42236F9A8203107C8B8 (CallbackContext_tFAD329A5B98475EEDBD898FFDA3378C44BC12E0B * __this, const RuntimeMethod* method);
// UnityEngine.InputSystem.InputActionPhase UnityEngine.InputSystem.InputAction/CallbackContext::get_phase()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t CallbackContext_get_phase_m1AA786B2FBD617BD9061126BF7442F08484F76E7 (CallbackContext_tFAD329A5B98475EEDBD898FFDA3378C44BC12E0B * __this, const RuntimeMethod* method);
// UnityEngine.InputSystem.Utilities.PrimitiveValue UnityEngine.InputSystem.Utilities.PrimitiveValue::op_Implicit(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR PrimitiveValue_tB787C76E9A37444599C45519DD7E4D3A1D4730C8  PrimitiveValue_op_Implicit_m520988914F077C95B4421DF603EE42FAE47D966B (float ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.InputSystem.Samples.VisualizationHelpers/TimelineVisualizer::AddSample(System.Int32,UnityEngine.InputSystem.Utilities.PrimitiveValue,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TimelineVisualizer_AddSample_mEFE2F9853918EF7E879A17BB9EE0D7B43151A08D (TimelineVisualizer_tDCF8FE655A93D562471977C145A8B989803EA315 * __this, int32_t ___timelineIndex0, PrimitiveValue_tB787C76E9A37444599C45519DD7E4D3A1D4730C8  ___value1, float ___time2, const RuntimeMethod* method);
// !0 System.Collections.Generic.List`1<UnityEngine.InputSystem.Samples.InputActionVisualizer>::get_Item(System.Int32)
inline InputActionVisualizer_t726DF6A67FB0B18AEECDBAB992EABF3B82E339C6 * List_1_get_Item_m5F44DB67A0DAA8DF872581776D0F560B865927E9_inline (List_1_t875D9DC885BBF5157329E3844ACC8835F3F5F066 * __this, int32_t ___index0, const RuntimeMethod* method)
{
	return ((  InputActionVisualizer_t726DF6A67FB0B18AEECDBAB992EABF3B82E339C6 * (*) (List_1_t875D9DC885BBF5157329E3844ACC8835F3F5F066 *, int32_t, const RuntimeMethod*))List_1_get_Item_mF00B574E58FB078BB753B05A3B86DD0A7A266B63_gshared_inline)(__this, ___index0, method);
}
// System.Void UnityEngine.InputSystem.Samples.InputActionVisualizer::OnActionDisabled()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InputActionVisualizer_OnActionDisabled_m2F9F191738BE4386C68A9858ED0C919B4B5971EE (InputActionVisualizer_t726DF6A67FB0B18AEECDBAB992EABF3B82E339C6 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.InputSystem.Samples.InputVisualizer::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InputVisualizer__ctor_mAFD837F6494C800DF6CBFC6427D4875349655DB8 (InputVisualizer_t51917CF1458037727EDDF8C090AEB773F3EAC29E * __this, const RuntimeMethod* method);
// System.Void UnityEngine.InputSystem.Samples.InputControlVisualizer::SetupVisualizer()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InputControlVisualizer_SetupVisualizer_m3E23B649646E07919F7D988D55DE005D24F5ECE7 (InputControlVisualizer_t83B42575FEC0B8A79280A7D5AE2886C0494BC6AF * __this, const RuntimeMethod* method);
// System.Void UnityEngine.InputSystem.Samples.InputControlVisualizer::ResolveControl()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InputControlVisualizer_ResolveControl_m851068D92D77ED82D124F903BE33C36457F6DA86 (InputControlVisualizer_t83B42575FEC0B8A79280A7D5AE2886C0494BC6AF * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<UnityEngine.InputSystem.Samples.InputControlVisualizer>::.ctor()
inline void List_1__ctor_mEF0ED01B6F1A8B15D034E031141EBA514B03F2A3 (List_1_tD92B93CD7F6D0E73500ED17BEEE90D9C77282117 * __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_tD92B93CD7F6D0E73500ED17BEEE90D9C77282117 *, const RuntimeMethod*))List_1__ctor_m0F0E00088CF56FEACC9E32D8B7D91B93D91DAA3B_gshared)(__this, method);
}
// System.Int32 System.Collections.Generic.List`1<UnityEngine.InputSystem.Samples.InputControlVisualizer>::get_Count()
inline int32_t List_1_get_Count_m69DE315A508A83D4D5285EDA046A2BC454A5A2C1_inline (List_1_tD92B93CD7F6D0E73500ED17BEEE90D9C77282117 * __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_tD92B93CD7F6D0E73500ED17BEEE90D9C77282117 *, const RuntimeMethod*))List_1_get_Count_m5D847939ABB9A78203B062CAFFE975792174D00F_gshared_inline)(__this, method);
}
// System.Void System.Action`2<UnityEngine.InputSystem.InputDevice,UnityEngine.InputSystem.InputDeviceChange>::.ctor(System.Object,System.IntPtr)
inline void Action_2__ctor_m8F70F3969874295277CB0CE383C84E1F6DC33BDA (Action_2_tCA9E945868CD5BF442EF675FE455A9E807CED9D1 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Action_2_tCA9E945868CD5BF442EF675FE455A9E807CED9D1 *, RuntimeObject *, intptr_t, const RuntimeMethod*))Action_2__ctor_m60DAAA2A0145306F160B759BC2135A372C0E40B3_gshared)(__this, ___object0, ___method1, method);
}
// System.Void UnityEngine.InputSystem.InputSystem::add_onDeviceChange(System.Action`2<UnityEngine.InputSystem.InputDevice,UnityEngine.InputSystem.InputDeviceChange>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InputSystem_add_onDeviceChange_mAE41D7E93801E17018B69586645B81385CA7153C (Action_2_tCA9E945868CD5BF442EF675FE455A9E807CED9D1 * ___value0, const RuntimeMethod* method);
// System.Void System.Action`2<UnityEngine.InputSystem.LowLevel.InputEventPtr,UnityEngine.InputSystem.InputDevice>::.ctor(System.Object,System.IntPtr)
inline void Action_2__ctor_m20C0B0DB3C956DB848BF90395196756465C09EFC (Action_2_t83E2B2D05A16B14F487969D4D187AEC66413E199 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Action_2_t83E2B2D05A16B14F487969D4D187AEC66413E199 *, RuntimeObject *, intptr_t, const RuntimeMethod*))Action_2__ctor_mB6BCE3EF50770B837367BC293E698D74568FE394_gshared)(__this, ___object0, ___method1, method);
}
// System.Void UnityEngine.InputSystem.InputSystem::add_onEvent(System.Action`2<UnityEngine.InputSystem.LowLevel.InputEventPtr,UnityEngine.InputSystem.InputDevice>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InputSystem_add_onEvent_m4CD5E491F9492E44311933C0DD335ACD2674AC76 (Action_2_t83E2B2D05A16B14F487969D4D187AEC66413E199 * ___value0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<UnityEngine.InputSystem.Samples.InputControlVisualizer>::Add(!0)
inline void List_1_Add_m35E826ECBC0E1C8CA43EE8338888C3958CC07128 (List_1_tD92B93CD7F6D0E73500ED17BEEE90D9C77282117 * __this, InputControlVisualizer_t83B42575FEC0B8A79280A7D5AE2886C0494BC6AF * ___item0, const RuntimeMethod* method)
{
	((  void (*) (List_1_tD92B93CD7F6D0E73500ED17BEEE90D9C77282117 *, InputControlVisualizer_t83B42575FEC0B8A79280A7D5AE2886C0494BC6AF *, const RuntimeMethod*))List_1_Add_mE5B3CBB3A625606D9BC4337FEAAF1D66BCB6F96E_gshared)(__this, ___item0, method);
}
// System.Boolean System.Collections.Generic.List`1<UnityEngine.InputSystem.Samples.InputControlVisualizer>::Remove(!0)
inline bool List_1_Remove_m729CBC2A75F04AA56FF09800A55ED048A9EB3FEE (List_1_tD92B93CD7F6D0E73500ED17BEEE90D9C77282117 * __this, InputControlVisualizer_t83B42575FEC0B8A79280A7D5AE2886C0494BC6AF * ___item0, const RuntimeMethod* method)
{
	return ((  bool (*) (List_1_tD92B93CD7F6D0E73500ED17BEEE90D9C77282117 *, InputControlVisualizer_t83B42575FEC0B8A79280A7D5AE2886C0494BC6AF *, const RuntimeMethod*))List_1_Remove_m753F7B4281CC4D02C07AE90726F51EF34B588DF7_gshared)(__this, ___item0, method);
}
// System.Void UnityEngine.InputSystem.InputSystem::remove_onDeviceChange(System.Action`2<UnityEngine.InputSystem.InputDevice,UnityEngine.InputSystem.InputDeviceChange>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InputSystem_remove_onDeviceChange_mABB2FAEAB30488F3E9DACC47C34DB9B398C724A7 (Action_2_tCA9E945868CD5BF442EF675FE455A9E807CED9D1 * ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.InputSystem.InputSystem::remove_onEvent(System.Action`2<UnityEngine.InputSystem.LowLevel.InputEventPtr,UnityEngine.InputSystem.InputDevice>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InputSystem_remove_onEvent_mFDF8BBBBAB307C81E5F589CB5EE92F4974DED2F4 (Action_2_t83E2B2D05A16B14F487969D4D187AEC66413E199 * ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.InputSystem.Samples.InputVisualizer::OnValidate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InputVisualizer_OnValidate_mC2265CE7F4AADC4C0D266DE1BD8F6091C4BBCDE6 (InputVisualizer_t51917CF1458037727EDDF8C090AEB773F3EAC29E * __this, const RuntimeMethod* method);
// UnityEngine.InputSystem.InputControlList`1<UnityEngine.InputSystem.InputControl> UnityEngine.InputSystem.InputSystem::FindControls(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR InputControlList_1_tC251485A8EBE20F32C1828D6F68B450DAB732E96  InputSystem_FindControls_mF82293383D66046185D2C50219652A0BF05017F8 (String_t* ___path0, const RuntimeMethod* method);
// System.Int32 UnityEngine.InputSystem.InputControlList`1<UnityEngine.InputSystem.InputControl>::get_Count()
inline int32_t InputControlList_1_get_Count_m6C41B033AC753606385ED7F9C15DC5C0960BE592_inline (InputControlList_1_tC251485A8EBE20F32C1828D6F68B450DAB732E96 * __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (InputControlList_1_tC251485A8EBE20F32C1828D6F68B450DAB732E96 *, const RuntimeMethod*))InputControlList_1_get_Count_m7A8114381D67F6EA7D09BA3B0676CA7257F62A5F_gshared_inline)(__this, method);
}
// !0 UnityEngine.InputSystem.InputControlList`1<UnityEngine.InputSystem.InputControl>::get_Item(System.Int32)
inline InputControl_t3CDD1115017147EEC9D825834637D7700669C006 * InputControlList_1_get_Item_mA00C10A722E15D8FACC324A8042364DC6BC8CC20 (InputControlList_1_tC251485A8EBE20F32C1828D6F68B450DAB732E96 * __this, int32_t ___index0, const RuntimeMethod* method)
{
	return ((  InputControl_t3CDD1115017147EEC9D825834637D7700669C006 * (*) (InputControlList_1_tC251485A8EBE20F32C1828D6F68B450DAB732E96 *, int32_t, const RuntimeMethod*))InputControlList_1_get_Item_mD7ECFAA9D15817BF09A2E2FC9F5D3E962C853A6F_gshared)(__this, ___index0, method);
}
// System.Void UnityEngine.InputSystem.InputControlList`1<UnityEngine.InputSystem.InputControl>::Dispose()
inline void InputControlList_1_Dispose_m89933A9B868B8E5D9EF0C8528B85D5A308169127 (InputControlList_1_tC251485A8EBE20F32C1828D6F68B450DAB732E96 * __this, const RuntimeMethod* method)
{
	((  void (*) (InputControlList_1_tC251485A8EBE20F32C1828D6F68B450DAB732E96 *, const RuntimeMethod*))InputControlList_1_Dispose_m59C755B89A523F016D9C28CEE52363B853FE1BE2_gshared)(__this, method);
}
// System.Void UnityEngine.InputSystem.Samples.VisualizationHelpers/TimelineVisualizer::set_timeUnit(UnityEngine.InputSystem.Samples.VisualizationHelpers/TimelineVisualizer/TimeUnit)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void TimelineVisualizer_set_timeUnit_mD5522FB42266C562986C4F6D4849199FDB86A2CC_inline (TimelineVisualizer_tDCF8FE655A93D562471977C145A8B989803EA315 * __this, int32_t ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.InputSystem.Samples.VisualizationHelpers/TimelineVisualizer::set_historyDepth(System.Int32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void TimelineVisualizer_set_historyDepth_m5D8C6D1A1D48F2232A428683AB5F9DB2C6043083_inline (TimelineVisualizer_tDCF8FE655A93D562471977C145A8B989803EA315 * __this, int32_t ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.InputSystem.Samples.VisualizationHelpers/TimelineVisualizer::set_showLimits(System.Boolean)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void TimelineVisualizer_set_showLimits_m5C5222B165A6EEB20C2BD897D29E3A0D8D409AC3_inline (TimelineVisualizer_tDCF8FE655A93D562471977C145A8B989803EA315 * __this, bool ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.InputSystem.Samples.VisualizationHelpers/TimelineVisualizer::set_limitsY(UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TimelineVisualizer_set_limitsY_mBC2A875F5B15BBFA8AF8D385765F01A24489A376 (TimelineVisualizer_tDCF8FE655A93D562471977C145A8B989803EA315 * __this, Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___value0, const RuntimeMethod* method);
// UnityEngine.Color UnityEngine.Color::get_green()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  Color_get_green_mFF9BD42534D385A0717B1EAD083ADF08712984B9 (const RuntimeMethod* method);
// System.Void UnityEngine.InputSystem.Samples.VisualizationHelpers/TimelineVisualizer::set_valueUnit(UnityEngine.GUIContent)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void TimelineVisualizer_set_valueUnit_m68DEDAC6246114169451B77BAA89C357E8F57E37_inline (TimelineVisualizer_tDCF8FE655A93D562471977C145A8B989803EA315 * __this, GUIContent_t39256993BF4A33F76E073488D6A2F13D678DF60E * ___value0, const RuntimeMethod* method);
// UnityEngine.Color UnityEngine.Color::get_red()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  Color_get_red_m9BD55EBF7A74A515330FA5F7AC7A67C8A8913DD8 (const RuntimeMethod* method);
// System.Void System.NotImplementedException::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NotImplementedException__ctor_mA2E9CE7F00CB335581A296D2596082D57E45BA83 (NotImplementedException_t26260C4EE0444C5FA022994203060B3A42A3ADE6 * __this, const RuntimeMethod* method);
// !0 System.Collections.Generic.List`1<UnityEngine.InputSystem.Samples.InputControlVisualizer>::get_Item(System.Int32)
inline InputControlVisualizer_t83B42575FEC0B8A79280A7D5AE2886C0494BC6AF * List_1_get_Item_mDD32886AF1B275B69654CE61C1DDFB3542159D91_inline (List_1_tD92B93CD7F6D0E73500ED17BEEE90D9C77282117 * __this, int32_t ___index0, const RuntimeMethod* method)
{
	return ((  InputControlVisualizer_t83B42575FEC0B8A79280A7D5AE2886C0494BC6AF * (*) (List_1_tD92B93CD7F6D0E73500ED17BEEE90D9C77282117 *, int32_t, const RuntimeMethod*))List_1_get_Item_mF00B574E58FB078BB753B05A3B86DD0A7A266B63_gshared_inline)(__this, ___index0, method);
}
// UnityEngine.InputSystem.InputDevice UnityEngine.InputSystem.InputControl::get_device()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR InputDevice_t9E276EAE78C382539051998DEA1CD0ECF2E91323 * InputControl_get_device_m26988D04E8358B6DB6EE7EEDAEBEB7EB260FF29E_inline (InputControl_t3CDD1115017147EEC9D825834637D7700669C006 * __this, const RuntimeMethod* method);
// System.UInt32 UnityEngine.InputSystem.LowLevel.InputState::get_updateCount()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR uint32_t InputState_get_updateCount_m53C26B51E7177C1189A0E0562045F6F17522492A_inline (const RuntimeMethod* method);
// UnityEngine.InputSystem.LowLevel.InputUpdateType UnityEngine.InputSystem.LowLevel.InputState::get_currentUpdateType()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t InputState_get_currentUpdateType_m502606CAA93CC4E4AB22DB61B88BD9C2C3A27AD9_inline (const RuntimeMethod* method);
// System.Boolean UnityEngine.InputSystem.LowLevel.InputEventPtr::IsA<UnityEngine.InputSystem.LowLevel.StateEvent>()
inline bool InputEventPtr_IsA_TisStateEvent_t5FC3789364630893748679234A6A7FDE4BA64B70_mB234D9EBB5E6AE99FF42493115B2BFCA7609026A (InputEventPtr_tC7799829CE3FDCA9E191C7BC946ABE0DB17B377D * __this, const RuntimeMethod* method)
{
	return ((  bool (*) (InputEventPtr_tC7799829CE3FDCA9E191C7BC946ABE0DB17B377D *, const RuntimeMethod*))InputEventPtr_IsA_TisStateEvent_t5FC3789364630893748679234A6A7FDE4BA64B70_mB234D9EBB5E6AE99FF42493115B2BFCA7609026A_gshared)(__this, method);
}
// System.Boolean UnityEngine.InputSystem.LowLevel.InputEventPtr::IsA<UnityEngine.InputSystem.LowLevel.DeltaStateEvent>()
inline bool InputEventPtr_IsA_TisDeltaStateEvent_t8CA8FF8F0CF816316C0682FE4A0387DB02D3334A_m95E3ABAF4B7FAAAE53BCCFF687591BBDCB587CC8 (InputEventPtr_tC7799829CE3FDCA9E191C7BC946ABE0DB17B377D * __this, const RuntimeMethod* method)
{
	return ((  bool (*) (InputEventPtr_tC7799829CE3FDCA9E191C7BC946ABE0DB17B377D *, const RuntimeMethod*))InputEventPtr_IsA_TisDeltaStateEvent_t8CA8FF8F0CF816316C0682FE4A0387DB02D3334A_m95E3ABAF4B7FAAAE53BCCFF687591BBDCB587CC8_gshared)(__this, method);
}
// System.Void UnityEngine.InputSystem.Samples.InputControlVisualizer::OnEventImpl(UnityEngine.InputSystem.LowLevel.InputEventPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InputControlVisualizer_OnEventImpl_mE19EB1CBBFF48EA6FA7229DF80D96C8E424675A2 (InputControlVisualizer_t83B42575FEC0B8A79280A7D5AE2886C0494BC6AF * __this, InputEventPtr_tC7799829CE3FDCA9E191C7BC946ABE0DB17B377D  ___eventPtr0, const RuntimeMethod* method);
// System.Void* UnityEngine.InputSystem.InputControlExtensions::GetStatePtrFromStateEvent(UnityEngine.InputSystem.InputControl,UnityEngine.InputSystem.LowLevel.InputEventPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void* InputControlExtensions_GetStatePtrFromStateEvent_m4687E9C90A24AA3B9F4284A997AD41EB6ADED546 (InputControl_t3CDD1115017147EEC9D825834637D7700669C006 * ___control0, InputEventPtr_tC7799829CE3FDCA9E191C7BC946ABE0DB17B377D  ___eventPtr1, const RuntimeMethod* method);
// System.Double UnityEngine.InputSystem.LowLevel.InputEventPtr::get_time()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR double InputEventPtr_get_time_m46BFA4C294BAC5945221DFF948B99C16BA97F0B3 (InputEventPtr_tC7799829CE3FDCA9E191C7BC946ABE0DB17B377D * __this, const RuntimeMethod* method);
// UnityEngine.InputSystem.Utilities.PrimitiveValue& UnityEngine.InputSystem.Samples.VisualizationHelpers/TimelineVisualizer::GetOrCreateSample(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR PrimitiveValue_tB787C76E9A37444599C45519DD7E4D3A1D4730C8 * TimelineVisualizer_GetOrCreateSample_m2DF8059FD0CC02C872112585BC551607BA8E99C1 (TimelineVisualizer_tDCF8FE655A93D562471977C145A8B989803EA315 * __this, int32_t ___timelineIndex0, int32_t ___frame1, const RuntimeMethod* method);
// System.Int32 UnityEngine.InputSystem.Utilities.PrimitiveValue::ToInt32(System.IFormatProvider)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t PrimitiveValue_ToInt32_m915D62C8002F200BD28587B77113678E7023B009 (PrimitiveValue_tB787C76E9A37444599C45519DD7E4D3A1D4730C8 * __this, RuntimeObject* ___provider0, const RuntimeMethod* method);
// UnityEngine.InputSystem.Utilities.PrimitiveValue UnityEngine.InputSystem.Utilities.PrimitiveValue::op_Implicit(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR PrimitiveValue_tB787C76E9A37444599C45519DD7E4D3A1D4730C8  PrimitiveValue_op_Implicit_m7F42D08EFF4110E852E0ED056F4D6B236D16F233 (int32_t ___value0, const RuntimeMethod* method);
// UnityEngine.Vector2 UnityEngine.InputSystem.Samples.VisualizationHelpers/TimelineVisualizer::get_limitsY()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  TimelineVisualizer_get_limitsY_m21AD946F4CC59C31D30B70E84D4C9CB317EB7A3C_inline (TimelineVisualizer_tDCF8FE655A93D562471977C145A8B989803EA315 * __this, const RuntimeMethod* method);
// System.Single UnityEngine.Mathf::Max(System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Mathf_Max_m4CE510E1F1013B33275F01543731A51A58BA0775 (float ___a0, float ___b1, const RuntimeMethod* method);
// System.Single UnityEngine.Time::get_realtimeSinceStartup()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Time_get_realtimeSinceStartup_m5228CC1C1E57213D4148E965499072EA70D8C02B (const RuntimeMethod* method);
// System.Double UnityEngine.InputSystem.Utilities.PrimitiveValue::ToDouble(System.IFormatProvider)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR double PrimitiveValue_ToDouble_m1E8D9905E0305511DEEC81633A9B32281ABC7101 (PrimitiveValue_tB787C76E9A37444599C45519DD7E4D3A1D4730C8 * __this, RuntimeObject* ___provider0, const RuntimeMethod* method);
// UnityEngine.InputSystem.Utilities.PrimitiveValue UnityEngine.InputSystem.Utilities.PrimitiveValue::op_Implicit(System.Double)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR PrimitiveValue_tB787C76E9A37444599C45519DD7E4D3A1D4730C8  PrimitiveValue_op_Implicit_mAB03BBECCFF7835FEB0B29BE7050CEDAFEA021BC (double ___value0, const RuntimeMethod* method);
// System.UInt32 UnityEngine.InputSystem.LowLevel.InputEventPtr::get_sizeInBytes()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t InputEventPtr_get_sizeInBytes_m0F76E2819F6E498CFF972B3FDCD68C9813096447 (InputEventPtr_tC7799829CE3FDCA9E191C7BC946ABE0DB17B377D * __this, const RuntimeMethod* method);
// UnityEngine.InputSystem.Utilities.PrimitiveValue UnityEngine.InputSystem.Utilities.PrimitiveValue::op_Implicit(System.Int64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR PrimitiveValue_tB787C76E9A37444599C45519DD7E4D3A1D4730C8  PrimitiveValue_op_Implicit_m9591C3BBBE7E39D2630D39EBB2336702030F7810 (int64_t ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.InputSystem.Samples.InputVisualizer::ResolveParent()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InputVisualizer_ResolveParent_m0C8E84CAD860C9768366C2393EFC4F19D045FC6D (InputVisualizer_t51917CF1458037727EDDF8C090AEB773F3EAC29E * __this, const RuntimeMethod* method);
// UnityEngine.Vector2 UnityEngine.Rect::get_position()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  Rect_get_position_m4D98DEE21C60D7EA5E4A30869F4DBDE25DB93A86 (Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878 * __this, const RuntimeMethod* method);
// UnityEngine.Vector2 UnityEngine.Vector2::op_Addition(UnityEngine.Vector2,UnityEngine.Vector2)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  Vector2_op_Addition_m5EACC2AEA80FEE29F380397CF1F4B11D04BE71CC_inline (Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___a0, Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___b1, const RuntimeMethod* method);
// System.Void UnityEngine.Rect::set_position(UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Rect_set_position_m25716C90100155ED807D2812E24D2880D7D89D0D (Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878 * __this, Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.InputSystem.Samples.VisualizationHelpers::DrawRectangle(UnityEngine.Rect,UnityEngine.Color)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VisualizationHelpers_DrawRectangle_mCE75B71D5E3EB525AED283FE50CEA73998357E29 (Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878  ___rect0, Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___color1, const RuntimeMethod* method);
// System.Void UnityEngine.GUIStyle::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GUIStyle__ctor_mDA0E00D0017FC0B2FC333C5DD6E1EDBAE3BCB8E3 (GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * __this, const RuntimeMethod* method);
// UnityEngine.GUIStyleState UnityEngine.GUIStyle::get_normal()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GUIStyleState_tC89202668617B1D7884980314F293AD382B9AAD9 * GUIStyle_get_normal_mAD82F2E3C188C5B112B82807398D61B9998E9CDE (GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * __this, const RuntimeMethod* method);
// UnityEngine.Color UnityEngine.Color::get_yellow()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  Color_get_yellow_m9FD4BDABA7E40E136BE57EE7872CEA6B1B2FA1D1 (const RuntimeMethod* method);
// System.Void UnityEngine.GUIStyleState::set_textColor(UnityEngine.Color)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GUIStyleState_set_textColor_mB4B61B9CAC1D6B4694471A2BB1191B5F0D5D764A (GUIStyleState_tC89202668617B1D7884980314F293AD382B9AAD9 * __this, Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___value0, const RuntimeMethod* method);
// UnityEngine.Vector2 UnityEngine.GUIStyle::CalcSize(UnityEngine.GUIContent)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  GUIStyle_CalcSize_m3B4ADD2AF66EFF1A273C10C0F77741EAD96F3F2D (GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * __this, GUIContent_t39256993BF4A33F76E073488D6A2F13D678DF60E * ___content0, const RuntimeMethod* method);
// System.Single UnityEngine.Rect::get_y()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Rect_get_y_m4E1AAD20D167085FF4F9E9C86EF34689F5770A74 (Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878 * __this, const RuntimeMethod* method);
// System.Single UnityEngine.Rect::get_height()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Rect_get_height_m42FEF31015A269E6E2B7E6F62E72E5BF6602302A (Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Rect::.ctor(System.Single,System.Single,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Rect__ctor_m12075526A02B55B680716A34AD5287B223122B70 (Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878 * __this, float ___x0, float ___y1, float ___width2, float ___height3, const RuntimeMethod* method);
// System.Void UnityEngine.GUIStyle::Draw(UnityEngine.Rect,UnityEngine.GUIContent,System.Boolean,System.Boolean,System.Boolean,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GUIStyle_Draw_mF228532CAE3828C7F67CF10CAD21F784FA45DBDD (GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * __this, Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878  ___position0, GUIContent_t39256993BF4A33F76E073488D6A2F13D678DF60E * ___content1, bool ___isHover2, bool ___isActive3, bool ___on4, bool ___hasKeyboardFocus5, const RuntimeMethod* method);
// UnityEngine.Transform UnityEngine.Component::get_transform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, const RuntimeMethod* method);
// UnityEngine.Transform UnityEngine.Transform::get_parent()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * Transform_get_parent_m7D06005D9CB55F90F39D42F6A2AF9C7BC80745C9 (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, const RuntimeMethod* method);
// !!0 UnityEngine.Component::GetComponent<UnityEngine.InputSystem.Samples.InputControlVisualizer>()
inline InputControlVisualizer_t83B42575FEC0B8A79280A7D5AE2886C0494BC6AF * Component_GetComponent_TisInputControlVisualizer_t83B42575FEC0B8A79280A7D5AE2886C0494BC6AF_m0394BFEEEC6FAEFDA8837ACBDC369708DC222D64 (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, const RuntimeMethod* method)
{
	return ((  InputControlVisualizer_t83B42575FEC0B8A79280A7D5AE2886C0494BC6AF * (*) (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m69D9C576D6DD024C709E29EEADBC8041299A3AA7_gshared)(__this, method);
}
// System.Void UnityEngine.MonoBehaviour::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED (MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A * __this, const RuntimeMethod* method);
// System.Single UnityEngine.Rect::get_width()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Rect_get_width_m4A0500D95CA84917787A8E90D26E66D49DFA90EF (Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878 * __this, const RuntimeMethod* method);
// System.Single UnityEngine.Rect::get_xMax()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Rect_get_xMax_m174FFAACE6F19A59AA793B3D507BE70116E27DE5 (Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.InputSystem.Samples.VisualizationHelpers::DrawLine(UnityEngine.Vector2,UnityEngine.Vector2,UnityEngine.Color,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VisualizationHelpers_DrawLine_m5092487DE42DE433CBF73DB576C6F69E1D439E45 (Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___pointA0, Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___pointB1, Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___color2, float ___width3, const RuntimeMethod* method);
// UnityEngine.Vector2 UnityEngine.Vector2::op_Subtraction(UnityEngine.Vector2,UnityEngine.Vector2)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  Vector2_op_Subtraction_m6E536A8C72FEAA37FF8D5E26E11D6E71EB59599A_inline (Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___a0, Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___b1, const RuntimeMethod* method);
// UnityEngine.Color UnityEngine.GUI::get_color()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  GUI_get_color_m61B524C99DD85A0DF405540C6E7453600E816FD5 (const RuntimeMethod* method);
// System.Void UnityEngine.GUI::set_color(UnityEngine.Color)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GUI_set_color_m627E2716FD33EF327E38EE0048CE44FAD77AB87F (Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___value0, const RuntimeMethod* method);
// UnityEngine.Texture2D UnityEngine.InputSystem.Samples.VisualizationHelpers::get_OnePixTex()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * VisualizationHelpers_get_OnePixTex_mFABF3F45732CC79316B44ABAB77F6EDEC5515C8D (const RuntimeMethod* method);
// System.Void UnityEngine.GUI::DrawTexture(UnityEngine.Rect,UnityEngine.Texture)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GUI_DrawTexture_mDD0221088900E3F53BA7B8A03B9E5CD2E6FDD0F8 (Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878  ___position0, Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE * ___image1, const RuntimeMethod* method);
// System.Void UnityEngine.GUIContent::.ctor(UnityEngine.GUIContent)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GUIContent__ctor_m87E695240720FBABF3321CAA0F960FC02DF18647 (GUIContent_t39256993BF4A33F76E073488D6A2F13D678DF60E * __this, GUIContent_t39256993BF4A33F76E073488D6A2F13D678DF60E * ___src0, const RuntimeMethod* method);
// UnityEngine.Matrix4x4 UnityEngine.GUI::get_matrix()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  GUI_get_matrix_m06096A34C4E286301DA2608369D93E392DD52F4D (const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector2::op_Implicit(UnityEngine.Vector2)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector2_op_Implicit_m4FA146E613DBFE6C1C4B0E9B461D622E6F2FC294_inline (Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___v0, const RuntimeMethod* method);
// UnityEngine.Vector2 UnityEngine.Vector2::get_right()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  Vector2_get_right_m42ED15112D219375D2B6879E62ED925D002F15AF (const RuntimeMethod* method);
// System.Single UnityEngine.Vector3::Angle(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Vector3_Angle_m3715AB03A36C59D8CF08F8D71E2F46454EB884C1 (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___from0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___to1, const RuntimeMethod* method);
// System.Single UnityEngine.Vector2::get_magnitude()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Vector2_get_magnitude_mD30DB8EB73C4A5CD395745AE1CA1C38DC61D2E85 (Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.GUIUtility::ScaleAroundPivot(UnityEngine.Vector2,UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GUIUtility_ScaleAroundPivot_mEEB3A9EBDA6F6461CDCB11986B032C6066CE81E8 (Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___scale0, Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___pivotPoint1, const RuntimeMethod* method);
// System.Void UnityEngine.GUIUtility::RotateAroundPivot(System.Single,UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GUIUtility_RotateAroundPivot_m1CC188CD7951044BDF671AF0A7201D6133B9672C (float ___angle0, Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___pivotPoint1, const RuntimeMethod* method);
// System.Void UnityEngine.GUI::set_matrix(UnityEngine.Matrix4x4)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GUI_set_matrix_m071711DB6CD94992416D9E039AD6B25383B46222 (Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  ___value0, const RuntimeMethod* method);
// System.Int32 UnityEngine.GUIStyle::get_fontSize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t GUIStyle_get_fontSize_mBB2A5059B7D8B82CEC451E10F01143A586C61A55 (GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.GUIStyle::set_fontSize(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GUIStyle_set_fontSize_mFA02B9950E09F880976FD2FF646FB8AAEED1C5C6 (GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * __this, int32_t ___value0, const RuntimeMethod* method);
// UnityEngine.Color UnityEngine.Color::get_white()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  Color_get_white_mB21E47D20959C3AEC41AF8BA04F63AC89FAF319E (const RuntimeMethod* method);
// System.Boolean UnityEngine.Object::op_Equality(UnityEngine.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Equality_mEE9EC7EB5C7DC3E95B94AB904E1986FC4D566D54 (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * ___x0, Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * ___y1, const RuntimeMethod* method);
// System.Void UnityEngine.Texture2D::.ctor(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Texture2D__ctor_m7D64AB4C55A01F2EE57483FD9EF826607DF9E4B4 (Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * __this, int32_t ___width0, int32_t ___height1, const RuntimeMethod* method);
// System.Void UnityEngine.InputSystem.Samples.VisualizationHelpers/Visualizer::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Visualizer__ctor_mAD0F3ADB5469953D1A1C6A84B235D3A9D3095F2E (Visualizer_t48757514E9C44C7B20B531BB6D2713A570AA8B74 * __this, const RuntimeMethod* method);
// UnityEngine.InputSystem.Samples.VisualizationHelpers/TimelineVisualizer/TimeUnit UnityEngine.InputSystem.Samples.VisualizationHelpers/TimelineVisualizer::get_timeUnit()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t TimelineVisualizer_get_timeUnit_mF6FCA53A8EA6CCC429BA80A17C290451B7DE8209_inline (TimelineVisualizer_tDCF8FE655A93D562471977C145A8B989803EA315 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.GUI::BeginGroup(UnityEngine.Rect)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GUI_BeginGroup_m905B2872B44E5D2CEAD7162B57688189A996CE64 (Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878  ___position0, const RuntimeMethod* method);
// TValue& UnityEngine.InputSystem.Samples.VisualizationHelpers/RingBuffer`1<UnityEngine.InputSystem.Samples.VisualizationHelpers/TimelineVisualizer/TimeSample>::get_Item(System.Int32)
inline TimeSample_t926350553A4576F5F20E71A9CFB9A19E37F35C2B * RingBuffer_1_get_Item_mF7D35F29AD84949BD33FCD9F6F4AB2F5787DB756 (RingBuffer_1_tD482466EFEACC434BCF1AE233235CA27903B4370 * __this, int32_t ___index0, const RuntimeMethod* method)
{
	return ((  TimeSample_t926350553A4576F5F20E71A9CFB9A19E37F35C2B * (*) (RingBuffer_1_tD482466EFEACC434BCF1AE233235CA27903B4370 *, int32_t, const RuntimeMethod*))RingBuffer_1_get_Item_mF7D35F29AD84949BD33FCD9F6F4AB2F5787DB756_gshared)(__this, ___index0, method);
}
// TValue& UnityEngine.InputSystem.Samples.VisualizationHelpers/RingBuffer`1<UnityEngine.InputSystem.Samples.VisualizationHelpers/TimelineVisualizer/FrameSample>::get_Item(System.Int32)
inline FrameSample_t8064F61DD3BB94546FB62C119AB80FAD66546E1B * RingBuffer_1_get_Item_m324251981EEDA84F8C57FDBB08FB72521CD65892 (RingBuffer_1_t6C5FD528A08BBDFABB08C4C1A6086AF9E61B794E * __this, int32_t ___index0, const RuntimeMethod* method)
{
	return ((  FrameSample_t8064F61DD3BB94546FB62C119AB80FAD66546E1B * (*) (RingBuffer_1_t6C5FD528A08BBDFABB08C4C1A6086AF9E61B794E *, int32_t, const RuntimeMethod*))RingBuffer_1_get_Item_m324251981EEDA84F8C57FDBB08FB72521CD65892_gshared)(__this, ___index0, method);
}
// System.Boolean UnityEngine.InputSystem.Utilities.PrimitiveValue::get_isEmpty()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PrimitiveValue_get_isEmpty_m37CB4094125F0485BC712CBD962C89190A93174D (PrimitiveValue_tB787C76E9A37444599C45519DD7E4D3A1D4730C8 * __this, const RuntimeMethod* method);
// System.Single UnityEngine.InputSystem.Utilities.PrimitiveValue::ToSingle(System.IFormatProvider)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float PrimitiveValue_ToSingle_m054D300CB21621FCB5313ABAD886DC7404DB2F82 (PrimitiveValue_tB787C76E9A37444599C45519DD7E4D3A1D4730C8 * __this, RuntimeObject* ___provider0, const RuntimeMethod* method);
// System.Void UnityEngine.GUI::EndGroup()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GUI_EndGroup_m9B704F4411F4B1A91953CDCEE0877600A306F217 (const RuntimeMethod* method);
// System.Boolean UnityEngine.InputSystem.Samples.VisualizationHelpers/TimelineVisualizer::get_showLegend()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool TimelineVisualizer_get_showLegend_m76D2BCA5109D2FBB8A5666186A758A5163A4B50D_inline (TimelineVisualizer_tDCF8FE655A93D562471977C145A8B989803EA315 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Rect::set_x(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Rect_set_x_m1147A05B5046E1D4427E8EC99B9DFA4A32EEDEE6 (Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878 * __this, float ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.Rect::set_width(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Rect_set_width_m07D84AD7C7093EDCCD94A7B93A9447CA9917DD9D (Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878 * __this, float ___value0, const RuntimeMethod* method);
// System.Single UnityEngine.GUIStyle::CalcHeight(UnityEngine.GUIContent,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float GUIStyle_CalcHeight_m120220D334AEC6B33F4767EA54FE78CEC09FBCC9 (GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * __this, GUIContent_t39256993BF4A33F76E073488D6A2F13D678DF60E * ___content0, float ___width1, const RuntimeMethod* method);
// System.Void UnityEngine.Rect::set_height(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Rect_set_height_m4A00B16C122F44FEF4BA074386F3DC11FF4B4D23 (Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878 * __this, float ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.Rect::set_y(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Rect_set_y_m015507262F8AC5AFF1B4E986B66307F31FB3A10E (Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878 * __this, float ___value0, const RuntimeMethod* method);
// System.Boolean UnityEngine.InputSystem.Samples.VisualizationHelpers/TimelineVisualizer::get_showLimits()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool TimelineVisualizer_get_showLimits_m07C398180EAE041B67798510A5ADFDAA852A87B3_inline (TimelineVisualizer_tDCF8FE655A93D562471977C145A8B989803EA315 * __this, const RuntimeMethod* method);
// System.String System.Single::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Single_ToString_m80E7ABED4F4D73F2BE19DDB80D3D92FCD8DFA010 (float* __this, const RuntimeMethod* method);
// System.Void System.InvalidOperationException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InvalidOperationException__ctor_mC012CE552988309733C896F3FEA8249171E4402E (InvalidOperationException_t10D3EE59AD28EC641ACEE05BCA4271A527E5ECAB * __this, String_t* ___message0, const RuntimeMethod* method);
// UnityEngine.InputSystem.Utilities.PrimitiveValue UnityEngine.InputSystem.Utilities.PrimitiveValue::FromObject(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR PrimitiveValue_tB787C76E9A37444599C45519DD7E4D3A1D4730C8  PrimitiveValue_FromObject_m7F17C93232F8B85D44D00A80EF6ADAF6686172BC (RuntimeObject * ___value0, const RuntimeMethod* method);
// System.Int32 UnityEngine.InputSystem.Samples.VisualizationHelpers/TimelineVisualizer::get_historyDepth()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t TimelineVisualizer_get_historyDepth_mEB98A597D139219DF157F47E1EB425C9B7985EA2_inline (TimelineVisualizer_tDCF8FE655A93D562471977C145A8B989803EA315 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.InputSystem.Samples.VisualizationHelpers/RingBuffer`1<UnityEngine.InputSystem.Samples.VisualizationHelpers/TimelineVisualizer/FrameSample>::.ctor(System.Int32)
inline void RingBuffer_1__ctor_m41C93D129E54821358D0152E7184702894B5BC1E (RingBuffer_1_t6C5FD528A08BBDFABB08C4C1A6086AF9E61B794E * __this, int32_t ___size0, const RuntimeMethod* method)
{
	((  void (*) (RingBuffer_1_t6C5FD528A08BBDFABB08C4C1A6086AF9E61B794E *, int32_t, const RuntimeMethod*))RingBuffer_1__ctor_m41C93D129E54821358D0152E7184702894B5BC1E_gshared)(__this, ___size0, method);
}
// System.Void UnityEngine.InputSystem.Samples.VisualizationHelpers/RingBuffer`1<UnityEngine.InputSystem.Samples.VisualizationHelpers/TimelineVisualizer/TimeSample>::.ctor(System.Int32)
inline void RingBuffer_1__ctor_m008DAFC556453D757AC430CFBCE66287F415776E (RingBuffer_1_tD482466EFEACC434BCF1AE233235CA27903B4370 * __this, int32_t ___size0, const RuntimeMethod* method)
{
	((  void (*) (RingBuffer_1_tD482466EFEACC434BCF1AE233235CA27903B4370 *, int32_t, const RuntimeMethod*))RingBuffer_1__ctor_m008DAFC556453D757AC430CFBCE66287F415776E_gshared)(__this, ___size0, method);
}
// System.Void System.Array::Resize<UnityEngine.InputSystem.Samples.VisualizationHelpers/TimelineVisualizer/Timeline>(!!0[]&,System.Int32)
inline void Array_Resize_TisTimeline_t0E8C3B4B157DAE25A77A695529CE737933D5CCBE_mBA8BC27E328677C85F6EB666EACBA917A90FB009 (TimelineU5BU5D_tC4060193BF7CE25CDC70D417EEDC7175EA74B44F** ___array0, int32_t ___newSize1, const RuntimeMethod* method)
{
	((  void (*) (TimelineU5BU5D_tC4060193BF7CE25CDC70D417EEDC7175EA74B44F**, int32_t, const RuntimeMethod*))Array_Resize_TisTimeline_t0E8C3B4B157DAE25A77A695529CE737933D5CCBE_mBA8BC27E328677C85F6EB666EACBA917A90FB009_gshared)(___array0, ___newSize1, method);
}
// System.String UnityEngine.GUIContent::get_text()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* GUIContent_get_text_mA6BE9C17B069417994ED27EE812A39BB960D921A (GUIContent_t39256993BF4A33F76E073488D6A2F13D678DF60E * __this, const RuntimeMethod* method);
// TValue& UnityEngine.InputSystem.Samples.VisualizationHelpers/RingBuffer`1<UnityEngine.InputSystem.Samples.VisualizationHelpers/TimelineVisualizer/TimeSample>::Append(TValue)
inline TimeSample_t926350553A4576F5F20E71A9CFB9A19E37F35C2B * RingBuffer_1_Append_m5EEA4129391DF819A18C217E469874629F2CF98B (RingBuffer_1_tD482466EFEACC434BCF1AE233235CA27903B4370 * __this, TimeSample_t926350553A4576F5F20E71A9CFB9A19E37F35C2B  ___value0, const RuntimeMethod* method)
{
	return ((  TimeSample_t926350553A4576F5F20E71A9CFB9A19E37F35C2B * (*) (RingBuffer_1_tD482466EFEACC434BCF1AE233235CA27903B4370 *, TimeSample_t926350553A4576F5F20E71A9CFB9A19E37F35C2B , const RuntimeMethod*))RingBuffer_1_Append_m5EEA4129391DF819A18C217E469874629F2CF98B_gshared)(__this, ___value0, method);
}
// System.Void UnityEngine.Debug::Assert(System.Boolean,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_Assert_m28EC098B41C037ED14C42FE47D0E5355CD2437F5 (bool ___condition0, String_t* ___message1, const RuntimeMethod* method);
// TValue& UnityEngine.InputSystem.Samples.VisualizationHelpers/RingBuffer`1<UnityEngine.InputSystem.Samples.VisualizationHelpers/TimelineVisualizer/FrameSample>::Append(TValue)
inline FrameSample_t8064F61DD3BB94546FB62C119AB80FAD66546E1B * RingBuffer_1_Append_mDC563C0021BB061ED5797274D0E98835815A9E40 (RingBuffer_1_t6C5FD528A08BBDFABB08C4C1A6086AF9E61B794E * __this, FrameSample_t8064F61DD3BB94546FB62C119AB80FAD66546E1B  ___value0, const RuntimeMethod* method)
{
	return ((  FrameSample_t8064F61DD3BB94546FB62C119AB80FAD66546E1B * (*) (RingBuffer_1_t6C5FD528A08BBDFABB08C4C1A6086AF9E61B794E *, FrameSample_t8064F61DD3BB94546FB62C119AB80FAD66546E1B , const RuntimeMethod*))RingBuffer_1_Append_mDC563C0021BB061ED5797274D0E98835815A9E40_gshared)(__this, ___value0, method);
}
// System.Void UnityEngine.InputSystem.Samples.VisualizationHelpers/ValueVisualizer`1<UnityEngine.Vector2>::.ctor(System.Int32)
inline void ValueVisualizer_1__ctor_m549DFCBB6C3329F6E1B2F8185D2F7D56349883FB (ValueVisualizer_1_t80E00BEE21AB8F001F08BF2B39E8894884283EDE * __this, int32_t ___numSamples0, const RuntimeMethod* method)
{
	((  void (*) (ValueVisualizer_1_t80E00BEE21AB8F001F08BF2B39E8894884283EDE *, int32_t, const RuntimeMethod*))ValueVisualizer_1__ctor_m549DFCBB6C3329F6E1B2F8185D2F7D56349883FB_gshared)(__this, ___numSamples0, method);
}
// System.Void UnityEngine.InputSystem.Samples.VisualizationHelpers/ValueVisualizer`1<UnityEngine.Vector2>::AddSample(System.Object,System.Double)
inline void ValueVisualizer_1_AddSample_mE5681CB696F7117D8BDECC59AFE262D0875904DE (ValueVisualizer_1_t80E00BEE21AB8F001F08BF2B39E8894884283EDE * __this, RuntimeObject * ___value0, double ___time1, const RuntimeMethod* method)
{
	((  void (*) (ValueVisualizer_1_t80E00BEE21AB8F001F08BF2B39E8894884283EDE *, RuntimeObject *, double, const RuntimeMethod*))ValueVisualizer_1_AddSample_mE5681CB696F7117D8BDECC59AFE262D0875904DE_gshared)(__this, ___value0, ___time1, method);
}
// System.Single UnityEngine.Vector2::SignedAngle(UnityEngine.Vector2,UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Vector2_SignedAngle_m007FAC4E36153EEBC62347D6FA67162238C34C69 (Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___from0, Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___to1, const RuntimeMethod* method);
// System.Int32 UnityEngine.Mathf::FloorToInt(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Mathf_FloorToInt_m9164D538D17B8C3C8A6C4E4FA95032F757D9091E (float ___f0, const RuntimeMethod* method);
// System.Single UnityEngine.Vector2::get_sqrMagnitude()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Vector2_get_sqrMagnitude_mF489F0EF7E88FF046BA36767ECC50B89674C925A (Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * __this, const RuntimeMethod* method);
// System.Boolean UnityEngine.Mathf::Approximately(System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Mathf_Approximately_mC2A3F657E3FD0CCAD4A4936CEE2F67D624A2AA55 (float ___a0, float ___b1, const RuntimeMethod* method);
// System.Void UnityEngine.InputSystem.Samples.VisualizationHelpers::DrawAxis(UnityEngine.InputSystem.Samples.VisualizationHelpers/Axis,UnityEngine.Rect,UnityEngine.Color,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VisualizationHelpers_DrawAxis_m41296CB0B344F006E81C7DCCD6F00F77C1456E2C (int32_t ___axis0, Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878  ___rect1, Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___color2, float ___width3, const RuntimeMethod* method);
// System.Boolean UnityEngine.Vector2::op_Inequality(UnityEngine.Vector2,UnityEngine.Vector2)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Vector2_op_Inequality_mA9E4245E487F3051F0EBF086646A1C341213D24E_inline (Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___lhs0, Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___rhs1, const RuntimeMethod* method);
// System.Boolean UnityEngine.Vector2::op_Equality(UnityEngine.Vector2,UnityEngine.Vector2)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Vector2_op_Equality_mAE5F31E8419538F0F6AF19D9897E0BE1CE8DB1B0_inline (Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___lhs0, Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___rhs1, const RuntimeMethod* method);
// UnityEngine.Vector2 UnityEngine.InputSystem.Samples.VisualizationHelpers/Vector2Visualizer::PixelPosForValue(UnityEngine.Vector2,UnityEngine.Rect)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  Vector2Visualizer_PixelPosForValue_m786A49D5B2AB804AD2DE4A2FE6E7E38B49681E83 (Vector2Visualizer_t4F4D343145C411ED0B1D42FF5AEF4E5303BA9EFC * __this, Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___value0, Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878  ___rect1, const RuntimeMethod* method);
// TValue& UnityEngine.InputSystem.Samples.VisualizationHelpers/RingBuffer`1<UnityEngine.Vector2>::get_Item(System.Int32)
inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * RingBuffer_1_get_Item_m8A5C3B43B9D54B9F9588C402031DC5ECC59DBBE1 (RingBuffer_1_t2DABFCD363F6958F876B34BE08D978FE3CC2F270 * __this, int32_t ___index0, const RuntimeMethod* method)
{
	return ((  Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * (*) (RingBuffer_1_t2DABFCD363F6958F876B34BE08D978FE3CC2F270 *, int32_t, const RuntimeMethod*))RingBuffer_1_get_Item_m8A5C3B43B9D54B9F9588C402031DC5ECC59DBBE1_gshared)(__this, ___index0, method);
}
// UnityEngine.Rect UnityEngine.InputSystem.Samples.VisualizationHelpers/Vector2Visualizer::RectForValue(UnityEngine.Vector2,UnityEngine.Rect)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878  Vector2Visualizer_RectForValue_m11236090F2AC4462AC79C4B0FC5FDAC8B501565B (Vector2Visualizer_t4F4D343145C411ED0B1D42FF5AEF4E5303BA9EFC * __this, Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___value0, Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878  ___rect1, const RuntimeMethod* method);
// TValue& UnityEngine.InputSystem.Samples.VisualizationHelpers/RingBuffer`1<UnityEngine.GUIContent>::get_Item(System.Int32)
inline GUIContent_t39256993BF4A33F76E073488D6A2F13D678DF60E ** RingBuffer_1_get_Item_m50590F07DFD1B70212B4CABD643088E1C99D0AE0 (RingBuffer_1_t92C8E8147EA971F447C8085E01FEDD0A208062D6 * __this, int32_t ___index0, const RuntimeMethod* method)
{
	return ((  GUIContent_t39256993BF4A33F76E073488D6A2F13D678DF60E ** (*) (RingBuffer_1_t92C8E8147EA971F447C8085E01FEDD0A208062D6 *, int32_t, const RuntimeMethod*))RingBuffer_1_get_Item_m51D08260D1388DF170C706A9A5698225D5B8F52B_gshared)(__this, ___index0, method);
}
// UnityEngine.Vector2 UnityEngine.Rect::get_center()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  Rect_get_center_mDFC7A4AE153DCDC1D6248803381C6F36C7883707 (Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878 * __this, const RuntimeMethod* method);
// System.Single UnityEngine.Mathf::Sign(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Mathf_Sign_m01716387C82B9523CFFADED7B2037D75F57FE2FB (float ___f0, const RuntimeMethod* method);
// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405 (RuntimeObject * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Vector3::.ctor(System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * __this, float ___x0, float ___y1, float ___z2, const RuntimeMethod* method);
// System.Void System.ThrowHelper::ThrowArgumentOutOfRangeException()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThrowHelper_ThrowArgumentOutOfRangeException_m4841366ABC2B2AFA37C10900551D7E07522C0929 (const RuntimeMethod* method);
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
// UnityEngine.InputSystem.InputAction UnityEngine.InputSystem.Samples.InputActionVisualizer::get_action()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR InputAction_tF0C77AF72E0C19608B020E77A2C36C04E9DCBE48 * InputActionVisualizer_get_action_m01101726ED3795DDA689D12EEBA71C48052FE0D1 (InputActionVisualizer_t726DF6A67FB0B18AEECDBAB992EABF3B82E339C6 * __this, const RuntimeMethod* method)
{
	{
		// public InputAction action => m_Action;
		InputAction_tF0C77AF72E0C19608B020E77A2C36C04E9DCBE48 * L_0 = __this->get_m_Action_16();
		return L_0;
	}
}
// System.Void UnityEngine.InputSystem.Samples.InputActionVisualizer::FixedUpdate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InputActionVisualizer_FixedUpdate_m5156C11E67EA3B18A3B95A1126DC5C24FD175EAD (InputActionVisualizer_t726DF6A67FB0B18AEECDBAB992EABF3B82E339C6 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InputSystem_t6F1EF32494CBBFE3270F03F3BF728BCADA04940D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	int32_t G_B4_0 = 0;
	{
		// if (m_Visualization != Visualization.Value || m_Action == null || m_Visualizer == null)
		int32_t L_0 = __this->get_m_Visualization_12();
		if ((!(((uint32_t)L_0) == ((uint32_t)1))))
		{
			goto IL_001d;
		}
	}
	{
		InputAction_tF0C77AF72E0C19608B020E77A2C36C04E9DCBE48 * L_1 = __this->get_m_Action_16();
		if (!L_1)
		{
			goto IL_001d;
		}
	}
	{
		Visualizer_t48757514E9C44C7B20B531BB6D2713A570AA8B74 * L_2 = ((InputVisualizer_t51917CF1458037727EDDF8C090AEB773F3EAC29E *)__this)->get_m_Visualizer_9();
		G_B4_0 = ((((RuntimeObject*)(Visualizer_t48757514E9C44C7B20B531BB6D2713A570AA8B74 *)L_2) == ((RuntimeObject*)(RuntimeObject *)NULL))? 1 : 0);
		goto IL_001e;
	}

IL_001d:
	{
		G_B4_0 = 1;
	}

IL_001e:
	{
		V_0 = (bool)G_B4_0;
		bool L_3 = V_0;
		if (!L_3)
		{
			goto IL_0024;
		}
	}
	{
		// return;
		goto IL_0047;
	}

IL_0024:
	{
		// if (InputSystem.settings.updateMode != InputSettings.UpdateMode.ProcessEventsInFixedUpdate)
		IL2CPP_RUNTIME_CLASS_INIT(InputSystem_t6F1EF32494CBBFE3270F03F3BF728BCADA04940D_il2cpp_TypeInfo_var);
		InputSettings_tCA238DEE6F6A4A12B38A7FE9B66B9B8F557DAAE2 * L_4;
		L_4 = InputSystem_get_settings_m669AE4024AE19C6D1CD004791DA35408E0527747(/*hidden argument*/NULL);
		NullCheck(L_4);
		int32_t L_5;
		L_5 = InputSettings_get_updateMode_mF5342E2FBF3829B1A2F951A1BD140318BA2C8F01_inline(L_4, /*hidden argument*/NULL);
		V_1 = (bool)((((int32_t)((((int32_t)L_5) == ((int32_t)2))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_6 = V_1;
		if (!L_6)
		{
			goto IL_003a;
		}
	}
	{
		// return;
		goto IL_0047;
	}

IL_003a:
	{
		// RecordValue(Time.fixedTime);
		float L_7;
		L_7 = Time_get_fixedTime_mE4630B2127C67597CA450A81FFDF25E63A2CC7B5(/*hidden argument*/NULL);
		InputActionVisualizer_RecordValue_mDE85E6726F4BF8702D51173DF6C658131B45C412(__this, ((double)((double)L_7)), /*hidden argument*/NULL);
	}

IL_0047:
	{
		// }
		return;
	}
}
// System.Void UnityEngine.InputSystem.Samples.InputActionVisualizer::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InputActionVisualizer_Update_m0DD410C31D5E447B773EA50F5B9849AE866B0EDB (InputActionVisualizer_t726DF6A67FB0B18AEECDBAB992EABF3B82E339C6 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InputSystem_t6F1EF32494CBBFE3270F03F3BF728BCADA04940D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	int32_t G_B4_0 = 0;
	{
		// if (m_Visualization != Visualization.Value || m_Action == null || m_Visualizer == null)
		int32_t L_0 = __this->get_m_Visualization_12();
		if ((!(((uint32_t)L_0) == ((uint32_t)1))))
		{
			goto IL_001d;
		}
	}
	{
		InputAction_tF0C77AF72E0C19608B020E77A2C36C04E9DCBE48 * L_1 = __this->get_m_Action_16();
		if (!L_1)
		{
			goto IL_001d;
		}
	}
	{
		Visualizer_t48757514E9C44C7B20B531BB6D2713A570AA8B74 * L_2 = ((InputVisualizer_t51917CF1458037727EDDF8C090AEB773F3EAC29E *)__this)->get_m_Visualizer_9();
		G_B4_0 = ((((RuntimeObject*)(Visualizer_t48757514E9C44C7B20B531BB6D2713A570AA8B74 *)L_2) == ((RuntimeObject*)(RuntimeObject *)NULL))? 1 : 0);
		goto IL_001e;
	}

IL_001d:
	{
		G_B4_0 = 1;
	}

IL_001e:
	{
		V_0 = (bool)G_B4_0;
		bool L_3 = V_0;
		if (!L_3)
		{
			goto IL_0024;
		}
	}
	{
		// return;
		goto IL_0047;
	}

IL_0024:
	{
		// if (InputSystem.settings.updateMode != InputSettings.UpdateMode.ProcessEventsInDynamicUpdate)
		IL2CPP_RUNTIME_CLASS_INIT(InputSystem_t6F1EF32494CBBFE3270F03F3BF728BCADA04940D_il2cpp_TypeInfo_var);
		InputSettings_tCA238DEE6F6A4A12B38A7FE9B66B9B8F557DAAE2 * L_4;
		L_4 = InputSystem_get_settings_m669AE4024AE19C6D1CD004791DA35408E0527747(/*hidden argument*/NULL);
		NullCheck(L_4);
		int32_t L_5;
		L_5 = InputSettings_get_updateMode_mF5342E2FBF3829B1A2F951A1BD140318BA2C8F01_inline(L_4, /*hidden argument*/NULL);
		V_1 = (bool)((((int32_t)((((int32_t)L_5) == ((int32_t)1))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_6 = V_1;
		if (!L_6)
		{
			goto IL_003a;
		}
	}
	{
		// return;
		goto IL_0047;
	}

IL_003a:
	{
		// RecordValue(Time.time);
		float L_7;
		L_7 = Time_get_time_m1A186074B1FCD448AB13A4B9D715AB9ED0B40844(/*hidden argument*/NULL);
		InputActionVisualizer_RecordValue_mDE85E6726F4BF8702D51173DF6C658131B45C412(__this, ((double)((double)L_7)), /*hidden argument*/NULL);
	}

IL_0047:
	{
		// }
		return;
	}
}
// System.Void UnityEngine.InputSystem.Samples.InputActionVisualizer::OnEnable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InputActionVisualizer_OnEnable_mA9BC04A4B28834AA0715BE8CF56FAFA7E971562A (InputActionVisualizer_t726DF6A67FB0B18AEECDBAB992EABF3B82E339C6 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_2__ctor_mA825B05311876E5576DD29D45058F7A3FDF5927D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_2_tACB2F8D6B2F70F78DC65A6BC64A3108B0B1AC539_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InputActionVisualizer_OnActionChange_m94EB0C9561390248679EA8B639BFA440A0D915CF_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InputActionVisualizer_t726DF6A67FB0B18AEECDBAB992EABF3B82E339C6_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InputSystem_t6F1EF32494CBBFE3270F03F3BF728BCADA04940D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_m14CE625BA41D15CEFAB485E8AC718C8F033E9A68_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m8BFEF9870EEC090F96A2C5657A511307B32B6B7B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m4615D7BF299A0DA3A8D79F79A55A134518AF2796_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t875D9DC885BBF5157329E3844ACC8835F3F5F066_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	bool V_2 = false;
	{
		// if (m_Visualization == Visualization.None)
		int32_t L_0 = __this->get_m_Visualization_12();
		V_0 = (bool)((((int32_t)L_0) == ((int32_t)0))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0010;
		}
	}
	{
		// return;
		goto IL_006a;
	}

IL_0010:
	{
		// base.OnEnable();
		InputVisualizer_OnEnable_m2E397BD5719AD2BB97ED81D27208B446989D727A(__this, /*hidden argument*/NULL);
		// ResolveAction();
		InputActionVisualizer_ResolveAction_m91784D0AD0D0CCA120C933406114FA15DF925218(__this, /*hidden argument*/NULL);
		// SetupVisualizer();
		InputActionVisualizer_SetupVisualizer_m537AFAD0D3CB4522D8B8BBBD40320C77A9F420CD(__this, /*hidden argument*/NULL);
		// if (s_EnabledInstances == null)
		IL2CPP_RUNTIME_CLASS_INIT(InputActionVisualizer_t726DF6A67FB0B18AEECDBAB992EABF3B82E339C6_il2cpp_TypeInfo_var);
		List_1_t875D9DC885BBF5157329E3844ACC8835F3F5F066 * L_2 = ((InputActionVisualizer_t726DF6A67FB0B18AEECDBAB992EABF3B82E339C6_StaticFields*)il2cpp_codegen_static_fields_for(InputActionVisualizer_t726DF6A67FB0B18AEECDBAB992EABF3B82E339C6_il2cpp_TypeInfo_var))->get_s_EnabledInstances_19();
		V_1 = (bool)((((RuntimeObject*)(List_1_t875D9DC885BBF5157329E3844ACC8835F3F5F066 *)L_2) == ((RuntimeObject*)(RuntimeObject *)NULL))? 1 : 0);
		bool L_3 = V_1;
		if (!L_3)
		{
			goto IL_003b;
		}
	}
	{
		// s_EnabledInstances = new List<InputActionVisualizer>();
		List_1_t875D9DC885BBF5157329E3844ACC8835F3F5F066 * L_4 = (List_1_t875D9DC885BBF5157329E3844ACC8835F3F5F066 *)il2cpp_codegen_object_new(List_1_t875D9DC885BBF5157329E3844ACC8835F3F5F066_il2cpp_TypeInfo_var);
		List_1__ctor_m8BFEF9870EEC090F96A2C5657A511307B32B6B7B(L_4, /*hidden argument*/List_1__ctor_m8BFEF9870EEC090F96A2C5657A511307B32B6B7B_RuntimeMethod_var);
		IL2CPP_RUNTIME_CLASS_INIT(InputActionVisualizer_t726DF6A67FB0B18AEECDBAB992EABF3B82E339C6_il2cpp_TypeInfo_var);
		((InputActionVisualizer_t726DF6A67FB0B18AEECDBAB992EABF3B82E339C6_StaticFields*)il2cpp_codegen_static_fields_for(InputActionVisualizer_t726DF6A67FB0B18AEECDBAB992EABF3B82E339C6_il2cpp_TypeInfo_var))->set_s_EnabledInstances_19(L_4);
	}

IL_003b:
	{
		// if (s_EnabledInstances.Count == 0)
		IL2CPP_RUNTIME_CLASS_INIT(InputActionVisualizer_t726DF6A67FB0B18AEECDBAB992EABF3B82E339C6_il2cpp_TypeInfo_var);
		List_1_t875D9DC885BBF5157329E3844ACC8835F3F5F066 * L_5 = ((InputActionVisualizer_t726DF6A67FB0B18AEECDBAB992EABF3B82E339C6_StaticFields*)il2cpp_codegen_static_fields_for(InputActionVisualizer_t726DF6A67FB0B18AEECDBAB992EABF3B82E339C6_il2cpp_TypeInfo_var))->get_s_EnabledInstances_19();
		NullCheck(L_5);
		int32_t L_6;
		L_6 = List_1_get_Count_m4615D7BF299A0DA3A8D79F79A55A134518AF2796_inline(L_5, /*hidden argument*/List_1_get_Count_m4615D7BF299A0DA3A8D79F79A55A134518AF2796_RuntimeMethod_var);
		V_2 = (bool)((((int32_t)L_6) == ((int32_t)0))? 1 : 0);
		bool L_7 = V_2;
		if (!L_7)
		{
			goto IL_005e;
		}
	}
	{
		// InputSystem.onActionChange += OnActionChange;
		Action_2_tACB2F8D6B2F70F78DC65A6BC64A3108B0B1AC539 * L_8 = (Action_2_tACB2F8D6B2F70F78DC65A6BC64A3108B0B1AC539 *)il2cpp_codegen_object_new(Action_2_tACB2F8D6B2F70F78DC65A6BC64A3108B0B1AC539_il2cpp_TypeInfo_var);
		Action_2__ctor_mA825B05311876E5576DD29D45058F7A3FDF5927D(L_8, NULL, (intptr_t)((intptr_t)InputActionVisualizer_OnActionChange_m94EB0C9561390248679EA8B639BFA440A0D915CF_RuntimeMethod_var), /*hidden argument*/Action_2__ctor_mA825B05311876E5576DD29D45058F7A3FDF5927D_RuntimeMethod_var);
		IL2CPP_RUNTIME_CLASS_INIT(InputSystem_t6F1EF32494CBBFE3270F03F3BF728BCADA04940D_il2cpp_TypeInfo_var);
		InputSystem_add_onActionChange_m1CA7D531804EB9B29861F3680312417635E49517(L_8, /*hidden argument*/NULL);
	}

IL_005e:
	{
		// s_EnabledInstances.Add(this);
		IL2CPP_RUNTIME_CLASS_INIT(InputActionVisualizer_t726DF6A67FB0B18AEECDBAB992EABF3B82E339C6_il2cpp_TypeInfo_var);
		List_1_t875D9DC885BBF5157329E3844ACC8835F3F5F066 * L_9 = ((InputActionVisualizer_t726DF6A67FB0B18AEECDBAB992EABF3B82E339C6_StaticFields*)il2cpp_codegen_static_fields_for(InputActionVisualizer_t726DF6A67FB0B18AEECDBAB992EABF3B82E339C6_il2cpp_TypeInfo_var))->get_s_EnabledInstances_19();
		NullCheck(L_9);
		List_1_Add_m14CE625BA41D15CEFAB485E8AC718C8F033E9A68(L_9, __this, /*hidden argument*/List_1_Add_m14CE625BA41D15CEFAB485E8AC718C8F033E9A68_RuntimeMethod_var);
	}

IL_006a:
	{
		// }
		return;
	}
}
// System.Void UnityEngine.InputSystem.Samples.InputActionVisualizer::OnDisable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InputActionVisualizer_OnDisable_m67E085BEF4044D1A05EBD5BB62680FF50062BDF1 (InputActionVisualizer_t726DF6A67FB0B18AEECDBAB992EABF3B82E339C6 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1__ctor_m8902DCFE8589EFD9B0A1C1655AC5664A0047F8D0_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_t7A6E0E94B21008B707D8BEA0DA19B65A96D58416_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_2__ctor_mA825B05311876E5576DD29D45058F7A3FDF5927D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_2_tACB2F8D6B2F70F78DC65A6BC64A3108B0B1AC539_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InputActionVisualizer_OnActionChange_m94EB0C9561390248679EA8B639BFA440A0D915CF_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InputActionVisualizer_OnActionTriggered_m0ACD93B19C536B4ACE8B93F108A2A5A32B6E6BCC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InputActionVisualizer_t726DF6A67FB0B18AEECDBAB992EABF3B82E339C6_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InputSystem_t6F1EF32494CBBFE3270F03F3BF728BCADA04940D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Remove_mF983F9F989DFCF421AF7224082DD7BC022F25828_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m4615D7BF299A0DA3A8D79F79A55A134518AF2796_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	int32_t G_B5_0 = 0;
	{
		// base.OnDisable();
		InputVisualizer_OnDisable_m2A0FD7F73BD976313A8B397C2D72676D3A65C161(__this, /*hidden argument*/NULL);
		// s_EnabledInstances.Remove(this);
		IL2CPP_RUNTIME_CLASS_INIT(InputActionVisualizer_t726DF6A67FB0B18AEECDBAB992EABF3B82E339C6_il2cpp_TypeInfo_var);
		List_1_t875D9DC885BBF5157329E3844ACC8835F3F5F066 * L_0 = ((InputActionVisualizer_t726DF6A67FB0B18AEECDBAB992EABF3B82E339C6_StaticFields*)il2cpp_codegen_static_fields_for(InputActionVisualizer_t726DF6A67FB0B18AEECDBAB992EABF3B82E339C6_il2cpp_TypeInfo_var))->get_s_EnabledInstances_19();
		NullCheck(L_0);
		bool L_1;
		L_1 = List_1_Remove_mF983F9F989DFCF421AF7224082DD7BC022F25828(L_0, __this, /*hidden argument*/List_1_Remove_mF983F9F989DFCF421AF7224082DD7BC022F25828_RuntimeMethod_var);
		// if (s_EnabledInstances.Count == 0)
		List_1_t875D9DC885BBF5157329E3844ACC8835F3F5F066 * L_2 = ((InputActionVisualizer_t726DF6A67FB0B18AEECDBAB992EABF3B82E339C6_StaticFields*)il2cpp_codegen_static_fields_for(InputActionVisualizer_t726DF6A67FB0B18AEECDBAB992EABF3B82E339C6_il2cpp_TypeInfo_var))->get_s_EnabledInstances_19();
		NullCheck(L_2);
		int32_t L_3;
		L_3 = List_1_get_Count_m4615D7BF299A0DA3A8D79F79A55A134518AF2796_inline(L_2, /*hidden argument*/List_1_get_Count_m4615D7BF299A0DA3A8D79F79A55A134518AF2796_RuntimeMethod_var);
		V_0 = (bool)((((int32_t)L_3) == ((int32_t)0))? 1 : 0);
		bool L_4 = V_0;
		if (!L_4)
		{
			goto IL_0037;
		}
	}
	{
		// InputSystem.onActionChange -= OnActionChange;
		Action_2_tACB2F8D6B2F70F78DC65A6BC64A3108B0B1AC539 * L_5 = (Action_2_tACB2F8D6B2F70F78DC65A6BC64A3108B0B1AC539 *)il2cpp_codegen_object_new(Action_2_tACB2F8D6B2F70F78DC65A6BC64A3108B0B1AC539_il2cpp_TypeInfo_var);
		Action_2__ctor_mA825B05311876E5576DD29D45058F7A3FDF5927D(L_5, NULL, (intptr_t)((intptr_t)InputActionVisualizer_OnActionChange_m94EB0C9561390248679EA8B639BFA440A0D915CF_RuntimeMethod_var), /*hidden argument*/Action_2__ctor_mA825B05311876E5576DD29D45058F7A3FDF5927D_RuntimeMethod_var);
		IL2CPP_RUNTIME_CLASS_INIT(InputSystem_t6F1EF32494CBBFE3270F03F3BF728BCADA04940D_il2cpp_TypeInfo_var);
		InputSystem_remove_onActionChange_m285E3028F206E877D7AD2EA790E51D144EA60949(L_5, /*hidden argument*/NULL);
	}

IL_0037:
	{
		// if (m_Visualization == Visualization.Interaction && m_Action != null)
		int32_t L_6 = __this->get_m_Visualization_12();
		if ((!(((uint32_t)L_6) == ((uint32_t)2))))
		{
			goto IL_004b;
		}
	}
	{
		InputAction_tF0C77AF72E0C19608B020E77A2C36C04E9DCBE48 * L_7 = __this->get_m_Action_16();
		G_B5_0 = ((!(((RuntimeObject*)(InputAction_tF0C77AF72E0C19608B020E77A2C36C04E9DCBE48 *)L_7) <= ((RuntimeObject*)(RuntimeObject *)NULL)))? 1 : 0);
		goto IL_004c;
	}

IL_004b:
	{
		G_B5_0 = 0;
	}

IL_004c:
	{
		V_1 = (bool)G_B5_0;
		bool L_8 = V_1;
		if (!L_8)
		{
			goto IL_009a;
		}
	}
	{
		// m_Action.started -= OnActionTriggered;
		InputAction_tF0C77AF72E0C19608B020E77A2C36C04E9DCBE48 * L_9 = __this->get_m_Action_16();
		Action_1_t7A6E0E94B21008B707D8BEA0DA19B65A96D58416 * L_10 = (Action_1_t7A6E0E94B21008B707D8BEA0DA19B65A96D58416 *)il2cpp_codegen_object_new(Action_1_t7A6E0E94B21008B707D8BEA0DA19B65A96D58416_il2cpp_TypeInfo_var);
		Action_1__ctor_m8902DCFE8589EFD9B0A1C1655AC5664A0047F8D0(L_10, __this, (intptr_t)((intptr_t)InputActionVisualizer_OnActionTriggered_m0ACD93B19C536B4ACE8B93F108A2A5A32B6E6BCC_RuntimeMethod_var), /*hidden argument*/Action_1__ctor_m8902DCFE8589EFD9B0A1C1655AC5664A0047F8D0_RuntimeMethod_var);
		NullCheck(L_9);
		InputAction_remove_started_m365C97F93610FB6AE39AD14291F66B18CD569F62(L_9, L_10, /*hidden argument*/NULL);
		// m_Action.performed -= OnActionTriggered;
		InputAction_tF0C77AF72E0C19608B020E77A2C36C04E9DCBE48 * L_11 = __this->get_m_Action_16();
		Action_1_t7A6E0E94B21008B707D8BEA0DA19B65A96D58416 * L_12 = (Action_1_t7A6E0E94B21008B707D8BEA0DA19B65A96D58416 *)il2cpp_codegen_object_new(Action_1_t7A6E0E94B21008B707D8BEA0DA19B65A96D58416_il2cpp_TypeInfo_var);
		Action_1__ctor_m8902DCFE8589EFD9B0A1C1655AC5664A0047F8D0(L_12, __this, (intptr_t)((intptr_t)InputActionVisualizer_OnActionTriggered_m0ACD93B19C536B4ACE8B93F108A2A5A32B6E6BCC_RuntimeMethod_var), /*hidden argument*/Action_1__ctor_m8902DCFE8589EFD9B0A1C1655AC5664A0047F8D0_RuntimeMethod_var);
		NullCheck(L_11);
		InputAction_remove_performed_m6D13571BE4651E97A4B5FFDB9DD7725D93879B90(L_11, L_12, /*hidden argument*/NULL);
		// m_Action.canceled -= OnActionTriggered;
		InputAction_tF0C77AF72E0C19608B020E77A2C36C04E9DCBE48 * L_13 = __this->get_m_Action_16();
		Action_1_t7A6E0E94B21008B707D8BEA0DA19B65A96D58416 * L_14 = (Action_1_t7A6E0E94B21008B707D8BEA0DA19B65A96D58416 *)il2cpp_codegen_object_new(Action_1_t7A6E0E94B21008B707D8BEA0DA19B65A96D58416_il2cpp_TypeInfo_var);
		Action_1__ctor_m8902DCFE8589EFD9B0A1C1655AC5664A0047F8D0(L_14, __this, (intptr_t)((intptr_t)InputActionVisualizer_OnActionTriggered_m0ACD93B19C536B4ACE8B93F108A2A5A32B6E6BCC_RuntimeMethod_var), /*hidden argument*/Action_1__ctor_m8902DCFE8589EFD9B0A1C1655AC5664A0047F8D0_RuntimeMethod_var);
		NullCheck(L_13);
		InputAction_remove_canceled_mD3D5FF749E8E3A7966E32B6DB7E505817CD54A51(L_13, L_14, /*hidden argument*/NULL);
	}

IL_009a:
	{
		// }
		return;
	}
}
// System.Void UnityEngine.InputSystem.Samples.InputActionVisualizer::OnGUI()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InputActionVisualizer_OnGUI_m2DB80AA9EAD72A0FD6DE129C32AA64E75D87FA9D (InputActionVisualizer_t726DF6A67FB0B18AEECDBAB992EABF3B82E339C6 * __this, const RuntimeMethod* method)
{
	bool V_0 = false;
	bool V_1 = false;
	bool V_2 = false;
	int32_t G_B7_0 = 0;
	{
		// if (m_Visualization == Visualization.None)
		int32_t L_0 = __this->get_m_Visualization_12();
		V_0 = (bool)((((int32_t)L_0) == ((int32_t)0))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0010;
		}
	}
	{
		// return;
		goto IL_0071;
	}

IL_0010:
	{
		// if (Event.current.type != EventType.Repaint)
		Event_tED49F8EC5A2514F6E877E301B1AB7ABE4647253E * L_2;
		L_2 = Event_get_current_m069E3E742E6CBC32C3BC958B85153E75B0192443(/*hidden argument*/NULL);
		NullCheck(L_2);
		int32_t L_3;
		L_3 = Event_get_type_mA5010AB8C34B098E0783949046C708B9E1BA811D(L_2, /*hidden argument*/NULL);
		V_1 = (bool)((((int32_t)((((int32_t)L_3) == ((int32_t)7))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_4 = V_1;
		if (!L_4)
		{
			goto IL_0026;
		}
	}
	{
		// return;
		goto IL_0071;
	}

IL_0026:
	{
		// base.OnGUI();
		InputVisualizer_OnGUI_m62F3B05F1A6BCA9AEDC1FDBE7AA4339769DF3D09(__this, /*hidden argument*/NULL);
		// if (m_ShowControlName && m_ActiveControlName != null)
		bool L_5 = __this->get_m_ShowControlName_15();
		if (!L_5)
		{
			goto IL_0040;
		}
	}
	{
		GUIContent_t39256993BF4A33F76E073488D6A2F13D678DF60E * L_6 = __this->get_m_ActiveControlName_18();
		G_B7_0 = ((!(((RuntimeObject*)(GUIContent_t39256993BF4A33F76E073488D6A2F13D678DF60E *)L_6) <= ((RuntimeObject*)(RuntimeObject *)NULL)))? 1 : 0);
		goto IL_0041;
	}

IL_0040:
	{
		G_B7_0 = 0;
	}

IL_0041:
	{
		V_2 = (bool)G_B7_0;
		bool L_7 = V_2;
		if (!L_7)
		{
			goto IL_0071;
		}
	}
	{
		// VisualizationHelpers.DrawText(m_ActiveControlName, new Vector2(m_Rect.x, m_Rect.yMax),
		//     VisualizationHelpers.ValueTextStyle);
		GUIContent_t39256993BF4A33F76E073488D6A2F13D678DF60E * L_8 = __this->get_m_ActiveControlName_18();
		Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878 * L_9 = ((InputVisualizer_t51917CF1458037727EDDF8C090AEB773F3EAC29E *)__this)->get_address_of_m_Rect_7();
		float L_10;
		L_10 = Rect_get_x_mA61220F6F26ECD6951B779FFA7CAD7ECE11D6987((Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878 *)L_9, /*hidden argument*/NULL);
		Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878 * L_11 = ((InputVisualizer_t51917CF1458037727EDDF8C090AEB773F3EAC29E *)__this)->get_address_of_m_Rect_7();
		float L_12;
		L_12 = Rect_get_yMax_m9685BF55B44C51FF9BA080F9995073E458E1CDC3((Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878 *)L_11, /*hidden argument*/NULL);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_13;
		memset((&L_13), 0, sizeof(L_13));
		Vector2__ctor_m9F1F2D5EB5D1FF7091BB527AC8A72CBB309D115E_inline((&L_13), L_10, L_12, /*hidden argument*/NULL);
		GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * L_14;
		L_14 = VisualizationHelpers_get_ValueTextStyle_mDDD19B37F92A291767250B60899DE7F393E3F6E9(/*hidden argument*/NULL);
		VisualizationHelpers_DrawText_m75EAB1C9E4CA84D969F2EFD1BF20605FFEDE88C7(L_8, L_13, L_14, /*hidden argument*/NULL);
	}

IL_0071:
	{
		// }
		return;
	}
}
// System.Void UnityEngine.InputSystem.Samples.InputActionVisualizer::RecordValue(System.Double)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InputActionVisualizer_RecordValue_mDE85E6726F4BF8702D51173DF6C658131B45C412 (InputActionVisualizer_t726DF6A67FB0B18AEECDBAB992EABF3B82E339C6 * __this, double ___time0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject * V_0 = NULL;
	bool V_1 = false;
	{
		// Debug.Assert(m_Action != null);
		InputAction_tF0C77AF72E0C19608B020E77A2C36C04E9DCBE48 * L_0 = __this->get_m_Action_16();
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_Assert_m9AB596E4960380752FD4CB3292D07A86E995938B((bool)((!(((RuntimeObject*)(InputAction_tF0C77AF72E0C19608B020E77A2C36C04E9DCBE48 *)L_0) <= ((RuntimeObject*)(RuntimeObject *)NULL)))? 1 : 0), /*hidden argument*/NULL);
		// Debug.Assert(m_Visualizer != null);
		Visualizer_t48757514E9C44C7B20B531BB6D2713A570AA8B74 * L_1 = ((InputVisualizer_t51917CF1458037727EDDF8C090AEB773F3EAC29E *)__this)->get_m_Visualizer_9();
		Debug_Assert_m9AB596E4960380752FD4CB3292D07A86E995938B((bool)((!(((RuntimeObject*)(Visualizer_t48757514E9C44C7B20B531BB6D2713A570AA8B74 *)L_1) <= ((RuntimeObject*)(RuntimeObject *)NULL)))? 1 : 0), /*hidden argument*/NULL);
		// var value = m_Action.ReadValueAsObject();
		InputAction_tF0C77AF72E0C19608B020E77A2C36C04E9DCBE48 * L_2 = __this->get_m_Action_16();
		NullCheck(L_2);
		RuntimeObject * L_3;
		L_3 = InputAction_ReadValueAsObject_mD22F8A5A74FCE03848E5BE81A38182FF49020CAC(L_2, /*hidden argument*/NULL);
		V_0 = L_3;
		// m_Visualizer.AddSample(value, time);
		Visualizer_t48757514E9C44C7B20B531BB6D2713A570AA8B74 * L_4 = ((InputVisualizer_t51917CF1458037727EDDF8C090AEB773F3EAC29E *)__this)->get_m_Visualizer_9();
		RuntimeObject * L_5 = V_0;
		double L_6 = ___time0;
		NullCheck(L_4);
		VirtActionInvoker2< RuntimeObject *, double >::Invoke(5 /* System.Void UnityEngine.InputSystem.Samples.VisualizationHelpers/Visualizer::AddSample(System.Object,System.Double) */, L_4, L_5, L_6);
		// if (m_ShowControlName)
		bool L_7 = __this->get_m_ShowControlName_15();
		V_1 = L_7;
		bool L_8 = V_1;
		if (!L_8)
		{
			goto IL_004a;
		}
	}
	{
		// RecordControlName();
		InputActionVisualizer_RecordControlName_m11A8C4FCFE691D9F37E0CD31B97F455D0BC792AF(__this, /*hidden argument*/NULL);
	}

IL_004a:
	{
		// }
		return;
	}
}
// System.Void UnityEngine.InputSystem.Samples.InputActionVisualizer::RecordControlName()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InputActionVisualizer_RecordControlName_m11A8C4FCFE691D9F37E0CD31B97F455D0BC792AF (InputActionVisualizer_t726DF6A67FB0B18AEECDBAB992EABF3B82E339C6 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GUIContent_t39256993BF4A33F76E073488D6A2F13D678DF60E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	InputControl_t3CDD1115017147EEC9D825834637D7700669C006 * V_0 = NULL;
	bool V_1 = false;
	InputActionVisualizer_t726DF6A67FB0B18AEECDBAB992EABF3B82E339C6 * G_B4_0 = NULL;
	InputActionVisualizer_t726DF6A67FB0B18AEECDBAB992EABF3B82E339C6 * G_B3_0 = NULL;
	GUIContent_t39256993BF4A33F76E073488D6A2F13D678DF60E * G_B5_0 = NULL;
	InputActionVisualizer_t726DF6A67FB0B18AEECDBAB992EABF3B82E339C6 * G_B5_1 = NULL;
	{
		// var control = m_Action.activeControl;
		InputAction_tF0C77AF72E0C19608B020E77A2C36C04E9DCBE48 * L_0 = __this->get_m_Action_16();
		NullCheck(L_0);
		InputControl_t3CDD1115017147EEC9D825834637D7700669C006 * L_1;
		L_1 = InputAction_get_activeControl_m7B38F0EC4622B9036F4E1770EB8AE732F4B55AEB(L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		// if (control == m_ActiveControl)
		InputControl_t3CDD1115017147EEC9D825834637D7700669C006 * L_2 = V_0;
		InputControl_t3CDD1115017147EEC9D825834637D7700669C006 * L_3 = __this->get_m_ActiveControl_17();
		V_1 = (bool)((((RuntimeObject*)(InputControl_t3CDD1115017147EEC9D825834637D7700669C006 *)L_2) == ((RuntimeObject*)(InputControl_t3CDD1115017147EEC9D825834637D7700669C006 *)L_3))? 1 : 0);
		bool L_4 = V_1;
		if (!L_4)
		{
			goto IL_001c;
		}
	}
	{
		// return;
		goto IL_003a;
	}

IL_001c:
	{
		// m_ActiveControl = control;
		InputControl_t3CDD1115017147EEC9D825834637D7700669C006 * L_5 = V_0;
		__this->set_m_ActiveControl_17(L_5);
		// m_ActiveControlName = control != null ? new GUIContent(control.path) : null;
		InputControl_t3CDD1115017147EEC9D825834637D7700669C006 * L_6 = V_0;
		G_B3_0 = __this;
		if (L_6)
		{
			G_B4_0 = __this;
			goto IL_002a;
		}
	}
	{
		G_B5_0 = ((GUIContent_t39256993BF4A33F76E073488D6A2F13D678DF60E *)(NULL));
		G_B5_1 = G_B3_0;
		goto IL_0035;
	}

IL_002a:
	{
		InputControl_t3CDD1115017147EEC9D825834637D7700669C006 * L_7 = V_0;
		NullCheck(L_7);
		String_t* L_8;
		L_8 = InputControl_get_path_m0EE38AED32CCE357E6BD806A6CE0728AA23237CA(L_7, /*hidden argument*/NULL);
		GUIContent_t39256993BF4A33F76E073488D6A2F13D678DF60E * L_9 = (GUIContent_t39256993BF4A33F76E073488D6A2F13D678DF60E *)il2cpp_codegen_object_new(GUIContent_t39256993BF4A33F76E073488D6A2F13D678DF60E_il2cpp_TypeInfo_var);
		GUIContent__ctor_m3FABF20C213051E685B41CA898A20885E02111F0(L_9, L_8, /*hidden argument*/NULL);
		G_B5_0 = L_9;
		G_B5_1 = G_B4_0;
	}

IL_0035:
	{
		NullCheck(G_B5_1);
		G_B5_1->set_m_ActiveControlName_18(G_B5_0);
	}

IL_003a:
	{
		// }
		return;
	}
}
// System.Void UnityEngine.InputSystem.Samples.InputActionVisualizer::ResolveAction()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InputActionVisualizer_ResolveAction_m91784D0AD0D0CCA120C933406114FA15DF925218 (InputActionVisualizer_t726DF6A67FB0B18AEECDBAB992EABF3B82E339C6 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1__ctor_m8902DCFE8589EFD9B0A1C1655AC5664A0047F8D0_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_t7A6E0E94B21008B707D8BEA0DA19B65A96D58416_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_mD479379B537ADEC411563180E523F9BD86134E4F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_mB430C73730C3EEFF9B5489CB853FA51BB1BEA590_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_mFEB303E405B7355CC1F5908DA8789D43616C6817_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InputActionVisualizer_OnActionTriggered_m0ACD93B19C536B4ACE8B93F108A2A5A32B6E6BCC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InputSystem_t6F1EF32494CBBFE3270F03F3BF728BCADA04940D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_GetEnumerator_m0F2C51150435B0E7B758F3D4769F4C5D3DCFC8D9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	int32_t V_2 = 0;
	String_t* V_3 = NULL;
	String_t* V_4 = NULL;
	List_1_t1A9DEE7C61AA50CC920704B4671771EDF3E8D417 * V_5 = NULL;
	Enumerator_tA547514D47C2255448922E93CB4A07E699198716  V_6;
	memset((&V_6), 0, sizeof(V_6));
	InputAction_tF0C77AF72E0C19608B020E77A2C36C04E9DCBE48 * V_7 = NULL;
	bool V_8 = false;
	bool V_9 = false;
	bool V_10 = false;
	bool V_11 = false;
	Exception_t * __last_unhandled_exception = 0;
	il2cpp::utils::ExceptionSupportStack<int32_t, 1> __leave_targets;
	int32_t G_B5_0 = 0;
	String_t* G_B9_0 = NULL;
	String_t* G_B12_0 = NULL;
	int32_t G_B20_0 = 0;
	{
		// if (m_ActionReference != null)
		InputActionReference_tB2E9E368D60A4C8E066C7CE0EE2A80C62320C28E * L_0 = __this->get_m_ActionReference_13();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Inequality_mE1F187520BD83FB7D86A6D850710C4D42B864E90(L_0, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		V_0 = L_1;
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_0022;
		}
	}
	{
		// m_Action = m_ActionReference.action;
		InputActionReference_tB2E9E368D60A4C8E066C7CE0EE2A80C62320C28E * L_3 = __this->get_m_ActionReference_13();
		NullCheck(L_3);
		InputAction_tF0C77AF72E0C19608B020E77A2C36C04E9DCBE48 * L_4;
		L_4 = InputActionReference_get_action_m50A5F0AF7B4FB329079FCFB2290AC851DCE7CAA3(L_3, /*hidden argument*/NULL);
		__this->set_m_Action_16(L_4);
	}

IL_0022:
	{
		// if (m_Action == null && !string.IsNullOrEmpty(m_ActionName))
		InputAction_tF0C77AF72E0C19608B020E77A2C36C04E9DCBE48 * L_5 = __this->get_m_Action_16();
		if (L_5)
		{
			goto IL_003a;
		}
	}
	{
		String_t* L_6 = __this->get_m_ActionName_14();
		bool L_7;
		L_7 = String_IsNullOrEmpty_m9AFBB5335B441B94E884B8A9D4A27AD60E3D7F7C(L_6, /*hidden argument*/NULL);
		G_B5_0 = ((((int32_t)L_7) == ((int32_t)0))? 1 : 0);
		goto IL_003b;
	}

IL_003a:
	{
		G_B5_0 = 0;
	}

IL_003b:
	{
		V_1 = (bool)G_B5_0;
		bool L_8 = V_1;
		if (!L_8)
		{
			goto IL_010b;
		}
	}
	{
		// var slashIndex = m_ActionName.IndexOf('/');
		String_t* L_9 = __this->get_m_ActionName_14();
		NullCheck(L_9);
		int32_t L_10;
		L_10 = String_IndexOf_mEE2D2F738175E3FF05580366D6226DBD673CA2BE(L_9, ((int32_t)47), /*hidden argument*/NULL);
		V_2 = L_10;
		// var mapName = slashIndex != -1 ? m_ActionName.Substring(0, slashIndex) : null;
		int32_t L_11 = V_2;
		if ((!(((uint32_t)L_11) == ((uint32_t)(-1)))))
		{
			goto IL_0058;
		}
	}
	{
		G_B9_0 = ((String_t*)(NULL));
		goto IL_0065;
	}

IL_0058:
	{
		String_t* L_12 = __this->get_m_ActionName_14();
		int32_t L_13 = V_2;
		NullCheck(L_12);
		String_t* L_14;
		L_14 = String_Substring_m7A39A2AC0893AE940CF4CEC841326D56FFB9D86B(L_12, 0, L_13, /*hidden argument*/NULL);
		G_B9_0 = L_14;
	}

IL_0065:
	{
		V_3 = G_B9_0;
		// var actionName = slashIndex != -1 ? m_ActionName.Substring(slashIndex + 1) : m_ActionName;
		int32_t L_15 = V_2;
		if ((!(((uint32_t)L_15) == ((uint32_t)(-1)))))
		{
			goto IL_0072;
		}
	}
	{
		String_t* L_16 = __this->get_m_ActionName_14();
		G_B12_0 = L_16;
		goto IL_0080;
	}

IL_0072:
	{
		String_t* L_17 = __this->get_m_ActionName_14();
		int32_t L_18 = V_2;
		NullCheck(L_17);
		String_t* L_19;
		L_19 = String_Substring_mB6B87FD76552BBF6D4E2B9F07F857FE051DCE190(L_17, ((int32_t)il2cpp_codegen_add((int32_t)L_18, (int32_t)1)), /*hidden argument*/NULL);
		G_B12_0 = L_19;
	}

IL_0080:
	{
		V_4 = G_B12_0;
		// var enabledActions = InputSystem.ListEnabledActions();
		IL2CPP_RUNTIME_CLASS_INIT(InputSystem_t6F1EF32494CBBFE3270F03F3BF728BCADA04940D_il2cpp_TypeInfo_var);
		List_1_t1A9DEE7C61AA50CC920704B4671771EDF3E8D417 * L_20;
		L_20 = InputSystem_ListEnabledActions_m26B1E288C27A20B490A2A0E241FEC0910875C785(/*hidden argument*/NULL);
		V_5 = L_20;
		// foreach (var action in enabledActions)
		List_1_t1A9DEE7C61AA50CC920704B4671771EDF3E8D417 * L_21 = V_5;
		NullCheck(L_21);
		Enumerator_tA547514D47C2255448922E93CB4A07E699198716  L_22;
		L_22 = List_1_GetEnumerator_m0F2C51150435B0E7B758F3D4769F4C5D3DCFC8D9(L_21, /*hidden argument*/List_1_GetEnumerator_m0F2C51150435B0E7B758F3D4769F4C5D3DCFC8D9_RuntimeMethod_var);
		V_6 = L_22;
	}

IL_0093:
	try
	{ // begin try (depth: 1)
		{
			goto IL_00f0;
		}

IL_0095:
		{
			// foreach (var action in enabledActions)
			InputAction_tF0C77AF72E0C19608B020E77A2C36C04E9DCBE48 * L_23;
			L_23 = Enumerator_get_Current_mFEB303E405B7355CC1F5908DA8789D43616C6817_inline((Enumerator_tA547514D47C2255448922E93CB4A07E699198716 *)(&V_6), /*hidden argument*/Enumerator_get_Current_mFEB303E405B7355CC1F5908DA8789D43616C6817_RuntimeMethod_var);
			V_7 = L_23;
			// if (string.Compare(actionName, action.name, StringComparison.InvariantCultureIgnoreCase) != 0)
			String_t* L_24 = V_4;
			InputAction_tF0C77AF72E0C19608B020E77A2C36C04E9DCBE48 * L_25 = V_7;
			NullCheck(L_25);
			String_t* L_26;
			L_26 = InputAction_get_name_m593E2EDA5FEE091CEBB226A2459645A30449D32A_inline(L_25, /*hidden argument*/NULL);
			int32_t L_27;
			L_27 = String_Compare_mDAE9D10BC450FF38960C691874EBFC3EAF6A39DD(L_24, L_26, 3, /*hidden argument*/NULL);
			V_8 = (bool)((!(((uint32_t)L_27) <= ((uint32_t)0)))? 1 : 0);
			bool L_28 = V_8;
			if (!L_28)
			{
				goto IL_00b9;
			}
		}

IL_00b7:
		{
			// continue;
			goto IL_00f0;
		}

IL_00b9:
		{
			// if (mapName != null && action.actionMap != null && string.Compare(mapName, action.actionMap.name,
			//     StringComparison.InvariantCultureIgnoreCase) != 0)
			String_t* L_29 = V_3;
			if (!L_29)
			{
				goto IL_00dd;
			}
		}

IL_00bc:
		{
			InputAction_tF0C77AF72E0C19608B020E77A2C36C04E9DCBE48 * L_30 = V_7;
			NullCheck(L_30);
			InputActionMap_tBA45B784C5957091166E0007413402A3E83DD226 * L_31;
			L_31 = InputAction_get_actionMap_mD6F927473CBBB756ECA0A90A073052F3BC2CCB76(L_30, /*hidden argument*/NULL);
			if (!L_31)
			{
				goto IL_00dd;
			}
		}

IL_00c5:
		{
			String_t* L_32 = V_3;
			InputAction_tF0C77AF72E0C19608B020E77A2C36C04E9DCBE48 * L_33 = V_7;
			NullCheck(L_33);
			InputActionMap_tBA45B784C5957091166E0007413402A3E83DD226 * L_34;
			L_34 = InputAction_get_actionMap_mD6F927473CBBB756ECA0A90A073052F3BC2CCB76(L_33, /*hidden argument*/NULL);
			NullCheck(L_34);
			String_t* L_35;
			L_35 = InputActionMap_get_name_mFB11C9955411C1C77B74A28F74694007133A84B5_inline(L_34, /*hidden argument*/NULL);
			int32_t L_36;
			L_36 = String_Compare_mDAE9D10BC450FF38960C691874EBFC3EAF6A39DD(L_32, L_35, 3, /*hidden argument*/NULL);
			G_B20_0 = ((!(((uint32_t)L_36) <= ((uint32_t)0)))? 1 : 0);
			goto IL_00de;
		}

IL_00dd:
		{
			G_B20_0 = 0;
		}

IL_00de:
		{
			V_9 = (bool)G_B20_0;
			bool L_37 = V_9;
			if (!L_37)
			{
				goto IL_00e6;
			}
		}

IL_00e4:
		{
			// continue;
			goto IL_00f0;
		}

IL_00e6:
		{
			// m_Action = action;
			InputAction_tF0C77AF72E0C19608B020E77A2C36C04E9DCBE48 * L_38 = V_7;
			__this->set_m_Action_16(L_38);
			// break;
			goto IL_00f9;
		}

IL_00f0:
		{
			// foreach (var action in enabledActions)
			bool L_39;
			L_39 = Enumerator_MoveNext_mB430C73730C3EEFF9B5489CB853FA51BB1BEA590((Enumerator_tA547514D47C2255448922E93CB4A07E699198716 *)(&V_6), /*hidden argument*/Enumerator_MoveNext_mB430C73730C3EEFF9B5489CB853FA51BB1BEA590_RuntimeMethod_var);
			if (L_39)
			{
				goto IL_0095;
			}
		}

IL_00f9:
		{
			IL2CPP_LEAVE(0x10A, FINALLY_00fb);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_00fb;
	}

FINALLY_00fb:
	{ // begin finally (depth: 1)
		Enumerator_Dispose_mD479379B537ADEC411563180E523F9BD86134E4F((Enumerator_tA547514D47C2255448922E93CB4A07E699198716 *)(&V_6), /*hidden argument*/Enumerator_Dispose_mD479379B537ADEC411563180E523F9BD86134E4F_RuntimeMethod_var);
		IL2CPP_END_FINALLY(251)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(251)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x10A, IL_010a)
	}

IL_010a:
	{
	}

IL_010b:
	{
		// if (m_Action == null)
		InputAction_tF0C77AF72E0C19608B020E77A2C36C04E9DCBE48 * L_40 = __this->get_m_Action_16();
		V_10 = (bool)((((RuntimeObject*)(InputAction_tF0C77AF72E0C19608B020E77A2C36C04E9DCBE48 *)L_40) == ((RuntimeObject*)(RuntimeObject *)NULL))? 1 : 0);
		bool L_41 = V_10;
		if (!L_41)
		{
			goto IL_011c;
		}
	}
	{
		// return;
		goto IL_0175;
	}

IL_011c:
	{
		// if (m_Visualization == Visualization.Interaction)
		int32_t L_42 = __this->get_m_Visualization_12();
		V_11 = (bool)((((int32_t)L_42) == ((int32_t)2))? 1 : 0);
		bool L_43 = V_11;
		if (!L_43)
		{
			goto IL_0175;
		}
	}
	{
		// m_Action.performed += OnActionTriggered;
		InputAction_tF0C77AF72E0C19608B020E77A2C36C04E9DCBE48 * L_44 = __this->get_m_Action_16();
		Action_1_t7A6E0E94B21008B707D8BEA0DA19B65A96D58416 * L_45 = (Action_1_t7A6E0E94B21008B707D8BEA0DA19B65A96D58416 *)il2cpp_codegen_object_new(Action_1_t7A6E0E94B21008B707D8BEA0DA19B65A96D58416_il2cpp_TypeInfo_var);
		Action_1__ctor_m8902DCFE8589EFD9B0A1C1655AC5664A0047F8D0(L_45, __this, (intptr_t)((intptr_t)InputActionVisualizer_OnActionTriggered_m0ACD93B19C536B4ACE8B93F108A2A5A32B6E6BCC_RuntimeMethod_var), /*hidden argument*/Action_1__ctor_m8902DCFE8589EFD9B0A1C1655AC5664A0047F8D0_RuntimeMethod_var);
		NullCheck(L_44);
		InputAction_add_performed_m08BA8B41633027A527B1ABA1F0F647DD665FB18E(L_44, L_45, /*hidden argument*/NULL);
		// m_Action.started += OnActionTriggered;
		InputAction_tF0C77AF72E0C19608B020E77A2C36C04E9DCBE48 * L_46 = __this->get_m_Action_16();
		Action_1_t7A6E0E94B21008B707D8BEA0DA19B65A96D58416 * L_47 = (Action_1_t7A6E0E94B21008B707D8BEA0DA19B65A96D58416 *)il2cpp_codegen_object_new(Action_1_t7A6E0E94B21008B707D8BEA0DA19B65A96D58416_il2cpp_TypeInfo_var);
		Action_1__ctor_m8902DCFE8589EFD9B0A1C1655AC5664A0047F8D0(L_47, __this, (intptr_t)((intptr_t)InputActionVisualizer_OnActionTriggered_m0ACD93B19C536B4ACE8B93F108A2A5A32B6E6BCC_RuntimeMethod_var), /*hidden argument*/Action_1__ctor_m8902DCFE8589EFD9B0A1C1655AC5664A0047F8D0_RuntimeMethod_var);
		NullCheck(L_46);
		InputAction_add_started_m7C0A1C6831F4DBFC1C3E846EA92D752A73F24578(L_46, L_47, /*hidden argument*/NULL);
		// m_Action.canceled += OnActionTriggered;
		InputAction_tF0C77AF72E0C19608B020E77A2C36C04E9DCBE48 * L_48 = __this->get_m_Action_16();
		Action_1_t7A6E0E94B21008B707D8BEA0DA19B65A96D58416 * L_49 = (Action_1_t7A6E0E94B21008B707D8BEA0DA19B65A96D58416 *)il2cpp_codegen_object_new(Action_1_t7A6E0E94B21008B707D8BEA0DA19B65A96D58416_il2cpp_TypeInfo_var);
		Action_1__ctor_m8902DCFE8589EFD9B0A1C1655AC5664A0047F8D0(L_49, __this, (intptr_t)((intptr_t)InputActionVisualizer_OnActionTriggered_m0ACD93B19C536B4ACE8B93F108A2A5A32B6E6BCC_RuntimeMethod_var), /*hidden argument*/Action_1__ctor_m8902DCFE8589EFD9B0A1C1655AC5664A0047F8D0_RuntimeMethod_var);
		NullCheck(L_48);
		InputAction_add_canceled_mE043BDF3F4333CD70CFF05BE475DD516EC59EB49(L_48, L_49, /*hidden argument*/NULL);
	}

IL_0175:
	{
		// }
		return;
	}
}
// System.Void UnityEngine.InputSystem.Samples.InputActionVisualizer::SetupVisualizer()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InputActionVisualizer_SetupVisualizer_m537AFAD0D3CB4522D8B8BBBD40320C77A9F420CD (InputActionVisualizer_t726DF6A67FB0B18AEECDBAB992EABF3B82E339C6 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InputSystem_t6F1EF32494CBBFE3270F03F3BF728BCADA04940D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ScalarVisualizer_1__ctor_m2980C02FB3A3B4FF9DDF664DE2D5C2B4EE6F9872_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ScalarVisualizer_1__ctor_m2AF7C1BBF921A1693F885C380A15AC214205E430_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ScalarVisualizer_1_t0A41B5E8896145168954EDE0B3253E18A0572203_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ScalarVisualizer_1_tE953A574A31F5BCD8A798C67C82BE1940BBE698B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Single_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TimelineVisualizer_tDCF8FE655A93D562471977C145A8B989803EA315_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector2Visualizer_t4F4D343145C411ED0B1D42FF5AEF4E5303BA9EFC_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_0_0_0_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	bool V_5 = false;
	InputControlLayout_t012E8BC3C93CE8A2A35BFC6A70C52530FFB55917 * V_6 = NULL;
	bool V_7 = false;
	Type_t * V_8 = NULL;
	bool V_9 = false;
	bool V_10 = false;
	bool V_11 = false;
	{
		// m_Visualizer = null;
		((InputVisualizer_t51917CF1458037727EDDF8C090AEB773F3EAC29E *)__this)->set_m_Visualizer_9((Visualizer_t48757514E9C44C7B20B531BB6D2713A570AA8B74 *)NULL);
		// if (m_Action == null)
		InputAction_tF0C77AF72E0C19608B020E77A2C36C04E9DCBE48 * L_0 = __this->get_m_Action_16();
		V_0 = (bool)((((RuntimeObject*)(InputAction_tF0C77AF72E0C19608B020E77A2C36C04E9DCBE48 *)L_0) == ((RuntimeObject*)(RuntimeObject *)NULL))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_001a;
		}
	}
	{
		// return;
		goto IL_015a;
	}

IL_001a:
	{
		// switch (m_Visualization)
		int32_t L_2 = __this->get_m_Visualization_12();
		V_2 = L_2;
		int32_t L_3 = V_2;
		V_1 = L_3;
		int32_t L_4 = V_1;
		if ((((int32_t)L_4) == ((int32_t)1)))
		{
			goto IL_0035;
		}
	}
	{
		goto IL_0029;
	}

IL_0029:
	{
		int32_t L_5 = V_1;
		if ((((int32_t)L_5) == ((int32_t)2)))
		{
			goto IL_0148;
		}
	}
	{
		goto IL_015a;
	}

IL_0035:
	{
		// switch (m_Action.type)
		InputAction_tF0C77AF72E0C19608B020E77A2C36C04E9DCBE48 * L_6 = __this->get_m_Action_16();
		NullCheck(L_6);
		int32_t L_7;
		L_7 = InputAction_get_type_mE6E1C035E03262F5B354DC73B80F2113DC68B66D_inline(L_6, /*hidden argument*/NULL);
		V_4 = L_7;
		int32_t L_8 = V_4;
		V_3 = L_8;
		int32_t L_9 = V_3;
		switch (L_9)
		{
			case 0:
			{
				goto IL_0079;
			}
			case 1:
			{
				goto IL_005c;
			}
			case 2:
			{
				goto IL_0079;
			}
		}
	}
	{
		goto IL_0146;
	}

IL_005c:
	{
		// m_Visualizer = new VisualizationHelpers.ScalarVisualizer<float>
		// {
		//     limitMax = 1
		// };
		ScalarVisualizer_1_tE953A574A31F5BCD8A798C67C82BE1940BBE698B * L_10 = (ScalarVisualizer_1_tE953A574A31F5BCD8A798C67C82BE1940BBE698B *)il2cpp_codegen_object_new(ScalarVisualizer_1_tE953A574A31F5BCD8A798C67C82BE1940BBE698B_il2cpp_TypeInfo_var);
		ScalarVisualizer_1__ctor_m2AF7C1BBF921A1693F885C380A15AC214205E430(L_10, ((int32_t)10), /*hidden argument*/ScalarVisualizer_1__ctor_m2AF7C1BBF921A1693F885C380A15AC214205E430_RuntimeMethod_var);
		ScalarVisualizer_1_tE953A574A31F5BCD8A798C67C82BE1940BBE698B * L_11 = L_10;
		NullCheck(L_11);
		L_11->set_limitMax_3((1.0f));
		((InputVisualizer_t51917CF1458037727EDDF8C090AEB773F3EAC29E *)__this)->set_m_Visualizer_9(L_11);
		// break;
		goto IL_0146;
	}

IL_0079:
	{
		// if (!string.IsNullOrEmpty(m_Action.expectedControlType))
		InputAction_tF0C77AF72E0C19608B020E77A2C36C04E9DCBE48 * L_12 = __this->get_m_Action_16();
		NullCheck(L_12);
		String_t* L_13;
		L_13 = InputAction_get_expectedControlType_m6D142ABF3B8F6A0C330418F368D4C67A329BCE10_inline(L_12, /*hidden argument*/NULL);
		bool L_14;
		L_14 = String_IsNullOrEmpty_m9AFBB5335B441B94E884B8A9D4A27AD60E3D7F7C(L_13, /*hidden argument*/NULL);
		V_5 = (bool)((((int32_t)L_14) == ((int32_t)0))? 1 : 0);
		bool L_15 = V_5;
		if (!L_15)
		{
			goto IL_0144;
		}
	}
	{
		// var layout = InputSystem.LoadLayout(m_Action.expectedControlType);
		InputAction_tF0C77AF72E0C19608B020E77A2C36C04E9DCBE48 * L_16 = __this->get_m_Action_16();
		NullCheck(L_16);
		String_t* L_17;
		L_17 = InputAction_get_expectedControlType_m6D142ABF3B8F6A0C330418F368D4C67A329BCE10_inline(L_16, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(InputSystem_t6F1EF32494CBBFE3270F03F3BF728BCADA04940D_il2cpp_TypeInfo_var);
		InputControlLayout_t012E8BC3C93CE8A2A35BFC6A70C52530FFB55917 * L_18;
		L_18 = InputSystem_LoadLayout_mC45113F7B95512F6E5800EA5C2ADB51B785118C2(L_17, /*hidden argument*/NULL);
		V_6 = L_18;
		// if (layout != null)
		InputControlLayout_t012E8BC3C93CE8A2A35BFC6A70C52530FFB55917 * L_19 = V_6;
		V_7 = (bool)((!(((RuntimeObject*)(InputControlLayout_t012E8BC3C93CE8A2A35BFC6A70C52530FFB55917 *)L_19) <= ((RuntimeObject*)(RuntimeObject *)NULL)))? 1 : 0);
		bool L_20 = V_7;
		if (!L_20)
		{
			goto IL_0143;
		}
	}
	{
		// var valueType = layout.GetValueType();
		InputControlLayout_t012E8BC3C93CE8A2A35BFC6A70C52530FFB55917 * L_21 = V_6;
		NullCheck(L_21);
		Type_t * L_22;
		L_22 = InputControlLayout_GetValueType_m1AA2A7ACC9A2198B6F59EB8F63148919A43CDF88(L_21, /*hidden argument*/NULL);
		V_8 = L_22;
		// if (valueType == typeof(float))
		Type_t * L_23 = V_8;
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_24 = { reinterpret_cast<intptr_t> (Single_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_25;
		L_25 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E(L_24, /*hidden argument*/NULL);
		bool L_26;
		L_26 = Type_op_Equality_mA438719A1FDF103C7BBBB08AEF564E7FAEEA0046(L_23, L_25, /*hidden argument*/NULL);
		V_9 = L_26;
		bool L_27 = V_9;
		if (!L_27)
		{
			goto IL_00f1;
		}
	}
	{
		// m_Visualizer = new VisualizationHelpers.ScalarVisualizer<float>
		// {
		//     limitMax = 1
		// };
		ScalarVisualizer_1_tE953A574A31F5BCD8A798C67C82BE1940BBE698B * L_28 = (ScalarVisualizer_1_tE953A574A31F5BCD8A798C67C82BE1940BBE698B *)il2cpp_codegen_object_new(ScalarVisualizer_1_tE953A574A31F5BCD8A798C67C82BE1940BBE698B_il2cpp_TypeInfo_var);
		ScalarVisualizer_1__ctor_m2AF7C1BBF921A1693F885C380A15AC214205E430(L_28, ((int32_t)10), /*hidden argument*/ScalarVisualizer_1__ctor_m2AF7C1BBF921A1693F885C380A15AC214205E430_RuntimeMethod_var);
		ScalarVisualizer_1_tE953A574A31F5BCD8A798C67C82BE1940BBE698B * L_29 = L_28;
		NullCheck(L_29);
		L_29->set_limitMax_3((1.0f));
		((InputVisualizer_t51917CF1458037727EDDF8C090AEB773F3EAC29E *)__this)->set_m_Visualizer_9(L_29);
		goto IL_0142;
	}

IL_00f1:
	{
		// else if (valueType == typeof(int))
		Type_t * L_30 = V_8;
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_31 = { reinterpret_cast<intptr_t> (Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_32;
		L_32 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E(L_31, /*hidden argument*/NULL);
		bool L_33;
		L_33 = Type_op_Equality_mA438719A1FDF103C7BBBB08AEF564E7FAEEA0046(L_30, L_32, /*hidden argument*/NULL);
		V_10 = L_33;
		bool L_34 = V_10;
		if (!L_34)
		{
			goto IL_011e;
		}
	}
	{
		// m_Visualizer = new VisualizationHelpers.ScalarVisualizer<int>
		// {
		//     limitMax = 1
		// };
		ScalarVisualizer_1_t0A41B5E8896145168954EDE0B3253E18A0572203 * L_35 = (ScalarVisualizer_1_t0A41B5E8896145168954EDE0B3253E18A0572203 *)il2cpp_codegen_object_new(ScalarVisualizer_1_t0A41B5E8896145168954EDE0B3253E18A0572203_il2cpp_TypeInfo_var);
		ScalarVisualizer_1__ctor_m2980C02FB3A3B4FF9DDF664DE2D5C2B4EE6F9872(L_35, ((int32_t)10), /*hidden argument*/ScalarVisualizer_1__ctor_m2980C02FB3A3B4FF9DDF664DE2D5C2B4EE6F9872_RuntimeMethod_var);
		ScalarVisualizer_1_t0A41B5E8896145168954EDE0B3253E18A0572203 * L_36 = L_35;
		NullCheck(L_36);
		L_36->set_limitMax_3(1);
		((InputVisualizer_t51917CF1458037727EDDF8C090AEB773F3EAC29E *)__this)->set_m_Visualizer_9(L_36);
		goto IL_0142;
	}

IL_011e:
	{
		// else if (valueType == typeof(Vector2))
		Type_t * L_37 = V_8;
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_38 = { reinterpret_cast<intptr_t> (Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_39;
		L_39 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E(L_38, /*hidden argument*/NULL);
		bool L_40;
		L_40 = Type_op_Equality_mA438719A1FDF103C7BBBB08AEF564E7FAEEA0046(L_37, L_39, /*hidden argument*/NULL);
		V_11 = L_40;
		bool L_41 = V_11;
		if (!L_41)
		{
			goto IL_0142;
		}
	}
	{
		// m_Visualizer = new VisualizationHelpers.Vector2Visualizer();
		Vector2Visualizer_t4F4D343145C411ED0B1D42FF5AEF4E5303BA9EFC * L_42 = (Vector2Visualizer_t4F4D343145C411ED0B1D42FF5AEF4E5303BA9EFC *)il2cpp_codegen_object_new(Vector2Visualizer_t4F4D343145C411ED0B1D42FF5AEF4E5303BA9EFC_il2cpp_TypeInfo_var);
		Vector2Visualizer__ctor_mC2753BF29D07F05BB1D6BBF86553AA6518AB0410(L_42, ((int32_t)10), /*hidden argument*/NULL);
		((InputVisualizer_t51917CF1458037727EDDF8C090AEB773F3EAC29E *)__this)->set_m_Visualizer_9(L_42);
	}

IL_0142:
	{
	}

IL_0143:
	{
	}

IL_0144:
	{
		// break;
		goto IL_0146;
	}

IL_0146:
	{
		// break;
		goto IL_015a;
	}

IL_0148:
	{
		// m_Visualizer = new VisualizationHelpers.TimelineVisualizer();
		TimelineVisualizer_tDCF8FE655A93D562471977C145A8B989803EA315 * L_43 = (TimelineVisualizer_tDCF8FE655A93D562471977C145A8B989803EA315 *)il2cpp_codegen_object_new(TimelineVisualizer_tDCF8FE655A93D562471977C145A8B989803EA315_il2cpp_TypeInfo_var);
		TimelineVisualizer__ctor_mE49C33F4374AF61480A4C1CD7DB5B933366293BA(L_43, (4.0f), /*hidden argument*/NULL);
		((InputVisualizer_t51917CF1458037727EDDF8C090AEB773F3EAC29E *)__this)->set_m_Visualizer_9(L_43);
		// break;
		goto IL_015a;
	}

IL_015a:
	{
		// }
		return;
	}
}
// System.Void UnityEngine.InputSystem.Samples.InputActionVisualizer::OnActionDisabled()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InputActionVisualizer_OnActionDisabled_m2F9F191738BE4386C68A9858ED0C919B4B5971EE (InputActionVisualizer_t726DF6A67FB0B18AEECDBAB992EABF3B82E339C6 * __this, const RuntimeMethod* method)
{
	{
		// }
		return;
	}
}
// System.Void UnityEngine.InputSystem.Samples.InputActionVisualizer::OnActionTriggered(UnityEngine.InputSystem.InputAction/CallbackContext)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InputActionVisualizer_OnActionTriggered_m0ACD93B19C536B4ACE8B93F108A2A5A32B6E6BCC (InputActionVisualizer_t726DF6A67FB0B18AEECDBAB992EABF3B82E339C6 * __this, CallbackContext_tFAD329A5B98475EEDBD898FFDA3378C44BC12E0B  ___context0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InputActionVisualizer_t726DF6A67FB0B18AEECDBAB992EABF3B82E339C6_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TimelineVisualizer_tDCF8FE655A93D562471977C145A8B989803EA315_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9D5313975DA8153FF9A5262016CB413A4E84846E);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralAF8E649A3EF1AB74A43C9F88015FA68AC719215A);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	RuntimeObject* V_1 = NULL;
	TimelineVisualizer_tDCF8FE655A93D562471977C145A8B989803EA315 * V_2 = NULL;
	int32_t V_3 = 0;
	float V_4 = 0.0f;
	bool V_5 = false;
	bool V_6 = false;
	bool V_7 = false;
	Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  V_8;
	memset((&V_8), 0, sizeof(V_8));
	bool V_9 = false;
	bool V_10 = false;
	int32_t V_11 = 0;
	int32_t V_12 = 0;
	bool V_13 = false;
	{
		// Debug.Assert(m_Visualization == Visualization.Interaction);
		int32_t L_0 = __this->get_m_Visualization_12();
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_Assert_m9AB596E4960380752FD4CB3292D07A86E995938B((bool)((((int32_t)L_0) == ((int32_t)2))? 1 : 0), /*hidden argument*/NULL);
		// var timelineName = "Default";
		V_0 = _stringLiteral9D5313975DA8153FF9A5262016CB413A4E84846E;
		// var interaction = context.interaction;
		RuntimeObject* L_1;
		L_1 = CallbackContext_get_interaction_mA267635233BDF671DC168A4C654DC0175E6D3394((CallbackContext_tFAD329A5B98475EEDBD898FFDA3378C44BC12E0B *)(&___context0), /*hidden argument*/NULL);
		V_1 = L_1;
		// if (interaction != null)
		RuntimeObject* L_2 = V_1;
		V_5 = (bool)((!(((RuntimeObject*)(RuntimeObject*)L_2) <= ((RuntimeObject*)(RuntimeObject *)NULL)))? 1 : 0);
		bool L_3 = V_5;
		if (!L_3)
		{
			goto IL_0060;
		}
	}
	{
		// timelineName = interaction.GetType().Name;
		RuntimeObject* L_4 = V_1;
		NullCheck(L_4);
		Type_t * L_5;
		L_5 = Object_GetType_m571FE8360C10B98C23AAF1F066D92C08CC94F45B(L_4, /*hidden argument*/NULL);
		NullCheck(L_5);
		String_t* L_6;
		L_6 = VirtFuncInvoker0< String_t* >::Invoke(7 /* System.String System.Reflection.MemberInfo::get_Name() */, L_5);
		V_0 = L_6;
		// if (timelineName.EndsWith("Interaction"))
		String_t* L_7 = V_0;
		NullCheck(L_7);
		bool L_8;
		L_8 = String_EndsWith_m9A6011FDF8EBFFD3BCB51FE5BE58BE265116DCBE(L_7, _stringLiteralAF8E649A3EF1AB74A43C9F88015FA68AC719215A, /*hidden argument*/NULL);
		V_6 = L_8;
		bool L_9 = V_6;
		if (!L_9)
		{
			goto IL_005f;
		}
	}
	{
		// timelineName = timelineName.Substring(0, timelineName.Length - "Interaction".Length);
		String_t* L_10 = V_0;
		String_t* L_11 = V_0;
		NullCheck(L_11);
		int32_t L_12;
		L_12 = String_get_Length_m129FC0ADA02FECBED3C0B1A809AE84A5AEE1CF09_inline(L_11, /*hidden argument*/NULL);
		NullCheck(_stringLiteralAF8E649A3EF1AB74A43C9F88015FA68AC719215A);
		int32_t L_13;
		L_13 = String_get_Length_m129FC0ADA02FECBED3C0B1A809AE84A5AEE1CF09_inline(_stringLiteralAF8E649A3EF1AB74A43C9F88015FA68AC719215A, /*hidden argument*/NULL);
		NullCheck(L_10);
		String_t* L_14;
		L_14 = String_Substring_m7A39A2AC0893AE940CF4CEC841326D56FFB9D86B(L_10, 0, ((int32_t)il2cpp_codegen_subtract((int32_t)L_12, (int32_t)L_13)), /*hidden argument*/NULL);
		V_0 = L_14;
	}

IL_005f:
	{
	}

IL_0060:
	{
		// var visualizer = (VisualizationHelpers.TimelineVisualizer)m_Visualizer;
		Visualizer_t48757514E9C44C7B20B531BB6D2713A570AA8B74 * L_15 = ((InputVisualizer_t51917CF1458037727EDDF8C090AEB773F3EAC29E *)__this)->get_m_Visualizer_9();
		V_2 = ((TimelineVisualizer_tDCF8FE655A93D562471977C145A8B989803EA315 *)CastclassClass((RuntimeObject*)L_15, TimelineVisualizer_tDCF8FE655A93D562471977C145A8B989803EA315_il2cpp_TypeInfo_var));
		// var timelineIndex = visualizer.GetTimeline(timelineName);
		TimelineVisualizer_tDCF8FE655A93D562471977C145A8B989803EA315 * L_16 = V_2;
		String_t* L_17 = V_0;
		NullCheck(L_16);
		int32_t L_18;
		L_18 = TimelineVisualizer_GetTimeline_m965C2B519C8D85BEF8B22FF598F6E4D063278F4C(L_16, L_17, /*hidden argument*/NULL);
		V_3 = L_18;
		// if (timelineIndex == -1)
		int32_t L_19 = V_3;
		V_7 = (bool)((((int32_t)L_19) == ((int32_t)(-1)))? 1 : 0);
		bool L_20 = V_7;
		if (!L_20)
		{
			goto IL_00de;
		}
	}
	{
		// timelineIndex = visualizer.timelineCount;
		TimelineVisualizer_tDCF8FE655A93D562471977C145A8B989803EA315 * L_21 = V_2;
		NullCheck(L_21);
		int32_t L_22;
		L_22 = TimelineVisualizer_get_timelineCount_m7DF69E3DC601AF2B2B8DFBE4FE651A19D5E29932(L_21, /*hidden argument*/NULL);
		V_3 = L_22;
		// if (timelineIndex < s_InteractionColors.Length)
		int32_t L_23 = V_3;
		IL2CPP_RUNTIME_CLASS_INIT(InputActionVisualizer_t726DF6A67FB0B18AEECDBAB992EABF3B82E339C6_il2cpp_TypeInfo_var);
		ColorU5BU5D_t358DD89F511301E663AD9157305B94A2DEFF8834* L_24 = ((InputActionVisualizer_t726DF6A67FB0B18AEECDBAB992EABF3B82E339C6_StaticFields*)il2cpp_codegen_static_fields_for(InputActionVisualizer_t726DF6A67FB0B18AEECDBAB992EABF3B82E339C6_il2cpp_TypeInfo_var))->get_s_InteractionColors_20();
		NullCheck(L_24);
		V_9 = (bool)((((int32_t)L_23) < ((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_24)->max_length)))))? 1 : 0);
		bool L_25 = V_9;
		if (!L_25)
		{
			goto IL_00a5;
		}
	}
	{
		// color = s_InteractionColors[timelineIndex];
		IL2CPP_RUNTIME_CLASS_INIT(InputActionVisualizer_t726DF6A67FB0B18AEECDBAB992EABF3B82E339C6_il2cpp_TypeInfo_var);
		ColorU5BU5D_t358DD89F511301E663AD9157305B94A2DEFF8834* L_26 = ((InputActionVisualizer_t726DF6A67FB0B18AEECDBAB992EABF3B82E339C6_StaticFields*)il2cpp_codegen_static_fields_for(InputActionVisualizer_t726DF6A67FB0B18AEECDBAB992EABF3B82E339C6_il2cpp_TypeInfo_var))->get_s_InteractionColors_20();
		int32_t L_27 = V_3;
		NullCheck(L_26);
		int32_t L_28 = L_27;
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_29 = (L_26)->GetAt(static_cast<il2cpp_array_size_t>(L_28));
		V_8 = L_29;
		goto IL_00c0;
	}

IL_00a5:
	{
		// color = new Color(Random.value, Random.value, Random.value, 1);
		float L_30;
		L_30 = Random_get_value_m9AEBC7DF0BB6C57C928B0798349A7D3C0B3FB872(/*hidden argument*/NULL);
		float L_31;
		L_31 = Random_get_value_m9AEBC7DF0BB6C57C928B0798349A7D3C0B3FB872(/*hidden argument*/NULL);
		float L_32;
		L_32 = Random_get_value_m9AEBC7DF0BB6C57C928B0798349A7D3C0B3FB872(/*hidden argument*/NULL);
		Color__ctor_m679019E6084BF7A6F82590F66F5F695F6A50ECC5((Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 *)(&V_8), L_30, L_31, L_32, (1.0f), /*hidden argument*/NULL);
	}

IL_00c0:
	{
		// visualizer.AddTimeline(timelineName, color);
		TimelineVisualizer_tDCF8FE655A93D562471977C145A8B989803EA315 * L_33 = V_2;
		String_t* L_34 = V_0;
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_35 = V_8;
		NullCheck(L_33);
		int32_t L_36;
		L_36 = TimelineVisualizer_AddTimeline_mB61A89F5E28EDA9F1BE4A85B5AD626E15B00353C(L_33, L_34, L_35, 0, /*hidden argument*/NULL);
		// if (timelineIndex > 0)
		int32_t L_37 = V_3;
		V_10 = (bool)((((int32_t)L_37) > ((int32_t)0))? 1 : 0);
		bool L_38 = V_10;
		if (!L_38)
		{
			goto IL_00dd;
		}
	}
	{
		// visualizer.showLegend = true;
		TimelineVisualizer_tDCF8FE655A93D562471977C145A8B989803EA315 * L_39 = V_2;
		NullCheck(L_39);
		TimelineVisualizer_set_showLegend_mB4E3E5417669492C804D1718D0370657C6A6434B_inline(L_39, (bool)1, /*hidden argument*/NULL);
	}

IL_00dd:
	{
	}

IL_00de:
	{
		// var time = (float)context.time;
		double L_40;
		L_40 = CallbackContext_get_time_mA769B61755D90B8D8BE6B42236F9A8203107C8B8((CallbackContext_tFAD329A5B98475EEDBD898FFDA3378C44BC12E0B *)(&___context0), /*hidden argument*/NULL);
		V_4 = ((float)((float)L_40));
		// switch (context.phase)
		int32_t L_41;
		L_41 = CallbackContext_get_phase_m1AA786B2FBD617BD9061126BF7442F08484F76E7((CallbackContext_tFAD329A5B98475EEDBD898FFDA3378C44BC12E0B *)(&___context0), /*hidden argument*/NULL);
		V_12 = L_41;
		int32_t L_42 = V_12;
		V_11 = L_42;
		int32_t L_43 = V_11;
		switch (((int32_t)il2cpp_codegen_subtract((int32_t)L_43, (int32_t)2)))
		{
			case 0:
			{
				goto IL_014c;
			}
			case 1:
			{
				goto IL_0122;
			}
			case 2:
			{
				goto IL_010c;
			}
		}
	}
	{
		goto IL_0162;
	}

IL_010c:
	{
		// visualizer.AddSample(timelineIndex, 0f, time);
		TimelineVisualizer_tDCF8FE655A93D562471977C145A8B989803EA315 * L_44 = V_2;
		int32_t L_45 = V_3;
		PrimitiveValue_tB787C76E9A37444599C45519DD7E4D3A1D4730C8  L_46;
		L_46 = PrimitiveValue_op_Implicit_m520988914F077C95B4421DF603EE42FAE47D966B((0.0f), /*hidden argument*/NULL);
		float L_47 = V_4;
		NullCheck(L_44);
		TimelineVisualizer_AddSample_mEFE2F9853918EF7E879A17BB9EE0D7B43151A08D(L_44, L_45, L_46, L_47, /*hidden argument*/NULL);
		// break;
		goto IL_0162;
	}

IL_0122:
	{
		// visualizer.AddSample(timelineIndex, 1f, time);
		TimelineVisualizer_tDCF8FE655A93D562471977C145A8B989803EA315 * L_48 = V_2;
		int32_t L_49 = V_3;
		PrimitiveValue_tB787C76E9A37444599C45519DD7E4D3A1D4730C8  L_50;
		L_50 = PrimitiveValue_op_Implicit_m520988914F077C95B4421DF603EE42FAE47D966B((1.0f), /*hidden argument*/NULL);
		float L_51 = V_4;
		NullCheck(L_48);
		TimelineVisualizer_AddSample_mEFE2F9853918EF7E879A17BB9EE0D7B43151A08D(L_48, L_49, L_50, L_51, /*hidden argument*/NULL);
		// visualizer.AddSample(timelineIndex, 0f, time);
		TimelineVisualizer_tDCF8FE655A93D562471977C145A8B989803EA315 * L_52 = V_2;
		int32_t L_53 = V_3;
		PrimitiveValue_tB787C76E9A37444599C45519DD7E4D3A1D4730C8  L_54;
		L_54 = PrimitiveValue_op_Implicit_m520988914F077C95B4421DF603EE42FAE47D966B((0.0f), /*hidden argument*/NULL);
		float L_55 = V_4;
		NullCheck(L_52);
		TimelineVisualizer_AddSample_mEFE2F9853918EF7E879A17BB9EE0D7B43151A08D(L_52, L_53, L_54, L_55, /*hidden argument*/NULL);
		// break;
		goto IL_0162;
	}

IL_014c:
	{
		// visualizer.AddSample(timelineIndex, 0.5f, time);
		TimelineVisualizer_tDCF8FE655A93D562471977C145A8B989803EA315 * L_56 = V_2;
		int32_t L_57 = V_3;
		PrimitiveValue_tB787C76E9A37444599C45519DD7E4D3A1D4730C8  L_58;
		L_58 = PrimitiveValue_op_Implicit_m520988914F077C95B4421DF603EE42FAE47D966B((0.5f), /*hidden argument*/NULL);
		float L_59 = V_4;
		NullCheck(L_56);
		TimelineVisualizer_AddSample_mEFE2F9853918EF7E879A17BB9EE0D7B43151A08D(L_56, L_57, L_58, L_59, /*hidden argument*/NULL);
		// break;
		goto IL_0162;
	}

IL_0162:
	{
		// if (m_ShowControlName)
		bool L_60 = __this->get_m_ShowControlName_15();
		V_13 = L_60;
		bool L_61 = V_13;
		if (!L_61)
		{
			goto IL_0175;
		}
	}
	{
		// RecordControlName();
		InputActionVisualizer_RecordControlName_m11A8C4FCFE691D9F37E0CD31B97F455D0BC792AF(__this, /*hidden argument*/NULL);
	}

IL_0175:
	{
		// }
		return;
	}
}
// System.Void UnityEngine.InputSystem.Samples.InputActionVisualizer::OnActionChange(System.Object,UnityEngine.InputSystem.InputActionChange)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InputActionVisualizer_OnActionChange_m94EB0C9561390248679EA8B639BFA440A0D915CF (RuntimeObject * ___actionOrMap0, int32_t ___change1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InputActionVisualizer_t726DF6A67FB0B18AEECDBAB992EABF3B82E339C6_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m4615D7BF299A0DA3A8D79F79A55A134518AF2796_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_m5F44DB67A0DAA8DF872581776D0F560B865927E9_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	bool V_3 = false;
	bool V_4 = false;
	bool V_5 = false;
	int32_t V_6 = 0;
	bool V_7 = false;
	bool V_8 = false;
	int32_t V_9 = 0;
	bool V_10 = false;
	bool V_11 = false;
	InputAction_tF0C77AF72E0C19608B020E77A2C36C04E9DCBE48 * G_B19_0 = NULL;
	InputAction_tF0C77AF72E0C19608B020E77A2C36C04E9DCBE48 * G_B18_0 = NULL;
	InputActionMap_tBA45B784C5957091166E0007413402A3E83DD226 * G_B20_0 = NULL;
	{
		// switch (change)
		int32_t L_0 = ___change1;
		V_1 = L_0;
		int32_t L_1 = V_1;
		V_0 = L_1;
		int32_t L_2 = V_0;
		switch (L_2)
		{
			case 0:
			{
				goto IL_0020;
			}
			case 1:
			{
				goto IL_0094;
			}
			case 2:
			{
				goto IL_0020;
			}
			case 3:
			{
				goto IL_00e1;
			}
		}
	}
	{
		goto IL_013a;
	}

IL_0020:
	{
		// for (var i = 0; i < s_EnabledInstances.Count; ++i)
		V_2 = 0;
		goto IL_007c;
	}

IL_0024:
	{
		// if (s_EnabledInstances[i].m_Action == null)
		IL2CPP_RUNTIME_CLASS_INIT(InputActionVisualizer_t726DF6A67FB0B18AEECDBAB992EABF3B82E339C6_il2cpp_TypeInfo_var);
		List_1_t875D9DC885BBF5157329E3844ACC8835F3F5F066 * L_3 = ((InputActionVisualizer_t726DF6A67FB0B18AEECDBAB992EABF3B82E339C6_StaticFields*)il2cpp_codegen_static_fields_for(InputActionVisualizer_t726DF6A67FB0B18AEECDBAB992EABF3B82E339C6_il2cpp_TypeInfo_var))->get_s_EnabledInstances_19();
		int32_t L_4 = V_2;
		NullCheck(L_3);
		InputActionVisualizer_t726DF6A67FB0B18AEECDBAB992EABF3B82E339C6 * L_5;
		L_5 = List_1_get_Item_m5F44DB67A0DAA8DF872581776D0F560B865927E9_inline(L_3, L_4, /*hidden argument*/List_1_get_Item_m5F44DB67A0DAA8DF872581776D0F560B865927E9_RuntimeMethod_var);
		NullCheck(L_5);
		InputAction_tF0C77AF72E0C19608B020E77A2C36C04E9DCBE48 * L_6 = L_5->get_m_Action_16();
		V_3 = (bool)((((RuntimeObject*)(InputAction_tF0C77AF72E0C19608B020E77A2C36C04E9DCBE48 *)L_6) == ((RuntimeObject*)(RuntimeObject *)NULL))? 1 : 0);
		bool L_7 = V_3;
		if (!L_7)
		{
			goto IL_0078;
		}
	}
	{
		// s_EnabledInstances[i].ResolveAction();
		IL2CPP_RUNTIME_CLASS_INIT(InputActionVisualizer_t726DF6A67FB0B18AEECDBAB992EABF3B82E339C6_il2cpp_TypeInfo_var);
		List_1_t875D9DC885BBF5157329E3844ACC8835F3F5F066 * L_8 = ((InputActionVisualizer_t726DF6A67FB0B18AEECDBAB992EABF3B82E339C6_StaticFields*)il2cpp_codegen_static_fields_for(InputActionVisualizer_t726DF6A67FB0B18AEECDBAB992EABF3B82E339C6_il2cpp_TypeInfo_var))->get_s_EnabledInstances_19();
		int32_t L_9 = V_2;
		NullCheck(L_8);
		InputActionVisualizer_t726DF6A67FB0B18AEECDBAB992EABF3B82E339C6 * L_10;
		L_10 = List_1_get_Item_m5F44DB67A0DAA8DF872581776D0F560B865927E9_inline(L_8, L_9, /*hidden argument*/List_1_get_Item_m5F44DB67A0DAA8DF872581776D0F560B865927E9_RuntimeMethod_var);
		NullCheck(L_10);
		InputActionVisualizer_ResolveAction_m91784D0AD0D0CCA120C933406114FA15DF925218(L_10, /*hidden argument*/NULL);
		// if (s_EnabledInstances[i].m_Action != null)
		List_1_t875D9DC885BBF5157329E3844ACC8835F3F5F066 * L_11 = ((InputActionVisualizer_t726DF6A67FB0B18AEECDBAB992EABF3B82E339C6_StaticFields*)il2cpp_codegen_static_fields_for(InputActionVisualizer_t726DF6A67FB0B18AEECDBAB992EABF3B82E339C6_il2cpp_TypeInfo_var))->get_s_EnabledInstances_19();
		int32_t L_12 = V_2;
		NullCheck(L_11);
		InputActionVisualizer_t726DF6A67FB0B18AEECDBAB992EABF3B82E339C6 * L_13;
		L_13 = List_1_get_Item_m5F44DB67A0DAA8DF872581776D0F560B865927E9_inline(L_11, L_12, /*hidden argument*/List_1_get_Item_m5F44DB67A0DAA8DF872581776D0F560B865927E9_RuntimeMethod_var);
		NullCheck(L_13);
		InputAction_tF0C77AF72E0C19608B020E77A2C36C04E9DCBE48 * L_14 = L_13->get_m_Action_16();
		V_4 = (bool)((!(((RuntimeObject*)(InputAction_tF0C77AF72E0C19608B020E77A2C36C04E9DCBE48 *)L_14) <= ((RuntimeObject*)(RuntimeObject *)NULL)))? 1 : 0);
		bool L_15 = V_4;
		if (!L_15)
		{
			goto IL_0077;
		}
	}
	{
		// s_EnabledInstances[i].SetupVisualizer();
		IL2CPP_RUNTIME_CLASS_INIT(InputActionVisualizer_t726DF6A67FB0B18AEECDBAB992EABF3B82E339C6_il2cpp_TypeInfo_var);
		List_1_t875D9DC885BBF5157329E3844ACC8835F3F5F066 * L_16 = ((InputActionVisualizer_t726DF6A67FB0B18AEECDBAB992EABF3B82E339C6_StaticFields*)il2cpp_codegen_static_fields_for(InputActionVisualizer_t726DF6A67FB0B18AEECDBAB992EABF3B82E339C6_il2cpp_TypeInfo_var))->get_s_EnabledInstances_19();
		int32_t L_17 = V_2;
		NullCheck(L_16);
		InputActionVisualizer_t726DF6A67FB0B18AEECDBAB992EABF3B82E339C6 * L_18;
		L_18 = List_1_get_Item_m5F44DB67A0DAA8DF872581776D0F560B865927E9_inline(L_16, L_17, /*hidden argument*/List_1_get_Item_m5F44DB67A0DAA8DF872581776D0F560B865927E9_RuntimeMethod_var);
		NullCheck(L_18);
		InputActionVisualizer_SetupVisualizer_m537AFAD0D3CB4522D8B8BBBD40320C77A9F420CD(L_18, /*hidden argument*/NULL);
	}

IL_0077:
	{
	}

IL_0078:
	{
		// for (var i = 0; i < s_EnabledInstances.Count; ++i)
		int32_t L_19 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add((int32_t)L_19, (int32_t)1));
	}

IL_007c:
	{
		// for (var i = 0; i < s_EnabledInstances.Count; ++i)
		int32_t L_20 = V_2;
		IL2CPP_RUNTIME_CLASS_INIT(InputActionVisualizer_t726DF6A67FB0B18AEECDBAB992EABF3B82E339C6_il2cpp_TypeInfo_var);
		List_1_t875D9DC885BBF5157329E3844ACC8835F3F5F066 * L_21 = ((InputActionVisualizer_t726DF6A67FB0B18AEECDBAB992EABF3B82E339C6_StaticFields*)il2cpp_codegen_static_fields_for(InputActionVisualizer_t726DF6A67FB0B18AEECDBAB992EABF3B82E339C6_il2cpp_TypeInfo_var))->get_s_EnabledInstances_19();
		NullCheck(L_21);
		int32_t L_22;
		L_22 = List_1_get_Count_m4615D7BF299A0DA3A8D79F79A55A134518AF2796_inline(L_21, /*hidden argument*/List_1_get_Count_m4615D7BF299A0DA3A8D79F79A55A134518AF2796_RuntimeMethod_var);
		V_5 = (bool)((((int32_t)L_20) < ((int32_t)L_22))? 1 : 0);
		bool L_23 = V_5;
		if (L_23)
		{
			goto IL_0024;
		}
	}
	{
		// break;
		goto IL_013a;
	}

IL_0094:
	{
		// for (var i = 0; i < s_EnabledInstances.Count; ++i)
		V_6 = 0;
		goto IL_00cb;
	}

IL_0099:
	{
		// if (actionOrMap == s_EnabledInstances[i].m_Action)
		RuntimeObject * L_24 = ___actionOrMap0;
		IL2CPP_RUNTIME_CLASS_INIT(InputActionVisualizer_t726DF6A67FB0B18AEECDBAB992EABF3B82E339C6_il2cpp_TypeInfo_var);
		List_1_t875D9DC885BBF5157329E3844ACC8835F3F5F066 * L_25 = ((InputActionVisualizer_t726DF6A67FB0B18AEECDBAB992EABF3B82E339C6_StaticFields*)il2cpp_codegen_static_fields_for(InputActionVisualizer_t726DF6A67FB0B18AEECDBAB992EABF3B82E339C6_il2cpp_TypeInfo_var))->get_s_EnabledInstances_19();
		int32_t L_26 = V_6;
		NullCheck(L_25);
		InputActionVisualizer_t726DF6A67FB0B18AEECDBAB992EABF3B82E339C6 * L_27;
		L_27 = List_1_get_Item_m5F44DB67A0DAA8DF872581776D0F560B865927E9_inline(L_25, L_26, /*hidden argument*/List_1_get_Item_m5F44DB67A0DAA8DF872581776D0F560B865927E9_RuntimeMethod_var);
		NullCheck(L_27);
		InputAction_tF0C77AF72E0C19608B020E77A2C36C04E9DCBE48 * L_28 = L_27->get_m_Action_16();
		V_7 = (bool)((((RuntimeObject*)(RuntimeObject *)L_24) == ((RuntimeObject*)(InputAction_tF0C77AF72E0C19608B020E77A2C36C04E9DCBE48 *)L_28))? 1 : 0);
		bool L_29 = V_7;
		if (!L_29)
		{
			goto IL_00c5;
		}
	}
	{
		// s_EnabledInstances[i].OnActionDisabled();
		IL2CPP_RUNTIME_CLASS_INIT(InputActionVisualizer_t726DF6A67FB0B18AEECDBAB992EABF3B82E339C6_il2cpp_TypeInfo_var);
		List_1_t875D9DC885BBF5157329E3844ACC8835F3F5F066 * L_30 = ((InputActionVisualizer_t726DF6A67FB0B18AEECDBAB992EABF3B82E339C6_StaticFields*)il2cpp_codegen_static_fields_for(InputActionVisualizer_t726DF6A67FB0B18AEECDBAB992EABF3B82E339C6_il2cpp_TypeInfo_var))->get_s_EnabledInstances_19();
		int32_t L_31 = V_6;
		NullCheck(L_30);
		InputActionVisualizer_t726DF6A67FB0B18AEECDBAB992EABF3B82E339C6 * L_32;
		L_32 = List_1_get_Item_m5F44DB67A0DAA8DF872581776D0F560B865927E9_inline(L_30, L_31, /*hidden argument*/List_1_get_Item_m5F44DB67A0DAA8DF872581776D0F560B865927E9_RuntimeMethod_var);
		NullCheck(L_32);
		InputActionVisualizer_OnActionDisabled_m2F9F191738BE4386C68A9858ED0C919B4B5971EE(L_32, /*hidden argument*/NULL);
	}

IL_00c5:
	{
		// for (var i = 0; i < s_EnabledInstances.Count; ++i)
		int32_t L_33 = V_6;
		V_6 = ((int32_t)il2cpp_codegen_add((int32_t)L_33, (int32_t)1));
	}

IL_00cb:
	{
		// for (var i = 0; i < s_EnabledInstances.Count; ++i)
		int32_t L_34 = V_6;
		IL2CPP_RUNTIME_CLASS_INIT(InputActionVisualizer_t726DF6A67FB0B18AEECDBAB992EABF3B82E339C6_il2cpp_TypeInfo_var);
		List_1_t875D9DC885BBF5157329E3844ACC8835F3F5F066 * L_35 = ((InputActionVisualizer_t726DF6A67FB0B18AEECDBAB992EABF3B82E339C6_StaticFields*)il2cpp_codegen_static_fields_for(InputActionVisualizer_t726DF6A67FB0B18AEECDBAB992EABF3B82E339C6_il2cpp_TypeInfo_var))->get_s_EnabledInstances_19();
		NullCheck(L_35);
		int32_t L_36;
		L_36 = List_1_get_Count_m4615D7BF299A0DA3A8D79F79A55A134518AF2796_inline(L_35, /*hidden argument*/List_1_get_Count_m4615D7BF299A0DA3A8D79F79A55A134518AF2796_RuntimeMethod_var);
		V_8 = (bool)((((int32_t)L_34) < ((int32_t)L_36))? 1 : 0);
		bool L_37 = V_8;
		if (L_37)
		{
			goto IL_0099;
		}
	}
	{
		// break;
		goto IL_013a;
	}

IL_00e1:
	{
		// for (var i = 0; i < s_EnabledInstances.Count; ++i)
		V_9 = 0;
		goto IL_0124;
	}

IL_00e6:
	{
		// if (s_EnabledInstances[i].m_Action?.actionMap == actionOrMap)
		IL2CPP_RUNTIME_CLASS_INIT(InputActionVisualizer_t726DF6A67FB0B18AEECDBAB992EABF3B82E339C6_il2cpp_TypeInfo_var);
		List_1_t875D9DC885BBF5157329E3844ACC8835F3F5F066 * L_38 = ((InputActionVisualizer_t726DF6A67FB0B18AEECDBAB992EABF3B82E339C6_StaticFields*)il2cpp_codegen_static_fields_for(InputActionVisualizer_t726DF6A67FB0B18AEECDBAB992EABF3B82E339C6_il2cpp_TypeInfo_var))->get_s_EnabledInstances_19();
		int32_t L_39 = V_9;
		NullCheck(L_38);
		InputActionVisualizer_t726DF6A67FB0B18AEECDBAB992EABF3B82E339C6 * L_40;
		L_40 = List_1_get_Item_m5F44DB67A0DAA8DF872581776D0F560B865927E9_inline(L_38, L_39, /*hidden argument*/List_1_get_Item_m5F44DB67A0DAA8DF872581776D0F560B865927E9_RuntimeMethod_var);
		NullCheck(L_40);
		InputAction_tF0C77AF72E0C19608B020E77A2C36C04E9DCBE48 * L_41 = L_40->get_m_Action_16();
		InputAction_tF0C77AF72E0C19608B020E77A2C36C04E9DCBE48 * L_42 = L_41;
		G_B18_0 = L_42;
		if (L_42)
		{
			G_B19_0 = L_42;
			goto IL_00fe;
		}
	}
	{
		G_B20_0 = ((InputActionMap_tBA45B784C5957091166E0007413402A3E83DD226 *)(NULL));
		goto IL_0103;
	}

IL_00fe:
	{
		NullCheck(G_B19_0);
		InputActionMap_tBA45B784C5957091166E0007413402A3E83DD226 * L_43;
		L_43 = InputAction_get_actionMap_mD6F927473CBBB756ECA0A90A073052F3BC2CCB76(G_B19_0, /*hidden argument*/NULL);
		G_B20_0 = L_43;
	}

IL_0103:
	{
		RuntimeObject * L_44 = ___actionOrMap0;
		V_10 = (bool)((((RuntimeObject*)(InputActionMap_tBA45B784C5957091166E0007413402A3E83DD226 *)G_B20_0) == ((RuntimeObject*)(RuntimeObject *)L_44))? 1 : 0);
		bool L_45 = V_10;
		if (!L_45)
		{
			goto IL_011e;
		}
	}
	{
		// s_EnabledInstances[i].OnActionDisabled();
		IL2CPP_RUNTIME_CLASS_INIT(InputActionVisualizer_t726DF6A67FB0B18AEECDBAB992EABF3B82E339C6_il2cpp_TypeInfo_var);
		List_1_t875D9DC885BBF5157329E3844ACC8835F3F5F066 * L_46 = ((InputActionVisualizer_t726DF6A67FB0B18AEECDBAB992EABF3B82E339C6_StaticFields*)il2cpp_codegen_static_fields_for(InputActionVisualizer_t726DF6A67FB0B18AEECDBAB992EABF3B82E339C6_il2cpp_TypeInfo_var))->get_s_EnabledInstances_19();
		int32_t L_47 = V_9;
		NullCheck(L_46);
		InputActionVisualizer_t726DF6A67FB0B18AEECDBAB992EABF3B82E339C6 * L_48;
		L_48 = List_1_get_Item_m5F44DB67A0DAA8DF872581776D0F560B865927E9_inline(L_46, L_47, /*hidden argument*/List_1_get_Item_m5F44DB67A0DAA8DF872581776D0F560B865927E9_RuntimeMethod_var);
		NullCheck(L_48);
		InputActionVisualizer_OnActionDisabled_m2F9F191738BE4386C68A9858ED0C919B4B5971EE(L_48, /*hidden argument*/NULL);
	}

IL_011e:
	{
		// for (var i = 0; i < s_EnabledInstances.Count; ++i)
		int32_t L_49 = V_9;
		V_9 = ((int32_t)il2cpp_codegen_add((int32_t)L_49, (int32_t)1));
	}

IL_0124:
	{
		// for (var i = 0; i < s_EnabledInstances.Count; ++i)
		int32_t L_50 = V_9;
		IL2CPP_RUNTIME_CLASS_INIT(InputActionVisualizer_t726DF6A67FB0B18AEECDBAB992EABF3B82E339C6_il2cpp_TypeInfo_var);
		List_1_t875D9DC885BBF5157329E3844ACC8835F3F5F066 * L_51 = ((InputActionVisualizer_t726DF6A67FB0B18AEECDBAB992EABF3B82E339C6_StaticFields*)il2cpp_codegen_static_fields_for(InputActionVisualizer_t726DF6A67FB0B18AEECDBAB992EABF3B82E339C6_il2cpp_TypeInfo_var))->get_s_EnabledInstances_19();
		NullCheck(L_51);
		int32_t L_52;
		L_52 = List_1_get_Count_m4615D7BF299A0DA3A8D79F79A55A134518AF2796_inline(L_51, /*hidden argument*/List_1_get_Count_m4615D7BF299A0DA3A8D79F79A55A134518AF2796_RuntimeMethod_var);
		V_11 = (bool)((((int32_t)L_50) < ((int32_t)L_52))? 1 : 0);
		bool L_53 = V_11;
		if (L_53)
		{
			goto IL_00e6;
		}
	}
	{
		// break;
		goto IL_013a;
	}

IL_013a:
	{
		// }
		return;
	}
}
// System.Void UnityEngine.InputSystem.Samples.InputActionVisualizer::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InputActionVisualizer__ctor_m5CD8D74E81FA2D2193CFE24D32EB21B9C524550D (InputActionVisualizer_t726DF6A67FB0B18AEECDBAB992EABF3B82E339C6 * __this, const RuntimeMethod* method)
{
	{
		InputVisualizer__ctor_mAFD837F6494C800DF6CBFC6427D4875349655DB8(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.InputSystem.Samples.InputActionVisualizer::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InputActionVisualizer__cctor_m9FB6583953D82E3CC17BA5460146739A60604DF1 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ColorU5BU5D_t358DD89F511301E663AD9157305B94A2DEFF8834_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InputActionVisualizer_t726DF6A67FB0B18AEECDBAB992EABF3B82E339C6_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private static readonly Color[] s_InteractionColors =
		// {
		//     new Color(1, 0, 0, 1),
		//     new Color(0, 0, 1, 1),
		//     new Color(1, 1, 0, 1),
		//     new Color(1, 0, 1, 1),
		//     new Color(0, 1, 1, 1),
		//     new Color(0, 1, 0, 1),
		// };
		ColorU5BU5D_t358DD89F511301E663AD9157305B94A2DEFF8834* L_0 = (ColorU5BU5D_t358DD89F511301E663AD9157305B94A2DEFF8834*)(ColorU5BU5D_t358DD89F511301E663AD9157305B94A2DEFF8834*)SZArrayNew(ColorU5BU5D_t358DD89F511301E663AD9157305B94A2DEFF8834_il2cpp_TypeInfo_var, (uint32_t)6);
		ColorU5BU5D_t358DD89F511301E663AD9157305B94A2DEFF8834* L_1 = L_0;
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_2;
		memset((&L_2), 0, sizeof(L_2));
		Color__ctor_m679019E6084BF7A6F82590F66F5F695F6A50ECC5((&L_2), (1.0f), (0.0f), (0.0f), (1.0f), /*hidden argument*/NULL);
		NullCheck(L_1);
		(L_1)->SetAt(static_cast<il2cpp_array_size_t>(0), (Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 )L_2);
		ColorU5BU5D_t358DD89F511301E663AD9157305B94A2DEFF8834* L_3 = L_1;
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_4;
		memset((&L_4), 0, sizeof(L_4));
		Color__ctor_m679019E6084BF7A6F82590F66F5F695F6A50ECC5((&L_4), (0.0f), (0.0f), (1.0f), (1.0f), /*hidden argument*/NULL);
		NullCheck(L_3);
		(L_3)->SetAt(static_cast<il2cpp_array_size_t>(1), (Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 )L_4);
		ColorU5BU5D_t358DD89F511301E663AD9157305B94A2DEFF8834* L_5 = L_3;
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_6;
		memset((&L_6), 0, sizeof(L_6));
		Color__ctor_m679019E6084BF7A6F82590F66F5F695F6A50ECC5((&L_6), (1.0f), (1.0f), (0.0f), (1.0f), /*hidden argument*/NULL);
		NullCheck(L_5);
		(L_5)->SetAt(static_cast<il2cpp_array_size_t>(2), (Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 )L_6);
		ColorU5BU5D_t358DD89F511301E663AD9157305B94A2DEFF8834* L_7 = L_5;
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_8;
		memset((&L_8), 0, sizeof(L_8));
		Color__ctor_m679019E6084BF7A6F82590F66F5F695F6A50ECC5((&L_8), (1.0f), (0.0f), (1.0f), (1.0f), /*hidden argument*/NULL);
		NullCheck(L_7);
		(L_7)->SetAt(static_cast<il2cpp_array_size_t>(3), (Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 )L_8);
		ColorU5BU5D_t358DD89F511301E663AD9157305B94A2DEFF8834* L_9 = L_7;
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_10;
		memset((&L_10), 0, sizeof(L_10));
		Color__ctor_m679019E6084BF7A6F82590F66F5F695F6A50ECC5((&L_10), (0.0f), (1.0f), (1.0f), (1.0f), /*hidden argument*/NULL);
		NullCheck(L_9);
		(L_9)->SetAt(static_cast<il2cpp_array_size_t>(4), (Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 )L_10);
		ColorU5BU5D_t358DD89F511301E663AD9157305B94A2DEFF8834* L_11 = L_9;
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_12;
		memset((&L_12), 0, sizeof(L_12));
		Color__ctor_m679019E6084BF7A6F82590F66F5F695F6A50ECC5((&L_12), (0.0f), (1.0f), (0.0f), (1.0f), /*hidden argument*/NULL);
		NullCheck(L_11);
		(L_11)->SetAt(static_cast<il2cpp_array_size_t>(5), (Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 )L_12);
		((InputActionVisualizer_t726DF6A67FB0B18AEECDBAB992EABF3B82E339C6_StaticFields*)il2cpp_codegen_static_fields_for(InputActionVisualizer_t726DF6A67FB0B18AEECDBAB992EABF3B82E339C6_il2cpp_TypeInfo_var))->set_s_InteractionColors_20(L_11);
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
// UnityEngine.InputSystem.Samples.InputControlVisualizer/Mode UnityEngine.InputSystem.Samples.InputControlVisualizer::get_visualization()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t InputControlVisualizer_get_visualization_m2B4574416AF3CF6A52E9D20BFF1FE25FD3266E5E (InputControlVisualizer_t83B42575FEC0B8A79280A7D5AE2886C0494BC6AF * __this, const RuntimeMethod* method)
{
	{
		// get => m_Visualization;
		int32_t L_0 = __this->get_m_Visualization_12();
		return L_0;
	}
}
// System.Void UnityEngine.InputSystem.Samples.InputControlVisualizer::set_visualization(UnityEngine.InputSystem.Samples.InputControlVisualizer/Mode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InputControlVisualizer_set_visualization_mF7B12A014465652EFE862BC530EFF78192C9FC05 (InputControlVisualizer_t83B42575FEC0B8A79280A7D5AE2886C0494BC6AF * __this, int32_t ___value0, const RuntimeMethod* method)
{
	bool V_0 = false;
	{
		// if (m_Visualization == value)
		int32_t L_0 = __this->get_m_Visualization_12();
		int32_t L_1 = ___value0;
		V_0 = (bool)((((int32_t)L_0) == ((int32_t)L_1))? 1 : 0);
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_0010;
		}
	}
	{
		// return;
		goto IL_001e;
	}

IL_0010:
	{
		// m_Visualization = value;
		int32_t L_3 = ___value0;
		__this->set_m_Visualization_12(L_3);
		// SetupVisualizer();
		InputControlVisualizer_SetupVisualizer_m3E23B649646E07919F7D988D55DE005D24F5ECE7(__this, /*hidden argument*/NULL);
	}

IL_001e:
	{
		// }
		return;
	}
}
// System.String UnityEngine.InputSystem.Samples.InputControlVisualizer::get_controlPath()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* InputControlVisualizer_get_controlPath_m28ED842B9A58A85B95946F61A17D2E96481A5CFC (InputControlVisualizer_t83B42575FEC0B8A79280A7D5AE2886C0494BC6AF * __this, const RuntimeMethod* method)
{
	{
		// get => m_ControlPath;
		String_t* L_0 = __this->get_m_ControlPath_13();
		return L_0;
	}
}
// System.Void UnityEngine.InputSystem.Samples.InputControlVisualizer::set_controlPath(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InputControlVisualizer_set_controlPath_m1CC30C51570D4C0DA114723EC4B342D5285DCC3F (InputControlVisualizer_t83B42575FEC0B8A79280A7D5AE2886C0494BC6AF * __this, String_t* ___value0, const RuntimeMethod* method)
{
	bool V_0 = false;
	{
		// m_ControlPath = value;
		String_t* L_0 = ___value0;
		__this->set_m_ControlPath_13(L_0);
		// if (m_Control != null)
		InputControl_t3CDD1115017147EEC9D825834637D7700669C006 * L_1 = __this->get_m_Control_15();
		V_0 = (bool)((!(((RuntimeObject*)(InputControl_t3CDD1115017147EEC9D825834637D7700669C006 *)L_1) <= ((RuntimeObject*)(RuntimeObject *)NULL)))? 1 : 0);
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_001c;
		}
	}
	{
		// ResolveControl();
		InputControlVisualizer_ResolveControl_m851068D92D77ED82D124F903BE33C36457F6DA86(__this, /*hidden argument*/NULL);
	}

IL_001c:
	{
		// }
		return;
	}
}
// System.Int32 UnityEngine.InputSystem.Samples.InputControlVisualizer::get_controlIndex()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t InputControlVisualizer_get_controlIndex_mBBA0ECA3A302070F23046EBD2D60F9311190E57F (InputControlVisualizer_t83B42575FEC0B8A79280A7D5AE2886C0494BC6AF * __this, const RuntimeMethod* method)
{
	{
		// get => m_ControlIndex;
		int32_t L_0 = __this->get_m_ControlIndex_14();
		return L_0;
	}
}
// System.Void UnityEngine.InputSystem.Samples.InputControlVisualizer::set_controlIndex(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InputControlVisualizer_set_controlIndex_mC84E9397E989A3E14766E59A850D61D92EA4DC74 (InputControlVisualizer_t83B42575FEC0B8A79280A7D5AE2886C0494BC6AF * __this, int32_t ___value0, const RuntimeMethod* method)
{
	bool V_0 = false;
	{
		// m_ControlIndex = value;
		int32_t L_0 = ___value0;
		__this->set_m_ControlIndex_14(L_0);
		// if (m_Control != null)
		InputControl_t3CDD1115017147EEC9D825834637D7700669C006 * L_1 = __this->get_m_Control_15();
		V_0 = (bool)((!(((RuntimeObject*)(InputControl_t3CDD1115017147EEC9D825834637D7700669C006 *)L_1) <= ((RuntimeObject*)(RuntimeObject *)NULL)))? 1 : 0);
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_001c;
		}
	}
	{
		// ResolveControl();
		InputControlVisualizer_ResolveControl_m851068D92D77ED82D124F903BE33C36457F6DA86(__this, /*hidden argument*/NULL);
	}

IL_001c:
	{
		// }
		return;
	}
}
// UnityEngine.InputSystem.InputControl UnityEngine.InputSystem.Samples.InputControlVisualizer::get_control()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR InputControl_t3CDD1115017147EEC9D825834637D7700669C006 * InputControlVisualizer_get_control_m2A0A47D419676A3372B4FA6D27201B0BCB96E2AD (InputControlVisualizer_t83B42575FEC0B8A79280A7D5AE2886C0494BC6AF * __this, const RuntimeMethod* method)
{
	{
		// public InputControl control => m_Control;
		InputControl_t3CDD1115017147EEC9D825834637D7700669C006 * L_0 = __this->get_m_Control_15();
		return L_0;
	}
}
// System.Void UnityEngine.InputSystem.Samples.InputControlVisualizer::OnEnable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InputControlVisualizer_OnEnable_mCC6AA043CE3C928A113229347E8D90E0ABBFE14E (InputControlVisualizer_t83B42575FEC0B8A79280A7D5AE2886C0494BC6AF * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_2__ctor_m20C0B0DB3C956DB848BF90395196756465C09EFC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_2__ctor_m8F70F3969874295277CB0CE383C84E1F6DC33BDA_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_2_t83E2B2D05A16B14F487969D4D187AEC66413E199_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_2_tCA9E945868CD5BF442EF675FE455A9E807CED9D1_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InputControlVisualizer_OnDeviceChange_m2966E6BA3CFDCFCB04449ED781D6D4A44EBEAA6F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InputControlVisualizer_OnEvent_mAA88F1CC6BC21555C7AF65C7C4C58DB8BDFE7516_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InputControlVisualizer_t83B42575FEC0B8A79280A7D5AE2886C0494BC6AF_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InputSystem_t6F1EF32494CBBFE3270F03F3BF728BCADA04940D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_m35E826ECBC0E1C8CA43EE8338888C3958CC07128_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_mEF0ED01B6F1A8B15D034E031141EBA514B03F2A3_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m69DE315A508A83D4D5285EDA046A2BC454A5A2C1_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_tD92B93CD7F6D0E73500ED17BEEE90D9C77282117_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	bool V_2 = false;
	{
		// if (m_Visualization == Mode.None)
		int32_t L_0 = __this->get_m_Visualization_12();
		V_0 = (bool)((((int32_t)L_0) == ((int32_t)0))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0010;
		}
	}
	{
		// return;
		goto IL_0077;
	}

IL_0010:
	{
		// if (s_EnabledInstances == null)
		List_1_tD92B93CD7F6D0E73500ED17BEEE90D9C77282117 * L_2 = ((InputControlVisualizer_t83B42575FEC0B8A79280A7D5AE2886C0494BC6AF_StaticFields*)il2cpp_codegen_static_fields_for(InputControlVisualizer_t83B42575FEC0B8A79280A7D5AE2886C0494BC6AF_il2cpp_TypeInfo_var))->get_s_EnabledInstances_16();
		V_1 = (bool)((((RuntimeObject*)(List_1_tD92B93CD7F6D0E73500ED17BEEE90D9C77282117 *)L_2) == ((RuntimeObject*)(RuntimeObject *)NULL))? 1 : 0);
		bool L_3 = V_1;
		if (!L_3)
		{
			goto IL_0026;
		}
	}
	{
		// s_EnabledInstances = new List<InputControlVisualizer>();
		List_1_tD92B93CD7F6D0E73500ED17BEEE90D9C77282117 * L_4 = (List_1_tD92B93CD7F6D0E73500ED17BEEE90D9C77282117 *)il2cpp_codegen_object_new(List_1_tD92B93CD7F6D0E73500ED17BEEE90D9C77282117_il2cpp_TypeInfo_var);
		List_1__ctor_mEF0ED01B6F1A8B15D034E031141EBA514B03F2A3(L_4, /*hidden argument*/List_1__ctor_mEF0ED01B6F1A8B15D034E031141EBA514B03F2A3_RuntimeMethod_var);
		((InputControlVisualizer_t83B42575FEC0B8A79280A7D5AE2886C0494BC6AF_StaticFields*)il2cpp_codegen_static_fields_for(InputControlVisualizer_t83B42575FEC0B8A79280A7D5AE2886C0494BC6AF_il2cpp_TypeInfo_var))->set_s_EnabledInstances_16(L_4);
	}

IL_0026:
	{
		// if (s_EnabledInstances.Count == 0)
		List_1_tD92B93CD7F6D0E73500ED17BEEE90D9C77282117 * L_5 = ((InputControlVisualizer_t83B42575FEC0B8A79280A7D5AE2886C0494BC6AF_StaticFields*)il2cpp_codegen_static_fields_for(InputControlVisualizer_t83B42575FEC0B8A79280A7D5AE2886C0494BC6AF_il2cpp_TypeInfo_var))->get_s_EnabledInstances_16();
		NullCheck(L_5);
		int32_t L_6;
		L_6 = List_1_get_Count_m69DE315A508A83D4D5285EDA046A2BC454A5A2C1_inline(L_5, /*hidden argument*/List_1_get_Count_m69DE315A508A83D4D5285EDA046A2BC454A5A2C1_RuntimeMethod_var);
		V_2 = (bool)((((int32_t)L_6) == ((int32_t)0))? 1 : 0);
		bool L_7 = V_2;
		if (!L_7)
		{
			goto IL_005d;
		}
	}
	{
		// InputSystem.onDeviceChange += OnDeviceChange;
		Action_2_tCA9E945868CD5BF442EF675FE455A9E807CED9D1 * L_8 = (Action_2_tCA9E945868CD5BF442EF675FE455A9E807CED9D1 *)il2cpp_codegen_object_new(Action_2_tCA9E945868CD5BF442EF675FE455A9E807CED9D1_il2cpp_TypeInfo_var);
		Action_2__ctor_m8F70F3969874295277CB0CE383C84E1F6DC33BDA(L_8, NULL, (intptr_t)((intptr_t)InputControlVisualizer_OnDeviceChange_m2966E6BA3CFDCFCB04449ED781D6D4A44EBEAA6F_RuntimeMethod_var), /*hidden argument*/Action_2__ctor_m8F70F3969874295277CB0CE383C84E1F6DC33BDA_RuntimeMethod_var);
		IL2CPP_RUNTIME_CLASS_INIT(InputSystem_t6F1EF32494CBBFE3270F03F3BF728BCADA04940D_il2cpp_TypeInfo_var);
		InputSystem_add_onDeviceChange_mAE41D7E93801E17018B69586645B81385CA7153C(L_8, /*hidden argument*/NULL);
		// InputSystem.onEvent += OnEvent;
		Action_2_t83E2B2D05A16B14F487969D4D187AEC66413E199 * L_9 = (Action_2_t83E2B2D05A16B14F487969D4D187AEC66413E199 *)il2cpp_codegen_object_new(Action_2_t83E2B2D05A16B14F487969D4D187AEC66413E199_il2cpp_TypeInfo_var);
		Action_2__ctor_m20C0B0DB3C956DB848BF90395196756465C09EFC(L_9, NULL, (intptr_t)((intptr_t)InputControlVisualizer_OnEvent_mAA88F1CC6BC21555C7AF65C7C4C58DB8BDFE7516_RuntimeMethod_var), /*hidden argument*/Action_2__ctor_m20C0B0DB3C956DB848BF90395196756465C09EFC_RuntimeMethod_var);
		InputSystem_add_onEvent_m4CD5E491F9492E44311933C0DD335ACD2674AC76(L_9, /*hidden argument*/NULL);
	}

IL_005d:
	{
		// s_EnabledInstances.Add(this);
		List_1_tD92B93CD7F6D0E73500ED17BEEE90D9C77282117 * L_10 = ((InputControlVisualizer_t83B42575FEC0B8A79280A7D5AE2886C0494BC6AF_StaticFields*)il2cpp_codegen_static_fields_for(InputControlVisualizer_t83B42575FEC0B8A79280A7D5AE2886C0494BC6AF_il2cpp_TypeInfo_var))->get_s_EnabledInstances_16();
		NullCheck(L_10);
		List_1_Add_m35E826ECBC0E1C8CA43EE8338888C3958CC07128(L_10, __this, /*hidden argument*/List_1_Add_m35E826ECBC0E1C8CA43EE8338888C3958CC07128_RuntimeMethod_var);
		// ResolveControl();
		InputControlVisualizer_ResolveControl_m851068D92D77ED82D124F903BE33C36457F6DA86(__this, /*hidden argument*/NULL);
		// base.OnEnable();
		InputVisualizer_OnEnable_m2E397BD5719AD2BB97ED81D27208B446989D727A(__this, /*hidden argument*/NULL);
	}

IL_0077:
	{
		// }
		return;
	}
}
// System.Void UnityEngine.InputSystem.Samples.InputControlVisualizer::OnDisable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InputControlVisualizer_OnDisable_m4830AEBB4E605BDDAFBD3F72D3148720215BB874 (InputControlVisualizer_t83B42575FEC0B8A79280A7D5AE2886C0494BC6AF * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_2__ctor_m20C0B0DB3C956DB848BF90395196756465C09EFC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_2__ctor_m8F70F3969874295277CB0CE383C84E1F6DC33BDA_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_2_t83E2B2D05A16B14F487969D4D187AEC66413E199_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_2_tCA9E945868CD5BF442EF675FE455A9E807CED9D1_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InputControlVisualizer_OnDeviceChange_m2966E6BA3CFDCFCB04449ED781D6D4A44EBEAA6F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InputControlVisualizer_OnEvent_mAA88F1CC6BC21555C7AF65C7C4C58DB8BDFE7516_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InputControlVisualizer_t83B42575FEC0B8A79280A7D5AE2886C0494BC6AF_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InputSystem_t6F1EF32494CBBFE3270F03F3BF728BCADA04940D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Remove_m729CBC2A75F04AA56FF09800A55ED048A9EB3FEE_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m69DE315A508A83D4D5285EDA046A2BC454A5A2C1_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	{
		// if (m_Visualization == Mode.None)
		int32_t L_0 = __this->get_m_Visualization_12();
		V_0 = (bool)((((int32_t)L_0) == ((int32_t)0))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0010;
		}
	}
	{
		// return;
		goto IL_0061;
	}

IL_0010:
	{
		// s_EnabledInstances.Remove(this);
		List_1_tD92B93CD7F6D0E73500ED17BEEE90D9C77282117 * L_2 = ((InputControlVisualizer_t83B42575FEC0B8A79280A7D5AE2886C0494BC6AF_StaticFields*)il2cpp_codegen_static_fields_for(InputControlVisualizer_t83B42575FEC0B8A79280A7D5AE2886C0494BC6AF_il2cpp_TypeInfo_var))->get_s_EnabledInstances_16();
		NullCheck(L_2);
		bool L_3;
		L_3 = List_1_Remove_m729CBC2A75F04AA56FF09800A55ED048A9EB3FEE(L_2, __this, /*hidden argument*/List_1_Remove_m729CBC2A75F04AA56FF09800A55ED048A9EB3FEE_RuntimeMethod_var);
		// if (s_EnabledInstances.Count == 0)
		List_1_tD92B93CD7F6D0E73500ED17BEEE90D9C77282117 * L_4 = ((InputControlVisualizer_t83B42575FEC0B8A79280A7D5AE2886C0494BC6AF_StaticFields*)il2cpp_codegen_static_fields_for(InputControlVisualizer_t83B42575FEC0B8A79280A7D5AE2886C0494BC6AF_il2cpp_TypeInfo_var))->get_s_EnabledInstances_16();
		NullCheck(L_4);
		int32_t L_5;
		L_5 = List_1_get_Count_m69DE315A508A83D4D5285EDA046A2BC454A5A2C1_inline(L_4, /*hidden argument*/List_1_get_Count_m69DE315A508A83D4D5285EDA046A2BC454A5A2C1_RuntimeMethod_var);
		V_1 = (bool)((((int32_t)L_5) == ((int32_t)0))? 1 : 0);
		bool L_6 = V_1;
		if (!L_6)
		{
			goto IL_0053;
		}
	}
	{
		// InputSystem.onDeviceChange -= OnDeviceChange;
		Action_2_tCA9E945868CD5BF442EF675FE455A9E807CED9D1 * L_7 = (Action_2_tCA9E945868CD5BF442EF675FE455A9E807CED9D1 *)il2cpp_codegen_object_new(Action_2_tCA9E945868CD5BF442EF675FE455A9E807CED9D1_il2cpp_TypeInfo_var);
		Action_2__ctor_m8F70F3969874295277CB0CE383C84E1F6DC33BDA(L_7, NULL, (intptr_t)((intptr_t)InputControlVisualizer_OnDeviceChange_m2966E6BA3CFDCFCB04449ED781D6D4A44EBEAA6F_RuntimeMethod_var), /*hidden argument*/Action_2__ctor_m8F70F3969874295277CB0CE383C84E1F6DC33BDA_RuntimeMethod_var);
		IL2CPP_RUNTIME_CLASS_INIT(InputSystem_t6F1EF32494CBBFE3270F03F3BF728BCADA04940D_il2cpp_TypeInfo_var);
		InputSystem_remove_onDeviceChange_mABB2FAEAB30488F3E9DACC47C34DB9B398C724A7(L_7, /*hidden argument*/NULL);
		// InputSystem.onEvent -= OnEvent;
		Action_2_t83E2B2D05A16B14F487969D4D187AEC66413E199 * L_8 = (Action_2_t83E2B2D05A16B14F487969D4D187AEC66413E199 *)il2cpp_codegen_object_new(Action_2_t83E2B2D05A16B14F487969D4D187AEC66413E199_il2cpp_TypeInfo_var);
		Action_2__ctor_m20C0B0DB3C956DB848BF90395196756465C09EFC(L_8, NULL, (intptr_t)((intptr_t)InputControlVisualizer_OnEvent_mAA88F1CC6BC21555C7AF65C7C4C58DB8BDFE7516_RuntimeMethod_var), /*hidden argument*/Action_2__ctor_m20C0B0DB3C956DB848BF90395196756465C09EFC_RuntimeMethod_var);
		InputSystem_remove_onEvent_mFDF8BBBBAB307C81E5F589CB5EE92F4974DED2F4(L_8, /*hidden argument*/NULL);
	}

IL_0053:
	{
		// m_Control = null;
		__this->set_m_Control_15((InputControl_t3CDD1115017147EEC9D825834637D7700669C006 *)NULL);
		// base.OnDisable();
		InputVisualizer_OnDisable_m2A0FD7F73BD976313A8B397C2D72676D3A65C161(__this, /*hidden argument*/NULL);
	}

IL_0061:
	{
		// }
		return;
	}
}
// System.Void UnityEngine.InputSystem.Samples.InputControlVisualizer::OnGUI()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InputControlVisualizer_OnGUI_mCDB5EE5A113AF46C0F714E8E3A6E690C65349902 (InputControlVisualizer_t83B42575FEC0B8A79280A7D5AE2886C0494BC6AF * __this, const RuntimeMethod* method)
{
	bool V_0 = false;
	{
		// if (m_Visualization == Mode.None)
		int32_t L_0 = __this->get_m_Visualization_12();
		V_0 = (bool)((((int32_t)L_0) == ((int32_t)0))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0010;
		}
	}
	{
		// return;
		goto IL_0017;
	}

IL_0010:
	{
		// base.OnGUI();
		InputVisualizer_OnGUI_m62F3B05F1A6BCA9AEDC1FDBE7AA4339769DF3D09(__this, /*hidden argument*/NULL);
	}

IL_0017:
	{
		// }
		return;
	}
}
// System.Void UnityEngine.InputSystem.Samples.InputControlVisualizer::OnValidate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InputControlVisualizer_OnValidate_mD690ED918A284547B0D9AE2852C4282B951F2CDF (InputControlVisualizer_t83B42575FEC0B8A79280A7D5AE2886C0494BC6AF * __this, const RuntimeMethod* method)
{
	{
		// ResolveControl();
		InputControlVisualizer_ResolveControl_m851068D92D77ED82D124F903BE33C36457F6DA86(__this, /*hidden argument*/NULL);
		// base.OnValidate();
		InputVisualizer_OnValidate_mC2265CE7F4AADC4C0D266DE1BD8F6091C4BBCDE6(__this, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void UnityEngine.InputSystem.Samples.InputControlVisualizer::ResolveControl()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InputControlVisualizer_ResolveControl_m851068D92D77ED82D124F903BE33C36457F6DA86 (InputControlVisualizer_t83B42575FEC0B8A79280A7D5AE2886C0494BC6AF * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InputControlList_1_Dispose_m89933A9B868B8E5D9EF0C8528B85D5A308169127_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InputControlList_1_get_Count_m6C41B033AC753606385ED7F9C15DC5C0960BE592_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InputControlList_1_get_Item_mA00C10A722E15D8FACC324A8042364DC6BC8CC20_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InputSystem_t6F1EF32494CBBFE3270F03F3BF728BCADA04940D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	InputControlList_1_tC251485A8EBE20F32C1828D6F68B450DAB732E96  V_1;
	memset((&V_1), 0, sizeof(V_1));
	int32_t V_2 = 0;
	bool V_3 = false;
	bool V_4 = false;
	Exception_t * __last_unhandled_exception = 0;
	il2cpp::utils::ExceptionSupportStack<int32_t, 1> __leave_targets;
	int32_t G_B7_0 = 0;
	{
		// m_Control = null;
		__this->set_m_Control_15((InputControl_t3CDD1115017147EEC9D825834637D7700669C006 *)NULL);
		// if (string.IsNullOrEmpty(m_ControlPath))
		String_t* L_0 = __this->get_m_ControlPath_13();
		bool L_1;
		L_1 = String_IsNullOrEmpty_m9AFBB5335B441B94E884B8A9D4A27AD60E3D7F7C(L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_0019;
		}
	}
	{
		// return;
		goto IL_0094;
	}

IL_0019:
	{
		// using (var candidates = InputSystem.FindControls(m_ControlPath))
		String_t* L_3 = __this->get_m_ControlPath_13();
		IL2CPP_RUNTIME_CLASS_INIT(InputSystem_t6F1EF32494CBBFE3270F03F3BF728BCADA04940D_il2cpp_TypeInfo_var);
		InputControlList_1_tC251485A8EBE20F32C1828D6F68B450DAB732E96  L_4;
		L_4 = InputSystem_FindControls_mF82293383D66046185D2C50219652A0BF05017F8(L_3, /*hidden argument*/NULL);
		V_1 = L_4;
	}

IL_0025:
	try
	{ // begin try (depth: 1)
		{
			// var numCandidates = candidates.Count;
			int32_t L_5;
			L_5 = InputControlList_1_get_Count_m6C41B033AC753606385ED7F9C15DC5C0960BE592_inline((InputControlList_1_tC251485A8EBE20F32C1828D6F68B450DAB732E96 *)(&V_1), /*hidden argument*/InputControlList_1_get_Count_m6C41B033AC753606385ED7F9C15DC5C0960BE592_RuntimeMethod_var);
			V_2 = L_5;
			// if (numCandidates > 1 && m_ControlIndex < numCandidates && m_ControlIndex >= 0)
			int32_t L_6 = V_2;
			if ((((int32_t)L_6) <= ((int32_t)1)))
			{
				goto IL_0049;
			}
		}

IL_0032:
		{
			int32_t L_7 = __this->get_m_ControlIndex_14();
			int32_t L_8 = V_2;
			if ((((int32_t)L_7) >= ((int32_t)L_8)))
			{
				goto IL_0049;
			}
		}

IL_003b:
		{
			int32_t L_9 = __this->get_m_ControlIndex_14();
			G_B7_0 = ((((int32_t)((((int32_t)L_9) < ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0);
			goto IL_004a;
		}

IL_0049:
		{
			G_B7_0 = 0;
		}

IL_004a:
		{
			V_3 = (bool)G_B7_0;
			bool L_10 = V_3;
			if (!L_10)
			{
				goto IL_0063;
			}
		}

IL_004e:
		{
			// m_Control = candidates[m_ControlIndex];
			int32_t L_11 = __this->get_m_ControlIndex_14();
			InputControl_t3CDD1115017147EEC9D825834637D7700669C006 * L_12;
			L_12 = InputControlList_1_get_Item_mA00C10A722E15D8FACC324A8042364DC6BC8CC20((InputControlList_1_tC251485A8EBE20F32C1828D6F68B450DAB732E96 *)(&V_1), L_11, /*hidden argument*/InputControlList_1_get_Item_mA00C10A722E15D8FACC324A8042364DC6BC8CC20_RuntimeMethod_var);
			__this->set_m_Control_15(L_12);
			goto IL_007b;
		}

IL_0063:
		{
			// else if (numCandidates > 0)
			int32_t L_13 = V_2;
			V_4 = (bool)((((int32_t)L_13) > ((int32_t)0))? 1 : 0);
			bool L_14 = V_4;
			if (!L_14)
			{
				goto IL_007b;
			}
		}

IL_006d:
		{
			// m_Control = candidates[0];
			InputControl_t3CDD1115017147EEC9D825834637D7700669C006 * L_15;
			L_15 = InputControlList_1_get_Item_mA00C10A722E15D8FACC324A8042364DC6BC8CC20((InputControlList_1_tC251485A8EBE20F32C1828D6F68B450DAB732E96 *)(&V_1), 0, /*hidden argument*/InputControlList_1_get_Item_mA00C10A722E15D8FACC324A8042364DC6BC8CC20_RuntimeMethod_var);
			__this->set_m_Control_15(L_15);
		}

IL_007b:
		{
			IL2CPP_LEAVE(0x8D, FINALLY_007e);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_007e;
	}

FINALLY_007e:
	{ // begin finally (depth: 1)
		InputControlList_1_Dispose_m89933A9B868B8E5D9EF0C8528B85D5A308169127((InputControlList_1_tC251485A8EBE20F32C1828D6F68B450DAB732E96 *)(&V_1), /*hidden argument*/InputControlList_1_Dispose_m89933A9B868B8E5D9EF0C8528B85D5A308169127_RuntimeMethod_var);
		IL2CPP_END_FINALLY(126)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(126)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x8D, IL_008d)
	}

IL_008d:
	{
		// SetupVisualizer();
		InputControlVisualizer_SetupVisualizer_m3E23B649646E07919F7D988D55DE005D24F5ECE7(__this, /*hidden argument*/NULL);
	}

IL_0094:
	{
		// }
		return;
	}
}
// System.Void UnityEngine.InputSystem.Samples.InputControlVisualizer::SetupVisualizer()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InputControlVisualizer_SetupVisualizer_m3E23B649646E07919F7D988D55DE005D24F5ECE7 (InputControlVisualizer_t83B42575FEC0B8A79280A7D5AE2886C0494BC6AF * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GUIContent_t39256993BF4A33F76E073488D6A2F13D678DF60E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ScalarVisualizer_1__ctor_m2980C02FB3A3B4FF9DDF664DE2D5C2B4EE6F9872_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ScalarVisualizer_1__ctor_m2AF7C1BBF921A1693F885C380A15AC214205E430_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ScalarVisualizer_1_t0A41B5E8896145168954EDE0B3253E18A0572203_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ScalarVisualizer_1_tE953A574A31F5BCD8A798C67C82BE1940BBE698B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Single_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TimelineVisualizer_tDCF8FE655A93D562471977C145A8B989803EA315_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector2Visualizer_t4F4D343145C411ED0B1D42FF5AEF4E5303BA9EFC_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5BFB046F8A244A5090ECD5F19EF3A6A728E2F5B7);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral77B615B8ED1ABB8FC1395D85A5AE524A9789D947);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralAF29A356E2E2350A3712E86EFEC38A631035EEDC);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC5A3783CC15F62D9BA371F6EB72C7E9BDC2E4BD0);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCB6A2B38DC2432574D81DC487BCF0A5E25DE305E);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	Type_t * V_3 = NULL;
	bool V_4 = false;
	bool V_5 = false;
	bool V_6 = false;
	TimelineVisualizer_tDCF8FE655A93D562471977C145A8B989803EA315 * V_7 = NULL;
	TimelineVisualizer_tDCF8FE655A93D562471977C145A8B989803EA315 * V_8 = NULL;
	TimelineVisualizer_tDCF8FE655A93D562471977C145A8B989803EA315 * V_9 = NULL;
	{
		// if (m_Control == null)
		InputControl_t3CDD1115017147EEC9D825834637D7700669C006 * L_0 = __this->get_m_Control_15();
		V_0 = (bool)((((RuntimeObject*)(InputControl_t3CDD1115017147EEC9D825834637D7700669C006 *)L_0) == ((RuntimeObject*)(RuntimeObject *)NULL))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_001b;
		}
	}
	{
		// m_Visualizer = null;
		((InputVisualizer_t51917CF1458037727EDDF8C090AEB773F3EAC29E *)__this)->set_m_Visualizer_9((Visualizer_t48757514E9C44C7B20B531BB6D2713A570AA8B74 *)NULL);
		// return;
		goto IL_0248;
	}

IL_001b:
	{
		// switch (m_Visualization)
		int32_t L_2 = __this->get_m_Visualization_12();
		V_2 = L_2;
		int32_t L_3 = V_2;
		V_1 = L_3;
		int32_t L_4 = V_1;
		switch (((int32_t)il2cpp_codegen_subtract((int32_t)L_4, (int32_t)1)))
		{
			case 0:
			{
				goto IL_004d;
			}
			case 1:
			{
				goto IL_0242;
			}
			case 2:
			{
				goto IL_0242;
			}
			case 3:
			{
				goto IL_0100;
			}
			case 4:
			{
				goto IL_0242;
			}
			case 5:
			{
				goto IL_0162;
			}
			case 6:
			{
				goto IL_01d2;
			}
		}
	}
	{
		goto IL_0242;
	}

IL_004d:
	{
		// var valueType = m_Control.valueType;
		InputControl_t3CDD1115017147EEC9D825834637D7700669C006 * L_5 = __this->get_m_Control_15();
		NullCheck(L_5);
		Type_t * L_6;
		L_6 = VirtFuncInvoker0< Type_t * >::Invoke(4 /* System.Type UnityEngine.InputSystem.InputControl::get_valueType() */, L_5);
		V_3 = L_6;
		// if (valueType == typeof(Vector2))
		Type_t * L_7 = V_3;
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_8 = { reinterpret_cast<intptr_t> (Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_9;
		L_9 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E(L_8, /*hidden argument*/NULL);
		bool L_10;
		L_10 = Type_op_Equality_mA438719A1FDF103C7BBBB08AEF564E7FAEEA0046(L_7, L_9, /*hidden argument*/NULL);
		V_4 = L_10;
		bool L_11 = V_4;
		if (!L_11)
		{
			goto IL_0083;
		}
	}
	{
		// m_Visualizer = new VisualizationHelpers.Vector2Visualizer(m_HistorySamples);
		int32_t L_12 = ((InputVisualizer_t51917CF1458037727EDDF8C090AEB773F3EAC29E *)__this)->get_m_HistorySamples_5();
		Vector2Visualizer_t4F4D343145C411ED0B1D42FF5AEF4E5303BA9EFC * L_13 = (Vector2Visualizer_t4F4D343145C411ED0B1D42FF5AEF4E5303BA9EFC *)il2cpp_codegen_object_new(Vector2Visualizer_t4F4D343145C411ED0B1D42FF5AEF4E5303BA9EFC_il2cpp_TypeInfo_var);
		Vector2Visualizer__ctor_mC2753BF29D07F05BB1D6BBF86553AA6518AB0410(L_13, L_12, /*hidden argument*/NULL);
		((InputVisualizer_t51917CF1458037727EDDF8C090AEB773F3EAC29E *)__this)->set_m_Visualizer_9(L_13);
		goto IL_00fb;
	}

IL_0083:
	{
		// else if (valueType == typeof(float))
		Type_t * L_14 = V_3;
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_15 = { reinterpret_cast<intptr_t> (Single_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_16;
		L_16 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E(L_15, /*hidden argument*/NULL);
		bool L_17;
		L_17 = Type_op_Equality_mA438719A1FDF103C7BBBB08AEF564E7FAEEA0046(L_14, L_16, /*hidden argument*/NULL);
		V_5 = L_17;
		bool L_18 = V_5;
		if (!L_18)
		{
			goto IL_00c2;
		}
	}
	{
		// m_Visualizer = new VisualizationHelpers.ScalarVisualizer<float>(m_HistorySamples)
		// {
		//     ////TODO: pass actual min/max limits of control
		//     limitMax = 1,
		//     limitMin = 0
		// };
		int32_t L_19 = ((InputVisualizer_t51917CF1458037727EDDF8C090AEB773F3EAC29E *)__this)->get_m_HistorySamples_5();
		ScalarVisualizer_1_tE953A574A31F5BCD8A798C67C82BE1940BBE698B * L_20 = (ScalarVisualizer_1_tE953A574A31F5BCD8A798C67C82BE1940BBE698B *)il2cpp_codegen_object_new(ScalarVisualizer_1_tE953A574A31F5BCD8A798C67C82BE1940BBE698B_il2cpp_TypeInfo_var);
		ScalarVisualizer_1__ctor_m2AF7C1BBF921A1693F885C380A15AC214205E430(L_20, L_19, /*hidden argument*/ScalarVisualizer_1__ctor_m2AF7C1BBF921A1693F885C380A15AC214205E430_RuntimeMethod_var);
		ScalarVisualizer_1_tE953A574A31F5BCD8A798C67C82BE1940BBE698B * L_21 = L_20;
		NullCheck(L_21);
		L_21->set_limitMax_3((1.0f));
		ScalarVisualizer_1_tE953A574A31F5BCD8A798C67C82BE1940BBE698B * L_22 = L_21;
		NullCheck(L_22);
		L_22->set_limitMin_2((0.0f));
		((InputVisualizer_t51917CF1458037727EDDF8C090AEB773F3EAC29E *)__this)->set_m_Visualizer_9(L_22);
		goto IL_00fb;
	}

IL_00c2:
	{
		// else if (valueType == typeof(int))
		Type_t * L_23 = V_3;
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_24 = { reinterpret_cast<intptr_t> (Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_25;
		L_25 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E(L_24, /*hidden argument*/NULL);
		bool L_26;
		L_26 = Type_op_Equality_mA438719A1FDF103C7BBBB08AEF564E7FAEEA0046(L_23, L_25, /*hidden argument*/NULL);
		V_6 = L_26;
		bool L_27 = V_6;
		if (!L_27)
		{
			goto IL_00f9;
		}
	}
	{
		// m_Visualizer = new VisualizationHelpers.ScalarVisualizer<int>(m_HistorySamples)
		// {
		//     ////TODO: pass actual min/max limits of control
		//     limitMax = 1,
		//     limitMin = 0
		// };
		int32_t L_28 = ((InputVisualizer_t51917CF1458037727EDDF8C090AEB773F3EAC29E *)__this)->get_m_HistorySamples_5();
		ScalarVisualizer_1_t0A41B5E8896145168954EDE0B3253E18A0572203 * L_29 = (ScalarVisualizer_1_t0A41B5E8896145168954EDE0B3253E18A0572203 *)il2cpp_codegen_object_new(ScalarVisualizer_1_t0A41B5E8896145168954EDE0B3253E18A0572203_il2cpp_TypeInfo_var);
		ScalarVisualizer_1__ctor_m2980C02FB3A3B4FF9DDF664DE2D5C2B4EE6F9872(L_29, L_28, /*hidden argument*/ScalarVisualizer_1__ctor_m2980C02FB3A3B4FF9DDF664DE2D5C2B4EE6F9872_RuntimeMethod_var);
		ScalarVisualizer_1_t0A41B5E8896145168954EDE0B3253E18A0572203 * L_30 = L_29;
		NullCheck(L_30);
		L_30->set_limitMax_3(1);
		ScalarVisualizer_1_t0A41B5E8896145168954EDE0B3253E18A0572203 * L_31 = L_30;
		NullCheck(L_31);
		L_31->set_limitMin_2(0);
		((InputVisualizer_t51917CF1458037727EDDF8C090AEB773F3EAC29E *)__this)->set_m_Visualizer_9(L_31);
		goto IL_00fb;
	}

IL_00f9:
	{
	}

IL_00fb:
	{
		// break;
		goto IL_0248;
	}

IL_0100:
	{
		// var visualizer = new VisualizationHelpers.TimelineVisualizer(m_HistorySamples)
		// {
		//     timeUnit = VisualizationHelpers.TimelineVisualizer.TimeUnit.Frames,
		//     historyDepth = m_HistorySamples,
		//     showLimits = true,
		//     limitsY = new Vector2(0, 5) // Will expand upward automatically
		// };
		int32_t L_32 = ((InputVisualizer_t51917CF1458037727EDDF8C090AEB773F3EAC29E *)__this)->get_m_HistorySamples_5();
		TimelineVisualizer_tDCF8FE655A93D562471977C145A8B989803EA315 * L_33 = (TimelineVisualizer_tDCF8FE655A93D562471977C145A8B989803EA315 *)il2cpp_codegen_object_new(TimelineVisualizer_tDCF8FE655A93D562471977C145A8B989803EA315_il2cpp_TypeInfo_var);
		TimelineVisualizer__ctor_mE49C33F4374AF61480A4C1CD7DB5B933366293BA(L_33, ((float)((float)L_32)), /*hidden argument*/NULL);
		TimelineVisualizer_tDCF8FE655A93D562471977C145A8B989803EA315 * L_34 = L_33;
		NullCheck(L_34);
		TimelineVisualizer_set_timeUnit_mD5522FB42266C562986C4F6D4849199FDB86A2CC_inline(L_34, 1, /*hidden argument*/NULL);
		TimelineVisualizer_tDCF8FE655A93D562471977C145A8B989803EA315 * L_35 = L_34;
		int32_t L_36 = ((InputVisualizer_t51917CF1458037727EDDF8C090AEB773F3EAC29E *)__this)->get_m_HistorySamples_5();
		NullCheck(L_35);
		TimelineVisualizer_set_historyDepth_m5D8C6D1A1D48F2232A428683AB5F9DB2C6043083_inline(L_35, L_36, /*hidden argument*/NULL);
		TimelineVisualizer_tDCF8FE655A93D562471977C145A8B989803EA315 * L_37 = L_35;
		NullCheck(L_37);
		TimelineVisualizer_set_showLimits_m5C5222B165A6EEB20C2BD897D29E3A0D8D409AC3_inline(L_37, (bool)1, /*hidden argument*/NULL);
		TimelineVisualizer_tDCF8FE655A93D562471977C145A8B989803EA315 * L_38 = L_37;
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_39;
		memset((&L_39), 0, sizeof(L_39));
		Vector2__ctor_m9F1F2D5EB5D1FF7091BB527AC8A72CBB309D115E_inline((&L_39), (0.0f), (5.0f), /*hidden argument*/NULL);
		NullCheck(L_38);
		TimelineVisualizer_set_limitsY_mBC2A875F5B15BBFA8AF8D385765F01A24489A376(L_38, L_39, /*hidden argument*/NULL);
		V_7 = L_38;
		// m_Visualizer = visualizer;
		TimelineVisualizer_tDCF8FE655A93D562471977C145A8B989803EA315 * L_40 = V_7;
		((InputVisualizer_t51917CF1458037727EDDF8C090AEB773F3EAC29E *)__this)->set_m_Visualizer_9(L_40);
		// visualizer.AddTimeline("Events", Color.green,
		//     VisualizationHelpers.TimelineVisualizer.PlotType.BarChart);
		TimelineVisualizer_tDCF8FE655A93D562471977C145A8B989803EA315 * L_41 = V_7;
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_42;
		L_42 = Color_get_green_mFF9BD42534D385A0717B1EAD083ADF08712984B9(/*hidden argument*/NULL);
		NullCheck(L_41);
		int32_t L_43;
		L_43 = TimelineVisualizer_AddTimeline_mB61A89F5E28EDA9F1BE4A85B5AD626E15B00353C(L_41, _stringLiteralC5A3783CC15F62D9BA371F6EB72C7E9BDC2E4BD0, L_42, 1, /*hidden argument*/NULL);
		// break;
		goto IL_0248;
	}

IL_0162:
	{
		// var visualizer = new VisualizationHelpers.TimelineVisualizer(m_HistorySamples)
		// {
		//     timeUnit = VisualizationHelpers.TimelineVisualizer.TimeUnit.Frames,
		//     historyDepth = m_HistorySamples,
		//     valueUnit = new GUIContent("ms"),
		//     showLimits = true,
		//     limitsY = new Vector2(0, 6)
		// };
		int32_t L_44 = ((InputVisualizer_t51917CF1458037727EDDF8C090AEB773F3EAC29E *)__this)->get_m_HistorySamples_5();
		TimelineVisualizer_tDCF8FE655A93D562471977C145A8B989803EA315 * L_45 = (TimelineVisualizer_tDCF8FE655A93D562471977C145A8B989803EA315 *)il2cpp_codegen_object_new(TimelineVisualizer_tDCF8FE655A93D562471977C145A8B989803EA315_il2cpp_TypeInfo_var);
		TimelineVisualizer__ctor_mE49C33F4374AF61480A4C1CD7DB5B933366293BA(L_45, ((float)((float)L_44)), /*hidden argument*/NULL);
		TimelineVisualizer_tDCF8FE655A93D562471977C145A8B989803EA315 * L_46 = L_45;
		NullCheck(L_46);
		TimelineVisualizer_set_timeUnit_mD5522FB42266C562986C4F6D4849199FDB86A2CC_inline(L_46, 1, /*hidden argument*/NULL);
		TimelineVisualizer_tDCF8FE655A93D562471977C145A8B989803EA315 * L_47 = L_46;
		int32_t L_48 = ((InputVisualizer_t51917CF1458037727EDDF8C090AEB773F3EAC29E *)__this)->get_m_HistorySamples_5();
		NullCheck(L_47);
		TimelineVisualizer_set_historyDepth_m5D8C6D1A1D48F2232A428683AB5F9DB2C6043083_inline(L_47, L_48, /*hidden argument*/NULL);
		TimelineVisualizer_tDCF8FE655A93D562471977C145A8B989803EA315 * L_49 = L_47;
		GUIContent_t39256993BF4A33F76E073488D6A2F13D678DF60E * L_50 = (GUIContent_t39256993BF4A33F76E073488D6A2F13D678DF60E *)il2cpp_codegen_object_new(GUIContent_t39256993BF4A33F76E073488D6A2F13D678DF60E_il2cpp_TypeInfo_var);
		GUIContent__ctor_m3FABF20C213051E685B41CA898A20885E02111F0(L_50, _stringLiteral5BFB046F8A244A5090ECD5F19EF3A6A728E2F5B7, /*hidden argument*/NULL);
		NullCheck(L_49);
		TimelineVisualizer_set_valueUnit_m68DEDAC6246114169451B77BAA89C357E8F57E37_inline(L_49, L_50, /*hidden argument*/NULL);
		TimelineVisualizer_tDCF8FE655A93D562471977C145A8B989803EA315 * L_51 = L_49;
		NullCheck(L_51);
		TimelineVisualizer_set_showLimits_m5C5222B165A6EEB20C2BD897D29E3A0D8D409AC3_inline(L_51, (bool)1, /*hidden argument*/NULL);
		TimelineVisualizer_tDCF8FE655A93D562471977C145A8B989803EA315 * L_52 = L_51;
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_53;
		memset((&L_53), 0, sizeof(L_53));
		Vector2__ctor_m9F1F2D5EB5D1FF7091BB527AC8A72CBB309D115E_inline((&L_53), (0.0f), (6.0f), /*hidden argument*/NULL);
		NullCheck(L_52);
		TimelineVisualizer_set_limitsY_mBC2A875F5B15BBFA8AF8D385765F01A24489A376(L_52, L_53, /*hidden argument*/NULL);
		V_8 = L_52;
		// m_Visualizer = visualizer;
		TimelineVisualizer_tDCF8FE655A93D562471977C145A8B989803EA315 * L_54 = V_8;
		((InputVisualizer_t51917CF1458037727EDDF8C090AEB773F3EAC29E *)__this)->set_m_Visualizer_9(L_54);
		// visualizer.AddTimeline("MaxLag", Color.red,
		//     VisualizationHelpers.TimelineVisualizer.PlotType.BarChart);
		TimelineVisualizer_tDCF8FE655A93D562471977C145A8B989803EA315 * L_55 = V_8;
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_56;
		L_56 = Color_get_red_m9BD55EBF7A74A515330FA5F7AC7A67C8A8913DD8(/*hidden argument*/NULL);
		NullCheck(L_55);
		int32_t L_57;
		L_57 = TimelineVisualizer_AddTimeline_mB61A89F5E28EDA9F1BE4A85B5AD626E15B00353C(L_55, _stringLiteralCB6A2B38DC2432574D81DC487BCF0A5E25DE305E, L_56, 1, /*hidden argument*/NULL);
		// break;
		goto IL_0248;
	}

IL_01d2:
	{
		// var visualizer = new VisualizationHelpers.TimelineVisualizer(m_HistorySamples)
		// {
		//     timeUnit = VisualizationHelpers.TimelineVisualizer.TimeUnit.Frames,
		//     valueUnit = new GUIContent("bytes"),
		//     historyDepth = m_HistorySamples,
		//     showLimits = true,
		//     limitsY = new Vector2(0, 64)
		// };
		int32_t L_58 = ((InputVisualizer_t51917CF1458037727EDDF8C090AEB773F3EAC29E *)__this)->get_m_HistorySamples_5();
		TimelineVisualizer_tDCF8FE655A93D562471977C145A8B989803EA315 * L_59 = (TimelineVisualizer_tDCF8FE655A93D562471977C145A8B989803EA315 *)il2cpp_codegen_object_new(TimelineVisualizer_tDCF8FE655A93D562471977C145A8B989803EA315_il2cpp_TypeInfo_var);
		TimelineVisualizer__ctor_mE49C33F4374AF61480A4C1CD7DB5B933366293BA(L_59, ((float)((float)L_58)), /*hidden argument*/NULL);
		TimelineVisualizer_tDCF8FE655A93D562471977C145A8B989803EA315 * L_60 = L_59;
		NullCheck(L_60);
		TimelineVisualizer_set_timeUnit_mD5522FB42266C562986C4F6D4849199FDB86A2CC_inline(L_60, 1, /*hidden argument*/NULL);
		TimelineVisualizer_tDCF8FE655A93D562471977C145A8B989803EA315 * L_61 = L_60;
		GUIContent_t39256993BF4A33F76E073488D6A2F13D678DF60E * L_62 = (GUIContent_t39256993BF4A33F76E073488D6A2F13D678DF60E *)il2cpp_codegen_object_new(GUIContent_t39256993BF4A33F76E073488D6A2F13D678DF60E_il2cpp_TypeInfo_var);
		GUIContent__ctor_m3FABF20C213051E685B41CA898A20885E02111F0(L_62, _stringLiteral77B615B8ED1ABB8FC1395D85A5AE524A9789D947, /*hidden argument*/NULL);
		NullCheck(L_61);
		TimelineVisualizer_set_valueUnit_m68DEDAC6246114169451B77BAA89C357E8F57E37_inline(L_61, L_62, /*hidden argument*/NULL);
		TimelineVisualizer_tDCF8FE655A93D562471977C145A8B989803EA315 * L_63 = L_61;
		int32_t L_64 = ((InputVisualizer_t51917CF1458037727EDDF8C090AEB773F3EAC29E *)__this)->get_m_HistorySamples_5();
		NullCheck(L_63);
		TimelineVisualizer_set_historyDepth_m5D8C6D1A1D48F2232A428683AB5F9DB2C6043083_inline(L_63, L_64, /*hidden argument*/NULL);
		TimelineVisualizer_tDCF8FE655A93D562471977C145A8B989803EA315 * L_65 = L_63;
		NullCheck(L_65);
		TimelineVisualizer_set_showLimits_m5C5222B165A6EEB20C2BD897D29E3A0D8D409AC3_inline(L_65, (bool)1, /*hidden argument*/NULL);
		TimelineVisualizer_tDCF8FE655A93D562471977C145A8B989803EA315 * L_66 = L_65;
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_67;
		memset((&L_67), 0, sizeof(L_67));
		Vector2__ctor_m9F1F2D5EB5D1FF7091BB527AC8A72CBB309D115E_inline((&L_67), (0.0f), (64.0f), /*hidden argument*/NULL);
		NullCheck(L_66);
		TimelineVisualizer_set_limitsY_mBC2A875F5B15BBFA8AF8D385765F01A24489A376(L_66, L_67, /*hidden argument*/NULL);
		V_9 = L_66;
		// m_Visualizer = visualizer;
		TimelineVisualizer_tDCF8FE655A93D562471977C145A8B989803EA315 * L_68 = V_9;
		((InputVisualizer_t51917CF1458037727EDDF8C090AEB773F3EAC29E *)__this)->set_m_Visualizer_9(L_68);
		// visualizer.AddTimeline("Bytes", Color.red,
		//     VisualizationHelpers.TimelineVisualizer.PlotType.BarChart);
		TimelineVisualizer_tDCF8FE655A93D562471977C145A8B989803EA315 * L_69 = V_9;
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_70;
		L_70 = Color_get_red_m9BD55EBF7A74A515330FA5F7AC7A67C8A8913DD8(/*hidden argument*/NULL);
		NullCheck(L_69);
		int32_t L_71;
		L_71 = TimelineVisualizer_AddTimeline_mB61A89F5E28EDA9F1BE4A85B5AD626E15B00353C(L_69, _stringLiteralAF29A356E2E2350A3712E86EFEC38A631035EEDC, L_70, 1, /*hidden argument*/NULL);
		// break;
		goto IL_0248;
	}

IL_0242:
	{
		// throw new NotImplementedException();
		NotImplementedException_t26260C4EE0444C5FA022994203060B3A42A3ADE6 * L_72 = (NotImplementedException_t26260C4EE0444C5FA022994203060B3A42A3ADE6 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotImplementedException_t26260C4EE0444C5FA022994203060B3A42A3ADE6_il2cpp_TypeInfo_var)));
		NotImplementedException__ctor_mA2E9CE7F00CB335581A296D2596082D57E45BA83(L_72, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_72, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InputControlVisualizer_SetupVisualizer_m3E23B649646E07919F7D988D55DE005D24F5ECE7_RuntimeMethod_var)));
	}

IL_0248:
	{
		// }
		return;
	}
}
// System.Void UnityEngine.InputSystem.Samples.InputControlVisualizer::OnDeviceChange(UnityEngine.InputSystem.InputDevice,UnityEngine.InputSystem.InputDeviceChange)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InputControlVisualizer_OnDeviceChange_m2966E6BA3CFDCFCB04449ED781D6D4A44EBEAA6F (InputDevice_t9E276EAE78C382539051998DEA1CD0ECF2E91323 * ___device0, int32_t ___change1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InputControlVisualizer_t83B42575FEC0B8A79280A7D5AE2886C0494BC6AF_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m69DE315A508A83D4D5285EDA046A2BC454A5A2C1_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_mDD32886AF1B275B69654CE61C1DDFB3542159D91_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	int32_t V_1 = 0;
	InputControlVisualizer_t83B42575FEC0B8A79280A7D5AE2886C0494BC6AF * V_2 = NULL;
	bool V_3 = false;
	bool V_4 = false;
	bool V_5 = false;
	int32_t G_B3_0 = 0;
	int32_t G_B10_0 = 0;
	{
		// if (change != InputDeviceChange.Added && change != InputDeviceChange.Removed)
		int32_t L_0 = ___change1;
		if (!L_0)
		{
			goto IL_000d;
		}
	}
	{
		int32_t L_1 = ___change1;
		G_B3_0 = ((((int32_t)((((int32_t)L_1) == ((int32_t)1))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		goto IL_000e;
	}

IL_000d:
	{
		G_B3_0 = 0;
	}

IL_000e:
	{
		V_0 = (bool)G_B3_0;
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_0014;
		}
	}
	{
		// return;
		goto IL_0078;
	}

IL_0014:
	{
		// for (var i = 0; i < s_EnabledInstances.Count; ++i)
		V_1 = 0;
		goto IL_0065;
	}

IL_0018:
	{
		// var component = s_EnabledInstances[i];
		List_1_tD92B93CD7F6D0E73500ED17BEEE90D9C77282117 * L_3 = ((InputControlVisualizer_t83B42575FEC0B8A79280A7D5AE2886C0494BC6AF_StaticFields*)il2cpp_codegen_static_fields_for(InputControlVisualizer_t83B42575FEC0B8A79280A7D5AE2886C0494BC6AF_il2cpp_TypeInfo_var))->get_s_EnabledInstances_16();
		int32_t L_4 = V_1;
		NullCheck(L_3);
		InputControlVisualizer_t83B42575FEC0B8A79280A7D5AE2886C0494BC6AF * L_5;
		L_5 = List_1_get_Item_mDD32886AF1B275B69654CE61C1DDFB3542159D91_inline(L_3, L_4, /*hidden argument*/List_1_get_Item_mDD32886AF1B275B69654CE61C1DDFB3542159D91_RuntimeMethod_var);
		V_2 = L_5;
		// if (change == InputDeviceChange.Removed && component.m_Control != null &&
		//     component.m_Control.device == device)
		int32_t L_6 = ___change1;
		if ((!(((uint32_t)L_6) == ((uint32_t)1))))
		{
			goto IL_0041;
		}
	}
	{
		InputControlVisualizer_t83B42575FEC0B8A79280A7D5AE2886C0494BC6AF * L_7 = V_2;
		NullCheck(L_7);
		InputControl_t3CDD1115017147EEC9D825834637D7700669C006 * L_8 = L_7->get_m_Control_15();
		if (!L_8)
		{
			goto IL_0041;
		}
	}
	{
		InputControlVisualizer_t83B42575FEC0B8A79280A7D5AE2886C0494BC6AF * L_9 = V_2;
		NullCheck(L_9);
		InputControl_t3CDD1115017147EEC9D825834637D7700669C006 * L_10 = L_9->get_m_Control_15();
		NullCheck(L_10);
		InputDevice_t9E276EAE78C382539051998DEA1CD0ECF2E91323 * L_11;
		L_11 = InputControl_get_device_m26988D04E8358B6DB6EE7EEDAEBEB7EB260FF29E_inline(L_10, /*hidden argument*/NULL);
		InputDevice_t9E276EAE78C382539051998DEA1CD0ECF2E91323 * L_12 = ___device0;
		G_B10_0 = ((((RuntimeObject*)(InputDevice_t9E276EAE78C382539051998DEA1CD0ECF2E91323 *)L_11) == ((RuntimeObject*)(InputDevice_t9E276EAE78C382539051998DEA1CD0ECF2E91323 *)L_12))? 1 : 0);
		goto IL_0042;
	}

IL_0041:
	{
		G_B10_0 = 0;
	}

IL_0042:
	{
		V_3 = (bool)G_B10_0;
		bool L_13 = V_3;
		if (!L_13)
		{
			goto IL_004f;
		}
	}
	{
		// component.ResolveControl();
		InputControlVisualizer_t83B42575FEC0B8A79280A7D5AE2886C0494BC6AF * L_14 = V_2;
		NullCheck(L_14);
		InputControlVisualizer_ResolveControl_m851068D92D77ED82D124F903BE33C36457F6DA86(L_14, /*hidden argument*/NULL);
		goto IL_0060;
	}

IL_004f:
	{
		// else if (change == InputDeviceChange.Added)
		int32_t L_15 = ___change1;
		V_4 = (bool)((((int32_t)L_15) == ((int32_t)0))? 1 : 0);
		bool L_16 = V_4;
		if (!L_16)
		{
			goto IL_0060;
		}
	}
	{
		// component.ResolveControl();
		InputControlVisualizer_t83B42575FEC0B8A79280A7D5AE2886C0494BC6AF * L_17 = V_2;
		NullCheck(L_17);
		InputControlVisualizer_ResolveControl_m851068D92D77ED82D124F903BE33C36457F6DA86(L_17, /*hidden argument*/NULL);
	}

IL_0060:
	{
		// for (var i = 0; i < s_EnabledInstances.Count; ++i)
		int32_t L_18 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_18, (int32_t)1));
	}

IL_0065:
	{
		// for (var i = 0; i < s_EnabledInstances.Count; ++i)
		int32_t L_19 = V_1;
		List_1_tD92B93CD7F6D0E73500ED17BEEE90D9C77282117 * L_20 = ((InputControlVisualizer_t83B42575FEC0B8A79280A7D5AE2886C0494BC6AF_StaticFields*)il2cpp_codegen_static_fields_for(InputControlVisualizer_t83B42575FEC0B8A79280A7D5AE2886C0494BC6AF_il2cpp_TypeInfo_var))->get_s_EnabledInstances_16();
		NullCheck(L_20);
		int32_t L_21;
		L_21 = List_1_get_Count_m69DE315A508A83D4D5285EDA046A2BC454A5A2C1_inline(L_20, /*hidden argument*/List_1_get_Count_m69DE315A508A83D4D5285EDA046A2BC454A5A2C1_RuntimeMethod_var);
		V_5 = (bool)((((int32_t)L_19) < ((int32_t)L_21))? 1 : 0);
		bool L_22 = V_5;
		if (L_22)
		{
			goto IL_0018;
		}
	}

IL_0078:
	{
		// }
		return;
	}
}
// System.Void UnityEngine.InputSystem.Samples.InputControlVisualizer::OnEvent(UnityEngine.InputSystem.LowLevel.InputEventPtr,UnityEngine.InputSystem.InputDevice)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InputControlVisualizer_OnEvent_mAA88F1CC6BC21555C7AF65C7C4C58DB8BDFE7516 (InputEventPtr_tC7799829CE3FDCA9E191C7BC946ABE0DB17B377D  ___eventPtr0, InputDevice_t9E276EAE78C382539051998DEA1CD0ECF2E91323 * ___device1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InputControlVisualizer_t83B42575FEC0B8A79280A7D5AE2886C0494BC6AF_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InputEventPtr_IsA_TisDeltaStateEvent_t8CA8FF8F0CF816316C0682FE4A0387DB02D3334A_m95E3ABAF4B7FAAAE53BCCFF687591BBDCB587CC8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InputEventPtr_IsA_TisStateEvent_t5FC3789364630893748679234A6A7FDE4BA64B70_mB234D9EBB5E6AE99FF42493115B2BFCA7609026A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m69DE315A508A83D4D5285EDA046A2BC454A5A2C1_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_mDD32886AF1B275B69654CE61C1DDFB3542159D91_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	bool V_2 = false;
	int32_t V_3 = 0;
	InputControlVisualizer_t83B42575FEC0B8A79280A7D5AE2886C0494BC6AF * V_4 = NULL;
	bool V_5 = false;
	bool V_6 = false;
	int32_t G_B7_0 = 0;
	InputControl_t3CDD1115017147EEC9D825834637D7700669C006 * G_B12_0 = NULL;
	InputControl_t3CDD1115017147EEC9D825834637D7700669C006 * G_B11_0 = NULL;
	InputDevice_t9E276EAE78C382539051998DEA1CD0ECF2E91323 * G_B13_0 = NULL;
	int32_t G_B16_0 = 0;
	{
		// if (InputState.updateCount <= 1)
		uint32_t L_0;
		L_0 = InputState_get_updateCount_m53C26B51E7177C1189A0E0562045F6F17522492A_inline(/*hidden argument*/NULL);
		V_0 = (bool)((((int32_t)((!(((uint32_t)L_0) <= ((uint32_t)1)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0015;
		}
	}
	{
		// return;
		goto IL_009d;
	}

IL_0015:
	{
		// if (InputState.currentUpdateType == InputUpdateType.Editor)
		int32_t L_2;
		L_2 = InputState_get_currentUpdateType_m502606CAA93CC4E4AB22DB61B88BD9C2C3A27AD9_inline(/*hidden argument*/NULL);
		V_1 = (bool)((((int32_t)L_2) == ((int32_t)8))? 1 : 0);
		bool L_3 = V_1;
		if (!L_3)
		{
			goto IL_0023;
		}
	}
	{
		// return;
		goto IL_009d;
	}

IL_0023:
	{
		// if (!eventPtr.IsA<StateEvent>() && !eventPtr.IsA<DeltaStateEvent>())
		bool L_4;
		L_4 = InputEventPtr_IsA_TisStateEvent_t5FC3789364630893748679234A6A7FDE4BA64B70_mB234D9EBB5E6AE99FF42493115B2BFCA7609026A((InputEventPtr_tC7799829CE3FDCA9E191C7BC946ABE0DB17B377D *)(&___eventPtr0), /*hidden argument*/InputEventPtr_IsA_TisStateEvent_t5FC3789364630893748679234A6A7FDE4BA64B70_mB234D9EBB5E6AE99FF42493115B2BFCA7609026A_RuntimeMethod_var);
		if (L_4)
		{
			goto IL_0038;
		}
	}
	{
		bool L_5;
		L_5 = InputEventPtr_IsA_TisDeltaStateEvent_t8CA8FF8F0CF816316C0682FE4A0387DB02D3334A_m95E3ABAF4B7FAAAE53BCCFF687591BBDCB587CC8((InputEventPtr_tC7799829CE3FDCA9E191C7BC946ABE0DB17B377D *)(&___eventPtr0), /*hidden argument*/InputEventPtr_IsA_TisDeltaStateEvent_t8CA8FF8F0CF816316C0682FE4A0387DB02D3334A_m95E3ABAF4B7FAAAE53BCCFF687591BBDCB587CC8_RuntimeMethod_var);
		G_B7_0 = ((((int32_t)L_5) == ((int32_t)0))? 1 : 0);
		goto IL_0039;
	}

IL_0038:
	{
		G_B7_0 = 0;
	}

IL_0039:
	{
		V_2 = (bool)G_B7_0;
		bool L_6 = V_2;
		if (!L_6)
		{
			goto IL_003f;
		}
	}
	{
		// return;
		goto IL_009d;
	}

IL_003f:
	{
		// for (var i = 0; i < s_EnabledInstances.Count; ++i)
		V_3 = 0;
		goto IL_008a;
	}

IL_0043:
	{
		// var component = s_EnabledInstances[i];
		List_1_tD92B93CD7F6D0E73500ED17BEEE90D9C77282117 * L_7 = ((InputControlVisualizer_t83B42575FEC0B8A79280A7D5AE2886C0494BC6AF_StaticFields*)il2cpp_codegen_static_fields_for(InputControlVisualizer_t83B42575FEC0B8A79280A7D5AE2886C0494BC6AF_il2cpp_TypeInfo_var))->get_s_EnabledInstances_16();
		int32_t L_8 = V_3;
		NullCheck(L_7);
		InputControlVisualizer_t83B42575FEC0B8A79280A7D5AE2886C0494BC6AF * L_9;
		L_9 = List_1_get_Item_mDD32886AF1B275B69654CE61C1DDFB3542159D91_inline(L_7, L_8, /*hidden argument*/List_1_get_Item_mDD32886AF1B275B69654CE61C1DDFB3542159D91_RuntimeMethod_var);
		V_4 = L_9;
		// if (component.m_Control?.device != device || component.m_Visualizer == null)
		InputControlVisualizer_t83B42575FEC0B8A79280A7D5AE2886C0494BC6AF * L_10 = V_4;
		NullCheck(L_10);
		InputControl_t3CDD1115017147EEC9D825834637D7700669C006 * L_11 = L_10->get_m_Control_15();
		InputControl_t3CDD1115017147EEC9D825834637D7700669C006 * L_12 = L_11;
		G_B11_0 = L_12;
		if (L_12)
		{
			G_B12_0 = L_12;
			goto IL_005f;
		}
	}
	{
		G_B13_0 = ((InputDevice_t9E276EAE78C382539051998DEA1CD0ECF2E91323 *)(NULL));
		goto IL_0064;
	}

IL_005f:
	{
		NullCheck(G_B12_0);
		InputDevice_t9E276EAE78C382539051998DEA1CD0ECF2E91323 * L_13;
		L_13 = InputControl_get_device_m26988D04E8358B6DB6EE7EEDAEBEB7EB260FF29E_inline(G_B12_0, /*hidden argument*/NULL);
		G_B13_0 = L_13;
	}

IL_0064:
	{
		InputDevice_t9E276EAE78C382539051998DEA1CD0ECF2E91323 * L_14 = ___device1;
		if ((!(((RuntimeObject*)(InputDevice_t9E276EAE78C382539051998DEA1CD0ECF2E91323 *)G_B13_0) == ((RuntimeObject*)(InputDevice_t9E276EAE78C382539051998DEA1CD0ECF2E91323 *)L_14))))
		{
			goto IL_0073;
		}
	}
	{
		InputControlVisualizer_t83B42575FEC0B8A79280A7D5AE2886C0494BC6AF * L_15 = V_4;
		NullCheck(L_15);
		Visualizer_t48757514E9C44C7B20B531BB6D2713A570AA8B74 * L_16 = ((InputVisualizer_t51917CF1458037727EDDF8C090AEB773F3EAC29E *)L_15)->get_m_Visualizer_9();
		G_B16_0 = ((((RuntimeObject*)(Visualizer_t48757514E9C44C7B20B531BB6D2713A570AA8B74 *)L_16) == ((RuntimeObject*)(RuntimeObject *)NULL))? 1 : 0);
		goto IL_0074;
	}

IL_0073:
	{
		G_B16_0 = 1;
	}

IL_0074:
	{
		V_5 = (bool)G_B16_0;
		bool L_17 = V_5;
		if (!L_17)
		{
			goto IL_007c;
		}
	}
	{
		// continue;
		goto IL_0086;
	}

IL_007c:
	{
		// component.OnEventImpl(eventPtr);
		InputControlVisualizer_t83B42575FEC0B8A79280A7D5AE2886C0494BC6AF * L_18 = V_4;
		InputEventPtr_tC7799829CE3FDCA9E191C7BC946ABE0DB17B377D  L_19 = ___eventPtr0;
		NullCheck(L_18);
		InputControlVisualizer_OnEventImpl_mE19EB1CBBFF48EA6FA7229DF80D96C8E424675A2(L_18, L_19, /*hidden argument*/NULL);
	}

IL_0086:
	{
		// for (var i = 0; i < s_EnabledInstances.Count; ++i)
		int32_t L_20 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add((int32_t)L_20, (int32_t)1));
	}

IL_008a:
	{
		// for (var i = 0; i < s_EnabledInstances.Count; ++i)
		int32_t L_21 = V_3;
		List_1_tD92B93CD7F6D0E73500ED17BEEE90D9C77282117 * L_22 = ((InputControlVisualizer_t83B42575FEC0B8A79280A7D5AE2886C0494BC6AF_StaticFields*)il2cpp_codegen_static_fields_for(InputControlVisualizer_t83B42575FEC0B8A79280A7D5AE2886C0494BC6AF_il2cpp_TypeInfo_var))->get_s_EnabledInstances_16();
		NullCheck(L_22);
		int32_t L_23;
		L_23 = List_1_get_Count_m69DE315A508A83D4D5285EDA046A2BC454A5A2C1_inline(L_22, /*hidden argument*/List_1_get_Count_m69DE315A508A83D4D5285EDA046A2BC454A5A2C1_RuntimeMethod_var);
		V_6 = (bool)((((int32_t)L_21) < ((int32_t)L_23))? 1 : 0);
		bool L_24 = V_6;
		if (L_24)
		{
			goto IL_0043;
		}
	}

IL_009d:
	{
		// }
		return;
	}
}
// System.Void UnityEngine.InputSystem.Samples.InputControlVisualizer::OnEventImpl(UnityEngine.InputSystem.LowLevel.InputEventPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InputControlVisualizer_OnEventImpl_mE19EB1CBBFF48EA6FA7229DF80D96C8E424675A2 (InputControlVisualizer_t83B42575FEC0B8A79280A7D5AE2886C0494BC6AF * __this, InputEventPtr_tC7799829CE3FDCA9E191C7BC946ABE0DB17B377D  ___eventPtr0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TimelineVisualizer_tDCF8FE655A93D562471977C145A8B989803EA315_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	void* V_2 = NULL;
	RuntimeObject * V_3 = NULL;
	bool V_4 = false;
	TimelineVisualizer_tDCF8FE655A93D562471977C145A8B989803EA315 * V_5 = NULL;
	int32_t V_6 = 0;
	PrimitiveValue_tB787C76E9A37444599C45519DD7E4D3A1D4730C8 * V_7 = NULL;
	int32_t V_8 = 0;
	TimelineVisualizer_tDCF8FE655A93D562471977C145A8B989803EA315 * V_9 = NULL;
	double V_10 = 0.0;
	int32_t V_11 = 0;
	PrimitiveValue_tB787C76E9A37444599C45519DD7E4D3A1D4730C8 * V_12 = NULL;
	bool V_13 = false;
	bool V_14 = false;
	TimelineVisualizer_tDCF8FE655A93D562471977C145A8B989803EA315 * V_15 = NULL;
	int32_t V_16 = 0;
	PrimitiveValue_tB787C76E9A37444599C45519DD7E4D3A1D4730C8 * V_17 = NULL;
	int64_t V_18 = 0;
	{
		// switch (m_Visualization)
		int32_t L_0 = __this->get_m_Visualization_12();
		V_1 = L_0;
		int32_t L_1 = V_1;
		V_0 = L_1;
		int32_t L_2 = V_0;
		switch (((int32_t)il2cpp_codegen_subtract((int32_t)L_2, (int32_t)1)))
		{
			case 0:
			{
				goto IL_0033;
			}
			case 1:
			{
				goto IL_01d8;
			}
			case 2:
			{
				goto IL_01d8;
			}
			case 3:
			{
				goto IL_0077;
			}
			case 4:
			{
				goto IL_01d8;
			}
			case 5:
			{
				goto IL_00dd;
			}
			case 6:
			{
				goto IL_016d;
			}
		}
	}
	{
		goto IL_01d8;
	}

IL_0033:
	{
		// var statePtr = m_Control.GetStatePtrFromStateEvent(eventPtr);
		InputControl_t3CDD1115017147EEC9D825834637D7700669C006 * L_3 = __this->get_m_Control_15();
		InputEventPtr_tC7799829CE3FDCA9E191C7BC946ABE0DB17B377D  L_4 = ___eventPtr0;
		void* L_5;
		L_5 = InputControlExtensions_GetStatePtrFromStateEvent_m4687E9C90A24AA3B9F4284A997AD41EB6ADED546(L_3, L_4, /*hidden argument*/NULL);
		V_2 = (void*)L_5;
		// if (statePtr == null)
		void* L_6 = V_2;
		V_4 = (bool)((((intptr_t)L_6) == ((intptr_t)((uintptr_t)0)))? 1 : 0);
		bool L_7 = V_4;
		if (!L_7)
		{
			goto IL_0051;
		}
	}
	{
		// return; // No value for control in event.
		goto IL_01d8;
	}

IL_0051:
	{
		// var value = m_Control.ReadValueFromStateAsObject(statePtr);
		InputControl_t3CDD1115017147EEC9D825834637D7700669C006 * L_8 = __this->get_m_Control_15();
		void* L_9 = V_2;
		NullCheck(L_8);
		RuntimeObject * L_10;
		L_10 = VirtFuncInvoker1< RuntimeObject *, void* >::Invoke(8 /* System.Object UnityEngine.InputSystem.InputControl::ReadValueFromStateAsObject(System.Void*) */, L_8, (void*)(void*)L_9);
		V_3 = L_10;
		// m_Visualizer.AddSample(value, eventPtr.time);
		Visualizer_t48757514E9C44C7B20B531BB6D2713A570AA8B74 * L_11 = ((InputVisualizer_t51917CF1458037727EDDF8C090AEB773F3EAC29E *)__this)->get_m_Visualizer_9();
		RuntimeObject * L_12 = V_3;
		double L_13;
		L_13 = InputEventPtr_get_time_m46BFA4C294BAC5945221DFF948B99C16BA97F0B3((InputEventPtr_tC7799829CE3FDCA9E191C7BC946ABE0DB17B377D *)(&___eventPtr0), /*hidden argument*/NULL);
		NullCheck(L_11);
		VirtActionInvoker2< RuntimeObject *, double >::Invoke(5 /* System.Void UnityEngine.InputSystem.Samples.VisualizationHelpers/Visualizer::AddSample(System.Object,System.Double) */, L_11, L_12, L_13);
		// break;
		goto IL_01d8;
	}

IL_0077:
	{
		// var visualizer = (VisualizationHelpers.TimelineVisualizer)m_Visualizer;
		Visualizer_t48757514E9C44C7B20B531BB6D2713A570AA8B74 * L_14 = ((InputVisualizer_t51917CF1458037727EDDF8C090AEB773F3EAC29E *)__this)->get_m_Visualizer_9();
		V_5 = ((TimelineVisualizer_tDCF8FE655A93D562471977C145A8B989803EA315 *)CastclassClass((RuntimeObject*)L_14, TimelineVisualizer_tDCF8FE655A93D562471977C145A8B989803EA315_il2cpp_TypeInfo_var));
		// var frame = (int)InputState.updateCount;
		uint32_t L_15;
		L_15 = InputState_get_updateCount_m53C26B51E7177C1189A0E0562045F6F17522492A_inline(/*hidden argument*/NULL);
		V_6 = L_15;
		// ref var valueRef = ref visualizer.GetOrCreateSample(0, frame);
		TimelineVisualizer_tDCF8FE655A93D562471977C145A8B989803EA315 * L_16 = V_5;
		int32_t L_17 = V_6;
		NullCheck(L_16);
		PrimitiveValue_tB787C76E9A37444599C45519DD7E4D3A1D4730C8 * L_18;
		L_18 = TimelineVisualizer_GetOrCreateSample_m2DF8059FD0CC02C872112585BC551607BA8E99C1(L_16, 0, L_17, /*hidden argument*/NULL);
		V_7 = (PrimitiveValue_tB787C76E9A37444599C45519DD7E4D3A1D4730C8 *)L_18;
		// var value = valueRef.ToInt32() + 1;
		PrimitiveValue_tB787C76E9A37444599C45519DD7E4D3A1D4730C8 * L_19 = V_7;
		int32_t L_20;
		L_20 = PrimitiveValue_ToInt32_m915D62C8002F200BD28587B77113678E7023B009((PrimitiveValue_tB787C76E9A37444599C45519DD7E4D3A1D4730C8 *)L_19, (RuntimeObject*)NULL, /*hidden argument*/NULL);
		V_8 = ((int32_t)il2cpp_codegen_add((int32_t)L_20, (int32_t)1));
		// valueRef = value;
		PrimitiveValue_tB787C76E9A37444599C45519DD7E4D3A1D4730C8 * L_21 = V_7;
		int32_t L_22 = V_8;
		PrimitiveValue_tB787C76E9A37444599C45519DD7E4D3A1D4730C8  L_23;
		L_23 = PrimitiveValue_op_Implicit_m7F42D08EFF4110E852E0ED056F4D6B236D16F233(L_22, /*hidden argument*/NULL);
		*(PrimitiveValue_tB787C76E9A37444599C45519DD7E4D3A1D4730C8 *)L_21 = L_23;
		// visualizer.limitsY =
		//     new Vector2(0, Mathf.Max(value, visualizer.limitsY.y));
		TimelineVisualizer_tDCF8FE655A93D562471977C145A8B989803EA315 * L_24 = V_5;
		int32_t L_25 = V_8;
		TimelineVisualizer_tDCF8FE655A93D562471977C145A8B989803EA315 * L_26 = V_5;
		NullCheck(L_26);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_27;
		L_27 = TimelineVisualizer_get_limitsY_m21AD946F4CC59C31D30B70E84D4C9CB317EB7A3C_inline(L_26, /*hidden argument*/NULL);
		float L_28 = L_27.get_y_1();
		float L_29;
		L_29 = Mathf_Max_m4CE510E1F1013B33275F01543731A51A58BA0775(((float)((float)L_25)), L_28, /*hidden argument*/NULL);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_30;
		memset((&L_30), 0, sizeof(L_30));
		Vector2__ctor_m9F1F2D5EB5D1FF7091BB527AC8A72CBB309D115E_inline((&L_30), (0.0f), L_29, /*hidden argument*/NULL);
		NullCheck(L_24);
		TimelineVisualizer_set_limitsY_mBC2A875F5B15BBFA8AF8D385765F01A24489A376(L_24, L_30, /*hidden argument*/NULL);
		// break;
		goto IL_01d8;
	}

IL_00dd:
	{
		// var visualizer = (VisualizationHelpers.TimelineVisualizer)m_Visualizer;
		Visualizer_t48757514E9C44C7B20B531BB6D2713A570AA8B74 * L_31 = ((InputVisualizer_t51917CF1458037727EDDF8C090AEB773F3EAC29E *)__this)->get_m_Visualizer_9();
		V_9 = ((TimelineVisualizer_tDCF8FE655A93D562471977C145A8B989803EA315 *)CastclassClass((RuntimeObject*)L_31, TimelineVisualizer_tDCF8FE655A93D562471977C145A8B989803EA315_il2cpp_TypeInfo_var));
		// var lag = (Time.realtimeSinceStartup - eventPtr.time) * 1000; // In milliseconds.
		float L_32;
		L_32 = Time_get_realtimeSinceStartup_m5228CC1C1E57213D4148E965499072EA70D8C02B(/*hidden argument*/NULL);
		double L_33;
		L_33 = InputEventPtr_get_time_m46BFA4C294BAC5945221DFF948B99C16BA97F0B3((InputEventPtr_tC7799829CE3FDCA9E191C7BC946ABE0DB17B377D *)(&___eventPtr0), /*hidden argument*/NULL);
		V_10 = ((double)il2cpp_codegen_multiply((double)((double)il2cpp_codegen_subtract((double)((double)((double)L_32)), (double)L_33)), (double)(1000.0)));
		// var frame = (int)InputState.updateCount;
		uint32_t L_34;
		L_34 = InputState_get_updateCount_m53C26B51E7177C1189A0E0562045F6F17522492A_inline(/*hidden argument*/NULL);
		V_11 = L_34;
		// ref var valueRef = ref visualizer.GetOrCreateSample(0, frame);
		TimelineVisualizer_tDCF8FE655A93D562471977C145A8B989803EA315 * L_35 = V_9;
		int32_t L_36 = V_11;
		NullCheck(L_35);
		PrimitiveValue_tB787C76E9A37444599C45519DD7E4D3A1D4730C8 * L_37;
		L_37 = TimelineVisualizer_GetOrCreateSample_m2DF8059FD0CC02C872112585BC551607BA8E99C1(L_35, 0, L_36, /*hidden argument*/NULL);
		V_12 = (PrimitiveValue_tB787C76E9A37444599C45519DD7E4D3A1D4730C8 *)L_37;
		// if (lag > valueRef.ToDouble())
		double L_38 = V_10;
		PrimitiveValue_tB787C76E9A37444599C45519DD7E4D3A1D4730C8 * L_39 = V_12;
		double L_40;
		L_40 = PrimitiveValue_ToDouble_m1E8D9905E0305511DEEC81633A9B32281ABC7101((PrimitiveValue_tB787C76E9A37444599C45519DD7E4D3A1D4730C8 *)L_39, (RuntimeObject*)NULL, /*hidden argument*/NULL);
		V_13 = (bool)((((double)L_38) > ((double)L_40))? 1 : 0);
		bool L_41 = V_13;
		if (!L_41)
		{
			goto IL_016b;
		}
	}
	{
		// valueRef = lag;
		PrimitiveValue_tB787C76E9A37444599C45519DD7E4D3A1D4730C8 * L_42 = V_12;
		double L_43 = V_10;
		PrimitiveValue_tB787C76E9A37444599C45519DD7E4D3A1D4730C8  L_44;
		L_44 = PrimitiveValue_op_Implicit_mAB03BBECCFF7835FEB0B29BE7050CEDAFEA021BC(L_43, /*hidden argument*/NULL);
		*(PrimitiveValue_tB787C76E9A37444599C45519DD7E4D3A1D4730C8 *)L_42 = L_44;
		// if (lag > visualizer.limitsY.y)
		double L_45 = V_10;
		TimelineVisualizer_tDCF8FE655A93D562471977C145A8B989803EA315 * L_46 = V_9;
		NullCheck(L_46);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_47;
		L_47 = TimelineVisualizer_get_limitsY_m21AD946F4CC59C31D30B70E84D4C9CB317EB7A3C_inline(L_46, /*hidden argument*/NULL);
		float L_48 = L_47.get_y_1();
		V_14 = (bool)((((double)L_45) > ((double)((double)((double)L_48))))? 1 : 0);
		bool L_49 = V_14;
		if (!L_49)
		{
			goto IL_016a;
		}
	}
	{
		// visualizer.limitsY = new Vector2(0, Mathf.Ceil((float)lag));
		TimelineVisualizer_tDCF8FE655A93D562471977C145A8B989803EA315 * L_50 = V_9;
		double L_51 = V_10;
		float L_52;
		L_52 = ceilf(((float)((float)L_51)));
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_53;
		memset((&L_53), 0, sizeof(L_53));
		Vector2__ctor_m9F1F2D5EB5D1FF7091BB527AC8A72CBB309D115E_inline((&L_53), (0.0f), L_52, /*hidden argument*/NULL);
		NullCheck(L_50);
		TimelineVisualizer_set_limitsY_mBC2A875F5B15BBFA8AF8D385765F01A24489A376(L_50, L_53, /*hidden argument*/NULL);
	}

IL_016a:
	{
	}

IL_016b:
	{
		// break;
		goto IL_01d8;
	}

IL_016d:
	{
		// var visualizer = (VisualizationHelpers.TimelineVisualizer)m_Visualizer;
		Visualizer_t48757514E9C44C7B20B531BB6D2713A570AA8B74 * L_54 = ((InputVisualizer_t51917CF1458037727EDDF8C090AEB773F3EAC29E *)__this)->get_m_Visualizer_9();
		V_15 = ((TimelineVisualizer_tDCF8FE655A93D562471977C145A8B989803EA315 *)CastclassClass((RuntimeObject*)L_54, TimelineVisualizer_tDCF8FE655A93D562471977C145A8B989803EA315_il2cpp_TypeInfo_var));
		// var frame = (int)InputState.updateCount;
		uint32_t L_55;
		L_55 = InputState_get_updateCount_m53C26B51E7177C1189A0E0562045F6F17522492A_inline(/*hidden argument*/NULL);
		V_16 = L_55;
		// ref var valueRef = ref visualizer.GetOrCreateSample(0, frame);
		TimelineVisualizer_tDCF8FE655A93D562471977C145A8B989803EA315 * L_56 = V_15;
		int32_t L_57 = V_16;
		NullCheck(L_56);
		PrimitiveValue_tB787C76E9A37444599C45519DD7E4D3A1D4730C8 * L_58;
		L_58 = TimelineVisualizer_GetOrCreateSample_m2DF8059FD0CC02C872112585BC551607BA8E99C1(L_56, 0, L_57, /*hidden argument*/NULL);
		V_17 = (PrimitiveValue_tB787C76E9A37444599C45519DD7E4D3A1D4730C8 *)L_58;
		// var value = valueRef.ToInt32() + eventPtr.sizeInBytes;
		PrimitiveValue_tB787C76E9A37444599C45519DD7E4D3A1D4730C8 * L_59 = V_17;
		int32_t L_60;
		L_60 = PrimitiveValue_ToInt32_m915D62C8002F200BD28587B77113678E7023B009((PrimitiveValue_tB787C76E9A37444599C45519DD7E4D3A1D4730C8 *)L_59, (RuntimeObject*)NULL, /*hidden argument*/NULL);
		uint32_t L_61;
		L_61 = InputEventPtr_get_sizeInBytes_m0F76E2819F6E498CFF972B3FDCD68C9813096447((InputEventPtr_tC7799829CE3FDCA9E191C7BC946ABE0DB17B377D *)(&___eventPtr0), /*hidden argument*/NULL);
		V_18 = ((int64_t)il2cpp_codegen_add((int64_t)((int64_t)((int64_t)L_60)), (int64_t)((int64_t)((uint64_t)L_61))));
		// valueRef = value;
		PrimitiveValue_tB787C76E9A37444599C45519DD7E4D3A1D4730C8 * L_62 = V_17;
		int64_t L_63 = V_18;
		PrimitiveValue_tB787C76E9A37444599C45519DD7E4D3A1D4730C8  L_64;
		L_64 = PrimitiveValue_op_Implicit_m9591C3BBBE7E39D2630D39EBB2336702030F7810(L_63, /*hidden argument*/NULL);
		*(PrimitiveValue_tB787C76E9A37444599C45519DD7E4D3A1D4730C8 *)L_62 = L_64;
		// visualizer.limitsY =
		//     new Vector2(0, Mathf.Max(value, visualizer.limitsY.y));
		TimelineVisualizer_tDCF8FE655A93D562471977C145A8B989803EA315 * L_65 = V_15;
		int64_t L_66 = V_18;
		TimelineVisualizer_tDCF8FE655A93D562471977C145A8B989803EA315 * L_67 = V_15;
		NullCheck(L_67);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_68;
		L_68 = TimelineVisualizer_get_limitsY_m21AD946F4CC59C31D30B70E84D4C9CB317EB7A3C_inline(L_67, /*hidden argument*/NULL);
		float L_69 = L_68.get_y_1();
		float L_70;
		L_70 = Mathf_Max_m4CE510E1F1013B33275F01543731A51A58BA0775(((float)((float)L_66)), L_69, /*hidden argument*/NULL);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_71;
		memset((&L_71), 0, sizeof(L_71));
		Vector2__ctor_m9F1F2D5EB5D1FF7091BB527AC8A72CBB309D115E_inline((&L_71), (0.0f), L_70, /*hidden argument*/NULL);
		NullCheck(L_65);
		TimelineVisualizer_set_limitsY_mBC2A875F5B15BBFA8AF8D385765F01A24489A376(L_65, L_71, /*hidden argument*/NULL);
		// break;
		goto IL_01d8;
	}

IL_01d8:
	{
		// }
		return;
	}
}
// System.Void UnityEngine.InputSystem.Samples.InputControlVisualizer::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InputControlVisualizer__ctor_m8202EDEAEBCD77025570F464F2DC2EA42A7843A3 (InputControlVisualizer_t83B42575FEC0B8A79280A7D5AE2886C0494BC6AF * __this, const RuntimeMethod* method)
{
	{
		InputVisualizer__ctor_mAFD837F6494C800DF6CBFC6427D4875349655DB8(__this, /*hidden argument*/NULL);
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
// System.Void UnityEngine.InputSystem.Samples.InputVisualizer::OnEnable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InputVisualizer_OnEnable_m2E397BD5719AD2BB97ED81D27208B446989D727A (InputVisualizer_t51917CF1458037727EDDF8C090AEB773F3EAC29E * __this, const RuntimeMethod* method)
{
	{
		// ResolveParent();
		InputVisualizer_ResolveParent_m0C8E84CAD860C9768366C2393EFC4F19D045FC6D(__this, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void UnityEngine.InputSystem.Samples.InputVisualizer::OnDisable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InputVisualizer_OnDisable_m2A0FD7F73BD976313A8B397C2D72676D3A65C161 (InputVisualizer_t51917CF1458037727EDDF8C090AEB773F3EAC29E * __this, const RuntimeMethod* method)
{
	{
		// m_Parent = null;
		__this->set_m_Parent_10((InputVisualizer_t51917CF1458037727EDDF8C090AEB773F3EAC29E *)NULL);
		// m_Visualizer = null;
		__this->set_m_Visualizer_9((Visualizer_t48757514E9C44C7B20B531BB6D2713A570AA8B74 *)NULL);
		// }
		return;
	}
}
// System.Void UnityEngine.InputSystem.Samples.InputVisualizer::OnGUI()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InputVisualizer_OnGUI_m62F3B05F1A6BCA9AEDC1FDBE7AA4339769DF3D09 (InputVisualizer_t51917CF1458037727EDDF8C090AEB773F3EAC29E * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GUIContent_t39256993BF4A33F76E073488D6A2F13D678DF60E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InputVisualizer_t51917CF1458037727EDDF8C090AEB773F3EAC29E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878  V_0;
	memset((&V_0), 0, sizeof(V_0));
	bool V_1 = false;
	bool V_2 = false;
	bool V_3 = false;
	bool V_4 = false;
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  V_5;
	memset((&V_5), 0, sizeof(V_5));
	Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878  V_6;
	memset((&V_6), 0, sizeof(V_6));
	bool V_7 = false;
	bool V_8 = false;
	{
		// if (Event.current.type != EventType.Repaint)
		Event_tED49F8EC5A2514F6E877E301B1AB7ABE4647253E * L_0;
		L_0 = Event_get_current_m069E3E742E6CBC32C3BC958B85153E75B0192443(/*hidden argument*/NULL);
		NullCheck(L_0);
		int32_t L_1;
		L_1 = Event_get_type_mA5010AB8C34B098E0783949046C708B9E1BA811D(L_0, /*hidden argument*/NULL);
		V_1 = (bool)((((int32_t)((((int32_t)L_1) == ((int32_t)7))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_2 = V_1;
		if (!L_2)
		{
			goto IL_001a;
		}
	}
	{
		// return;
		goto IL_0150;
	}

IL_001a:
	{
		// var rect = m_Rect;
		Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878  L_3 = __this->get_m_Rect_7();
		V_0 = L_3;
		// if (m_Parent != null)
		InputVisualizer_t51917CF1458037727EDDF8C090AEB773F3EAC29E * L_4 = __this->get_m_Parent_10();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_5;
		L_5 = Object_op_Inequality_mE1F187520BD83FB7D86A6D850710C4D42B864E90(L_4, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		V_2 = L_5;
		bool L_6 = V_2;
		if (!L_6)
		{
			goto IL_0054;
		}
	}
	{
		// rect.position += m_Parent.m_Rect.position;
		Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878 * L_7 = (&V_0);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_8;
		L_8 = Rect_get_position_m4D98DEE21C60D7EA5E4A30869F4DBDE25DB93A86((Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878 *)L_7, /*hidden argument*/NULL);
		InputVisualizer_t51917CF1458037727EDDF8C090AEB773F3EAC29E * L_9 = __this->get_m_Parent_10();
		NullCheck(L_9);
		Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878 * L_10 = L_9->get_address_of_m_Rect_7();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_11;
		L_11 = Rect_get_position_m4D98DEE21C60D7EA5E4A30869F4DBDE25DB93A86((Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878 *)L_10, /*hidden argument*/NULL);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_12;
		L_12 = Vector2_op_Addition_m5EACC2AEA80FEE29F380397CF1F4B11D04BE71CC_inline(L_8, L_11, /*hidden argument*/NULL);
		Rect_set_position_m25716C90100155ED807D2812E24D2880D7D89D0D((Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878 *)L_7, L_12, /*hidden argument*/NULL);
	}

IL_0054:
	{
		// if (m_Visualizer != null)
		Visualizer_t48757514E9C44C7B20B531BB6D2713A570AA8B74 * L_13 = __this->get_m_Visualizer_9();
		V_3 = (bool)((!(((RuntimeObject*)(Visualizer_t48757514E9C44C7B20B531BB6D2713A570AA8B74 *)L_13) <= ((RuntimeObject*)(RuntimeObject *)NULL)))? 1 : 0);
		bool L_14 = V_3;
		if (!L_14)
		{
			goto IL_0070;
		}
	}
	{
		// m_Visualizer.OnDraw(rect);
		Visualizer_t48757514E9C44C7B20B531BB6D2713A570AA8B74 * L_15 = __this->get_m_Visualizer_9();
		Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878  L_16 = V_0;
		NullCheck(L_15);
		VirtActionInvoker1< Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878  >::Invoke(4 /* System.Void UnityEngine.InputSystem.Samples.VisualizationHelpers/Visualizer::OnDraw(UnityEngine.Rect) */, L_15, L_16);
		goto IL_0090;
	}

IL_0070:
	{
		// VisualizationHelpers.DrawRectangle(rect, new Color(1, 1, 1, 0.1f));
		Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878  L_17 = V_0;
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_18;
		memset((&L_18), 0, sizeof(L_18));
		Color__ctor_m679019E6084BF7A6F82590F66F5F695F6A50ECC5((&L_18), (1.0f), (1.0f), (1.0f), (0.100000001f), /*hidden argument*/NULL);
		VisualizationHelpers_DrawRectangle_mCE75B71D5E3EB525AED283FE50CEA73998357E29(L_17, L_18, /*hidden argument*/NULL);
	}

IL_0090:
	{
		// if (!string.IsNullOrEmpty(m_Label))
		String_t* L_19 = __this->get_m_Label_4();
		bool L_20;
		L_20 = String_IsNullOrEmpty_m9AFBB5335B441B94E884B8A9D4A27AD60E3D7F7C(L_19, /*hidden argument*/NULL);
		V_4 = (bool)((((int32_t)L_20) == ((int32_t)0))? 1 : 0);
		bool L_21 = V_4;
		if (!L_21)
		{
			goto IL_0150;
		}
	}
	{
		// if (m_LabelContent == null)
		GUIContent_t39256993BF4A33F76E073488D6A2F13D678DF60E * L_22 = __this->get_m_LabelContent_8();
		V_7 = (bool)((((RuntimeObject*)(GUIContent_t39256993BF4A33F76E073488D6A2F13D678DF60E *)L_22) == ((RuntimeObject*)(RuntimeObject *)NULL))? 1 : 0);
		bool L_23 = V_7;
		if (!L_23)
		{
			goto IL_00c8;
		}
	}
	{
		// m_LabelContent = new GUIContent(m_Label);
		String_t* L_24 = __this->get_m_Label_4();
		GUIContent_t39256993BF4A33F76E073488D6A2F13D678DF60E * L_25 = (GUIContent_t39256993BF4A33F76E073488D6A2F13D678DF60E *)il2cpp_codegen_object_new(GUIContent_t39256993BF4A33F76E073488D6A2F13D678DF60E_il2cpp_TypeInfo_var);
		GUIContent__ctor_m3FABF20C213051E685B41CA898A20885E02111F0(L_25, L_24, /*hidden argument*/NULL);
		__this->set_m_LabelContent_8(L_25);
	}

IL_00c8:
	{
		// if (s_LabelStyle == null)
		GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * L_26 = ((InputVisualizer_t51917CF1458037727EDDF8C090AEB773F3EAC29E_StaticFields*)il2cpp_codegen_static_fields_for(InputVisualizer_t51917CF1458037727EDDF8C090AEB773F3EAC29E_il2cpp_TypeInfo_var))->get_s_LabelStyle_11();
		V_8 = (bool)((((RuntimeObject*)(GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 *)L_26) == ((RuntimeObject*)(RuntimeObject *)NULL))? 1 : 0);
		bool L_27 = V_8;
		if (!L_27)
		{
			goto IL_00f7;
		}
	}
	{
		// s_LabelStyle = new GUIStyle();
		GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * L_28 = (GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 *)il2cpp_codegen_object_new(GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726_il2cpp_TypeInfo_var);
		GUIStyle__ctor_mDA0E00D0017FC0B2FC333C5DD6E1EDBAE3BCB8E3(L_28, /*hidden argument*/NULL);
		((InputVisualizer_t51917CF1458037727EDDF8C090AEB773F3EAC29E_StaticFields*)il2cpp_codegen_static_fields_for(InputVisualizer_t51917CF1458037727EDDF8C090AEB773F3EAC29E_il2cpp_TypeInfo_var))->set_s_LabelStyle_11(L_28);
		// s_LabelStyle.normal.textColor = Color.yellow;
		GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * L_29 = ((InputVisualizer_t51917CF1458037727EDDF8C090AEB773F3EAC29E_StaticFields*)il2cpp_codegen_static_fields_for(InputVisualizer_t51917CF1458037727EDDF8C090AEB773F3EAC29E_il2cpp_TypeInfo_var))->get_s_LabelStyle_11();
		NullCheck(L_29);
		GUIStyleState_tC89202668617B1D7884980314F293AD382B9AAD9 * L_30;
		L_30 = GUIStyle_get_normal_mAD82F2E3C188C5B112B82807398D61B9998E9CDE(L_29, /*hidden argument*/NULL);
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_31;
		L_31 = Color_get_yellow_m9FD4BDABA7E40E136BE57EE7872CEA6B1B2FA1D1(/*hidden argument*/NULL);
		NullCheck(L_30);
		GUIStyleState_set_textColor_mB4B61B9CAC1D6B4694471A2BB1191B5F0D5D764A(L_30, L_31, /*hidden argument*/NULL);
	}

IL_00f7:
	{
		// var labelSize = s_LabelStyle.CalcSize(m_LabelContent);
		GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * L_32 = ((InputVisualizer_t51917CF1458037727EDDF8C090AEB773F3EAC29E_StaticFields*)il2cpp_codegen_static_fields_for(InputVisualizer_t51917CF1458037727EDDF8C090AEB773F3EAC29E_il2cpp_TypeInfo_var))->get_s_LabelStyle_11();
		GUIContent_t39256993BF4A33F76E073488D6A2F13D678DF60E * L_33 = __this->get_m_LabelContent_8();
		NullCheck(L_32);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_34;
		L_34 = GUIStyle_CalcSize_m3B4ADD2AF66EFF1A273C10C0F77741EAD96F3F2D(L_32, L_33, /*hidden argument*/NULL);
		V_5 = L_34;
		// var labelRect = new Rect(rect.x + 4, rect.y, labelSize.x + 4, rect.height);
		float L_35;
		L_35 = Rect_get_x_mA61220F6F26ECD6951B779FFA7CAD7ECE11D6987((Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878 *)(&V_0), /*hidden argument*/NULL);
		float L_36;
		L_36 = Rect_get_y_m4E1AAD20D167085FF4F9E9C86EF34689F5770A74((Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878 *)(&V_0), /*hidden argument*/NULL);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_37 = V_5;
		float L_38 = L_37.get_x_0();
		float L_39;
		L_39 = Rect_get_height_m42FEF31015A269E6E2B7E6F62E72E5BF6602302A((Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878 *)(&V_0), /*hidden argument*/NULL);
		Rect__ctor_m12075526A02B55B680716A34AD5287B223122B70((Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878 *)(&V_6), ((float)il2cpp_codegen_add((float)L_35, (float)(4.0f))), L_36, ((float)il2cpp_codegen_add((float)L_38, (float)(4.0f))), L_39, /*hidden argument*/NULL);
		// s_LabelStyle.Draw(labelRect, m_LabelContent, false, false, false, false);
		GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * L_40 = ((InputVisualizer_t51917CF1458037727EDDF8C090AEB773F3EAC29E_StaticFields*)il2cpp_codegen_static_fields_for(InputVisualizer_t51917CF1458037727EDDF8C090AEB773F3EAC29E_il2cpp_TypeInfo_var))->get_s_LabelStyle_11();
		Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878  L_41 = V_6;
		GUIContent_t39256993BF4A33F76E073488D6A2F13D678DF60E * L_42 = __this->get_m_LabelContent_8();
		NullCheck(L_40);
		GUIStyle_Draw_mF228532CAE3828C7F67CF10CAD21F784FA45DBDD(L_40, L_41, L_42, (bool)0, (bool)0, (bool)0, (bool)0, /*hidden argument*/NULL);
	}

IL_0150:
	{
		// }
		return;
	}
}
// System.Void UnityEngine.InputSystem.Samples.InputVisualizer::OnValidate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InputVisualizer_OnValidate_mC2265CE7F4AADC4C0D266DE1BD8F6091C4BBCDE6 (InputVisualizer_t51917CF1458037727EDDF8C090AEB773F3EAC29E * __this, const RuntimeMethod* method)
{
	{
		// ResolveParent();
		InputVisualizer_ResolveParent_m0C8E84CAD860C9768366C2393EFC4F19D045FC6D(__this, /*hidden argument*/NULL);
		// m_LabelContent = null;
		__this->set_m_LabelContent_8((GUIContent_t39256993BF4A33F76E073488D6A2F13D678DF60E *)NULL);
		// }
		return;
	}
}
// System.Void UnityEngine.InputSystem.Samples.InputVisualizer::ResolveParent()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InputVisualizer_ResolveParent_m0C8E84CAD860C9768366C2393EFC4F19D045FC6D (InputVisualizer_t51917CF1458037727EDDF8C090AEB773F3EAC29E * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisInputControlVisualizer_t83B42575FEC0B8A79280A7D5AE2886C0494BC6AF_m0394BFEEEC6FAEFDA8837ACBDC369708DC222D64_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * V_0 = NULL;
	bool V_1 = false;
	{
		// var parentTransform = transform.parent;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_0;
		L_0 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		NullCheck(L_0);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_1;
		L_1 = Transform_get_parent_m7D06005D9CB55F90F39D42F6A2AF9C7BC80745C9(L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		// if (parentTransform != null)
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_2 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_3;
		L_3 = Object_op_Inequality_mE1F187520BD83FB7D86A6D850710C4D42B864E90(L_2, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		V_1 = L_3;
		bool L_4 = V_1;
		if (!L_4)
		{
			goto IL_0024;
		}
	}
	{
		// m_Parent = parentTransform.GetComponent<InputControlVisualizer>();
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_5 = V_0;
		NullCheck(L_5);
		InputControlVisualizer_t83B42575FEC0B8A79280A7D5AE2886C0494BC6AF * L_6;
		L_6 = Component_GetComponent_TisInputControlVisualizer_t83B42575FEC0B8A79280A7D5AE2886C0494BC6AF_m0394BFEEEC6FAEFDA8837ACBDC369708DC222D64(L_5, /*hidden argument*/Component_GetComponent_TisInputControlVisualizer_t83B42575FEC0B8A79280A7D5AE2886C0494BC6AF_m0394BFEEEC6FAEFDA8837ACBDC369708DC222D64_RuntimeMethod_var);
		__this->set_m_Parent_10(L_6);
	}

IL_0024:
	{
		// }
		return;
	}
}
// System.Void UnityEngine.InputSystem.Samples.InputVisualizer::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InputVisualizer__ctor_mAFD837F6494C800DF6CBFC6427D4875349655DB8 (InputVisualizer_t51917CF1458037727EDDF8C090AEB773F3EAC29E * __this, const RuntimeMethod* method)
{
	{
		// [SerializeField] internal int m_HistorySamples = 500;
		__this->set_m_HistorySamples_5(((int32_t)500));
		// [SerializeField] internal float m_TimeWindow = 3;
		__this->set_m_TimeWindow_6((3.0f));
		// [SerializeField] internal Rect m_Rect = new Rect(10, 10, 300, 30);
		Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878  L_0;
		memset((&L_0), 0, sizeof(L_0));
		Rect__ctor_m12075526A02B55B680716A34AD5287B223122B70((&L_0), (10.0f), (10.0f), (300.0f), (30.0f), /*hidden argument*/NULL);
		__this->set_m_Rect_7(L_0);
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
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
// System.Void UnityEngine.InputSystem.Samples.VisualizationHelpers::DrawAxis(UnityEngine.InputSystem.Samples.VisualizationHelpers/Axis,UnityEngine.Rect,UnityEngine.Color,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VisualizationHelpers_DrawAxis_m41296CB0B344F006E81C7DCCD6F00F77C1456E2C (int32_t ___axis0, Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878  ___rect1, Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___color2, float ___width3, const RuntimeMethod* method)
{
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  V_0;
	memset((&V_0), 0, sizeof(V_0));
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  V_1;
	memset((&V_1), 0, sizeof(V_1));
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  V_2;
	memset((&V_2), 0, sizeof(V_2));
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	{
		// switch (axis)
		int32_t L_0 = ___axis0;
		V_4 = L_0;
		int32_t L_1 = V_4;
		V_3 = L_1;
		int32_t L_2 = V_3;
		switch (L_2)
		{
			case 0:
			{
				goto IL_001e;
			}
			case 1:
			{
				goto IL_0081;
			}
			case 2:
			{
				goto IL_00d3;
			}
		}
	}
	{
		goto IL_0110;
	}

IL_001e:
	{
		// start = new Vector2(rect.x, rect.y + rect.height / 2);
		float L_3;
		L_3 = Rect_get_x_mA61220F6F26ECD6951B779FFA7CAD7ECE11D6987((Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878 *)(&___rect1), /*hidden argument*/NULL);
		float L_4;
		L_4 = Rect_get_y_m4E1AAD20D167085FF4F9E9C86EF34689F5770A74((Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878 *)(&___rect1), /*hidden argument*/NULL);
		float L_5;
		L_5 = Rect_get_height_m42FEF31015A269E6E2B7E6F62E72E5BF6602302A((Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878 *)(&___rect1), /*hidden argument*/NULL);
		Vector2__ctor_m9F1F2D5EB5D1FF7091BB527AC8A72CBB309D115E_inline((Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 *)(&V_0), L_3, ((float)il2cpp_codegen_add((float)L_4, (float)((float)((float)L_5/(float)(2.0f))))), /*hidden argument*/NULL);
		// end = new Vector2(start.x + rect.width, rect.y + rect.height / 2);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_6 = V_0;
		float L_7 = L_6.get_x_0();
		float L_8;
		L_8 = Rect_get_width_m4A0500D95CA84917787A8E90D26E66D49DFA90EF((Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878 *)(&___rect1), /*hidden argument*/NULL);
		float L_9;
		L_9 = Rect_get_y_m4E1AAD20D167085FF4F9E9C86EF34689F5770A74((Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878 *)(&___rect1), /*hidden argument*/NULL);
		float L_10;
		L_10 = Rect_get_height_m42FEF31015A269E6E2B7E6F62E72E5BF6602302A((Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878 *)(&___rect1), /*hidden argument*/NULL);
		Vector2__ctor_m9F1F2D5EB5D1FF7091BB527AC8A72CBB309D115E_inline((Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 *)(&V_1), ((float)il2cpp_codegen_add((float)L_7, (float)L_8)), ((float)il2cpp_codegen_add((float)L_9, (float)((float)((float)L_10/(float)(2.0f))))), /*hidden argument*/NULL);
		// tickOffset = new Vector2(0, 3);
		Vector2__ctor_m9F1F2D5EB5D1FF7091BB527AC8A72CBB309D115E_inline((Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 *)(&V_2), (0.0f), (3.0f), /*hidden argument*/NULL);
		// break;
		goto IL_0116;
	}

IL_0081:
	{
		// start = new Vector2(rect.x + rect.width / 2, rect.y);
		float L_11;
		L_11 = Rect_get_x_mA61220F6F26ECD6951B779FFA7CAD7ECE11D6987((Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878 *)(&___rect1), /*hidden argument*/NULL);
		float L_12;
		L_12 = Rect_get_width_m4A0500D95CA84917787A8E90D26E66D49DFA90EF((Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878 *)(&___rect1), /*hidden argument*/NULL);
		float L_13;
		L_13 = Rect_get_y_m4E1AAD20D167085FF4F9E9C86EF34689F5770A74((Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878 *)(&___rect1), /*hidden argument*/NULL);
		Vector2__ctor_m9F1F2D5EB5D1FF7091BB527AC8A72CBB309D115E_inline((Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 *)(&V_0), ((float)il2cpp_codegen_add((float)L_11, (float)((float)((float)L_12/(float)(2.0f))))), L_13, /*hidden argument*/NULL);
		// end = new Vector2(start.x, rect.y + rect.height);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_14 = V_0;
		float L_15 = L_14.get_x_0();
		float L_16;
		L_16 = Rect_get_y_m4E1AAD20D167085FF4F9E9C86EF34689F5770A74((Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878 *)(&___rect1), /*hidden argument*/NULL);
		float L_17;
		L_17 = Rect_get_height_m42FEF31015A269E6E2B7E6F62E72E5BF6602302A((Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878 *)(&___rect1), /*hidden argument*/NULL);
		Vector2__ctor_m9F1F2D5EB5D1FF7091BB527AC8A72CBB309D115E_inline((Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 *)(&V_1), L_15, ((float)il2cpp_codegen_add((float)L_16, (float)L_17)), /*hidden argument*/NULL);
		// tickOffset = new Vector2(3, 0);
		Vector2__ctor_m9F1F2D5EB5D1FF7091BB527AC8A72CBB309D115E_inline((Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 *)(&V_2), (3.0f), (0.0f), /*hidden argument*/NULL);
		// break;
		goto IL_0116;
	}

IL_00d3:
	{
		// start = new Vector2(rect.x, rect.yMax);
		float L_18;
		L_18 = Rect_get_x_mA61220F6F26ECD6951B779FFA7CAD7ECE11D6987((Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878 *)(&___rect1), /*hidden argument*/NULL);
		float L_19;
		L_19 = Rect_get_yMax_m9685BF55B44C51FF9BA080F9995073E458E1CDC3((Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878 *)(&___rect1), /*hidden argument*/NULL);
		Vector2__ctor_m9F1F2D5EB5D1FF7091BB527AC8A72CBB309D115E_inline((Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 *)(&V_0), L_18, L_19, /*hidden argument*/NULL);
		// end = new Vector2(rect.xMax, rect.y);
		float L_20;
		L_20 = Rect_get_xMax_m174FFAACE6F19A59AA793B3D507BE70116E27DE5((Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878 *)(&___rect1), /*hidden argument*/NULL);
		float L_21;
		L_21 = Rect_get_y_m4E1AAD20D167085FF4F9E9C86EF34689F5770A74((Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878 *)(&___rect1), /*hidden argument*/NULL);
		Vector2__ctor_m9F1F2D5EB5D1FF7091BB527AC8A72CBB309D115E_inline((Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 *)(&V_1), L_20, L_21, /*hidden argument*/NULL);
		// tickOffset = new Vector2(1.5f, 1.5f);
		Vector2__ctor_m9F1F2D5EB5D1FF7091BB527AC8A72CBB309D115E_inline((Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 *)(&V_2), (1.5f), (1.5f), /*hidden argument*/NULL);
		// break;
		goto IL_0116;
	}

IL_0110:
	{
		// throw new NotImplementedException();
		NotImplementedException_t26260C4EE0444C5FA022994203060B3A42A3ADE6 * L_22 = (NotImplementedException_t26260C4EE0444C5FA022994203060B3A42A3ADE6 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotImplementedException_t26260C4EE0444C5FA022994203060B3A42A3ADE6_il2cpp_TypeInfo_var)));
		NotImplementedException__ctor_mA2E9CE7F00CB335581A296D2596082D57E45BA83(L_22, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_22, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&VisualizationHelpers_DrawAxis_m41296CB0B344F006E81C7DCCD6F00F77C1456E2C_RuntimeMethod_var)));
	}

IL_0116:
	{
		// DrawLine(start, end, color, width);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_23 = V_0;
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_24 = V_1;
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_25 = ___color2;
		float L_26 = ___width3;
		VisualizationHelpers_DrawLine_m5092487DE42DE433CBF73DB576C6F69E1D439E45(L_23, L_24, L_25, L_26, /*hidden argument*/NULL);
		// DrawLine(start - tickOffset, start + tickOffset, color, width);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_27 = V_0;
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_28 = V_2;
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_29;
		L_29 = Vector2_op_Subtraction_m6E536A8C72FEAA37FF8D5E26E11D6E71EB59599A_inline(L_27, L_28, /*hidden argument*/NULL);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_30 = V_0;
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_31 = V_2;
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_32;
		L_32 = Vector2_op_Addition_m5EACC2AEA80FEE29F380397CF1F4B11D04BE71CC_inline(L_30, L_31, /*hidden argument*/NULL);
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_33 = ___color2;
		float L_34 = ___width3;
		VisualizationHelpers_DrawLine_m5092487DE42DE433CBF73DB576C6F69E1D439E45(L_29, L_32, L_33, L_34, /*hidden argument*/NULL);
		// DrawLine(end - tickOffset, end + tickOffset, color, width);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_35 = V_1;
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_36 = V_2;
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_37;
		L_37 = Vector2_op_Subtraction_m6E536A8C72FEAA37FF8D5E26E11D6E71EB59599A_inline(L_35, L_36, /*hidden argument*/NULL);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_38 = V_1;
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_39 = V_2;
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_40;
		L_40 = Vector2_op_Addition_m5EACC2AEA80FEE29F380397CF1F4B11D04BE71CC_inline(L_38, L_39, /*hidden argument*/NULL);
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_41 = ___color2;
		float L_42 = ___width3;
		VisualizationHelpers_DrawLine_m5092487DE42DE433CBF73DB576C6F69E1D439E45(L_37, L_40, L_41, L_42, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void UnityEngine.InputSystem.Samples.VisualizationHelpers::DrawRectangle(UnityEngine.Rect,UnityEngine.Color)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VisualizationHelpers_DrawRectangle_mCE75B71D5E3EB525AED283FE50CEA73998357E29 (Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878  ___rect0, Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___color1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GUI_tBCBBE29117D8093644C6E72B1CE3FB65C2CDCCC1_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// var savedColor = GUI.color;
		IL2CPP_RUNTIME_CLASS_INIT(GUI_tBCBBE29117D8093644C6E72B1CE3FB65C2CDCCC1_il2cpp_TypeInfo_var);
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_0;
		L_0 = GUI_get_color_m61B524C99DD85A0DF405540C6E7453600E816FD5(/*hidden argument*/NULL);
		V_0 = L_0;
		// GUI.color = color;
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_1 = ___color1;
		GUI_set_color_m627E2716FD33EF327E38EE0048CE44FAD77AB87F(L_1, /*hidden argument*/NULL);
		// GUI.DrawTexture(rect, OnePixTex);
		Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878  L_2 = ___rect0;
		Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * L_3;
		L_3 = VisualizationHelpers_get_OnePixTex_mFABF3F45732CC79316B44ABAB77F6EDEC5515C8D(/*hidden argument*/NULL);
		GUI_DrawTexture_mDD0221088900E3F53BA7B8A03B9E5CD2E6FDD0F8(L_2, L_3, /*hidden argument*/NULL);
		// GUI.color = savedColor;
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_4 = V_0;
		GUI_set_color_m627E2716FD33EF327E38EE0048CE44FAD77AB87F(L_4, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void UnityEngine.InputSystem.Samples.VisualizationHelpers::DrawText(System.String,UnityEngine.Vector2,UnityEngine.GUIStyle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VisualizationHelpers_DrawText_m55F2E393C5D8C5D77892DF5C854AF85E24857A89 (String_t* ___text0, Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___pos1, GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * ___style2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GUIContent_t39256993BF4A33F76E073488D6A2F13D678DF60E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	GUIContent_t39256993BF4A33F76E073488D6A2F13D678DF60E * V_0 = NULL;
	{
		// var content = new GUIContent(text);
		String_t* L_0 = ___text0;
		GUIContent_t39256993BF4A33F76E073488D6A2F13D678DF60E * L_1 = (GUIContent_t39256993BF4A33F76E073488D6A2F13D678DF60E *)il2cpp_codegen_object_new(GUIContent_t39256993BF4A33F76E073488D6A2F13D678DF60E_il2cpp_TypeInfo_var);
		GUIContent__ctor_m3FABF20C213051E685B41CA898A20885E02111F0(L_1, L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		// DrawText(content, pos, style);
		GUIContent_t39256993BF4A33F76E073488D6A2F13D678DF60E * L_2 = V_0;
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_3 = ___pos1;
		GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * L_4 = ___style2;
		VisualizationHelpers_DrawText_m75EAB1C9E4CA84D969F2EFD1BF20605FFEDE88C7(L_2, L_3, L_4, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void UnityEngine.InputSystem.Samples.VisualizationHelpers::DrawText(UnityEngine.GUIContent,UnityEngine.Vector2,UnityEngine.GUIStyle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VisualizationHelpers_DrawText_m75EAB1C9E4CA84D969F2EFD1BF20605FFEDE88C7 (GUIContent_t39256993BF4A33F76E073488D6A2F13D678DF60E * ___text0, Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___pos1, GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * ___style2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GUIContent_t39256993BF4A33F76E073488D6A2F13D678DF60E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	GUIContent_t39256993BF4A33F76E073488D6A2F13D678DF60E * V_0 = NULL;
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  V_1;
	memset((&V_1), 0, sizeof(V_1));
	Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878  V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		// var content = new GUIContent(text);
		GUIContent_t39256993BF4A33F76E073488D6A2F13D678DF60E * L_0 = ___text0;
		GUIContent_t39256993BF4A33F76E073488D6A2F13D678DF60E * L_1 = (GUIContent_t39256993BF4A33F76E073488D6A2F13D678DF60E *)il2cpp_codegen_object_new(GUIContent_t39256993BF4A33F76E073488D6A2F13D678DF60E_il2cpp_TypeInfo_var);
		GUIContent__ctor_m87E695240720FBABF3321CAA0F960FC02DF18647(L_1, L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		// var size = style.CalcSize(content);
		GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * L_2 = ___style2;
		GUIContent_t39256993BF4A33F76E073488D6A2F13D678DF60E * L_3 = V_0;
		NullCheck(L_2);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_4;
		L_4 = GUIStyle_CalcSize_m3B4ADD2AF66EFF1A273C10C0F77741EAD96F3F2D(L_2, L_3, /*hidden argument*/NULL);
		V_1 = L_4;
		// var rect = new Rect(pos.x, pos.y, size.x, size.y);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_5 = ___pos1;
		float L_6 = L_5.get_x_0();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_7 = ___pos1;
		float L_8 = L_7.get_y_1();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_9 = V_1;
		float L_10 = L_9.get_x_0();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_11 = V_1;
		float L_12 = L_11.get_y_1();
		Rect__ctor_m12075526A02B55B680716A34AD5287B223122B70((Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878 *)(&V_2), L_6, L_8, L_10, L_12, /*hidden argument*/NULL);
		// style.Draw(rect, content, false, false, false, false);
		GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * L_13 = ___style2;
		Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878  L_14 = V_2;
		GUIContent_t39256993BF4A33F76E073488D6A2F13D678DF60E * L_15 = V_0;
		NullCheck(L_13);
		GUIStyle_Draw_mF228532CAE3828C7F67CF10CAD21F784FA45DBDD(L_13, L_14, L_15, (bool)0, (bool)0, (bool)0, (bool)0, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void UnityEngine.InputSystem.Samples.VisualizationHelpers::DrawLine(UnityEngine.Vector2,UnityEngine.Vector2,UnityEngine.Color,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VisualizationHelpers_DrawLine_m5092487DE42DE433CBF73DB576C6F69E1D439E45 (Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___pointA0, Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___pointB1, Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___color2, float ___width3, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GUI_tBCBBE29117D8093644C6E72B1CE3FB65C2CDCCC1_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  V_0;
	memset((&V_0), 0, sizeof(V_0));
	Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  V_1;
	memset((&V_1), 0, sizeof(V_1));
	float V_2 = 0.0f;
	bool V_3 = false;
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  V_4;
	memset((&V_4), 0, sizeof(V_4));
	{
		// var matrix = GUI.matrix;
		IL2CPP_RUNTIME_CLASS_INIT(GUI_tBCBBE29117D8093644C6E72B1CE3FB65C2CDCCC1_il2cpp_TypeInfo_var);
		Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  L_0;
		L_0 = GUI_get_matrix_m06096A34C4E286301DA2608369D93E392DD52F4D(/*hidden argument*/NULL);
		V_0 = L_0;
		// var savedColor = GUI.color;
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_1;
		L_1 = GUI_get_color_m61B524C99DD85A0DF405540C6E7453600E816FD5(/*hidden argument*/NULL);
		V_1 = L_1;
		// GUI.color = color;
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_2 = ___color2;
		GUI_set_color_m627E2716FD33EF327E38EE0048CE44FAD77AB87F(L_2, /*hidden argument*/NULL);
		// var angle = Vector3.Angle(pointB - pointA, Vector2.right);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_3 = ___pointB1;
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_4 = ___pointA0;
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_5;
		L_5 = Vector2_op_Subtraction_m6E536A8C72FEAA37FF8D5E26E11D6E71EB59599A_inline(L_3, L_4, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_6;
		L_6 = Vector2_op_Implicit_m4FA146E613DBFE6C1C4B0E9B461D622E6F2FC294_inline(L_5, /*hidden argument*/NULL);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_7;
		L_7 = Vector2_get_right_m42ED15112D219375D2B6879E62ED925D002F15AF(/*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_8;
		L_8 = Vector2_op_Implicit_m4FA146E613DBFE6C1C4B0E9B461D622E6F2FC294_inline(L_7, /*hidden argument*/NULL);
		float L_9;
		L_9 = Vector3_Angle_m3715AB03A36C59D8CF08F8D71E2F46454EB884C1(L_6, L_8, /*hidden argument*/NULL);
		V_2 = L_9;
		// if (pointA.y > pointB.y)
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_10 = ___pointA0;
		float L_11 = L_10.get_y_1();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_12 = ___pointB1;
		float L_13 = L_12.get_y_1();
		V_3 = (bool)((((float)L_11) > ((float)L_13))? 1 : 0);
		bool L_14 = V_3;
		if (!L_14)
		{
			goto IL_0045;
		}
	}
	{
		// angle = -angle;
		float L_15 = V_2;
		V_2 = ((-L_15));
	}

IL_0045:
	{
		// GUIUtility.ScaleAroundPivot(new Vector2((pointB - pointA).magnitude, width), new Vector2(pointA.x, pointA.y + 0.5f));
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_16 = ___pointB1;
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_17 = ___pointA0;
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_18;
		L_18 = Vector2_op_Subtraction_m6E536A8C72FEAA37FF8D5E26E11D6E71EB59599A_inline(L_16, L_17, /*hidden argument*/NULL);
		V_4 = L_18;
		float L_19;
		L_19 = Vector2_get_magnitude_mD30DB8EB73C4A5CD395745AE1CA1C38DC61D2E85((Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 *)(&V_4), /*hidden argument*/NULL);
		float L_20 = ___width3;
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_21;
		memset((&L_21), 0, sizeof(L_21));
		Vector2__ctor_m9F1F2D5EB5D1FF7091BB527AC8A72CBB309D115E_inline((&L_21), L_19, L_20, /*hidden argument*/NULL);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_22 = ___pointA0;
		float L_23 = L_22.get_x_0();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_24 = ___pointA0;
		float L_25 = L_24.get_y_1();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_26;
		memset((&L_26), 0, sizeof(L_26));
		Vector2__ctor_m9F1F2D5EB5D1FF7091BB527AC8A72CBB309D115E_inline((&L_26), L_23, ((float)il2cpp_codegen_add((float)L_25, (float)(0.5f))), /*hidden argument*/NULL);
		GUIUtility_ScaleAroundPivot_mEEB3A9EBDA6F6461CDCB11986B032C6066CE81E8(L_21, L_26, /*hidden argument*/NULL);
		// GUIUtility.RotateAroundPivot(angle, pointA);
		float L_27 = V_2;
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_28 = ___pointA0;
		GUIUtility_RotateAroundPivot_m1CC188CD7951044BDF671AF0A7201D6133B9672C(L_27, L_28, /*hidden argument*/NULL);
		// GUI.DrawTexture(new Rect(pointA.x, pointA.y, 1, 1), OnePixTex);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_29 = ___pointA0;
		float L_30 = L_29.get_x_0();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_31 = ___pointA0;
		float L_32 = L_31.get_y_1();
		Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878  L_33;
		memset((&L_33), 0, sizeof(L_33));
		Rect__ctor_m12075526A02B55B680716A34AD5287B223122B70((&L_33), L_30, L_32, (1.0f), (1.0f), /*hidden argument*/NULL);
		Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * L_34;
		L_34 = VisualizationHelpers_get_OnePixTex_mFABF3F45732CC79316B44ABAB77F6EDEC5515C8D(/*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(GUI_tBCBBE29117D8093644C6E72B1CE3FB65C2CDCCC1_il2cpp_TypeInfo_var);
		GUI_DrawTexture_mDD0221088900E3F53BA7B8A03B9E5CD2E6FDD0F8(L_33, L_34, /*hidden argument*/NULL);
		// GUI.matrix = matrix;
		Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  L_35 = V_0;
		GUI_set_matrix_m071711DB6CD94992416D9E039AD6B25383B46222(L_35, /*hidden argument*/NULL);
		// GUI.color = savedColor;
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_36 = V_1;
		GUI_set_color_m627E2716FD33EF327E38EE0048CE44FAD77AB87F(L_36, /*hidden argument*/NULL);
		// }
		return;
	}
}
// UnityEngine.GUIStyle UnityEngine.InputSystem.Samples.VisualizationHelpers::get_ValueTextStyle()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * VisualizationHelpers_get_ValueTextStyle_mDDD19B37F92A291767250B60899DE7F393E3F6E9 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&VisualizationHelpers_t590688A7583BD35BAF03F9B4FB826286BBE01817_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * V_1 = NULL;
	{
		// if (s_ValueTextStyle == null)
		GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * L_0 = ((VisualizationHelpers_t590688A7583BD35BAF03F9B4FB826286BBE01817_StaticFields*)il2cpp_codegen_static_fields_for(VisualizationHelpers_t590688A7583BD35BAF03F9B4FB826286BBE01817_il2cpp_TypeInfo_var))->get_s_ValueTextStyle_1();
		V_0 = (bool)((((RuntimeObject*)(GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 *)L_0) == ((RuntimeObject*)(RuntimeObject *)NULL))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0041;
		}
	}
	{
		// s_ValueTextStyle = new GUIStyle();
		GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * L_2 = (GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 *)il2cpp_codegen_object_new(GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726_il2cpp_TypeInfo_var);
		GUIStyle__ctor_mDA0E00D0017FC0B2FC333C5DD6E1EDBAE3BCB8E3(L_2, /*hidden argument*/NULL);
		((VisualizationHelpers_t590688A7583BD35BAF03F9B4FB826286BBE01817_StaticFields*)il2cpp_codegen_static_fields_for(VisualizationHelpers_t590688A7583BD35BAF03F9B4FB826286BBE01817_il2cpp_TypeInfo_var))->set_s_ValueTextStyle_1(L_2);
		// s_ValueTextStyle.fontSize -= 2;
		GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * L_3 = ((VisualizationHelpers_t590688A7583BD35BAF03F9B4FB826286BBE01817_StaticFields*)il2cpp_codegen_static_fields_for(VisualizationHelpers_t590688A7583BD35BAF03F9B4FB826286BBE01817_il2cpp_TypeInfo_var))->get_s_ValueTextStyle_1();
		GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * L_4 = L_3;
		NullCheck(L_4);
		int32_t L_5;
		L_5 = GUIStyle_get_fontSize_mBB2A5059B7D8B82CEC451E10F01143A586C61A55(L_4, /*hidden argument*/NULL);
		NullCheck(L_4);
		GUIStyle_set_fontSize_mFA02B9950E09F880976FD2FF646FB8AAEED1C5C6(L_4, ((int32_t)il2cpp_codegen_subtract((int32_t)L_5, (int32_t)2)), /*hidden argument*/NULL);
		// s_ValueTextStyle.normal.textColor = Color.white;
		GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * L_6 = ((VisualizationHelpers_t590688A7583BD35BAF03F9B4FB826286BBE01817_StaticFields*)il2cpp_codegen_static_fields_for(VisualizationHelpers_t590688A7583BD35BAF03F9B4FB826286BBE01817_il2cpp_TypeInfo_var))->get_s_ValueTextStyle_1();
		NullCheck(L_6);
		GUIStyleState_tC89202668617B1D7884980314F293AD382B9AAD9 * L_7;
		L_7 = GUIStyle_get_normal_mAD82F2E3C188C5B112B82807398D61B9998E9CDE(L_6, /*hidden argument*/NULL);
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_8;
		L_8 = Color_get_white_mB21E47D20959C3AEC41AF8BA04F63AC89FAF319E(/*hidden argument*/NULL);
		NullCheck(L_7);
		GUIStyleState_set_textColor_mB4B61B9CAC1D6B4694471A2BB1191B5F0D5D764A(L_7, L_8, /*hidden argument*/NULL);
	}

IL_0041:
	{
		// return s_ValueTextStyle;
		GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * L_9 = ((VisualizationHelpers_t590688A7583BD35BAF03F9B4FB826286BBE01817_StaticFields*)il2cpp_codegen_static_fields_for(VisualizationHelpers_t590688A7583BD35BAF03F9B4FB826286BBE01817_il2cpp_TypeInfo_var))->get_s_ValueTextStyle_1();
		V_1 = L_9;
		goto IL_0049;
	}

IL_0049:
	{
		// }
		GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * L_10 = V_1;
		return L_10;
	}
}
// UnityEngine.Texture2D UnityEngine.InputSystem.Samples.VisualizationHelpers::get_OnePixTex()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * VisualizationHelpers_get_OnePixTex_mFABF3F45732CC79316B44ABAB77F6EDEC5515C8D (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&VisualizationHelpers_t590688A7583BD35BAF03F9B4FB826286BBE01817_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * V_1 = NULL;
	{
		// if (s_OnePixTex == null)
		Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * L_0 = ((VisualizationHelpers_t590688A7583BD35BAF03F9B4FB826286BBE01817_StaticFields*)il2cpp_codegen_static_fields_for(VisualizationHelpers_t590688A7583BD35BAF03F9B4FB826286BBE01817_il2cpp_TypeInfo_var))->get_s_OnePixTex_0();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Equality_mEE9EC7EB5C7DC3E95B94AB904E1986FC4D566D54(L_0, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		V_0 = L_1;
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_001c;
		}
	}
	{
		// s_OnePixTex = new Texture2D(1, 1);
		Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * L_3 = (Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF *)il2cpp_codegen_object_new(Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF_il2cpp_TypeInfo_var);
		Texture2D__ctor_m7D64AB4C55A01F2EE57483FD9EF826607DF9E4B4(L_3, 1, 1, /*hidden argument*/NULL);
		((VisualizationHelpers_t590688A7583BD35BAF03F9B4FB826286BBE01817_StaticFields*)il2cpp_codegen_static_fields_for(VisualizationHelpers_t590688A7583BD35BAF03F9B4FB826286BBE01817_il2cpp_TypeInfo_var))->set_s_OnePixTex_0(L_3);
	}

IL_001c:
	{
		// return s_OnePixTex;
		Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * L_4 = ((VisualizationHelpers_t590688A7583BD35BAF03F9B4FB826286BBE01817_StaticFields*)il2cpp_codegen_static_fields_for(VisualizationHelpers_t590688A7583BD35BAF03F9B4FB826286BBE01817_il2cpp_TypeInfo_var))->get_s_OnePixTex_0();
		V_1 = L_4;
		goto IL_0024;
	}

IL_0024:
	{
		// }
		Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * L_5 = V_1;
		return L_5;
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
// System.Boolean UnityEngine.InputSystem.Samples.VisualizationHelpers/TimelineVisualizer::get_showLegend()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TimelineVisualizer_get_showLegend_m76D2BCA5109D2FBB8A5666186A758A5163A4B50D (TimelineVisualizer_tDCF8FE655A93D562471977C145A8B989803EA315 * __this, const RuntimeMethod* method)
{
	{
		// public bool showLegend { get; set; }
		bool L_0 = __this->get_U3CshowLegendU3Ek__BackingField_0();
		return L_0;
	}
}
// System.Void UnityEngine.InputSystem.Samples.VisualizationHelpers/TimelineVisualizer::set_showLegend(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TimelineVisualizer_set_showLegend_mB4E3E5417669492C804D1718D0370657C6A6434B (TimelineVisualizer_tDCF8FE655A93D562471977C145A8B989803EA315 * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		// public bool showLegend { get; set; }
		bool L_0 = ___value0;
		__this->set_U3CshowLegendU3Ek__BackingField_0(L_0);
		return;
	}
}
// System.Boolean UnityEngine.InputSystem.Samples.VisualizationHelpers/TimelineVisualizer::get_showLimits()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TimelineVisualizer_get_showLimits_m07C398180EAE041B67798510A5ADFDAA852A87B3 (TimelineVisualizer_tDCF8FE655A93D562471977C145A8B989803EA315 * __this, const RuntimeMethod* method)
{
	{
		// public bool showLimits { get; set; }
		bool L_0 = __this->get_U3CshowLimitsU3Ek__BackingField_1();
		return L_0;
	}
}
// System.Void UnityEngine.InputSystem.Samples.VisualizationHelpers/TimelineVisualizer::set_showLimits(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TimelineVisualizer_set_showLimits_m5C5222B165A6EEB20C2BD897D29E3A0D8D409AC3 (TimelineVisualizer_tDCF8FE655A93D562471977C145A8B989803EA315 * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		// public bool showLimits { get; set; }
		bool L_0 = ___value0;
		__this->set_U3CshowLimitsU3Ek__BackingField_1(L_0);
		return;
	}
}
// UnityEngine.InputSystem.Samples.VisualizationHelpers/TimelineVisualizer/TimeUnit UnityEngine.InputSystem.Samples.VisualizationHelpers/TimelineVisualizer::get_timeUnit()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t TimelineVisualizer_get_timeUnit_mF6FCA53A8EA6CCC429BA80A17C290451B7DE8209 (TimelineVisualizer_tDCF8FE655A93D562471977C145A8B989803EA315 * __this, const RuntimeMethod* method)
{
	{
		// public TimeUnit timeUnit { get; set; } = TimeUnit.Seconds;
		int32_t L_0 = __this->get_U3CtimeUnitU3Ek__BackingField_2();
		return L_0;
	}
}
// System.Void UnityEngine.InputSystem.Samples.VisualizationHelpers/TimelineVisualizer::set_timeUnit(UnityEngine.InputSystem.Samples.VisualizationHelpers/TimelineVisualizer/TimeUnit)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TimelineVisualizer_set_timeUnit_mD5522FB42266C562986C4F6D4849199FDB86A2CC (TimelineVisualizer_tDCF8FE655A93D562471977C145A8B989803EA315 * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		// public TimeUnit timeUnit { get; set; } = TimeUnit.Seconds;
		int32_t L_0 = ___value0;
		__this->set_U3CtimeUnitU3Ek__BackingField_2(L_0);
		return;
	}
}
// UnityEngine.GUIContent UnityEngine.InputSystem.Samples.VisualizationHelpers/TimelineVisualizer::get_valueUnit()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GUIContent_t39256993BF4A33F76E073488D6A2F13D678DF60E * TimelineVisualizer_get_valueUnit_m04B310E2EE15B7D51FE0FCC9928B4F8C443ADD02 (TimelineVisualizer_tDCF8FE655A93D562471977C145A8B989803EA315 * __this, const RuntimeMethod* method)
{
	{
		// public GUIContent valueUnit { get; set; }
		GUIContent_t39256993BF4A33F76E073488D6A2F13D678DF60E * L_0 = __this->get_U3CvalueUnitU3Ek__BackingField_3();
		return L_0;
	}
}
// System.Void UnityEngine.InputSystem.Samples.VisualizationHelpers/TimelineVisualizer::set_valueUnit(UnityEngine.GUIContent)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TimelineVisualizer_set_valueUnit_m68DEDAC6246114169451B77BAA89C357E8F57E37 (TimelineVisualizer_tDCF8FE655A93D562471977C145A8B989803EA315 * __this, GUIContent_t39256993BF4A33F76E073488D6A2F13D678DF60E * ___value0, const RuntimeMethod* method)
{
	{
		// public GUIContent valueUnit { get; set; }
		GUIContent_t39256993BF4A33F76E073488D6A2F13D678DF60E * L_0 = ___value0;
		__this->set_U3CvalueUnitU3Ek__BackingField_3(L_0);
		return;
	}
}
// System.Int32 UnityEngine.InputSystem.Samples.VisualizationHelpers/TimelineVisualizer::get_timelineCount()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t TimelineVisualizer_get_timelineCount_m7DF69E3DC601AF2B2B8DFBE4FE651A19D5E29932 (TimelineVisualizer_tDCF8FE655A93D562471977C145A8B989803EA315 * __this, const RuntimeMethod* method)
{
	int32_t G_B3_0 = 0;
	{
		// public int timelineCount => m_Timelines != null ? m_Timelines.Length : 0;
		TimelineU5BU5D_tC4060193BF7CE25CDC70D417EEDC7175EA74B44F* L_0 = __this->get_m_Timelines_9();
		if (L_0)
		{
			goto IL_000b;
		}
	}
	{
		G_B3_0 = 0;
		goto IL_0013;
	}

IL_000b:
	{
		TimelineU5BU5D_tC4060193BF7CE25CDC70D417EEDC7175EA74B44F* L_1 = __this->get_m_Timelines_9();
		NullCheck(L_1);
		G_B3_0 = ((int32_t)((int32_t)(((RuntimeArray*)L_1)->max_length)));
	}

IL_0013:
	{
		return G_B3_0;
	}
}
// System.Int32 UnityEngine.InputSystem.Samples.VisualizationHelpers/TimelineVisualizer::get_historyDepth()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t TimelineVisualizer_get_historyDepth_mEB98A597D139219DF157F47E1EB425C9B7985EA2 (TimelineVisualizer_tDCF8FE655A93D562471977C145A8B989803EA315 * __this, const RuntimeMethod* method)
{
	{
		// public int historyDepth { get; set; } = 100;
		int32_t L_0 = __this->get_U3ChistoryDepthU3Ek__BackingField_4();
		return L_0;
	}
}
// System.Void UnityEngine.InputSystem.Samples.VisualizationHelpers/TimelineVisualizer::set_historyDepth(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TimelineVisualizer_set_historyDepth_m5D8C6D1A1D48F2232A428683AB5F9DB2C6043083 (TimelineVisualizer_tDCF8FE655A93D562471977C145A8B989803EA315 * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		// public int historyDepth { get; set; } = 100;
		int32_t L_0 = ___value0;
		__this->set_U3ChistoryDepthU3Ek__BackingField_4(L_0);
		return;
	}
}
// UnityEngine.Vector2 UnityEngine.InputSystem.Samples.VisualizationHelpers/TimelineVisualizer::get_limitsY()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  TimelineVisualizer_get_limitsY_m21AD946F4CC59C31D30B70E84D4C9CB317EB7A3C (TimelineVisualizer_tDCF8FE655A93D562471977C145A8B989803EA315 * __this, const RuntimeMethod* method)
{
	{
		// get => m_LimitsY;
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_0 = __this->get_m_LimitsY_6();
		return L_0;
	}
}
// System.Void UnityEngine.InputSystem.Samples.VisualizationHelpers/TimelineVisualizer::set_limitsY(UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TimelineVisualizer_set_limitsY_mBC2A875F5B15BBFA8AF8D385765F01A24489A376 (TimelineVisualizer_tDCF8FE655A93D562471977C145A8B989803EA315 * __this, Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___value0, const RuntimeMethod* method)
{
	{
		// m_LimitsY = value;
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_0 = ___value0;
		__this->set_m_LimitsY_6(L_0);
		// m_LimitsYMin = null;
		__this->set_m_LimitsYMin_7((GUIContent_t39256993BF4A33F76E073488D6A2F13D678DF60E *)NULL);
		// m_LimitsYMax = null;
		__this->set_m_LimitsYMax_8((GUIContent_t39256993BF4A33F76E073488D6A2F13D678DF60E *)NULL);
		// }
		return;
	}
}
// System.Void UnityEngine.InputSystem.Samples.VisualizationHelpers/TimelineVisualizer::.ctor(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TimelineVisualizer__ctor_mE49C33F4374AF61480A4C1CD7DB5B933366293BA (TimelineVisualizer_tDCF8FE655A93D562471977C145A8B989803EA315 * __this, float ___totalTimeUnitsShown0, const RuntimeMethod* method)
{
	{
		// public TimeUnit timeUnit { get; set; } = TimeUnit.Seconds;
		__this->set_U3CtimeUnitU3Ek__BackingField_2(0);
		// public int historyDepth { get; set; } = 100;
		__this->set_U3ChistoryDepthU3Ek__BackingField_4(((int32_t)100));
		// private Vector2 m_LimitsY = new Vector2(-1, 1);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_0;
		memset((&L_0), 0, sizeof(L_0));
		Vector2__ctor_m9F1F2D5EB5D1FF7091BB527AC8A72CBB309D115E_inline((&L_0), (-1.0f), (1.0f), /*hidden argument*/NULL);
		__this->set_m_LimitsY_6(L_0);
		// public TimelineVisualizer(float totalTimeUnitsShown = 4)
		Visualizer__ctor_mAD0F3ADB5469953D1A1C6A84B235D3A9D3095F2E(__this, /*hidden argument*/NULL);
		// m_TotalTimeUnitsShown = totalTimeUnitsShown;
		float L_1 = ___totalTimeUnitsShown0;
		__this->set_m_TotalTimeUnitsShown_5(L_1);
		// }
		return;
	}
}
// System.Void UnityEngine.InputSystem.Samples.VisualizationHelpers/TimelineVisualizer::OnDraw(UnityEngine.Rect)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TimelineVisualizer_OnDraw_m81E7573089904ABD8DE495963C5C49C8A634D45B (TimelineVisualizer_tDCF8FE655A93D562471977C145A8B989803EA315 * __this, Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878  ___rect0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GUIContent_t39256993BF4A33F76E073488D6A2F13D678DF60E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GUI_tBCBBE29117D8093644C6E72B1CE3FB65C2CDCCC1_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RingBuffer_1_get_Item_m324251981EEDA84F8C57FDBB08FB72521CD65892_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RingBuffer_1_get_Item_mF7D35F29AD84949BD33FCD9F6F4AB2F5787DB756_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	uint32_t V_2 = 0;
	int64_t V_3 = 0;
	int32_t V_4 = 0;
	Timeline_t0E8C3B4B157DAE25A77A695529CE737933D5CCBE  V_5;
	memset((&V_5), 0, sizeof(V_5));
	int32_t V_6 = 0;
	int32_t V_7 = 0;
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  V_8;
	memset((&V_8), 0, sizeof(V_8));
	float V_9 = 0.0f;
	Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  V_10;
	memset((&V_10), 0, sizeof(V_10));
	int32_t V_11 = 0;
	PrimitiveValue_tB787C76E9A37444599C45519DD7E4D3A1D4730C8  V_12;
	memset((&V_12), 0, sizeof(V_12));
	float V_13 = 0.0f;
	float V_14 = 0.0f;
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  V_15;
	memset((&V_15), 0, sizeof(V_15));
	bool V_16 = false;
	bool V_17 = false;
	bool V_18 = false;
	bool V_19 = false;
	bool V_20 = false;
	Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878  V_21;
	memset((&V_21), 0, sizeof(V_21));
	bool V_22 = false;
	bool V_23 = false;
	bool V_24 = false;
	Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878  V_25;
	memset((&V_25), 0, sizeof(V_25));
	int32_t V_26 = 0;
	Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878  V_27;
	memset((&V_27), 0, sizeof(V_27));
	Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878  V_28;
	memset((&V_28), 0, sizeof(V_28));
	bool V_29 = false;
	bool V_30 = false;
	bool V_31 = false;
	bool V_32 = false;
	int32_t G_B4_0 = 0;
	PrimitiveValue_tB787C76E9A37444599C45519DD7E4D3A1D4730C8  G_B8_0;
	memset((&G_B8_0), 0, sizeof(G_B8_0));
	float G_B14_0 = 0.0f;
	int32_t G_B29_0 = 0;
	{
		// var endTime = Time.realtimeSinceStartup;
		float L_0;
		L_0 = Time_get_realtimeSinceStartup_m5228CC1C1E57213D4148E965499072EA70D8C02B(/*hidden argument*/NULL);
		V_0 = L_0;
		// var startTime = endTime - m_TotalTimeUnitsShown;
		float L_1 = V_0;
		float L_2 = __this->get_m_TotalTimeUnitsShown_5();
		V_1 = ((float)il2cpp_codegen_subtract((float)L_1, (float)L_2));
		// var endFrame = InputState.updateCount;
		uint32_t L_3;
		L_3 = InputState_get_updateCount_m53C26B51E7177C1189A0E0562045F6F17522492A_inline(/*hidden argument*/NULL);
		V_2 = L_3;
		// var startFrame = endFrame - (int)m_TotalTimeUnitsShown;
		uint32_t L_4 = V_2;
		float L_5 = __this->get_m_TotalTimeUnitsShown_5();
		V_3 = ((int64_t)il2cpp_codegen_subtract((int64_t)((int64_t)((uint64_t)L_4)), (int64_t)((int64_t)((int64_t)((int32_t)((int32_t)L_5))))));
		// for (var i = 0; i < timelineCount; ++i)
		V_4 = 0;
		goto IL_0217;
	}

IL_002a:
	{
		// var timeline = m_Timelines[i];
		TimelineU5BU5D_tC4060193BF7CE25CDC70D417EEDC7175EA74B44F* L_6 = __this->get_m_Timelines_9();
		int32_t L_7 = V_4;
		NullCheck(L_6);
		int32_t L_8 = L_7;
		Timeline_t0E8C3B4B157DAE25A77A695529CE737933D5CCBE  L_9 = (L_6)->GetAt(static_cast<il2cpp_array_size_t>(L_8));
		V_5 = L_9;
		// var sampleCount = timeUnit == TimeUnit.Frames
		//     ? timeline.frameSamples.count
		//     : timeline.timeSamples.count;
		int32_t L_10;
		L_10 = TimelineVisualizer_get_timeUnit_mF6FCA53A8EA6CCC429BA80A17C290451B7DE8209_inline(__this, /*hidden argument*/NULL);
		if ((((int32_t)L_10) == ((int32_t)1)))
		{
			goto IL_0051;
		}
	}
	{
		Timeline_t0E8C3B4B157DAE25A77A695529CE737933D5CCBE  L_11 = V_5;
		RingBuffer_1_tD482466EFEACC434BCF1AE233235CA27903B4370  L_12 = L_11.get_timeSamples_2();
		int32_t L_13 = L_12.get_count_2();
		G_B4_0 = L_13;
		goto IL_005d;
	}

IL_0051:
	{
		Timeline_t0E8C3B4B157DAE25A77A695529CE737933D5CCBE  L_14 = V_5;
		RingBuffer_1_t6C5FD528A08BBDFABB08C4C1A6086AF9E61B794E  L_15 = L_14.get_frameSamples_3();
		int32_t L_16 = L_15.get_count_2();
		G_B4_0 = L_16;
	}

IL_005d:
	{
		V_6 = G_B4_0;
		// GUI.BeginGroup(rect);
		Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878  L_17 = ___rect0;
		IL2CPP_RUNTIME_CLASS_INIT(GUI_tBCBBE29117D8093644C6E72B1CE3FB65C2CDCCC1_il2cpp_TypeInfo_var);
		GUI_BeginGroup_m905B2872B44E5D2CEAD7162B57688189A996CE64(L_17, /*hidden argument*/NULL);
		// var plotType = timeline.plotType;
		Timeline_t0E8C3B4B157DAE25A77A695529CE737933D5CCBE  L_18 = V_5;
		int32_t L_19 = L_18.get_plotType_6();
		V_7 = L_19;
		// var lastPos = default(Vector2);
		il2cpp_codegen_initobj((&V_8), sizeof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 ));
		// var timeUnitsPerPixel = rect.width / m_TotalTimeUnitsShown;
		float L_20;
		L_20 = Rect_get_width_m4A0500D95CA84917787A8E90D26E66D49DFA90EF((Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878 *)(&___rect0), /*hidden argument*/NULL);
		float L_21 = __this->get_m_TotalTimeUnitsShown_5();
		V_9 = ((float)((float)L_20/(float)L_21));
		// var color = m_Timelines[i].color;
		TimelineU5BU5D_tC4060193BF7CE25CDC70D417EEDC7175EA74B44F* L_22 = __this->get_m_Timelines_9();
		int32_t L_23 = V_4;
		NullCheck(L_22);
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_24 = ((L_22)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_23)))->get_color_1();
		V_10 = L_24;
		// for (var n = sampleCount - 1; n >= 0; --n)
		int32_t L_25 = V_6;
		V_11 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_25, (int32_t)1));
		goto IL_01f9;
	}

IL_00a6:
	{
		// var sample = timeUnit == TimeUnit.Frames
		//     ? timeline.frameSamples[n].value
		//     : timeline.timeSamples[n].value;
		int32_t L_26;
		L_26 = TimelineVisualizer_get_timeUnit_mF6FCA53A8EA6CCC429BA80A17C290451B7DE8209_inline(__this, /*hidden argument*/NULL);
		if ((((int32_t)L_26) == ((int32_t)1)))
		{
			goto IL_00c5;
		}
	}
	{
		RingBuffer_1_tD482466EFEACC434BCF1AE233235CA27903B4370 * L_27 = (&V_5)->get_address_of_timeSamples_2();
		int32_t L_28 = V_11;
		TimeSample_t926350553A4576F5F20E71A9CFB9A19E37F35C2B * L_29;
		L_29 = RingBuffer_1_get_Item_mF7D35F29AD84949BD33FCD9F6F4AB2F5787DB756((RingBuffer_1_tD482466EFEACC434BCF1AE233235CA27903B4370 *)L_27, L_28, /*hidden argument*/RingBuffer_1_get_Item_mF7D35F29AD84949BD33FCD9F6F4AB2F5787DB756_RuntimeMethod_var);
		PrimitiveValue_tB787C76E9A37444599C45519DD7E4D3A1D4730C8  L_30 = L_29->get_value_0();
		G_B8_0 = L_30;
		goto IL_00d8;
	}

IL_00c5:
	{
		RingBuffer_1_t6C5FD528A08BBDFABB08C4C1A6086AF9E61B794E * L_31 = (&V_5)->get_address_of_frameSamples_3();
		int32_t L_32 = V_11;
		FrameSample_t8064F61DD3BB94546FB62C119AB80FAD66546E1B * L_33;
		L_33 = RingBuffer_1_get_Item_m324251981EEDA84F8C57FDBB08FB72521CD65892((RingBuffer_1_t6C5FD528A08BBDFABB08C4C1A6086AF9E61B794E *)L_31, L_32, /*hidden argument*/RingBuffer_1_get_Item_m324251981EEDA84F8C57FDBB08FB72521CD65892_RuntimeMethod_var);
		PrimitiveValue_tB787C76E9A37444599C45519DD7E4D3A1D4730C8  L_34 = L_33->get_value_0();
		G_B8_0 = L_34;
	}

IL_00d8:
	{
		V_12 = G_B8_0;
		// if (sample.isEmpty)
		bool L_35;
		L_35 = PrimitiveValue_get_isEmpty_m37CB4094125F0485BC712CBD962C89190A93174D((PrimitiveValue_tB787C76E9A37444599C45519DD7E4D3A1D4730C8 *)(&V_12), /*hidden argument*/NULL);
		V_16 = L_35;
		bool L_36 = V_16;
		if (!L_36)
		{
			goto IL_00f0;
		}
	}
	{
		// y = 0.5f;
		V_13 = (0.5f);
		goto IL_00fa;
	}

IL_00f0:
	{
		// y = sample.ToSingle();
		float L_37;
		L_37 = PrimitiveValue_ToSingle_m054D300CB21621FCB5313ABAD886DC7404DB2F82((PrimitiveValue_tB787C76E9A37444599C45519DD7E4D3A1D4730C8 *)(&V_12), (RuntimeObject*)NULL, /*hidden argument*/NULL);
		V_13 = L_37;
	}

IL_00fa:
	{
		// y /= limitsY.y;
		float L_38 = V_13;
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_39;
		L_39 = TimelineVisualizer_get_limitsY_m21AD946F4CC59C31D30B70E84D4C9CB317EB7A3C_inline(__this, /*hidden argument*/NULL);
		float L_40 = L_39.get_y_1();
		V_13 = ((float)((float)L_38/(float)L_40));
		// var deltaTime = timeUnit == TimeUnit.Frames
		//     ? timeline.frameSamples[n].frame - startFrame
		//     : timeline.timeSamples[n].time - startTime;
		int32_t L_41;
		L_41 = TimelineVisualizer_get_timeUnit_mF6FCA53A8EA6CCC429BA80A17C290451B7DE8209_inline(__this, /*hidden argument*/NULL);
		if ((((int32_t)L_41) == ((int32_t)1)))
		{
			goto IL_012a;
		}
	}
	{
		RingBuffer_1_tD482466EFEACC434BCF1AE233235CA27903B4370 * L_42 = (&V_5)->get_address_of_timeSamples_2();
		int32_t L_43 = V_11;
		TimeSample_t926350553A4576F5F20E71A9CFB9A19E37F35C2B * L_44;
		L_44 = RingBuffer_1_get_Item_mF7D35F29AD84949BD33FCD9F6F4AB2F5787DB756((RingBuffer_1_tD482466EFEACC434BCF1AE233235CA27903B4370 *)L_42, L_43, /*hidden argument*/RingBuffer_1_get_Item_mF7D35F29AD84949BD33FCD9F6F4AB2F5787DB756_RuntimeMethod_var);
		float L_45 = L_44->get_time_1();
		float L_46 = V_1;
		G_B14_0 = ((float)il2cpp_codegen_subtract((float)L_45, (float)L_46));
		goto IL_0141;
	}

IL_012a:
	{
		RingBuffer_1_t6C5FD528A08BBDFABB08C4C1A6086AF9E61B794E * L_47 = (&V_5)->get_address_of_frameSamples_3();
		int32_t L_48 = V_11;
		FrameSample_t8064F61DD3BB94546FB62C119AB80FAD66546E1B * L_49;
		L_49 = RingBuffer_1_get_Item_m324251981EEDA84F8C57FDBB08FB72521CD65892((RingBuffer_1_t6C5FD528A08BBDFABB08C4C1A6086AF9E61B794E *)L_47, L_48, /*hidden argument*/RingBuffer_1_get_Item_m324251981EEDA84F8C57FDBB08FB72521CD65892_RuntimeMethod_var);
		int32_t L_50 = L_49->get_frame_1();
		int64_t L_51 = V_3;
		G_B14_0 = ((float)((float)((int64_t)il2cpp_codegen_subtract((int64_t)((int64_t)((int64_t)L_50)), (int64_t)L_51))));
	}

IL_0141:
	{
		V_14 = G_B14_0;
		// var pos = new Vector2(deltaTime * timeUnitsPerPixel, rect.height - y * rect.height);
		float L_52 = V_14;
		float L_53 = V_9;
		float L_54;
		L_54 = Rect_get_height_m42FEF31015A269E6E2B7E6F62E72E5BF6602302A((Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878 *)(&___rect0), /*hidden argument*/NULL);
		float L_55 = V_13;
		float L_56;
		L_56 = Rect_get_height_m42FEF31015A269E6E2B7E6F62E72E5BF6602302A((Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878 *)(&___rect0), /*hidden argument*/NULL);
		Vector2__ctor_m9F1F2D5EB5D1FF7091BB527AC8A72CBB309D115E_inline((Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 *)(&V_15), ((float)il2cpp_codegen_multiply((float)L_52, (float)L_53)), ((float)il2cpp_codegen_subtract((float)L_54, (float)((float)il2cpp_codegen_multiply((float)L_55, (float)L_56)))), /*hidden argument*/NULL);
		// if (plotType == PlotType.LineGraph)
		int32_t L_57 = V_7;
		V_17 = (bool)((((int32_t)L_57) == ((int32_t)0))? 1 : 0);
		bool L_58 = V_17;
		if (!L_58)
		{
			goto IL_01aa;
		}
	}
	{
		// if (n != sampleCount - 1)
		int32_t L_59 = V_11;
		int32_t L_60 = V_6;
		V_18 = (bool)((((int32_t)((((int32_t)L_59) == ((int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_60, (int32_t)1))))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_61 = V_18;
		if (!L_61)
		{
			goto IL_01a7;
		}
	}
	{
		// DrawLine(lastPos, pos, color, 2);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_62 = V_8;
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_63 = V_15;
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_64 = V_10;
		VisualizationHelpers_DrawLine_m5092487DE42DE433CBF73DB576C6F69E1D439E45(L_62, L_63, L_64, (2.0f), /*hidden argument*/NULL);
		// if (pos.x < 0)
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_65 = V_15;
		float L_66 = L_65.get_x_0();
		V_19 = (bool)((((float)L_66) < ((float)(0.0f)))? 1 : 0);
		bool L_67 = V_19;
		if (!L_67)
		{
			goto IL_01a6;
		}
	}
	{
		// break;
		goto IL_020a;
	}

IL_01a6:
	{
	}

IL_01a7:
	{
		goto IL_01ee;
	}

IL_01aa:
	{
		// else if (plotType == PlotType.BarChart)
		int32_t L_68 = V_7;
		V_20 = (bool)((((int32_t)L_68) == ((int32_t)1))? 1 : 0);
		bool L_69 = V_20;
		if (!L_69)
		{
			goto IL_01ee;
		}
	}
	{
		// var barRect = new Rect(pos.x, pos.y, timeUnitsPerPixel, y * limitsY.y * rect.height);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_70 = V_15;
		float L_71 = L_70.get_x_0();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_72 = V_15;
		float L_73 = L_72.get_y_1();
		float L_74 = V_9;
		float L_75 = V_13;
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_76;
		L_76 = TimelineVisualizer_get_limitsY_m21AD946F4CC59C31D30B70E84D4C9CB317EB7A3C_inline(__this, /*hidden argument*/NULL);
		float L_77 = L_76.get_y_1();
		float L_78;
		L_78 = Rect_get_height_m42FEF31015A269E6E2B7E6F62E72E5BF6602302A((Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878 *)(&___rect0), /*hidden argument*/NULL);
		Rect__ctor_m12075526A02B55B680716A34AD5287B223122B70((Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878 *)(&V_21), L_71, L_73, L_74, ((float)il2cpp_codegen_multiply((float)((float)il2cpp_codegen_multiply((float)L_75, (float)L_77)), (float)L_78)), /*hidden argument*/NULL);
		// DrawRectangle(barRect, color);
		Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878  L_79 = V_21;
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_80 = V_10;
		VisualizationHelpers_DrawRectangle_mCE75B71D5E3EB525AED283FE50CEA73998357E29(L_79, L_80, /*hidden argument*/NULL);
	}

IL_01ee:
	{
		// lastPos = pos;
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_81 = V_15;
		V_8 = L_81;
		// for (var n = sampleCount - 1; n >= 0; --n)
		int32_t L_82 = V_11;
		V_11 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_82, (int32_t)1));
	}

IL_01f9:
	{
		// for (var n = sampleCount - 1; n >= 0; --n)
		int32_t L_83 = V_11;
		V_22 = (bool)((((int32_t)((((int32_t)L_83) < ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_84 = V_22;
		if (L_84)
		{
			goto IL_00a6;
		}
	}

IL_020a:
	{
		// GUI.EndGroup();
		IL2CPP_RUNTIME_CLASS_INIT(GUI_tBCBBE29117D8093644C6E72B1CE3FB65C2CDCCC1_il2cpp_TypeInfo_var);
		GUI_EndGroup_m9B704F4411F4B1A91953CDCEE0877600A306F217(/*hidden argument*/NULL);
		// for (var i = 0; i < timelineCount; ++i)
		int32_t L_85 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add((int32_t)L_85, (int32_t)1));
	}

IL_0217:
	{
		// for (var i = 0; i < timelineCount; ++i)
		int32_t L_86 = V_4;
		int32_t L_87;
		L_87 = TimelineVisualizer_get_timelineCount_m7DF69E3DC601AF2B2B8DFBE4FE651A19D5E29932(__this, /*hidden argument*/NULL);
		V_23 = (bool)((((int32_t)L_86) < ((int32_t)L_87))? 1 : 0);
		bool L_88 = V_23;
		if (L_88)
		{
			goto IL_002a;
		}
	}
	{
		// if (showLegend && timelineCount > 0)
		bool L_89;
		L_89 = TimelineVisualizer_get_showLegend_m76D2BCA5109D2FBB8A5666186A758A5163A4B50D_inline(__this, /*hidden argument*/NULL);
		if (!L_89)
		{
			goto IL_023d;
		}
	}
	{
		int32_t L_90;
		L_90 = TimelineVisualizer_get_timelineCount_m7DF69E3DC601AF2B2B8DFBE4FE651A19D5E29932(__this, /*hidden argument*/NULL);
		G_B29_0 = ((((int32_t)L_90) > ((int32_t)0))? 1 : 0);
		goto IL_023e;
	}

IL_023d:
	{
		G_B29_0 = 0;
	}

IL_023e:
	{
		V_24 = (bool)G_B29_0;
		bool L_91 = V_24;
		if (!L_91)
		{
			goto IL_0359;
		}
	}
	{
		// var legendRect = rect;
		Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878  L_92 = ___rect0;
		V_25 = L_92;
		// legendRect.x += rect.width + 2;
		Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878 * L_93 = (&V_25);
		float L_94;
		L_94 = Rect_get_x_mA61220F6F26ECD6951B779FFA7CAD7ECE11D6987((Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878 *)L_93, /*hidden argument*/NULL);
		float L_95;
		L_95 = Rect_get_width_m4A0500D95CA84917787A8E90D26E66D49DFA90EF((Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878 *)(&___rect0), /*hidden argument*/NULL);
		Rect_set_x_m1147A05B5046E1D4427E8EC99B9DFA4A32EEDEE6((Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878 *)L_93, ((float)il2cpp_codegen_add((float)L_94, (float)((float)il2cpp_codegen_add((float)L_95, (float)(2.0f))))), /*hidden argument*/NULL);
		// legendRect.width = 400;
		Rect_set_width_m07D84AD7C7093EDCCD94A7B93A9447CA9917DD9D((Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878 *)(&V_25), (400.0f), /*hidden argument*/NULL);
		// legendRect.height = ValueTextStyle.CalcHeight(m_Timelines[0].name, 400);
		GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * L_96;
		L_96 = VisualizationHelpers_get_ValueTextStyle_mDDD19B37F92A291767250B60899DE7F393E3F6E9(/*hidden argument*/NULL);
		TimelineU5BU5D_tC4060193BF7CE25CDC70D417EEDC7175EA74B44F* L_97 = __this->get_m_Timelines_9();
		NullCheck(L_97);
		GUIContent_t39256993BF4A33F76E073488D6A2F13D678DF60E * L_98 = ((L_97)->GetAddressAt(static_cast<il2cpp_array_size_t>(0)))->get_name_0();
		NullCheck(L_96);
		float L_99;
		L_99 = GUIStyle_CalcHeight_m120220D334AEC6B33F4767EA54FE78CEC09FBCC9(L_96, L_98, (400.0f), /*hidden argument*/NULL);
		Rect_set_height_m4A00B16C122F44FEF4BA074386F3DC11FF4B4D23((Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878 *)(&V_25), L_99, /*hidden argument*/NULL);
		// for (var i = 0; i < m_Timelines.Length; ++i)
		V_26 = 0;
		goto IL_0343;
	}

IL_02a4:
	{
		// var colorTagRect = legendRect;
		Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878  L_100 = V_25;
		V_27 = L_100;
		// colorTagRect.width = 5;
		Rect_set_width_m07D84AD7C7093EDCCD94A7B93A9447CA9917DD9D((Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878 *)(&V_27), (5.0f), /*hidden argument*/NULL);
		// var labelRect = legendRect;
		Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878  L_101 = V_25;
		V_28 = L_101;
		// labelRect.x += 8;
		Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878 * L_102 = (&V_28);
		float L_103;
		L_103 = Rect_get_x_mA61220F6F26ECD6951B779FFA7CAD7ECE11D6987((Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878 *)L_102, /*hidden argument*/NULL);
		Rect_set_x_m1147A05B5046E1D4427E8EC99B9DFA4A32EEDEE6((Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878 *)L_102, ((float)il2cpp_codegen_add((float)L_103, (float)(8.0f))), /*hidden argument*/NULL);
		// labelRect.width -= 8;
		Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878 * L_104 = (&V_28);
		float L_105;
		L_105 = Rect_get_width_m4A0500D95CA84917787A8E90D26E66D49DFA90EF((Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878 *)L_104, /*hidden argument*/NULL);
		Rect_set_width_m07D84AD7C7093EDCCD94A7B93A9447CA9917DD9D((Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878 *)L_104, ((float)il2cpp_codegen_subtract((float)L_105, (float)(8.0f))), /*hidden argument*/NULL);
		// DrawRectangle(colorTagRect, m_Timelines[i].color);
		Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878  L_106 = V_27;
		TimelineU5BU5D_tC4060193BF7CE25CDC70D417EEDC7175EA74B44F* L_107 = __this->get_m_Timelines_9();
		int32_t L_108 = V_26;
		NullCheck(L_107);
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_109 = ((L_107)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_108)))->get_color_1();
		VisualizationHelpers_DrawRectangle_mCE75B71D5E3EB525AED283FE50CEA73998357E29(L_106, L_109, /*hidden argument*/NULL);
		// DrawText(m_Timelines[i].name, labelRect.position, ValueTextStyle);
		TimelineU5BU5D_tC4060193BF7CE25CDC70D417EEDC7175EA74B44F* L_110 = __this->get_m_Timelines_9();
		int32_t L_111 = V_26;
		NullCheck(L_110);
		GUIContent_t39256993BF4A33F76E073488D6A2F13D678DF60E * L_112 = ((L_110)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_111)))->get_name_0();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_113;
		L_113 = Rect_get_position_m4D98DEE21C60D7EA5E4A30869F4DBDE25DB93A86((Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878 *)(&V_28), /*hidden argument*/NULL);
		GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * L_114;
		L_114 = VisualizationHelpers_get_ValueTextStyle_mDDD19B37F92A291767250B60899DE7F393E3F6E9(/*hidden argument*/NULL);
		VisualizationHelpers_DrawText_m75EAB1C9E4CA84D969F2EFD1BF20605FFEDE88C7(L_112, L_113, L_114, /*hidden argument*/NULL);
		// legendRect.y += labelRect.height + 2;
		Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878 * L_115 = (&V_25);
		float L_116;
		L_116 = Rect_get_y_m4E1AAD20D167085FF4F9E9C86EF34689F5770A74((Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878 *)L_115, /*hidden argument*/NULL);
		float L_117;
		L_117 = Rect_get_height_m42FEF31015A269E6E2B7E6F62E72E5BF6602302A((Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878 *)(&V_28), /*hidden argument*/NULL);
		Rect_set_y_m015507262F8AC5AFF1B4E986B66307F31FB3A10E((Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878 *)L_115, ((float)il2cpp_codegen_add((float)L_116, (float)((float)il2cpp_codegen_add((float)L_117, (float)(2.0f))))), /*hidden argument*/NULL);
		// for (var i = 0; i < m_Timelines.Length; ++i)
		int32_t L_118 = V_26;
		V_26 = ((int32_t)il2cpp_codegen_add((int32_t)L_118, (int32_t)1));
	}

IL_0343:
	{
		// for (var i = 0; i < m_Timelines.Length; ++i)
		int32_t L_119 = V_26;
		TimelineU5BU5D_tC4060193BF7CE25CDC70D417EEDC7175EA74B44F* L_120 = __this->get_m_Timelines_9();
		NullCheck(L_120);
		V_29 = (bool)((((int32_t)L_119) < ((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_120)->max_length)))))? 1 : 0);
		bool L_121 = V_29;
		if (L_121)
		{
			goto IL_02a4;
		}
	}
	{
	}

IL_0359:
	{
		// if (showLimits)
		bool L_122;
		L_122 = TimelineVisualizer_get_showLimits_m07C398180EAE041B67798510A5ADFDAA852A87B3_inline(__this, /*hidden argument*/NULL);
		V_30 = L_122;
		bool L_123 = V_30;
		if (!L_123)
		{
			goto IL_041e;
		}
	}
	{
		// if (m_LimitsYMax == null)
		GUIContent_t39256993BF4A33F76E073488D6A2F13D678DF60E * L_124 = __this->get_m_LimitsYMax_8();
		V_31 = (bool)((((RuntimeObject*)(GUIContent_t39256993BF4A33F76E073488D6A2F13D678DF60E *)L_124) == ((RuntimeObject*)(RuntimeObject *)NULL))? 1 : 0);
		bool L_125 = V_31;
		if (!L_125)
		{
			goto IL_0393;
		}
	}
	{
		// m_LimitsYMax = new GUIContent(m_LimitsY.y.ToString());
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * L_126 = __this->get_address_of_m_LimitsY_6();
		float* L_127 = L_126->get_address_of_y_1();
		String_t* L_128;
		L_128 = Single_ToString_m80E7ABED4F4D73F2BE19DDB80D3D92FCD8DFA010((float*)L_127, /*hidden argument*/NULL);
		GUIContent_t39256993BF4A33F76E073488D6A2F13D678DF60E * L_129 = (GUIContent_t39256993BF4A33F76E073488D6A2F13D678DF60E *)il2cpp_codegen_object_new(GUIContent_t39256993BF4A33F76E073488D6A2F13D678DF60E_il2cpp_TypeInfo_var);
		GUIContent__ctor_m3FABF20C213051E685B41CA898A20885E02111F0(L_129, L_128, /*hidden argument*/NULL);
		__this->set_m_LimitsYMax_8(L_129);
	}

IL_0393:
	{
		// if (m_LimitsYMin == null)
		GUIContent_t39256993BF4A33F76E073488D6A2F13D678DF60E * L_130 = __this->get_m_LimitsYMin_7();
		V_32 = (bool)((((RuntimeObject*)(GUIContent_t39256993BF4A33F76E073488D6A2F13D678DF60E *)L_130) == ((RuntimeObject*)(RuntimeObject *)NULL))? 1 : 0);
		bool L_131 = V_32;
		if (!L_131)
		{
			goto IL_03bd;
		}
	}
	{
		// m_LimitsYMin = new GUIContent(m_LimitsY.x.ToString());
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * L_132 = __this->get_address_of_m_LimitsY_6();
		float* L_133 = L_132->get_address_of_x_0();
		String_t* L_134;
		L_134 = Single_ToString_m80E7ABED4F4D73F2BE19DDB80D3D92FCD8DFA010((float*)L_133, /*hidden argument*/NULL);
		GUIContent_t39256993BF4A33F76E073488D6A2F13D678DF60E * L_135 = (GUIContent_t39256993BF4A33F76E073488D6A2F13D678DF60E *)il2cpp_codegen_object_new(GUIContent_t39256993BF4A33F76E073488D6A2F13D678DF60E_il2cpp_TypeInfo_var);
		GUIContent__ctor_m3FABF20C213051E685B41CA898A20885E02111F0(L_135, L_134, /*hidden argument*/NULL);
		__this->set_m_LimitsYMin_7(L_135);
	}

IL_03bd:
	{
		// DrawText(m_LimitsYMax, new Vector2(rect.x + rect.width, rect.y), ValueTextStyle);
		GUIContent_t39256993BF4A33F76E073488D6A2F13D678DF60E * L_136 = __this->get_m_LimitsYMax_8();
		float L_137;
		L_137 = Rect_get_x_mA61220F6F26ECD6951B779FFA7CAD7ECE11D6987((Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878 *)(&___rect0), /*hidden argument*/NULL);
		float L_138;
		L_138 = Rect_get_width_m4A0500D95CA84917787A8E90D26E66D49DFA90EF((Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878 *)(&___rect0), /*hidden argument*/NULL);
		float L_139;
		L_139 = Rect_get_y_m4E1AAD20D167085FF4F9E9C86EF34689F5770A74((Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878 *)(&___rect0), /*hidden argument*/NULL);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_140;
		memset((&L_140), 0, sizeof(L_140));
		Vector2__ctor_m9F1F2D5EB5D1FF7091BB527AC8A72CBB309D115E_inline((&L_140), ((float)il2cpp_codegen_add((float)L_137, (float)L_138)), L_139, /*hidden argument*/NULL);
		GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * L_141;
		L_141 = VisualizationHelpers_get_ValueTextStyle_mDDD19B37F92A291767250B60899DE7F393E3F6E9(/*hidden argument*/NULL);
		VisualizationHelpers_DrawText_m75EAB1C9E4CA84D969F2EFD1BF20605FFEDE88C7(L_136, L_140, L_141, /*hidden argument*/NULL);
		// DrawText(m_LimitsYMin, new Vector2(rect.x + rect.width, rect.y + rect.height), ValueTextStyle);
		GUIContent_t39256993BF4A33F76E073488D6A2F13D678DF60E * L_142 = __this->get_m_LimitsYMin_7();
		float L_143;
		L_143 = Rect_get_x_mA61220F6F26ECD6951B779FFA7CAD7ECE11D6987((Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878 *)(&___rect0), /*hidden argument*/NULL);
		float L_144;
		L_144 = Rect_get_width_m4A0500D95CA84917787A8E90D26E66D49DFA90EF((Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878 *)(&___rect0), /*hidden argument*/NULL);
		float L_145;
		L_145 = Rect_get_y_m4E1AAD20D167085FF4F9E9C86EF34689F5770A74((Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878 *)(&___rect0), /*hidden argument*/NULL);
		float L_146;
		L_146 = Rect_get_height_m42FEF31015A269E6E2B7E6F62E72E5BF6602302A((Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878 *)(&___rect0), /*hidden argument*/NULL);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_147;
		memset((&L_147), 0, sizeof(L_147));
		Vector2__ctor_m9F1F2D5EB5D1FF7091BB527AC8A72CBB309D115E_inline((&L_147), ((float)il2cpp_codegen_add((float)L_143, (float)L_144)), ((float)il2cpp_codegen_add((float)L_145, (float)L_146)), /*hidden argument*/NULL);
		GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * L_148;
		L_148 = VisualizationHelpers_get_ValueTextStyle_mDDD19B37F92A291767250B60899DE7F393E3F6E9(/*hidden argument*/NULL);
		VisualizationHelpers_DrawText_m75EAB1C9E4CA84D969F2EFD1BF20605FFEDE88C7(L_142, L_147, L_148, /*hidden argument*/NULL);
	}

IL_041e:
	{
		// }
		return;
	}
}
// System.Void UnityEngine.InputSystem.Samples.VisualizationHelpers/TimelineVisualizer::AddSample(System.Object,System.Double)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TimelineVisualizer_AddSample_mA34350BEAB3A9FB50EAD43AE3BE6747CAEDD4AE6 (TimelineVisualizer_tDCF8FE655A93D562471977C145A8B989803EA315 * __this, RuntimeObject * ___value0, double ___time1, const RuntimeMethod* method)
{
	bool V_0 = false;
	{
		// if (timelineCount == 0)
		int32_t L_0;
		L_0 = TimelineVisualizer_get_timelineCount_m7DF69E3DC601AF2B2B8DFBE4FE651A19D5E29932(__this, /*hidden argument*/NULL);
		V_0 = (bool)((((int32_t)L_0) == ((int32_t)0))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0019;
		}
	}
	{
		// throw new InvalidOperationException("Must have set up a timeline first");
		InvalidOperationException_t10D3EE59AD28EC641ACEE05BCA4271A527E5ECAB * L_2 = (InvalidOperationException_t10D3EE59AD28EC641ACEE05BCA4271A527E5ECAB *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t10D3EE59AD28EC641ACEE05BCA4271A527E5ECAB_il2cpp_TypeInfo_var)));
		InvalidOperationException__ctor_mC012CE552988309733C896F3FEA8249171E4402E(L_2, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral8AE7F0B9FDD5F8620EA07E4472F7641A988C1766)), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&TimelineVisualizer_AddSample_mA34350BEAB3A9FB50EAD43AE3BE6747CAEDD4AE6_RuntimeMethod_var)));
	}

IL_0019:
	{
		// AddSample(0, PrimitiveValue.FromObject(value), (float)time);
		RuntimeObject * L_3 = ___value0;
		PrimitiveValue_tB787C76E9A37444599C45519DD7E4D3A1D4730C8  L_4;
		L_4 = PrimitiveValue_FromObject_m7F17C93232F8B85D44D00A80EF6ADAF6686172BC(L_3, /*hidden argument*/NULL);
		double L_5 = ___time1;
		TimelineVisualizer_AddSample_mEFE2F9853918EF7E879A17BB9EE0D7B43151A08D(__this, 0, L_4, ((float)((float)L_5)), /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Int32 UnityEngine.InputSystem.Samples.VisualizationHelpers/TimelineVisualizer::AddTimeline(System.String,UnityEngine.Color,UnityEngine.InputSystem.Samples.VisualizationHelpers/TimelineVisualizer/PlotType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t TimelineVisualizer_AddTimeline_mB61A89F5E28EDA9F1BE4A85B5AD626E15B00353C (TimelineVisualizer_tDCF8FE655A93D562471977C145A8B989803EA315 * __this, String_t* ___name0, Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___color1, int32_t ___plotType2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Array_Resize_TisTimeline_t0E8C3B4B157DAE25A77A695529CE737933D5CCBE_mBA8BC27E328677C85F6EB666EACBA917A90FB009_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GUIContent_t39256993BF4A33F76E073488D6A2F13D678DF60E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RingBuffer_1__ctor_m008DAFC556453D757AC430CFBCE66287F415776E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RingBuffer_1__ctor_m41C93D129E54821358D0152E7184702894B5BC1E_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	Timeline_t0E8C3B4B157DAE25A77A695529CE737933D5CCBE  V_0;
	memset((&V_0), 0, sizeof(V_0));
	int32_t V_1 = 0;
	Timeline_t0E8C3B4B157DAE25A77A695529CE737933D5CCBE  V_2;
	memset((&V_2), 0, sizeof(V_2));
	bool V_3 = false;
	int32_t V_4 = 0;
	{
		// var timeline = new Timeline
		// {
		//     name = new GUIContent(name),
		//     color = color,
		//     plotType = plotType,
		// };
		il2cpp_codegen_initobj((&V_2), sizeof(Timeline_t0E8C3B4B157DAE25A77A695529CE737933D5CCBE ));
		String_t* L_0 = ___name0;
		GUIContent_t39256993BF4A33F76E073488D6A2F13D678DF60E * L_1 = (GUIContent_t39256993BF4A33F76E073488D6A2F13D678DF60E *)il2cpp_codegen_object_new(GUIContent_t39256993BF4A33F76E073488D6A2F13D678DF60E_il2cpp_TypeInfo_var);
		GUIContent__ctor_m3FABF20C213051E685B41CA898A20885E02111F0(L_1, L_0, /*hidden argument*/NULL);
		(&V_2)->set_name_0(L_1);
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_2 = ___color1;
		(&V_2)->set_color_1(L_2);
		int32_t L_3 = ___plotType2;
		(&V_2)->set_plotType_6(L_3);
		Timeline_t0E8C3B4B157DAE25A77A695529CE737933D5CCBE  L_4 = V_2;
		V_0 = L_4;
		// if (timeUnit == TimeUnit.Frames)
		int32_t L_5;
		L_5 = TimelineVisualizer_get_timeUnit_mF6FCA53A8EA6CCC429BA80A17C290451B7DE8209_inline(__this, /*hidden argument*/NULL);
		V_3 = (bool)((((int32_t)L_5) == ((int32_t)1))? 1 : 0);
		bool L_6 = V_3;
		if (!L_6)
		{
			goto IL_0049;
		}
	}
	{
		// timeline.frameSamples = new RingBuffer<FrameSample>(historyDepth);
		int32_t L_7;
		L_7 = TimelineVisualizer_get_historyDepth_mEB98A597D139219DF157F47E1EB425C9B7985EA2_inline(__this, /*hidden argument*/NULL);
		RingBuffer_1_t6C5FD528A08BBDFABB08C4C1A6086AF9E61B794E  L_8;
		memset((&L_8), 0, sizeof(L_8));
		RingBuffer_1__ctor_m41C93D129E54821358D0152E7184702894B5BC1E((&L_8), L_7, /*hidden argument*/RingBuffer_1__ctor_m41C93D129E54821358D0152E7184702894B5BC1E_RuntimeMethod_var);
		(&V_0)->set_frameSamples_3(L_8);
		goto IL_005b;
	}

IL_0049:
	{
		// timeline.timeSamples = new RingBuffer<TimeSample>(historyDepth);
		int32_t L_9;
		L_9 = TimelineVisualizer_get_historyDepth_mEB98A597D139219DF157F47E1EB425C9B7985EA2_inline(__this, /*hidden argument*/NULL);
		RingBuffer_1_tD482466EFEACC434BCF1AE233235CA27903B4370  L_10;
		memset((&L_10), 0, sizeof(L_10));
		RingBuffer_1__ctor_m008DAFC556453D757AC430CFBCE66287F415776E((&L_10), L_9, /*hidden argument*/RingBuffer_1__ctor_m008DAFC556453D757AC430CFBCE66287F415776E_RuntimeMethod_var);
		(&V_0)->set_timeSamples_2(L_10);
	}

IL_005b:
	{
		// var index = timelineCount;
		int32_t L_11;
		L_11 = TimelineVisualizer_get_timelineCount_m7DF69E3DC601AF2B2B8DFBE4FE651A19D5E29932(__this, /*hidden argument*/NULL);
		V_1 = L_11;
		// Array.Resize(ref m_Timelines, timelineCount + 1);
		TimelineU5BU5D_tC4060193BF7CE25CDC70D417EEDC7175EA74B44F** L_12 = __this->get_address_of_m_Timelines_9();
		int32_t L_13;
		L_13 = TimelineVisualizer_get_timelineCount_m7DF69E3DC601AF2B2B8DFBE4FE651A19D5E29932(__this, /*hidden argument*/NULL);
		Array_Resize_TisTimeline_t0E8C3B4B157DAE25A77A695529CE737933D5CCBE_mBA8BC27E328677C85F6EB666EACBA917A90FB009((TimelineU5BU5D_tC4060193BF7CE25CDC70D417EEDC7175EA74B44F**)L_12, ((int32_t)il2cpp_codegen_add((int32_t)L_13, (int32_t)1)), /*hidden argument*/Array_Resize_TisTimeline_t0E8C3B4B157DAE25A77A695529CE737933D5CCBE_mBA8BC27E328677C85F6EB666EACBA917A90FB009_RuntimeMethod_var);
		// m_Timelines[index] = timeline;
		TimelineU5BU5D_tC4060193BF7CE25CDC70D417EEDC7175EA74B44F* L_14 = __this->get_m_Timelines_9();
		int32_t L_15 = V_1;
		Timeline_t0E8C3B4B157DAE25A77A695529CE737933D5CCBE  L_16 = V_0;
		NullCheck(L_14);
		(L_14)->SetAt(static_cast<il2cpp_array_size_t>(L_15), (Timeline_t0E8C3B4B157DAE25A77A695529CE737933D5CCBE )L_16);
		// return index;
		int32_t L_17 = V_1;
		V_4 = L_17;
		goto IL_0088;
	}

IL_0088:
	{
		// }
		int32_t L_18 = V_4;
		return L_18;
	}
}
// System.Int32 UnityEngine.InputSystem.Samples.VisualizationHelpers/TimelineVisualizer::GetTimeline(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t TimelineVisualizer_GetTimeline_m965C2B519C8D85BEF8B22FF598F6E4D063278F4C (TimelineVisualizer_tDCF8FE655A93D562471977C145A8B989803EA315 * __this, String_t* ___name0, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	bool V_1 = false;
	int32_t V_2 = 0;
	bool V_3 = false;
	{
		// for (var i = 0; i < timelineCount; ++i)
		V_0 = 0;
		goto IL_0031;
	}

IL_0005:
	{
		// if (string.Compare(m_Timelines[i].name.text, name, StringComparison.InvariantCultureIgnoreCase) == 0)
		TimelineU5BU5D_tC4060193BF7CE25CDC70D417EEDC7175EA74B44F* L_0 = __this->get_m_Timelines_9();
		int32_t L_1 = V_0;
		NullCheck(L_0);
		GUIContent_t39256993BF4A33F76E073488D6A2F13D678DF60E * L_2 = ((L_0)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_1)))->get_name_0();
		NullCheck(L_2);
		String_t* L_3;
		L_3 = GUIContent_get_text_mA6BE9C17B069417994ED27EE812A39BB960D921A(L_2, /*hidden argument*/NULL);
		String_t* L_4 = ___name0;
		int32_t L_5;
		L_5 = String_Compare_mDAE9D10BC450FF38960C691874EBFC3EAF6A39DD(L_3, L_4, 3, /*hidden argument*/NULL);
		V_1 = (bool)((((int32_t)L_5) == ((int32_t)0))? 1 : 0);
		bool L_6 = V_1;
		if (!L_6)
		{
			goto IL_002d;
		}
	}
	{
		// return i;
		int32_t L_7 = V_0;
		V_2 = L_7;
		goto IL_0042;
	}

IL_002d:
	{
		// for (var i = 0; i < timelineCount; ++i)
		int32_t L_8 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_8, (int32_t)1));
	}

IL_0031:
	{
		// for (var i = 0; i < timelineCount; ++i)
		int32_t L_9 = V_0;
		int32_t L_10;
		L_10 = TimelineVisualizer_get_timelineCount_m7DF69E3DC601AF2B2B8DFBE4FE651A19D5E29932(__this, /*hidden argument*/NULL);
		V_3 = (bool)((((int32_t)L_9) < ((int32_t)L_10))? 1 : 0);
		bool L_11 = V_3;
		if (L_11)
		{
			goto IL_0005;
		}
	}
	{
		// return -1;
		V_2 = (-1);
		goto IL_0042;
	}

IL_0042:
	{
		// }
		int32_t L_12 = V_2;
		return L_12;
	}
}
// System.Void UnityEngine.InputSystem.Samples.VisualizationHelpers/TimelineVisualizer::AddSample(System.Int32,UnityEngine.InputSystem.Utilities.PrimitiveValue,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TimelineVisualizer_AddSample_mEFE2F9853918EF7E879A17BB9EE0D7B43151A08D (TimelineVisualizer_tDCF8FE655A93D562471977C145A8B989803EA315 * __this, int32_t ___timelineIndex0, PrimitiveValue_tB787C76E9A37444599C45519DD7E4D3A1D4730C8  ___value1, float ___time2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RingBuffer_1_Append_m5EEA4129391DF819A18C217E469874629F2CF98B_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	TimeSample_t926350553A4576F5F20E71A9CFB9A19E37F35C2B  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// m_Timelines[timelineIndex].timeSamples.Append(new TimeSample
		// {
		//     value = value,
		//     time = time
		// });
		TimelineU5BU5D_tC4060193BF7CE25CDC70D417EEDC7175EA74B44F* L_0 = __this->get_m_Timelines_9();
		int32_t L_1 = ___timelineIndex0;
		NullCheck(L_0);
		RingBuffer_1_tD482466EFEACC434BCF1AE233235CA27903B4370 * L_2 = ((L_0)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_1)))->get_address_of_timeSamples_2();
		il2cpp_codegen_initobj((&V_0), sizeof(TimeSample_t926350553A4576F5F20E71A9CFB9A19E37F35C2B ));
		PrimitiveValue_tB787C76E9A37444599C45519DD7E4D3A1D4730C8  L_3 = ___value1;
		(&V_0)->set_value_0(L_3);
		float L_4 = ___time2;
		(&V_0)->set_time_1(L_4);
		TimeSample_t926350553A4576F5F20E71A9CFB9A19E37F35C2B  L_5 = V_0;
		TimeSample_t926350553A4576F5F20E71A9CFB9A19E37F35C2B * L_6;
		L_6 = RingBuffer_1_Append_m5EEA4129391DF819A18C217E469874629F2CF98B((RingBuffer_1_tD482466EFEACC434BCF1AE233235CA27903B4370 *)L_2, L_5, /*hidden argument*/RingBuffer_1_Append_m5EEA4129391DF819A18C217E469874629F2CF98B_RuntimeMethod_var);
		// }
		return;
	}
}
// UnityEngine.InputSystem.Utilities.PrimitiveValue& UnityEngine.InputSystem.Samples.VisualizationHelpers/TimelineVisualizer::GetOrCreateSample(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR PrimitiveValue_tB787C76E9A37444599C45519DD7E4D3A1D4730C8 * TimelineVisualizer_GetOrCreateSample_m2DF8059FD0CC02C872112585BC551607BA8E99C1 (TimelineVisualizer_tDCF8FE655A93D562471977C145A8B989803EA315 * __this, int32_t ___timelineIndex0, int32_t ___frame1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RingBuffer_1_Append_mDC563C0021BB061ED5797274D0E98835815A9E40_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RingBuffer_1_get_Item_m324251981EEDA84F8C57FDBB08FB72521CD65892_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral036574DB104539870D64DB8BF1AA8ED56D7F9C29);
		s_Il2CppMethodInitialized = true;
	}
	Timeline_t0E8C3B4B157DAE25A77A695529CE737933D5CCBE * V_0 = NULL;
	RingBuffer_1_t6C5FD528A08BBDFABB08C4C1A6086AF9E61B794E * V_1 = NULL;
	int32_t V_2 = 0;
	bool V_3 = false;
	bool V_4 = false;
	PrimitiveValue_tB787C76E9A37444599C45519DD7E4D3A1D4730C8 * V_5 = NULL;
	FrameSample_t8064F61DD3BB94546FB62C119AB80FAD66546E1B  V_6;
	memset((&V_6), 0, sizeof(V_6));
	{
		// ref var timeline = ref m_Timelines[timelineIndex];
		TimelineU5BU5D_tC4060193BF7CE25CDC70D417EEDC7175EA74B44F* L_0 = __this->get_m_Timelines_9();
		int32_t L_1 = ___timelineIndex0;
		NullCheck(L_0);
		V_0 = (Timeline_t0E8C3B4B157DAE25A77A695529CE737933D5CCBE *)((L_0)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_1)));
		// ref var samples = ref timeline.frameSamples;
		Timeline_t0E8C3B4B157DAE25A77A695529CE737933D5CCBE * L_2 = V_0;
		RingBuffer_1_t6C5FD528A08BBDFABB08C4C1A6086AF9E61B794E * L_3 = L_2->get_address_of_frameSamples_3();
		V_1 = (RingBuffer_1_t6C5FD528A08BBDFABB08C4C1A6086AF9E61B794E *)L_3;
		// var count = samples.count;
		RingBuffer_1_t6C5FD528A08BBDFABB08C4C1A6086AF9E61B794E * L_4 = V_1;
		int32_t L_5 = L_4->get_count_2();
		V_2 = L_5;
		// if (count > 0)
		int32_t L_6 = V_2;
		V_3 = (bool)((((int32_t)L_6) > ((int32_t)0))? 1 : 0);
		bool L_7 = V_3;
		if (!L_7)
		{
			goto IL_006b;
		}
	}
	{
		// if (samples[count - 1].frame == frame)
		RingBuffer_1_t6C5FD528A08BBDFABB08C4C1A6086AF9E61B794E * L_8 = V_1;
		int32_t L_9 = V_2;
		FrameSample_t8064F61DD3BB94546FB62C119AB80FAD66546E1B * L_10;
		L_10 = RingBuffer_1_get_Item_m324251981EEDA84F8C57FDBB08FB72521CD65892((RingBuffer_1_t6C5FD528A08BBDFABB08C4C1A6086AF9E61B794E *)L_8, ((int32_t)il2cpp_codegen_subtract((int32_t)L_9, (int32_t)1)), /*hidden argument*/RingBuffer_1_get_Item_m324251981EEDA84F8C57FDBB08FB72521CD65892_RuntimeMethod_var);
		int32_t L_11 = L_10->get_frame_1();
		int32_t L_12 = ___frame1;
		V_4 = (bool)((((int32_t)L_11) == ((int32_t)L_12))? 1 : 0);
		bool L_13 = V_4;
		if (!L_13)
		{
			goto IL_004e;
		}
	}
	{
		// return ref samples[count - 1].value;
		RingBuffer_1_t6C5FD528A08BBDFABB08C4C1A6086AF9E61B794E * L_14 = V_1;
		int32_t L_15 = V_2;
		FrameSample_t8064F61DD3BB94546FB62C119AB80FAD66546E1B * L_16;
		L_16 = RingBuffer_1_get_Item_m324251981EEDA84F8C57FDBB08FB72521CD65892((RingBuffer_1_t6C5FD528A08BBDFABB08C4C1A6086AF9E61B794E *)L_14, ((int32_t)il2cpp_codegen_subtract((int32_t)L_15, (int32_t)1)), /*hidden argument*/RingBuffer_1_get_Item_m324251981EEDA84F8C57FDBB08FB72521CD65892_RuntimeMethod_var);
		PrimitiveValue_tB787C76E9A37444599C45519DD7E4D3A1D4730C8 * L_17 = L_16->get_address_of_value_0();
		V_5 = (PrimitiveValue_tB787C76E9A37444599C45519DD7E4D3A1D4730C8 *)L_17;
		goto IL_008c;
	}

IL_004e:
	{
		// Debug.Assert(samples[count - 1].frame < frame, "Frame numbers must be ascending");
		RingBuffer_1_t6C5FD528A08BBDFABB08C4C1A6086AF9E61B794E * L_18 = V_1;
		int32_t L_19 = V_2;
		FrameSample_t8064F61DD3BB94546FB62C119AB80FAD66546E1B * L_20;
		L_20 = RingBuffer_1_get_Item_m324251981EEDA84F8C57FDBB08FB72521CD65892((RingBuffer_1_t6C5FD528A08BBDFABB08C4C1A6086AF9E61B794E *)L_18, ((int32_t)il2cpp_codegen_subtract((int32_t)L_19, (int32_t)1)), /*hidden argument*/RingBuffer_1_get_Item_m324251981EEDA84F8C57FDBB08FB72521CD65892_RuntimeMethod_var);
		int32_t L_21 = L_20->get_frame_1();
		int32_t L_22 = ___frame1;
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_Assert_m28EC098B41C037ED14C42FE47D0E5355CD2437F5((bool)((((int32_t)L_21) < ((int32_t)L_22))? 1 : 0), _stringLiteral036574DB104539870D64DB8BF1AA8ED56D7F9C29, /*hidden argument*/NULL);
	}

IL_006b:
	{
		// return ref samples.Append(new FrameSample {frame = frame}).value;
		RingBuffer_1_t6C5FD528A08BBDFABB08C4C1A6086AF9E61B794E * L_23 = V_1;
		il2cpp_codegen_initobj((&V_6), sizeof(FrameSample_t8064F61DD3BB94546FB62C119AB80FAD66546E1B ));
		int32_t L_24 = ___frame1;
		(&V_6)->set_frame_1(L_24);
		FrameSample_t8064F61DD3BB94546FB62C119AB80FAD66546E1B  L_25 = V_6;
		FrameSample_t8064F61DD3BB94546FB62C119AB80FAD66546E1B * L_26;
		L_26 = RingBuffer_1_Append_mDC563C0021BB061ED5797274D0E98835815A9E40((RingBuffer_1_t6C5FD528A08BBDFABB08C4C1A6086AF9E61B794E *)L_23, L_25, /*hidden argument*/RingBuffer_1_Append_mDC563C0021BB061ED5797274D0E98835815A9E40_RuntimeMethod_var);
		PrimitiveValue_tB787C76E9A37444599C45519DD7E4D3A1D4730C8 * L_27 = L_26->get_address_of_value_0();
		V_5 = (PrimitiveValue_tB787C76E9A37444599C45519DD7E4D3A1D4730C8 *)L_27;
		goto IL_008c;
	}

IL_008c:
	{
		// }
		PrimitiveValue_tB787C76E9A37444599C45519DD7E4D3A1D4730C8 * L_28 = V_5;
		return (PrimitiveValue_tB787C76E9A37444599C45519DD7E4D3A1D4730C8 *)(L_28);
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
// System.Void UnityEngine.InputSystem.Samples.VisualizationHelpers/Vector2Visualizer::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Vector2Visualizer__ctor_mC2753BF29D07F05BB1D6BBF86553AA6518AB0410 (Vector2Visualizer_t4F4D343145C411ED0B1D42FF5AEF4E5303BA9EFC * __this, int32_t ___numSamples0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ValueVisualizer_1__ctor_m549DFCBB6C3329F6E1B2F8185D2F7D56349883FB_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public Vector2[] maximums = new Vector2[360 / 3];
		Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* L_0 = (Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA*)(Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA*)SZArrayNew(Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA_il2cpp_TypeInfo_var, (uint32_t)((int32_t)120));
		__this->set_maximums_2(L_0);
		// public Vector2 limits = new Vector2(1, 1);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_1;
		memset((&L_1), 0, sizeof(L_1));
		Vector2__ctor_m9F1F2D5EB5D1FF7091BB527AC8A72CBB309D115E_inline((&L_1), (1.0f), (1.0f), /*hidden argument*/NULL);
		__this->set_limits_3(L_1);
		// : base(numSamples)
		int32_t L_2 = ___numSamples0;
		ValueVisualizer_1__ctor_m549DFCBB6C3329F6E1B2F8185D2F7D56349883FB(__this, L_2, /*hidden argument*/ValueVisualizer_1__ctor_m549DFCBB6C3329F6E1B2F8185D2F7D56349883FB_RuntimeMethod_var);
		// }
		return;
	}
}
// System.Void UnityEngine.InputSystem.Samples.VisualizationHelpers/Vector2Visualizer::AddSample(System.Object,System.Double)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Vector2Visualizer_AddSample_m12D5914F9D14B5FA9474E75BCAA22392DC44EE5B (Vector2Visualizer_t4F4D343145C411ED0B1D42FF5AEF4E5303BA9EFC * __this, RuntimeObject * ___value0, double ___time1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ValueVisualizer_1_AddSample_mE5681CB696F7117D8BDECC59AFE262D0875904DE_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  V_1;
	memset((&V_1), 0, sizeof(V_1));
	float V_2 = 0.0f;
	int32_t V_3 = 0;
	float V_4 = 0.0f;
	float V_5 = 0.0f;
	bool V_6 = false;
	bool V_7 = false;
	bool V_8 = false;
	bool V_9 = false;
	{
		// base.AddSample(value, time);
		RuntimeObject * L_0 = ___value0;
		double L_1 = ___time1;
		ValueVisualizer_1_AddSample_mE5681CB696F7117D8BDECC59AFE262D0875904DE(__this, L_0, L_1, /*hidden argument*/ValueVisualizer_1_AddSample_mE5681CB696F7117D8BDECC59AFE262D0875904DE_RuntimeMethod_var);
		// if (value != null)
		RuntimeObject * L_2 = ___value0;
		V_0 = (bool)((!(((RuntimeObject*)(RuntimeObject *)L_2) <= ((RuntimeObject*)(RuntimeObject *)NULL)))? 1 : 0);
		bool L_3 = V_0;
		if (!L_3)
		{
			goto IL_0112;
		}
	}
	{
		// var vector = (Vector2)value;
		RuntimeObject * L_4 = ___value0;
		V_1 = ((*(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 *)((Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 *)UnBox(L_4, Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_il2cpp_TypeInfo_var))));
		// var angle = Vector2.SignedAngle(Vector2.right, vector);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_5;
		L_5 = Vector2_get_right_m42ED15112D219375D2B6879E62ED925D002F15AF(/*hidden argument*/NULL);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_6 = V_1;
		float L_7;
		L_7 = Vector2_SignedAngle_m007FAC4E36153EEBC62347D6FA67162238C34C69(L_5, L_6, /*hidden argument*/NULL);
		V_2 = L_7;
		// if (angle < 0)
		float L_8 = V_2;
		V_6 = (bool)((((float)L_8) < ((float)(0.0f)))? 1 : 0);
		bool L_9 = V_6;
		if (!L_9)
		{
			goto IL_003f;
		}
	}
	{
		// angle = 360 + angle;
		float L_10 = V_2;
		V_2 = ((float)il2cpp_codegen_add((float)(360.0f), (float)L_10));
	}

IL_003f:
	{
		// var angleInt = Mathf.FloorToInt(angle) / 3;
		float L_11 = V_2;
		int32_t L_12;
		L_12 = Mathf_FloorToInt_m9164D538D17B8C3C8A6C4E4FA95032F757D9091E(L_11, /*hidden argument*/NULL);
		V_3 = ((int32_t)((int32_t)L_12/(int32_t)3));
		// if (vector.sqrMagnitude > maximums[angleInt].sqrMagnitude)
		float L_13;
		L_13 = Vector2_get_sqrMagnitude_mF489F0EF7E88FF046BA36767ECC50B89674C925A((Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 *)(&V_1), /*hidden argument*/NULL);
		Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* L_14 = __this->get_maximums_2();
		int32_t L_15 = V_3;
		NullCheck(L_14);
		float L_16;
		L_16 = Vector2_get_sqrMagnitude_mF489F0EF7E88FF046BA36767ECC50B89674C925A((Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 *)((L_14)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_15))), /*hidden argument*/NULL);
		V_7 = (bool)((((float)L_13) > ((float)L_16))? 1 : 0);
		bool L_17 = V_7;
		if (!L_17)
		{
			goto IL_0075;
		}
	}
	{
		// maximums[angleInt] = vector;
		Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* L_18 = __this->get_maximums_2();
		int32_t L_19 = V_3;
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_20 = V_1;
		NullCheck(L_18);
		(L_18)->SetAt(static_cast<il2cpp_array_size_t>(L_19), (Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 )L_20);
	}

IL_0075:
	{
		// var limitX = Mathf.Max(Mathf.Abs(vector.x), limits.x);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_21 = V_1;
		float L_22 = L_21.get_x_0();
		float L_23;
		L_23 = fabsf(L_22);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * L_24 = __this->get_address_of_limits_3();
		float L_25 = L_24->get_x_0();
		float L_26;
		L_26 = Mathf_Max_m4CE510E1F1013B33275F01543731A51A58BA0775(L_23, L_25, /*hidden argument*/NULL);
		V_4 = L_26;
		// var limitY = Mathf.Max(Mathf.Abs(vector.y), limits.y);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_27 = V_1;
		float L_28 = L_27.get_y_1();
		float L_29;
		L_29 = fabsf(L_28);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * L_30 = __this->get_address_of_limits_3();
		float L_31 = L_30->get_y_1();
		float L_32;
		L_32 = Mathf_Max_m4CE510E1F1013B33275F01543731A51A58BA0775(L_29, L_31, /*hidden argument*/NULL);
		V_5 = L_32;
		// if (!Mathf.Approximately(limitX, limits.x))
		float L_33 = V_4;
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * L_34 = __this->get_address_of_limits_3();
		float L_35 = L_34->get_x_0();
		bool L_36;
		L_36 = Mathf_Approximately_mC2A3F657E3FD0CCAD4A4936CEE2F67D624A2AA55(L_33, L_35, /*hidden argument*/NULL);
		V_8 = (bool)((((int32_t)L_36) == ((int32_t)0))? 1 : 0);
		bool L_37 = V_8;
		if (!L_37)
		{
			goto IL_00e0;
		}
	}
	{
		// limits.x = limitX;
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * L_38 = __this->get_address_of_limits_3();
		float L_39 = V_4;
		L_38->set_x_0(L_39);
		// limitsXText = null;
		__this->set_limitsXText_4((GUIContent_t39256993BF4A33F76E073488D6A2F13D678DF60E *)NULL);
	}

IL_00e0:
	{
		// if (!Mathf.Approximately(limitY, limits.y))
		float L_40 = V_5;
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * L_41 = __this->get_address_of_limits_3();
		float L_42 = L_41->get_y_1();
		bool L_43;
		L_43 = Mathf_Approximately_mC2A3F657E3FD0CCAD4A4936CEE2F67D624A2AA55(L_40, L_42, /*hidden argument*/NULL);
		V_9 = (bool)((((int32_t)L_43) == ((int32_t)0))? 1 : 0);
		bool L_44 = V_9;
		if (!L_44)
		{
			goto IL_0111;
		}
	}
	{
		// limits.y = limitY;
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * L_45 = __this->get_address_of_limits_3();
		float L_46 = V_5;
		L_45->set_y_1(L_46);
		// limitsYText = null;
		__this->set_limitsYText_5((GUIContent_t39256993BF4A33F76E073488D6A2F13D678DF60E *)NULL);
	}

IL_0111:
	{
	}

IL_0112:
	{
		// }
		return;
	}
}
// System.Void UnityEngine.InputSystem.Samples.VisualizationHelpers/Vector2Visualizer::OnDraw(UnityEngine.Rect)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Vector2Visualizer_OnDraw_m9F32248F54C9F5F4DFF0170E26FF3AFE15D89D0B (Vector2Visualizer_t4F4D343145C411ED0B1D42FF5AEF4E5303BA9EFC * __this, Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878  ___rect0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GUIContent_t39256993BF4A33F76E073488D6A2F13D678DF60E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RingBuffer_1_get_Item_m50590F07DFD1B70212B4CABD643088E1C99D0AE0_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RingBuffer_1_get_Item_m8A5C3B43B9D54B9F9588C402031DC5ECC59DBBE1_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  V_2;
	memset((&V_2), 0, sizeof(V_2));
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  V_3;
	memset((&V_3), 0, sizeof(V_3));
	float V_4 = 0.0f;
	float V_5 = 0.0f;
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  V_6;
	memset((&V_6), 0, sizeof(V_6));
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  V_7;
	memset((&V_7), 0, sizeof(V_7));
	bool V_8 = false;
	bool V_9 = false;
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  V_10;
	memset((&V_10), 0, sizeof(V_10));
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  V_11;
	memset((&V_11), 0, sizeof(V_11));
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  V_12;
	memset((&V_12), 0, sizeof(V_12));
	bool V_13 = false;
	bool V_14 = false;
	int32_t V_15 = 0;
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  V_16;
	memset((&V_16), 0, sizeof(V_16));
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  V_17;
	memset((&V_17), 0, sizeof(V_17));
	bool V_18 = false;
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  V_19;
	memset((&V_19), 0, sizeof(V_19));
	bool V_20 = false;
	bool V_21 = false;
	bool V_22 = false;
	int32_t V_23 = 0;
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  V_24;
	memset((&V_24), 0, sizeof(V_24));
	Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878  V_25;
	memset((&V_25), 0, sizeof(V_25));
	bool V_26 = false;
	{
		// DrawRectangle(rect, new Color(1, 1, 1, 0.1f));
		Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878  L_0 = ___rect0;
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_1;
		memset((&L_1), 0, sizeof(L_1));
		Color__ctor_m679019E6084BF7A6F82590F66F5F695F6A50ECC5((&L_1), (1.0f), (1.0f), (1.0f), (0.100000001f), /*hidden argument*/NULL);
		VisualizationHelpers_DrawRectangle_mCE75B71D5E3EB525AED283FE50CEA73998357E29(L_0, L_1, /*hidden argument*/NULL);
		// DrawAxis(Axis.X, rect, new Color(0, 1, 0, 0.75f));
		Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878  L_2 = ___rect0;
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_3;
		memset((&L_3), 0, sizeof(L_3));
		Color__ctor_m679019E6084BF7A6F82590F66F5F695F6A50ECC5((&L_3), (0.0f), (1.0f), (0.0f), (0.75f), /*hidden argument*/NULL);
		VisualizationHelpers_DrawAxis_m41296CB0B344F006E81C7DCCD6F00F77C1456E2C(0, L_2, L_3, (1.0f), /*hidden argument*/NULL);
		// DrawAxis(Axis.Y, rect, new Color(0, 1, 0, 0.75f));
		Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878  L_4 = ___rect0;
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_5;
		memset((&L_5), 0, sizeof(L_5));
		Color__ctor_m679019E6084BF7A6F82590F66F5F695F6A50ECC5((&L_5), (0.0f), (1.0f), (0.0f), (0.75f), /*hidden argument*/NULL);
		VisualizationHelpers_DrawAxis_m41296CB0B344F006E81C7DCCD6F00F77C1456E2C(1, L_4, L_5, (1.0f), /*hidden argument*/NULL);
		// var sampleCount = samples.count;
		RingBuffer_1_t2DABFCD363F6958F876B34BE08D978FE3CC2F270 * L_6 = ((ValueVisualizer_1_t80E00BEE21AB8F001F08BF2B39E8894884283EDE *)__this)->get_address_of_samples_0();
		int32_t L_7 = L_6->get_count_2();
		V_0 = L_7;
		// if (sampleCount == 0)
		int32_t L_8 = V_0;
		V_8 = (bool)((((int32_t)L_8) == ((int32_t)0))? 1 : 0);
		bool L_9 = V_8;
		if (!L_9)
		{
			goto IL_0088;
		}
	}
	{
		// return;
		goto IL_030d;
	}

IL_0088:
	{
		// if (limits != new Vector2(1, 1))
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_10 = __this->get_limits_3();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_11;
		memset((&L_11), 0, sizeof(L_11));
		Vector2__ctor_m9F1F2D5EB5D1FF7091BB527AC8A72CBB309D115E_inline((&L_11), (1.0f), (1.0f), /*hidden argument*/NULL);
		bool L_12;
		L_12 = Vector2_op_Inequality_mA9E4245E487F3051F0EBF086646A1C341213D24E_inline(L_10, L_11, /*hidden argument*/NULL);
		V_9 = L_12;
		bool L_13 = V_9;
		if (!L_13)
		{
			goto IL_0171;
		}
	}
	{
		// if (limitsXText == null)
		GUIContent_t39256993BF4A33F76E073488D6A2F13D678DF60E * L_14 = __this->get_limitsXText_4();
		V_13 = (bool)((((RuntimeObject*)(GUIContent_t39256993BF4A33F76E073488D6A2F13D678DF60E *)L_14) == ((RuntimeObject*)(RuntimeObject *)NULL))? 1 : 0);
		bool L_15 = V_13;
		if (!L_15)
		{
			goto IL_00d6;
		}
	}
	{
		// limitsXText = new GUIContent(limits.x.ToString());
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * L_16 = __this->get_address_of_limits_3();
		float* L_17 = L_16->get_address_of_x_0();
		String_t* L_18;
		L_18 = Single_ToString_m80E7ABED4F4D73F2BE19DDB80D3D92FCD8DFA010((float*)L_17, /*hidden argument*/NULL);
		GUIContent_t39256993BF4A33F76E073488D6A2F13D678DF60E * L_19 = (GUIContent_t39256993BF4A33F76E073488D6A2F13D678DF60E *)il2cpp_codegen_object_new(GUIContent_t39256993BF4A33F76E073488D6A2F13D678DF60E_il2cpp_TypeInfo_var);
		GUIContent__ctor_m3FABF20C213051E685B41CA898A20885E02111F0(L_19, L_18, /*hidden argument*/NULL);
		__this->set_limitsXText_4(L_19);
	}

IL_00d6:
	{
		// if (limitsYText == null)
		GUIContent_t39256993BF4A33F76E073488D6A2F13D678DF60E * L_20 = __this->get_limitsYText_5();
		V_14 = (bool)((((RuntimeObject*)(GUIContent_t39256993BF4A33F76E073488D6A2F13D678DF60E *)L_20) == ((RuntimeObject*)(RuntimeObject *)NULL))? 1 : 0);
		bool L_21 = V_14;
		if (!L_21)
		{
			goto IL_0100;
		}
	}
	{
		// limitsYText = new GUIContent(limits.y.ToString());
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * L_22 = __this->get_address_of_limits_3();
		float* L_23 = L_22->get_address_of_y_1();
		String_t* L_24;
		L_24 = Single_ToString_m80E7ABED4F4D73F2BE19DDB80D3D92FCD8DFA010((float*)L_23, /*hidden argument*/NULL);
		GUIContent_t39256993BF4A33F76E073488D6A2F13D678DF60E * L_25 = (GUIContent_t39256993BF4A33F76E073488D6A2F13D678DF60E *)il2cpp_codegen_object_new(GUIContent_t39256993BF4A33F76E073488D6A2F13D678DF60E_il2cpp_TypeInfo_var);
		GUIContent__ctor_m3FABF20C213051E685B41CA898A20885E02111F0(L_25, L_24, /*hidden argument*/NULL);
		__this->set_limitsYText_5(L_25);
	}

IL_0100:
	{
		// var limitsXSize = ValueTextStyle.CalcSize(limitsXText);
		GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * L_26;
		L_26 = VisualizationHelpers_get_ValueTextStyle_mDDD19B37F92A291767250B60899DE7F393E3F6E9(/*hidden argument*/NULL);
		GUIContent_t39256993BF4A33F76E073488D6A2F13D678DF60E * L_27 = __this->get_limitsXText_4();
		NullCheck(L_26);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_28;
		L_28 = GUIStyle_CalcSize_m3B4ADD2AF66EFF1A273C10C0F77741EAD96F3F2D(L_26, L_27, /*hidden argument*/NULL);
		V_10 = L_28;
		// var limitsXPos = new Vector2(rect.x - limitsXSize.x, rect.y - 5);
		float L_29;
		L_29 = Rect_get_x_mA61220F6F26ECD6951B779FFA7CAD7ECE11D6987((Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878 *)(&___rect0), /*hidden argument*/NULL);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_30 = V_10;
		float L_31 = L_30.get_x_0();
		float L_32;
		L_32 = Rect_get_y_m4E1AAD20D167085FF4F9E9C86EF34689F5770A74((Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878 *)(&___rect0), /*hidden argument*/NULL);
		Vector2__ctor_m9F1F2D5EB5D1FF7091BB527AC8A72CBB309D115E_inline((Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 *)(&V_11), ((float)il2cpp_codegen_subtract((float)L_29, (float)L_31)), ((float)il2cpp_codegen_subtract((float)L_32, (float)(5.0f))), /*hidden argument*/NULL);
		// var limitsYPos = new Vector2(rect.xMax, rect.yMax);
		float L_33;
		L_33 = Rect_get_xMax_m174FFAACE6F19A59AA793B3D507BE70116E27DE5((Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878 *)(&___rect0), /*hidden argument*/NULL);
		float L_34;
		L_34 = Rect_get_yMax_m9685BF55B44C51FF9BA080F9995073E458E1CDC3((Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878 *)(&___rect0), /*hidden argument*/NULL);
		Vector2__ctor_m9F1F2D5EB5D1FF7091BB527AC8A72CBB309D115E_inline((Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 *)(&V_12), L_33, L_34, /*hidden argument*/NULL);
		// DrawText(limitsXText, limitsXPos, ValueTextStyle);
		GUIContent_t39256993BF4A33F76E073488D6A2F13D678DF60E * L_35 = __this->get_limitsXText_4();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_36 = V_11;
		GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * L_37;
		L_37 = VisualizationHelpers_get_ValueTextStyle_mDDD19B37F92A291767250B60899DE7F393E3F6E9(/*hidden argument*/NULL);
		VisualizationHelpers_DrawText_m75EAB1C9E4CA84D969F2EFD1BF20605FFEDE88C7(L_35, L_36, L_37, /*hidden argument*/NULL);
		// DrawText(limitsYText, limitsYPos, ValueTextStyle);
		GUIContent_t39256993BF4A33F76E073488D6A2F13D678DF60E * L_38 = __this->get_limitsYText_5();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_39 = V_12;
		GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * L_40;
		L_40 = VisualizationHelpers_get_ValueTextStyle_mDDD19B37F92A291767250B60899DE7F393E3F6E9(/*hidden argument*/NULL);
		VisualizationHelpers_DrawText_m75EAB1C9E4CA84D969F2EFD1BF20605FFEDE88C7(L_38, L_39, L_40, /*hidden argument*/NULL);
	}

IL_0171:
	{
		// var numMaximums = 0;
		V_1 = 0;
		// var firstMaximumPos = default(Vector2);
		il2cpp_codegen_initobj((&V_2), sizeof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 ));
		// var lastMaximumPos = default(Vector2);
		il2cpp_codegen_initobj((&V_3), sizeof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 ));
		// for (var i = 0; i < 360 / 3; ++i)
		V_15 = 0;
		goto IL_0200;
	}

IL_0188:
	{
		// var value = maximums[i];
		Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* L_41 = __this->get_maximums_2();
		int32_t L_42 = V_15;
		NullCheck(L_41);
		int32_t L_43 = L_42;
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_44 = (L_41)->GetAt(static_cast<il2cpp_array_size_t>(L_43));
		V_16 = L_44;
		// if (value == default)
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_45 = V_16;
		il2cpp_codegen_initobj((&V_19), sizeof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 ));
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_46 = V_19;
		bool L_47;
		L_47 = Vector2_op_Equality_mAE5F31E8419538F0F6AF19D9897E0BE1CE8DB1B0_inline(L_45, L_46, /*hidden argument*/NULL);
		V_18 = L_47;
		bool L_48 = V_18;
		if (!L_48)
		{
			goto IL_01b1;
		}
	}
	{
		// continue;
		goto IL_01fa;
	}

IL_01b1:
	{
		// var valuePos = PixelPosForValue(value, rect);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_49 = V_16;
		Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878  L_50 = ___rect0;
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_51;
		L_51 = Vector2Visualizer_PixelPosForValue_m786A49D5B2AB804AD2DE4A2FE6E7E38B49681E83(__this, L_49, L_50, /*hidden argument*/NULL);
		V_17 = L_51;
		// if (numMaximums > 0)
		int32_t L_52 = V_1;
		V_20 = (bool)((((int32_t)L_52) > ((int32_t)0))? 1 : 0);
		bool L_53 = V_20;
		if (!L_53)
		{
			goto IL_01ef;
		}
	}
	{
		// DrawLine(lastMaximumPos, valuePos, new Color(1, 1, 1, 0.25f));
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_54 = V_3;
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_55 = V_17;
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_56;
		memset((&L_56), 0, sizeof(L_56));
		Color__ctor_m679019E6084BF7A6F82590F66F5F695F6A50ECC5((&L_56), (1.0f), (1.0f), (1.0f), (0.25f), /*hidden argument*/NULL);
		VisualizationHelpers_DrawLine_m5092487DE42DE433CBF73DB576C6F69E1D439E45(L_54, L_55, L_56, (1.0f), /*hidden argument*/NULL);
		goto IL_01f2;
	}

IL_01ef:
	{
		// firstMaximumPos = valuePos;
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_57 = V_17;
		V_2 = L_57;
	}

IL_01f2:
	{
		// lastMaximumPos = valuePos;
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_58 = V_17;
		V_3 = L_58;
		// ++numMaximums;
		int32_t L_59 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_59, (int32_t)1));
	}

IL_01fa:
	{
		// for (var i = 0; i < 360 / 3; ++i)
		int32_t L_60 = V_15;
		V_15 = ((int32_t)il2cpp_codegen_add((int32_t)L_60, (int32_t)1));
	}

IL_0200:
	{
		// for (var i = 0; i < 360 / 3; ++i)
		int32_t L_61 = V_15;
		V_21 = (bool)((((int32_t)L_61) < ((int32_t)((int32_t)120)))? 1 : 0);
		bool L_62 = V_21;
		if (L_62)
		{
			goto IL_0188;
		}
	}
	{
		// if (numMaximums > 1)
		int32_t L_63 = V_1;
		V_22 = (bool)((((int32_t)L_63) > ((int32_t)1))? 1 : 0);
		bool L_64 = V_22;
		if (!L_64)
		{
			goto IL_023f;
		}
	}
	{
		// DrawLine(lastMaximumPos, firstMaximumPos, new Color(1, 1, 1, 0.25f));
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_65 = V_3;
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_66 = V_2;
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_67;
		memset((&L_67), 0, sizeof(L_67));
		Color__ctor_m679019E6084BF7A6F82590F66F5F695F6A50ECC5((&L_67), (1.0f), (1.0f), (1.0f), (0.25f), /*hidden argument*/NULL);
		VisualizationHelpers_DrawLine_m5092487DE42DE433CBF73DB576C6F69E1D439E45(L_65, L_66, L_67, (1.0f), /*hidden argument*/NULL);
	}

IL_023f:
	{
		// var alphaStep = 1f / sampleCount;
		int32_t L_68 = V_0;
		V_4 = ((float)((float)(1.0f)/(float)((float)((float)L_68))));
		// var alpha = 1f;
		V_5 = (1.0f);
		// for (var i = sampleCount - 1; i >= 0; --i) // Go newest to oldest.
		int32_t L_69 = V_0;
		V_23 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_69, (int32_t)1));
		goto IL_02a3;
	}

IL_0257:
	{
		// var value = samples[i];
		RingBuffer_1_t2DABFCD363F6958F876B34BE08D978FE3CC2F270 * L_70 = ((ValueVisualizer_1_t80E00BEE21AB8F001F08BF2B39E8894884283EDE *)__this)->get_address_of_samples_0();
		int32_t L_71 = V_23;
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * L_72;
		L_72 = RingBuffer_1_get_Item_m8A5C3B43B9D54B9F9588C402031DC5ECC59DBBE1((RingBuffer_1_t2DABFCD363F6958F876B34BE08D978FE3CC2F270 *)L_70, L_71, /*hidden argument*/RingBuffer_1_get_Item_m8A5C3B43B9D54B9F9588C402031DC5ECC59DBBE1_RuntimeMethod_var);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_73 = (*(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 *)L_72);
		V_24 = L_73;
		// var valueRect = RectForValue(value, rect);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_74 = V_24;
		Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878  L_75 = ___rect0;
		Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878  L_76;
		L_76 = Vector2Visualizer_RectForValue_m11236090F2AC4462AC79C4B0FC5FDAC8B501565B(__this, L_74, L_75, /*hidden argument*/NULL);
		V_25 = L_76;
		// DrawRectangle(valueRect, new Color(1, 0, 0, alpha));
		Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878  L_77 = V_25;
		float L_78 = V_5;
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_79;
		memset((&L_79), 0, sizeof(L_79));
		Color__ctor_m679019E6084BF7A6F82590F66F5F695F6A50ECC5((&L_79), (1.0f), (0.0f), (0.0f), L_78, /*hidden argument*/NULL);
		VisualizationHelpers_DrawRectangle_mCE75B71D5E3EB525AED283FE50CEA73998357E29(L_77, L_79, /*hidden argument*/NULL);
		// alpha -= alphaStep;
		float L_80 = V_5;
		float L_81 = V_4;
		V_5 = ((float)il2cpp_codegen_subtract((float)L_80, (float)L_81));
		// for (var i = sampleCount - 1; i >= 0; --i) // Go newest to oldest.
		int32_t L_82 = V_23;
		V_23 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_82, (int32_t)1));
	}

IL_02a3:
	{
		// for (var i = sampleCount - 1; i >= 0; --i) // Go newest to oldest.
		int32_t L_83 = V_23;
		V_26 = (bool)((((int32_t)((((int32_t)L_83) < ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_84 = V_26;
		if (L_84)
		{
			goto IL_0257;
		}
	}
	{
		// var lastSample = samples[sampleCount - 1];
		RingBuffer_1_t2DABFCD363F6958F876B34BE08D978FE3CC2F270 * L_85 = ((ValueVisualizer_1_t80E00BEE21AB8F001F08BF2B39E8894884283EDE *)__this)->get_address_of_samples_0();
		int32_t L_86 = V_0;
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * L_87;
		L_87 = RingBuffer_1_get_Item_m8A5C3B43B9D54B9F9588C402031DC5ECC59DBBE1((RingBuffer_1_t2DABFCD363F6958F876B34BE08D978FE3CC2F270 *)L_85, ((int32_t)il2cpp_codegen_subtract((int32_t)L_86, (int32_t)1)), /*hidden argument*/RingBuffer_1_get_Item_m8A5C3B43B9D54B9F9588C402031DC5ECC59DBBE1_RuntimeMethod_var);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_88 = (*(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 *)L_87);
		V_6 = L_88;
		// var lastSamplePos = PixelPosForValue(lastSample, rect);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_89 = V_6;
		Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878  L_90 = ___rect0;
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_91;
		L_91 = Vector2Visualizer_PixelPosForValue_m786A49D5B2AB804AD2DE4A2FE6E7E38B49681E83(__this, L_89, L_90, /*hidden argument*/NULL);
		V_7 = L_91;
		// lastSamplePos.x += 3;
		float* L_92 = (&V_7)->get_address_of_x_0();
		float* L_93 = L_92;
		float L_94 = *((float*)L_93);
		*((float*)L_93) = (float)((float)il2cpp_codegen_add((float)L_94, (float)(3.0f)));
		// lastSamplePos.y += 3;
		float* L_95 = (&V_7)->get_address_of_y_1();
		float* L_96 = L_95;
		float L_97 = *((float*)L_96);
		*((float*)L_96) = (float)((float)il2cpp_codegen_add((float)L_97, (float)(3.0f)));
		// DrawText(samplesText[sampleCount - 1], lastSamplePos, ValueTextStyle);
		RingBuffer_1_t92C8E8147EA971F447C8085E01FEDD0A208062D6 * L_98 = ((ValueVisualizer_1_t80E00BEE21AB8F001F08BF2B39E8894884283EDE *)__this)->get_address_of_samplesText_1();
		int32_t L_99 = V_0;
		GUIContent_t39256993BF4A33F76E073488D6A2F13D678DF60E ** L_100;
		L_100 = RingBuffer_1_get_Item_m50590F07DFD1B70212B4CABD643088E1C99D0AE0((RingBuffer_1_t92C8E8147EA971F447C8085E01FEDD0A208062D6 *)L_98, ((int32_t)il2cpp_codegen_subtract((int32_t)L_99, (int32_t)1)), /*hidden argument*/RingBuffer_1_get_Item_m50590F07DFD1B70212B4CABD643088E1C99D0AE0_RuntimeMethod_var);
		GUIContent_t39256993BF4A33F76E073488D6A2F13D678DF60E * L_101 = *((GUIContent_t39256993BF4A33F76E073488D6A2F13D678DF60E **)L_100);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_102 = V_7;
		GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * L_103;
		L_103 = VisualizationHelpers_get_ValueTextStyle_mDDD19B37F92A291767250B60899DE7F393E3F6E9(/*hidden argument*/NULL);
		VisualizationHelpers_DrawText_m75EAB1C9E4CA84D969F2EFD1BF20605FFEDE88C7(L_101, L_102, L_103, /*hidden argument*/NULL);
	}

IL_030d:
	{
		// }
		return;
	}
}
// UnityEngine.Rect UnityEngine.InputSystem.Samples.VisualizationHelpers/Vector2Visualizer::RectForValue(UnityEngine.Vector2,UnityEngine.Rect)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878  Vector2Visualizer_RectForValue_m11236090F2AC4462AC79C4B0FC5FDAC8B501565B (Vector2Visualizer_t4F4D343145C411ED0B1D42FF5AEF4E5303BA9EFC * __this, Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___value0, Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878  ___rect1, const RuntimeMethod* method)
{
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  V_0;
	memset((&V_0), 0, sizeof(V_0));
	Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878  V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		// var pos = PixelPosForValue(value, rect);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_0 = ___value0;
		Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878  L_1 = ___rect1;
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_2;
		L_2 = Vector2Visualizer_PixelPosForValue_m786A49D5B2AB804AD2DE4A2FE6E7E38B49681E83(__this, L_0, L_1, /*hidden argument*/NULL);
		V_0 = L_2;
		// return new Rect(pos.x - 1, pos.y - 1, 2, 2);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_3 = V_0;
		float L_4 = L_3.get_x_0();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_5 = V_0;
		float L_6 = L_5.get_y_1();
		Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878  L_7;
		memset((&L_7), 0, sizeof(L_7));
		Rect__ctor_m12075526A02B55B680716A34AD5287B223122B70((&L_7), ((float)il2cpp_codegen_subtract((float)L_4, (float)(1.0f))), ((float)il2cpp_codegen_subtract((float)L_6, (float)(1.0f))), (2.0f), (2.0f), /*hidden argument*/NULL);
		V_1 = L_7;
		goto IL_0034;
	}

IL_0034:
	{
		// }
		Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878  L_8 = V_1;
		return L_8;
	}
}
// UnityEngine.Vector2 UnityEngine.InputSystem.Samples.VisualizationHelpers/Vector2Visualizer::PixelPosForValue(UnityEngine.Vector2,UnityEngine.Rect)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  Vector2Visualizer_PixelPosForValue_m786A49D5B2AB804AD2DE4A2FE6E7E38B49681E83 (Vector2Visualizer_t4F4D343145C411ED0B1D42FF5AEF4E5303BA9EFC * __this, Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___value0, Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878  ___rect1, const RuntimeMethod* method)
{
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  V_0;
	memset((&V_0), 0, sizeof(V_0));
	float V_1 = 0.0f;
	float V_2 = 0.0f;
	float V_3 = 0.0f;
	float V_4 = 0.0f;
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  V_5;
	memset((&V_5), 0, sizeof(V_5));
	{
		// var center = rect.center;
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_0;
		L_0 = Rect_get_center_mDFC7A4AE153DCDC1D6248803381C6F36C7883707((Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878 *)(&___rect1), /*hidden argument*/NULL);
		V_0 = L_0;
		// var x = Mathf.Abs(value.x) / limits.x * Mathf.Sign(value.x);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_1 = ___value0;
		float L_2 = L_1.get_x_0();
		float L_3;
		L_3 = fabsf(L_2);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * L_4 = __this->get_address_of_limits_3();
		float L_5 = L_4->get_x_0();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_6 = ___value0;
		float L_7 = L_6.get_x_0();
		float L_8;
		L_8 = Mathf_Sign_m01716387C82B9523CFFADED7B2037D75F57FE2FB(L_7, /*hidden argument*/NULL);
		V_1 = ((float)il2cpp_codegen_multiply((float)((float)((float)L_3/(float)L_5)), (float)L_8));
		// var y = Mathf.Abs(value.y) / limits.y * Mathf.Sign(value.y) * -1; // GUI Y is upside down.
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_9 = ___value0;
		float L_10 = L_9.get_y_1();
		float L_11;
		L_11 = fabsf(L_10);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * L_12 = __this->get_address_of_limits_3();
		float L_13 = L_12->get_y_1();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_14 = ___value0;
		float L_15 = L_14.get_y_1();
		float L_16;
		L_16 = Mathf_Sign_m01716387C82B9523CFFADED7B2037D75F57FE2FB(L_15, /*hidden argument*/NULL);
		V_2 = ((float)il2cpp_codegen_multiply((float)((float)il2cpp_codegen_multiply((float)((float)((float)L_11/(float)L_13)), (float)L_16)), (float)(-1.0f)));
		// var xInPixels = x * rect.width / 2;
		float L_17 = V_1;
		float L_18;
		L_18 = Rect_get_width_m4A0500D95CA84917787A8E90D26E66D49DFA90EF((Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878 *)(&___rect1), /*hidden argument*/NULL);
		V_3 = ((float)((float)((float)il2cpp_codegen_multiply((float)L_17, (float)L_18))/(float)(2.0f)));
		// var yInPixels = y * rect.height / 2;
		float L_19 = V_2;
		float L_20;
		L_20 = Rect_get_height_m42FEF31015A269E6E2B7E6F62E72E5BF6602302A((Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878 *)(&___rect1), /*hidden argument*/NULL);
		V_4 = ((float)((float)((float)il2cpp_codegen_multiply((float)L_19, (float)L_20))/(float)(2.0f)));
		// return new Vector2(center.x + xInPixels,
		//     center.y + yInPixels);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_21 = V_0;
		float L_22 = L_21.get_x_0();
		float L_23 = V_3;
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_24 = V_0;
		float L_25 = L_24.get_y_1();
		float L_26 = V_4;
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_27;
		memset((&L_27), 0, sizeof(L_27));
		Vector2__ctor_m9F1F2D5EB5D1FF7091BB527AC8A72CBB309D115E_inline((&L_27), ((float)il2cpp_codegen_add((float)L_22, (float)L_23)), ((float)il2cpp_codegen_add((float)L_25, (float)L_26)), /*hidden argument*/NULL);
		V_5 = L_27;
		goto IL_0092;
	}

IL_0092:
	{
		// }
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_28 = V_5;
		return L_28;
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
// System.Void UnityEngine.InputSystem.Samples.VisualizationHelpers/Visualizer::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Visualizer__ctor_mAD0F3ADB5469953D1A1C6A84B235D3A9D3095F2E (Visualizer_t48757514E9C44C7B20B531BB6D2713A570AA8B74 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
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


// Conversion methods for marshalling of: UnityEngine.InputSystem.Samples.VisualizationHelpers/TimelineVisualizer/FrameSample
IL2CPP_EXTERN_C void FrameSample_t8064F61DD3BB94546FB62C119AB80FAD66546E1B_marshal_pinvoke(const FrameSample_t8064F61DD3BB94546FB62C119AB80FAD66546E1B& unmarshaled, FrameSample_t8064F61DD3BB94546FB62C119AB80FAD66546E1B_marshaled_pinvoke& marshaled)
{
	PrimitiveValue_tB787C76E9A37444599C45519DD7E4D3A1D4730C8_marshal_pinvoke(unmarshaled.get_value_0(), marshaled.___value_0);
	marshaled.___frame_1 = unmarshaled.get_frame_1();
}
IL2CPP_EXTERN_C void FrameSample_t8064F61DD3BB94546FB62C119AB80FAD66546E1B_marshal_pinvoke_back(const FrameSample_t8064F61DD3BB94546FB62C119AB80FAD66546E1B_marshaled_pinvoke& marshaled, FrameSample_t8064F61DD3BB94546FB62C119AB80FAD66546E1B& unmarshaled)
{
	PrimitiveValue_tB787C76E9A37444599C45519DD7E4D3A1D4730C8  unmarshaled_value_temp_0;
	memset((&unmarshaled_value_temp_0), 0, sizeof(unmarshaled_value_temp_0));
	PrimitiveValue_tB787C76E9A37444599C45519DD7E4D3A1D4730C8_marshal_pinvoke_back(marshaled.___value_0, unmarshaled_value_temp_0);
	unmarshaled.set_value_0(unmarshaled_value_temp_0);
	int32_t unmarshaled_frame_temp_1 = 0;
	unmarshaled_frame_temp_1 = marshaled.___frame_1;
	unmarshaled.set_frame_1(unmarshaled_frame_temp_1);
}
// Conversion method for clean up from marshalling of: UnityEngine.InputSystem.Samples.VisualizationHelpers/TimelineVisualizer/FrameSample
IL2CPP_EXTERN_C void FrameSample_t8064F61DD3BB94546FB62C119AB80FAD66546E1B_marshal_pinvoke_cleanup(FrameSample_t8064F61DD3BB94546FB62C119AB80FAD66546E1B_marshaled_pinvoke& marshaled)
{
	PrimitiveValue_tB787C76E9A37444599C45519DD7E4D3A1D4730C8_marshal_pinvoke_cleanup(marshaled.___value_0);
}


// Conversion methods for marshalling of: UnityEngine.InputSystem.Samples.VisualizationHelpers/TimelineVisualizer/FrameSample
IL2CPP_EXTERN_C void FrameSample_t8064F61DD3BB94546FB62C119AB80FAD66546E1B_marshal_com(const FrameSample_t8064F61DD3BB94546FB62C119AB80FAD66546E1B& unmarshaled, FrameSample_t8064F61DD3BB94546FB62C119AB80FAD66546E1B_marshaled_com& marshaled)
{
	PrimitiveValue_tB787C76E9A37444599C45519DD7E4D3A1D4730C8_marshal_com(unmarshaled.get_value_0(), marshaled.___value_0);
	marshaled.___frame_1 = unmarshaled.get_frame_1();
}
IL2CPP_EXTERN_C void FrameSample_t8064F61DD3BB94546FB62C119AB80FAD66546E1B_marshal_com_back(const FrameSample_t8064F61DD3BB94546FB62C119AB80FAD66546E1B_marshaled_com& marshaled, FrameSample_t8064F61DD3BB94546FB62C119AB80FAD66546E1B& unmarshaled)
{
	PrimitiveValue_tB787C76E9A37444599C45519DD7E4D3A1D4730C8  unmarshaled_value_temp_0;
	memset((&unmarshaled_value_temp_0), 0, sizeof(unmarshaled_value_temp_0));
	PrimitiveValue_tB787C76E9A37444599C45519DD7E4D3A1D4730C8_marshal_com_back(marshaled.___value_0, unmarshaled_value_temp_0);
	unmarshaled.set_value_0(unmarshaled_value_temp_0);
	int32_t unmarshaled_frame_temp_1 = 0;
	unmarshaled_frame_temp_1 = marshaled.___frame_1;
	unmarshaled.set_frame_1(unmarshaled_frame_temp_1);
}
// Conversion method for clean up from marshalling of: UnityEngine.InputSystem.Samples.VisualizationHelpers/TimelineVisualizer/FrameSample
IL2CPP_EXTERN_C void FrameSample_t8064F61DD3BB94546FB62C119AB80FAD66546E1B_marshal_com_cleanup(FrameSample_t8064F61DD3BB94546FB62C119AB80FAD66546E1B_marshaled_com& marshaled)
{
	PrimitiveValue_tB787C76E9A37444599C45519DD7E4D3A1D4730C8_marshal_com_cleanup(marshaled.___value_0);
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


// Conversion methods for marshalling of: UnityEngine.InputSystem.Samples.VisualizationHelpers/TimelineVisualizer/TimeSample
IL2CPP_EXTERN_C void TimeSample_t926350553A4576F5F20E71A9CFB9A19E37F35C2B_marshal_pinvoke(const TimeSample_t926350553A4576F5F20E71A9CFB9A19E37F35C2B& unmarshaled, TimeSample_t926350553A4576F5F20E71A9CFB9A19E37F35C2B_marshaled_pinvoke& marshaled)
{
	PrimitiveValue_tB787C76E9A37444599C45519DD7E4D3A1D4730C8_marshal_pinvoke(unmarshaled.get_value_0(), marshaled.___value_0);
	marshaled.___time_1 = unmarshaled.get_time_1();
}
IL2CPP_EXTERN_C void TimeSample_t926350553A4576F5F20E71A9CFB9A19E37F35C2B_marshal_pinvoke_back(const TimeSample_t926350553A4576F5F20E71A9CFB9A19E37F35C2B_marshaled_pinvoke& marshaled, TimeSample_t926350553A4576F5F20E71A9CFB9A19E37F35C2B& unmarshaled)
{
	PrimitiveValue_tB787C76E9A37444599C45519DD7E4D3A1D4730C8  unmarshaled_value_temp_0;
	memset((&unmarshaled_value_temp_0), 0, sizeof(unmarshaled_value_temp_0));
	PrimitiveValue_tB787C76E9A37444599C45519DD7E4D3A1D4730C8_marshal_pinvoke_back(marshaled.___value_0, unmarshaled_value_temp_0);
	unmarshaled.set_value_0(unmarshaled_value_temp_0);
	float unmarshaled_time_temp_1 = 0.0f;
	unmarshaled_time_temp_1 = marshaled.___time_1;
	unmarshaled.set_time_1(unmarshaled_time_temp_1);
}
// Conversion method for clean up from marshalling of: UnityEngine.InputSystem.Samples.VisualizationHelpers/TimelineVisualizer/TimeSample
IL2CPP_EXTERN_C void TimeSample_t926350553A4576F5F20E71A9CFB9A19E37F35C2B_marshal_pinvoke_cleanup(TimeSample_t926350553A4576F5F20E71A9CFB9A19E37F35C2B_marshaled_pinvoke& marshaled)
{
	PrimitiveValue_tB787C76E9A37444599C45519DD7E4D3A1D4730C8_marshal_pinvoke_cleanup(marshaled.___value_0);
}


// Conversion methods for marshalling of: UnityEngine.InputSystem.Samples.VisualizationHelpers/TimelineVisualizer/TimeSample
IL2CPP_EXTERN_C void TimeSample_t926350553A4576F5F20E71A9CFB9A19E37F35C2B_marshal_com(const TimeSample_t926350553A4576F5F20E71A9CFB9A19E37F35C2B& unmarshaled, TimeSample_t926350553A4576F5F20E71A9CFB9A19E37F35C2B_marshaled_com& marshaled)
{
	PrimitiveValue_tB787C76E9A37444599C45519DD7E4D3A1D4730C8_marshal_com(unmarshaled.get_value_0(), marshaled.___value_0);
	marshaled.___time_1 = unmarshaled.get_time_1();
}
IL2CPP_EXTERN_C void TimeSample_t926350553A4576F5F20E71A9CFB9A19E37F35C2B_marshal_com_back(const TimeSample_t926350553A4576F5F20E71A9CFB9A19E37F35C2B_marshaled_com& marshaled, TimeSample_t926350553A4576F5F20E71A9CFB9A19E37F35C2B& unmarshaled)
{
	PrimitiveValue_tB787C76E9A37444599C45519DD7E4D3A1D4730C8  unmarshaled_value_temp_0;
	memset((&unmarshaled_value_temp_0), 0, sizeof(unmarshaled_value_temp_0));
	PrimitiveValue_tB787C76E9A37444599C45519DD7E4D3A1D4730C8_marshal_com_back(marshaled.___value_0, unmarshaled_value_temp_0);
	unmarshaled.set_value_0(unmarshaled_value_temp_0);
	float unmarshaled_time_temp_1 = 0.0f;
	unmarshaled_time_temp_1 = marshaled.___time_1;
	unmarshaled.set_time_1(unmarshaled_time_temp_1);
}
// Conversion method for clean up from marshalling of: UnityEngine.InputSystem.Samples.VisualizationHelpers/TimelineVisualizer/TimeSample
IL2CPP_EXTERN_C void TimeSample_t926350553A4576F5F20E71A9CFB9A19E37F35C2B_marshal_com_cleanup(TimeSample_t926350553A4576F5F20E71A9CFB9A19E37F35C2B_marshaled_com& marshaled)
{
	PrimitiveValue_tB787C76E9A37444599C45519DD7E4D3A1D4730C8_marshal_com_cleanup(marshaled.___value_0);
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






// Conversion methods for marshalling of: UnityEngine.InputSystem.Samples.VisualizationHelpers/TimelineVisualizer/Timeline
IL2CPP_EXTERN_C void Timeline_t0E8C3B4B157DAE25A77A695529CE737933D5CCBE_marshal_pinvoke(const Timeline_t0E8C3B4B157DAE25A77A695529CE737933D5CCBE& unmarshaled, Timeline_t0E8C3B4B157DAE25A77A695529CE737933D5CCBE_marshaled_pinvoke& marshaled)
{
	Exception_t* ___name_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'name' of type 'Timeline': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___name_0Exception, NULL);
}
IL2CPP_EXTERN_C void Timeline_t0E8C3B4B157DAE25A77A695529CE737933D5CCBE_marshal_pinvoke_back(const Timeline_t0E8C3B4B157DAE25A77A695529CE737933D5CCBE_marshaled_pinvoke& marshaled, Timeline_t0E8C3B4B157DAE25A77A695529CE737933D5CCBE& unmarshaled)
{
	Exception_t* ___name_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'name' of type 'Timeline': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___name_0Exception, NULL);
}
// Conversion method for clean up from marshalling of: UnityEngine.InputSystem.Samples.VisualizationHelpers/TimelineVisualizer/Timeline
IL2CPP_EXTERN_C void Timeline_t0E8C3B4B157DAE25A77A695529CE737933D5CCBE_marshal_pinvoke_cleanup(Timeline_t0E8C3B4B157DAE25A77A695529CE737933D5CCBE_marshaled_pinvoke& marshaled)
{
}






// Conversion methods for marshalling of: UnityEngine.InputSystem.Samples.VisualizationHelpers/TimelineVisualizer/Timeline
IL2CPP_EXTERN_C void Timeline_t0E8C3B4B157DAE25A77A695529CE737933D5CCBE_marshal_com(const Timeline_t0E8C3B4B157DAE25A77A695529CE737933D5CCBE& unmarshaled, Timeline_t0E8C3B4B157DAE25A77A695529CE737933D5CCBE_marshaled_com& marshaled)
{
	Exception_t* ___name_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'name' of type 'Timeline': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___name_0Exception, NULL);
}
IL2CPP_EXTERN_C void Timeline_t0E8C3B4B157DAE25A77A695529CE737933D5CCBE_marshal_com_back(const Timeline_t0E8C3B4B157DAE25A77A695529CE737933D5CCBE_marshaled_com& marshaled, Timeline_t0E8C3B4B157DAE25A77A695529CE737933D5CCBE& unmarshaled)
{
	Exception_t* ___name_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'name' of type 'Timeline': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___name_0Exception, NULL);
}
// Conversion method for clean up from marshalling of: UnityEngine.InputSystem.Samples.VisualizationHelpers/TimelineVisualizer/Timeline
IL2CPP_EXTERN_C void Timeline_t0E8C3B4B157DAE25A77A695529CE737933D5CCBE_marshal_com_cleanup(Timeline_t0E8C3B4B157DAE25A77A695529CE737933D5CCBE_marshaled_com& marshaled)
{
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t InputSettings_get_updateMode_mF5342E2FBF3829B1A2F951A1BD140318BA2C8F01_inline (InputSettings_tCA238DEE6F6A4A12B38A7FE9B66B9B8F557DAAE2 * __this, const RuntimeMethod* method)
{
	{
		// get => m_UpdateMode;
		int32_t L_0 = __this->get_m_UpdateMode_5();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector2__ctor_m9F1F2D5EB5D1FF7091BB527AC8A72CBB309D115E_inline (Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * __this, float ___x0, float ___y1, const RuntimeMethod* method)
{
	{
		float L_0 = ___x0;
		__this->set_x_0(L_0);
		float L_1 = ___y1;
		__this->set_y_1(L_1);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* InputAction_get_name_m593E2EDA5FEE091CEBB226A2459645A30449D32A_inline (InputAction_tF0C77AF72E0C19608B020E77A2C36C04E9DCBE48 * __this, const RuntimeMethod* method)
{
	{
		// public string name => m_Name;
		String_t* L_0 = __this->get_m_Name_0();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* InputActionMap_get_name_mFB11C9955411C1C77B74A28F74694007133A84B5_inline (InputActionMap_tBA45B784C5957091166E0007413402A3E83DD226 * __this, const RuntimeMethod* method)
{
	{
		// public string name => m_Name;
		String_t* L_0 = __this->get_m_Name_0();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t InputAction_get_type_mE6E1C035E03262F5B354DC73B80F2113DC68B66D_inline (InputAction_tF0C77AF72E0C19608B020E77A2C36C04E9DCBE48 * __this, const RuntimeMethod* method)
{
	{
		// public InputActionType type => m_Type;
		int32_t L_0 = __this->get_m_Type_1();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* InputAction_get_expectedControlType_m6D142ABF3B8F6A0C330418F368D4C67A329BCE10_inline (InputAction_tF0C77AF72E0C19608B020E77A2C36C04E9DCBE48 * __this, const RuntimeMethod* method)
{
	{
		// get => m_ExpectedControlType;
		String_t* L_0 = __this->get_m_ExpectedControlType_2();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t String_get_Length_m129FC0ADA02FECBED3C0B1A809AE84A5AEE1CF09_inline (String_t* __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = __this->get_m_stringLength_0();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void TimelineVisualizer_set_showLegend_mB4E3E5417669492C804D1718D0370657C6A6434B_inline (TimelineVisualizer_tDCF8FE655A93D562471977C145A8B989803EA315 * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		// public bool showLegend { get; set; }
		bool L_0 = ___value0;
		__this->set_U3CshowLegendU3Ek__BackingField_0(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void TimelineVisualizer_set_timeUnit_mD5522FB42266C562986C4F6D4849199FDB86A2CC_inline (TimelineVisualizer_tDCF8FE655A93D562471977C145A8B989803EA315 * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		// public TimeUnit timeUnit { get; set; } = TimeUnit.Seconds;
		int32_t L_0 = ___value0;
		__this->set_U3CtimeUnitU3Ek__BackingField_2(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void TimelineVisualizer_set_historyDepth_m5D8C6D1A1D48F2232A428683AB5F9DB2C6043083_inline (TimelineVisualizer_tDCF8FE655A93D562471977C145A8B989803EA315 * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		// public int historyDepth { get; set; } = 100;
		int32_t L_0 = ___value0;
		__this->set_U3ChistoryDepthU3Ek__BackingField_4(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void TimelineVisualizer_set_showLimits_m5C5222B165A6EEB20C2BD897D29E3A0D8D409AC3_inline (TimelineVisualizer_tDCF8FE655A93D562471977C145A8B989803EA315 * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		// public bool showLimits { get; set; }
		bool L_0 = ___value0;
		__this->set_U3CshowLimitsU3Ek__BackingField_1(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void TimelineVisualizer_set_valueUnit_m68DEDAC6246114169451B77BAA89C357E8F57E37_inline (TimelineVisualizer_tDCF8FE655A93D562471977C145A8B989803EA315 * __this, GUIContent_t39256993BF4A33F76E073488D6A2F13D678DF60E * ___value0, const RuntimeMethod* method)
{
	{
		// public GUIContent valueUnit { get; set; }
		GUIContent_t39256993BF4A33F76E073488D6A2F13D678DF60E * L_0 = ___value0;
		__this->set_U3CvalueUnitU3Ek__BackingField_3(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR InputDevice_t9E276EAE78C382539051998DEA1CD0ECF2E91323 * InputControl_get_device_m26988D04E8358B6DB6EE7EEDAEBEB7EB260FF29E_inline (InputControl_t3CDD1115017147EEC9D825834637D7700669C006 * __this, const RuntimeMethod* method)
{
	{
		// public InputDevice device => m_Device;
		InputDevice_t9E276EAE78C382539051998DEA1CD0ECF2E91323 * L_0 = __this->get_m_Device_9();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR uint32_t InputState_get_updateCount_m53C26B51E7177C1189A0E0562045F6F17522492A_inline (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InputUpdate_t6B12FF38E9BE2CAE1B9775A2DC9C11C504CB5C88_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public static uint updateCount => InputUpdate.s_UpdateStepCount;
		uint32_t L_0 = ((InputUpdate_t6B12FF38E9BE2CAE1B9775A2DC9C11C504CB5C88_StaticFields*)il2cpp_codegen_static_fields_for(InputUpdate_t6B12FF38E9BE2CAE1B9775A2DC9C11C504CB5C88_il2cpp_TypeInfo_var))->get_s_UpdateStepCount_1();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t InputState_get_currentUpdateType_m502606CAA93CC4E4AB22DB61B88BD9C2C3A27AD9_inline (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InputUpdate_t6B12FF38E9BE2CAE1B9775A2DC9C11C504CB5C88_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public static InputUpdateType currentUpdateType => InputUpdate.s_LastUpdateType;
		int32_t L_0 = ((InputUpdate_t6B12FF38E9BE2CAE1B9775A2DC9C11C504CB5C88_StaticFields*)il2cpp_codegen_static_fields_for(InputUpdate_t6B12FF38E9BE2CAE1B9775A2DC9C11C504CB5C88_il2cpp_TypeInfo_var))->get_s_LastUpdateType_0();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  TimelineVisualizer_get_limitsY_m21AD946F4CC59C31D30B70E84D4C9CB317EB7A3C_inline (TimelineVisualizer_tDCF8FE655A93D562471977C145A8B989803EA315 * __this, const RuntimeMethod* method)
{
	{
		// get => m_LimitsY;
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_0 = __this->get_m_LimitsY_6();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  Vector2_op_Addition_m5EACC2AEA80FEE29F380397CF1F4B11D04BE71CC_inline (Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___a0, Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___b1, const RuntimeMethod* method)
{
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_0 = ___a0;
		float L_1 = L_0.get_x_0();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_2 = ___b1;
		float L_3 = L_2.get_x_0();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_4 = ___a0;
		float L_5 = L_4.get_y_1();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_6 = ___b1;
		float L_7 = L_6.get_y_1();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_8;
		memset((&L_8), 0, sizeof(L_8));
		Vector2__ctor_m9F1F2D5EB5D1FF7091BB527AC8A72CBB309D115E_inline((&L_8), ((float)il2cpp_codegen_add((float)L_1, (float)L_3)), ((float)il2cpp_codegen_add((float)L_5, (float)L_7)), /*hidden argument*/NULL);
		V_0 = L_8;
		goto IL_0023;
	}

IL_0023:
	{
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_9 = V_0;
		return L_9;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  Vector2_op_Subtraction_m6E536A8C72FEAA37FF8D5E26E11D6E71EB59599A_inline (Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___a0, Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___b1, const RuntimeMethod* method)
{
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_0 = ___a0;
		float L_1 = L_0.get_x_0();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_2 = ___b1;
		float L_3 = L_2.get_x_0();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_4 = ___a0;
		float L_5 = L_4.get_y_1();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_6 = ___b1;
		float L_7 = L_6.get_y_1();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_8;
		memset((&L_8), 0, sizeof(L_8));
		Vector2__ctor_m9F1F2D5EB5D1FF7091BB527AC8A72CBB309D115E_inline((&L_8), ((float)il2cpp_codegen_subtract((float)L_1, (float)L_3)), ((float)il2cpp_codegen_subtract((float)L_5, (float)L_7)), /*hidden argument*/NULL);
		V_0 = L_8;
		goto IL_0023;
	}

IL_0023:
	{
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_9 = V_0;
		return L_9;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector2_op_Implicit_m4FA146E613DBFE6C1C4B0E9B461D622E6F2FC294_inline (Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___v0, const RuntimeMethod* method)
{
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_0 = ___v0;
		float L_1 = L_0.get_x_0();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_2 = ___v0;
		float L_3 = L_2.get_y_1();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_4;
		memset((&L_4), 0, sizeof(L_4));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_4), L_1, L_3, (0.0f), /*hidden argument*/NULL);
		V_0 = L_4;
		goto IL_001a;
	}

IL_001a:
	{
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_5 = V_0;
		return L_5;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t TimelineVisualizer_get_timeUnit_mF6FCA53A8EA6CCC429BA80A17C290451B7DE8209_inline (TimelineVisualizer_tDCF8FE655A93D562471977C145A8B989803EA315 * __this, const RuntimeMethod* method)
{
	{
		// public TimeUnit timeUnit { get; set; } = TimeUnit.Seconds;
		int32_t L_0 = __this->get_U3CtimeUnitU3Ek__BackingField_2();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool TimelineVisualizer_get_showLegend_m76D2BCA5109D2FBB8A5666186A758A5163A4B50D_inline (TimelineVisualizer_tDCF8FE655A93D562471977C145A8B989803EA315 * __this, const RuntimeMethod* method)
{
	{
		// public bool showLegend { get; set; }
		bool L_0 = __this->get_U3CshowLegendU3Ek__BackingField_0();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool TimelineVisualizer_get_showLimits_m07C398180EAE041B67798510A5ADFDAA852A87B3_inline (TimelineVisualizer_tDCF8FE655A93D562471977C145A8B989803EA315 * __this, const RuntimeMethod* method)
{
	{
		// public bool showLimits { get; set; }
		bool L_0 = __this->get_U3CshowLimitsU3Ek__BackingField_1();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t TimelineVisualizer_get_historyDepth_mEB98A597D139219DF157F47E1EB425C9B7985EA2_inline (TimelineVisualizer_tDCF8FE655A93D562471977C145A8B989803EA315 * __this, const RuntimeMethod* method)
{
	{
		// public int historyDepth { get; set; } = 100;
		int32_t L_0 = __this->get_U3ChistoryDepthU3Ek__BackingField_4();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Vector2_op_Inequality_mA9E4245E487F3051F0EBF086646A1C341213D24E_inline (Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___lhs0, Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___rhs1, const RuntimeMethod* method)
{
	bool V_0 = false;
	{
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_0 = ___lhs0;
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_1 = ___rhs1;
		bool L_2;
		L_2 = Vector2_op_Equality_mAE5F31E8419538F0F6AF19D9897E0BE1CE8DB1B0_inline(L_0, L_1, /*hidden argument*/NULL);
		V_0 = (bool)((((int32_t)L_2) == ((int32_t)0))? 1 : 0);
		goto IL_000e;
	}

IL_000e:
	{
		bool L_3 = V_0;
		return L_3;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Vector2_op_Equality_mAE5F31E8419538F0F6AF19D9897E0BE1CE8DB1B0_inline (Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___lhs0, Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___rhs1, const RuntimeMethod* method)
{
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	bool V_2 = false;
	{
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_0 = ___lhs0;
		float L_1 = L_0.get_x_0();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_2 = ___rhs1;
		float L_3 = L_2.get_x_0();
		V_0 = ((float)il2cpp_codegen_subtract((float)L_1, (float)L_3));
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_4 = ___lhs0;
		float L_5 = L_4.get_y_1();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_6 = ___rhs1;
		float L_7 = L_6.get_y_1();
		V_1 = ((float)il2cpp_codegen_subtract((float)L_5, (float)L_7));
		float L_8 = V_0;
		float L_9 = V_0;
		float L_10 = V_1;
		float L_11 = V_1;
		V_2 = (bool)((((float)((float)il2cpp_codegen_add((float)((float)il2cpp_codegen_multiply((float)L_8, (float)L_9)), (float)((float)il2cpp_codegen_multiply((float)L_10, (float)L_11))))) < ((float)(9.99999944E-11f)))? 1 : 0);
		goto IL_002e;
	}

IL_002e:
	{
		bool L_12 = V_2;
		return L_12;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m5D847939ABB9A78203B062CAFFE975792174D00F_gshared_inline (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = (int32_t)__this->get__size_2();
		return (int32_t)L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject * Enumerator_get_Current_m9C4EBBD2108B51885E750F927D7936290C8E20EE_gshared_inline (Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = (RuntimeObject *)__this->get_current_3();
		return (RuntimeObject *)L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject * List_1_get_Item_mF00B574E58FB078BB753B05A3B86DD0A7A266B63_gshared_inline (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, int32_t ___index0, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___index0;
		int32_t L_1 = (int32_t)__this->get__size_2();
		if ((!(((uint32_t)L_0) >= ((uint32_t)L_1))))
		{
			goto IL_000e;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_m4841366ABC2B2AFA37C10900551D7E07522C0929(/*hidden argument*/NULL);
	}

IL_000e:
	{
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_2 = (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)__this->get__items_1();
		int32_t L_3 = ___index0;
		RuntimeObject * L_4;
		L_4 = IL2CPP_ARRAY_UNSAFE_LOAD((ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)L_2, (int32_t)L_3);
		return (RuntimeObject *)L_4;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t InputControlList_1_get_Count_m7A8114381D67F6EA7D09BA3B0676CA7257F62A5F_gshared_inline (InputControlList_1_t0C5A7D203415CFD1DE620B841FB9904AE4DA28CA * __this, const RuntimeMethod* method)
{
	{
		// public int Count => m_Count;
		int32_t L_0 = (int32_t)__this->get_m_Count_0();
		return (int32_t)L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * __this, float ___x0, float ___y1, float ___z2, const RuntimeMethod* method)
{
	{
		float L_0 = ___x0;
		__this->set_x_2(L_0);
		float L_1 = ___y1;
		__this->set_y_3(L_1);
		float L_2 = ___z2;
		__this->set_z_4(L_2);
		return;
	}
}
