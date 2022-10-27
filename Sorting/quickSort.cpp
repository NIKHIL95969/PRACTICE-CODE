#include<bits/stdc++.h>
using namespace std;

int partion(int arr[], int  s, int e){
    int pivot = arr[s];
    int cnt = 0;
    for (int i = s+1; i <= e; i++)
    {
        if(pivot>=arr[i]) cnt++;
    }
    int p_index = cnt+s;
    swap(arr[p_index], arr[s]);

    int i =s, j =e;
    while (i<p_index && j>p_index)
    {
        while (arr[i]<=pivot)
        {
            i++;
        }
        while (arr[j]>pivot)
        {
            j++;
        }
        if (i<p_index && j>p_index) 
        {
            swap(arr[i++],arr[j--]);
        }
        
    }
    
    return p_index;
}
void quickSort(int arr[], int s, int e){
    if(s>=e) return;

    int p = partion(arr,s,e);

    quickSort(arr,s,p-1);
    quickSort(arr, p+1, e);
}

int main(){
    int arr[] = {3,1,2,4,5,99,46,0,2};
    int n = sizeof(arr)/sizeof(arr[0]);
    quickSort(arr, 0 ,n-1);
    cout << "Done" << endl;
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";
    cout << endl;
    return 0;
}