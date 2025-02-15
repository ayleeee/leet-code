class Solution:
    def mergeAlternately(self, word1: str, word2: str) -> str:
        sz1 = len(word1)
        sz2 = len(word2)
        answer = ""

        for a in range(min(len(word1),len(word2))):
            answer += (word1[a]+word2[a])
        if min(len(word1),len(word2)) == len(word1):
            answer += word2[min(len(word1),len(word2)):]
        else:
            answer += word1[min(len(word1),len(word2)):]
        return answer
        


        
        