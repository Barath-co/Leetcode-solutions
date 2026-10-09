class Solution {
public:
    int isWinner(vector<int>& player1, vector<int>& player2) 
    {
        int n = player1.size();
        int l1=-1;
        if(player1[0]==10) l1 = 0; 
        int l2 = -1;
        if(player2[0]==10) l2 = 0;
        int s1 = player1[0];
        int s2 = player2[0];
        for(int i=1;i<n;i++)
        {
            if(i-l1<=2 && l1!=-1)
            {
                s1+=(player1[i]*2);
            }
            else
            {
                s1+=player1[i];
            }
            if(i-l2<=2 && l2!=-1)
            {
                s2+=(player2[i]*2);
            }
            else
            {
                s2+=player2[i];
            }
            if(player1[i]==10) l1 = i;
            if(player2[i]==10) l2 = i;
        }
        if(s1==s2) return 0;
        else if(s1>s2) return 1;
        return 2;
    }
//please upvote...
};