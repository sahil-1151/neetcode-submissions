class Solution {
public:
    vector<int> getConcatenation(vector<int>& nums) {
        vector<int> arr;
        for(auto i:nums){
            arr.push_back(i);
        }
        for(auto i:nums){
            arr.push_back(i);
        }
        return arr;
    }
};