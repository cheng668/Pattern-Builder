#include "TeXConverter.h"


TeXConverter::TeXConverter() :TextConverter()
{
	cout << "construct TeXConverter!" << endl;
}


TeXConverter::~TeXConverter()
{
	cout << "delete TeXConverter!" << endl;
}

void TeXConverter::ConvertCharacter(char c)
{
	TeXstring += "TeXChar " ;
	TeXstring.push_back(c);

}
void TeXConverter::ConvertFontChange(Font i)
{
	while (i)
	{
		TeXstring += "TeXFont " ;
		i--;
	}

}
void TeXConverter::ConvertParagraph()
{
	TeXstring += "TeXParag " ;

}
string TeXConverter::GetTexText()
{
	return TeXstring;
}
string TeXConverter::GetText()
{
	return GetTexText();
}
