#define _CRT_SECURE_NO_WARNINGS
//BC134 ���ξ���
#include <stdio.h>
int array[1001][1001] = { 0 };
int main(void)
{ 

    int n = 0;
    scanf("%d", &n);
    int i = 1, j = 1, k = 0, pos = 1; //pos�������ƶ�   1��������   -1��������
    array[i][j] = 1;
    for (k = 2; k <= n * n; k++)
    {
        if (i == 1 && j < n && pos == 1) //�����ϱ߽�,������1,�в���     �˺�����,�м�
        {
            array[i][++j] = k;
            pos = -1;                 //����ע��
        }
        else if (j == 1 && i < n && pos == -1)//������߽�,������1,�в���     �˺��м�,����
        {
            array[++i][j] = k;
            pos = 1;                     //����ע��                
        }
        else if (j == n && pos == 1) //������߽�,������1,�в���     �˺�����,�м�
        {
            array[++i][j] = k;
            pos = -1;                     //����ע��
        }
        else if (i == n && pos == -1) //�����ұ߽�,������1,�в���    �˺��м�,����
        {
            array[i][++j] = k;
            pos = 1;
        }
        else if (pos == 1)         //��ȥ����ı߽����,�����м��ƶ�����
        {
            array[--i][++j] = k;
        }
        else if (pos == -1)
        {
            array[++i][--j] = k;
        }
    } 
    for (i = 1; i <= n; i++)
    {
        for (j = 1; j <= n; j++)
            printf("%d ", array[i][j]);
        printf("\n");
    }
    return 0;
}
