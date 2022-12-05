//
// Created by Alexey Dubovik on 5.12.22.
//

#ifndef KRNMV2_MAINACTIVITY_H
#define KRNMV2_MAINACTIVITY_H
#include <iostream>;
#include "BasicApplication.h"
#include "HotelApplication.h"
#include "TourApplication.h"
using namespace std;


class MainActivity {
private:
    vector<BasicApplication> ListOfApplications;
public:
   static void Menu();
private:
    void CreatingHotelApplication();
};


#endif //KRNMV2_MAINACTIVITY_H
