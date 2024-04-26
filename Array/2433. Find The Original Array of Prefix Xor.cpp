#include <iostream>
using namespace std;

vector<int> findArray(vector<int>& pref) {
        
        for(int i=0;i<pref.size();i++){
            if(i==0){
                pref[i] = pref[i];
            }else if(i==(pref.size()-1)){
                pref[i]=(pref[i] ^ pref[i-1]);
            }else{
                pref[i]=(pref[i] ^ pref[i-1]);
            }
        }
        return pref;
    }