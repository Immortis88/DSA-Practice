/* LC 1 : Two Sum

Notes: Well it was fairly simple but i did it after long period of stagnation i got the syntax wrong on first run.
*/

#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        for(int i =0; i<nums.size();i++){
           for(int j = i+1; j<nums.size();j++){
                if(target == (nums[i]+nums[j])){
                    return {i,j};
                }
            }
        } return {}; // its failsafe for empty result.
    }
};

int main(){
    Solution sol;
    vector<int> nums = {2, 7, 11, 15};
    int target = 9;
    vector<int> result = sol.twoSum(nums, target);
    cout<< "[" << result[0] << ", " << result[1] << "]";
    return 0;
}