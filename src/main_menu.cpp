#include "main.h"
#include "menu.h"
#include "actions.h"

void parse_menu_selection(int sel)
{
	switch (sel)
	{
		case 1: set_action(ACTION_COMPARE); break;
		case 2: set_action(ACTION_BUY); break;
		case 3: set_action(ACTION_SELL); break;
		case 4: g_quit = true; break;

		default:
			cout << "Neteisingas pasirinkimas." << endl;
			set_action(ACTION_NONE);
	}
}

void draw_main_menu()
{
	print_title("Meniu");

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

	if (input_get_selection(ACTION_INVALID, ACTION_MAX))
		parse_menu_selection(input_get_result());
	else
		set_action(ACTION_NONE);
}