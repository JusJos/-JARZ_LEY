    bool check(string& a, string& b) {
        int i = 0;
        for (char& c : b) {
            if (isupper(c) && a[i] != c) {
                return false;
            } else if (c == a[i]) {
                i++;
            }
        }
        return i == a.length(); }

    
    vector<bool> camelMatch(vector<string>& queries, string pattern) {
        vector<bool> result;
        for (string& q : queries) {
            result.push_back(check(pattern, q));
        }
        return result; }
