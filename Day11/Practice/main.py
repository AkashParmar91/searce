class Solution:
    def longestMountain(self, a: List[int]) -> int:
        c = 0
        n = len(a);
        i = 0

        while i < n:
            f1 = f = False;
            k = i;
            j = i + 1;
            while (j < n and a[j] > a[k]):
                f = True;
                k = j;
                j += 1;
            while (j < n and a[k] > a[j]):
                f1 = True;
                k = j;
                j += 1;
            if (f and f1 and k - i + 1 >= 3):
                c = max(c, k - i + 1);
            if (i == k):
                i += 1;
            else:
                i = k;
        return c;

#link: https://leetcode.com/problems/longest-mountain-in-array/