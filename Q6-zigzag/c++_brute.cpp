
#include <stdio.h>
#include <string>
#include <deque>

using namespace std;

string convert(string s, int numRows) {
    deque<char> *bucket = new deque<char>[numRows];
    string output;
    int i=0, j=0, k=-1, factor = 1;
    for(i=0; i<s.size(); i++, j++) {
        k = k + factor;
        bucket[k].push_back(s[i]);
        if (j >= numRows - 1 ) {
            j = 0;
            factor *= -1;
        }
    }

    for (k=0; k< numRows; k++) {
        for(j=0; !bucket[k].empty();j++){
            output += bucket[k].front();
            bucket[k].pop_front();
        }
    }

    delete[] bucket;
    return output;
}

int main() {
    string input = "PAYPALISHIRING";
    printf("answer %s\n", convert(input, 3).c_str());
}
