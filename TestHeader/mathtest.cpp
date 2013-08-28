/*
 * mathtest.cpp
 *
 *  Created on: Aug 28, 2013
 *      Author: argha
 */
#include<iostream>
#include "math.h"
#include "Mystring.h"

using namespace std;
 int main()
 {
	 //math m;
	 //cout<<"Result:"<<m.add(5,7)<<endl;
	 string str="argha";
	 //str='-'+str;
	 Mystring ms;
	 if(ms.endsWith(str,'-'))
		 cout<<"sussess"<<endl;
	 else
		 cout<<"failed"<<endl;
	 cout<<"["<<str<<"]";
	 str=ms.padRight(str,8,'-');
	 cout<<"["<<str<<"]";
 }




