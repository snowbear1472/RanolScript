#include "rnl.hh"

#include "object.hh"


RNL_START
object::object( cstring& name_, cstring& value_ )
	: name( name_ )
	, value( value_ )
{}
RNL_END