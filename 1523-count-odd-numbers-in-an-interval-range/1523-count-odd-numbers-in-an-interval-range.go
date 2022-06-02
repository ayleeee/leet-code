func countOdds(low int, high int) int {
    var ans int = 0
    
    for i:=low;i<=high;i++{
        if i%2!=0 {
            ans+=1
        }
    }
    return ans
    
}