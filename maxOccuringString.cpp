#include<iostream>
#include<string>

using namespace std;

int main(int argc,const char* argv[])
{
        int temp=0,loc=0;
        string str=argv[1];
        int n=str.length();
	int a[n];
        for(int i=0;i<n;i++)
        {
		int count=0;
                for(int j=i;j<n;j++)
                {
                        if(str[i]==str[j])
                        {
                                count++;
                        }
                }
		a[i]=count;
		if(temp<a[i])
                {
                        temp=a[i];
                        loc=i;
                }

        }
	cout<<"Character \'"<<str[loc]<<"\' from string \'"<<str<<"\' occured  max of "<<temp<<" times"<<endl;
        return 0;
}


