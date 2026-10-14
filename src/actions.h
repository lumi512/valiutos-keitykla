#pragma once

enum Action
{
	ACTION_INVALID,

	ACTION_NONE,
	ACTION_COMPARE,
	ACTION_BUY,
	ACTION_SELL,

	ACTION_MAX,
	ACTION_END
};

extern Action g_action;
extern Action g_lastAction;

void set_action(Action act);

void action_compare();
void action_buy();
void action_sell();
void action_end();