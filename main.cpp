//
//  main.cpp
//  times tables in c++
//
//  Created by Eun Jae Lee on 30/11/17.
//  Copyright © 2017 Eun Jae Lee. All rights reserved.
//

#include <iostream>
using namespace std;
int main(int argc, const char * argv[]) {

    int a,b,c;
    
    for (a=1; a<12; a++) {
            cout<<endl;
        for (b=1; b<12; b++) {
            c = a*b;
            cout<<a<<"x"<<b<<"="<<c;
            cout<<endl;
        }
    }
}
