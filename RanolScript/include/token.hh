#pragma once

#include "rnl.hh"


RNL_START
enum class TokenType
{
	none = 0,
	eof,

	identifier,

	literal_digit,
	literal_character,
	literal_string,

	literal_bool_true,
	literal_bool_false,

	brace_left,
	brace_right,

	paren_left,
	paren_right,

	bparen_left,
	bparen_right,

	comma,
	apostrophe,
	quotes,
	semicolon
};

class Token final
{
public:
	Token( ) = default;
	Token( cstring& raw_, const TokenType& type_, const std::size_t& line_, const std::size_t end_col_ );

public:
	std::string raw;
	TokenType type;

	std::size_t line;
	std::size_t end_col;
	std::size_t col;
};

using TokenSeq = std::vector<Token>;
extern const std::map<TokenType, std::string> token_map;
RNL_END