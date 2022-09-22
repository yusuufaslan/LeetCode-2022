#include <iostream>
#include <algorithm>
#include <vector>
#include <string>

using namespace std;

class Solution {
public:
    string reverseWords(string s) {
        int last_space_idx = -1;
        
        for (int idx = 0; idx <= s.length(); idx++) {
            if (idx == s.length() || s[idx] == ' ') {
                int start_idx = last_space_idx + 1;
                int end_idx = idx - 1;

                while (start_idx < end_idx)
                {
                    char temp = s[start_idx];
                    s[start_idx] = s[end_idx];
                    s[end_idx] = temp;
                    start_idx++;
                    end_idx--;
                }
                last_space_idx = idx;
            }
        }
        return s;
    }
};

int main(int argc, char const *argv[])
{
    Solution s;

    cout << s.reverseWords("yusuf aslan") << endl;

    return 0;
}
