#pragma once
#include "TextConverter.h"
class ASCIIConverter :
	public TextConverter
{
public:
	ASCIIConverter();
	virtual ~ASCIIConverter();

	virtual void ConvertCharacter(char) override;
	virtual string GetText() override;
private:
	string ASCstring = "";
	string GetASCIIText();
};

