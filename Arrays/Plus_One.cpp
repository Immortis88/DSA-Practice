/*
LC 66: Plus One

NOTE: you should write or build logic and try to dry run it and find loopholes inside it 
- like if all were 9 then we have to insert 1 inside array
*/

#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        for (int i = digits.size() - 1; i >= 0; i--) {
            if (digits[i] < 9) {
                digits[i]++;
                return digits;
            } else {
                digits[i] = 0;
            }
        }
        digits.insert(digits.begin(), 1);
        return digits;
    }
};

int main() {
    Solution sol;

    vector<int> d1 = {1, 2, 3};
    vector<int> d2 = {1, 2, 9};
    vector<int> d3 = {9, 9, 9};

    auto print = [](vector<int>& v) {
        cout << "[";
        for (int i = 0; i < v.size(); i++) {
            cout << v[i];
            if (i < v.size() - 1) cout << ", ";
        }
        cout << "]" << endl;
    };

    vector<int> r1 = sol.plusOne(d1);
    vector<int> r2 = sol.plusOne(d2);
    vector<int> r3 = sol.plusOne(d3);

    print(r1);  // [1, 2, 4]
    print(r2);  // [1, 3, 0]
    print(r3);  // [1, 0, 0, 0]

    return 0;
}