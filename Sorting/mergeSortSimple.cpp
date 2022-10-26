#include<bits/stdc++.h>
using namespace std;


void merge(int a[], int s,int mid ,int e){
    // Left array and right array
    // step 1
    int len1 = mid-s+1;
    int* first = new int(len1);

    int len2 = e-mid;
    int* second = new int(len2);

    // copy values
    // step 2
    for (int i = 0; i < len1; i++)
    {
        first[i] = a[i+s];
    }
    for (int j = 0; j < len2; j++)
    {
        second[j] = a[j+mid+1];
    }
    // step 3
    // merge 2 array
    int index1 =0;
    int index2 =0;
    int MainArrIndex = s;
    while (index1<len1 && index2<len2)
    {
        if(first[index1] < second[index2]){
            a[MainArrIndex++] = first[index1++];
        }
        else
        {
            a[MainArrIndex++] = second[index2++];
        }
        
    }
    // step4 
    // put all remaining values of left and right array
    while (index1<len1)
    {
        a[MainArrIndex++] = first[index1++];
    }
    while (index2<len2)
    {
        a[MainArrIndex++] = second[index2++];
    }
    
    delete []first;
    delete []second;
    
}
void mergeSort(int a[], int l, int r){
    if (l>=r)
    {
        return;
    }
    
    int mid = l+(r-l)/2;
    mergeSort(a, l,mid);
    mergeSort(a, mid+1,r);

    merge(a, l,mid,r);
    
}
int main(){

    int a[] = {5,2,4,1,3};
    int n  = sizeof(a)/sizeof(a[0]);
    cout<< "Sorted array is : " << endl;
    mergeSort(a,0, n-1);
    for (int i = 0; i < n; i++)
    {
        cout << a[i] <<" ";
    }
    
    return 0;
}