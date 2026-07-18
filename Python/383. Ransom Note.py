class Solution(object):
    def canConstruct(self, ransomNote, magazine):
        """
        :type ransomNote: str
        :type magazine: str
        :rtype: bool
        """
        DictOfLetters = {}

        for letter in magazine:
            DictOfLetters[letter] = DictOfLetters.get(letter, 0) + 1
        for letter in ransomNote:
            if DictOfLetters.get(letter) <= 0:
                return False
            DictOfLetters[letter] -= 1
        
        return True
