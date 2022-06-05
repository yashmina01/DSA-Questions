class Solution {
public:
    int percentageLetter(string s, char letter) {
        
        int cnt = count(s.begin(),s.end(),letter);
        return (cnt*100)/s.size();
    }
};