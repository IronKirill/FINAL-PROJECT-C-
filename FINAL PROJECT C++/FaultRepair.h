#pragma once
#include "ServiceStation.h"

namespace Stations
{
    class FaultRepair : public ServiceStation
    {
    private:
        string faultName;
        string repairDescription;

    public:
        FaultRepair();
        FaultRepair(string stationName, string stationAddress, string vehicleName, string repairType, 
            string arrivalDate, string completionDate, string repairResult, string staffName, 
            double repairCost, string faultName, string repairDescription);

        void setFaultName(string faultName);
        void setRepairDescription(string repairDescription);

        string getFaultName() const;
        string getRepairDescription() const;

        void showInfo() const override;
    };
}