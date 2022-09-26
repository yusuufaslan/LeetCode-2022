/*
    author: @yusuufaslan
    Date: 13 September 2022
    Problem number at LeetCode: 393
    Problem name: UTF-8 Validation
    level: medium
*/

#include <iostream>
#include <algorithm>
#include <vector>
#include <string>
#include <math.h>
#include <bits/stdc++.h>
#include <queue>

using namespace std;

class Solution {
public:
    bool validUtf8(vector<int>& data) {
        int num_of_bytes_to_process = 0;
        for (int i = 0; i < data.size(); i++) {
            string binary_string = bitset<8>(data[i]).to_string(); 

            if (binary_string.length() >= 8){
                binary_string = binary_string.substr(binary_string.length() - 8);
            }
            else {
                string bin = "00000000";
                binary_string = bin.substr(0, 8 - binary_string.length()) + binary_string;
            }

            if (num_of_bytes_to_process == 0) {
                for (int i = 0; i < binary_string.size(); i++) {
                    if (binary_string[i] == '0')
                        break;
                    else 
                        num_of_bytes_to_process++;
                }

                if (num_of_bytes_to_process == 0) {
                    continue;
                }

                if (num_of_bytes_to_process > 4 || num_of_bytes_to_process == 1)
                    return false;
                
            }
            else {
                if ( !(binary_string[0] == '1' && binary_string[1] == '0') )
                    return false;
            }

            num_of_bytes_to_process--;
        }
        return num_of_bytes_to_process == 0;
    }
};

int main(int argc, char const *argv[])
{
    string y = "yusuf";
    cout << y.substr(y.length() - 2) << endl;

    return 0;
}
