#include <stdio.h>
int BS(int arr[],int beg,int end,int e){
    int mid;
    while(beg<=end){
        mid=(beg+end)/2;
        if(arr[mid]==e){
            return mid;
        }else if(arr[mid]>e){
            end= mid-1;
        }else
        {
            beg=mid+1;
        }
    }
return -1;
}
int main(){
    int arr[50],n,i,e,result;
    printf("Enter the number of elements in array:\n");
    scanf("%d",&n);
    printf("Enter the elements of sorted array:\n");
    for ( i = 0; i < n; i++){
        scanf("%d",&arr[i]);
    }
    printf("Enter element to search in list:\n");
    scanf("%d",&e);
    result=BS(arr,0,n-1,e);
    if (result == -1)
    {
        printf("Element not found\n");
    }else{
        printf("Element found at index: %d",result);
    }
    return 0;



}
