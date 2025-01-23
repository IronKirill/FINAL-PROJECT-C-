#include "ServiceStation.h"

Stations::ServiceStation::ServiceStation()
{
    stationName = "undefined";
    stationAddress = "undefined";
    vehicleName = "undefined";
    repairType = "undefined";
    arrivalDate = "undefined";
    completionDate = "undefined";
    repairResult = "undefined";
    staffName = "undefined";
    repairCost = 0;
}

Stations::ServiceStation::ServiceStation(string stationName, string stationAddress, string vehicleName, 
    string repairType, string arrivalDate, string completionDate, string repairResult, string staffName, 
    double repairCost)
{
    this->stationName = stationName;
    this->stationAddress = stationAddress;
    this->vehicleName = vehicleName;
    this->repairType = repairType;
    this->arrivalDate = arrivalDate;
    this->completionDate = completionDate;
    this->repairResult = repairResult;
    this->staffName = staffName;
    this->repairCost = repairCost;
}

void Stations::ServiceStation::setStationName(string stationName)
{
    this->stationName = stationName;
}

void Stations::ServiceStation::setStationAddress(string stationAddress)
{
    this->stationAddress = stationAddress;
}

void Stations::ServiceStation::setVehicleName(string vehicleName)
{
    this->vehicleName = vehicleName;
}

void Stations::ServiceStation::setRepairType(string repairType)
{
    this->repairType = repairType;
}

void Stations::ServiceStation::setArrivalDate(string arrivalDate)
{
    this->arrivalDate = arrivalDate;
}

void Stations::ServiceStation::setCompletionDate(string completionDate)
{
    this->completionDate = completionDate;
}

void Stations::ServiceStation::setRepairResult(string repairResult)
{
    this->repairResult = repairResult;
}

void Stations::ServiceStation::setStaffName(string staffName)
{
    this->staffName = staffName;
}

void Stations::ServiceStation::setRepairCost(double repairCost)
{
    this->repairCost = repairCost;
}

string Stations::ServiceStation::getStationName() const
{
    return stationName;
}

string Stations::ServiceStation::getStationAddress() const
{
    return stationAddress;
}

string Stations::ServiceStation::getVehicleName() const
{
    return vehicleName;
}

string Stations::ServiceStation::getRepairType() const
{
    return repairType;
}

string Stations::ServiceStation::getArrivalDate() const
{
    return arrivalDate;
}

string Stations::ServiceStation::getCompletionDate() const
{
    return completionDate;
}

string Stations::ServiceStation::getRepairResult() const
{
    return repairResult;
}

string Stations::ServiceStation::getStaffName() const
{
    return staffName;
}

double Stations::ServiceStation::getRepairCost() const
{
    return repairCost;
}

//Stations::ServiceStation::~ServiceStation()
//{
//    cout << "Service Station was destroyed!";
//}

void Stations::ServiceStation::showInfo() const
{
    cout << "Station Name: " << stationName << endl;
    cout << "Station Address: " << stationAddress << endl;
    cout << "Vehicle Name: " << vehicleName << endl;
    cout << "Repair Type: " << repairType << endl;
    cout << "Arrival Date: " << arrivalDate << endl;
    cout << "Completion Date: " << completionDate << endl;
    cout << "Repair Result: " << repairResult << endl;
    cout << "Staff Name: " << staffName << endl;
    cout << "Repair Cost: " << repairCost << endl;
    cout << endl;
}