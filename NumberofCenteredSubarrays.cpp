class Solution {
public:
    int centeredSubarrays(vector<int>& nums) {
        int res=0;
        for(int i=0;i<nums.size();i++){
            unordered_map<int,bool>m;
            long long sum=0;
            for(int j=i;j<nums.size();j++){
                m[nums[j]]=true;
                sum+=nums[j];
                if(m[sum]==true){
                    res++;
                }
            }
        }
        return res;
    }
};