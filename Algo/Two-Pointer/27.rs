impl Solution {
    pub fn remove_element(nums: &mut Vec<i32>, val: i32) -> i32 {
        let mut f: i32 = 0;
        let mut n: usize = nums.len();
        let mut b: i32 = (n-1) as i32;
        if n==0 {return 0;}
        while f<=b{
            if nums[f as usize]!=val{ f+=1;continue; }
            if nums[b as usize]==val{ b-=1;continue; }
            nums[f as usize]=nums[b as usize];
            f+=1;
            b-=1;
        }
        f
    }
}
