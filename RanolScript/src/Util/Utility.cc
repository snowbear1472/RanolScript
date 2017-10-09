#include "rnl.hh"

#include <iostream>
#include <fstream>


RNL_START
namespace Util
{
	string_lines read_file( cstring& path )
	{
		string_lines lines;
		std::string buffer;
		std::ifstream stream( path );

		if ( stream.is_open( ) )
		{
			stream.seekg( 0, std::ios::end );

			int size = stream.tellg( );

			buffer.resize( size );
			stream.seekg( 0, std::ios::beg );

			stream.read( &buffer[0], size );

			lines.push_back( buffer );
		}

		return lines;
	}
}
RNL_END