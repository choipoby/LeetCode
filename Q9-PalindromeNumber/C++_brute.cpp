#include <stdio.h>
#include <string>

class Solution {
public:
    static bool isPalindrome(int x) {
        char str[32];
        sprintf(str, "%d", x);
        int i,j;
        for (i=0, j=strlen(str); i<j; i++) {
          if (str[i] != str[j-i-1]){
            return false;
          }
        }
        return true;
    }
};

int main()
{
    int x = 121;
    printf("%s\n", Solution::isPalindrome(x)==true?"true":"false");
}
