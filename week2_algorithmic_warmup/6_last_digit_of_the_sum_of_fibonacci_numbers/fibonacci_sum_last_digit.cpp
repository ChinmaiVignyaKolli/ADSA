#include <iostream>

int fibonacci_sum_naive(long long n) {
    if (n <= 1)
        return n;

    long long previous = 0;
    long long current  = 1;
    long long sum      = 1;

    for (long long i = 0; i < n - 1; ++i) {
        long long tmp_previous = previous;
        previous = current;
        current = tmp_previous + current;
        sum += current;
    }

    return sum % 10;
}
int fibonacci(long long n){
long long a[n+1];
    a[0] = 0;
    a[1] = 1;
    for(int i =2;i<=n;i++)
    {
        a[i] = (a[i-1]%10) + (a[i-2]%10);
    }

    return(a[n]%10);

}

int fibonacci_sum_fast(long long n) {
  
    if (n <= 2)
        return n;
    long long a[n+1];
    a[0] = 0;
    a[1] = 1;
    long long sum=1;
    for(int i =2;i<=n;i++)
    {
        a[i] = (a[i-1]%10) + (a[i-2]%10);
        a[i] = a[i]%10;
        sum = sum+a[i];
    }


    return(sum%10); 
}

void power()
{
    if (n==0|n==1)
        return;
    int M[2][2] = {[1,1],[1,0]};

    power(F,n/2);
    multiply(F,F);

    if(n%2!=0){
        multiply(F,M);
    }
}


void multiply(int F[2][2],int M[2][2])
{
    int x = F[0][0]*M[0][0]+F[0][1]*M[1][0];
    int y = F[0][0]*M[0][1]+F[0][1]*M[1][1];
    int z = F[1][0]*M[0][0]+F[1][1]*M[1][0];
    int w = F[1][0]*M[0][1]+F[1][1]*M[1][1];

    F[0][0] = x;
    F[0][1] = y;
    F[1][0] = z;
    F[1][1] = a;

}

int main() {
    long long n = 0;
    std::cin >> n;
    //std::cout << fibonacci_sum_naive(n)<<std::endl;
    std::cout << fibonacci_sum_fast(n)<<std::endl;

}
