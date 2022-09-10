#include "stdio.h"

void swap(int arr[],int a,int b);
void swap(int arr[],int a,int b){
    int temp=arr[a];
    arr[a]=arr[b];
    arr[b]=temp;
}

void bubble_sort(int arr[],int n);
void bubble_sort(int arr[],int n){
    int sorted;
    for(int i=0;i<n-1;i++)
    {
        sorted=0;
        for(int j=0;j<n-1-i;j++)
        {
            if(arr[j]>arr[j+1]){
                swap(arr,j,j+1);
                
                sorted=1;
            }
        }
        if(sorted==1)
            break;
    }
    
}

int main(){
    int n;
    printf("Enter the size of the array : ");
    scanf("%d",&n);
    
    int arr[n];
    printf("Enter the elements of the array : ");
    for(int i=0;i<n;i++)
        scanf("%d",&arr[i]);
    
    bubble_sort(arr,n);
    
    printf("The sorted array is : ");
    for(int i=0;i<n;i++){
        printf("%d ",arr[i]);
    }
    
    return 0;
}
