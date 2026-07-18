class Solution(object):
    def runningSum(self, nums):
        """
        :type nums: List[int]
        :rtype: List[int]
        """
        solution = []
        solution.append(nums[0])
        for i in range(1, len(nums)):
            solution.append(solution[i - 1] + nums[i])
        return solution