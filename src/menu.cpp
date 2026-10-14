#include "main.h"
#include "menu.h"

int g_inputResult;

bool input_get_selection(int minval, int maxval)
{
	cout << "> ";

	string str;
	cin >> str;

	int sel = atoi(str.c_str());
	if (cin.fail() || (minval != -1 && sel <= minval) || (maxval != -1 && sel >= maxval))
	{
		cout << "Neteisingas pasirinkimas." << endl;
		clear_input();

		g_inputResult = -1;
		return false;
	}

	g_inputResult = sel;
	return true;
}

int input_get_result()
{ return g_inputResult; }

void clear_input()
{
	cin.clear();
	cin.ignore(numeric_limits<streamsize>::max(), '\n');
}

void print_line()
{
	const char *line = "---------------------------------------------------";
	cout << line << endl;
}

void print_title(const char *str)
{
	print_line();
	cout << str << endl;
	print_line();
}