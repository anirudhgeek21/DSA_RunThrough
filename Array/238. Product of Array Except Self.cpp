//try it without using division 

#include <iostream>
using namespace std;

vector<int> productExceptSelf(vector<int>& nums) {
        vector<int> ans;
        int mul = 1;
        int zero = 0;
        for (int j = 0; j < nums.size(); j++) {
            if (nums[j] == 0) {
                zero++;
            } else {
                mul *= nums[j];
            }
        }
        for (int i = 0; i < nums.size(); i++) {
            if (zero > 1) {
                ans.push_back(0);
            } else if (zero == 1) {
                if (nums[i] != 0) {
                    ans.push_back(0);
                } else {
                    ans.push_back(mul);
                }
            } else {
                if (nums[i] != 0) {
                    ans.push_back(mul / nums[i]);
                } else {
                    ans.push_back(0);
                }
            }
        }
        return ans;
    }