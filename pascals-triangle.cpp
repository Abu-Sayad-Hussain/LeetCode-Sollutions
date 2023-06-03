class Solution {
public:
    vector<vector<int>> generate(int numRows) {
      vector<vector<int>> t;
      for(int i = 0; i< numRows; i++){
        vector<int> r(i+1,1);
        for(int j=1; j<i; j++){
          r[j] = t[i-1][j-1] + t[i-1][j];
        }
        t.push_back(r);
      }
      return t;
    };
};