#include "FaultRepair.h"

Stations::FaultRepair::FaultRepair()
{
    faultName = "undefined";
    repairDescription = "undefined";
}

Stations::FaultRepair::FaultRepair(string stationName, string stationAddress, string vehicleName, 
    string repairType, string arrivalDate, string completionDate, string repairResult, string staffName, 
    double repairCost, string faultName, string repairDescription)
    :ServiceStation(stationName, stationAddress, vehicleName, repairType, arrivalDate, completionDate,
        repairResult, staffName, repairCost)
{
    this->faultName = faultName;
    this->repairDescription = repairDescription;
}

void Stations::FaultRepair::setFaultName(string faultName)
{
    this->faultName = faultName;
}

void Stations::FaultRepair::setRepairDescription(string repairDescription)
{
    this->repairDescription = repairDescription;
}

string Stations::FaultRepair::getFaultName() const
{
    return faultName;
}

string Stations::FaultRepair::getRepairDescription() const
{
    return repairDescription;
}

void Stations::FaultRepair::showInfo() const
{
    ServiceStation::showInfo();
    //cout << "------------------------------------------\n";
    cout << "Fault Name: " << faultName << endl;
    cout << "Repair Description: " << repairDescription << endl;
    cout << endl;
}