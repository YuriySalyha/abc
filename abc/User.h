#include <iostream>
#include <string> 
using namespace std;

class User
{
public:	
	string name;
	string surname;
	string birthday;
	int day;
	int mounth;
	int year;
	string country;
	string username;
	string password;
	bool isUserOlderThan14(int day, int mounth, int year) {
		int dayToday = 2;
		int mounthToday = 9;
		int yearToday = 2022;
		if (yearToday - year > 14) {
			setBirthday(to_string(day), to_string(mounth), to_string(year));
			return true;
		}
		else
		{
			return false;
		}
	}
private:
	void setBirthday(string day, string mounth, string year) {
		birthday = day + "." + mounth + "." + year;
	}

};
