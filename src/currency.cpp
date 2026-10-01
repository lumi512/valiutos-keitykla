#include "main.h"
#include "menu.h"
#include "currency.h"

Currency g_currency;

void draw_currency_menu()
{
	print_title("Pasirinkte valiuta");

	const char *currency_arr[3] = {
		"GBP",
		"USD",
		"INR"
	};

	for (int i = 0; i < ARRSIZE(currency_arr); i++)
		cout << "(" << i + 1 << ") " << currency_arr[i] << endl;
}

void currency_select()
{
	draw_currency_menu();

	int sel;
	cin >> sel;

	if (cin.fail())
	{
		cout << "Neteisingas pasirinkimas." << endl;
		clear_input();
		return;
	}
}