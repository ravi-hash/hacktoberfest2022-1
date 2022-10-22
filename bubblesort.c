#include<stdio.h>
#include<stdlib.h>
#include<math.h>


int bubblesort(int arr[], int size)
{
    int si=size;
    for(int i=0;i<si;i++)
    {
        int key=0;
        for(int j=0;j<=si-1;j++)
        {
            if(arr[j]>arr[j+1])
            {
                key=key+1;
                int temp=arr[j+1];
                arr[j+1]=arr[j];
                arr[j]=temp;
            }
           
        }
        if(key==0)
        {
            break;
        }
        si--;
        key=0;
    }
    displayarray(arr,size);

}












int displayarray(int arr[],int size)
{
    printf("the output array is\n");
    for(int i=0;i<size;i++)
    {
        printf("%d ",arr[i]);
    }

}




void main()
{
    printf("enter size\n");
    int size;
    scanf("%d",&size);
    int arr[size];
    printf("enter elements\n");
    for(int i=0;i<size;i++)
    {
        int val;
        scanf("%d",&val);
        arr[i]=val;
    }
    bubblesort(arr , size);



}