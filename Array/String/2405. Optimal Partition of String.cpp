#include <iostream>
using namespace std;

int partitionString(string s) {
        unordered_map<char, int> mpp;
        int count = 0;
        for (auto it : s) {
            cout << it << " ";
            if (mpp[it] >= 1) {
                mpp.clear();
                count++;
                }
            mpp[it]++; 
        }
        return count+1;
    }