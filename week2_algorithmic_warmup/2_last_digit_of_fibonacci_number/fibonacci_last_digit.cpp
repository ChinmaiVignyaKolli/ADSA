#include <iostream>

int get_fibonacci_last_digit_naive(int n) {
    if (n <= 1)
        return n;

    int previous = 0;
    int current  = 1;

    for (int i = 0; i < n - 1; ++i) {
        int tmp_previous = previous;
        previous = current;
        current = tmp_previous + current;
    }

    return current % 10;
}

int get_fibonacci_last_digit_fast(long long n) {
    // write your code here
    int a[n+1];
    a[0] = 0;
    a[1] = 1;
    for(int i =2;i<=n;i++)
    {
        a[i] = (a[i-1]%10) + (a[i-2]%10);
    }

    return(a[n]%10);
}

int main() {
    int n;
    std::cin >> n;
    int c1 = get_fibonacci_last_digit_fast(n);
    std::cout << c1 << '\n';
    }
