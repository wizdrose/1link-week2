#include"StudentContrller.h"
#include<list>
int main()
{
	StudentContrller std_controller;
	char selection1, selection2;
	list<Student> list_student;
	bool quit = false;
	bool back = false;
	while (!quit) {
		system("cls");
		cout << "WELCOME TO STUDENT MANAGEMENT SYSTEM" << endl;
		cout << "__1. VIEW LIST		__" << endl;
		cout << "__2.  SEARCH STUDENT	__" << endl;
		cout << "__3. STATISTIC STUDENTS	__" << endl;
		cout << "__4. QUIT__" << endl;
		fflush(stdin);
		cin >> selection1;
		switch (selection1)
		{
		case '1':
			system("cls");
			back = false;
			while (!back) 
			{
				system("cls");
				std_controller.listStudent(list_student);
				cout << "1. ADD STUDENT" << endl;
				cout << "2. MODIFY STUDENT" << endl;
				cout << "3. DELETE STUDENT" << endl;
				cout << "4. SORT STUDENT" << endl;
				cout << "5.BACK" << endl;
				cin >> selection2;
				switch (selection2)
				{
				case '1':
					system("cls");
					list_student = std_controller.addStudent();
					system("pause");
					break;
				case '2':
					system("cls");
					std_controller.modifyStudent();
					system("pause");
					break;
				case '3':
					system("cls");
					std_controller.deleteStudent();
					system("pause");
					break;
				case '4':
					system("cls");
					std_controller.sortStudent();
					system("pause");
					break;
				case '5':
					back = true;
					break;
				default:
					break;
				}
			}
			system("pause");
			break;
		case '2':
			system("cls");
			std_controller.searchStudent(list_student);
			system("pause");
			break;
		case '3':
			system("cls");
			std_controller.statisticStudent();
			system("pause");
			break;
		case '4':
			quit = true;
			break;
		default:
			break;
		}
	}
	system("pause");
	return 0;
}