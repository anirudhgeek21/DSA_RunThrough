#include <iostream>
using namespace std;

vector<vector<int>> findMatrix(vector<int>& nums) {
        unordered_map<int,int> mpp;
        for(auto it:nums){
            mpp[it]++;
        }
        int length = 0;
        for(auto it : mpp) {
            length = max(length, it.second);
        }
        
        vector<vector<int>> result(length);
        for(auto it : mpp) {
            int total = it.second;
            int number = it.first;
            for(int i = 0; i < total; i++) {
                result[i].push_back(number);
            }
        }
        
        return result;
    }