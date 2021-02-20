#include "Time.h"
#include "Triad.h"
#include <Windows.h>
int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
    Triad a;
	a.Read();
	a.Display();
	a.SetMinutes(99);
	a.incSeconds();
	a.Display();
	cout << a.toString();
	Time a2;
	a2.Init(a);
	a2.Display();
	a2.incSeconds();
	a2.SetMinutes(10);
	a2.Display();
	a2.addMinutes();
	a2.Display();
	Time a3;
	a3.Read();
	a3.Display();
	cout << a2.toString();
}