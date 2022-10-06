#include <bits/stdc++.h>
using namespace std;

int maxProfit(vector<int>& prices) {
    int minPrice = prices[0];
    int minIndex = -1;
    int isSrt = 1;
    for(int i = 0; i<prices.size()-1; i++){
        if(prices[i]<=prices[i+1]){
            isSrt = 0;
        }
    }
    if (isSrt==1)
    {
        return 0;
    }
    int profit = 0;
    for (int i = 0; i < prices.size()-1; i++)
    {
        for (int j = i+1; j < prices.size(); j++)
        {
            int res = prices[j]-prices[i];
            profit = max(profit, res);
        }
    }
    return profit;
}
int main() {
	vector<int> prices = {7,1,5,3,6,4,5};
    int n = prices.size()-1;
    for (int i = 3; i>=0; i--)
    {
        int temp = prices[i];
        prices[n] = prices[i];
        prices[i]= temp;
        n--;
    }
    for (auto &&i : prices)
    {
        cout << i << " ";
    }
    
    //cout <<"Max profit: "<<  maxProfit(prices) << endl;
    
	return 0;
}