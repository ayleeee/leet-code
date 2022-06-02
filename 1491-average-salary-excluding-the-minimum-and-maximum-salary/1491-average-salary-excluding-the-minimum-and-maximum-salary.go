func average(salary []int) float64 {
    sort.Ints(salary)
    var ans int = 0
    
    for i:=0;i<len(salary);i++ {
        if i==0 || i==len(salary)-1 {
            continue
        }
        ans+=salary[i]
    }
    return float64(ans)/float64(len(salary)-2)
}