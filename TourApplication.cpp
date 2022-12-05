//
// Created by Alexey Dubovik on 5.12.22.
//

#include "TourApplication.h"

const string &TourApplication::getTypeOfTransport() const {
    return typeOfTransport;
}

TourApplication::TourApplication(const string &firstName, const string &secondName, const string &destination,
                                 const string &dateOfDeparture, int numberOfDays, int numberOfAdults,
                                 int numberOfChuldren, const string &typeOfTransport, int numberOfCities,
                                 const vector<string> &cities) : BasicApplication(firstName, secondName, destination,
                                                                                  dateOfDeparture, numberOfDays,
                                                                                  numberOfAdults, numberOfChuldren),
                                                                 typeOfTransport(typeOfTransport),
                                                                 numberOfCities(numberOfCities), cities(cities) {}

void TourApplication::setTypeOfTransport(const string &typeOfTransport) {
    TourApplication::typeOfTransport = typeOfTransport;
}

int TourApplication::getNumberOfCities() const {
    return numberOfCities;
}

void TourApplication::setNumberOfCities(int numberOfCities) {
    TourApplication::numberOfCities = numberOfCities;
}
