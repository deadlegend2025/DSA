class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        int n=nums.size();
        int count=0;
        int maxi=1;
        if(n==0)return 0;
        int smaller=INT_MIN;
        sort(nums.begin(),nums.end());
        for(int i=0;i<n;i++){
            if(nums[i]-1==smaller){
                count=count+1;
                smaller=nums[i];
            }
            else if(nums[i]!=smaller){
                count=1;
                smaller=nums[i];
            }
            maxi=max(maxi,count);
        }

       
return maxi;
        
    }
};