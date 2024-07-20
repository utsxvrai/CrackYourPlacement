class Solution {
public:
    int strStr(string haystack, string needle) {
        bool found = false;

        for (int i = 0; i < haystack.size(); i++) {
            
            if (haystack[i] == needle[0]) {
                for (int j = 0; j < needle.size(); j++) {
                    if (haystack[i+j] != needle[j]) {
                        found = false;
                        break;
                    }
                    found = true;
                }
                if (found)
                    return i;
            }
        }
        return -1;
    }
};