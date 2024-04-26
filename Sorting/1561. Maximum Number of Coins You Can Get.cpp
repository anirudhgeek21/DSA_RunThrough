#include <iostream>
using namespace std;

int maxCoins(vector<int>& piles) {
        sort(piles.begin(),piles.end());
        int count = 0;
        for(int i=1 ; i<=2*(piles.size()/3);i+=2){
            cout << piles[piles.size()-i-1];
            count += piles[piles.size()-i-1];
        }
        return count;
    }