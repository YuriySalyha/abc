#ifndef DateTime_h
#define DateTime_h
#include <vector>
#include<iostream>
#include<iomanip>
#include<stdexcept>
using namespace std;

class  DateTime
{
public:
	vector<int> monthDays = { {31}, {28}, {31}, {30}, {31}, {30}, {31}, {31}, {30}, {31}, {30}, {31} };
	int day;
	int month;
	int year;
	int hours;
	int minutes;
	int seconds;
	DateTime();
	DateTime(int day, int month, int year);
	DateTime(int day, int month, int year,
		int hours, int minutes, int seconds);
	static DateTime now();

	char* toString();

	DateTime addSeconds(int seconds);
	DateTime addMinutes(int minutes);
	DateTime addHours(int hours);
	DateTime addDays(int days);
	DateTime addMonth(int month);
	DateTime addYears(int years);

	long totalSeconds() const;
	long totalMinutes();
	long totalDays() const;
	long totalMonth();

	DateTime max(DateTime input);
	DateTime min(DateTime input);

	DateTime& operator+(const DateTime& input);
	DateTime& operator-(const DateTime& input);
	bool operator>(const DateTime& input);
	bool operator>=(const DateTime& input);
	bool operator<(const DateTime& input);
	bool operator<=(const DateTime& input);
	bool operator==(const DateTime& input);
	bool operator!=(const DateTime& input);

	friend ostream& operator<<(ostream& output, DateTime& source);
	friend istream& operator>>(istream& output, DateTime& source);

};

#endif // !DateTime_h
