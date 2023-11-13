/*
Given two strings s and t, return true if t is an anagram of s, and false otherwise.

An Anagram is a word or phrase formed by rearranging the letters of a different word or phrase, typically using all the original letters exactly once.

Example 1:
Input: s = "anagram", t = "nagaram"
Output: true

Example 2:
Input: s = "rat", t = "car"
Output: false
*/

#include <string>
#include <unordered_map>
using namespace std;

class Solution {
public:
    bool isAnagram(string s, string t) {
        // Edge case
        if (s.length() != t.length()){
            return false;
        }

        unordered_map<char, int> sMap, tMap;
        
        for (char c : s){
            sMap[c] += 1;
        }

        for (char c : t){
            tMap[c] += 1;
        }

        return sMap == tMap;
    }
};

// Both the time and space complexity of the solution is O(n), where n is the number of elements in the input array.

// An alternative solution could be to sort both the strings and then compare them. 
// The time complexity of this solution would be O(nlogn) and the space complexity would be O(1).