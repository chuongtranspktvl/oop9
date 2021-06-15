#include <iostream>
#include <string>
using namespace std;
class Time {
private:
	int hour;
	int minute;
	int second;
public:
	Time(int hour, int minute, int second) {
		this->hour = hour;
		this->minute = minute;
		this->second = second;
	}
	void setTime(int hour, int minute, int second) {
		this->hour = hour;
		this->minute = minute;
		this->second = second;
	}
	void nextSecond() {
		second++;
		if (second == 60) {
			minute++;
			second = 0;
		}
		if (minute == 60) {
			hour++;
			minute = 0;
			if (hour == 24) {
				hour = 0;
				minute = 0;
				second = 0;
			}
		}

	}
	void proviousSecond() {
		second--;
		if (second < 0) {
			minute--;
			second = 59;
		}
		if (minute < 0) {
			hour--;
			minute = 59;
			if (hour < 0) {
				hour = 23;
				minute = 59;
				second = 59;
			}
		}
	}
	void display() {
		string hour = to_string(this->hour);
		string minute = to_string(this->minute);
		string second = to_string(this->second);
		if (hour.length() == 1) {
			hour = "0" + hour;
		}
		if (minute.length() == 1) {
			minute = "0" + minute;
		}
		if (second.length() == 1) {
			second = "0" + second;
		}
		cout << hour << ":" << minute << ":" << second << endl;
	}
};