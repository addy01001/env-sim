#include <stdio.h>
#include <stdlib.h>
#include <vector>
#include <time.h>
#include <algorithm>
#include "utils/random_str.h"
#include "life.h"
#include <iostream>

using namespace std;
int main() {
    vector<Life> env;    
    Life life(generate_random_string(5));
    life.set_env(env);
    env.push_back(life);
    
    while(true) {
        vector<Life *> bar;
        for (auto& life : env) {
            if (life.alive) {
                bar.push_back(&life);
            }
        }

        if(bar.size()==0) {
            cout<<"All Life have passed away"<<endl;
            break;
        }

        for(int i=0; i<bar.size(); i++) {
            (*bar[i]).live();
        }
    }
    
    return 0;
}