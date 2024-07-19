class Solution {
public:
    int subarraysDivByK(vector<int>& nums, int k) {
       int n=nums.size();
       unordered_map<int,int>mp;
       int ps=0;int ans=0;
       mp[0]=1;
       for(int i=0;i<n;i++){
        ps = (ps+nums[i] % k + k) % k;//handling negative nos tricky part here
        ans += mp[ps];
        mp[ps]++;
       }
       return ans;
    }
};
