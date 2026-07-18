class Solution(object):
    def twoSum(self, nums, target):
        """
        :type nums: List[int]
        :type target: int
        :rtype: List[int]
        """
        #Solution = [0] * 2     #Otra Solución
        range_of_nums = len(nums);

        for i in range (range_of_nums):
            for j in range(i + 1, range_of_nums):
                if(nums[i] + nums[j] == target):
                    return [i,j] #Retorna una lista con estos dos elemts.
    """
    # Otra Solución
                    Solution[0] = i
                    Solution[1] = j
        
        return Solution
    """
