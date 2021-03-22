class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> ans;
        unordered_map<int,int> mq;
        for(int i=0;i<nums.size();i++)
        {
            if(mq.find(target-nums[i])!=mq.end())
            {
                ans.push_back(mq[target-nums[i]]);
                ans.push_back(i);
                return ans;
            }
            mq[nums[i]]=i;
        }
        return ans;
        
    }
};
