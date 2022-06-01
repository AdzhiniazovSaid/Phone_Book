#include <iostream>
#include <string>
#include <vector>
#include <ctime>
#include <Windows.h>

using namespace std;

enum PhoneBook {
	exit1, // 0
	add, // 1
	edit, // 2
	del, // 3
	look, // 4
	look_all // 5
};

struct Phone_Book {
	string surname;
	string name;
	string patronymic;
	int phonenumber;
	string country;
	int birthday;
	string organization;
	string position;
	string notes;
};

void add_1(vector<Phone_Book> &phone) {

	Phone_Book books;

	cout << "������� ���� �������: ";
	cin >> books.name;
	Beep(500, 100);
	cout << "������� ���� ���: ";
	cin >> books.surname;
	Beep(500, 100);
	cout << "������� ���� ��������: ";
	cin >> books.patronymic;
	Beep(500, 100);
	cout << "������� ���� ������������ ����� (������ �����): ";
	cin >> books.phonenumber;
	Beep(500, 100);
	cout << "������� ������: ";
	cin >> books.country;
	Beep(500, 100);
	cout << "������� ���� �������� (mm/dd/yy, ������ �����): ";
	cin >> books.birthday;
	Beep(500, 100);
	cout << "������� �����������: ";
	cin >> books.organization;
	Beep(500, 100);
	cout << "������� ���������: ";
	cin >> books.position;
	Beep(500, 100);
	cout << "������� ������ �������: ";
	cin >> books.notes;
	Beep(500, 100);

	phone.push_back(books);

	cout << "\n������ ������� ��������� !" << endl;
}

void edit_1(vector<Phone_Book> &phone)
{
	Phone_Book books;

	int num;
	string surname;
	int choose;

	cout << "1. �������� ����� \n2. �������� ������� " << endl;
	cin >> choose;
	switch (choose)
	{
	case 1:
		cout << "\t\t\t[���������� ������ �������] ";

		for (int i = 0; i < phone.size(); i++) {
			cout << "\n������������ #" << i + 1
				<< "\n����� ��������: " << phone[i].phonenumber << endl;
		}

		cout << "������� ���������� ����� ��� ��� ��������������: ";
		cin >> num;

		for (int i = 0; i < phone.size(); i++)
		{
			cout << "������� ����� ���������� ����� � ����������� ��������� 2 ����: ";
			cin >> phone[i].phonenumber;

			cout << "\n��� ���������� ����� ������� ������� ! ";

			cout << "\n�������: " << phone[i].surname
				<< "\n���: " << phone[i].name
				<< "\n��������: " << phone[i].patronymic
				<< "\n���������� �����: " << phone[i].phonenumber
				<< "\n������: " << phone[i].country
				<< "\n���� ��������: " << phone[i].birthday
				<< "\n�����������: " << phone[i].organization
				<< "\n���������: " << phone[i].position
				<< "\n������ �������: " << phone[i].notes << endl;
		}
		break;

	case 2:
		cout << "\t\t\t[������� �������] ";

		for (int i = 0; i < phone.size(); i++) {
			cout << "\n������������ #" << i + 1
				<< "\n������� ������: " << phone[i].surname << endl;
		}
		cout << "������� ������� ������ ��� ��� ��������������: ";
		cin >> surname;

		for (int i = 0; i < phone.size(); i++)
		{
			cout << "������� ����� ������� ��� ������ � ����������� ��������� 2 ����: ";
			cin >> phone[i].surname;

			cout << "\n������� ������ ������� ���� �������� ! ";

			cout << "\n�������: " << phone[i].surname
				<< "\n���: " << phone[i].name
				<< "\n��������: " << phone[i].patronymic
				<< "\n���������� �����: " << phone[i].phonenumber
				<< "\n������: " << phone[i].country
				<< "\n���� ��������: " << phone[i].birthday
				<< "\n�����������: " << phone[i].organization
				<< "\n���������: " << phone[i].position
				<< "\n������ �������: " << phone[i].notes << endl;
		}
		break;
	}
}

void del_1(vector<Phone_Book> &phone)
{
	Phone_Book books;

	int number;

	for (int i = 0; i < phone.size(); i++)
	{
		cout << "������ #" << i + 1 << endl;
		cout << "���������� ����� ������: " << phone[i].phonenumber << endl;
	}

	cout << "������� ���������� ����� ��� �������� ������: ";
	cin >> number;

	for (int i = 0; i < phone.size(); i++)
	{
		if (number == phone[i].phonenumber)
		{
			phone.erase(phone.begin() + i);
		}
	}
}

void look_1(vector<Phone_Book> phone)
{
	cout << "\t\t\t[������� ���������� �������] ";

	for (int i = 0; i < phone.size(); i++) {
		cout << "\n������������ #" << i + 1
			<< "\n�������: " << phone[i].surname
			<< "\n���: " << phone[i].name
			<< "\n����� ��������: " << phone[i].phonenumber << endl;
	}
}

void look_all_1(vector<Phone_Book> phone) {

	cout << "\t\t\t[������ ���������� �������] ";

	for (int i = 0; i < phone.size(); i++) {
		cout << "\n������������ #" << i + 1
			<< "\n�������: " << phone[i].surname
			<< "\n���: " << phone[i].name
			<< "\n��������: " << phone[i].patronymic
			<< "\n���������� �����: " << phone[i].phonenumber
			<< "\n������: " << phone[i].country
			<< "\n���� ��������: " << phone[i].birthday
			<< "\n�����������: " << phone[i].organization
			<< "\n���������: " << phone[i].position
			<< "\n������ �������: " << phone[i].notes << endl;
	}
}

int main()
{
	Phone_Book books;
	setlocale(LC_ALL, "rus");

	vector<Phone_Book> phone;

	int menu;
	int ret_urn;

	do {
		cout << "------------------------------���������� �����------------------------------" << endl;
		cout << "[PH] 0. ����� "
			<< "\n[PH] 1. ������� ������"
			<< "\n[PH] 2. ������������� ���������� ����� ������ "
			<< "\n[PH] 3. ������� ������ �� ������ ��������"
			<< "\n[PH] 4. ���������� ������� ���������� � ������"
			<< "\n[PH] 5. ���������� ������ ���������� � ������" << endl;
		cout << "�������� �������� - ";
		cin >> menu;

		switch (menu)
		{
		case exit1:
			exit(0);
			break;

		case add:
			add_1(phone);
			break;

		case edit:
			edit_1(phone);
			break;

		case del:
			del_1(phone);
			break;

		case look:
			look_1(phone);
			break;

		case look_all:
			look_all_1(phone);
			break;
		}

		cout << "\n������ ���������? [1 - ��, 0 - ���.]" << endl;
		cin >> ret_urn;
		system("cls");

	} while (ret_urn != 0);
}