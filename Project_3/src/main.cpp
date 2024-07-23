#include <iostream>
#include "GeoData.hpp"
#include "UserInterface.hpp"

using std::cout;
using std::endl;



int main(void) {
    
    GeoData_t geoDataObj;
    Gui_t guiObj(geoDataObj);
    geoDataObj.Attach(guiObj);
    cout << "Data Observer Project" << endl;
    while (1)
    {
        geoDataObj.GenerateData();

    }
    
    return 0;
}