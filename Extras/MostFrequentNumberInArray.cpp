#include <stdio.h>
#include <vector>
#include <map>

using namespace std;

int findMostFrequentNumberInArrays(vector<int>& num, int& whichnumber) {
    int max_count;
    int max_num;
    map<int, int> frequency;
    for(int i=0; i< num.size(); i++) {
        if( frequency.find( num[i]) != frequency.end() ) {
            frequency[num[i]] += 1;
        } else {
            frequency[num[i]] = 1;
        }

        if (frequency[num[i]] > max_count) {
            max_count = frequency[num[i]];
            max_num = num[i];
        }
    }
    whichnumber = max_num;
    return max_count;
}

int main() {
    int whichnumber;
    vector<int> a = {1,2,3,4,3,2,5,3,2,4,2,5,6,3,2,6,8,2};
    printf("%d %d\n", findMostFrequentNumberInArrays(a, whichnumber), whichnumber);
}
