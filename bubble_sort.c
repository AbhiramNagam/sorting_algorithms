#include "stdio.h"

int* bubble_sort(int n,int arr[]);
int* bubble_sort(int n,int arr[]){
    int i=0;
    while(i<n-1){
        int j=0;
        while(j<n-i-1){
            if(arr[j]>arr[j+1]){
                int temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
            j+=1;
        }
        i+=1;
    }
    return arr;
}

int main(){
    int n,i;
    printf("Enter the size of the array : ");
    scanf("%d",&n);
    int arr[n];
    
    printf("Enter the elements of the array : ");
    for(i=0;i<n;i++)
        scanf("%d",&arr[i]);
        
    int *sorted_arr;
    
    sorted_arr=bubble_sort(n,arr);
    printf("The sorted array is : ");
    for(i=0;i<n;i++)
        printf("%d ",sorted_arr[i]);
        
    return 0;
}
