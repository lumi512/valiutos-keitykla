#include "main.h"
#include "menu.h"
#include "actions.h"
#include "currency.h"
#include "sum.h"

double g_sum = -1;

void input_sum()
{
	string curName = "EUR";
	if (g_action == ACTION_SELL)
		curName = get_currency_name(g_currency);
	print_title(string("Iveskite " + curName + " suma").c_str());

	cout << "> ";

	string str;
	cin >> str;

	double val = atof(str.c_str());
	if (cin.fail() || val < 0)
	{
		cout << "Suma neteisingai ivesta arba yra netinkama." << endl;
		clear_input();

		g_sum = -1;
		return;
	}

	g_sum = val;
}