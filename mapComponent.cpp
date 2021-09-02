#include <iostream>
#include "mapComponent.h"

MapComponent::MapComponent(string mapString, bool hasShip){
    this->mapString = mapString;
    this->hasShip = hasShip;
}

MapComponent::MapComponent(){

}
void MapComponent::setMapString(string mapString){
    this->mapString = mapString;
}

string MapComponent::getMapString(){
    return this->mapString;
}

void MapComponent::setHasShip(bool hasShip){
    this->hasShip = hasShip;
}

bool MapComponent::getHasShip(){
    return this->hasShip;
}

