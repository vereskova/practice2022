/*
 * @file practice1y2022.c
 * @autor ���� �. �., ��. 515-�
 * @date 10.07.2022
 * @brief ��������� ��������
 * @task ��������: ������� ��� �����, ������������ � ���� ����� ���� �����. */
 /* �������� ���������, ������� ������ � ���������� ����������� ����� N
  * � ������� ��� �����, �� ������������� N, ������� ����� �����������
  * � ���� ����� ����� ���� ����������� �����. */

#include <stdio.h>
#include <math.h>
#include "header.h"

int main()
{
    int N;
    int i = 0;
    int k = 0;
    double p = 0;

    printf("Enter N: ");
    scanf_s("%i", &N);

    if (N <= 0) {
        printf("incorrectly entered number\n");
    }
    function(k, i, N, p);
}