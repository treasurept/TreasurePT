#pragma once
#include "UI_templates.h"

class CUILogin :
	public CUITemplates
{
public:
	CUILogin( );
	int ShowVersion( HDC hDC );
	int SendCheckSum( char* NickName );
private:
	char m_Buffer[ 256 ];
	char m_Version[ 256 ];
};
