#include "rnl.hh"

#include "object.hh"


RNL_START
object::object( cstring& name_, cstring& value_, const Type& type_, const ValueType& value_type_ )
	: name( name_ )
	, value( value_ )
	, type( type_ )
	, value_type( value_type_ )
{}
RNL_END