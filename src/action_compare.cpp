#include "main.h"
#include "menu.h"
#include "currency.h"
#include "actions.h"

void action_compare()
{
	print_title("Valiutos palyginimas");

	const char *currName = get_currency_name(g_currency);
	const double convValue = g_currencyRate[g_currency];

	cout << "1 EUR -> " << get_fixed_decimal(1 * convValue) << " " << currName << endl;
	cout << "1 " << currName << " -> " << get_fixed_decimal(1 / convValue) << " EUR" << endl;

	set_action(ACTION_END);
}