class Solution {
public:
    int helper(vector<int> &vec){
        int low =0;
        int high = vec.size()-1;
       
        
        while(low<=high){
             int mid = (low + high)/2;
            if(vec[mid]>0)
                low = mid+1;
            
            else
                high = mid-1;
        }
        
        return vec.size()-1-high;
    }
    int countNegatives(vector<vector<int>>& grid) {
        // int count =0;
        //     for(int i=0; i<grid.size(); i++){
        //         count += helper(grid[i]);
        //     }
        // return count;
    
    
        int i=0,j=grid[0].size()-1;
        int count = 0,size=grid.size();
        
        while(i>=0 && i<grid.size() && j>=0 && j<grid[0].size()) //keeping the search inside the array bounds
        {
            if(grid[i][j]<0)
            {
                count = count+size; // size is no of rows below the element including the present row.
                j--; // moving the pointer to the left.
            }
            else
            {
            	i++; //moving the pointer down.
            	size--;//decrementing "size" by 1 as we move down.
            }
            
        }
        return count;
    }
};