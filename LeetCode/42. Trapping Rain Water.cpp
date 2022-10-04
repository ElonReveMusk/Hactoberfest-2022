class Solution {
public:
    vector<int> left(vector<int> & h){
        vector<int> ans(h.size());
        ans[0] = h[0];
 
        for(int i=1;i<h.size();i++){
            ans[i] = max(h[i],ans[i-1]);
        }
        return ans;
    }
    vector<int> right(vector<int> & h){
        vector<int> ans(h.size());
        ans[h.size()-1] = h[h.size()-1];
 
        for(int i=h.size()-2;i>=0;i--){
            ans[i] = max(h[i],ans[i+1]);
        }
        return ans;
    }
    int trap(vector<int>& h) {
        vector<int> l = left(h);
        vector<int> r = right(h);
        int ans=0;
        for(int i=0;i<h.size();i++){
            if(min(l[i],r[i])>h[i]){
                ans += min(l[i],r[i])-h[i];
            }
        }
            
        return ans;
    }
};