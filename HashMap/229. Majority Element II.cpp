#include <iostream>
using namespace std;

vector<int> majorityElement(vector<int>& nums) {
        unordered_map<int,int> mpp;
        for (int i=0;i<nums.size();i++){
            mpp[nums[i]]++;
        }
        vector<int> result;
        for (auto it:mpp){
            if (it.second > (nums.size()/3)){
                result.push_back(it.first);
            }
        }
        return result;
    }