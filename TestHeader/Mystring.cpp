/*
 * Mystring.cpp
 *
 *  Created on: Aug 28, 2013
 *      Author: argha
 */

#include "Mystring.h"

Mystring::Mystring() {
	// TODO Auto-generated constructor stub

}

Mystring::~Mystring() {
	// TODO Auto-generated destructor stub
}

bool Mystring::endsWith(string source, char value) {
	if(source[source.length()-1]==value)
		return true;
	else
		return false;
}

bool Mystring::startsWith(string source, char value) {
	if(source[0]==value)
			return true;
		else
			return false;
}

string Mystring::trimStart(string source, char value) {
	//string result;
	while(startsWith(source,value)){
		source=source.substr(1,source.length());
	}
	return source;
}

string Mystring::trimEnd(string source, char value) {
	while(endsWith(source,value)){
			source=source.substr(0,source.length()-1);
		}
	return source;
}

string Mystring::trim(string source, char value) {
	while(startsWith(source,value)){
			source=source.substr(1,source.length());
		}
	while(endsWith(source,value)){
				source=source.substr(0,source.length()-1);
			}
	return source;
}

string Mystring::padLeft(string source, int totalWidth, char padChar) {
	totalWidth-=source.length();
	for(int i=1;i<=totalWidth;i++)
		source=padChar+source;
	return source;
}

string Mystring::padRight(string source, int totalWidth, char padChar) {
	totalWidth-=source.length();
		for(int i=1;i<=totalWidth;i++)
			source+=padChar;
		return source;
}










