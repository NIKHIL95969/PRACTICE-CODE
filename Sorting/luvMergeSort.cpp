 #include<bits/stdc++.h>
// #include<iostream>
// #include<math.h>
// #include<climits>

using namespace std;
void merge(int sorted[], int s, int mid, int e){
    int l1 = mid - s + 1;
    int l2 = e-mid;

    int left[l1+1], right[l2+1];
    
    for (int i = 0; i < l1; i++)
        left[i] = sorted[s+i];
    for (int j = 0; j < l2; j++)
       right[j] = sorted[mid+1+j];
    
    left[11+1] = right[l2+1] = INT_MAX;

    int i = 0; int j = 0;
    int k = s;
    while (i<l1 && j<l2)
    {
        if(left[i]<=right[j]){
            sorted[k++] = left[i++];
        }
        else
        {
            sorted[k++] = right[j++];
        }
        
    }
}
void mergeSort(int arr[], int s ,int e){
    if(s<e) 
    {
        int mid = s+(e-s)/2;
        mergeSort(arr, s, mid);
        mergeSort(arr, mid+1, e);

        merge(arr, s, mid , e);
    }
}
int main(){
    int arr[] = {0,1,2,3,0,0,1,5};
    int size = sizeof(arr)/sizeof(arr[0]);
    mergeSort(arr, 0, size-1);

    cout << "Sorted array is: "<<endl;
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " "; 
    }cout << endl;
    
    return 0;
}