#include <iostream>
using namespace std;

class MapComponent{
    private:
        string mapString;
        bool hasShip;
    
    public: MapComponent();

    public: MapComponent(string mapString, bool hasShip);

    void setMapString(string mapString);

    string getMapString();

    void setHasShip(bool hasShip);

    bool getHasShip();
};