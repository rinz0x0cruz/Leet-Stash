impl Solution {
    pub fn merge(nums1: &mut Vec<i32>, m: i32, nums2: &mut Vec<i32>, n: i32) {
        let mut ptr_a: i32 = m-1;
        let mut ptr_b: i32 = n-1;
        let mut ptr_z: i32 = m+n-1;

        while ptr_b >= 0{
            if ptr_a<0{
                nums1[ptr_z as usize] = nums2[ptr_b as usize];
                ptr_b-=1;
            } else {
                if nums1[ptr_a as usize] > nums2[ptr_b as usize]{
                    nums1[ptr_z as usize] = nums1[ptr_a as usize];
                    nums1[ptr_a as usize] = 0;
                    ptr_a-=1;
                } else {
                    nums1[ptr_z as usize] = nums2[ptr_b as usize];
                    ptr_b-=1;
                }
            }
            ptr_z-=1;
        }
    }
}
