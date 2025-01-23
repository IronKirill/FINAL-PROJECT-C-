#pragma once
#include <iostream>
#include <string>
#include <vector>
using namespace std;

namespace Stations
{
    class ServiceStation
    {
    protected:
        string stationName;
        string stationAddress;
        string vehicleName;
        string repairType;
        string arrivalDate;
        string completionDate;
        string repairResult;
        string staffName;
        double repairCost;

    public:
        ServiceStation();
        ServiceStation(string stationName, string stationAddress, string vehicleName, string repairType,
            string arrivalDate, string completionDate, string repairResult, string staffName, 
            double repairCost);

        void setStationName(string stationName);
        void setStationAddress(string stationAddress);
        void setVehicleName(string vehicleName);
        void setRepairType(string repairType);
        void setArrivalDate(string arrivalDate);
        void setCompletionDate(string completionDate);
        void setRepairResult(string repairResult);
        void setStaffName(string staffName);
        void setRepairCost(double repairCost);

        string getStationName() const;
        string getStationAddress() const;
        string getVehicleName() const;
        string getRepairType() const;
        string getArrivalDate() const;
        string getCompletionDate() const;
        string getRepairResult() const;
        string getStaffName() const;
        double getRepairCost() const;

        virtual void showInfo() const;
    };
}