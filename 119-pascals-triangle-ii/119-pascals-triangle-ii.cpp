class Solution {
public:
//   int factorial(int n) {
//     if(n<=1){
//         return 1;
//     }
//      long int ans = n*factorial(n-1);
//     return ans;
// }
 
// int nCr(int n, int r) {
//     return factorial(n) / (factorial(r) * factorial(n - r));
// }
    vector<int> getRow(int rowIndex) {
    //     vector<int> result;
    //     for(int i=0; i<=rowIndex; i++){
    //         int ans = nCr(rowIndex, i);
    //         result.push_back(ans);
    //     }
    // return result;
    // }
          vector<int> result;
        long int temp = rowIndex;
        int a=rowIndex, b=1;
        for(int i=0;i<rowIndex+1;i++){
            if(i==0 || i==rowIndex) result.push_back(1);
            else {
                result.push_back(temp);
                temp = (temp*(--a))/++b; 
            }
        }
        return result;
    }
    
};