#include "stdio.h"

void swap(int arr[],int a,int b);
void swap(int arr[],int a,int b){
    int temp=arr[a];
    arr[a]=arr[b];
    arr[b]=temp;
}

int partition(int arr[],int low,int high);
int partition(int arr[],int low,int high){
    int pivot=arr[low];
    int start=low;
    int end=high;
    while(start<end){
        while(arr[start]<=pivot){
            start++;
        }
            
        while(arr[end]>pivot){
            end--;
        }
        if(start<end){
            swap(arr,start,end);
        }
    }
    swap(arr,low,end);
    
    return end;
}

void quick_sort(int arr[],int low,int high);
void quick_sort(int arr[],int low,int high){
    if(low<high){
        int k=partition(arr,low,high);
        quick_sort(arr,low,k-1);
        quick_sort(arr,k+1,high);
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
        
    quick_sort(arr,0,n-1);
    
    printf("\nThe sorted array is : ");
    for(int i=0;i<n;i++)
        printf("%d ",arr[i]);
    
    return 0;
    
}
