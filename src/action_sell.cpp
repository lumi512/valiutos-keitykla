#include "main.h"
#include "menu.h"
#include "currency.h"
#include "sum.h"
#include "actions.h"

void action_sell()
{
	print_title("Valiutos pardavimas");

	const char *currName = get_currency_name(g_currency);
	const double convValue = g_currencySellRate[g_currency];

	cout << g_sum << " " << currName << " -> " << get_fixed_decimal(g_sum / convValue) << " EUR" << endl;

	set_action(ACTION_END);
}