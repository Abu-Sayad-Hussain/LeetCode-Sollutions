class Solution {
public:
    string addBinary(string a, string b) {
       string r;
       int i = a.size() - 1, j = b.size() -1, c = 0;
       while(i>=0 || j>=0 || c !=0){
           int s = c;
           if(i>=0){
               s+=a[i] - '0';
               i--;
           }
           if(j>=0){
               s+=b[j] - '0';
               j--;
           }
           r.insert(r.begin(), s % 2 + '0');
           c = s/2;
       } 
       return r;
    }
};