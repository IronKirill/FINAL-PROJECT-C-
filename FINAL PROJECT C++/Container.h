#pragma once
#include "ServiceStation.h"
#include <vector>
#include <memory>

class Container 
{
private:
    vector<shared_ptr<Stations::ServiceStation>> stations;

public:
    void addStation(shared_ptr<Stations::ServiceStation> station);
    void showStations() const;
    void deleteStation(int index);
};
