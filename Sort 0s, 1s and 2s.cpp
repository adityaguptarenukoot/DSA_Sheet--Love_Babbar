// Given an array arr[] containing only 0s, 1s, and 2s. Sort the array in ascending order.
// Note: You need to solve this problem without utilizing the built-in sort function.

// Examples:

// Input: arr[] = [0, 1, 2, 0, 1, 2]
// Output: [0, 0, 1, 1, 2, 2]
// Explanation: 0s, 1s and 2s are segregated into ascending order.
// Input: arr[] = [0, 1, 1, 0, 1, 2, 1, 2, 0, 0, 0, 1]
// Output: [0, 0, 0, 0, 0, 1, 1, 1, 1, 1, 2, 2]
// Explanation: 0s, 1s and 2s are segregated into ascending order.

// solution


class Solution {
  public:
    void sort012(vector<int>& arr) {
        
        // code here
        int c0=0, c1=0, c2=0;
        
        for (int i = 0; i< arr.size(); i++){
            if (arr[i]==0){
                c0++;
            }
            else if (arr[i]==1)
             c1++;
             
            else
             c2++;
        }
        
        int idx=0;
        
       for (int i=0; i<c0; i++)
        arr[idx++]=0;
       for (int i=0; i<c1; i++)
        arr[idx++]=1;
       for (int i=0; i<c2; i++)
        arr[idx++]=2;
    }
};
