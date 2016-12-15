#include "RTFReader.h"


RTFReader::RTFReader()
{
	cout << "construct RTFReader!" << endl;
}


RTFReader::~RTFReader()
{
	cout << "delete RTFReader!" << endl;
}

void RTFReader::ParseRTF(Format f)
{
	if (!converter)
	{
		return;
	}
	switch (f)
	{
	case Char: converter->ConvertCharacter('c');break;
	case FONT: converter->ConvertFontChange(3); break;
	case Para: converter->ConvertParagraph(); break;
	case ALL:  
		converter->ConvertCharacter('c'); 
		converter->ConvertFontChange(5); 
		converter->ConvertParagraph(); 
		break;
	default:
		break;
	}
}
void RTFReader::CreateBuilder(TextConverter& builder)
{
	converter = &builder;
}
