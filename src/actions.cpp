#include "actions.h"

Action g_action = ACTION_NONE;
Action g_lastAction = ACTION_INVALID;

void set_action(Action act)
{
	g_lastAction = g_action;
	g_action = act;
}