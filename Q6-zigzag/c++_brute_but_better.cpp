
#include <stdio.h>
#include <string>
#include <deque>

using namespace std;

string convert(string s, int numRows) {
    string *bucket = new string[numRows];
    string output;
    int i=0, row = 0, step = 0;
    for(; i<s.size(); i++) {
        bucket[row].push_back(s[i]);
        if (row == 0 ) {
            step = 1;
        } else if (row == numRows -1) {
            step = -1;
        }
        row += step;
    }

    for (i=0; i< numRows; i++) {
        output.append(bucket[i]);
    }

    delete[] bucket;
    return output;
}

int main() {
    string input = "PAYPALISHIRING";
    printf("answer %s\n", convert(input, 3).c_str());
}
