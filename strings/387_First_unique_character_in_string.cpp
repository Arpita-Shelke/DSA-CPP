class Solution {
public:
    int firstUniqChar(string s) {
           int freq[26] = {0};

        // Count occurrences
        for(int i=0;i<s.length();i++) {
            char c = s[i]
            freq[c - 'a']++;
        }

        // Find first character with frequency 1
        for(int i = 0; i < s.length(); i++) {
            if(freq[s[i] - 'a'] == 1) {
                return i;
            }
        }

        return -1;
    }
    
};
