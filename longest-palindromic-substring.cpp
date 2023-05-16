class Solution {
public:
    string longestPalindrome(string s) {
        int n = s.length(), maxLength = 1, start = 0;

        if (n == 0) {
            return "";
        }
        if (n == 1) {
            return s;
        }
        
        for(int i=0; i<n;){
           if(n-1 <= maxLength / 2){
               break;
           }
           int j = i, k = i;
           while(k<n-1 && s[k+1] == s[k]){
               k++;
           }
           i = k + 1;
           while( k < n-1 && j> 0 && s[k+1] == s[j-1]){
               k++;
               j--;
           }
           int newLength = k - j + 1;
           if(newLength > maxLength){
               maxLength = newLength;
               start = j;
           }
        }

        return s.substr(start, maxLength);
        
    }
};