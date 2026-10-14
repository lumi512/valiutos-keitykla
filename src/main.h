#pragma once

#include <iostream>
#include <string>

using namespace std;

#define ARRSIZE(x) sizeof(x) / sizeof(x[0])

extern bool g_quit;

void reset_state(bool resetactions = true);
string get_fixed_decimal(double val);