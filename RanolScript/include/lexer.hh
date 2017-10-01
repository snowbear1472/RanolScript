#pragma once

#include "rnl.hh"


RNL_START
class lexer final
{
public:
	using ptr = std::shared_ptr<lexer>;

public:
	lexer( ) = default;
	~lexer( ) = delete;

public:
};

lexer::ptr make_lexer( );
RNL_END