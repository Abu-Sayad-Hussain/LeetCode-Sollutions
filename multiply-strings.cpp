class Solution {
public:
    string multiply(string num1, string num2) {
        if(num1=="0" || num2=="0"){
            return "0";
        }
        int n1 = num1.size();
        int n2 = num2.size();

        vector<int> r(n1+n2, 0);
        for(int i=n1-1; i>=0; i--){
            int c = 0;
            int d1 = num1[i] - '0';
            for(int j=n2-1; j>=0; j--){
                int d2 = num2[j] - '0';
                int p = d1 * d2 + c + r[i+j+1];
                c = p/10;
                r[i+j+1] = p %10;
            }
            r[i] += c;
        }
        string p;
        int i = 0;
        while(i<n1+n2 && r[i]==0){
            i++;
        }
        for(; i<n1+n2; i++){
            p += to_string(r[i]);
        }
        return p;
    }
};