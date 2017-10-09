#pragma once

#include "rnl.hh"


RNL_START
class object final
{
public:
	enum class Type
	{
		Map = 0,
		Array,
		Data
	};
	enum class ValueType
	{
		String,
		Boolean,
		Character,
		Digit
	};

public:
	std::string name;
	std::string value;

	Type type;
	ValueType value_type;

public:
	object( cstring& name_, cstring& value_, const Type& type_, const ValueType& value_type_ );
	~object( ) = delete;
};

using ObjectSeq = std::map<std::string, object>;
RNL_END