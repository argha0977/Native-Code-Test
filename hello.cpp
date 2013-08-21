/*Command Line parameter test*/

#include<iostream>
using namespace std;
int main(int argc,char* argv[])
{
	if(argc>2)
	{
		cout<<"Too many arguments"<<endl;
		return(0);
	}
	if(argc==2)
	{
		cout<<"Hello "<<argv[1]<<endl;
	}
	else
		cout<<"Hello World!!!"<<endl;
	return(0);
}
