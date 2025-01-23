#include "TruckMaintenance.h"

Stations::Maintenance::TruckMaintenance::TruckMaintenance()
{
    checkupType = "undefined";
    year = 0;
    mileage = 0;
    period = 0;
    engineCapacity = 0;
}

Stations::Maintenance::TruckMaintenance::TruckMaintenance(string stationName, string stationAddress, 
    string vehicleName, string repairType, string arrivalDate, string completionDate, 
    string repairResult, string staffName, double repairCost, string checkupType, 
    int year, int mileage, int period, double engineCapacity)
    :ServiceStation(stationName, stationAddress, vehicleName, repairType, arrivalDate, completionDate,
        repairResult, staffName, repairCost)
{
    this->checkupType = checkupType;
    this->year = year;
    this->mileage = mileage;
    this->period = period;
    this->engineCapacity = engineCapacity;
}

void Stations::Maintenance::TruckMaintenance::setCheckupType(string checkupType)
{
    this->checkupType = checkupType;
}

void Stations::Maintenance::TruckMaintenance::setYear(int year)
{
    this->year = year;
}

void Stations::Maintenance::TruckMaintenance::setMileage(int mileage)
{
    this->mileage = mileage;
}

void Stations::Maintenance::TruckMaintenance::setPeriod(int period)
{
    this->period = period;
}

void Stations::Maintenance::TruckMaintenance::setEngineCapacity(double engineCapacity)
{
    this->engineCapacity = engineCapacity;
}

string Stations::Maintenance::TruckMaintenance::getCheckupType() const
{
    return checkupType;
}

int Stations::Maintenance::TruckMaintenance::getYear() const
{
    return year;
}

int Stations::Maintenance::TruckMaintenance::getMileage() const
{
    return mileage;
}

int Stations::Maintenance::TruckMaintenance::getPeriod() const
{
    return period;
}

double Stations::Maintenance::TruckMaintenance::getEngineCapacity() const
{
    return engineCapacity;
}

void Stations::Maintenance::TruckMaintenance::showInfo() const
{
    ServiceStation::showInfo();
    cout << "Checkup Type: " << checkupType << endl;
    cout << "Year: " << year << endl;
    cout << "Mileage: " << mileage << endl;
    cout << "Period: " << period << endl;
    cout << "Engine Capacity: " << engineCapacity << endl;
    cout << endl;
}
