#include <iostream>
#include "LamportClock.h"

int main()
{
	std::cout << "Hello, world" << std::endl;
	LamportClock lamportA (1);
	std::cout << "LamportClockA: " << lamportA.getTimestamp() << std::endl;
	LamportClock lamportB (10);
	std::cout << "LamportClockB: " << lamportB.getTimestamp() << std::endl;
	LamportClock lamportC = lamportA.clone();
	std::cout << "LamportClockC: " << lamportC.getTimestamp() << std::endl;
	lamportA._setTimestamp(50);
	std::cout << "LamportClockA: " << lamportA.getTimestamp() << std::endl;
	std::cout << "LamportClockC: " << lamportC.getTimestamp() << std::endl;
	
	return 0;
}