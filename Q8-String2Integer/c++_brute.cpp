#include <stdio.h>
#include <string>
#include <math.h>
using namespace std;

class Solution {
public:
    static int myAtoi(string str) {
        int result = 0;
        int current = 0;
        for (int i=str.length()-1; i>=0; i--) {
          if(str[i] == '-') {
            result *= -1;
            break;
          }
          if(str[i] == '+'){
            break;
          }
          if(str[i] < '0' || str[i] > '9'){
            break;
          }
          current = str[i] - '0';
          result += current*pow(10,str.length() - i - 1);
        }
        return result;
    }
};

int main(int argc, char **argv) {
  string str(argv[1]);
  printf("result %d\n", Solution::myAtoi(str));
}
