#include <stdio.h>

int linearSearch( int arr[], int size, int element){
for (int i = 0  ; i< size; i++)
// printf("%d ", arr[i]);
// for (int i = 0  ; i <= size-1; i++)
{
if (arr[i] == element){
    return i;
}

}
return -1;
}


// Binary search

int main(){
    int arr[]= {1,4,2,6,8,7};
    int size = sizeof(arr)/sizeof(int);
    printf("Size of array is: %d \n",size);
    int element=8;
   int retVal = linearSearch(arr, size,element);
   if(retVal==-1){
    printf(" The element %d is not found ",element );
   }else{
    printf(" The element %d is found at index %d" ,element , retVal);

   }
// display(arr,)
return 0;
}