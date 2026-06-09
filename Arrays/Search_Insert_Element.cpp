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
        {{1, 3, 5, 6}, 5},   // expected: 2
        {{1, 3, 5, 6}, 2},   // expected: 1
        {{1, 3, 5, 6}, 7},   // expected: 4
        {{1, 3, 5, 6}, 0},   // expected: 0
        {{1},          1},   // expected: 0
    };

    for (auto& [nums, target] : tests) {
        cout << "target=" << target << " -> index " << sol.searchInsert(nums, target) << "\n";
    }

    return 0;
}