#include <stdio.h>
#include <map>
#include <vector>
#include <string>

using namespace std;

string longestPalindrome(string s) {
    int inputLength = s.size();
    int maxCount=0;
    string sub, subRev, maxPalindromic;

    for(int i=0; i<inputLength; i++) {
        for(int j=1; j<inputLength-i-1; j++) {
            sub = string((const char*)&s[i], j);
            subRev = sub;
            std::reverse(std::begin(subRev), std::end(subRev));
            if( (sub == subRev) && (j > maxCount) ){
                maxCount = j;
                maxPalindromic = sub;
            }
        }
    }
    return maxPalindromic;
}

int main() {
    string s = "asdfsdfdsfasfsnursesrunasdfdfsdf";
    printf("%s\n", longestPalindrome(s).c_str());
}
