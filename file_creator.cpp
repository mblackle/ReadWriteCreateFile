#include<sys/types.h>
#include<fcntl.h>
#include<stdlib.h>
#include<unistd.h>
#include<iostream>
#include<string>

using namespace std;

int main(){

std::string FileName;
std::string answer;
int file;
int permission;

char pathNametest[100] ;
pathNametest[0]='f';
pathNametest[0]='\0';

cout << "Enter a file name without spaces: " << endl;
cin>>pathNametest;
//cin >> FileName;

cout << "What permissions (read 'R' ,write 'W' ,execute 'E') do you wish to assign to the owner class of users?" << endl;
cout << "Examples: RWE for permissions to be read, write and execute" << endl;
cin >> answer;

//char *pathName = FileName;

if(answer == "RWE" || answer == "rwe")
{
	permission = 0700;
}

if(answer == "RW" || answer == "rw")
{
	permission = 0600;
}

if(answer == "RE" || answer == "re")
{
	permission = 0500;
}

if(answer == "WE" || answer == "we")
{
	permission = 0300;
}

if(answer == "R" || answer == "r")
{
	permission == 0400;
}

if(answer == "W" || answer == "w")
{
	permission = 0200;
}

if(answer == "E" || answer == "e")
{
	permission == 0100;
}


//strcpy(pathNametest,"myfile");

file=creat(pathNametest, permission);

if(file == -1)
{
	cout << "Error: creation unsuccessful" << endl;
	exit(0);
}

}
