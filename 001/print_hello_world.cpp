//�򵥲��Դ�ӡ��Hello_world!!!
#include <stdio.h>
#include <iostream>
using namespace std;
int main()
{

	// enum days {SUN = 1, MON, TUE, WED, THU, FRI, SAT};
	// enum days d = SUN;
	float C40_PASSRATE = 0;
	float W40_PASSRATE = 0;
	float new_probability, probability = 0.5;
	(C40_PASSRATE == 0 && W40_PASSRATE == 0) ? printf("͹��Ш�������ʶ�Ϊ����Ϊ�þ����͹��Ш��") : ({ new_probability = probability + (1 - probability) * 0.5 * ((1 - C40_PASSRATE) + (1 - W40_PASSRATE));printf("�¼�����ƫ����Ϊ%f", new_probability); });
}
