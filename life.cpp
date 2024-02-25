#include "life.h"
#include <stdio.h>
#include <iostream>
#include "utils/random_str.h"

Life::Life(char* str) {
    this->name = str;
    this->gene = generate_random_string(100);
    this->alive = true;
    this->energy = 100;
    this->food = 80;
    this->water = 80;
    this->degradation_factor = 1;

    printf("Life instantiated %s..", str);
}

void Life::live() {
    this->energy -= this->degradation_factor;
    this->water -=this->degradation_factor;
    this->food -=this->degradation_factor;
    if(this->food == 100 && this->water == 100 && this->energy == 100) {
        this->replicate();
    }
    if(this->energy < 10) this->alive=false;
    cout<<"Executing life for "<<this->name<<" with energy "<<this->energy<<endl;
}

void Life::replicate() {
    Life new_life(generate_random_string(10));
}

void Life::sleep() {
    this->energy +=10;
}

void Life::set_env(vector<Life> env) {
    this->env = env;
}