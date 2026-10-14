#include "main.h"
#include "menu.h"
#include "currency.h"
#include "sum.h"
#include "actions.h"

void action_buy()
{
	print_title("Valiutos pirkimas");

	const char *currName = get_currency_name(g_currency);
	const double convValue = g_currencyBuyRate[g_currency];

	cout << g_sum << " EUR -> " << get_fixed_decimal(g_sum * convValue) << " " << currName << endl;

	set_action(ACTION_END);
}