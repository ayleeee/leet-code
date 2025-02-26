class Solution:
    def rotate(self, nums: List[int], k: int) -> None:
        """
        Do not return anything, modify nums in-place instead.
        """
        n = len(nums)
        k = k % n
        
        last_nums = nums[n-k:]
        del nums[n-k:]
        nums[:0] = last_nums