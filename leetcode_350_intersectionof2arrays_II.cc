class Solution {
public:
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
         sort(nums1.begin(),nums1.end());
        sort(nums2.begin(),nums2.end());

        vector <int> ans;
        int i=0,j=0;
        while(i<nums1.size() && j<nums2.size()){
            if(nums1[i]==nums2[j]){
                ans.push_back(nums1[i]);
                i++,j++;
            }else if(nums1[i]<nums2[j])
            {
                i++;
            }else
            {
                j++;
            }
        }
        return ans;
    }
};

/*NOTE*/
///the arrays need to be sorted
//here order and number of occurences doesnt matter hence we use vector only
// in INTERSECTION OF TWO ARRAYS 1
// the elements have to be unique and ordr doesnt matter ...hence we use unordered set.
