#include <iostream>
using namespace std;

vector<vector<int>> sortTheStudents(vector<vector<int>>& score, int k) {
        vector<int> a;
        vector<vector<int>> result;
        for(int i=0;i<score.size();i++){
            a.push_back(score[i][k]);
        }
        sort(a.begin(), a.end());
        for(int x=0; x<score.size() ;x++){
            for(int i=0;i<score.size();i++){
                int max = *max_element(a.begin(), a.end());
                for(int j=0;j<score[i].size();j++){
                    if(score[i][j] == max){
                        result.push_back(score[i]);
                        auto it = find(a.begin(), a.end(), max);
                        if (it != a.end()) {
                            a.erase(it); 
                        }
                        break;
                    }
                }
            }
            if(result.size()==score.size()){
                break;
            }
        }
        return result;
    }