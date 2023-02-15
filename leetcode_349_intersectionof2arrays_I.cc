class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {

        sort(nums1.begin(),nums1.end());
        sort(nums2.begin(),nums2.end());

        vector <int> ans;
        unordered_set<int> s;
        int i=0,j=0;
        while(i<nums1.size() && j<nums2.size()){
            if(nums1[i]==nums2[j]){
                s.insert(nums1[i]); //first we store it in a set to get only unique elements
                i++,j++;
            }else if(nums1[i]<nums2[j])
            {
                i++;
            }else
            {
                j++;
            }
        }
      //using below loop we push the set data into vector...since return type has to be a vector
        for(auto it : s){
            ans.push_back(it); 
        }
        return ans;
    }
};
