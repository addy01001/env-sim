#pragma once
#include <vector>
#include "life.h"

using namespace std;
class Environment {
    public:
        vector<Life &> env;
        int food;
        int water;
        int energy;

        Environment();
};