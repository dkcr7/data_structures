#include<stdio.h>
#include<stdlib.h>
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

int* alternate(int arr1[],int l)
{
	int a=0,b=1,arrr[l],loc=l-1;
	for(int i=0;i<l;i++)
	{
		if(arr1[i]<0)
		{
			arrr[a]=arr1[i];
			a+=2;
		}
		else if(arr1[i]>0)
		{
			arrr[b]=arr1[i];
			b+=2;
		}
		else
		{
			arrr[loc]=arr1[i];
			loc--;
		}
	}
	for(int i=0;i<l;i++)
	{
		arr1[i]=arrr[i];
	}
	return arr1;
}
/*int* alternate(int arr[],int l)
{
	int a=-1,temp,loc=l-1;
	for(int i=0;i<l;i++)
	{
		if(arr[i]<0)
		{
			a++;
			temp=arr[a];
			arr[a]=arr[i];
			arr[i]=temp;
		}
	}
	for(int i=0;i<l/2;i++)
	{
		temp=arr[i];
		arr[i]=arr[loc];
		arr[loc]=temp;
		loc=loc-2;
		i++;
	}
	return arr;
}*/

void rotate(int arr[],int l,int n)
{
	int temp[n],j=0;
	if(n>l)
	{
		n=n%l;
		int temp[n];
	}
	else
	{
		int temp[n];
	}
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
/*void rotate(int arr[],int l)
{
	int first;
	first=arr[0];
	for(int i=0;i<l-1;i++)
	{
		arr[i]=arr[i+1];
	}
	arr[l-1]=first;
}*/

int main(int argc,char *argv[])
{
	int arr[10],l=0;
	for(int i=1;i<argc;i++)
	{
		arr[i-1]=atoi(argv[i]);
		l++;
	}
	int* arr1=reverse_array(arr,0,l-1);
	printf("reverse of an array\n");
	for(int i=0;i<l;i++)
	{
		printf("%d\n",arr1[i]);
	}
	int *arr2=alternate(arr,l);
       	printf("positive and negative alternativrly arranged\n");
	for(int i=0;i<l;i++)
	{
		printf("%d\n",arr2[i]);
	}
	int n;
	printf("enter the number to rotate the array\n");
	scanf("%d",&n);
	//method-1
	//time=O(n)
	//space=O(n)
	rotate(arr,l,n);
	//method-2
	//time=O(n)*no. of rotation
	//space=O(1)
	/*for(int i=0;i<n;i++)
	{
		rotate(arr,l);
	}*/
	printf("rotated array by %d\n",n);
	for(int i=0;i<l;i++)
	{
		printf("%d\n",arr[i]);
	}
	return 0;
}
