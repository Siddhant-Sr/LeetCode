class Solution {
public:
    bool increasingTriplet(vector<int>& a) {
     int n = a.size();
        if(n<3){
            return false;
        }
        int left = INT_MAX;
        int med = INT_MAX;
        
        
        for(int i=0;i<n;i++){
            if(med<a[i])
                return true;
            
           else if(a[i]<left)
                left=a[i];
            
            else if(left<a[i] && a[i]<med)
                med =a[i];
        }
        
        
        return false;
    }
};