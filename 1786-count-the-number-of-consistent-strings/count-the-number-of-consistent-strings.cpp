class Solution {
public:
    int countConsistentStrings(string allowed, vector<string>& words) {
        unordered_map <char,bool> allow;
        int count = 0;

        for (char c: allowed){
            allow[c] = true;
        }

       for (string& word : words) {
            bool isAllowed = true;
            for (char c : word) {
                if (!allow[c]) {
                    isAllowed = false;
                    break;
                }
            }
            if (isAllowed) count++;
        }

        return count;
    }
};
