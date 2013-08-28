/*
 * Mystring.h
 *
 *  Created on: Aug 28, 2013
 *      Author: argha
 */

#ifndef MYSTRING_H_
#define MYSTRING_H_
#include<string>
using namespace std;

class Mystring {
public:
	Mystring();
	virtual ~Mystring();
	bool endsWith(string,char);
	bool startsWith(string,char);
	string trimStart(string,char=' ');
	string trimEnd(string,char=' ');
	string trim(string,char=' ');
	string padLeft(string,int,char=' ');
	string padRight(string,int,char=' ');
};

#endif /* MYSTRING_H_ */
