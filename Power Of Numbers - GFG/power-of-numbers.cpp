// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;
# define mod 1000000007

 // } Driver Code Ends
class Solution{
    public:
    //You need to complete this fucntion
    
    long long power(int n,int r)
    {
       //Your code here
    //   long ans =1.0;
    //   long nn = R;
       
    //   if(nn<0) nn=-1*nn;
       
    //   while(nn){
    //       if(nn%2==1){
    //           ans = ans*N;
    //           nn=nn-1;
    //       }
    //       else{
    //           N=N*N;
    //           nn = nn/2;
    //       }
    //   }
    //   if(R<0) return ((long)(1)/(long)(ans)%1000000007);
       
    //   else
    //   return ((long)(ans)%1000000007);
    
    if(r==0)return 1;
        long result=power(n,r/2);
        // you have to take modulo here as well
        // otherwise it might happen that it will go out of range of long variable.
        result=(result*result)%1000000007;
        if(r%2==0)return result%1000000007;
        return (result*n)%1000000007;
        
        
    }

};

// { Driver Code Starts.

// compute reverse of a number 
long long rev(long long n)
{
    long long rev_num = 0;
     while(n > 0) 
      { 
        rev_num = rev_num*10 + n%10; 
        n = n/10; 
      } 
      return rev_num;
}




int main()
{
    int T;
    cin>>T;//testcases
    
    while(T--)
    {
        long long N;
        cin>>N;//input N
        
        long long R = 0; 
        
        // reverse the given number n
        R = rev(N);
        Solution ob;
        //power of the number to it's reverse
        long long ans =ob.power(N,R);
        cout << ans<<endl;
    }
}  // } Driver Code Ends