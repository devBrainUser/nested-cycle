#include <iostream>
using namespace std;

void main()
{
	setlocale(LC_ALL, "rus");

	for (int a = 1; a < 5; a++)
	{
		cout << "Сработал 1й цикл for итерация № " << a << endl;

		for (int b = 1; b < 5; b++)
		{
			cout << "\tСработал 2й цикл for итерация № " << b << endl;

			for (int c = 1; c < 5; c++)
			{
				cout << "\t\tСработал 3й цикл for итерация № " << c << endl;

				for (int f = 1; f < 5; f++)
				{
					cout << "\t\t\tСработал 3й цикл for итерация № " << f << endl;

					for (int g = 1; g < 5; g++)
					{
						cout << "\t\t\t\tСработал 3й цикл for итерация № " << g << endl;

						for (int r = 1; r < 5; r++)
						{
							cout << "\t\t\t\t\tСработал 3й цикл for итерация № " << r << endl;

							for (int a = 1; a < 5; a++)
							{
								cout << "Сработал 1й цикл for итерация № " << a << endl;

								for (int b = 1; b < 5; b++)
								{
									cout << "\t\t\t\t\t\tСработал 2й цикл for итерация № " << b << endl;

									for (int c = 1; c < 5; c++)
									{
										cout << "\t\t\t\t\t\t\tСработал 3й цикл for итерация № " << c << endl;

										for (int f = 1; f < 5; f++)
										{
											cout << "\t\t\t\t\t\t\t\tСработал 3й цикл for итерация № " << f << endl;

											for (int g = 1; g < 5; g++)
											{
												cout << "\t\t\t\t\t\t\t\t\tСработал 3й цикл for итерация № " << g << endl;

												for (int r = 1; r < 5; r++)
												{
													cout << "\t\t\t\t\t\t\t\t\t\tСработал 3й цикл for итерация № " << r << endl;
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