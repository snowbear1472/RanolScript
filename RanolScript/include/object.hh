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

public:
	std::string name;
	std::string value;

public:
	object( cstring& name_, cstring& value_ );
	~object( ) = delete;
};

using ObjectSeq = std::map<std::string, object>;
RNL_END