class Solution {
public:
    vector<int> getRow(int rowIndex) {
        vector<vector<int>> t;
        vector<int> re;
        for(int i = 0; i<rowIndex + 1; i++){
            vector<int>r(i+1, 1);
            for(int j=1; j<i; j++){
                r[j] = t[i-1][j-1] + t[i-1][j];
            }
            if(i == rowIndex){
                re.insert(re.begin(), begin(r), end(r));
            }
            t.push_back(r);
        }
        return re;
    }
};