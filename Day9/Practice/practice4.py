class Solution:
    def longestCommonPrefix(self, strs: List[str]) -> str:
        s = ""
        flag = True
        cnt = 0
        while flag:
            if (len(strs[0]) > cnt):
                c = strs[0][cnt]
            else:
                return s
            for i in range(len(strs)):
                if cnt == len(strs[i]):
                    return s;
                if (strs[i][cnt] != c):
                    return s;
            s += strs[0][cnt];
            cnt += 1;
        return s;


#link:https://leetcode.com/problems/longest-common-prefix/