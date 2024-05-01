#include <iostream>
using namespace std;

vector<vector<int>> onesMinusZeros(vector<vector<int>>& grid) {
        vector<vector<int>> result;
        int m = grid.size();
        int n = grid[0].size();
        vector<int> row_one(m, 0);
        vector<int> col_one(n, 0);
        
        for(int i = 0; i < m; i++) {
            for(int j = 0; j < n; j++) {
                if(grid[i][j] == 1) {
                    row_one[i]++;
                    col_one[j]++;
                }
            }
        }

        for(int i = 0; i < m; i++) {
            vector<int> row_result;
            for(int j = 0; j < n; j++) {
                int ans = row_one[i] + col_one[j] - (n - row_one[i]) - (m - col_one[j]);
                row_result.push_back(ans);
            }
            result.push_back(row_result);
        }
        
        return result;
    }