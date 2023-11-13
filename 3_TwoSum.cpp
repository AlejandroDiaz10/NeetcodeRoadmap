/*
Given an array of integers nums and an integer target, return indices of the two numbers such that they add up to target.

You may assume that each input would have exactly one solution, and you may not use the same element twice.

You can return the answer in any order.

Example 1:
Input: nums = [2,7,11,15], target = 9
Output: [0,1]
Explanation: Because nums[0] + nums[1] == 9, we return [0, 1].

Example 2:
Input: nums = [3,2,4], target = 6
Output: [1,2]

Example 3:
Input: nums = [3,3], target = 6
Output: [0,1]
*/

#include <unordered_map>
using namespace std;

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        // Edge case
        if (nums.size() < 2){
            return {};
        }

        unordered_map<int, int> map; // (num, index)

        for (int i = 0; i < nums.size(); i++){
            int diff = target - nums[i];

            if (map.find(diff) != map.end()){
                return {map[diff], i};
            }

            map[nums[i]] = i;
        }

        return {};
    }
};

// Both the time and space complexity of the solution is O(n), where n is the number of elements in the input array.