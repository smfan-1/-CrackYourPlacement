class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        map<int,int> mp;
        mp[0]=1;
        int presum=0;int count=0;
        for(int i=0;i<nums.size();i++){
            presum+=nums[i];
            int removed=presum-k;
            count+=mp[removed];
            mp[presum]++;
        }
        return count;
    }
};