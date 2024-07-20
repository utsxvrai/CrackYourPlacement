class Solution {
public:
    string reverseWords(string s) {
        stringstream ss(s);
        vector<string> words;
        string word;
        
        // Split the string into words
        while (ss >> word) {
            words.push_back(word);
        }
        
        // Reverse the order of words
        reverse(words.begin(), words.end());
        
        // Join the words back into a string
        string result;
        for (const auto& w : words) {
            if (!result.empty()) {
                result += ' ';
            }
            result += w;
        }
        
        return result;
    }
};