#pragma once

namespace Str_Ops
{
	void copy(char *dest, const char *src)
	{
		int length = 0;
		for (;;)
		{
			if (src[length] == 0) break;

			dest[length] = src[length];
			length++;
		}

		dest[length] = 0;
	}

	int length(const char *src)
	{
		int lenght = 0;
		for (;;)
		{
			if (src[lenght] == 0) break;
			lenght++;
		}
		return lenght;
	}
}
