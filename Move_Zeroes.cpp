class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int j = -1;
        
        for (int i = 0; i < nums.size(); i++) {
            if (nums[i] == 0) {
                j = i;
                break;
            }
        }
    
        
        if (j == -1){
            for(int i=0;i<nums.size();i++){
                cout<<nums[i]<<" ";
            }
            cout<<endl;
        }
        else{
            for (int i = j + 1; i < nums.size(); i++) {
                if (nums[i] != 0) {
                    swap(nums[i], nums[j]);
                    j++;
                }
            }
            
            for(int i=0;i<nums.size();i++){
                cout<<nums[i]<<" ";
            }
            cout<<endl;
        }
    }
};