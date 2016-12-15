#pragma once
#include <string>
#include <iostream>
#define Font int
using namespace std;
class TextConverter
{
public:
	TextConverter(){
		cout << "construct TextConverter!" << endl;
	}
	virtual ~TextConverter(){
		cout << "delete TextConverter!" << endl;
	}

	virtual void ConvertCharacter(char){}
	virtual void ConvertFontChange(Font){}
	virtual void ConvertParagraph(){}
	/*这里为了方便，把string作为产品，产品类型可以是其他*/
	virtual string GetText(){ return ""; }
};