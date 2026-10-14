#include <iostream>
#include <iomanip>
#include <sstream>

#include "main.h"
#include "main_menu.h"
#include "currency.h"
#include "sum.h"
#include "actions.h"

bool g_quit = false;

void reset_state(bool resetactions)
{
	if (resetactions)
	{
		set_action(ACTION_NONE);
		g_lastAction = ACTION_INVALID;
	}

	g_currency = CURRENCY_INVALID;
	g_sum = -1;
}

string get_fixed_decimal(double val)
{
	stringstream str;
	str << fixed << setprecision(2) << val;

	return str.str();
}

int main()
{
	while (!g_quit)
	{
		if (g_action != ACTION_NONE && g_action != ACTION_END)
		{
			while (g_currency == CURRENCY_INVALID)
				currency_select();
		}

		if (g_action == ACTION_BUY || g_action == ACTION_SELL)
		{
			while (g_sum == -1)
				input_sum();
		}

		switch (g_action)
		{
			case ACTION_NONE: main_menu(); break;
			case ACTION_END: action_end(); break;

			case ACTION_COMPARE: action_compare(); break;
			case ACTION_BUY: action_buy(); break;
			case ACTION_SELL: action_sell(); break;
				
			default:
				cout << "Nezinomas veiksmas : " << g_action << endl;
				g_quit = true;
		}
	}

	return 0;
}