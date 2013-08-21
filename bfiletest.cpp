/*Reading and Writing binary files(Image/audio/video/Doc etc.)
 and time taken.*/
#include<fstream>
#include<iostream>
#include<sys/time.h>
using namespace std;

int main(int argc, char *argv[])
{
	if(argc<2)
	{
		cout<<"Please enter file name\n";
		return 0;
	}
	timeval tp;
	gettimeofday(&tp,0);
	time_t curtime=tp.tv_sec;
	tm *t=localtime(&curtime);
	cout<<t->tm_hour<<":"<<t->tm_min<<":"<<t->tm_sec<<"."<<tp.tv_usec/1000<<"\n";
	long stime=tp.tv_sec*1000+tp.tv_usec/1000;
	ifstream in(argv[1],ios::binary);
	if(in.fail())
	{
		cout<<"Specified file not found\n";
		return 0;
	}
	ofstream out("test1.avi",ios::binary);
	char* buffer;

	in.seekg(0,ios::end);
	long len=in.tellg();
	in.seekg(0,ios::beg);
	buffer=new char[len/10];
	while(in.read((char*)buffer,sizeof(buffer)))
	{
		out.write((char*)buffer,sizeof(buffer));
	}
	out.close();
	in.close();
	cout<<"Copy complete\n";
	gettimeofday(&tp,0);
	curtime=tp.tv_sec;
	t=localtime(&curtime);
	cout<<t->tm_hour<<":"<<t->tm_min<<":"<<t->tm_sec<<"."<<tp.tv_usec/1000<<"\n";
	long etime=tp.tv_sec*1000+tp.tv_usec/1000;
	long eltime=etime-stime;
	cout<<"Elapsed Time:"<<eltime<<"ms\n";
	return 0;
}
