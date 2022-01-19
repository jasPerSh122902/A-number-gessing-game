
#include <time.h>
#include <iostream>
using namespace std;

int main()
{
	srand(time(NULL));
	//set the range of the gess between 1 - 100
	int m_minRange = 1, m_maxRange = 100, m_range;
	bool m_applicationClose = false;
	cout << "Think of a number\n";
	while (m_applicationClose == false)
	{
		//updated the range
		m_range = m_maxRange - m_minRange;
		//if (range is 0)
		// player has cheated;
		if (m_range <= 0)
		{
			cout << "You have cheated :[";
			m_applicationClose = true;
			break;
		}

		char m_inputChar;
		// input "Think of a number"
		// computor gets a number of its own

		int m_randNumber = (rand() % m_range) + m_minRange;

		
		cout << m_randNumber << endl;

		cout << "Was my number greater (<) or lower (>)\n";
		cout << "Did I win if yes F\n";

		cin >> m_inputChar;

		//else (update its range and gess again)
		// if (computor number is > || < player number)
		if (m_inputChar == '>')
		{
			system("cls");
			m_minRange = m_randNumber + 1;
		}

		if (m_inputChar == '<')
		{
			system("cls");
			m_maxRange = m_randNumber - 1;
		}

		//if (computor number is = to player number)
		//player win;
		else if (m_inputChar == 'F')
		{
			system("PAUSE");
			cout << "Yay I win";
			m_applicationClose = true;
		}
		
	}
}