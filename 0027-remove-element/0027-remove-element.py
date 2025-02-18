class Solution:
    def removeElement(self, nums: List[int], val: int) -> int:
        i = len(nums) - 1
        while i>=0 :
            if nums[i] == val:
                nums.pop(i)
            i-=1
        return len(nums)