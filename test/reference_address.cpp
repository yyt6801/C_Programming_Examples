#include <iostream>
 
using namespace std;
 
double vals[] = {10.1, 12.6, 33.1, 24.1, 50.0};
 
double& setValues( int i )
{
  return vals[i];   // ���ص� i ��Ԫ�ص�����
}



int main ()
{
  // ���ñ�����һ��������Ҳ����˵������ĳ���Ѵ��ڱ�������һ�����֡�һ�������ó�ʼ��Ϊĳ���������Ϳ���ʹ�ø��������ƻ����������ָ�������
  int i =1345;
  int& dd = i;
  printf("i��ֵΪ%d   dd��ֵΪ%d\n",i,dd);//i��ֵ��dd��ֵ��ȫһ����һ���䶯����һ��Ҳ���ű�
  dd = 4;
  printf("i��ֵΪ%d   dd��ֵΪ%d\n",i,dd);
  i = 123;
  printf("i��ֵΪ%d   dd��ֵΪ%d\n",i,dd); 

  int a,b=123;
  swap(a,b);
  printf("a��ֵΪ%d,,,b��ֵΪ%d\n",a,b);


   setValues(1)=1234; // �ı�� 2 ��Ԫ��
   setValues(3)=1234;  // �ı�� 4 ��Ԫ��
 
   cout << "�ı���ֵ" << endl;
   for ( int i = 0; i < 5; i++ )
   {
       cout << "vals[" << i << "] = ";
       cout << vals[i] << endl;
   }
   return 0;
}
  
// ��������
void swap(int& x, int& y)
{
   int temp;
   temp = x; /* �����ַ x ��ֵ */
   x = y;    /* �� y ��ֵ�� x */
   y = temp; /* �� x ��ֵ�� y  */
  
   return;
}
