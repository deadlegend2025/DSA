class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        int n=nums.size();
        int curr=0;
        int maxi=1;
        if(n==0)return 0;
        int lastsmaller=INT_MIN;
        sort(nums.begin(),nums.end());
        for(int i=0;i<n;i++){
            if(nums[i]-1==lastsmaller){
                curr+=1;
                lastsmaller=nums[i];
            }
            if(nums[i]!=lastsmaller){
                curr=1;
                lastsmaller=nums[i];
            }
                    maxi=max(maxi,curr);
        }

    return maxi;

        
    }
};