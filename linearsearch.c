#include <stdio.h>
int main()
{
	int arr[100],n,search;
	printf("Enter size of array\n");
	scanf("%d",&n);
	printf("Enetr elements in array");
	for(int i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	printf("Enter a number to be searched\n");
	scanf("%d",&search);
	for(int i=0;i<n;i++)
	{
		if(arr[i]==search)
		{
			printf("%d",i+1);
			break;
		}
	}
	return 0;
}
