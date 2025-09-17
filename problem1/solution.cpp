#include <unordered_map>

using namespace std;

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int,int> nums_i;

        for (int i = 0; i < nums.size(); i++) {
            int diferenca = target - nums[i];

            if (nums_i.find(diferenca) != nums_i.end()) {
                int j = nums_i[diferenca];
                return { min(i,j), max(i, j) };
            }
        nums_i[nums[i]] = i;
        }
        return {};
    };
};

