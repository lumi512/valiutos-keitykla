#include "main.h"
#include "menu.h"
#include "currency.h"

Currency g_currency = CURRENCY_INVALID;

const double g_currencyConversion[CURRENCY_MAX] = {
	-1,			// INVALID

	0.8729,		// GBP
	1.1793,		// USD
	104.6918,	// INR
};

const double g_currencyBuyConversion[CURRENCY_MAX] = {
	-1,			// INVALID

	0.8600,		// GBP
	1.1460,		// USD
	101.3862,	// INR
};

const double g_currencySellConversion[CURRENCY_MAX] = {
	-1,			// INVALID

	0.9220,		// GBP
	1.2340,		// USD
	107.8546,	// INR
};

const char *get_currency_name(Currency currency)
{
	switch (currency)
	{
		case CURRENCY_GBP: return "GBP";
		case CURRENCY_USD: return "USD";
		case CURRENCY_INR: return "INR";

		default: return "???";
	}
}

void draw_currency_menu()
{
	print_title("Pasirinkte valiuta");

	for (int i = CURRENCY_GBP; i < CURRENCY_MAX; i++)
	{
		const char *name = get_currency_name((Currency)i);
		cout << "(" << i << ") " << name << endl;
	}
}

void currency_select()
{
	draw_currency_menu();

	string str;
	cin >> str;
	
	int sel = atoi(str.c_str());
	if (cin.fail() || sel <= CURRENCY_INVALID || sel >= CURRENCY_MAX)
	{
		cout << "Neteisingas pasirinkimas." << endl;
		clear_input();

		g_currency = CURRENCY_INVALID;
		return;
	}

	g_currency = (Currency)sel;
}