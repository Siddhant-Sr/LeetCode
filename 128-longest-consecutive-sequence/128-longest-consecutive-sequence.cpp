class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
//         vector<int> v;
//         sort(nums.begin(), nums.end());
//         int lengthOfSequence = 0;
//         int counter = nums[0];
        
//         for(int i =0; i<nums.size(); i++){
//             if(nums[i]==counter){
//                 lengthOfSequence++;
//                 counter++;
//             }
//             else{
//                 counter=nums[i];
//                 v.push_back(lengthOfSequence);
//                 lengthOfSequence = 0;
//                 i--;
                
//             }
//         }
//         int ans= 0;
//         for(int i =0; i<v.size(); i++){
//             ans = max(ans, v[i]);
//         }
        
        
//         return ans;
        
        
        if(!size(nums)) return 0;
	sort(begin(nums), end(nums));
	int longest = 0, cur_longest = 1;
	for(int i = 1; i < size(nums); i++) 
		if(nums[i] == nums[i - 1]) continue;
		else if(nums[i] == nums[i - 1] + 1) cur_longest++; // consecutive element - update current streak length
		else longest = max(longest, cur_longest), cur_longest = 1;  // reset current streak length
	return max(longest, cur_longest);
        
    }
};