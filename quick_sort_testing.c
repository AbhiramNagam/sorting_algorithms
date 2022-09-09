#include "stdio.h"

void swap(int arr[], int i, int j);
void swap(int arr[], int i, int j){
    int temp = arr[i];
    arr[i] = arr[j];
    arr[j] = temp;
}
int partition(int arr[],int L,int H);
int partition(int arr[],int L,int H){
    int i=L,j=H;
    int pivot=arr[i];
    while(i<j){
        do{
            i++;
        }while(arr[i]<pivot);
        
        do{
            j--;
        }while(arr[i]>pivot);
        
        if(i<j){
            swap(arr,i,j);
        }
        
    }
    swap(arr,i+1,j);
    return i+1;
}

void quick_sort(int arr[],int L,int H);
void quick_sort(int arr[],int L,int H){
    if(L<H){
        int j=partition(arr,L,H);
        quick_sort(arr,L,j-1);
        quick_sort(arr,j+1,H);
    }
}
int main(){
    int n;
    printf("Enter the length of the array : ");
    scanf("%d",&n);
    int arr[n];
    printf("Enter the elements of the array : ");
    for(int i=0;i<n;i++)
        scanf("%d",&arr[i]);
    
    quick_sort(arr,0,n-1);
    for(int i=0;i<n;i++)
        printf("%d ",arr[i]);
    
    return 0;
}
