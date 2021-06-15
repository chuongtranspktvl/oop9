#include <iostream>
#include <string>
#include "Time.cpp"
using namespace std;
int main() {
	Time t1(7, 31, 9);
	t1.display();
	t1.nextSecond();
	t1.display();
	t1.setTime(23, 59, 59);
	t1.display();
	t1.nextSecond();
	t1.display();
	t1.nextSecond();
	t1.display();
	t1.setTime(8, 12, 01);
	t1.display();
	t1.proviousSecond();
	t1.display();
	t1.proviousSecond();
	t1.display();
	t1.setTime(0, 0, 0);
	t1.display();
	t1.proviousSecond();
	t1.display();
	return 0;
}