#include <iostream>
#include "mapComponent.h"
using namespace std;

class Map{

    private: MapComponent mcs[10][10];

    public: Map();

    void initMap();

    void printMap();

    void setMap(int x, int y, string direction);
};


