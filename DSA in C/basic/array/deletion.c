 #include <stdio.h>

void display(int arr[],int n){
    // traversal code
for (int i = 0; i < n; i++)
{
    printf("%d ",arr[i]);
}
printf("\n");
}
int  delete(int arr[],int size,int  index){
if (index > size){
return -1;

}
for (int i = index; i < size-1; i++)
{

    arr[i] =arr[i+1];
}


// arr[index] =element;
return 1;
}
int main(){
    int index= 2,size=4;

    int arr[5]={1,2,3,4};
    // int n ;
    // n=  sizeof(arr[100]);
    // printf(" %d Size of array ", n);
    printf("Welcome to deletion of array: ");
    display(arr,size);
     int ret= delete(arr,size, index);
    
    if(ret==1){
printf(" Modified Array display as:");
size -=1;
    display(arr,size);
    }else{
        printf("Error :- Element is not Deleted !");
    }
    return 0;

}