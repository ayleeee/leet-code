class Solution:
    def containsDuplicate(self, nums: List[int]) -> bool:
        # all element distinct => false
        n = len(nums)
        nums_set = set(nums)
        k = len(nums_set)
        
        if n==k:
            return False
        elif n>k:
            return True
        else:
            return False