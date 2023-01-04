#include<bits/stdc++.h>
using namespace std;

void insertE(vector<int>& v, int temp){
    // base condition
    if(v.size()==0 || (v[(v.size()-1)]<=temp) ){
        v.push_back(temp);
        return;
    }
    
    // Hypothesis
    int lstE = v[(v.size()-1)];
    v.pop_back();
    insertE(v, temp);

    // Induction
    v.push_back(lstE);
}

void sort(vector<int>& v){
    if(v.size()==1) return; // base condition

    // Hypothesis condition
    int temp = v[(v.size()-1)];
    v.pop_back();
    sort(v);

    // Induction base condition
    insertE(v, temp);
}

void printA(vector<int> v){
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
    }
    
}

int main() {

    vector<int> v = {3,2,1,4,0,-1,100,5,3,1000,9};
    printA(v);
    cout << endl;

    sort(v);

    printA(v);

    return 0;
}