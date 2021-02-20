#pragma once
#include <iostream>
#include <string>
#include <sstream>

using namespace std;
class Triad
{
	friend class Time;
private:
	int hours;
	int minutes;
	int seconds;
public:
	void Init(int a, int b, int c);
	void Read();
	void SetHours(int value) { hours = abs(value); }
	void SetMinutes(int value) { minutes = abs(value); }
	void SetSeconds(int value) { seconds = abs(value); }
	void incHours() { ++hours; }
	void incMinutes() { ++minutes; }
	void incSeconds() { ++seconds; }
	int GetHours() const { return hours; }
	int GetMinutes() const { return minutes; }
	int GetSeconds() const { return seconds; }
	void Display() const;
	string toString() const;
};

