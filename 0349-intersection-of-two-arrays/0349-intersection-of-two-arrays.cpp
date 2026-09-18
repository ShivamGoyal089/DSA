class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
    vector<int> newarray ;
    for(int i = 0; i < nums1.size(); i++){
        for(int j = 0; j < nums2.size(); j++){
            if(nums1[i] == nums2[j]){
                bool already = false;
                for(int x : newarray){
                    if(x == nums1[i]){
                        already = true;
                        break;
                    }
                }
                if(!already){
                    newarray.push_back(nums1[i]);
                }
                break;
            }
                
        }
    }
    return newarray;
    }
};