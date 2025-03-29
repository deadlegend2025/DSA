class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
       int c=0;
       int n=nums.size();
       int m=0;
       for(int i=0;i<n;i++){
        if(nums[i]==1){
            c++;
            m=max(m,c);
        }
        if(nums[i]==0){
            c=0;
        }

       }
       return m;
        
    }
};