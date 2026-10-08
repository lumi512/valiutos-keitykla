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

const char *get_currency_name(Currency currency);
void currency_select();