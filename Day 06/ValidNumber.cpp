class Solution {
public:
    bool isNumber(string s) {
        multiset<char> vis;
        char pre = '_';
        bool digit = false;
        for (auto i : s) {
            if (i == '+' || i == '-') {
                
                if ((digit||vis.size()!=0) && pre != 'e' && pre != 'E')
                    return false;
                vis.insert(i);
            } else if (i == 'E' || i == 'e') {
                if (!digit)
                    return false;
                if (vis.find('e') != vis.end())
                    return false;

                vis.insert('e');
            } else if (i == '.') {
                if (vis.find('.') != vis.end() || vis.find('e') != vis.end())
                    return false;

                vis.insert('.');
            } else if (i >= '0' && i <= '9') {
                digit = true;
            } else {
                return false;
            }
            pre = i;
        }
        return pre != '+' && pre != '-' && pre != 'e' && pre != 'E' && digit;
    }
};