#include <iostream>
#include <random>
using namespace std;

int main(){
    random_device r;
    mt19937 gen(r());
    uniform_int_distribution<int> uniform_dist(1, 6);
    for (int n=0; n<4; ++n)
    {
    cout<<uniform_dist(gen)<<' ';
    }
    return 0;
}
