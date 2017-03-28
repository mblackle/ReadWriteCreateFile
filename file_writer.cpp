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


char pathNametest[100] ;
pathNametest[0]='f';
pathNametest[0]='\0';

cout << "Enter a file name without spaces: " << endl;
cin>>pathNametest;


file=open(pathNametest, O_WRONLY);

if(file == -1)
{
	cout << "Error: creation unsuccessful" << endl;
	exit(0);
}

else
{
	cout << "Enter a string (with no spaces) to write into the file" << endl;
	scanf("%127s", buf);

	write(file, buf, strlen(buf));
	
	close(file);
}

return 0;

}
