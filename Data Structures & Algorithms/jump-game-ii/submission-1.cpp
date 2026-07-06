class Solution {
public:
    int jump(vector<int>& nums) {
         if(nums.size() == 1)return 0;
        int jump=0;
        int x=0;
        int k=0;
        for(int i=0;i<nums.size()-1;i++){
            if(i+nums[i]>jump)jump=i+nums[i];
            if(i == x){
                k++;
                x=jump;
            }
        }   
        return k;
    }
};
