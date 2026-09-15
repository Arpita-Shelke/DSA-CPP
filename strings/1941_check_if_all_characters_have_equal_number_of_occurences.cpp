class Solution {
public:
    bool areOccurrencesEqual(string s) {
        int length = s.length();
        vector<int>arr(26,0);

        for(int i=0; i<length; i++){
            char ch = s[i];
            int ascii = (int)ch;
            arr[ascii-97]++;
        }
         int first = 0;

    for (int i = 0; i < 26; i++) {
        if (arr[i] > 0) {
            first = arr[i];
            break;
        }
    }

    // Check all other characters
    bool equal = true;

    for (int i = 0; i < 26; i++) {
        if (arr[i] > 0 && arr[i] != first) {
            equal = false;
            break;
        }
    }
    return equal;
    }
};
