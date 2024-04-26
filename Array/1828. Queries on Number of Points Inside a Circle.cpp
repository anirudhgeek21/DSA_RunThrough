#include <iostream>
using namespace std;

vector<int> countPoints(vector<vector<int>>& points, vector<vector<int>>& queries) {
        vector<int> result;
        for (int i = 0; i < queries.size(); i++) {
            int total = 0;
            for (int j = 0; j < points.size(); j++) {
                if (pow((points[j][0] - queries[i][0]), 2) + pow((points[j][1] - queries[i][1]), 2) <= pow(queries[i][2], 2)) {
                    total++;
                }
            }
            result.push_back(total);
        }
        return result;
    }