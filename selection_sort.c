#include "stdio.h"
int* selection_sort(int arr[],int n);
int* selection_sort(int arr[],int n){
    int min;
    for(int i=0,j,index;i<n-1;i++){
        min=arr[i];
        index=i;
        for(j=i+1;j<n;j++){
            if(arr[j]<min){
                min=arr[j];
                index=j;
            }
        }
        //swapping
        int temp=arr[i];
        arr[i]=min;
        arr[index]=temp;
    }
    return arr;
}
int main(){
    int n;
    printf("Enter the size of the array : ");
    scanf("%d",&n);

    int arr[n];

    printf("Enter the elements of the array : ");
    for(int i=0;i<n;i++)
        scanf("%d",&arr[i]);
    
    int *sorted_arr=selection_sort(arr,n);
    
    printf("The sorted array is : ");
    for(int i=0;i<n;i++)
        printf("%d ",*(sorted_arr+i));
    
    return 0;
}
