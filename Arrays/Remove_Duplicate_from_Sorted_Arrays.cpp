/* LC 26 : Remove Duplicates from Sorted Array

Note: it use simple for loop rest is the magic of logic building.

*/

#include <bits/stdc++.h>
using namespace std;

int removeDuplicates(vector<int>& nums) {
    int k = 1;
    for (int i = 1; i < nums.size(); i++) {
        if (nums[i] != nums[k-1]) {
            nums[k++] = nums[i];
        }
    }
    return k;
}

int main() {
    vector<int> nums = {1, 1, 2, 3, 3};
    int k = removeDuplicates(nums);
    cout << "k = " << k << endl;
    cout << "Array: ";
    for (int i = 0; i < k; i++) cout << nums[i] << " ";
    cout << endl;
    return 0;
}