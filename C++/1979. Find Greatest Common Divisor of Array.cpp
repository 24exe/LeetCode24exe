#include <iostream>
#include <vector>
#include <numeric>

using namespace std;

class Solution {
public:
    int findGCD(vector<int>& nums) {
        int max = 0;
        int min = 1001; // 1 <= nums[i] <= 1000 
        for(int i = 0; i < nums.size(); i++){
            if(nums[i] < min) min = nums[i];
            if(nums[i] > max) max = nums[i];
        }
        return std::gcd(min, max);
    }
};