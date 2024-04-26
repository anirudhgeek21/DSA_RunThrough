#include <iostream>
using namespace std;

vector<vector<int>> groupThePeople(vector<int>& groupSizes) {
        int length = groupSizes.size();
        unordered_map<int, vector<int>> mpp;
        for (int i = 0; i < length; ++i) {
            mpp[groupSizes[i]].push_back(i);
        }
        
        vector<vector<int>> result;
        
        for (auto& it : mpp) {
            int groupSize = it.first;
            vector<int>& group = it.second;
            int groupCount = group.size() / groupSize;
            for (int i = 0; i < groupCount; i++) {
                vector<int> subgroup(group.begin() + i * groupSize, group.begin() + (i + 1) * groupSize);
                
                result.push_back(subgroup);
            }
        }

        return result;
    }