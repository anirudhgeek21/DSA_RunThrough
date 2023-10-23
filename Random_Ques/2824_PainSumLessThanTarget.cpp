// Given a 0-indexed integer array nums of length n and an integer target, return the number of pairs (i, j) where 0 <= i < j < n and nums[i] + nums[j] < target.



#include <iostream>
using namespace std;

int PairSum(vector<int> nums ,int target,int sum=0){
    for (int i =0;i<nums.size();i++){
        for (int j=0;j<i;j++){
            if(nums[i]+nums[j]<target){
                sum++;
            }
        }
    }
    return sum;
}