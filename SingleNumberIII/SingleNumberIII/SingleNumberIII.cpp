// SingleNumberIII.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include<iostream>
#include"SingleNumberIII.h"

int main()
{
	int n = 0;
	cin >> n;
	vector<int> input(n);
	for (int i = 0; i < n; i++)
		cin >> input[i];
	SingleNums sin;
	vector<int> output(sin.getSingleNums(input));
	for (int i = 0, len = output.size(); i < len; i++)
		cout << output[i] << ' ';
	cout << '\n';
	exit(0);
    return 0;
}

