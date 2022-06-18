func Reverse(s string) (result string) {
  for _,v := range s {
    result = string(v) + result
  }
  return 
}

func isPalindrome(x int) bool {
    if(x<0){
        return false
    }
    str := strconv.Itoa(x)
    if(str==Reverse(str)){
        return true
    }
    return false
}