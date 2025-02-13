class Solution {
public:
    vector<int> smallerNumbersThanCurrent(vector<int>& nums) {
        int n=nums.size();
        vector<int>ans;
        unordered_map<int,int>mp;
        vector<int>temp(nums.begin(),nums.end());
        sort(temp.begin(),temp.end());
        for(int i=0;i<temp.size();i++){
            if(mp.find(temp[i])==mp.end()){
                mp[temp[i]]=i;
            }
        }
        for(int i=0;i<nums.size();i++){
            ans.push_back(mp[nums[i]]);

        }

        return ans;
    }
};