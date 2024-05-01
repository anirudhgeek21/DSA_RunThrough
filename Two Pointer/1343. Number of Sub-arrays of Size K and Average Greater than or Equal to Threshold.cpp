#include <iostream>
using namespace std;

int numOfSubarrays(vector<int>& arr, int k, int threshold) {
        int left = 0;
        int right = 0;
        int sum = 0;
        int count = 0;
        
        while (right < arr.size()) {
            sum += arr[right];
            if (right - left + 1 > k) {
                sum -= arr[left];
                left++;
            }
            if (right - left + 1 == k && (sum / k) >= threshold) {
                count++;
            }
            right++;
        }
        return count;
    }