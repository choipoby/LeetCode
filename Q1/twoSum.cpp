#include <stdio.h>
#include <vector>

void findIndex(const std::vector<int>& input, int target, int& indexA, int& indexB) {
	int i, j;
	for(i=0; i<input.size(); i++) {
		for(j=0; j<input.size(); j++) {
			if(input[i] + input[j] == target) {
				indexA = i;
				indexB = j;
				return;
			}
		}
	}
}

int main() {
    std::vector<int> input = {2,7,11,15};
    int target = 9;
    int a, b;
    findIndex(input, target, a, b);
    printf("%d and %d\n",a,b);
    return 0;
}


