#pragma once
#include "TextConverter.h"
enum Format
{
	Char = 0,
	FONT ,
	Para ,
	ALL
};

class RTFReader
{
public:
	RTFReader();
	~RTFReader();

	void ParseRTF(Format);
	void CreateBuilder(TextConverter&);
private:
	TextConverter* converter ;
};

