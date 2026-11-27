class Solution {
public:
    int matchPlayersAndTrainers(vector<int>& players, vector<int>& trainers) {
        sort(players.begin(),players.end());
        sort(trainers.begin(),trainers.end());
        int j=0,ans=0;
        for(int i=0;i<players.size();i++){
            while(j<trainers.size()){
                if(players[i]<=trainers[j]){
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