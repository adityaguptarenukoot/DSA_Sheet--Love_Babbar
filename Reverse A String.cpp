// You are given a string s, and your task is to reverse the string.

// Examples:

// Input: s = "Geeks"
// Output: "skeeG"

// Input: s = "for"
// Output: "rof"

// Input: s = "a"
// Output: "a"


//solution


// User function Template for C++
class Solution {
  public:
    string reverseString(string& s) {
        // code here
        int left=0,right=s.size()-1;
        while(left<right){
            swap(s[left],s[right]);
            left++;
            right--;
        }
        return s;
    }
    
};
