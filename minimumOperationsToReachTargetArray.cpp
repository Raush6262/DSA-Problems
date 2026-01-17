class Solution {
public:
    int minOperations(vector<int>& nums, vector<int>& target) {
        unordered_map<int,bool>m;
        int n=nums.size();
        int i=0;
        for(auto x:nums){
            if(nums[i]!=target[i]){
                m[nums[i]]=true;
            }
            i++;
        }
        return m.size();
    }
};