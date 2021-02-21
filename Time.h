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
	void SetHours(int value);
	void SetMinutes(int value);
	void SetSeconds(int value);
	int GetHours() const { return time.GetHours(); }
	int GetMinutes() const { return time.GetMinutes(); }
	int GetSeconds() const { return time.GetSeconds(); }
	void Stabilizer();
	string toString() const;
	
};

