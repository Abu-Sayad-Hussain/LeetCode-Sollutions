class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int n = s.length(), i, start= 0, maxLength = 0;
        unordered_map<char, int> charMap;
        for(i=0; i<n; i++){
            char c = s[i];
            if(charMap.find(c) != charMap.end() && charMap[c] >= start){
                start = charMap[c] + 1;
            }
            maxLength = max(maxLength, i - start + 1);
            charMap[c] = i;
        }
        return maxLength;
    }
};