#include "main.h"
#include "menu.h"
#include "actions.h"

void parse_action_end_selection(int sel)
{
	switch (sel)
	{
		case 1:
			set_action(g_lastAction);
			break;

		case 2:
			reset_state();
			break;

		case 3:
			g_quit = true;
			reset_state();
			break;

		default:
			cout << "Neteisingas pasirinkimas." << endl;
	}
}

const char *action_end_arr[3] = {
	"Pasirinkti kita valiuta",
	"Grizti atgal i meniu",
	"Iseiti"
};

void draw_action_end()
{
	print_title("Ka dabar?");

	for (int i = 0; i < ARRSIZE(action_end_arr); i++)
		cout << "(" << i + 1 << ") " << action_end_arr[i] << endl;
}

void action_end()
{
	draw_action_end();

	if (input_get_selection(0, ARRSIZE(action_end_arr) + 1))
		parse_action_end_selection(input_get_result());
}