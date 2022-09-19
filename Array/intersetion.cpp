#include <bits/stdc++.h>
using namespace std;

int main() {
	  //int N;
        int N;
        cin >> N;
        int arr[N];

     
      for (int i = 0; i < N; i++)
      {
        cin >> arr[i];
      }
      cout << "Array two : "<< endl;
      int n;
      cin >> n;
      int arr2[n];
      for (int i = 0; i < n; i++)
      {
        cin >> arr2[i];
      }
      vector<int> v;
      int j=0;
    //   for (int i = 0; i < N ; i++)
    //   {
    //     for (j = 0; j < n; j++)
    //     {
    //         if (arr[i]==arr2[j])
    //         {
    //             v.push_back(arr[i]);
    //             arr2[j] = -1;
    //             break;
    //         }

    //     }
    //   }
    int i =0;
    while (i< N && j<n)
    {
        if (arr[i]==arr2[j])
            {
                v.push_back(arr[i]);
                i++;
                j++;
            }
        }
        if(arr[i] < arr2[j])
        {
            i++;
        }

    }
      
    for(int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
    }
      
      // Above code is good for logic wise but it is not efficient
      

	
	return 0;
}