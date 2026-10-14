#pragma once

#include <iostream>

using namespace std;

#define ARRSIZE(x) sizeof(x) / sizeof(x[0])

extern bool g_quit;

void reset_state();