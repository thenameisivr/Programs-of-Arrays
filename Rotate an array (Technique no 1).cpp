#include<iostream>
using namespace std;
void reverse(int arr[],int start,int end){
    while(start<end){
        int temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;
        start++;
        end--;
    }
}
int main()
{
    int arr[10] = {1,2,3,4,5,6};
    int k = 3;
    int size = 6;
    reverse(arr,0,k-1);
    reverse(arr,k,size-1);
    reverse(arr,0,size-1);
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
}