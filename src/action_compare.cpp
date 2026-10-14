#include "main.h"
#include "menu.h"
#include "currency.h"
#include "actions.h"

void action_compare()
{
	print_title("Valiutos palyginimas");

	const double convValue = g_currencyConversion[g_currency];
	const double diff = convValue - 1.0;

	cout << "1 EUR - " << convValue << " " << get_currency_name(g_currency) << endl;
	cout << "Skirtumas : " << diff << endl;

	set_action(ACTION_END);
}