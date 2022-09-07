class Solution {
public:
    
    long long dp[4001][1001];
    long long count(int currentVertex, int target, int k){
        if(k==0 && currentVertex==target)
            return 1;
        
        if(k==0)
            return 0;
        
        if(dp[currentVertex+1000][k]!=-1){
            return dp[currentVertex+1000][k];
        }
        
        long long a = count(currentVertex+1, target, k-1);
        long long b= count(currentVertex-1, target,k-1);
        
        return dp[currentVertex+1000][k]=(b+a)%1000000007;
        
    }
    int numberOfWays(int startPos, int endPos, int k) {
        
        for(int i = 0; i<=3001; i++){
            for(int j =0; j<=k;j++){
                dp[i][j]=-1;
            }
        }
    long long ans = count(startPos, endPos, k);
        return ans%1000000007;
    }
};