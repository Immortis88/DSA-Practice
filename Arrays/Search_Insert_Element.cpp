/*
Lc 35 : Search Insert Element

NOTE : you cant just do if condition and check for less than equal to or greater than simultaneously 
- check always for out of bound condition like- nums.size()-1
-  
*/

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int left = 0;
        int right = nums.size() - 1;

        while (left <= right) {
            int mid = left + (right - left) / 2;

            if (nums[mid] == target) {
                return mid;
            } else if (nums[mid] > target) {
                right = mid - 1;
            } else {
                left = mid + 1;
            }
        }

        return left;
    }
};

int main() {
    Solution sol;

    vector<pair<vector<int>, int>> tests = {
        {{1, 3, 5, 6}, 5},   
        {{1, 3, 5, 6}, 2},   
        {{1, 3, 5, 6}, 7},   
        {{1, 3, 5, 6}, 0},   
        {{1},          1},   
    };

    for (auto& [nums, target] : tests) {
        cout << "target=" << target << " -> index " << sol.searchInsert(nums, target) << "\n";
    }

    return 0;
}