#pragma once
#include "TextConverter.h"
class TextWidgetConverter :
	public TextConverter
{
public:
	TextWidgetConverter();
	virtual ~TextWidgetConverter();

	virtual void ConvertCharacter(char) override;
	virtual void ConvertFontChange(Font) override;
	virtual void ConvertParagraph() override;
	virtual string GetText() override;

private:
	string TextWstring = "";
	string GetTextWidget();

};

