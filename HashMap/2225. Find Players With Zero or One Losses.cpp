
#include <iostream>
using namespace std;


    vector<vector<int>> findWinners(vector<vector<int>>& matches) {
        unordered_map<int,int> looser;
        unordered_map<int,int> winner;
        for(int i=0; i<matches.size();i++){
                winner[matches[i][0]]++;
                looser[matches[i][1]]++;
            
        }
        vector<vector<int>> result;
        vector<int> first;
        vector<int> second;
        
        for (auto it : looser) {
            if (it.second == 0) {
                first.push_back(it.first);
            } else if (it.second == 1) {
                second.push_back(it.first);
            }
        }
        for(auto it:winner){
            if (looser.find(it.first) == looser.end()) {
                first.push_back(it.first);
            }
        }
        sort(first.begin(),first.end());
        result.push_back(first);
        sort(second.begin(),second.end());
        result.push_back(second);
        
        return result;
    }
