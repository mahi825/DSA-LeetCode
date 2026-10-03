class Solution {
public:
    string frequencySort(string s) {
        unordered_map<char, int> mp;

        for (char c : s) {
            mp[c]++;
        }
        vector<pair<char, int>> v;
        for (auto& it : mp) {
            v.push_back({it.first, it.second});
        }
        sort(v.begin(), v.end(), [](auto& a, auto& b) { // lambda function
            return a.second > b.second;
        });
        string ans = "";
        for (auto& it : v) {
            ans += string(it.second, it.first);
        }
        return ans;
    }
};