#include "Time.h"

void Time::Init(Triad value) 
{ 
	this->time = value; 
	Stabilizer();
}
void Time::incHours() 
{ 
	time.SetHours(time.GetHours() + 1);
	HoursConverter();
}
void Time::incMinutes()
{
	time.SetMinutes(time.GetMinutes() + 1);
	MinutesConverter();
}
void Time::incSeconds()
{
	time.SetSeconds(time.GetSeconds() + 1);
	SecondsConverter();
}
void Time::Display() const
{
	cout << time.GetHours() << " годин " << time.GetMinutes() << " хвилин " << time.GetSeconds() << " секунд " << endl;
}
void Time::SetHours(int value)
{
	time.SetHours(time.GetHours() + value);
	HoursConverter();
}
void Time::HoursConverter()
{
	if (time.GetHours() >= 24)
		time.SetHours(time.GetHours() % 24);
}
void Time::SetMinutes(int value)
{
	time.SetMinutes(time.GetMinutes() + value);
	MinutesConverter();
}
void Time::MinutesConverter()
{
	while (time.GetMinutes() >= 60)
	{
		time.SetMinutes(time.GetMinutes() - 60);
		incHours();
	}
}
void Time::SetSeconds(int value)
{
	time.SetSeconds(time.GetSeconds() + value);
	SecondsConverter();
}
void Time::SecondsConverter()
{
	while (time.GetSeconds() >= 60)
	{
		time.SetSeconds(time.GetSeconds() - 60);
		incMinutes();
	}
}
void Time::addSeconds()
{
	int value;
	cout << "¬вед≥ть ск≥льки додати секунд: "; cin >> value;
	time.SetSeconds(time.GetSeconds() + value);
	Stabilizer();
}
void Time::addMinutes()
{
	int value;
	cout << "¬вед≥ть ск≥льки додати хвилин: "; cin >> value;
	time.SetMinutes(time.GetMinutes() + value);
	Stabilizer();
}
void Time::Read()
{
	Triad a;
	int h, m, s; 
	cout << "¬вед≥ть години: "; cin >> h;
	cout << "¬вед≥ть хвилини: "; cin >> m;
	cout << "¬вед≥ть секунди: "; cin >> s;
	a.Init(h, m, s);
	Init(a);
}
string Time::toString() const
{
	stringstream sout;
	sout << "„исло 1: " << time.GetHours() << ", число 2: " << time.GetMinutes() << ", число 3: " << time.GetSeconds() << endl;
	return sout.str();
}
void Time::Stabilizer()
{
	SecondsConverter();
	MinutesConverter();
	HoursConverter();
}
