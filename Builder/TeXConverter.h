#pragma once
#include "TextConverter.h"
class TeXConverter :
	public TextConverter
{
public:
	TeXConverter();
	virtual ~TeXConverter();

	virtual void ConvertCharacter(char) override;
	virtual void ConvertFontChange(Font) override;
	virtual void ConvertParagraph() override;
	virtual string GetText() override;
private:
	string TeXstring = "";
	string GetTexText();
};

