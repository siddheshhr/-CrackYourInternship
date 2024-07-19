class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {
        vector<int>ans;
        for(auto i:nums){//trick of having 1 to n you can follow something similar to linked list
            if(nums[abs(i) -1 ] < 0)ans.push_back(abs(i));
            nums[abs(i)-1] *= -1;
        }
        return ans;
    }
};
