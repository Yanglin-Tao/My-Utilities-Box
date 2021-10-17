//
//  main.cpp
//  sieveOfEratosthenes
//
//  Created by Yanglin Tao on 10/16/21.
//

#include <iostream>
#include <vector>
#include <cmath>

using namespace std;

bool prime(int x){
    for(int i = 2; i <= sqrt(x); i++){
        if(x % i == 0){
            return false;
        }
    }
    return true;
}

int main(int argc, const char * argv[]) {
    vector<int> primes;
    primes.push_back(2);
    int n = 9867;
    for(int i = 3; i <= sqrt(n); i++){
        if(prime(i)){
            primes.push_back(i);
        }
    }
    
    cout << "How many prime numbers? " << primes.size() << endl;
    
    for(size_t i = 0; i < primes.size(); i++){
        cout << primes[i] << endl;
    }
    
}
