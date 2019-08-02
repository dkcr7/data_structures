#include<stdio.h>
#include<stdlib.h>

//inputs using command line

int* alternate(int arr[],int l)
{
	int a=-1,temp,j=1;
	//we are sorting the array
	//rearrage the in format of -ve numbers are before +ve number
	//eg.-1 -2 -3 5 6 4
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
	//a tells the index of last -ve number
	//alternatively set -ve amd +ve numbers
	int a1=a;
	printf("%d\n",a1);
	for(int i=0;i<l;i++)
	{
		printf("%d\n",arr[i]);
	}
	if(a1!=-1)
	{
		for(int i=1;i<=a1+1;i++)
		{
			temp=arr[i];
			arr[i]=arr[a1+1];
			arr[a1+1]=temp;
			a1+=1;
			i++;
		}
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
	int *arr1=alternate(arr,l);
       	printf("positive and negative alternativrly arranged\n");
	for(int i=0;i<l;i++)
	{
		printf("%d\n",arr1[i]);
	}
	return 0;
}
