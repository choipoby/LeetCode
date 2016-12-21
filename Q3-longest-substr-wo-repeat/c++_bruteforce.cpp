#include <stdio.h>
#include <string>
#include <map>

using namespace std;

int lengthOfLongestSubstring(string s) {
    map<const char, int> hash;
    int total_max = 0, sub_max = 0;
    for(int i=0; i< s.length(); i++) {
        hash[ s[i] ] = 1;
        sub_max = 1;

        for (int j = i+1; j < s.length(); j++ ) {
            if( hash.find( s[j] ) == hash.end() ) {
                hash[ s[j] ] = 1;
                sub_max++;
            } else {
                hash.clear();
                break;
            }
        }

        if ( sub_max > total_max ) {
            total_max = sub_max;
        }
    }
    return total_max;
}

int main() {
    //const char* input = "abcabcbb"; // answer will be "abc"
    //const char* input = "abcabcbbibbbbbbcdef"; // answer will be "abc"
    const char* input = "abcabcbbibbbbbbcdefabcdefgh"; // answer will be "abc"
    printf("result is %d\n", bruteForce(string(input)));
    return 0;
}
