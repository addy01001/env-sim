#pragma once
#include "vector"

using namespace std;
class Life {
    private:
        char* gene;
        int food;
        int water;
        int energy;
        int degradation_factor;
        vector<Life> env;
        
    public:
        char* name;
        bool alive;

        void live();
        void replicate();
        void sleep();
        void set_env(vector<Life> env);

        Life(char* str);
};