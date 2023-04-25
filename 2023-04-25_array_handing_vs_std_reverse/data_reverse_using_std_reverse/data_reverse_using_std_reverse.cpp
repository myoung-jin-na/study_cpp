// data_reverse_using_std_reverse.cpp : �ܼ� ���� ���α׷��� ���� �������� �����մϴ�.
//

#include "stdafx.h"
#include <iostream>
#include <vector>

int main()
{
	std::vector<int> v1 = { 1,2,3,4,5,6,7,8,9,10 };
	std::vector<int> v2 = v1;

	//-----------------------------------------------
	// data handling. easy and no error. 
	//-----------------------------------------------
	std::reverse(v2.begin(), v2.end());

	std::cout << "--- using std::reverse --- " << std::endl;

	for (auto it : v2) {
		std::cout << it << std::endl;
	}

    return 0;
}

