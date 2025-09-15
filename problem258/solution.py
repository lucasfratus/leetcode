class Solution(object):
    def addDigits(self, num):
        """
        :type num: int
        :rtype: int
        """
        num_str = str(num)
        while len(num_str) != 1: 
            soma = 0
            for digit in num_str:
                soma += int(digit)
            num_str = str(soma)
        
        return int(num_str)
