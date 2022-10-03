// #include<set>
class Solution {
public:
    set<vector<int>> a;
     void solve(vector<int>& nums, int index){
        //base case
        if(index>=nums.size()){
            a.insert(nums);
            return;
        }
        
        for(int j=index;j<nums.size();j++){
            swap(nums[index],nums[j]);
            solve(nums,index+1);
            //backtrack
            swap(nums[index],nums[j]);
        }
        
    }   
    vector<vector<int>> permuteUnique(vector<int>& nums) {
        vector<vector<int>>ans;
        int index=0;
        solve(nums,index);
        for(auto x:a)
            ans.push_back(x);
        return ans;
    }
};
