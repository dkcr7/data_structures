#include<stdio.h>
#include<stdlib.h>

//inputs using comand line

//method-1
void rotate(int arr[],int l,int n)
{
	int j=0;
	if(n>l)
	{
		n=n%l;
	}
	else
	{
		n=n;
	}
	int temp[n];
	for(int i=l-n;i<l;i++)
	{
		temp[j++]=arr[i];
	}
	for(int i=l-n-1;i>=0;i--)
	{
		arr[i+n]=arr[i];
	}
	for(int i=0;i<n;i++)
	{
		arr[i]=temp[i];
	}
}

//method-2
void rotate(int arr[],int l)
{
	int first;
	first=arr[0];
	for(int i=0;i<l-1;i++)
	{
		arr[i]=arr[i+1];
	}
	arr[l-1]=first;
}

int main(int argc,char *argv[])
{
	int arr[argc],l=0;
	for(int i=1;i<argc;i++)
	{
		arr[i-1]=atoi(argv[i]);
		l++;
	}
	int n;
	printf("enter the number to rotate the array\n");
	scanf("%d",&n);
	//method-1
	//time=O(n)
	//space=O(no. of rotation)
	rotate(arr,l,n);
	
	//method-2
	//time=O(n)*no. of rotation
	//space=O(1)
	for(int i=0;i<n;i++)
	{
		rotate(arr,l);
	}
	printf("rotated array by %d\n",n);
	for(int i=0;i<l;i++)
	{
		printf("%d\n",arr[i]);
	}
	return 0;
}
