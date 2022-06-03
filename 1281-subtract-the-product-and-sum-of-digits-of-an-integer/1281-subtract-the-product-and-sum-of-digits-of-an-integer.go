func subtractProductAndSum(n int) int {
    var product int = 1
    var sum int = 0
    
    for n>0 {
        mod := n%10
        sum+=mod
        product*=mod
        
        n/=10
    }
    return product-sum
}