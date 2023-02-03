#include <iostream>
#include "current_charge_range.hpp"
#include <stdio.h>
#include <string.h>
#include <iostream>
#include <sstream>

using namespace std;

void detect_range(int current_samples[], int low_range, int upp_range)
{
	int range_count = 0;

	int length_array = sizeof(current_samples) / sizeof(current_samples[0]);

	for (int range = low_range; range <= upp_range; range++)
	{
		for (int index = 0; index < length_array; index++)
		{
			if (current_samples[index] == range)
			{
				range_count++;
			}
		}
	}
	cout << low_range << "-" << upp_range << "," << " " << range_count << endl;

}


