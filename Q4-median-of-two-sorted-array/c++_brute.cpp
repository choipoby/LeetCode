#include <stdio.h>
#include <vector>

using namespace std;

double findMedianSortedArrays(vector<int>& num1, vector<int>& num2) {
    int i = 0, j = 0, k = 0;
    vector<int> combined;
    for(; k < num1.size() + num2.size(); k++) {
        if( i >= num1.size() )
            combined.push_back(num2[j++]);
        else if ( j >= num2.size() )
            combined.push_back(num1[i++]);
        else if( num1[i] < num2[j])
            combined.push_back(num1[i++]);
        else
            combined.push_back(num2[j++]);
    }

    if(k%2){
        return (double)combined[k/2];
    } else {
        return (double)(combined[k/2 -1] + combined[k/2])/2;
    }
}

int main() {
    vector<int> a;
    vector<int> b;
    a.push_back(1);
    a.push_back(2);
    b.push_back(3);
    b.push_back(4);
    printf("%f\n", findMedianSortedArrays(a, b));
}
