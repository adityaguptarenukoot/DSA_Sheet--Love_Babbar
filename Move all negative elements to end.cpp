// Given an unsorted array arr[ ] having both negative and positive integers. The task is to place all negative elements at the end of the array without changing the order of positive elements and negative elements.

// Note: Don't return any array, just in-place on the array.

// Examples:

// Input : arr[] = [1, -1, 3, 2, -7, -5, 11, 6 ]
// Output : [1, 3, 2, 11, 6, -1, -7, -5]
// Explanation: By doing operations we separated the integers without changing the order.
// Input : arr[] = [-5, 7, -3, -4, 9, 10, -1, 11]
// Output : [7, 9, 10, 11, -5, -3, -4, -1]

// solution

class Solution {
public:
    void segregateElements(vector<int>& arr) {
        int n = arr.size();
        vector<int> temp;
        temp.reserve(n);

        
        for (int x : arr) {
            if (x >= 0) temp.push_back(x);
        }

       
        for (int x : arr) {
            if (x < 0) temp.push_back(x);
        }

        
        for (int i = 0; i < n; i++) {
            arr[i] = temp[i];
        }
    }
};
