class Solution {
public:
    bool canJump(vector<int>& nums) {
        int n=nums.size();
        int maxstep=0;
        for(int i=0;i<n;i++){
            if(maxstep<i){
                return false;
            }
            maxstep=max(maxstep,i+nums[i]);
        }
        return true;
    }
};