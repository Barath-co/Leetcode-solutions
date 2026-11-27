
class Solution {
public:
    int findContentChildren(vector<int>& g, vector<int>& s) {

        sort(g.begin(),g.end());
        sort(s.begin(),s.end());

        int j=0,ans=0;

        for(int i=0;i<g.size();i++){

            
            while(j<s.size()){

            if(g[i]<=s[j]){
                j++;
                ans++;
                break;
            }
            else{
                j++;
                
            }
        }
        }

        return ans;
    }
};
