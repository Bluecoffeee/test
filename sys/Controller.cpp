#include "Controller.h"
#include "Parser.h"
#include <iostream>
#include <string>
using std::cout;
using std::endl;
using std::cin;
using std::string;

Controller::Controller()
{
	cout << "������ ��������� �����������" << endl;
}

Controller::~Controller()
{
	cout << "����� ��������� �����������" << endl;
}

void Controller::run()
{
	string input;
	cout << "�������� ���������� Shell" << endl;
	cin >> input;
	Parser pars;
	pars.parse(input);    // ������ �������
}

