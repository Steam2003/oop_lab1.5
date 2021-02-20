#include "Triad.h"
void Triad::Init(int a, int b, int c)
{
	hours = abs(a);
	minutes = abs(b);
	seconds = abs(c);
}
void Triad::Read()
{
	int a, b, c;
	cout << "¬вед≥ть число 1: "; cin >> a;
	cout << "¬вед≥ть число 2: "; cin >> b;
	cout << "¬вед≥ть число 3: "; cin >> c;
	Init(a, b, c);
}
string Triad::toString() const
{
	stringstream sout2;
	sout2 << "„исло 1: " << hours << ", число 2: " << minutes << ", число 3: " << seconds << endl;
	return sout2.str();
}
void Triad::Display() const
{
	cout << "„исло 1: " << hours << ", число 2: " << minutes << ", число 3: " << seconds << endl;
}