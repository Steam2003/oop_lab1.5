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
	cout << "������ ����� 1: "; cin >> a;
	cout << "������ ����� 2: "; cin >> b;
	cout << "������ ����� 3: "; cin >> c;
	Init(a, b, c);
}
string Triad::toString() const
{
	stringstream sout2;
	sout2 << "����� 1: " << hours << ", ����� 2: " << minutes << ", ����� 3: " << seconds << endl;
	return sout2.str();
}
void Triad::Display() const
{
	cout << "����� 1: " << hours << ", ����� 2: " << minutes << ", ����� 3: " << seconds << endl;
}