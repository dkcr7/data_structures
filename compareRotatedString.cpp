#include<iostream>
using namespace std;
int check_strings(string s1,string s2,int l,int count)
{
	string temp=s1;
	temp[0]=s2[l-1];
	for(int i=0,j=1;i<l-1;i++,j++)
	{
		temp[j]=s2[i];
	}
	if(s1==temp)
	{
		cout<<"Number of rotations are "<<count<<endl;
		return 0;
	}
	else
	{
		int nul;
		count++;
		nul=check_strings(s1,temp,l,count);
	}	
}
int main(int argc,const char* argv[])
{
	int count=1;
	string str1=argv[1];
	string str2=argv[2];
	if(str1.length()!=str2.length())
	{
		cout<<"Not Equal"<<endl;
	}
	else if(str1==str2)
	{
		cout<<"Equal"<<endl;
	}
	else
	{
		int l=str1.length();
		int nul=check_strings(str1,str2,l,count);
	}
	return 0;
}

