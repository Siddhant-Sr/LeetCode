class Solution {
public:
    	int startingIndex(vector<int>& nums, int target){ // returns index of first occurance of target
        int start=0; int end= nums.size()-1;
        int potentialTarget=-1;
        
        if(start>end){ //nums is empty
            return -1;
        }
        
        while(start<=end){
            int mid= start+ (end-start)/2;
            
            if(target < nums[mid]){ // to go left half
                end=mid-1;
            }
            else if(target > nums[mid]){ // go to right half
                start= mid+1;
            }
            else if( target== nums[mid]){ // element found, but dont stop searching
                // As we need lowest possible index of target, so we will search in left side

                potentialTarget= mid; // But as this index can be the lowest index, so we will store it in
                end= mid-1;
            }
        }
        return potentialTarget;
    }
    
    int endingIndex(vector<int>&  nums, int target){ // returns index of last occurance of tarhet
        int start=0; int end= nums.size()-1;
        int potentialTarget= -1;
        
        if(start>end){ //nums is empty
            return -1;
        }
        
        while(start<=end){
            int mid= start+(end-start)/2;
            
            if(target < nums[mid]){ // to go left half
                end=mid-1;
            }
            else if(target > nums[mid]){ // go to right half
                start= mid+1;
            }
            else if( target== nums[mid]){ // element found, but dont stop searching
                // As we need highest possible index of target, so we will search in right side
                
                potentialTarget= mid;  // But as this index can be the highest index, so we will store it in
                start= mid+1;
            }
        }
        return potentialTarget;
    }
    vector<int> searchRange(vector<int>& nums, int target) {
          
        vector<int> ans;
        int left= startingIndex(nums, target);
        int right= endingIndex(nums, target);
        
        ans.push_back(left);
        ans.push_back(right);
        
        return ans;
    }
};