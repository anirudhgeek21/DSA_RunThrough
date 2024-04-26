#include <iostream>
using namespace std;

int minPartitions(string n) {
        int ans=0;
        for(int i=0;i<n.size();i++){
            int x = stoi(n.substr(i, 1));
            if(x>ans){
                ans=x;
            }
        }
        return ans;
    }