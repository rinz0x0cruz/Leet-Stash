class Solution {
public:
    bool isArraySpecial(vector<int>& nums) {
        int n = nums.size();
        if(n==1) return true;
        if(nums[0]%2==nums[1]%2 || nums[n-1]%2==nums[n-2]%2)
            return false;
        int i,l,c;
        for(i=1;i<n-1;++i){
            l = nums[i-1]%2;
            l+= nums[i+1]%2;
            c = nums[i]%2;
            if(l==2 && c==0 || l==0 && c==1) continue;
            else return false;
        }
        return true;
            
    }
};
