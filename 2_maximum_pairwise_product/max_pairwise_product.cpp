#include <iostream>
#include <vector>
#include <algorithm>

long long MaxPairwiseProduct(const std::vector<int>& numbers) {
    long long max_product = 0;
    int n = numbers.size();
    int i,j;
    int index1 = -1;

    for(i=0;i<n;i++){
    	if(index1 == -1 || numbers[i]>numbers[index1]){
    		index1 = i;
    	}
    }

    int index2 = -1;
        for(j=0;j<n;j++){
    	if((j!= index1) && (index2 == -1 || numbers[j]>numbers[index2])){
    		index2 = j;
    	}
    }
    max_product = ((long long)(numbers[index1])*numbers[index2]);

    return(max_product);
}

int main() {
    int n;
    std::cin >> n;
    std::vector<int> numbers(n);
    for (int i = 0; i < n; ++i) {
        std::cin >> numbers[i];
    }

    long long result = MaxPairwiseProduct(numbers);

    std::cout <<result<< "\n";
    return 0;
}
