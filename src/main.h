#pragma once

#include <iostream>

using namespace std;

#define ARRSIZE(x) sizeof(x) / sizeof(x[0])

enum Action
{
	ACTION_NONE,
	ACTION_COMPARE,
	ACTION_BUY,
	ACTION_SELL
};

extern bool g_quit;
extern Action g_action;