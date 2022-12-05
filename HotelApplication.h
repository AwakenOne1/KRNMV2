//
// Created by Alexey Dubovik on 5.12.22.
//

#ifndef KRNMV2_HOTELAPPLICATION_H
#define KRNMV2_HOTELAPPLICATION_H

#include <ostream>
#include "string"
#include "BasicApplication.h"
using namespace std;

class HotelApplication : public BasicApplication {
public:
    HotelApplication(const string &typeOfMeals, const string &quality, const string &budget);

    HotelApplication(const string &firstName, const string &secondName, const string &destination,
                     const string &dateOfDeparture, int numberOfDays, int numberOfAdults, int numberOfChildren,
                     const string &typeOfMeals, const string &quality, const string &budget);

    const string &getTypeOfMeals() const;

    void setTypeOfMeals(const string &typeOfMeals);

    const string &getQuality() const;

    void setQuality(const string &quality);

    const string &getBudget() const;

    void setBudget(const string &budget);

    ~HotelApplication() override;

    friend ostream &operator<<(ostream &os, const HotelApplication &application);

private:
    string typeOfMeals;
    string quality;
    string budget;
};


#endif //KRNMV2_HOTELAPPLICATION_H
