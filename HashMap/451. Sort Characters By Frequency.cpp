#include <iostream>
using namespace std;

string frequencySort(string s) {
        string result;
        unordered_map<char,int> mpp;
        for(auto it:s){
            mpp[it]++;
        }
        for(int i=s.size();i>0;i--){
            for(auto it:mpp){
                if(it.second == i){
                    result.append(i, it.first);
                }
            }
        }
        return result;
    }