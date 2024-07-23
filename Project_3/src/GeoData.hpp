#pragma once
#include "ObserverPattern.hpp"

class GeoData_t : public Observable_t {
    public:
    GeoData_t() : geoData(0) {}
    void GenerateData(void) {
        this->geoData = rand() / 99.0;
        this->Notify();
    }
    float GetGeoData(void) {
        return this->geoData;
    }
    private:
    float geoData;

};