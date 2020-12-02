#include <iostream>
#include <random>
using namespace std;

int main(){
    random_device r;
    mt19937 gen(r());
    uniform_int_distribution<int> uniform_dist(1, 6);
    return(uniform_dist(gen));
}
