#include<iostream>
using namespace std;
int main()
{
	cout << "                      **** Plain text into Cipher text****\n\n";
	int key[3][3];
	for (int i = 0;i < 3;i++)
	{
		for (int j = 0;j < 3;j++)
		{
			cout << "Enter a number for key at the place " << i + 1 << j + 1 << " :";
			cin >> key[i][j];
		}
	}
	cout << endl;
	cout << "Key is:- \n";
	for (int i = 0;i < 3;i++)
	{
		for (int j = 0;j < 3;j++)
		{
			cout << key[i][j] << "  ";
		}
		cout << endl;
	}

///////////////////////////////////////////////////////////////////////////////////////

	int count;
	cout << "Enter the number of alphabets you want to code: ";
	cin >> count;
	int i = 0;
	char array[100];
	while (i < count)
	{
		cout << "Enter a alphabet: ";
		cin >> array[i];
		i++;
	}

////////////////////////////////////////////////////////////////////////////////////////

	int num[100];
	for (int i = 0; i < count; i++)
	{
		if (array[i] == 'A')
		{
			num[i] = 0;
		}
		else if (array[i] == 'B')
		{
			num[i] = 1;
		}
		else if (array[i] == 'C')
		{
			num[i] = 2;
		}
		else if (array[i] == 'D')
		{
			num[i] = 3;
		}
		else if (array[i] == 'E')
		{
			num[i] = 4;
		}
		else if (array[i] == 'F')
		{
			num[i] = 5;
		}
		else if (array[i] == 'G')
		{
			num[i] = 6;
		}
		else if (array[i] == 'H')
		{
			num[i] = 7;
		}
		else if (array[i] == 'I')
		{
			num[i] = 8;
		}
		else if (array[i] == 'J')
		{
			num[i] = 9;
		}
		else if (array[i] == 'K')
		{
			num[i] = 10;
		}
		else if (array[i] == 'L')
		{
			num[i] = 11;
		}
		else if (array[i] == 'M')
		{
			num[i] = 12;
		}
		else if (array[i] == 'N')
		{
			num[i] = 13;
		}
		else if (array[i] == 'O')
		{
			num[i] = 14;
		}
		else if (array[i] == 'P')
		{
			num[i] = 15;
		}
		else if (array[i] == 'Q')
		{
			num[i] = 16;
		}
		else if (array[i] == 'R')
		{
			num[i] = 17;
		}
		else if (array[i] == 'S')
		{
			num[i] = 18;
		}
		else if (array[i] == 'T')
		{
			num[i] = 19;
		}
		else if (array[i] == 'U')
		{
			num[i] = 20;
		}
		else if (array[i] == 'V')
		{
			num[i] = 21;
		}
		else if (array[i] == 'W')
		{
			num[i] = 22;
		}
		else if (array[i] == 'X')
		{
			num[i] = 23;
		}
		else if (array[i] == 'Y')
		{
			num[i] = 24;
		}
		else if (array[i] == 'Z')
		{
			num[i] = 25;
		}
	}

	////////////////////////////////////////////////////////////////////////

	/*for (int i = 0; i < count;i++)
	{
		cout << num[i] << " ";
	}
	cout << endl;*/

	////////////////////////////////////////////////////////////////////////

	cout << endl;
	cout << "The cipher code is:- ";

	////////////////////////////////////////////////////////////////////////

	for (int i = 0;i < count;i++)
	{
		int result[3][1];
		int name[3][1];
		name[0][0] = num[i];
		i++;
		name[1][0] = num[i];
		i++;
		name[2][0] = num[i];
		result[0][0] = (key[0][0] * name[0][0]) + (key[0][1] * name[1][0])+(key[0][2] * name[2][0]);
		result[1][0] = (key[1][0] * name[0][0]) + (key[1][1] * name[1][0])+(key[1][2] * name[2][0]);
		result[2][0] = (key[2][0] * name[0][0]) + (key[2][1] * name[1][0]) + (key[2][2] * name[2][0]);
		for (int k = 0;k<3;k++)
		{
			int j = 0;
			if (result[k][j] > 25)
			{
				result[k][j] = result[k][j] % 26;
			}
		}
		for (int k = 0;k < 3;k++)
		{
			int j = 0;
			if (result[k][j] == 0)
			{
				cout << "A";
			}
			else if (result[k][j] == 1)
			{
				cout << "B";
			}
			else if (result[k][j] == 2)
			{
				cout << "C";
			}
			else if (result[k][j] == 3)
			{
				cout << "D";
			}
			else if (result[k][j] == 4)
			{
				cout << "E";
			}
			else if (result[k][j] == 5)
			{
				cout << "F";
			}
			else if (result[k][j] == 6)
			{
				cout << "G";
			}
			else if (result[k][j] == 7)
			{
				cout << "H";
			}
			else if (result[k][j] == 8)
			{
				cout << "I";
			}
			else if (result[k][j] == 9)
			{
				cout << "J";
			}
			else if (result[k][j] == 10)
			{
				cout << "K";
			}
			else if (result[k][j] == 11)
			{
				cout << "L";
			}
			else if (result[k][j] == 12)
			{
				cout << "M";
			}
			else if (result[k][j] == 13)
			{
				cout << "N";
			}
			else if (result[k][j] == 14)
			{
				cout << "O";
			}
			else if (result[k][j] == 15)
			{
				cout << "P";
			}
			else if (result[k][j] == 16)
			{
				cout << "Q";
			}
			else if (result[k][j] == 17)
			{
				cout << "R";
			}
			else if (result[k][j] == 18)
			{
				cout << "S";
			}
			else if (result[k][j] == 19)
			{
				cout << "T";
			}
			else if (result[k][j] == 20)
			{
				cout << "U";
			}
			else if (result[k][j] == 21)
			{
				cout << "V";
			}
			else if (result[k][j] == 22)
			{
				cout << "W";
			}
			else if (result[k][j] == 23)
			{
				cout << "X";
			}
			else if (result[k][j] == 24)
			{
				cout << "Y";
			}
			else if (result[k][j] == 25)
			{
				cout << "Z";
			}
		}

	}
	cout << endl;
	system("pause");
	///////////////////////////////////////////////////////////////////////







	return 0;
}