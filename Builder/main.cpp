#pragma once
#include "RTFReader.h"
#include "ASCIIConverter.h"
#include "TeXConverter.h"
#include "TextWidgetConverter.h"
int main()
{
	TextWidgetConverter TWBuil;
	ASCIIConverter ASCBuil;
	TeXConverter TXBuil;
	RTFReader* reader = new RTFReader();
	reader->CreateBuilder(TWBuil);
	reader->ParseRTF(ALL);
	reader->CreateBuilder(ASCBuil);
	reader->ParseRTF(ALL);
	reader->CreateBuilder(TXBuil);
	reader->ParseRTF(ALL);

	cout << TWBuil.GetText() << endl;
	cout << ASCBuil.GetText() << endl;
	cout << TXBuil.GetText() << endl;

	delete reader; 
	/*TWBuil/ASCBuil/TXBuil栈对象在程序结束时自动释放内存，
	_CrtDumpMemoryLeaks()会报内存溢出*/
	_CrtDumpMemoryLeaks();
	system("pause");
	return 0;
}
/*
output:
	construct TextConverter!
	construct TextWidgetConverter!
	construct TextConverter!
	construct ASCIIConverter!
	construct TextConverter!
	construct TeXConverter!
	construct RTFReader!
	TWChar cTWFont TWFont TWFont TWFont TWFont TWParag
	ASCIIChar c
	TeXChar cTeXFont TeXFont TeXFont TeXFont TeXFont TeXParag
	delete RTFReader!
*/