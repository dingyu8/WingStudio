#include <stdio.h>
void main()
{  int j,k,a[12],*p ;
	p=a;  //ʹָ�� p ָ�������� a���׵�ַ��
	for(j=0; j<12; j++)
		scanf("%d", p++);  //�ƶ� P ��λ�ã���������
	p=a;  //ָ�����¶�λ������a���׵�ַ
	for(j=0; j<12; j++)
	{  if(j%4==0)
			printf("\n");  //��ÿ�� 4 �������
		printf("%4d", *p++);        //ע�⣺*p++�൱��*(p++)
	}
	printf("\n");
}
