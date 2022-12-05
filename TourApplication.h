//
// Created by Alexey Dubovik on 5.12.22.
//

#ifndef KRNMV2_TOURAPPLICATION_H
#define KRNMV2_TOURAPPLICATION_H
#include "BasicApplication.h"
#include <string>
#include <vector>
using namespace std;

class TourApplication : public std::BasicApplication{
public:
    TourApplication(const string &firstName, const string &secondName, const string &destination,
                    const string &dateOfDeparture, int numberOfDays, int numberOfAdults, int numberOfChuldren,
                    const string &typeOfTransport, int numberOfCities, const vector<string> &cities);

    const string &getTypeOfTransport() const;

    void setTypeOfTransport(const string &typeOfTransport);

    int getNumberOfCities() const;

    void setNumberOfCities(int numberOfCities);

private:
    string typeOfTransport;
    int numberOfCities;
    vector<string> cities;
};


#endif //KRNMV2_TOURAPPLICATION_H
