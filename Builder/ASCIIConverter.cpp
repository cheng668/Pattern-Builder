#include "ASCIIConverter.h"


ASCIIConverter::ASCIIConverter() :TextConverter()
{
	cout << "construct ASCIIConverter!" << endl;
}


ASCIIConverter::~ASCIIConverter()
{
	cout << "delete ASCIIConverter!" << endl;
}

void ASCIIConverter::ConvertCharacter(char c)
{
	ASCstring += "ASCIIChar ";
	ASCstring.push_back(c);
}
string ASCIIConverter::GetASCIIText()
{
	return ASCstring;
}
string ASCIIConverter::GetText()
{
	return GetASCIIText();
}
