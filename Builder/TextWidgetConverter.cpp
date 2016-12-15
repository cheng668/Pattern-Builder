#include "TextWidgetConverter.h"


TextWidgetConverter::TextWidgetConverter() :TextConverter()
{
	cout << "construct TextWidgetConverter!" << endl;
}


TextWidgetConverter::~TextWidgetConverter()
{
	cout << "delete TextWidgetConverter!" << endl;
}
void TextWidgetConverter::ConvertCharacter(char c){
	TextWstring += "TWChar ";
	TextWstring.push_back(c);
}
void TextWidgetConverter::ConvertFontChange(Font i)
{
	while (i)
	{
		TextWstring += "TWFont ";
		i--;
	}

}
void TextWidgetConverter::ConvertParagraph()
{
	TextWstring += "TWParag ";

}
string TextWidgetConverter::GetTextWidget()
{
	return TextWstring;
}
string TextWidgetConverter::GetText()
{
	return GetTextWidget();
}
