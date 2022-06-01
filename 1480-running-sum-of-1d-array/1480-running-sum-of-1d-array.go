func runningSum(nums []int) []int {
    // [1,2,3,4]
    // [1,1+2,1+2+3,1+2+3+4]
    
    //var leng int = len(nums)
    var ans []int
    var sum int = 0
    for i:=0;i<len(nums);i++{
        sum+=nums[i]
        ans = append(ans,sum)
    }
    return ans
    
}