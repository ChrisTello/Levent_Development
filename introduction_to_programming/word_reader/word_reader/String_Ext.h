#pragma once

namespace Str_Ops
{
	int string_Length(const char *str)
	{
		int length = 0;
		for (;;)
		{
			if (str[length] == 0) break;
			length++;
		}
		
		return length;
	}
	
	int is_Palindrome(const char *str)
	{
		int length = string_Length(str);
		int number_of_steps = length / 2;

		for (int i = 0; i < number_of_steps; i++)
		{
			int left = i;
			int right = length - i - 1;

			if (str[left] != str[right]) return 0;
			
		}

		return 1;
	}
	int result = is_Palindrome(const char *str);
}
