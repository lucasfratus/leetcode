#include <set>

class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        set<int> S;
        for (auto i : nums) {
            if (S.find(i) != S.end()) {
                return true;
            } else {
                S.insert(i);
            }
        }
        return false;
    }
};