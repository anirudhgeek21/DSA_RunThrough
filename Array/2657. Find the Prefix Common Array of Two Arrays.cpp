#include <iostream>
using namespace std;

vector<int> findThePrefixCommonArray(vector<int>& A, vector<int>& B) {
        vector<int> result;
        for(int i=0;i<A.size();i++){
            int x =0;
            for(int j=0;j<=i;j++){
                for(int k=0;k<=i;k++){
                    if(A[j]==B[k]){
                        x++;
                    }
                }
            }
            result.push_back(x);
        }
        return result;
    }