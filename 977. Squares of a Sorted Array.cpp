class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        vector<int> result(nums.size(), 0);
        int k = nums.size() - 1;
        int rightPointer = nums.size() - 1;
        int leftPointer = 0;
        while (rightPointer >= leftPointer) {
            if (nums[rightPointer] * nums[rightPointer] >= nums[leftPointer] * nums[leftPointer]) {
                result[k--] = nums[rightPointer] * nums[rightPointer];
                rightPointer--;
            } else {
                result[k--] = nums[leftPointer] * nums[leftPointer];
                leftPointer++;
            }
        }
        return result;
    }
};