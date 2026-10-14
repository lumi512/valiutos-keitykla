#include "main.h"
#include "menu.h"
#include "currency.h"
#include "actions.h"

void action_compare()
{
	print_title("Valiutos palyginimas");

	const double convValue = g_currencySellConversion[g_currency];
	
	cout << "EUR ir " << get_currency_name(g_currency) << ": " << convValue << endl;
	reset_state();
}