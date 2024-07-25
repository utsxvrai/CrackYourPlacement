class Solution {
public:
    string make_last_sentence(vector<string>& tmp, int maxWidth) {
        string res = "";
        for (int i = 0; i < tmp.size(); i++) {
            res += tmp[i];
            if (i < tmp.size()-1) {
                res += " ";
            }
        }

        while (res.size() < maxWidth) {
            res += " ";
        }

        return res;
    }

    string make_sentence(vector<string>& tmp, int maxWidth, int count) {
        int spots = tmp.size()-1;
        if (spots == 0) spots = 1;

        int total_spaces = maxWidth - count;
        int even_spaces = total_spaces / spots;
        int uneven_spaces = total_spaces - (even_spaces * spots);
        
        if (tmp.size() == 1) {
            string res = tmp.back();
            for (int i = 0; i < total_spaces; i++) {
                res += " ";
            }
            return res;
        }

        vector<string> spaces(spots, "");
        for (auto& s : spaces) {
            for (int i = 0; i < even_spaces; i++) {
                s += " ";
            }
        }

        for (auto& s : spaces) {
            if (uneven_spaces-- > 0) {
                s += " ";
            }
        }

        string res = "";

        int i = 0;
        for (auto& w : tmp) {
            res += w;
            if (i < spaces.size()) {
                res += spaces[i++];
            }
        }

        return res;
    }

    vector<string> fullJustify(vector<string>& words, int maxWidth) {
        vector<string> res;
        vector<string> tmp;
        int count = 0;
        for (int i = 0; i < words.size(); i++) {
            if (count + tmp.size() + words[i].size() <= maxWidth) {
                tmp.push_back(words[i]);
                count += words[i].size();
            } else {
                res.emplace_back(make_sentence(tmp, maxWidth, count));
                count = 0;
                tmp.clear();
                i--;
            }
        }

        res.emplace_back(make_last_sentence(tmp, maxWidth));

        return res;
    }
};