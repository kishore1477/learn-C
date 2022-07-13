#include <stdio.h>

int binarySearch( int arr[], int size, int element){
int low, mid, high;
low = 0;
high = size-1;
while (low<=high){
mid = (low + high)/2;
if(arr[mid] == element){
    return mid;

}
if(arr[mid] < element){
    low = mid +1;
}else{
    high = mid - 1;
}
}
return -1;

}

// Binary search

int main(){
    int arr[]= {1,2,3,4,5};
    int size = sizeof(arr)/sizeof(int);
    printf("Size of array is: %d \n",size);
    int element=5;
   int retVal = binarySearch(arr, size,element);
   if(retVal==-1){
    printf(" The element %d is not found ",element );
   }else{
    printf(" The element %d is found at index %d" ,element , retVal);

   }
// display(arr,)
return 0;
}