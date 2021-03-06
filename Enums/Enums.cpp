#include "Stdafx.h"
#include "Enums.h"

#using <C:\Program Files (x86)\Reference Assemblies\Microsoft\Framework\.NETCore\v4.5\System.Linq.Dll>

using namespace System;
using namespace System::Runtime::CompilerServices;
using namespace System::Linq;

ref class GenericEnumCore;
ref class GenericEnumMinimal;
ref class GenericEnumWithDescription;
ref class GenericEnumValues;

/// <summary>
/// Core namespace for Diagonactic Utility Libraries
/// </summary>
namespace Diagonactic
{
	/// <summary>Parses <paramref name="source"/> for values of <typeparamref name="TEnum"/>.</summary>
	/// <typeparam name="TEnum">An <see langword="enum"/> (<see cref="System::Enum"/>)</typeparam>
	/// <param name="source">A string value of <typeparamref name="TEnum"/> or a comma separated list of values.</param>
	/// <exception cref="ArgumentException">One (or more) of the values supplied in <paramref name="source"/> was not found.</exception>
	/// <returns>The parsed value</returns>
	generic <typename TEnum> where TEnum : IComparable, IFormattable, IConvertible, System::Enum
	TEnum Enums::Parse(String ^source)
	{
		TEnum result;
		Diagonactic::GenericEnumCore<TEnum>::ParseEnum(source, false, true, result);
		return result;
	}	
	
	/// <summary>Converts <paramref name="value"/> to <typeparamref name="TEnum"/>.</summary>
	/// <remarks>This is a wrapped call to a <see cref="System::Enum"/> method.</remarks>
	/// <param name="value">The value to convert</param>
	/// <typeparam name="TEnum">An <see langword="enum"/> (<see cref="System::Enum"/>)</typeparam>
	/// <returns>The enum value represented by <typeparamref name="TEnum"/></returns>
	generic <typename TEnum> where TEnum : IComparable, IFormattable, IConvertible, System::Enum
	TEnum Enums::ToEnum(Object^ value)
	{
		return safe_cast<TEnum>(Enum::ToObject(TEnum::typeid, value));
	}

	/// <summary>Converts <paramref name="value"/> to <typeparamref name="TEnum"/>.</summary>
	/// <remarks>This is a wrapped call to <see cref="Enum::ToObject(Type, String)" /></remarks>
	/// <param name="value">The value to convert</param>
	/// <typeparam name="TEnum">An <see langword="enum"/> (<see cref="System::Enum"/>)</typeparam>
	/// <returns>The enum value represented by <typeparamref name="TEnum"/></returns>
	generic <typename TEnum> where TEnum : IComparable, IFormattable, IConvertible, System::Enum
	TEnum Enums::ToEnum(SByte value)
	{
		return safe_cast<TEnum>(Enum::ToObject(TEnum::typeid, value));
	}

	/// <summary>Converts <paramref name="value"/> to <typeparamref name="TEnum"/>.</summary>
	/// <remarks>This is a wrapped call to Enum::ToObject</remarks>
	/// <param name="value">The value to convert</param>
	/// <typeparam name="TEnum">An <see langword="enum"/> (<see cref="System::Enum"/>)</typeparam>
	/// <returns>The enum value represented by <typeparamref name="TEnum"/></returns>
	generic <typename TEnum> where TEnum : IComparable, IFormattable, IConvertible, System::Enum
	TEnum Enums::ToEnum(Byte value)
	{
		return safe_cast<TEnum>(Enum::ToObject(TEnum::typeid, value));
	}

	/// <summary>Converts <paramref name="value"/> to <typeparamref name="TEnum"/>.</summary>
	/// <remarks>This is a wrapped call to Enum::ToObject</remarks>
	/// <param name="value">The value to convert</param>
	/// <typeparam name="TEnum">An <see langword="enum"/> (<see cref="System::Enum"/>)</typeparam>
	/// <returns>The enum value represented by <typeparamref name="TEnum"/></returns>
	generic <typename TEnum> where TEnum : IComparable, IFormattable, IConvertible, System::Enum
	TEnum Enums::ToEnum(Int16 value)
	{
		return safe_cast<TEnum>(Enum::ToObject(TEnum::typeid, value));
	}

	/// <summary>Converts <paramref name="value"/> to <typeparamref name="TEnum"/>.</summary>
	/// <remarks>This is a wrapped call to Enum::ToObject</remarks>
	/// <param name="value">The value to convert</param>
	/// <typeparam name="TEnum">An <see langword="enum"/> (<see cref="System::Enum"/>)</typeparam>
	/// <returns>The enum value represented by <typeparamref name="TEnum"/></returns>
	generic <typename TEnum> where TEnum : IComparable, IFormattable, IConvertible, System::Enum
	TEnum Enums::ToEnum(UInt16 value)
	{
		return safe_cast<TEnum>(Enum::ToObject(TEnum::typeid, value));
	}

	/// <summary>Converts <paramref name="value"/> to <typeparamref name="TEnum"/>.</summary>
	/// <remarks>This is a wrapped call to Enum::ToObject</remarks>
	/// <param name="value">The value to convert</param>
	/// <typeparam name="TEnum">An <see langword="enum"/> (<see cref="System::Enum"/>)</typeparam>
	/// <returns>The enum value represented by <typeparamref name="TEnum"/></returns>
	generic <typename TEnum> where TEnum : IComparable, IFormattable, IConvertible, System::Enum
	TEnum Enums::ToEnum(Int32 value)
	{
		return safe_cast<TEnum>(Enum::ToObject(TEnum::typeid, value));
	}

	/// <summary>Converts <paramref name="value"/> to <typeparamref name="TEnum"/>.</summary>
	/// <remarks>This is a wrapped call to Enum::ToObject</remarks>
	/// <param name="value">The value to convert</param>
	/// <typeparam name="TEnum">An <see langword="enum"/> (<see cref="System::Enum"/>)</typeparam>
	/// <returns>The enum value represented by <typeparamref name="TEnum"/></returns>
	generic <typename TEnum> where TEnum : IComparable, IFormattable, IConvertible, System::Enum
	TEnum Enums::ToEnum(UInt32 value)
	{
		return safe_cast<TEnum>(Enum::ToObject(TEnum::typeid, value));
	}

	/// <summary>Converts <paramref name="value"/> to <typeparamref name="TEnum"/>.</summary>
	/// <remarks>This is a wrapped call to Enum::ToObject</remarks>
	/// <param name="value">The value to convert</param>
	/// <typeparam name="TEnum">An <see langword="enum"/> (<see cref="System::Enum"/>)</typeparam>
	/// <returns>The enum value represented by <typeparamref name="TEnum"/></returns>
	generic <typename TEnum> where TEnum : IComparable, IFormattable, IConvertible, System::Enum
	TEnum Enums::ToEnum(Int64 value)
	{
		return safe_cast<TEnum>(Enum::ToObject(TEnum::typeid, value));
	}

	/// <summary>Converts <paramref name="value"/> to <typeparamref name="TEnum"/>.</summary>
	/// <remarks>This is a wrapped call to Enum::ToObject</remarks>
	/// <param name="value">The value to convert</param>
	/// <typeparam name="TEnum">An <see langword="enum"/> (<see cref="System::Enum"/>)</typeparam>
	/// <returns>The enum value represented by <typeparamref name="TEnum"/></returns>
	generic <typename TEnum> where TEnum : IComparable, IFormattable, IConvertible, System::Enum
	TEnum Enums::ToEnum(UInt64 value)
	{
		return safe_cast<TEnum>(Enum::ToObject(TEnum::typeid, value));
	}

	/// <summary>Converts <paramref name="value"/> to an <see cref="System::Object"/></summary>
	/// <param name="value">The value to convert to <see cref="System::Object"/></param>
	/// <returns>An <see cref="System::Object"/> of <paramref name="value"/>.</returns>
	/// <typeparam name="TEnum">An <see langword="enum"/> (<see cref="System::Enum"/>)</typeparam>
	generic <typename TEnum> where TEnum : IComparable, IFormattable, IConvertible, System::Enum		
	Object^ Enums::AsObject(SByte value)
	{
		return Enum::ToObject(TEnum::typeid, value);
	}

	/// <summary>Converts <paramref name="value"/> to an <see cref="System::Object"/></summary>
	/// <param name="value">The value to convert to <see cref="System::Object"/></param>
	/// <returns>An <see cref="System::Object"/> of <paramref name="value"/>.</returns>
	/// <typeparam name="TEnum">An <see langword="enum"/> (<see cref="System::Enum"/>)</typeparam>
	generic <typename TEnum> where TEnum : IComparable, IFormattable, IConvertible, System::Enum
	Object^ Enums::AsObject(Byte value)
	{
		return Enum::ToObject(TEnum::typeid, value);
	}

	/// <summary>Converts <paramref name="value"/> to an <see cref="System::Object"/></summary>
	/// <param name="value">The value to convert to <see cref="System::Object"/></param>
	/// <returns>An <see cref="System::Object"/> of <paramref name="value"/>.</returns>
	/// <typeparam name="TEnum">An <see langword="enum"/> (<see cref="System::Enum"/>)</typeparam>
	generic <typename TEnum> where TEnum : IComparable, IFormattable, IConvertible, System::Enum
	Object^ Enums::AsObject(Int16 value)
	{
		return Enum::ToObject(TEnum::typeid, value);
	}

	/// <summary>Converts <paramref name="value"/> to an <see cref="System::Object"/></summary>
	/// <param name="value">The value to convert to <see cref="System::Object"/></param>
	/// <returns>An <see cref="System::Object"/> of <paramref name="value"/>.</returns>
	/// <typeparam name="TEnum">An <see langword="enum"/> (<see cref="System::Enum"/>)</typeparam>
	generic <typename TEnum> where TEnum : IComparable, IFormattable, IConvertible, System::Enum
	Object^ Enums::AsObject(UInt16 value)
	{
		return Enum::ToObject(TEnum::typeid, value);
	}

	/// <summary>Converts <paramref name="value"/> to an <see cref="System::Object"/></summary>
	/// <param name="value">The value to convert to <see cref="System::Object"/></param>
	/// <returns>An <see cref="System::Object"/> of <paramref name="value"/>.</returns>
	/// <typeparam name="TEnum">An <see langword="enum"/> (<see cref="System::Enum"/>)</typeparam>
	generic <typename TEnum> where TEnum : IComparable, IFormattable, IConvertible, System::Enum
	Object^ Enums::AsObject(Int32 value)
	{
		return Enum::ToObject(TEnum::typeid, value);
	}

	/// <summary>Converts <paramref name="value"/> to an <see cref="System::Object"/></summary>
	/// <param name="value">The value to convert to <see cref="System::Object"/></param>
	/// <returns>An <see cref="System::Object"/> of <paramref name="value"/>.</returns>
	/// <typeparam name="TEnum">An <see langword="enum"/> (<see cref="System::Enum"/>)</typeparam>
	generic <typename TEnum> where TEnum : IComparable, IFormattable, IConvertible, System::Enum
	Object^ Enums::AsObject(UInt32 value)
	{
		return Enum::ToObject(TEnum::typeid, value);
	}

	/// <summary>Converts <paramref name="value"/> to an <see cref="System::Object"/></summary>
	/// <param name="value">The value to convert to <see cref="System::Object"/></param>
	/// <returns>An <see cref="System::Object"/> of <paramref name="value"/>.</returns>
	/// <typeparam name="TEnum">An <see langword="enum"/> (<see cref="System::Enum"/>)</typeparam>
	generic <typename TEnum> where TEnum : IComparable, IFormattable, IConvertible, System::Enum
	Object^ Enums::AsObject(Int64 value)
	{
		return Enum::ToObject(TEnum::typeid, value);
	}

	/// <summary>Converts <paramref name="value"/> to an <see cref="System::Object"/></summary>
	/// <param name="value">The value to convert to <see cref="System::Object"/></param>
	/// <returns>An <see cref="System::Object"/> of <paramref name="value"/>.</returns>
	/// <typeparam name="TEnum">An <see langword="enum"/> (<see cref="System::Enum"/>)</typeparam>
	generic <typename TEnum> where TEnum : IComparable, IFormattable, IConvertible, System::Enum
	Object^ Enums::AsObject(UInt64 value)
	{
		return Enum::ToObject(TEnum::typeid, value);
	}

	/// <summary>A cached wrapped call to <see cref="Enum::GetValues()"/>.</summary>
	/// <remarks>Call uses cached values (or creates them). See <see cref="Diagonactic::Enums"/>.</remarks>
	/// <typeparam name="TEnum">An <see langword="enum"/> (<see cref="System::Enum"/>)</typeparam>
	/// <returns>All enum values.</returns>
	generic <typename TEnum> where TEnum : IComparable, IFormattable, IConvertible, System::Enum
	IReadOnlyList<TEnum>^ Enums::GetValues()
	{
		return gcnew ReadOnlyCollection<TEnum>((IList<TEnum>^)Diagonactic::GenericEnumValues<TEnum>::s_values);
	}

	/// <summary>Gets the value of the <c>DescriptionAttribute</c> attribute associated with the string value of <paramref name="source"/>.</summary>
	/// <param name="source">The enum to get the description attribute from</param>
	/// <param name="result">The enum value</param>
	/// <typeparam name="TEnum">An <see langword="enum"/> (<see cref="System::Enum"/>)</typeparam>
	/// <returns><see langword="true"/> if <paramref name="source"/> was found and had a description; otherwise <see langword="false"/>.</returns>
	generic <typename TEnum> where TEnum : IComparable, IFormattable, IConvertible, System::Enum
	Boolean Enums::TryGetFromDescription(String ^source, [Out] TEnum %result)
	{
		return GenericEnumCoreDescriptions<TEnum>::TryGetEnum(source, result);
	}
	
	/// <summary>Gets the names associated with <typeparamref name="TEnum"/></summary>
	/// <remarks>Call uses cached values (or creates them). See <see cref="Diagonactic::Enums"/>.</remarks>
	/// <typeparam name="TEnum">An <see langword="enum"/> (<see cref="System::Enum"/>)</typeparam>
	/// <returns>Names of the enumeration</returns>
	generic <typename TEnum> where TEnum : IComparable, IFormattable, IConvertible, System::Enum
	IReadOnlyList<String^>^ Enums::GetNames()
	{
		return gcnew ReadOnlyCollection<String^>((IList<String^>^)Diagonactic::GenericEnumCore<TEnum>::GetNames());
	}

	/// <summary>Parses <paramref name="source"/> for values of <typeparamref name="TEnum"/>, optionally ignoring the case of the provided string.</summary>
	/// <typeparam name="TEnum">An <see langword="enum"/> (<see cref="System::Enum"/>)</typeparam>
	/// <param name="source">A string value of <typeparamref name="TEnum"/> or a comma separated list of values.</param>
	/// <param name="ignoreCase">Whether or not to ignore the case of <paramref name="source"/>.</param>
	/// <exception cref="ArgumentException">One (or more) of the values supplied in <paramref name="source"/> was not found.</exception>
	/// <returns>The parsed value</returns>
	generic <typename TEnum> where TEnum : IComparable, IFormattable, IConvertible, System::Enum
	TEnum Enums::Parse(String ^source, Boolean ignoreCase)
	{
		TEnum result;
		Diagonactic::GenericEnumCore<TEnum>::ParseEnum(source, ignoreCase, true, result);
		return result;
	}

	/// <summary>Parses <paramref name="source"/> for values of <typeparamref name="TEnum"/>.</summary>
	/// <typeparam name="TEnum">An <see langword="enum"/> (<see cref="System::Enum"/>)</typeparam>
	/// <param name="source">A string value of <typeparamref name="TEnum"/> or a comma separated list of values.</param>
	/// <param name="result">The result of the parse or the default value of <typeparamref name="TEnum"/>.</param>
	/// <exception cref="ArgumentException">One (or more) of the values supplied in <paramref name="source"/> was not found.</exception>	
	/// <returns><see langword="true"/> if parse was successful; otherwise <see langword="false"/></returns>
	generic <typename TEnum> where TEnum : IComparable, IFormattable, IConvertible, System::Enum
	Boolean Enums::TryParse(String ^source, [Out] TEnum %result)
	{
		return Diagonactic::GenericEnumCore<TEnum>::ParseEnum(source, false, false, result);
	}

	/// <summary>Parses <paramref name="source"/> for values of <typeparamref name="TEnum"/>, optionally ignoring case.</summary>
	/// <param name="source">A string value of <typeparamref name="TEnum"/> or a comma separated list of values.</param>
	/// <param name="ignoreCase">Whether or not to ignore the case of <paramref name="source"/>.</param>
	/// <param name="result">The result of the parse or the default value of <typeparamref name="TEnum"/>.</param>
	/// <typeparam name="TEnum">An <see langword="enum"/> (<see cref="System::Enum"/>)</typeparam>
	/// <returns><see langword="true"/> if the value was found; otherwise <see langword="false"/></returns>
	generic <typename TEnum> where TEnum : IComparable, IFormattable, IConvertible, System::Enum
	Boolean Enums::TryParse(String ^source, Boolean ignoreCase, [Out] TEnum %result)
	{
		return Diagonactic::GenericEnumCore<TEnum>::ParseEnum(source, ignoreCase, false, result);
	}
}
