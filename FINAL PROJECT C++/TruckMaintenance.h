#pragma once
#include "TransportMaintenance.h"

namespace Stations
{
	namespace Maintenance
	{
        class TruckMaintenance : public ServiceStation
        {
        private:
            string checkupType;
            int year;
            int mileage;
            int period;
            double engineCapacity;

        public:
            TruckMaintenance();
            TruckMaintenance(string stationName, string stationAddress, string vehicleName,
                string repairType, string arrivalDate, string completionDate, string repairResult, 
                string staffName, double repairCost, string checkupType, int year, int mileage, 
                int period, double engineCapacity);

            void setCheckupType(string checkupType);
            void setYear(int year);
            void setMileage(int mileage);
            void setPeriod(int period);
            void setEngineCapacity(double engineCapacity);

            string getCheckupType() const;
            int getYear() const;
            int getMileage() const;
            int getPeriod() const;
            double getEngineCapacity() const;

            void showInfo() const override;
        };
	}
}