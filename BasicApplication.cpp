
#include "BasicApplication.h"
#include <string>
using namespace std;


const string &BasicApplication::getFirstName() const {
    return firstName;
}

void BasicApplication::setFirstName(const string &firstName) {
    BasicApplication::firstName = firstName;
}

const string &BasicApplication::getSecondName() const {
    return secondName;
}

void BasicApplication::setSecondName(const string &secondName) {
    BasicApplication::secondName = secondName;
}

const string &BasicApplication::getDestination() const {
    return destination;
}

void BasicApplication::setDestination(const string &destination) {
    BasicApplication::destination = destination;
}

const string &BasicApplication::getDateOfDeparture() const {
    return dateOfDeparture;
}

void BasicApplication::setDateOfDeparture(const string &dateOfDeparture) {
    BasicApplication::dateOfDeparture = dateOfDeparture;
}

int BasicApplication::getNumberOfDays() const {
    return numberOfDays;
}

void BasicApplication::setNumberOfDays(int numberOfDays) {
    BasicApplication::numberOfDays = numberOfDays;
}

int BasicApplication::getNumberOfAdults() const {
    return numberOfAdults;
}

void BasicApplication::setNumberOfAdults(int numberOfAdults) {
    BasicApplication::numberOfAdults = numberOfAdults;
}

int BasicApplication::getNumberOfChuldren() const {
    return numberOfChuldren;
}

void BasicApplication::setNumberOfChuldren(int numberOfChuldren) {
    BasicApplication::numberOfChuldren = numberOfChuldren;
}

BasicApplication::BasicApplication(const string &firstName, const string &secondName, const string &destination,
                                   const string &dateOfDeparture, int numberOfDays, int numberOfAdults,
                                   int numberOfChuldren) : firstName(firstName), secondName(secondName),
                                                           destination(destination), dateOfDeparture(dateOfDeparture),
                                                           numberOfDays(numberOfDays), numberOfAdults(numberOfAdults),
                                                           numberOfChuldren(numberOfChuldren) {}

BasicApplication::~BasicApplication() {

}

ostream &std::operator<<(ostream &os, const BasicApplication &application) {
    os << "firstName: " << application.firstName << " secondName: " << application.secondName << " destination: "
       << application.destination << " dateOfDeparture: " << application.dateOfDeparture << " numberOfDays: "
       << application.numberOfDays << " numberOfAdults: " << application.numberOfAdults << " numberOfChuldren: "
       << application.numberOfChuldren;
    return os;
}
