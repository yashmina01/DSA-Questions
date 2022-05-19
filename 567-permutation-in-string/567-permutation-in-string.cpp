class Solution {
public:
    bool checkEqual(vector<int> count1, vector<int> count2){
        
        for(int i=0;i<26;i++){
            if(count1[i] != count2[i])
                return 0;
        }
        return 1;
    }
    bool checkInclusion(string s1, string s2) {
        
        vector<int> count1(26,0);
        for(int i=0;i<s1.length();i++){
            int number = s1[i] - 'a';
            count1[number]++;
        }
        
        int i=0;
        vector<int> count2(26,0);
        int windowSize = s1.length();
        while(i < windowSize && i < s2.length()){
            int index1 = s2[i] - 'a';
            count2[index1]++;
            i++;
        }
        
        if(checkEqual (count1 , count2))
            return 1;
        
        while(i < s2.length()){
            char newChar = s2[i];
            int index2 = s2[i] - 'a';
            count2[index2]++;
            
            char oldChar = s2[i-windowSize];
            int index3 = s2[i - windowSize] - 'a';
            count2[index3]--;
            
            i++;
            
            if(checkEqual (count1 , count2))
                return 1;
            
        }
        return 0;
    }
};