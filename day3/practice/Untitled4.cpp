class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        if(nums.size()==0)
        {
            return 0;
        }
        unordered_map<int,int> m;
        unordered_map<int,int>::iterator itr;
        for(int i=0;i<nums.size();i++)
        {
           m[nums[i]]++;
        }
        int maxi=1;
        for(itr=m.begin();itr!=m.end();itr++)
        {
            if(m.find(itr->first-1)==m.end())
            {
                int k = itr->first;
                int cur=1;
                while(m.find(k+1)!=m.end())
                {
                    k++;
                    cur++;
                }
                maxi=max(maxi,cur);
            }
        }
        return maxi;
    }
};

//link:https://leetcode.com/problems/longest-consecutive-sequence/
