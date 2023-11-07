#include"Divisor.h"
#include<iostream>
using namespace std;
Divisor::Divisor(int few, int range,int num) { _few = few, _range = range,_num= num; }

int Divisor::DivisorsNumbers()
{
	int count = 0;
	int numCount = 0;
	for (int i = _num;i <= _range;i += 2) {
		for (int j = 1;j <= _range;++j) {
			if (i < j)
			{
				break;
			}
			else if (i % j == 0)
			{
				
				count++;
			}

		}
		if (_few == count) {
			
			numCount++;
		}
		count = 0;
	}
	return numCount;
}