#include<stdio.h>

//second half of arrar is left rotated
void leftRotate(int arr[],int d,int n)
{
	int temp[d];
<<<<<<< HEAD
	int n1=n/2;
=======
	int n2=n/2;
>>>>>>> left rotate the first and right rotate the second half of an array
	for(int i=0;i<d;i++)
	{
		temp[i]=arr[n1++];
	}
	for(int i=n2+d;i<n;i++)
	{
		arr[i-d]=arr[i];
	}
	for(int i=d-1;i>=0;i--)
	{
		arr[--n]=temp[i];
	}
}

//first half of array is right rotated
void rightRotate(int arr[],int d,int n)
{
	int temp[d],j=0;
	int n1=n/2;
	for(int i=n1-d;i<n1;i++)
	{
		temp[j++]=arr[i];
	}
	for(int i=n1-d-1;i>=0;i--)
	{
		arr[i+d]=arr[i];
	}
	for(int i=0;i<d;i++)
	{
		arr[i]=temp[i];
	}
}

int main()
{
	int n=6;
	int arr[]={1,2,3,4,5,6};
	int d=2;
	leftRotate(arr,d,n);
	rightRotate(arr,d,n);
	for(int i=0;i<n;i++)
	{
		printf("%d\n",arr[i]);
	}
	return 0;
}
