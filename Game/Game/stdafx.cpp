#include "stdafx.h"

const char* _Format( const char* String, ... )
{
	static char Buffer[ 512 ] = { 0 };
	va_list Args = { 0 };
	va_start( Args, String );
	StringCbVPrintfA( Buffer, 512, String, Args );
	return Buffer;
};