/* ranger.h
 * Programming for Mechatronic systems
 * Assignment 3
 *
 * @author: Jamin Early 99133391
 * @date: Week 8 Autumn Semester 2018
 */



#ifndef RANGER_H
#define RANGER_H

#include <queue>
#include <chrono>

using namespace std;

class Ranger {
public:
Ranger();
bool setBaudRate(int i);
int getBaudRate();
bool setTtyACM(int i);
int getTty();
double getFov();
int getDataRate();
double getMinDistance();
double getMaxDistance();
void takeReading(mutex &numMutex);
protected:
struct reading
{
    double data_;
    long long int eventTime_;
};
queue<reading> dataStream_;
std::chrono::duration<double> lastReading;
bool setMaxDistance(double i);
bool setMinDistance(double i);
int baudRate_;
int ttyACM_;
double fov_;
double minDist_;
double maxDist_;
int dataRate_;
};

#endif // ifndef RANGER_H