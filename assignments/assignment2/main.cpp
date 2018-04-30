/* main.cpp
 * Programming for Mechatronic systems
 * Assignment 2
 *
 * @author: Jamin Early 99133391
 * @date: Week 5-7 Autumn Semester 2018
 */

#include <iostream>
#include <vector>
#include "ranger.h"
#include "radar.h"
#include "laser.h"
#include "rangerfusion.h"
using namespace std;

// All of the user configurable values
#define LASER_BAUD        38400
#define LASER_XOFFSET     0
#define LASER_OOFFSET     0
#define LASER_TTY         2
#define LASER_ANGULAR_RES 30

#define RADAR1_BAUD       38400
#define RADAR1_XOFFSET    0
#define RADAR1_OOFFSET    0
#define RADAR1_TTY        1

#define RADAR2_BAUD       115200
#define RADAR2_XOFFSET    0
#define RADAR2_OOFFSET    0
#define RADAR2_TTY        0

// Decleration of objects
Laser laser;
Radar radar1;
Radar radar2;

// Placeholder functions
void startSensors();
void initLaser();
void initRadar1();
void initRadar2();

// Calls the init function for the laser and two radars
void startSensors()
{
    initLaser();
    initRadar1();
    initRadar2();
}

// Prints the default values and configures user defined values for the laser.
void initLaser()
{
    cout << "Initialising laser. Fixed Parameters are as follows." << endl;
    cout << "Model Number: UTM-XXL" << endl;
    cout << "FOV: " << laser.getFov() << endl;
    cout << "Min distance: " << laser.getMinDistance() << endl;
    cout << "Max distance: " << laser.getMaxDistance() << endl << endl;
    cout << "Configuring user defined variables:" << endl;
    Laser();
    if (laser.setBaudRate(LASER_BAUD))
    {
        cout << "Baud Rate set: " << laser.getBaudRate() << endl;
    }
    else
    {
        cout << "Invalid baud rate. Default value used: " << laser.getBaudRate() << endl;
    }
    if (laser.setXOffset(LASER_XOFFSET))
    {
        cout << "X offset set: " << laser.getXOffset() << endl;
    }
    else
    {
        cout << "Invalid offset. Default value used: " << laser.getXOffset() << endl;
    }
    if (laser.setOOffset(LASER_OOFFSET))
    {
        cout << "Orientation offset set: " << laser.getOOffset() << endl;
    }
    else
    {
        cout << "Invalid orientation offset. Default value used: " << laser.getOOffset() << endl;
    }
    if (radar1.getTty() != LASER_TTY && radar2.getTty() != LASER_TTY && laser.setTtyACM(LASER_TTY))
    {
        cout << "Laser has been attached as ttyACM" << LASER_TTY << endl;
    }
    else
    {
        if (radar1.getTty() == 0 || radar2.getTty() == 0)
        {
            if (radar1.getTty() == 1 || radar2.getTty() == 1)
            {
                laser.setTtyACM(2);
                cout << "Laser has been attached to ttyACM2" << endl;
            }
            else
            {
                laser.setTtyACM(1);
                cout << "Laser has been attached to ttyACM1" << endl;
            }
        }
        else
        {
            laser.setTtyACM(0);
            cout << "Laser has been attached to ttyACM0" << endl;
        }
    }
    if (laser.setAngularRes(LASER_ANGULAR_RES))
    {
        cout << "Angular Resolution set: " << laser.getAngularRes() << endl << endl;
    }
    else
    {
        cout << "Invalid Angular Resolution. Default value used: " << laser.getAngularRes() << endl << endl;
    }
}

// Prints the default values and configures user defined values for radar 1.
void initRadar1()
{
    cout << "Initialising Radar 1. Fixed Parameters are as follows." << endl;
    cout << "Model Number: RAD-001" << endl;
    cout << "FOV: " << radar1.getFov() << endl;
    cout << "Angular Resolution: " << radar1.getAngularRes() << endl;
    cout << "Min distance: " << radar1.getMinDistance() << endl;
    cout << "Max distance: " << radar1.getMaxDistance() << endl << endl;
    cout << "Configuring user defined variables:" << endl;
    if (radar1.setBaudRate(RADAR1_BAUD))
    {
        cout << "Baud Rate set: " << radar1.getBaudRate() << endl;
    }
    else
    {
        cout << "Invalid baud rate. Default value used: " << radar1.getBaudRate() << endl;
    }
    if (radar1.setXOffset(RADAR1_XOFFSET))
    {
        cout << "X offset set: " << radar1.getXOffset() << endl;
    }
    else
    {
        cout << "Invalid offset. Default value used: " << radar1.getXOffset() << endl;
    }
    if (radar1.setOOffset(RADAR1_OOFFSET))
    {
        cout << "Orientation offset set: " << radar1.getOOffset() << endl;
    }
    else
    {
        cout << "Invalid orientation offset. Default value used: " << radar1.getOOffset() << endl;
    }
    if (laser.getTty() != RADAR1_TTY && radar2.getTty() != RADAR1_TTY && radar1.setTtyACM(RADAR1_TTY))
    {
        cout << "Radar 1 has been attached as ttyACM" << RADAR1_TTY << endl << endl;
    }
    else
    {
        if (laser.getTty() == 0 || radar2.getTty() == 0)
        {
            if (laser.getTty() == 1 || radar2.getTty() == 1)
            {
                radar1.setTtyACM(2);
                cout << "Radar 1 has been attached to ttyACM2" << endl << endl;
            }
            else
            {
                radar1.setTtyACM(1);
                cout << "Radar 1 has been attached to ttyACM1" << endl << endl;
            }
        }
        else
        {
            radar1.setTtyACM(0);
            cout << "Radar 1 has been attached to ttyACM0" << endl << endl;
        }
    }
}

// Prints the default values and configures user defined values for radar 2.
void initRadar2()
{
    cout << "Initialising Radar 2. Fixed Parameters are as follows." << endl;
    cout << "Model Number: RAD-001" << endl;
    cout << "FOV: " << radar2.getFov() << endl;
    cout << "Angular Resolution: " << radar2.getAngularRes() << endl;
    cout << "Min distance: " << radar2.getMinDistance() << endl;
    cout << "Max distance: " << radar2.getMaxDistance() << endl << endl;
    cout << "Configuring user defined variables:" << endl;
    if (radar2.setBaudRate(RADAR2_BAUD))
    {
        cout << "Baud Rate set: " << radar2.getBaudRate() << endl;
    }
    else
    {
        cout << "Invalid baud rate. Default value used: " << radar2.getBaudRate() << endl;
    }
    if (radar2.setXOffset(RADAR2_XOFFSET))
    {
        cout << "X offset set: " << radar2.getXOffset() << endl;
    }
    else
    {
        cout << "Invalid offset. Default value used: " << radar2.getXOffset() << endl;
    }
    if (radar2.setOOffset(RADAR2_OOFFSET))
    {
        cout << "Orientation offset set: " << radar2.getOOffset() << endl;
    }
    else
    {
        cout << "Invalid orientation offset. Default value used: " << radar2.getOOffset() << endl;
    }
    if (laser.getTty() != RADAR2_TTY && radar1.getTty() != RADAR2_TTY && radar2.setTtyACM(RADAR1_TTY))
    {
        cout << "Radar 2 has been attached as ttyACM" << RADAR2_TTY << endl << endl;
    }
    else
    {
        if (laser.getTty() == 0 || radar1.getTty() == 0)
        {
            if (laser.getTty() == 1 || radar1.getTty() == 1)
            {
                radar1.setTtyACM(2);
                cout << "Radar 2 has been attached to ttyACM2" << endl << endl;
            }
            else
            {
                radar2.setTtyACM(1);
                cout << "Radar 2 has been attached to ttyACM1" << endl << endl;
            }
        }
        else
        {
            radar2.setTtyACM(0);
            cout << "Radar 2 has been attached to ttyACM0" << endl << endl;
        }
    }
}

int main()
{
    startSensors();
    // radar1.takeReading();
    // radar2.takeReading();
    // laser.takeReading();
    RangerFusion fuser;
    while (true)
    {
        fuser.setRangers(laser.getRawScan());
        fuser.setRangers(radar1.getRawScan());
        fuser.setRangers(radar2.getRawScan());
    }
    return 0;
}
