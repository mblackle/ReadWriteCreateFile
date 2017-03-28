#include<sys/types.h>
#include<fcntl.h>
#include<stdlib.h>
#include<unistd.h>
#include<iostream>
#include<string>
#include<stdio.h>
#include<cstring>

using namespace std;

int main(){

std::string writeToFile;
int file;
char buf[128];
int nread;
int count;
count = 0;
//cout << count.getBytes().length;


char pathNametest[100];
pathNametest[0]='f';
pathNametest[0]='\0';

cout << "Enter a file name without spaces: " << endl;
cin>>pathNametest;



file=open(pathNametest, O_RDONLY);

if(file == -1)
{
	cout << "Error: creation unsuccessful" << endl;
	exit(0);
}

else
{
	 while((nread = read(file, buf, 10)) > 0)
	{
		printf("%s",buf);
		close(file);
		cout<< endl;
		
	} 

}



return 0;

}
