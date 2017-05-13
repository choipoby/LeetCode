#include <stdio.h>
#include <string>
#include <algorithm>

using namespace std;

class Solution {
public:
    static bool isMatching(string s, string p) {
        int si = 0;
        int pi = 0;
        bool dot = false;
        bool match = true;

        // error condition
        if ( p[0] == '*' )
            return false;

        do {
            if ( pi >= p.length() || si >= s.length() ) {
                if (p.length() == s.length())
                    match = true;
                else
                    match = false;
                break;
            }

            if ( p.length() >= pi+1 &&  p[pi+1] == '*' ) {
                break;
            }

            if (p[pi] == '.' ) {
                dot = true;
            }

            if( s[si] != p[pi] ) {
                if (dot) {
                    si++;
                    pi++;
                    continue;
                }
                match = false;
                break;
            } else {
                si++;
                pi++;
            }

        } while(true);
        return match;
    }
};

int main()
{
    printf("%s\n", Solution::isMatching("aa", "a")==true?"true":"false");
    printf("%s\n", Solution::isMatching("aa", "aa")==true?"true":"false");
    printf("%s\n", Solution::isMatching("aaa", "aa")==true?"true":"false");
    printf("%s\n", Solution::isMatching("aa", "a*")==true?"true":"false");
    printf("%s\n", Solution::isMatching("aa", ".*")==true?"true":"false");
    printf("%s\n", Solution::isMatching("ab", ".*")==true?"true":"false");
    printf("%s\n", Solution::isMatching("aab", ".*")==true?"true":"false");
    printf("%s\n", Solution::isMatching("aa", "*")==true?"true":"false");
}
