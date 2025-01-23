#include "Container.h"

void Container::addStation(shared_ptr<Stations::ServiceStation> station)
{
	stations.push_back(station);
	cout << "Added Successfully!" << endl;
}

void Container::showStations() const
{
	for (auto& station : stations)
	{
		station->showInfo();
	}
}

void Container::deleteStation(int index)
{
	if (index >= 0 && index < stations.size())
	{
		stations.erase(stations.begin() + index);
		cout << "Deleted Successfully!" << endl;
	}
	else
	{
		cout << "Error!!!" << endl;
	}
}