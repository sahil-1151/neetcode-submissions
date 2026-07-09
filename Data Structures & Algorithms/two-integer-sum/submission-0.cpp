class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map <int ,int> map;
        vector<int> arr;
        for(int i=0;i<nums.size();i++){
            int key=target-nums[i];
             auto it=map.find(key);
            if(it!=map.end()){ 
                arr.push_back(it->second);
                arr.push_back(i);

            }
            else{
                map[nums[i]]=i;
            }
        }
        return arr;
            }
};
