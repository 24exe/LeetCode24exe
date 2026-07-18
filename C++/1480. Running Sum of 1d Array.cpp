#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    vector<int> runningSum(vector<int>& nums) {
        vector<int> solution(nums.size());
        solution[0] = nums[0];
        for(int i = 1; i < nums.size(); i++){
            solution.at(i) = nums.at(i) + solution[i - 1];
        }
        return solution;
    }

};