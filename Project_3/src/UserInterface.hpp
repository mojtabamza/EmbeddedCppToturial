#pragma once

#include "ObserverPattern.hpp"
#include "GeoData.hpp"
#include <iostream>

using std::cout;
using std::endl;

class Gui_t : public Observer_t {
    public:
    Gui_t(GeoData_t& geoData) : geoDataObj(geoData) {}
    void Update(void) override {
        cout << "Data : " << this->geoDataObj.GetGeoData() << endl;
    }
    private:
    GeoData_t& geoDataObj;
};