#include "ServiceStation.h"
#include "TransportMaintenance.h"
#include "FaultRepair.h"
#include "TruckMaintenance.h"
#include "Container.h"

int main()
{
    Container container;
    int choice;

    do
    {
        cout << "_________________________________________" << endl;
        cout << "| SERVICE STATION MANAGEMENT SYSTEM:    |" << endl;
        cout << "|                                       |" << endl;
        cout << "| 1 - ADD STATION                       |" << endl;
        cout << "| 2 - SHOW STATIONS                     |" << endl;
        cout << "| 3 - DELETE STATION                    |" << endl;
        cout << "| 4 - EXIT                              |" << endl;
        cout << "|_______________________________________|" << endl;
        cout << endl;
        cout << "Enter your choice: ";
        cout << endl;
        cin >> choice;
        switch (choice)
        {
        case 1:
        {
            int type;
            cout << "Choose type of stations: (1 - ServiceStation, 2 - TransportMaintenance, 3 - FaultRepair, 4 - TruckMaintenance): ";
            cin >> type;

            if (type == 1)
            {
                string stationName, stationAddress, vehicleName, repairType, arrivalDate, completionDate, 
                    repairResult, staffName;
                double repairCost;
                cout << "Enter Station Name, Station Address, Vehicle Name, Repair Type, Arrival Date, Completion Date, Repair Result, Staff Name, Repair Cost: ";
                cout << endl;
                cin >> stationName >> stationAddress >> vehicleName >> repairType >> arrivalDate >>
                    completionDate >> repairResult >> staffName >> repairCost;

                container.addStation(make_shared<Stations::ServiceStation>
                    (stationName, stationAddress, vehicleName, repairType, arrivalDate, 
                        completionDate, repairResult, staffName, repairCost));
            }

            if (type == 2)
            {
                string stationName, stationAddress, vehicleName, repairType, arrivalDate, completionDate,
                    repairResult, staffName, checkupType;
                int year, mileage, period;
                double repairCost;
                cout << endl;
                cout << "Enter Station Name, Station Address, Vehicle Name, Repair Type, Arrival Date, Completion Date, Repair Result, Staff Name, Repair Cost, Checkup Type, Year, Mileage, Period: ";
                cout << endl;
                cin >> stationName >> stationAddress >> vehicleName >> repairType >> arrivalDate >> 
                    completionDate >> repairResult >> staffName >> repairCost >> checkupType >> year >> 
                    mileage >> period;
                container.addStation(make_shared<Stations::Maintenance::TransportMaintenance>
                    (stationName, stationAddress, vehicleName, repairType, arrivalDate, completionDate,
                        repairResult, staffName, repairCost, checkupType, year, mileage, period));
            }

            else if (type == 3)
            {
                string stationName, stationAddress, vehicleName, repairType, arrivalDate, completionDate,
                    repairResult, staffName, faultName, repairDescription;
                double repairCost;
                cout << endl;
                cout << "Enter Station Name, Station Address, Vehicle Name, Repair Type, Arrival Date, Completion Date, Repair Result, Staff Name, Repair Cost, Fault Name, Repair Description: ";
                cout << endl;
                cin >> stationName >> stationAddress >> vehicleName >> repairType >> arrivalDate >> 
                    completionDate >> repairResult >> staffName >> repairCost >> faultName >> 
                    repairDescription;
                container.addStation(make_shared<Stations::FaultRepair>
                    (stationName, stationAddress, vehicleName, repairType, arrivalDate, completionDate,
                        repairResult, staffName, repairCost, faultName, repairDescription));
            }

            else if (type == 4)
            {
                string stationName, stationAddress, vehicleName, repairType, arrivalDate, completionDate,
                    repairResult, staffName, checkupType;
                int year, mileage, period;
                double repairCost, engineCapacity;
                cout << endl;
                cout << "Station Name, Station Address, Vehicle Name, Repair Type, Arrival Date, Completion Date, Repair Result, Staff Name, Repair Cost, Checkup Type, Year, Mileage, Period, Engine Capacity: ";
                cout << endl;
                cin >> stationName >> stationAddress >> vehicleName >> repairType >> arrivalDate >>
                    completionDate >> repairResult >> staffName >> repairCost >> checkupType >> year >>
                    mileage >> period >> engineCapacity;
                container.addStation(make_shared<Stations::Maintenance::TruckMaintenance>
                    (stationName, stationAddress, vehicleName, repairType, arrivalDate, completionDate,
                        repairResult, staffName, repairCost, checkupType, year, mileage, period, 
                        engineCapacity));
            }

            else
            {
                
            }
            break;
        }
        case 2:
            container.showStations();
            break;
        case 3:
        {
            int index;
            cout << "Enter the index to delete: ";
            cin >> index;
            container.deleteStation(index - 1);
            break;
        }
        case 4:
            cout << "Exiting the program" << endl;
            break;
        default:
            cout << "Error!!!" << endl;
        }
    } while (choice != 4);
}