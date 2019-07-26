#include <stdio.h>
int binarysearch(int arr[],int srt,int end,int ser)
{
       int mid=srt+(end-1)/2;
       //int mid=((unsigned int)srt+(unsigned int)end)>>1
       if(srt>end)
       {
           return -1;
       }
       if(arr[mid]==ser)
       {
           return mid;
       }
       else if(arr[mid]>ser)
       {
           return binarysearch(arr,srt,mid-1,ser);
       }
       else
       {
           return binarysearch(arr,mid+1,end,ser);
       }
}
int main()
{
    int n;
    printf("Enter size of array:");
    scanf("%d",&n);
    int arr[100];
    printf("Enter elements in array:\n");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    int sr;
    printf("Enter element to be searched:");
    scanf("%d",&sr);
    int res=binarysearch(arr,0,n-1,sr);
    if(res==-1)
    {
        printf("Not Found\n");
    }
    else
    {
        printf("index: %d\n",res);
    }
    return 0;
}

