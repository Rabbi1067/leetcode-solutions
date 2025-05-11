class Solution {
public:
    int minDeletion(string s, int k) {
        unordered_map<char, int> freq;

        for (char c : s) {
            freq[c]++;
        }

        int distinct = freq.size();
        if (distinct <= k) return 0;

        vector<int> freqs;
        for (auto& [ch, count] : freq) {
            freqs.push_back(count);
        }

    
        sort(freqs.begin(), freqs.end());

        int deletions = 0;
        int remove_count = distinct - k;

        for (int i = 0; i < remove_count; ++i) {
            deletions += freqs[i];
        }

        return deletions;
    }
};
©leetcode
