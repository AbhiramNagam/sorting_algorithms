#include "stdio.h"
int binary_search(int arr[],int n,int element);
int binary_search(int arr[],int n,int element){
    int i=0,j=n-1,mid;
    while (i<=j){
		mid=(i+j)/2;
		if(element==arr[mid]){
			return mid;
		}
		else if (element<arr[mid]){
			
			j=mid-1;
		}
		else if(element>arr[mid]){
			i=mid+1;
		}
	}
	return -1;
}

int main(){
    int n,element;
    printf("Enter the size of the array : ");
    scanf("%d",&n);
    
    printf("Enter the elements of the array : ");
    for(int i=0;i<n;i++)
		scanf("%d",&arr[i]);
    
    printf("Enter the element to search : ");
    scanf("%d",&element);
    
    int ans=binary_search(arr,n,element);
    if (ans!=-1)
        printf("Element found at index : %d\n",ans);
    else
        printf("Element not found in the array\n");
        
    return 0;
}
