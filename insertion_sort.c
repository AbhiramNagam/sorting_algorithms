#include "stdio.h"

void insertion_sort(int arr[],int n);
void insertion_sort(int arr[],int n){
    int temp;
    for(int i=1;i<n;i++){
        temp=arr[i];
        for(int j=i-1;j>=0;j--){
            if(temp<arr[j]){
                arr[j+1]=arr[j];
                arr[j]=temp;
            }
        }
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
        
    insertion_sort(arr,n);
    
    printf("The sorted array is : ");
    for(int i=0;i<n;i++){
        printf("%d ",arr[i]);
    }
    
    return 0;
}
