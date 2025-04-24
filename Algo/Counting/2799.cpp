class Solution {
public:
    int countCompleteSubarrays(vector<int>& nums) {
        vector<int> freq(2001,0);
        int distinct = 0, count = 0;
        int n = nums.size();
        int res = 0;

        for(const int& x:nums){
            if(freq[x]==0) ++distinct;
            ++freq[x];
        }
        fill(freq.begin(),freq.end(),0);
        int start = 0;
        for(int end=0;end<n;++end){
            if(freq[nums[end]]==0) ++count;
            ++freq[nums[end]];
            while(count==distinct){
                res+=(n-end);
                freq[nums[start]]-=1;
                if(freq[nums[start]]==0) --count;
                ++start;
            }
        }
        return res;
    }
};
