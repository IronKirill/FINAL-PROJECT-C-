#include "TransportMaintenance.h"

Stations::Maintenance::TransportMaintenance::TransportMaintenance()
{
    checkupType = "undefined";
    year = 0;
    mileage = 0;
    period = 0;
}

Stations::Maintenance::TransportMaintenance::TransportMaintenance(string stationName, string stationAddress, 
    string vehicleName, string repairType, string arrivalDate, string completionDate, string repairResult, 
    string staffName, double repairCost, string checkupType, int year, int mileage, int period)
    :ServiceStation(stationName, stationAddress, vehicleName, repairType, arrivalDate, completionDate, 
        repairResult, staffName, repairCost)
{
    this->checkupType = checkupType;
    this->year = year;
    this->mileage = mileage;
    this->period = period;
}

void Stations::Maintenance::TransportMaintenance::setCheckupType(string checkupType)
{
    this->checkupType = checkupType;
}

void Stations::Maintenance::TransportMaintenance::setYear(int year)
{
    this->year = year;
}

void Stations::Maintenance::TransportMaintenance::setMileage(int mileage)
{
    this->mileage = mileage;
}

void Stations::Maintenance::TransportMaintenance::setPeriod(int period)
{
    this->period = period;
}

string Stations::Maintenance::TransportMaintenance::getCheckupType() const
{
    return checkupType;
}

int Stations::Maintenance::TransportMaintenance::getYear() const
{
    return year;
}

int Stations::Maintenance::TransportMaintenance::getMileage() const
{
    return mileage;
}

int Stations::Maintenance::TransportMaintenance::getPeriod() const
{
    return period;
}

void Stations::Maintenance::TransportMaintenance::showInfo() const
{
    ServiceStation::showInfo();
    cout << "Checkup Type: " << checkupType << endl;
    cout << "Year: " << year << endl;
    cout << "Mileage: " << mileage << endl;
    cout << "Period: " << period << endl;
    cout << endl;
}