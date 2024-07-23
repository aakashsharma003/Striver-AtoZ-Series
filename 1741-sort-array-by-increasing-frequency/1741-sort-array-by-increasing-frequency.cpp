class Solution {
public:
    vector<int> frequencySort(vector<int>& nums) {
        unordered_map<int,int>mp;
        for(auto it: nums) mp[it]++;
        sort(nums.begin(),nums.end(), [&](auto num1, auto num2) { 
            if(mp[num1] == mp[num2]) return num1 > num2;
            return mp[num1] < mp[num2];});
        return nums;
    }
};