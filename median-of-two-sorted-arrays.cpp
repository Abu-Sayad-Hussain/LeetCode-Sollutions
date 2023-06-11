class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        vector<double> temp;
        double median;
        temp.insert(temp.begin(), nums1.begin(), nums1.end());
        temp.insert(temp.end(), nums2.begin(), nums2.end());
        
        sort(temp.begin(), temp.end());
        
        if(temp.size() % 2 == 1){
                median = temp[temp.size() / 2];
        }else{
            median = (temp[temp.size()/2] + temp[(temp.size()/2)  -1 ]) / 2;
        }
        
        return median;
        
    }
};