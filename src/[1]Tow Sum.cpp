//
// Created by mzk on 2021/04/18.
//

//Given an array of integers nums and an integer target, return indices of the t
//wo numbers such that they add up to target.
//
// You may assume that each input would have exactly one solution, and you may n
//ot use the same element twice.
//
// You can return the answer in any order.
//
//
// Example 1:
//
//
//Input: nums = [2,7,11,15], target = 9
//Output: [0,1]
//Output: Because nums[0] + nums[1] == 9, we return [0, 1].
//
//
// Example 2:
//
//
//Input: nums = [3,2,4], target = 6
//Output: [1,2]
//
//
// Example 3:
//
//
//Input: nums = [3,3], target = 6
//Output: [0,1]
//
//
//
// Constraints:
//
//
// 2 <= nums.length <= 103
// -109 <= nums[i] <= 109
// -109 <= target <= 109
// Only one valid answer exists.
//
// Related Topics Array Hash Table
// 👍 20422 👎 721

#include <vector>
#include <unordered_map>
#include <stdexcept>

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, size_t> hashmap;
        for(int i = 0; i < nums.size(); i++) {
            int num = nums[i];
            if(hashmap.count(target - num)) {
                int j = hashmap[target - num];
                vector<int> res = {i, j};
                return res;
            } else {
                hashmap.insert({ num, i});
            }
        }
        return vector<int>();
    }
};
//leetcode submit region end(Prohibit modification and deletion)
