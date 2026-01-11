class Solution {
public:
    int residuePrefixes(string s) {
        int res=0;
        vector<bool>v(26,false);
        int curr=0;
        for(int i=0;i<s.size();i++){
            if(v[s[i]-'a']==false){
                v[s[i]-'a']=true;
                curr++;
            }
            if(curr==(i+1)%3){
                res++;
            }
        }
        return res;
    }
};