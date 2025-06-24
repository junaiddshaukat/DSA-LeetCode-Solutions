class Solution {
public:
    string reverseWords(string s) {

        // 1. reverse the whole string
        reverse(s.begin(), s.end());

        int n = s.length();
        int i = 0;
        int r = 0; // r and l is for reversing the individual word
        int l = 0;

        while (i < n) {
            while (i < n && s[i] != ' ') {
                s[r++] = s[i++]; // [r++] -> s[r]; r++;
            }
            if (l < r) // l       r
            {
                reverse(s.begin() + l, s.begin() + r);
                s[r] = ' ';
                r++;

                l = r;
            }
             i++; // continue transversel
        }
        s = s.substr(0,r-1);
        return s;
    }
};
