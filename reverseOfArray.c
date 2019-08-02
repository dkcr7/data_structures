#include<stdio.h>
#include<stdlib.h>

//input using command line

//using recursion method
int* reverse_array(int arr[],int st,int end)
{
	if(st<end)
	{
		int temp=arr[st];
		arr[st]=arr[end];
		arr[end]=temp;
		reverse_array(arr,st+1,end-1);
	}
	return arr;
}

//-------------------------------------------------------------

//using iterative method
int* reverse_array(int arr[],int l)
{
	int arr2[l],j=0;
	for(int i=l-1;i>=0;i--)
	{
		arr2[j++]=arr[i];
	}
	for(int i=0;i<l;i++)
	{
		arr[i]=arr2[i];
	}
	return arr;
}

int main(int argc,char *argv[])
{
	int arr[argc],l=0;
	for(int i=1;i<argc;i++)
	{
		arr[i-1]=atoi(argv[i]);
		l++;
	}

	//recursive method
	int* arr1=reverse_array(arr,0,l-1);
	
	//iterative method
	int* arr1=reverse_array(arr,l);

	printf("reverse of an array\n");
	for(int i=0;i<l;i++)
	{
		printf("%d\n",arr1[i]);
	}
	return 0;
}

