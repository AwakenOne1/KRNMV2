
#ifndef KRNMV2_BASICAPPLICATION_H
#define KRNMV2_BASICAPPLICATION_H
#include <string>
#include <ostream>

namespace std {

    class BasicApplication {
    private :
        string firstName;
        string secondName;
        string destination;
        string dateOfDeparture;
        int numberOfDays;
        int numberOfAdults;
        int numberOfChuldren;

    public :
        BasicApplication(const string &firstName, const string &secondName, const string &destination,
                         const string &dateOfDeparture, int numberOfDays, int numberOfAdults, int numberOfChuldren);

        void virtual print()=0;

        const string &getFirstName() const;

        void setFirstName(const string &firstName);

        const string &getSecondName() const;

        void setSecondName(const string &secondName);

        const string &getDestination() const;

        void setDestination(const string &destination);

        const string &getDateOfDeparture() const;

        void setDateOfDeparture(const string &dateOfDeparture);

        int getNumberOfDays() const;

        void setNumberOfDays(int numberOfDays);

        int getNumberOfAdults() const;

        void setNumberOfAdults(int numberOfAdults);

        int getNumberOfChuldren() const;

        void setNumberOfChuldren(int numberOfChuldren);

        virtual ~BasicApplication();

        friend ostream &operator<<(ostream &os, const BasicApplication &application);
    };

} // std

#endif //KRNMV2_BASICAPPLICATION_H
