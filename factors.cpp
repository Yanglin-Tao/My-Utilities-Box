//
//  main.cpp
//  factors
//
//  Created by Yanglin Tao on 10/11/21.
//

#include <iostream>
#include <vector>
using namespace std;

vector<int> factor(int num){
    vector<int> factors;
    for(int i = 1; i < num; i++){
        if(num % i == 0){
            factors.push_back(i);
        }
    }
    return factors;
}

int main(int argc, const char * argv[]) {
    // insert code here...
    vector<int> output = factor(3675);
    for(size_t i = 0; i < output.size();i++){
        cout << output[i] << endl;
    }
}
