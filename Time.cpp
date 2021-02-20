#include "Time.h"

void Time::Init(Triad value) 
{ 
	this->time = value; 
	Stabilizer();
}
void Time::incHours() 
{ 
	//time.incHours(this);
	++time.hours; 
	HoursConverter();
}
void Time::incMinutes()
{
	++time.minutes;
	MinutesConverter();
}
void Time::incSeconds()
{
	++time.seconds;
	SecondsConverter();
}
void Time::Display() const
{
	cout << time.hours << " ����� " << time.minutes << " ������ " << time.seconds << " ������ " << endl;
}
void Time::HoursConverter()
{
	if (time.hours >= 24)
		time.hours = time.hours % 24;
}
void Time::MinutesConverter()
{
	while(time.minutes >= 60)
	{
		time.minutes = time.minutes - 60;
		incHours();
	}
}
void Time::SecondsConverter()
{
	while (time.seconds >= 60)
	{
		time.seconds = time.seconds - 60;
		incMinutes();
	}
}
void Time::addSeconds()
{
	int value;
	cout << "������ ������ ������ ������: "; cin >> value;
	time.seconds += value;
	Stabilizer();
}
void Time::addMinutes()
{
	int value;
	cout << "������ ������ ������ ������: "; cin >> value;
	time.minutes += value;
	Stabilizer();
}
void Time::Read()
{
	Triad a;
	int h, m, s; 
	cout << "������ ������: "; cin >> h;
	cout << "������ �������: "; cin >> m;
	cout << "������ �������: "; cin >> s;
	a.Init(h, m, s);
	Init(a);
}
string Time::toString() const
{
	stringstream sout;
	sout << "����� 1: " << time.hours << ", ����� 2: " << time.minutes << ", ����� 3: " << time.seconds << endl;
	return sout.str();
}
void Time::Stabilizer()
{
	SecondsConverter();
	MinutesConverter();
	HoursConverter();
}