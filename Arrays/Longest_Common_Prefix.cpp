/* LC 14 : Longest Common Prefix

NOTE: i got the logic right but i didnt have knowledge reserve enough to write the library functions 
on my own. 
overall the probleum is okay
*/

#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        if (strs.size() == 0){return "";}
        string prefix = strs[0];
        for(int i =1;i<strs.size();i++){
            while(strs[i].find(prefix) !=0){
                prefix = prefix.substr(0, prefix.length()-1); 
            }
        } return prefix;
    }  
};

int main(){
Solution sol;
vector<string> strs = {"flower","flow","flight"};
string result = sol.longestCommonPrefix(strs);
cout<<result;
    return 0;
}