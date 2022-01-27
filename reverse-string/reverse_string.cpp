#include "reverse_string.h"
#include <string>

using namespace std;
namespace reverse_string
{
	string reverse_string(string s)
	{
		string reversed = "";
		int size = s.size();
		for (int i = 0; i < size; ++i)
		{
			reversed += s[size - 1 - i];
		}
		return reversed;
	}
}  // namespace reverse_string
