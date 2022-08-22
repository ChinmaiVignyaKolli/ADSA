#include <iostream>

long long get_fibonacci_huge_naive(long long n, long long m) {
    if (n <= 1)
        return n;

    long long previous = 0;
    long long current  = 1;

    for (long long i = 0; i < n - 1; ++i) {
        long long tmp_previous = previous;
        previous = current;
        current = tmp_previous + current;
    }

    return current % m;
}

long long get_fibonacci_huge_fast(long long n ,long long m)
{
    if(n<=1)
        return n;

    int repeat_after ;
    
    long long a = 0;
    long long b = 1;
    long long next = a+b;
    for(int i=0;i<n;i++)
    {
        next = (a+b)%m;
        a=b;
        b = next;

        if(a==0 && b==1){
            repeat_after = i+1;
            //std::cout<<i+2<<std::endl;
            break;
            
        }
    }

    
    int n1 = n % repeat_after;
    //std::cout<<n1<<std::endl;
    //std::cout<<n1<<std::endl;
    
    long long a1 = 0;
    long long b1 = 1;
    long long res = n1;
    for(int j=1;j<n1;j++)
    {
        res = (a1+b1)%m;
        a1 = b1;
        b1 = res;

    }

    return(res%m);
}
int main() {
    long long n, m;
    std::cin >> n >> m;

   // std::cout << get_fibonacci_huge_naive(n, m) << '\n';
    std::cout << get_fibonacci_huge_fast(n, m) << '\n';
    
}
