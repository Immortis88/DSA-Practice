/*
LC 88: Merge Sorted Array 

NOTE: in this probleum we see the pattern to use what's given to us and the underlining hint to use the exact space 
given for the probleum.
- we just have to think diffrently and use the given m and n values as they make it so much easier to compare 
-you just have to keep patience and analyse all hints or constraint or things given in question. 
*/

#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        int i = m - 1;
        int j = n - 1;
        int k = m + n - 1;

        while (i >= 0 && j >= 0) {
            if (nums1[i] > nums2[j])
                nums1[k--] = nums1[i--];
            else
                nums1[k--] = nums2[j--];
        }

        while (j >= 0)
            nums1[k--] = nums2[j--];
    }
};

void printVector(vector<int>& v) {
    for (int x : v) cout << x << " ";
    cout << endl;
}

int main() {
    Solution sol;

    // Test 1
    vector<int> nums1 = {1,2,3,0,0,0};
    vector<int> nums2 = {2,5,6};
    sol.merge(nums1, 3, nums2, 3);
    printVector(nums1); // 1 2 2 3 5 6

    // Test 2
    vector<int> nums1b = {1};
    vector<int> nums2b = {};
    sol.merge(nums1b, 1, nums2b, 0);
    printVector(nums1b); // 1

    // Test 3
    vector<int> nums1c = {0};
    vector<int> nums2c = {1};
    sol.merge(nums1c, 0, nums2c, 1);
    printVector(nums1c); // 1

    return 0;
}