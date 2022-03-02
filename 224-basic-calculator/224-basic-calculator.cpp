class Solution {
public:
    int calculate(string s) {
//         +
//         -
//         )
//         (
//         int sum = 0;
//         int sign = 1;
//         stack <int> k;
//         for(int i = 0; i<=s.size(); i++){
//             switch(s[i]){
//                 case "+":
                    
//                     break;
//                 case "-":
                    
//                     break;
                    
//                 case "(":
                    
//                     break;
                    
//                 case ")":
                    
//                     break;
//             }
            
//         }
        
        stack<pair<int, int>> stk; //to store value calculated till now & sign
        long long int sum = 0, num = 0;
        int  sign = 1; //to store the current sign
        
        for(int i=0; i<s.size(); i++){
            if(isdigit(s[i])){
                //If it's a multidigit number
                while(i < s.size() && isdigit(s[i])){
                    num = num*10 + (s[i] - '0');
                    i++;
                } 
                i--;
                sum += num*sign;
                sign = 1; //reset sign
                num = 0;  //reset num
            }
            else if(s[i] == '('){
                stk.push(make_pair(sum, sign)); //push the calculated sum & sign
                //reset sum & sign
                sum = 0;
                sign = 1;
            
            }else if(s[i] == '+'){ 
                sign = 1; //sign is positive
            }else if(s[i] == '-'){
                sign = sign*(-1);  //toggle sign
            }else if(s[i] == ')'){
                sum = stk.top().first + (stk.top().second)*sum; //After finishing calculating inside bracket value, add / subtract it from the previously calculated sum
                stk.pop();
                
            }else continue; //in case of empty spaces
        }
        
        return sum;
        
    }
};