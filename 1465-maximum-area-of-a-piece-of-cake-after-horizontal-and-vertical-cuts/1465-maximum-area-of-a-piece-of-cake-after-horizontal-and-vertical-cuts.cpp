class Solution {
public:
    int maxArea(int h, int w, vector<int>& horizontalCuts, vector<int>& verticalCuts) {
    sort(horizontalCuts.begin(), horizontalCuts.end());
        horizontalCuts.push_back(h);
    sort(verticalCuts.begin(), verticalCuts.end());
        verticalCuts.push_back(w);
            
            int m = verticalCuts.size();
        int n = horizontalCuts.size();
        
        int maxHorizontalCuts = horizontalCuts[0];
        int maxVerticalCuts = verticalCuts[0];
        
        for(int i = 1; i<m; i++){
            int diff = verticalCuts[i]-verticalCuts[i-1];
            maxVerticalCuts = max(diff, maxVerticalCuts);
        }
        
        for(int i = 1; i<n; i++){
            int diff = horizontalCuts[i]-horizontalCuts[i-1];
            maxHorizontalCuts = max(diff, maxHorizontalCuts);
        }
        int mod =  1e9+7;
        //  long product =maxHorizontalCuts*maxVerticalCuts;
        // return product%d;
        return (int)((long)maxHorizontalCuts * maxVerticalCuts % mod);
            
    }
};