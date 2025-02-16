class Solution:
    @staticmethod
    def get_divisors(n):
        divisors = []
        for i in range(1, int(n**0.5)+1):
            if n%i ==0:
                divisors.append(i)
                if i!=n//i:
                    divisors.append(n//i)
        return sorted(divisors)
    
    @staticmethod
    def can_divide(pattern,s):
        if len(s)%len(pattern)!=0:
            return False
        repeat_count = len(s)//len(pattern)
        return pattern*repeat_count == s

    def gcdOfStrings(self, str1: str, str2: str) -> str:
        """
        두 문자열 str1과 str2가 주어졌을 때, 두 문자열을 모두 나눌 수 있는
        가장 긴 문자열 x를 찾는 것
        """
        # (1) 더 짧은 문자열 길이를 기준으로 생각
        # (2) 약수를 구하기
        # (3) 두 문자열을 모두 나눌 수 있는지 확인

        sz = min(len(str1),len(str2))
        divisors = Solution.get_divisors(sz)
        for length in sorted(divisors, reverse=True):
            pattern = str1[:length]
    
            if Solution.can_divide(pattern, str1) and Solution.can_divide(pattern, str2):
                return pattern
    
        return ""



        