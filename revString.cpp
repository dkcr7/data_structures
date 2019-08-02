#include<iostream>
#include<string>

using namespace std;

int rev_str(string s,int n)
{
	string temp;
	temp=s[n-1];
	cout<<temp;
	n--;
	if(n==0)
	{
		return 0;
	}
	else
	{
		rev_str(s,n);
	}
}

int main()
{
	string str="string";
	int n=str.length();
	for(int i=n-1;i>=0;i--)
	{
		cout<<str[i];
	}
	cout<<endl;
	rev_str(str,n);
	return 0;
}
