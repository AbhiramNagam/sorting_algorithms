#include "stdio.h"

void merge(int arr[],int L,int mid,int H);
void merge(int arr[],int L,int mid,int H){
    int sorted_arr[100];
    int i=L;
    int j=mid+1;
    int k=L;
    while(i<=mid && j<=H){
        if(arr[i]<arr[j]){
            sorted_arr[k]=arr[i];
            k++;
            i++;
            
        }
        else if(arr[j]<arr[i]){
            sorted_arr[k]=arr[j];
            k++;
            j++;
            
        }
        
        while(i<=mid){
            sorted_arr[k]=arr[i];
            k++;
            i++;
        }
        // if(i>mid){
        //     while(j<=H)
        //         sorted_arr[k++]=arr[j++];
        // }
        while(j<=H){
            sorted_arr[k]=arr[j];
            k++;
            j++;
        }
        
    }
    for(int temp=L;temp<=H;temp++)
        arr[temp]=sorted_arr[temp];
}

void merge_sort(int arr[],int L,int H);
void merge_sort(int arr[],int L,int H){
    if(L<H){
        int mid=(L+H)/2;
        merge_sort(arr,L,mid);
        merge_sort(arr,mid+1,H);
        merge(arr,L,mid,H);
    }
}

int main(){
    int n=5;
    int arr[5]={3,1,2,7,5};
    
    merge_sort(arr,0,4);
    
    for(int i=0;i<n;i++)
        printf("%d ",arr[i]);
    
    
    
    return 0;
}
