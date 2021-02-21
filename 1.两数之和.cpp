/*
 * @lc app=leetcode.cn id=1 lang=cpp
 *
 * [1] 两数之和
 */

// @lc code=start
#include<vector>
using namespace std;

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> hashtable;
        for (int i = 0; i < nums.size(); ++i) {
            auto it = hashtable.find(target - nums[i]);
            if (it != hashtable.end()) {//查到最后之前就有了
                return {it->second, i};//返回哈希表序号和i【叫法不一定对】
            }
            hashtable[nums[i]] = i;//没有则把该对数存进去
        }
        return {};
    }
};
// @lc code=end

