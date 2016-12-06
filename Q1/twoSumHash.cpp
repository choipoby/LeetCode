#include <vector>
#include <map>
#include <stdio.h>

void findIndex(const std::vector<int>& input, int target, int& indexA, int& indexB) {
	std::map<int, int> indexHash;
	for(int i=0; i<input.size(); i++){
		indexHash.insert( std::pair<int, int>( input[i], i) );
	}
	
	for(int i=0; i<input.size(); i++) {
		if( indexHash.find(target - input[i]) != indexHash.end() ){
			indexA = i;
			indexB = indexHash.find(target-input[i])->second;
			return;
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

