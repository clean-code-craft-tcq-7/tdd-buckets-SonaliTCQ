#include <iostream>
#include "current_charge_range.hpp"
#include <stdio.h>
#include <string.h>
#include <iostream>
#include <sstream>

using namespace std;

string detect_range(int low_range, int upp_range)
{
	int range_count = 0;

	int length_array = sizeof(input_current_charge) / sizeof(input_current_charge[0]);

	for (int range = low_range; range <= upp_range; range++)
	{
		for (int index = 0; index < length_array; index++)
		{
			if (input_current_charge[index] == range)
			{
				range_count++;
			}
		}
	}
	cout << low_range << "-" << upp_range << "," << " " << range_count << endl;

}


