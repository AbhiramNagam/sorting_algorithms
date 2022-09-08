#include "stdio.h"
int linear_search(int arr[],int n,int element);
int linear_search(int arr[],int n,int element){
    for(int i=0;i<n;i++){
        if(arr[i]==element){
            return i;
        }
    }
    return -1;
}
int main(){
    int n,element;
    printf("Enter the size of the array : ");
    scanf("%d",&n);
    int arr[n];
    
    printf("Enter the elements of the array : ");
    for(int i=0;i<n;i++)
        scanf("%d",&arr[i]);
    
    printf("Enter the element to search : ");
    scanf("%d",&element);
    
    int ans=linear_search(arr,n,element);
    if (ans!=-1)
        printf("Element found at index : %d\n",ans);
    else
        printf("Element not found in the array\n");
        
    return 0;
}
