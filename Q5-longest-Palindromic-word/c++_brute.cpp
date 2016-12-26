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
        for(int j=inputLength-i; j>0; j--) {
            sub = string((const char*)&s[i], j);
            subRev = sub;
            printf("i %d, j %d, sub %s\n", i, j, sub.c_str());
            std::reverse(std::begin(subRev), std::end(subRev));
            if( (sub == subRev) && (j >= maxCount) ){
                maxCount = j;
                maxPalindromic = sub;
            }
        }
    }
    return maxPalindromic;
}

int main() {
    string s = "asdfsdfdsfasfsnursesrunasdfdfsdf";
    //string s = "a";
    printf("%s\n", longestPalindrome(s).c_str());
}
