
// Problem 44 - Day Of Week
#include <iostream>
#include <string>

using namespace std;

enum enDayOfWeek {
	Sat = 1, Sun = 2, Mon = 3, Tue = 4, Wed = 5, Thu = 6,
	Fri = 7
};

int ReadNumberInRange(string Message, int From, int To)
{
	float Number = 0;
	do
	{
		cout << Message << endl;
		cin >> Number;

	} while (Number < From || Number > To);
	return Number;
}

enDayOfWeek ReadDayOfWeek()
{
	return (enDayOfWeek)ReadNumberInRange("Pleas enter day number [Sat = 1, Sun = 2, Mon = 3, Tue = 4, Wed = 5, Thu = 6, Fri = 7] ? ", 1, 7);
}

string GetDayOfWeek(enDayOfWeek Day)
{
	switch (Day)
	{
	case enDayOfWeek::Sat:
		return "Saturday";
	case enDayOfWeek::Sun:
		return "Sunday";
	case enDayOfWeek::Tue:
		return "Thuesday";
	case enDayOfWeek::Wed:
		return "Wednesday";
	case enDayOfWeek::Thu:
		return "Thursday";
	case enDayOfWeek::Fri:
		return "Friday";
	default:
		return "Not a valid Day";
	}
}

int main()
{
	cout << GetDayOfWeek(ReadDayOfWeek()) << endl;

	return 0;
}


