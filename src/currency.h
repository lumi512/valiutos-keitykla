#pragma once

enum Currency
{
	CURRENCY_INVALID,

	CURRENCY_GBP,
	CURRENCY_USD,
	CURRENCY_INR,

	CURRENCY_MAX
};

extern Currency g_currency;

extern const double g_currencyRate[CURRENCY_MAX];
extern const double g_currencyBuyRate[CURRENCY_MAX];
extern const double g_currencySellRate[CURRENCY_MAX];

const char *get_currency_name(Currency currency);
void currency_select();