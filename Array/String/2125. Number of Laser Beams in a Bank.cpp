//This solution in terms of time complexity is worst and not optimised

#include <iostream>;
using namespace std;

int numberOfBeams(vector<string>& bank) {
        int result=0;
        for (int i=0;i<bank.size()-1;i++){
            for(int j=0;j<bank[i].size();j++){
                if(bank[i][j]=='1'){
                    for(int k=i+1;k<bank.size();k++){
                        int x=0;
                        for(int l=0;l<bank[k].size();l++){
                            if(bank[k][l]=='1'){
                                result++;
                                x++;
                            }
                        }
                        if(x>0){
                            x=0;
                            break;
                        }
                    }
                }
            }
        }
        return result;
    }