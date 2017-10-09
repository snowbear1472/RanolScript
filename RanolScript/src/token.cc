#include "rnl.hh"

#include "token.hh"


RNL_START
#define MAP_TOKEN(token) std::pair<TokenType, std::string>(TokenType::token, #token)
const std::map<TokenType, std::string> token_map =
{
	MAP_TOKEN( none ),
	MAP_TOKEN( eof ),

	MAP_TOKEN( identifier ),

	MAP_TOKEN( literal_digit ),
	MAP_TOKEN( literal_character ),
	MAP_TOKEN( literal_string ),

	MAP_TOKEN( literal_bool_true ),
	MAP_TOKEN( literal_bool_false ),

	MAP_TOKEN( brace_left ),
	MAP_TOKEN( brace_right ),

	MAP_TOKEN( paren_left ),
	MAP_TOKEN( paren_right ),

	MAP_TOKEN( bparen_left ),
	MAP_TOKEN( bparen_right ),

	MAP_TOKEN( comma ),
	MAP_TOKEN( apostrophe ),
	MAP_TOKEN( quotes ),
	MAP_TOKEN( semicolon )
};
#undef MAP_TOKEN

Token::Token( cstring& raw_, const TokenType& type_, const std::size_t& line_, const std::size_t end_col_ )
	: raw( raw_ )
	, type( type_ )
	, line( line_ )
	, end_col( end_col_ )
	, col( end_col - raw.length( ) + 1 )
{}
RNL_END