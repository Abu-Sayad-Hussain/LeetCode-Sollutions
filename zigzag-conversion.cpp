class Solution {
public:
    string convert(string s, int numRows) {
        if(numRows == 1 || s.size() <= numRows){
            return s;
        }
        int counter = 0;
        bool gd = false;
        vector<string> rows(numRows);
        for(char c: s){
            rows[counter] += c;
            if(counter == 0 || counter == numRows - 1){
                gd = !gd;
            }
            counter += gd ? 1 : -1;
        }
        string r;
        for(string row: rows){
            r += row;
        }
        return r;
    }
};