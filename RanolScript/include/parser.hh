#pragma once

#include "rnl.hh"

#include "object.hh"


RNL_START
class parser final
{
public:
	parser( ) = default;
	~parser( ) = delete;

private:
	ObjectSeq object_seq;

public:
	void parse( cstring& path );
	void parse( string_lines& lines );

public:
	ObjectSeq::const_iterator& first( ) const;
	ObjectSeq::const_iterator& end( ) const;

	object& find( cstring& key ) const;
};
RNL_END