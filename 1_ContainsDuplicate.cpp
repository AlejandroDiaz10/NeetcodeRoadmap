/*
Given an integer array nums, return true if any value appears at least twice in the array, and return false if every element is distinct.

Example 1:
Input: nums = [1,2,3,1]
Output: true

Example 2:
Input: nums = [1,2,3,4]
Output: false

Example 3:
Input: nums = [1,1,1,3,3,4,3,2,4,2]
Output: true
*/


#include <unordered_map>
using namespace std;

class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        unordered_map<int, int> map;

        for (int num : nums){
            if (map[num] == 1){
                return true;
            }
            map[num] = 1;
        }

        return false;
    }
};

// Both the time and space complexity of the solution is O(n), where n is the number of elements in the input array.

// Why using unordered map?
// It is part of the C++ Standard Library (introduced in C++11) and is the standard way to implement a hash table in C++.
// The average time complexity for inserting, deleting, and finding elements in an unordered_map is O(1) 