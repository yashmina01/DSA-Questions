// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
class Solution {
  public:

    int checkRedundancy(string s) {
        // code here
        stack<char> stack;
        
        for(int i=0;i<s.size();i++){
            
            char ch = s[i];
            
            if(s[i] == '(' || s[i] == '+' || s[i] == '-' || s[i] == '*' || s[i] == '/'){
                stack.push(ch);
                
            }
            else {  //ya toh '(' ya lower alphabets
                if(ch == ')'){
                    
                    bool isRedundant = 1;
                    while(stack.top() != '('){
                    char top = stack.top();
                        
                        if(top == '+' || top == '-' || top == '*' || top == '/'){
                            isRedundant = 0;
                        }
                        stack.pop();
                    }
                    if(isRedundant) //ya '(' mila hi nhi ya fhir koi operator nhi mila
                    return 1;    //ya '(' mila hi nhi and fhir koi operator nhi mila
                    
                    stack.pop();    
                }
            }
            
        }
        return 0;
    }
};


// { Driver Code Starts.

int main(){
    int t;
    scanf("%d",&t);
    while(t--){
        
    
        string s; 
        cin>>s;
        
        Solution obj;
        int res = obj.checkRedundancy(s);
        
        cout<<res<<endl;
        
    }
}
  // } Driver Code Ends