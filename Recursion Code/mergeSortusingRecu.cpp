#include<bits/stdc++.h>
using namespace std;
const int N = 1e3+10;
int a[N];
void merge(int s, int mid, int e){
    int l_s = mid-s+1;
    int r_s = e-mid;
    int a1[l_s+1];
    int a2[r_s+1];
     // copy values
     for (int i = 0; i < l_s; i++)
        a1[i] = a[i+s];
    for (int j = 0; j < r_s; j++)
        a2[j] = a[mid+1+j];
    // set the last value to int_max;    
    a1[l_s] = a2[r_s] = INT_MAX;
    int l_i,r_i,k;
    l_i = 0;
    r_i =0;
    k = s;
    
    for (int i = s; i <= e; i++)
    {
        if (a1[l_i]<=a2[r_i])
        {
            a[i] = a1[l_i++];
        }
        else{
            a[i] = a2[r_i++];
        }
    }
    
     
}
void mergeSort(int l, int e){
    // base condition
    if(l>=e) return ;

    int mid = l+(e-l)/2;

    // 
    mergeSort(l,mid);
    mergeSort(mid+1, e);

    merge(l,mid,e);

}

int main(){
    int n;
    cin>> n;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    mergeSort(0, n-1);
    cout << "Done" << endl;
    for (int i = 0; i < n; i++)
        cout << a[i] << " ";
    cout << endl;
    return 0;
}