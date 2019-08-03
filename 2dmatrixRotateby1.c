#include <stdio.h>
#define m 4
#define n 4
int rotate(int m1,int n1,int arr[m][n],int i,int j)
{
    int k=0;
    int a=i;
    int arr1[m1*n1];
    if(i>=m1 || j>=n1)
        return 0;
    if(i+1==m1 || j+1==n1)
        return 0;
    
    //2d to 1d array
    else{
    while(j<m1)
    {
        arr1[k++]=arr[i][j];
        j++;
    }
    j--;
    i++;
    while(i<n1)
    {
        arr1[k++]=arr[i][j];
        i++;
    }
    i--;
    j--;
    while(j>=a)
    {
        arr1[k++]=arr[i][j];
        j--;
    }
    i--;
    j++;
    while(i>a)
    {
        arr1[k++]=arr[i][j];
        i--;
    }
    //rotate 1d array by 1
    int temp=0;
    for(int q=k-1;q>0;q--)
    {
        temp=arr1[q];
        arr1[q]=arr1[q-1];
        arr1[q-1]=temp;
    }
    //1d array to 2d array
    int w=0;
    while(j<m1)
    {
        arr[i][j]=arr1[w++];
        j++;
    }
    j--;
    i++;
    while(i<n1)
    {
        arr[i][j]=arr1[w++];
        i++;
    }
    i--;
    j--;
    while(j>=a)
    {
        arr[i][j]=arr1[w++];
        j--;
    }
    i--;
    j++;
    while(i>a)
    {
        arr[i][j]=arr1[w++];
        i--;
    }
    return rotate(m1-1,n1-1,arr,i+1,j+1);
    }
}
int main()
{
    int arr[m][n];
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
            scanf("%d",&arr[i][j]);
        }
    }
    int a=rotate(m,n,arr,0,0);
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
            printf("%d ",arr[i][j]);
        }
        printf("\n");
    }

    return 0;
}
