// Weekly Contest 355
//able to solve 1 out of 4
//6921. Split Strings by Separator
//tc O(m*n) m= size of array n= size of element in array
//sc O(n)
//code
class Solution {
public:
    vector<string> splitWordsBySeparator(vector<string>& words, char separator) {
        vector<string> result;
        for (const auto& word : words) {
            stringstream ss(word);
            string token;
            while (getline(ss, token, separator)) {
                if (!token.empty()) {
                    result.push_back(token);
                }
            }
        }
        return result;
        
    }
};
