#pragma once

enum Currency
{
	CURRENCY_GBP,
	CURRENCY_USD,
	CURRENCY_INR
};

extern Currency g_currency;

void currency_select();