#include <stdio.h>

void display(int arr[],int n){
for (int i = 0; i < n; i++)
{
    printf("%d ",arr[i]);
}
printf("\n");
}
int  indexInsertionArr(int arr[],int size,int  index, int element,int capacity){
if (size >= capacity){
return -1;

}
for (int i = size-1; i >=index; i--)
{
    arr[i+1] =arr[i];
}

// 😎  incomplete method-2
// for (int i = index; i >=size-1; i++)
// {
//     arr[i+1] =arr[i];
// }
arr[index] =element;
return 1;
}
int main(){
    int index= 2, element=16, size=5, capcity=5;

    int arr[5]={1,2,3,4,5};
    // int n ;
    // n=  sizeof(arr[100]);
    // printf(" %d Size of array ", n);
    display(arr,size);
     int ret= indexInsertionArr(arr,size, index, element,capcity);
    
    if(ret==1){
printf(" Modified Array display as:");
size +=1;
    display(arr,size);
    }else{
        printf("Error :- Element is not inserted !");
    }
    return 0;

}