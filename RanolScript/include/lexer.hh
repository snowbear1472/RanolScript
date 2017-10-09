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
	std::map<std::string, TokenType> keyword_map;

public:
	lexer( );
	~lexer( ) = delete;

public:
	void lex( const string_lines& lines );
	void dump( ) const;
	void dump( std::ostream& out ) const;

public:
	ptr create_lexer( ) const noexcept;
};

lexer::ptr make_lexer( );
RNL_END