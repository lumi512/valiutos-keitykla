#include "main.h"

void clear_input()
{
	cin.clear();
	cin.ignore(numeric_limits<streamsize>::max(), '\n');
}

void print_title(const char *str)
{
	const char *line = "---------------------------------------------------";

	cout << line << endl
		<< str << endl
		<< line << endl;
}

void parse_menu_selection(int sel)
{
	switch (sel)
	{
		case 1:
			g_action = ACTION_COMPARE;
			break;

		case 2:
			g_action = ACTION_BUY;
			break;

		case 3:
			g_action = ACTION_SELL;
			break;

		case 4:
			g_quit = true;
			break;

		default:
			cout << "Neteisingas pasirinkimas." << endl;
	}
}

void draw_main_menu()
{
	print_title("MENIU");

	const char *menu_arr[4] = {
		"Valiutos kurso palyginimas su euru",
		"Valiutos pirkimas (EUR -> pasirinkta valiuta)",
		"Valiutos pardavimas (pasirinkta valiuta -> EUR)",
		"Iseiti"
	};

	for (int i = 0; i < ARRSIZE(menu_arr); i++)
		cout << "(" << i + 1 << ") " << menu_arr[i] << endl;
}

void main_menu()
{
	draw_main_menu();

	string str;
	cin >> str;

	int sel = atoi(str.c_str());
	if (cin.fail() || sel <= ACTION_INVALID || sel >= ACTION_MAX)
	{
		cout << "Neteisingas pasirinkimas." << endl;
		clear_input();

		g_action = ACTION_NONE;
		return;
	}

	parse_menu_selection(sel);
}