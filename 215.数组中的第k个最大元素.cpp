/*
 * @lc app=leetcode.cn id=215 lang=cpp
 *
 * [215] 数组中的第K个最大元素
 */

// @lc code=start
// #include <queue>
class Solution {
public:
    int findKthLargest(vector<int>& nums, int k) {
        //利用最小堆实现Top K问题
        priority_queue<int, vector<int>, greater<int>> heap;
        for (int i=0;i<nums.size();i++){
            if(heap.size()<k){
                heap.push(nums[i]);
            }
            else{
                if(heap.top()<nums[i]){
                    heap.pop();
                    heap.push(nums[i]);
                }
                else continue;
            }
            
        }
        return heap.top();
        
    }
};
// @lc code=end

