#include <iostream>
#include <random>
using namespace std;

int main(){
    random_device r;
    mt19937 gen(r());
    uniform_int_distribution<int> uniform_dist(1, 6);
    for (int i = 0; i < 10; i++)
        cout<<uniform_dist(gen)<<endl;
    return 0;
}
