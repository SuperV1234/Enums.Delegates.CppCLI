#pragma once
#include "stdafx.h"
#include "EnumExtensions.h"

ref class GenericEnumMinimal;

using namespace System;

namespace Diagonactic {

	/// <summary>
	///		Checks if any <paramref name="flagsToTest"/> are set on <paramref name="source"/> flags enum using a binary math operation applied to the underlying 
	///		type of <typeparamref name="TEnum"/>.
	/// </summary>
	/// <param name="source">The value to check for flags.</param>
	/// <param name="flagsToTest">The flags to check against <paramref name="source"/></param>
	/// <typeparam name="TEnum">An <see langword="enum"/> (<see cref="System::Enum"/>)</typeparam>
	/// <returns><see langword="true"/> if <paramref name="source"/> has any of the flags in <paramref name="flagsToTest"/>; <see langword="false"/> if all or unset.</returns>
	generic <typename TEnum> where TEnum: IComparable, IFormattable, IConvertible, System::Enum
		Boolean EnumExtensions::AreAnyFlagsSet(TEnum source, ...array<TEnum>^ flagsToTest)
	{
		return GenericEnumMinimal<TEnum>::AreAnyFlagsSet(flagsToTest, source);
	}
}