class Solution(object):
    def lengthOfLastWord(self, s):
        """
        :type s: str
        :rtype: int
        """
        li=[]
        for wrd in s.split(' '):
            if(len(wrd)):
                li.append(wrd)
                # print(wrd)
        return len(li[len(li)-1])
        