#pragma once

#include "rnl.hh"

#include "token.hh"


RNL_START
class lexer final
{
public:
	using ptr = std::shared_ptr<lexer>;

public:
	TokenSeq token_seq;

public:
	lexer( ) = default;
	~lexer( ) = delete;

public:
	void lex( );

public:
	ptr create_lexer( ) const noexcept;
};

lexer::ptr make_lexer( );
RNL_END