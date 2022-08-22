#include <iostream>
#include <vector>

using std::cin;
using std::cout;
using std::vector;
using std::max;

int compute_min_refills(int dist, int tank, vector<int> & stops) {
    // write your code here
    int count = 0;
    int current= 0;
    int prev = 0;
    stops[stops.size()] = dist;

    while(current < stops.size())
    {
        prev = current;
        while((current < (stops.size() )) && (stops[current + 1] - stops[prev] <= tank))
        {
            current++;
            if(current == stops.size())
                break;
        }
  
        if(current == prev)
            return -1;

        if(current < stops.size())
            count++;
    }
    return count;
    
    
}


int main() {
    int d = 0;
    cin >> d;
    int m = 0;
    cin >> m;
    int n = 0;
    cin >> n;

    vector<int> stops(n);
    for (size_t i = 0; i < n; ++i)
        cin >> stops.at(i);

    cout << compute_min_refills(d, m, stops) << "\n";

    return 0;
}