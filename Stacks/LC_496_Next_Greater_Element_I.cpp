class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        vector<int>res;
        for(int i=0;i<nums1.size();i++){
            int found=-1;int j;
            for(j=0;j<nums2.size();j++){
                if(nums2[j]==nums1[i]){
                    break;
                }
                
            }
            for(int k=j+1;k<nums2.size();k++){
                if(nums2[k]>nums1[i]){
                    found=nums2[k];
                    break;
                }
            }
            res.push_back(found);
        }
        return res;
        
        
    }
};
