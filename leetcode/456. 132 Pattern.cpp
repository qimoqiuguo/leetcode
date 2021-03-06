class Solution {
public:
    bool find132pattern(vector<int>& nums) {
        if(nums.size() <= 2) return false;
        int n = nums.size();
        int i = 0, j = 0, k = 0;
        while(i < n){
            while(i+1 < n && nums[i] >= nums[i+1])i++;
            j = i+1;
            while(j+1 < n && nums[j] <= nums[j+1]) j++;
            k = j+1;
            while(k < n){
                if(nums[i] < nums[k] && nums[j] > nums[k]) return true;
                k++;
            }
            i = j+1;
        }
        return false;
    }
};
