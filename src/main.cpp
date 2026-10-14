#include <iostream>
#include <iomanip>

#include "main.h"
#include "main_menu.h"
#include "currency.h"
#include "actions.h"

bool g_quit = false;

void reset_state()
{
	set_action(ACTION_NONE);
	g_lastAction = ACTION_INVALID;
	g_currency = CURRENCY_INVALID;
}

int main()
{
	setprecision(2);

	while (!g_quit)
	{
		if (g_action != ACTION_NONE && g_action != ACTION_END)
		{
			currency_select();
			if (g_currency == CURRENCY_INVALID)
				continue;
		}

		switch (g_action)
		{
			case ACTION_NONE:
				main_menu();
				break;

			case ACTION_COMPARE:
				action_compare();
				break;

			case ACTION_END:
				action_end();
				break;
				
			default:
				cout << "Nezinomas veiksmas : " << g_action << endl;
				g_quit = true;
		}
	}

	return 0;
}