class Solution {
public:
   
//         int sum = 0, size = boxTypes.size();
//         int ans = 0;
//         for(int i =0; i<= size-1; i++){
//             sum += boxTypes[i][0];
//             ans += boxTypes[i][0] * boxTypes[i][1];
//         }
//         if(sum == truckSize)
//               return ans;
        
//         else{
//              for(int i =0; i<= size-1; i++){
                 
                 
                 
//              }
//         }
    
    static bool compare(vector<int> a, vector<int> s){
		if(a[1] > s[1])
			return true;
		else
			return false;
	}

	int maximumUnits(vector<vector<int>>& boxTypes, int truckSize) {
		
		// sorting array
		sort(boxTypes.begin(), boxTypes.end(), compare);
		int unit = 0;
    
		for(int i=0; i<boxTypes.size(); i++){
			if(boxTypes[i][0] < truckSize){
				unit += boxTypes[i][0] * boxTypes[i][1]; //take all the boxes and addd the units
				truckSize -= boxTypes[i][0];			 //decrement the truckSize by numberOfBoxesi
			}
			else {
				unit += truckSize * boxTypes[i][1];     //take the boxes equal to remaining size and add the units
				break;
			}
		}
		return unit;
    }
    
};