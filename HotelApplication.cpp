//
// Created by Alexey Dubovik on 5.12.22.
//

#include "HotelApplication.h"

const string &HotelApplication::getTypeOfMeals() const {
    return typeOfMeals;
}

void HotelApplication::setTypeOfMeals(const string &typeOfMeals) {
    HotelApplication::typeOfMeals = typeOfMeals;
}

const string &HotelApplication::getQuality() const {
    return quality;
}

void HotelApplication::setQuality(const string &quality) {
    HotelApplication::quality = quality;
}

const string &HotelApplication::getBudget() const {
    return budget;
}

void HotelApplication::setBudget(const string &budget) {
    HotelApplication::budget = budget;
}

HotelApplication::HotelApplication(const string &firstName, const string &secondName, const string &destination,
                                   const string &dateOfDeparture, int numberOfDays, int numberOfAdults,
                                   int numberOfChildren, const string &typeOfMeals, const string &quality,
                                   const string &budget) : BasicApplication(firstName, secondName, destination,
                                                                            dateOfDeparture, numberOfDays,
                                                                            numberOfAdults, numberOfChildren),
                                                           typeOfMeals(typeOfMeals), quality(quality), budget(budget) {}

HotelApplication::~HotelApplication() {
delete this;
}

ostream &operator<<(ostream &os, const HotelApplication &application) {
    os << static_cast<const BasicApplication &>(application) << " typeOfMeals: " << application.typeOfMeals
       << " quality: " << application.quality << " budget: " << application.budget;
    return os;
}
