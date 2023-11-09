#include <iostream>
#include <list>
#include <deque>
#include <vector>
#include <string.h>
#include <random>
#include <set>

//����������� ��������� ����� c++

	//�������� ������ (std::array & std::vector) //�� ������ ��� ������������ - ��������� ���
	// 
	// ���� �� ��������, �� �� ��� ����
	// 
	//������� ������ -> std::list, std::forward_list, 
	//������� -> std::set, std::multi_set
	//�������� -> std::map, std::multi_map
	//  ������-������ -> std::hashtable
	// ����� 
	// ������� �������� ~> std::deque 
	// 
	// **������� -> std::stack � std::queue (���� ��� ������� �����)
	//


class Test {
public:
	Test() = default;
	Test(int a_val, double b_val) :a(a_val), b(b_val) {}; //����� ���������� ��� ���������

	int a;
	double b;
};

int main() {


	setlocale(LC_ALL, "ru");
	srand(time(NULL));

	std::random_device rd;
	std::mt19937 dist{ rd() };
	std::uniform_int_distribution<int> prov(-10, 50);


	int start{ 1 };
	int finish{ 19 };

	std::vector<int> linArr;
	std::list<int> linkList;
	std::deque<int> BustedList;


	for (size_t i = start; i < finish; i++)
	{
		//linArr.push_back(i); //��������� ������ � ���������

		//��� � ������ �� ������� ������� �����
		linArr.insert(linArr.begin(), prov(dist));
	}
	linArr;
	for (size_t i = start; i < finish; i++)
	{
		//linkList.push_back(i); //��������� ������ � ���������
		linkList.insert(linkList.begin(), prov(dist));
	}
	linArr;
	for (size_t i = start; i < finish; i++)
	{
		//BustedList.push_back(i); //��������� ������ � ���������
		BustedList.insert(BustedList.begin(), prov(dist));
	}
	linArr;


	for (size_t i = 0; i < linArr.size(); i++)
	{
		linArr.at(i) -= 1;
	}
	linArr;
	for (size_t i = 0; i < BustedList.size(); i++)
	{
		BustedList.at(i) -= 1;
	}
	linArr;


	for (auto el : linArr) {
		std::cout << el << " ";
	}
	std::cout << "\n";
	for (auto el : linkList) {
		std::cout << el << " ";
	}
	std::cout << "\n";
	for (auto el : BustedList) {
		std::cout << el << " ";
	}
	std::cout << "\n";


	for (const auto& el : linArr) {
		std::cout << el << " ";
	}
	std::cout << "\n";
	for (auto el : linkList) {
		std::cout << el << " ";
	}
	std::cout << "\n";
	for (auto el : BustedList) {
		std::cout << el << " ";
	}
	std::cout << "\n";


	/*for (auto &el : linArr) {
		el = 0;
	}
	std::cout << "\n";
	for ( auto &el : linkList) {
		el = 0;
	}
	std::cout << "\n";
	for (auto &el : BustedList) {
		el = 0;
	}
	std::cout << "\n";*/

	std::vector<int> uniq;
	for (auto el : BustedList) {
		bool flag{ true };

		for (auto el_uniq :uniq)
		{
			if (el == el_uniq) {
				flag = false;
				break;
			}
		}

		if (flag) {
			uniq.push_back(el);
		}
	}
	for (auto el : linArr) {
		bool flag{ true };

		for (auto el_uniq : uniq)
		{
			if (el == el_uniq) {
				flag = false;
				break;
			}
		}

		if (flag) {
			uniq.push_back(el);
		}
	}
	for (auto el : linkList) {
		bool flag{ true };

		for (auto el_uniq : uniq)
		{
			if (el == el_uniq) {
				flag = false;
				break;
			}
		}

		if (flag) {
			uniq.push_back(el);
		}
	}
	std::cout << "\n" << uniq.size() << " unique: \n";
	for (auto el_uniq : uniq) {
		std::cout << el_uniq << " ";
		
	}
	std::cout << '\n';


	std::set<int> unique;
	for (auto el : linkList) { unique.insert(el); }
	for (auto el : linArr) { unique.insert(el); }
	for (auto el : BustedList) { unique.insert(el); }

	std::cout << "\n" << unique.size() << " unique: \n";
	for (auto el_uniq : unique) {
		std::cout << el_uniq << " ";

	}
	std::cout << '\n';



	/*for (const auto &el : linArr) {
		std::cout << el << " ";
	}
	std::cout << "\n";
	for (auto el : linkList) {
		std::cout << el << " ";
	}
	std::cout << "\n";
	for (auto el : BustedList) {
		std::cout << el << " ";
	}
	std::cout << "\n";*/
	
	/*
	//������� ������
	while (linArr.size()) {
		//linArr.pop_back(); �� 
		linArr.erase(linArr.begin());
	}
	while (BustedList.size()) {
		BustedList.erase(BustedList.begin());
	}*/



	{
		for (auto it = linArr.begin(); it != linArr.end(); ++it) {
			*it += 2;
		}

	}
	{
		for (auto it = linkList.begin(); it != linkList.end(); ++it) {
			*it += 2;
		}

	}
	{
		for (auto it = BustedList.begin(); it != BustedList.end(); ++it) {
			*it += 2;
		}

	}

	


	return 0;
}