#include <iostream>
using namespace std;

void main()
{
	setlocale(LC_ALL, "rus");

	for (int a = 1; a < 5; a++)
	{
		cout << "�������� 1� ���� for �������� � " << a << endl;

		for (int b = 1; b < 5; b++)
		{
			cout << "\t�������� 2� ���� for �������� � " << b << endl;

			for (int c = 1; c < 5; c++)
			{
				cout << "\t\t�������� 3� ���� for �������� � " << c << endl;

				for (int f = 1; f < 5; f++)
				{
					cout << "\t\t\t�������� 3� ���� for �������� � " << f << endl;

					for (int g = 1; g < 5; g++)
					{
						cout << "\t\t\t\t�������� 3� ���� for �������� � " << g << endl;

						for (int r = 1; r < 5; r++)
						{
							cout << "\t\t\t\t\t�������� 3� ���� for �������� � " << r << endl;

							for (int a = 1; a < 5; a++)
							{
								cout << "�������� 1� ���� for �������� � " << a << endl;

								for (int b = 1; b < 5; b++)
								{
									cout << "\t\t\t\t\t\t�������� 2� ���� for �������� � " << b << endl;

									for (int c = 1; c < 5; c++)
									{
										cout << "\t\t\t\t\t\t\t�������� 3� ���� for �������� � " << c << endl;

										for (int f = 1; f < 5; f++)
										{
											cout << "\t\t\t\t\t\t\t\t�������� 3� ���� for �������� � " << f << endl;

											for (int g = 1; g < 5; g++)
											{
												cout << "\t\t\t\t\t\t\t\t\t�������� 3� ���� for �������� � " << g << endl;

												for (int r = 1; r < 5; r++)
												{
													cout << "\t\t\t\t\t\t\t\t\t\t�������� 3� ���� for �������� � " << r << endl;
												}
											}
										}
									}
								}
							}
						}
					}
				}
			}
		}
	}

}