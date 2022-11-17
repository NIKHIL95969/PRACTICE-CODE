/* For selection sorting we have to put the min elemnt at the their index as per the loop.
In first loop we have first index 0 and we have to put min element form the array to at this index.

*/

#include<bits/stdc++.h>
using namespace std;
void swap(int *a, int *b){
    int temp = *a;
    *a = *b;
    *b = temp;
}
int main(){

    int n;
    cin >> n;
    int arr[n];
    // Entering array elements
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i] ;
    }

   // Selection sorting algorithm
    int count =0;
    for (int i = 0; i < n; i++)
    {
        int min_index = i;
        for (int k = i+1; k < n; k++)
        {
            if (arr[k]<arr[min_index])
            {
                //int temp = arr[k];
                min_index = k;
            }
            
        }

        swap(&arr[i],&arr[min_index]);
    }

    // Printing the elements of the array
    cout << "Count : " << count << endl;
    for (int i = 0; i < n; i++)
    {
        cout<< arr[i]<< " ";
    }
    
    return 0;
}