# include <iostream>

using namespace std;

int count_digit(int d, int start, int end)
{
	int rst = 0;
	for (int i = start; i <= end; i++)
	{
		int tmp = i;
		while (tmp)
		{
			if (tmp % 10 == d)
			{
				++rst;
			}
			tmp /= 10;
		}
	}

	return rst;
}

int main()
{
	cout << count_digit(3, 100, 250) << endl;
	return 0;
}