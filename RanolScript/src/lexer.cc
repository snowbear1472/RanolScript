#include "rnl.hh"

#include "lexer.hh"


RNL_START
lexer::lexer( )
{
	#define MAP(str, token) keyword_map[str] = TokenType::token

	MAP( "false", literal_bool_false );
	MAP( "true", literal_bool_true );

	MAP( "{", brace_left );
	MAP( "}", brace_right );

	MAP( "(", paren_left );
	MAP( ")", paren_right );

	MAP( "[", bparen_left );
	MAP( "]", bparen_right );

	MAP( ".", comma );
	MAP( ",", apostrophe );
	MAP( "'", quotes );
	MAP( ";", semicolon );

	#undef MAP
}


void lexer::lex( const string_lines& lines )
{

}


void lexer::dump( ) const
{

}
void lexer::dump( std::ostream& out )
{

}
RNL_END