#include <iostream>
#include <vector>
#include <algorithm>

long long MaxPairwiseProduct(const std::vector<int>& numbers) {
    long long max_product = 0;
    int n = numbers.size();
    int i,j;
    int index1 = 0;

    for(i=0;i<n;i++){
    	if(numbers[i]>numbers[index1]){
    		index1 = i;
    	}
    }

    int index2 = 0;
        for(j=0;j<n;j++){
    	if((j!= index1) && (numbers[j]>numbers[index2])){
    		index2 = j;
    	}
    }

    max_product = numbers[index1]*numbers[index2];

    return(max_product);
}

int main() {
    int n;
    std::cin >> n;
    std::vector<int> numbers(n);
    for (int i = 0; i < n; ++i) {
        std::cin >> numbers[i];
    }

    std::cout << MaxPairwiseProduct(numbers)<< "\n";
    return 0;
}
