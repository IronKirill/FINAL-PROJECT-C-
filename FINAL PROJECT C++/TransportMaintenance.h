#pragma once
#include "ServiceStation.h"

namespace Stations 
{
    namespace Maintenance
    {
        class TransportMaintenance : public ServiceStation
        {
        private:
            string checkupType;
            int year;
            int mileage;
            int period;

        public:
            TransportMaintenance();
            TransportMaintenance(string stationName, string stationAddress, string vehicleName, 
                string repairType, string arrivalDate, string completionDate, string repairResult, 
                string staffName, double repairCost, string checkupType, int year, int mileage, int period);

            void setCheckupType(string checkupType);
            void setYear(int year);
            void setMileage(int mileage);
            void setPeriod(int period);

            string getCheckupType() const;
            int getYear() const;
            int getMileage() const;
            int getPeriod() const;

            void showInfo() const override;
        };
    }
}