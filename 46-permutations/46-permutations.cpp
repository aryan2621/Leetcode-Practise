class Solution {
public:
    vector<vector<int>> permute(vector<int>& nums) {
        vector<int> t=nums;
        vector<vector<int>> ans;
        ans.push_back(t);
        next_permutation(t.begin(),t.end());
        while(t!=nums){     
            ans.push_back(t);
            next_permutation(t.begin(),t.end());
        }
        return ans;
    }
};