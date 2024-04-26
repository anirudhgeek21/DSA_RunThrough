#include <iostream>
using namespace std;

vector<int> findingUsersActiveMinutes(vector<vector<int>>& logs, int k) {
        vector<int> result(k,0);
        unordered_map<int,unordered_map<int,int>> mpp;
        for(auto it : logs){
            mpp[it[0]][it[1]]++;
        }

        for(auto it: mpp){
            int uam= it.second.size();
            result[uam - 1] += 1; 
        }

        return result;
    }