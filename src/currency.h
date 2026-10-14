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

extern const double g_currencyConversion[CURRENCY_MAX];
extern const double g_currencyBuyConversion[CURRENCY_MAX];
extern const double g_currencySellConversion[CURRENCY_MAX];

const char *get_currency_name(Currency currency);
void currency_select();