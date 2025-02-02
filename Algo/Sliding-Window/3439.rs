impl Solution {
    pub fn max_free_time(event_time: i32, k: i32, start_time: Vec<i32>, end_time: Vec<i32>) -> i32 {
        let mut n: usize = start_time.len();
        let mut gaps = vec![start_time[0]];
        let mut i: usize = 1;
        
        while i<n{
            gaps.push(start_time[i]-end_time[i-1]);
            i+=1;
        }
        gaps.push(event_time-end_time[i-1]);

        i = 0;
        n = gaps.len();
        let mut j: usize = 0;
        let mut sum: i32 = 0;
        let mut max_sum = 0;
        while j<n{
            if (j-i)>k as usize{
                if sum>max_sum {max_sum=sum;}
                sum-=gaps[i];
                i+=1;
            }
            sum+=gaps[j];
            j+=1;
        }
        if sum>max_sum {max_sum=sum;}
        max_sum
    }
}
