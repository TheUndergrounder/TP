﻿#include "Keeper.h"

int main()
{
	Keeper Konten; 
	int menu;
	do
	{
		system("cls");
		std::cout << "***************************" << std::endl
			<< "	Menu	" << std::endl
			<< "***************************" << std::endl
			<< " Number of elements in KEEflER : [" << Konten.GetSize() << "]" << std::endl;

			system("cls");
		std::cout << "***************************" << std::endl
			<< "	Menu	" << std::endl
			<< "***************************" << std::endl
			<< " Number of elements in KEEflER : [" << Konten.GetSize() << "]"

			<< "[1] Append element" << std::endl
			<< "[2] Remove element" << std::endl
			<< "[3] Save all in file" << std::endl
			<< "[4] Load all from file" << std::endl
			<< "[5] Change element" << std::endl
			<< "[6] Show all data" << std::endl
			<< "[0] If u want exit" << std::endl; std::cin >> menu;
		system("cls"); switch (menu)
		{

		case 1:
			Konten.add(); break;
		case 2:
			Konten.del(); break;
		case 3:
			Konten.save(); break;
		case 4:
			Konten.load(); break;
		case 5:
			Konten.edit(); break;
		case 6:
			std::cout << Konten; break;
		case 0:
		return 0; default:
			break;
		}
	} while (true);
}
