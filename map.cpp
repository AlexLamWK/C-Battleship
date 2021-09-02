#include <iostream>
#include "map.h"

Map::Map(){
    initMap();
}

void Map::initMap(){
    for(int i = 0; i < 10; i++){
        for(int j = 0; j<10; j++){
            MapComponent mc = MapComponent(" .", false);
            mcs[i][j] = mc;
        }
    }
}

void Map::printMap(){
    for(int i = 0; i < 10; i++){
        if (i==0){
            cout << "  0 1 2 3 4 5 6 7 8 9 <- X" << endl;
        }
        cout << i ;

        for(int j = 0; j<10; j++){
            cout << mcs[i][j].getMapString();
        }

        if (i==9){
            cout << endl;
            cout << "^" << endl;
            cout << "Y" << endl;
        }
        cout << endl;
    }
}

void Map::setMap(int x, int y, string direction){
    if (direction == "horizontal"){
        for(int j = y; j<10; j++){
            mcs[x][j].setMapString(" S");
            mcs[x][j].setHasShip(true);
        }
    }

    

}