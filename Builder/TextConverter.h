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
	/*����Ϊ�˷��㣬��string��Ϊ��Ʒ����Ʒ���Ϳ���������*/
	virtual string GetText(){ return ""; }
};