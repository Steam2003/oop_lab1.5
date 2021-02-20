#pragma once
#include "Triad.h"
class Time
{
private:
	Triad time;
public:
	void Init(Triad value);
	void Read();
	void incHours();
	void incMinutes();
	void incSeconds();
	void Display() const;
	void HoursConverter();
	void MinutesConverter();
	void SecondsConverter();
	void addSeconds();
	void addMinutes();
	void SetHours(int value) { time.hours = abs(value); HoursConverter(); }
	void SetMinutes(int value) { time.minutes = abs(value); MinutesConverter(); }
	void SetSeconds(int value) { time.seconds = abs(value); SecondsConverter(); }
	int GetHours() const { return time.hours; }
	int GetMinutes() const { return time.minutes; }
	int GetSeconds() const { return time.seconds; }
	void Stabilizer();
	string toString() const;
	
};

