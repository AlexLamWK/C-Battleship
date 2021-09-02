#include <iostream>
#include "user.h"

User::User(string name){
    this->name = name;
}

void User::setUser(string name){
    this->name = name;
}

string User::getUser(){
    return name;
}