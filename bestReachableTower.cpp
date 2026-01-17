class Solution {
public:
    vector<int> bestTower(vector<vector<int>>& towers, vector<int>& center, int radius) {
        vector<vector<int>>v;
        for(auto x: towers){
            long long xc=x[0]-center[0];
            long long yc=x[1]-center[1];
            if(abs(xc)+abs(yc)<=radius){
                v.push_back({x[2],x[0],x[1]});
            }
        }
        sort(v.begin(),v.end(),greater());
        
        if(v.size()>=1)
        {
            int q=v[0][0];
            int x=INT_MAX;
            int y=INT_MAX;
            int i=0;
            while(i<v.size()&&v[i][0]==q){
                if(v[i][1]<x){
                    x=v[i][1];
                    y=v[i][2];
                }
                else if(v[i][1]==x){
                    y=min(y,v[i][2]);
                }
                i++;
            }
            return {x,y};
        }
        else
        return{-1,-1};
    }
};