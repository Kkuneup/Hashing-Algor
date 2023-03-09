#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

unsigned long long do_hash(const char s[14])
{
	unsigned long long r = 0;
	for (int i = 0; s[i]; i++)
		r = r * 27 + s[i] - 'a' + 1;
	return r;
}

string unhash(unsigned long long r)
{
	string name;
	while (r)
	{
		name += 'a' - 1 + (r % 27);
		r /= 27;
	}
	reverse(name.begin(),name.end());
	return name;
}

int main()
{
	cout << unhash(do_hash("asd"));
}
