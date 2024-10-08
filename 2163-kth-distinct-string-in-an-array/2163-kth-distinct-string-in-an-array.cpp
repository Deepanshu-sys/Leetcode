class Solution {
public:
    string kthDistinct(vector<string>& arr, int k) {
        unordered_map<string, int> countMap;
        
        // Count occurrences of each string
        for (const string& str : arr) {
            countMap[str]++;
        }
        
        // Find distinct strings (appearing exactly once)
        vector<string> distinctStrings;
        for (const string& str : arr) {
            if (countMap[str] == 1) {
                distinctStrings.push_back(str);
            }
        }
        
        // Check if k-th distinct string exists
        if (k > distinctStrings.size()) {
            return "";
        }
        
        return distinctStrings[k - 1];
    }
};
