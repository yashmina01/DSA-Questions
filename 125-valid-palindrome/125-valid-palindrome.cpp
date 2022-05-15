class Solution {
public:  
    bool validCharacter(char chr){
        if( (chr>='a' && chr<='z') || (chr>='A' && chr<='Z') || (chr>='0' && chr<='9'))
            return true;
        else return false;
    } 
    
    char toLower(char chr){   
    if( (chr >='a' && chr <='z') || (chr>='0' && chr<='9'))
            return chr;
    else chr = chr + 32;
            return chr;
    }
    
    bool checkPalindrome(string s){
        
        int start = 0,end = s.length()-1;
    while(start <= end){
        if(s[start] != s[end]){
        return false;}

        else {
            start++;
            end--;
        }        
    }
        return true;
    }
        
    bool isPalindrome(string s) {
        string temp = "";
        
        for(int i=0;i<s.length();i++){
        if(validCharacter(s[i]))
            temp.push_back(s[i]);
        }
        
        for(int j=0;j<temp.size();j++){
            temp[j] = toLower(temp[j]);
        }        
       return checkPalindrome(temp);
    }
};