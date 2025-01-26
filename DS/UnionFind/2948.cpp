class Solution {
public:

    vector<int> lexicographicallySmallestArray(vector<int>& nums, int limit) {
        vector<int> arr = nums;
        unordered_map<int,list<int>> disjoint;
        unordered_map<int,int> index;

        int n = nums.size();
        int idx = 0,limit_check=0;
        sort(nums.begin(),nums.end());

        for(int i=0;i<n;++i){
            if(nums[i]>limit_check) 
                disjoint[++idx] = list<int>();

            disjoint[idx].push_back(nums[i]);
            index[nums[i]] = idx;
            limit_check = nums[i]+limit;
        }

        for(int& x:arr){
            x = *disjoint[index[x]].begin();
            disjoint[index[x]].pop_front();
        }
        
        return arr;
    }
};
