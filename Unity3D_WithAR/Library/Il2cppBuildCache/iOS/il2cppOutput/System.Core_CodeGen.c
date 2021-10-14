#include "pch-c.h"
#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include "codegen/il2cpp-codegen-metadata.h"





// 0x00000001 System.Exception System.Linq.Error::ArgumentNull(System.String)
extern void Error_ArgumentNull_m0EDA0D46D72CA692518E3E2EB75B48044D8FD41E (void);
// 0x00000002 System.Exception System.Linq.Error::ArgumentOutOfRange(System.String)
extern void Error_ArgumentOutOfRange_m2EFB999454161A6B48F8DAC3753FDC190538F0F2 (void);
// 0x00000003 System.Exception System.Linq.Error::MoreThanOneMatch()
extern void Error_MoreThanOneMatch_m4C4756AF34A76EF12F3B2B6D8C78DE547F0FBCF8 (void);
// 0x00000004 System.Exception System.Linq.Error::NoElements()
extern void Error_NoElements_mB89E91246572F009281D79730950808F17C3F353 (void);
// 0x00000005 System.Exception System.Linq.Error::NoMatch()
extern void Error_NoMatch_mA0FE78EC100066FA506B4C1C3AEC2E9E2DB79945 (void);
// 0x00000006 System.Collections.Generic.IEnumerable`1<TSource> System.Linq.Enumerable::Where(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,System.Boolean>)
// 0x00000007 System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable::Select(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,TResult>)
// 0x00000008 System.Func`2<TSource,System.Boolean> System.Linq.Enumerable::CombinePredicates(System.Func`2<TSource,System.Boolean>,System.Func`2<TSource,System.Boolean>)
// 0x00000009 System.Func`2<TSource,TResult> System.Linq.Enumerable::CombineSelectors(System.Func`2<TSource,TMiddle>,System.Func`2<TMiddle,TResult>)
// 0x0000000A System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable::SelectMany(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,System.Collections.Generic.IEnumerable`1<TResult>>)
// 0x0000000B System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable::SelectManyIterator(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,System.Collections.Generic.IEnumerable`1<TResult>>)
// 0x0000000C System.Collections.Generic.IEnumerable`1<TSource> System.Linq.Enumerable::Take(System.Collections.Generic.IEnumerable`1<TSource>,System.Int32)
// 0x0000000D System.Collections.Generic.IEnumerable`1<TSource> System.Linq.Enumerable::TakeIterator(System.Collections.Generic.IEnumerable`1<TSource>,System.Int32)
// 0x0000000E System.Collections.Generic.IEnumerable`1<TSource> System.Linq.Enumerable::Distinct(System.Collections.Generic.IEnumerable`1<TSource>)
// 0x0000000F System.Collections.Generic.IEnumerable`1<TSource> System.Linq.Enumerable::DistinctIterator(System.Collections.Generic.IEnumerable`1<TSource>,System.Collections.Generic.IEqualityComparer`1<TSource>)
// 0x00000010 System.Collections.Generic.IEnumerable`1<TSource> System.Linq.Enumerable::Reverse(System.Collections.Generic.IEnumerable`1<TSource>)
// 0x00000011 System.Collections.Generic.IEnumerable`1<TSource> System.Linq.Enumerable::ReverseIterator(System.Collections.Generic.IEnumerable`1<TSource>)
// 0x00000012 TSource[] System.Linq.Enumerable::ToArray(System.Collections.Generic.IEnumerable`1<TSource>)
// 0x00000013 System.Collections.Generic.List`1<TSource> System.Linq.Enumerable::ToList(System.Collections.Generic.IEnumerable`1<TSource>)
// 0x00000014 System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable::OfType(System.Collections.IEnumerable)
// 0x00000015 System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable::OfTypeIterator(System.Collections.IEnumerable)
// 0x00000016 System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable::Cast(System.Collections.IEnumerable)
// 0x00000017 System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable::CastIterator(System.Collections.IEnumerable)
// 0x00000018 TSource System.Linq.Enumerable::First(System.Collections.Generic.IEnumerable`1<TSource>)
// 0x00000019 TSource System.Linq.Enumerable::First(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,System.Boolean>)
// 0x0000001A TSource System.Linq.Enumerable::FirstOrDefault(System.Collections.Generic.IEnumerable`1<TSource>)
// 0x0000001B TSource System.Linq.Enumerable::FirstOrDefault(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,System.Boolean>)
// 0x0000001C TSource System.Linq.Enumerable::SingleOrDefault(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,System.Boolean>)
// 0x0000001D System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable::Repeat(TResult,System.Int32)
// 0x0000001E System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable::RepeatIterator(TResult,System.Int32)
// 0x0000001F System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable::Empty()
// 0x00000020 System.Boolean System.Linq.Enumerable::Any(System.Collections.Generic.IEnumerable`1<TSource>)
// 0x00000021 System.Boolean System.Linq.Enumerable::Any(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,System.Boolean>)
// 0x00000022 System.Boolean System.Linq.Enumerable::All(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,System.Boolean>)
// 0x00000023 System.Int32 System.Linq.Enumerable::Count(System.Collections.Generic.IEnumerable`1<TSource>)
// 0x00000024 System.Boolean System.Linq.Enumerable::Contains(System.Collections.Generic.IEnumerable`1<TSource>,TSource)
// 0x00000025 System.Boolean System.Linq.Enumerable::Contains(System.Collections.Generic.IEnumerable`1<TSource>,TSource,System.Collections.Generic.IEqualityComparer`1<TSource>)
// 0x00000026 System.Void System.Linq.Enumerable/Iterator`1::.ctor()
// 0x00000027 TSource System.Linq.Enumerable/Iterator`1::get_Current()
// 0x00000028 System.Linq.Enumerable/Iterator`1<TSource> System.Linq.Enumerable/Iterator`1::Clone()
// 0x00000029 System.Void System.Linq.Enumerable/Iterator`1::Dispose()
// 0x0000002A System.Collections.Generic.IEnumerator`1<TSource> System.Linq.Enumerable/Iterator`1::GetEnumerator()
// 0x0000002B System.Boolean System.Linq.Enumerable/Iterator`1::MoveNext()
// 0x0000002C System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable/Iterator`1::Select(System.Func`2<TSource,TResult>)
// 0x0000002D System.Collections.Generic.IEnumerable`1<TSource> System.Linq.Enumerable/Iterator`1::Where(System.Func`2<TSource,System.Boolean>)
// 0x0000002E System.Object System.Linq.Enumerable/Iterator`1::System.Collections.IEnumerator.get_Current()
// 0x0000002F System.Collections.IEnumerator System.Linq.Enumerable/Iterator`1::System.Collections.IEnumerable.GetEnumerator()
// 0x00000030 System.Void System.Linq.Enumerable/Iterator`1::System.Collections.IEnumerator.Reset()
// 0x00000031 System.Void System.Linq.Enumerable/WhereEnumerableIterator`1::.ctor(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,System.Boolean>)
// 0x00000032 System.Linq.Enumerable/Iterator`1<TSource> System.Linq.Enumerable/WhereEnumerableIterator`1::Clone()
// 0x00000033 System.Void System.Linq.Enumerable/WhereEnumerableIterator`1::Dispose()
// 0x00000034 System.Boolean System.Linq.Enumerable/WhereEnumerableIterator`1::MoveNext()
// 0x00000035 System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable/WhereEnumerableIterator`1::Select(System.Func`2<TSource,TResult>)
// 0x00000036 System.Collections.Generic.IEnumerable`1<TSource> System.Linq.Enumerable/WhereEnumerableIterator`1::Where(System.Func`2<TSource,System.Boolean>)
// 0x00000037 System.Void System.Linq.Enumerable/WhereArrayIterator`1::.ctor(TSource[],System.Func`2<TSource,System.Boolean>)
// 0x00000038 System.Linq.Enumerable/Iterator`1<TSource> System.Linq.Enumerable/WhereArrayIterator`1::Clone()
// 0x00000039 System.Boolean System.Linq.Enumerable/WhereArrayIterator`1::MoveNext()
// 0x0000003A System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable/WhereArrayIterator`1::Select(System.Func`2<TSource,TResult>)
// 0x0000003B System.Collections.Generic.IEnumerable`1<TSource> System.Linq.Enumerable/WhereArrayIterator`1::Where(System.Func`2<TSource,System.Boolean>)
// 0x0000003C System.Void System.Linq.Enumerable/WhereListIterator`1::.ctor(System.Collections.Generic.List`1<TSource>,System.Func`2<TSource,System.Boolean>)
// 0x0000003D System.Linq.Enumerable/Iterator`1<TSource> System.Linq.Enumerable/WhereListIterator`1::Clone()
// 0x0000003E System.Boolean System.Linq.Enumerable/WhereListIterator`1::MoveNext()
// 0x0000003F System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable/WhereListIterator`1::Select(System.Func`2<TSource,TResult>)
// 0x00000040 System.Collections.Generic.IEnumerable`1<TSource> System.Linq.Enumerable/WhereListIterator`1::Where(System.Func`2<TSource,System.Boolean>)
// 0x00000041 System.Void System.Linq.Enumerable/WhereSelectEnumerableIterator`2::.ctor(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,System.Boolean>,System.Func`2<TSource,TResult>)
// 0x00000042 System.Linq.Enumerable/Iterator`1<TResult> System.Linq.Enumerable/WhereSelectEnumerableIterator`2::Clone()
// 0x00000043 System.Void System.Linq.Enumerable/WhereSelectEnumerableIterator`2::Dispose()
// 0x00000044 System.Boolean System.Linq.Enumerable/WhereSelectEnumerableIterator`2::MoveNext()
// 0x00000045 System.Collections.Generic.IEnumerable`1<TResult2> System.Linq.Enumerable/WhereSelectEnumerableIterator`2::Select(System.Func`2<TResult,TResult2>)
// 0x00000046 System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable/WhereSelectEnumerableIterator`2::Where(System.Func`2<TResult,System.Boolean>)
// 0x00000047 System.Void System.Linq.Enumerable/WhereSelectArrayIterator`2::.ctor(TSource[],System.Func`2<TSource,System.Boolean>,System.Func`2<TSource,TResult>)
// 0x00000048 System.Linq.Enumerable/Iterator`1<TResult> System.Linq.Enumerable/WhereSelectArrayIterator`2::Clone()
// 0x00000049 System.Boolean System.Linq.Enumerable/WhereSelectArrayIterator`2::MoveNext()
// 0x0000004A System.Collections.Generic.IEnumerable`1<TResult2> System.Linq.Enumerable/WhereSelectArrayIterator`2::Select(System.Func`2<TResult,TResult2>)
// 0x0000004B System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable/WhereSelectArrayIterator`2::Where(System.Func`2<TResult,System.Boolean>)
// 0x0000004C System.Void System.Linq.Enumerable/WhereSelectListIterator`2::.ctor(System.Collections.Generic.List`1<TSource>,System.Func`2<TSource,System.Boolean>,System.Func`2<TSource,TResult>)
// 0x0000004D System.Linq.Enumerable/Iterator`1<TResult> System.Linq.Enumerable/WhereSelectListIterator`2::Clone()
// 0x0000004E System.Boolean System.Linq.Enumerable/WhereSelectListIterator`2::MoveNext()
// 0x0000004F System.Collections.Generic.IEnumerable`1<TResult2> System.Linq.Enumerable/WhereSelectListIterator`2::Select(System.Func`2<TResult,TResult2>)
// 0x00000050 System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable/WhereSelectListIterator`2::Where(System.Func`2<TResult,System.Boolean>)
// 0x00000051 System.Void System.Linq.Enumerable/<>c__DisplayClass6_0`1::.ctor()
// 0x00000052 System.Boolean System.Linq.Enumerable/<>c__DisplayClass6_0`1::<CombinePredicates>b__0(TSource)
// 0x00000053 System.Void System.Linq.Enumerable/<>c__DisplayClass7_0`3::.ctor()
// 0x00000054 TResult System.Linq.Enumerable/<>c__DisplayClass7_0`3::<CombineSelectors>b__0(TSource)
// 0x00000055 System.Void System.Linq.Enumerable/<SelectManyIterator>d__17`2::.ctor(System.Int32)
// 0x00000056 System.Void System.Linq.Enumerable/<SelectManyIterator>d__17`2::System.IDisposable.Dispose()
// 0x00000057 System.Boolean System.Linq.Enumerable/<SelectManyIterator>d__17`2::MoveNext()
// 0x00000058 System.Void System.Linq.Enumerable/<SelectManyIterator>d__17`2::<>m__Finally1()
// 0x00000059 System.Void System.Linq.Enumerable/<SelectManyIterator>d__17`2::<>m__Finally2()
// 0x0000005A TResult System.Linq.Enumerable/<SelectManyIterator>d__17`2::System.Collections.Generic.IEnumerator<TResult>.get_Current()
// 0x0000005B System.Void System.Linq.Enumerable/<SelectManyIterator>d__17`2::System.Collections.IEnumerator.Reset()
// 0x0000005C System.Object System.Linq.Enumerable/<SelectManyIterator>d__17`2::System.Collections.IEnumerator.get_Current()
// 0x0000005D System.Collections.Generic.IEnumerator`1<TResult> System.Linq.Enumerable/<SelectManyIterator>d__17`2::System.Collections.Generic.IEnumerable<TResult>.GetEnumerator()
// 0x0000005E System.Collections.IEnumerator System.Linq.Enumerable/<SelectManyIterator>d__17`2::System.Collections.IEnumerable.GetEnumerator()
// 0x0000005F System.Void System.Linq.Enumerable/<TakeIterator>d__25`1::.ctor(System.Int32)
// 0x00000060 System.Void System.Linq.Enumerable/<TakeIterator>d__25`1::System.IDisposable.Dispose()
// 0x00000061 System.Boolean System.Linq.Enumerable/<TakeIterator>d__25`1::MoveNext()
// 0x00000062 System.Void System.Linq.Enumerable/<TakeIterator>d__25`1::<>m__Finally1()
// 0x00000063 TSource System.Linq.Enumerable/<TakeIterator>d__25`1::System.Collections.Generic.IEnumerator<TSource>.get_Current()
// 0x00000064 System.Void System.Linq.Enumerable/<TakeIterator>d__25`1::System.Collections.IEnumerator.Reset()
// 0x00000065 System.Object System.Linq.Enumerable/<TakeIterator>d__25`1::System.Collections.IEnumerator.get_Current()
// 0x00000066 System.Collections.Generic.IEnumerator`1<TSource> System.Linq.Enumerable/<TakeIterator>d__25`1::System.Collections.Generic.IEnumerable<TSource>.GetEnumerator()
// 0x00000067 System.Collections.IEnumerator System.Linq.Enumerable/<TakeIterator>d__25`1::System.Collections.IEnumerable.GetEnumerator()
// 0x00000068 System.Void System.Linq.Enumerable/<DistinctIterator>d__68`1::.ctor(System.Int32)
// 0x00000069 System.Void System.Linq.Enumerable/<DistinctIterator>d__68`1::System.IDisposable.Dispose()
// 0x0000006A System.Boolean System.Linq.Enumerable/<DistinctIterator>d__68`1::MoveNext()
// 0x0000006B System.Void System.Linq.Enumerable/<DistinctIterator>d__68`1::<>m__Finally1()
// 0x0000006C TSource System.Linq.Enumerable/<DistinctIterator>d__68`1::System.Collections.Generic.IEnumerator<TSource>.get_Current()
// 0x0000006D System.Void System.Linq.Enumerable/<DistinctIterator>d__68`1::System.Collections.IEnumerator.Reset()
// 0x0000006E System.Object System.Linq.Enumerable/<DistinctIterator>d__68`1::System.Collections.IEnumerator.get_Current()
// 0x0000006F System.Collections.Generic.IEnumerator`1<TSource> System.Linq.Enumerable/<DistinctIterator>d__68`1::System.Collections.Generic.IEnumerable<TSource>.GetEnumerator()
// 0x00000070 System.Collections.IEnumerator System.Linq.Enumerable/<DistinctIterator>d__68`1::System.Collections.IEnumerable.GetEnumerator()
// 0x00000071 System.Void System.Linq.Enumerable/<ReverseIterator>d__79`1::.ctor(System.Int32)
// 0x00000072 System.Void System.Linq.Enumerable/<ReverseIterator>d__79`1::System.IDisposable.Dispose()
// 0x00000073 System.Boolean System.Linq.Enumerable/<ReverseIterator>d__79`1::MoveNext()
// 0x00000074 TSource System.Linq.Enumerable/<ReverseIterator>d__79`1::System.Collections.Generic.IEnumerator<TSource>.get_Current()
// 0x00000075 System.Void System.Linq.Enumerable/<ReverseIterator>d__79`1::System.Collections.IEnumerator.Reset()
// 0x00000076 System.Object System.Linq.Enumerable/<ReverseIterator>d__79`1::System.Collections.IEnumerator.get_Current()
// 0x00000077 System.Collections.Generic.IEnumerator`1<TSource> System.Linq.Enumerable/<ReverseIterator>d__79`1::System.Collections.Generic.IEnumerable<TSource>.GetEnumerator()
// 0x00000078 System.Collections.IEnumerator System.Linq.Enumerable/<ReverseIterator>d__79`1::System.Collections.IEnumerable.GetEnumerator()
// 0x00000079 System.Void System.Linq.Enumerable/<OfTypeIterator>d__97`1::.ctor(System.Int32)
// 0x0000007A System.Void System.Linq.Enumerable/<OfTypeIterator>d__97`1::System.IDisposable.Dispose()
// 0x0000007B System.Boolean System.Linq.Enumerable/<OfTypeIterator>d__97`1::MoveNext()
// 0x0000007C System.Void System.Linq.Enumerable/<OfTypeIterator>d__97`1::<>m__Finally1()
// 0x0000007D TResult System.Linq.Enumerable/<OfTypeIterator>d__97`1::System.Collections.Generic.IEnumerator<TResult>.get_Current()
// 0x0000007E System.Void System.Linq.Enumerable/<OfTypeIterator>d__97`1::System.Collections.IEnumerator.Reset()
// 0x0000007F System.Object System.Linq.Enumerable/<OfTypeIterator>d__97`1::System.Collections.IEnumerator.get_Current()
// 0x00000080 System.Collections.Generic.IEnumerator`1<TResult> System.Linq.Enumerable/<OfTypeIterator>d__97`1::System.Collections.Generic.IEnumerable<TResult>.GetEnumerator()
// 0x00000081 System.Collections.IEnumerator System.Linq.Enumerable/<OfTypeIterator>d__97`1::System.Collections.IEnumerable.GetEnumerator()
// 0x00000082 System.Void System.Linq.Enumerable/<CastIterator>d__99`1::.ctor(System.Int32)
// 0x00000083 System.Void System.Linq.Enumerable/<CastIterator>d__99`1::System.IDisposable.Dispose()
// 0x00000084 System.Boolean System.Linq.Enumerable/<CastIterator>d__99`1::MoveNext()
// 0x00000085 System.Void System.Linq.Enumerable/<CastIterator>d__99`1::<>m__Finally1()
// 0x00000086 TResult System.Linq.Enumerable/<CastIterator>d__99`1::System.Collections.Generic.IEnumerator<TResult>.get_Current()
// 0x00000087 System.Void System.Linq.Enumerable/<CastIterator>d__99`1::System.Collections.IEnumerator.Reset()
// 0x00000088 System.Object System.Linq.Enumerable/<CastIterator>d__99`1::System.Collections.IEnumerator.get_Current()
// 0x00000089 System.Collections.Generic.IEnumerator`1<TResult> System.Linq.Enumerable/<CastIterator>d__99`1::System.Collections.Generic.IEnumerable<TResult>.GetEnumerator()
// 0x0000008A System.Collections.IEnumerator System.Linq.Enumerable/<CastIterator>d__99`1::System.Collections.IEnumerable.GetEnumerator()
// 0x0000008B System.Void System.Linq.Enumerable/<RepeatIterator>d__117`1::.ctor(System.Int32)
// 0x0000008C System.Void System.Linq.Enumerable/<RepeatIterator>d__117`1::System.IDisposable.Dispose()
// 0x0000008D System.Boolean System.Linq.Enumerable/<RepeatIterator>d__117`1::MoveNext()
// 0x0000008E TResult System.Linq.Enumerable/<RepeatIterator>d__117`1::System.Collections.Generic.IEnumerator<TResult>.get_Current()
// 0x0000008F System.Void System.Linq.Enumerable/<RepeatIterator>d__117`1::System.Collections.IEnumerator.Reset()
// 0x00000090 System.Object System.Linq.Enumerable/<RepeatIterator>d__117`1::System.Collections.IEnumerator.get_Current()
// 0x00000091 System.Collections.Generic.IEnumerator`1<TResult> System.Linq.Enumerable/<RepeatIterator>d__117`1::System.Collections.Generic.IEnumerable<TResult>.GetEnumerator()
// 0x00000092 System.Collections.IEnumerator System.Linq.Enumerable/<RepeatIterator>d__117`1::System.Collections.IEnumerable.GetEnumerator()
// 0x00000093 System.Void System.Linq.EmptyEnumerable`1::.cctor()
// 0x00000094 System.Void System.Linq.Set`1::.ctor(System.Collections.Generic.IEqualityComparer`1<TElement>)
// 0x00000095 System.Boolean System.Linq.Set`1::Add(TElement)
// 0x00000096 System.Boolean System.Linq.Set`1::Find(TElement,System.Boolean)
// 0x00000097 System.Void System.Linq.Set`1::Resize()
// 0x00000098 System.Int32 System.Linq.Set`1::InternalGetHashCode(TElement)
// 0x00000099 System.Void System.Linq.Buffer`1::.ctor(System.Collections.Generic.IEnumerable`1<TElement>)
// 0x0000009A TElement[] System.Linq.Buffer`1::ToArray()
// 0x0000009B System.Void System.Collections.Generic.HashSet`1::.ctor()
// 0x0000009C System.Void System.Collections.Generic.HashSet`1::.ctor(System.Collections.Generic.IEqualityComparer`1<T>)
// 0x0000009D System.Void System.Collections.Generic.HashSet`1::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
// 0x0000009E System.Void System.Collections.Generic.HashSet`1::System.Collections.Generic.ICollection<T>.Add(T)
// 0x0000009F System.Void System.Collections.Generic.HashSet`1::Clear()
// 0x000000A0 System.Boolean System.Collections.Generic.HashSet`1::Contains(T)
// 0x000000A1 System.Void System.Collections.Generic.HashSet`1::CopyTo(T[],System.Int32)
// 0x000000A2 System.Boolean System.Collections.Generic.HashSet`1::Remove(T)
// 0x000000A3 System.Int32 System.Collections.Generic.HashSet`1::get_Count()
// 0x000000A4 System.Boolean System.Collections.Generic.HashSet`1::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
// 0x000000A5 System.Collections.Generic.HashSet`1/Enumerator<T> System.Collections.Generic.HashSet`1::GetEnumerator()
// 0x000000A6 System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.HashSet`1::System.Collections.Generic.IEnumerable<T>.GetEnumerator()
// 0x000000A7 System.Collections.IEnumerator System.Collections.Generic.HashSet`1::System.Collections.IEnumerable.GetEnumerator()
// 0x000000A8 System.Void System.Collections.Generic.HashSet`1::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
// 0x000000A9 System.Void System.Collections.Generic.HashSet`1::OnDeserialization(System.Object)
// 0x000000AA System.Boolean System.Collections.Generic.HashSet`1::Add(T)
// 0x000000AB System.Void System.Collections.Generic.HashSet`1::CopyTo(T[])
// 0x000000AC System.Void System.Collections.Generic.HashSet`1::CopyTo(T[],System.Int32,System.Int32)
// 0x000000AD System.Void System.Collections.Generic.HashSet`1::Initialize(System.Int32)
// 0x000000AE System.Void System.Collections.Generic.HashSet`1::IncreaseCapacity()
// 0x000000AF System.Void System.Collections.Generic.HashSet`1::SetCapacity(System.Int32)
// 0x000000B0 System.Boolean System.Collections.Generic.HashSet`1::AddIfNotPresent(T)
// 0x000000B1 System.Int32 System.Collections.Generic.HashSet`1::InternalGetHashCode(T)
// 0x000000B2 System.Void System.Collections.Generic.HashSet`1/Enumerator::.ctor(System.Collections.Generic.HashSet`1<T>)
// 0x000000B3 System.Void System.Collections.Generic.HashSet`1/Enumerator::Dispose()
// 0x000000B4 System.Boolean System.Collections.Generic.HashSet`1/Enumerator::MoveNext()
// 0x000000B5 T System.Collections.Generic.HashSet`1/Enumerator::get_Current()
// 0x000000B6 System.Object System.Collections.Generic.HashSet`1/Enumerator::System.Collections.IEnumerator.get_Current()
// 0x000000B7 System.Void System.Collections.Generic.HashSet`1/Enumerator::System.Collections.IEnumerator.Reset()
static Il2CppMethodPointer s_methodPointers[183] = 
{
	Error_ArgumentNull_m0EDA0D46D72CA692518E3E2EB75B48044D8FD41E,
	Error_ArgumentOutOfRange_m2EFB999454161A6B48F8DAC3753FDC190538F0F2,
	Error_MoreThanOneMatch_m4C4756AF34A76EF12F3B2B6D8C78DE547F0FBCF8,
	Error_NoElements_mB89E91246572F009281D79730950808F17C3F353,
	Error_NoMatch_mA0FE78EC100066FA506B4C1C3AEC2E9E2DB79945,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
};
static const int32_t s_InvokerIndices[183] = 
{
	4909,
	4909,
	5080,
	5080,
	5080,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
};
static const Il2CppTokenRangePair s_rgctxIndices[59] = 
{
	{ 0x02000004, { 91, 4 } },
	{ 0x02000005, { 95, 9 } },
	{ 0x02000006, { 106, 7 } },
	{ 0x02000007, { 115, 10 } },
	{ 0x02000008, { 127, 11 } },
	{ 0x02000009, { 141, 9 } },
	{ 0x0200000A, { 153, 12 } },
	{ 0x0200000B, { 168, 1 } },
	{ 0x0200000C, { 169, 2 } },
	{ 0x0200000D, { 171, 12 } },
	{ 0x0200000E, { 183, 8 } },
	{ 0x0200000F, { 191, 11 } },
	{ 0x02000010, { 202, 6 } },
	{ 0x02000011, { 208, 6 } },
	{ 0x02000012, { 214, 6 } },
	{ 0x02000013, { 220, 4 } },
	{ 0x02000014, { 224, 2 } },
	{ 0x02000015, { 226, 8 } },
	{ 0x02000017, { 234, 4 } },
	{ 0x02000018, { 238, 21 } },
	{ 0x0200001A, { 259, 2 } },
	{ 0x06000006, { 0, 10 } },
	{ 0x06000007, { 10, 10 } },
	{ 0x06000008, { 20, 5 } },
	{ 0x06000009, { 25, 5 } },
	{ 0x0600000A, { 30, 1 } },
	{ 0x0600000B, { 31, 2 } },
	{ 0x0600000C, { 33, 1 } },
	{ 0x0600000D, { 34, 2 } },
	{ 0x0600000E, { 36, 1 } },
	{ 0x0600000F, { 37, 2 } },
	{ 0x06000010, { 39, 1 } },
	{ 0x06000011, { 40, 2 } },
	{ 0x06000012, { 42, 3 } },
	{ 0x06000013, { 45, 2 } },
	{ 0x06000014, { 47, 1 } },
	{ 0x06000015, { 48, 2 } },
	{ 0x06000016, { 50, 2 } },
	{ 0x06000017, { 52, 2 } },
	{ 0x06000018, { 54, 4 } },
	{ 0x06000019, { 58, 3 } },
	{ 0x0600001A, { 61, 4 } },
	{ 0x0600001B, { 65, 3 } },
	{ 0x0600001C, { 68, 3 } },
	{ 0x0600001D, { 71, 1 } },
	{ 0x0600001E, { 72, 2 } },
	{ 0x0600001F, { 74, 1 } },
	{ 0x06000020, { 75, 1 } },
	{ 0x06000021, { 76, 3 } },
	{ 0x06000022, { 79, 3 } },
	{ 0x06000023, { 82, 2 } },
	{ 0x06000024, { 84, 2 } },
	{ 0x06000025, { 86, 5 } },
	{ 0x06000035, { 104, 2 } },
	{ 0x0600003A, { 113, 2 } },
	{ 0x0600003F, { 125, 2 } },
	{ 0x06000045, { 138, 3 } },
	{ 0x0600004A, { 150, 3 } },
	{ 0x0600004F, { 165, 3 } },
};
static const Il2CppRGCTXDefinition s_rgctxValues[261] = 
{
	{ (Il2CppRGCTXDataType)2, 2431 },
	{ (Il2CppRGCTXDataType)3, 9344 },
	{ (Il2CppRGCTXDataType)2, 3878 },
	{ (Il2CppRGCTXDataType)2, 3380 },
	{ (Il2CppRGCTXDataType)3, 16444 },
	{ (Il2CppRGCTXDataType)2, 2523 },
	{ (Il2CppRGCTXDataType)2, 3387 },
	{ (Il2CppRGCTXDataType)3, 16479 },
	{ (Il2CppRGCTXDataType)2, 3382 },
	{ (Il2CppRGCTXDataType)3, 16456 },
	{ (Il2CppRGCTXDataType)2, 2432 },
	{ (Il2CppRGCTXDataType)3, 9345 },
	{ (Il2CppRGCTXDataType)2, 3900 },
	{ (Il2CppRGCTXDataType)2, 3389 },
	{ (Il2CppRGCTXDataType)3, 16491 },
	{ (Il2CppRGCTXDataType)2, 2539 },
	{ (Il2CppRGCTXDataType)2, 3397 },
	{ (Il2CppRGCTXDataType)3, 16655 },
	{ (Il2CppRGCTXDataType)2, 3393 },
	{ (Il2CppRGCTXDataType)3, 16566 },
	{ (Il2CppRGCTXDataType)2, 789 },
	{ (Il2CppRGCTXDataType)3, 35 },
	{ (Il2CppRGCTXDataType)3, 36 },
	{ (Il2CppRGCTXDataType)2, 1399 },
	{ (Il2CppRGCTXDataType)3, 6628 },
	{ (Il2CppRGCTXDataType)2, 790 },
	{ (Il2CppRGCTXDataType)3, 43 },
	{ (Il2CppRGCTXDataType)3, 44 },
	{ (Il2CppRGCTXDataType)2, 1410 },
	{ (Il2CppRGCTXDataType)3, 6635 },
	{ (Il2CppRGCTXDataType)3, 19610 },
	{ (Il2CppRGCTXDataType)2, 804 },
	{ (Il2CppRGCTXDataType)3, 184 },
	{ (Il2CppRGCTXDataType)3, 19616 },
	{ (Il2CppRGCTXDataType)2, 807 },
	{ (Il2CppRGCTXDataType)3, 213 },
	{ (Il2CppRGCTXDataType)3, 19550 },
	{ (Il2CppRGCTXDataType)2, 793 },
	{ (Il2CppRGCTXDataType)3, 101 },
	{ (Il2CppRGCTXDataType)3, 19580 },
	{ (Il2CppRGCTXDataType)2, 802 },
	{ (Il2CppRGCTXDataType)3, 173 },
	{ (Il2CppRGCTXDataType)2, 1034 },
	{ (Il2CppRGCTXDataType)3, 1800 },
	{ (Il2CppRGCTXDataType)3, 1801 },
	{ (Il2CppRGCTXDataType)2, 2524 },
	{ (Il2CppRGCTXDataType)3, 9980 },
	{ (Il2CppRGCTXDataType)3, 19570 },
	{ (Il2CppRGCTXDataType)2, 798 },
	{ (Il2CppRGCTXDataType)3, 140 },
	{ (Il2CppRGCTXDataType)2, 1697 },
	{ (Il2CppRGCTXDataType)3, 19494 },
	{ (Il2CppRGCTXDataType)2, 791 },
	{ (Il2CppRGCTXDataType)3, 87 },
	{ (Il2CppRGCTXDataType)2, 2196 },
	{ (Il2CppRGCTXDataType)2, 1573 },
	{ (Il2CppRGCTXDataType)2, 1713 },
	{ (Il2CppRGCTXDataType)2, 1852 },
	{ (Il2CppRGCTXDataType)2, 1714 },
	{ (Il2CppRGCTXDataType)2, 1853 },
	{ (Il2CppRGCTXDataType)3, 6629 },
	{ (Il2CppRGCTXDataType)2, 2197 },
	{ (Il2CppRGCTXDataType)2, 1574 },
	{ (Il2CppRGCTXDataType)2, 1715 },
	{ (Il2CppRGCTXDataType)2, 1854 },
	{ (Il2CppRGCTXDataType)2, 1716 },
	{ (Il2CppRGCTXDataType)2, 1855 },
	{ (Il2CppRGCTXDataType)3, 6630 },
	{ (Il2CppRGCTXDataType)2, 1717 },
	{ (Il2CppRGCTXDataType)2, 1856 },
	{ (Il2CppRGCTXDataType)3, 6631 },
	{ (Il2CppRGCTXDataType)3, 19575 },
	{ (Il2CppRGCTXDataType)2, 800 },
	{ (Il2CppRGCTXDataType)3, 154 },
	{ (Il2CppRGCTXDataType)2, 1237 },
	{ (Il2CppRGCTXDataType)2, 1693 },
	{ (Il2CppRGCTXDataType)2, 1694 },
	{ (Il2CppRGCTXDataType)2, 1850 },
	{ (Il2CppRGCTXDataType)3, 6627 },
	{ (Il2CppRGCTXDataType)2, 1692 },
	{ (Il2CppRGCTXDataType)2, 1849 },
	{ (Il2CppRGCTXDataType)3, 6626 },
	{ (Il2CppRGCTXDataType)2, 1572 },
	{ (Il2CppRGCTXDataType)2, 1712 },
	{ (Il2CppRGCTXDataType)2, 1571 },
	{ (Il2CppRGCTXDataType)3, 19530 },
	{ (Il2CppRGCTXDataType)3, 5986 },
	{ (Il2CppRGCTXDataType)2, 1303 },
	{ (Il2CppRGCTXDataType)2, 1696 },
	{ (Il2CppRGCTXDataType)2, 1851 },
	{ (Il2CppRGCTXDataType)2, 1977 },
	{ (Il2CppRGCTXDataType)3, 9346 },
	{ (Il2CppRGCTXDataType)3, 9348 },
	{ (Il2CppRGCTXDataType)2, 582 },
	{ (Il2CppRGCTXDataType)3, 9347 },
	{ (Il2CppRGCTXDataType)3, 9356 },
	{ (Il2CppRGCTXDataType)2, 2435 },
	{ (Il2CppRGCTXDataType)2, 3383 },
	{ (Il2CppRGCTXDataType)3, 16457 },
	{ (Il2CppRGCTXDataType)3, 9357 },
	{ (Il2CppRGCTXDataType)2, 1772 },
	{ (Il2CppRGCTXDataType)2, 1895 },
	{ (Il2CppRGCTXDataType)3, 6642 },
	{ (Il2CppRGCTXDataType)3, 19497 },
	{ (Il2CppRGCTXDataType)2, 3394 },
	{ (Il2CppRGCTXDataType)3, 16567 },
	{ (Il2CppRGCTXDataType)3, 9349 },
	{ (Il2CppRGCTXDataType)2, 2434 },
	{ (Il2CppRGCTXDataType)2, 3381 },
	{ (Il2CppRGCTXDataType)3, 16445 },
	{ (Il2CppRGCTXDataType)3, 6641 },
	{ (Il2CppRGCTXDataType)3, 9350 },
	{ (Il2CppRGCTXDataType)3, 19496 },
	{ (Il2CppRGCTXDataType)2, 3390 },
	{ (Il2CppRGCTXDataType)3, 16492 },
	{ (Il2CppRGCTXDataType)3, 9363 },
	{ (Il2CppRGCTXDataType)2, 2436 },
	{ (Il2CppRGCTXDataType)2, 3388 },
	{ (Il2CppRGCTXDataType)3, 16480 },
	{ (Il2CppRGCTXDataType)3, 10025 },
	{ (Il2CppRGCTXDataType)3, 4696 },
	{ (Il2CppRGCTXDataType)3, 6643 },
	{ (Il2CppRGCTXDataType)3, 4695 },
	{ (Il2CppRGCTXDataType)3, 9364 },
	{ (Il2CppRGCTXDataType)3, 19498 },
	{ (Il2CppRGCTXDataType)2, 3398 },
	{ (Il2CppRGCTXDataType)3, 16656 },
	{ (Il2CppRGCTXDataType)3, 9377 },
	{ (Il2CppRGCTXDataType)2, 2438 },
	{ (Il2CppRGCTXDataType)2, 3396 },
	{ (Il2CppRGCTXDataType)3, 16569 },
	{ (Il2CppRGCTXDataType)3, 9378 },
	{ (Il2CppRGCTXDataType)2, 1775 },
	{ (Il2CppRGCTXDataType)2, 1898 },
	{ (Il2CppRGCTXDataType)3, 6647 },
	{ (Il2CppRGCTXDataType)3, 6646 },
	{ (Il2CppRGCTXDataType)2, 3385 },
	{ (Il2CppRGCTXDataType)3, 16459 },
	{ (Il2CppRGCTXDataType)3, 19503 },
	{ (Il2CppRGCTXDataType)2, 3395 },
	{ (Il2CppRGCTXDataType)3, 16568 },
	{ (Il2CppRGCTXDataType)3, 9370 },
	{ (Il2CppRGCTXDataType)2, 2437 },
	{ (Il2CppRGCTXDataType)2, 3392 },
	{ (Il2CppRGCTXDataType)3, 16494 },
	{ (Il2CppRGCTXDataType)3, 6645 },
	{ (Il2CppRGCTXDataType)3, 6644 },
	{ (Il2CppRGCTXDataType)3, 9371 },
	{ (Il2CppRGCTXDataType)2, 3384 },
	{ (Il2CppRGCTXDataType)3, 16458 },
	{ (Il2CppRGCTXDataType)3, 19502 },
	{ (Il2CppRGCTXDataType)2, 3391 },
	{ (Il2CppRGCTXDataType)3, 16493 },
	{ (Il2CppRGCTXDataType)3, 9384 },
	{ (Il2CppRGCTXDataType)2, 2439 },
	{ (Il2CppRGCTXDataType)2, 3400 },
	{ (Il2CppRGCTXDataType)3, 16658 },
	{ (Il2CppRGCTXDataType)3, 10026 },
	{ (Il2CppRGCTXDataType)3, 4698 },
	{ (Il2CppRGCTXDataType)3, 6649 },
	{ (Il2CppRGCTXDataType)3, 6648 },
	{ (Il2CppRGCTXDataType)3, 4697 },
	{ (Il2CppRGCTXDataType)3, 9385 },
	{ (Il2CppRGCTXDataType)2, 3386 },
	{ (Il2CppRGCTXDataType)3, 16460 },
	{ (Il2CppRGCTXDataType)3, 19504 },
	{ (Il2CppRGCTXDataType)2, 3399 },
	{ (Il2CppRGCTXDataType)3, 16657 },
	{ (Il2CppRGCTXDataType)3, 6638 },
	{ (Il2CppRGCTXDataType)3, 6639 },
	{ (Il2CppRGCTXDataType)3, 6650 },
	{ (Il2CppRGCTXDataType)3, 187 },
	{ (Il2CppRGCTXDataType)3, 186 },
	{ (Il2CppRGCTXDataType)2, 1764 },
	{ (Il2CppRGCTXDataType)2, 1889 },
	{ (Il2CppRGCTXDataType)3, 6640 },
	{ (Il2CppRGCTXDataType)2, 1782 },
	{ (Il2CppRGCTXDataType)2, 1914 },
	{ (Il2CppRGCTXDataType)3, 189 },
	{ (Il2CppRGCTXDataType)2, 729 },
	{ (Il2CppRGCTXDataType)2, 805 },
	{ (Il2CppRGCTXDataType)3, 185 },
	{ (Il2CppRGCTXDataType)3, 188 },
	{ (Il2CppRGCTXDataType)3, 215 },
	{ (Il2CppRGCTXDataType)2, 1767 },
	{ (Il2CppRGCTXDataType)2, 1891 },
	{ (Il2CppRGCTXDataType)3, 217 },
	{ (Il2CppRGCTXDataType)2, 580 },
	{ (Il2CppRGCTXDataType)2, 808 },
	{ (Il2CppRGCTXDataType)3, 214 },
	{ (Il2CppRGCTXDataType)3, 216 },
	{ (Il2CppRGCTXDataType)3, 103 },
	{ (Il2CppRGCTXDataType)2, 3141 },
	{ (Il2CppRGCTXDataType)3, 15147 },
	{ (Il2CppRGCTXDataType)2, 1756 },
	{ (Il2CppRGCTXDataType)2, 1884 },
	{ (Il2CppRGCTXDataType)3, 15148 },
	{ (Il2CppRGCTXDataType)3, 105 },
	{ (Il2CppRGCTXDataType)2, 570 },
	{ (Il2CppRGCTXDataType)2, 794 },
	{ (Il2CppRGCTXDataType)3, 102 },
	{ (Il2CppRGCTXDataType)3, 104 },
	{ (Il2CppRGCTXDataType)2, 1035 },
	{ (Il2CppRGCTXDataType)3, 1802 },
	{ (Il2CppRGCTXDataType)2, 577 },
	{ (Il2CppRGCTXDataType)2, 803 },
	{ (Il2CppRGCTXDataType)3, 174 },
	{ (Il2CppRGCTXDataType)3, 175 },
	{ (Il2CppRGCTXDataType)3, 142 },
	{ (Il2CppRGCTXDataType)2, 572 },
	{ (Il2CppRGCTXDataType)3, 144 },
	{ (Il2CppRGCTXDataType)2, 799 },
	{ (Il2CppRGCTXDataType)3, 141 },
	{ (Il2CppRGCTXDataType)3, 143 },
	{ (Il2CppRGCTXDataType)3, 89 },
	{ (Il2CppRGCTXDataType)2, 568 },
	{ (Il2CppRGCTXDataType)3, 91 },
	{ (Il2CppRGCTXDataType)2, 792 },
	{ (Il2CppRGCTXDataType)3, 88 },
	{ (Il2CppRGCTXDataType)3, 90 },
	{ (Il2CppRGCTXDataType)2, 574 },
	{ (Il2CppRGCTXDataType)2, 801 },
	{ (Il2CppRGCTXDataType)3, 155 },
	{ (Il2CppRGCTXDataType)3, 156 },
	{ (Il2CppRGCTXDataType)2, 3912 },
	{ (Il2CppRGCTXDataType)2, 1238 },
	{ (Il2CppRGCTXDataType)3, 6021 },
	{ (Il2CppRGCTXDataType)2, 1318 },
	{ (Il2CppRGCTXDataType)2, 3982 },
	{ (Il2CppRGCTXDataType)3, 15144 },
	{ (Il2CppRGCTXDataType)3, 15145 },
	{ (Il2CppRGCTXDataType)2, 1992 },
	{ (Il2CppRGCTXDataType)3, 15146 },
	{ (Il2CppRGCTXDataType)2, 504 },
	{ (Il2CppRGCTXDataType)2, 1577 },
	{ (Il2CppRGCTXDataType)2, 3907 },
	{ (Il2CppRGCTXDataType)2, 1733 },
	{ (Il2CppRGCTXDataType)2, 1861 },
	{ (Il2CppRGCTXDataType)3, 6002 },
	{ (Il2CppRGCTXDataType)2, 1311 },
	{ (Il2CppRGCTXDataType)3, 7099 },
	{ (Il2CppRGCTXDataType)3, 7100 },
	{ (Il2CppRGCTXDataType)3, 7105 },
	{ (Il2CppRGCTXDataType)2, 1986 },
	{ (Il2CppRGCTXDataType)3, 7102 },
	{ (Il2CppRGCTXDataType)3, 20254 },
	{ (Il2CppRGCTXDataType)2, 1264 },
	{ (Il2CppRGCTXDataType)3, 4683 },
	{ (Il2CppRGCTXDataType)1, 1661 },
	{ (Il2CppRGCTXDataType)2, 3916 },
	{ (Il2CppRGCTXDataType)3, 7101 },
	{ (Il2CppRGCTXDataType)1, 3916 },
	{ (Il2CppRGCTXDataType)1, 1986 },
	{ (Il2CppRGCTXDataType)2, 3980 },
	{ (Il2CppRGCTXDataType)2, 3916 },
	{ (Il2CppRGCTXDataType)3, 7106 },
	{ (Il2CppRGCTXDataType)3, 7104 },
	{ (Il2CppRGCTXDataType)3, 7103 },
	{ (Il2CppRGCTXDataType)2, 441 },
	{ (Il2CppRGCTXDataType)3, 4699 },
	{ (Il2CppRGCTXDataType)2, 591 },
};
extern const CustomAttributesCacheGenerator g_System_Core_AttributeGenerators[];
IL2CPP_EXTERN_C const Il2CppCodeGenModule g_System_Core_CodeGenModule;
const Il2CppCodeGenModule g_System_Core_CodeGenModule = 
{
	"System.Core.dll",
	183,
	s_methodPointers,
	0,
	NULL,
	s_InvokerIndices,
	0,
	NULL,
	59,
	s_rgctxIndices,
	261,
	s_rgctxValues,
	NULL,
	g_System_Core_AttributeGenerators,
	NULL, // module initializer,
	NULL,
	NULL,
	NULL,
};
