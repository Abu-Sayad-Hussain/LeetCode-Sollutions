class Solution {
public:
    int jump(vector<int>& nums) {
        int t = nums.size() - 1;
       int l = 0, r = 0;
       int count = 0;
       while(r < t){
           int farthest = 0;
           for(int i = l; i<= r; i++){
               farthest = max(farthest, i + nums[i]);
           }
           l = r+1;
           r = farthest;
           count++;
       } 
       return count;
    }
};