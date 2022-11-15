#include<iostream>
#include<bits/stdc++.h>
using namespace std;

void printarray(int arr[],int size,int key){
    int start=key+1;
    int end = size-1;

    for(start,end; start<end ; ){
        swap(arr[start],arr[end]);
        ++start;--end;
    }

    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }cout<<endl;
}
int main(){
    int arr[5] = { 1,2,3,4,5};
    printarray(arr,5,5);

    return 0;
}