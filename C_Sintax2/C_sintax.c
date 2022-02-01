#include <stdio.h>        // ���������� ������������ ���� stdio.h
#include <locale.h>
#include <limits.h>



int main(void)                  // ���������� ������� main
{                               
    char* locale = setlocale(LC_ALL, "");

    /* ���� ��
    ��������� �� ����� �� ������� �� ������ �������� �������������, ����������� ������� � ���������� ��������.
     - ��������� ������������� ��������� ��������������� ������ �� ��� ����������. ������ - #include <stdio.h> - ��� ��������� ������������� ��������� � ���� ��������� � ����������� ������� - printf();
     - ���������� ������� ���������� ������������ ������ ��� ��������� ���������.
     - � ������� ���������� ��������� ��� �������� ���������.
    */




    printf("\n\n\n/////////// ����������\n");
    // ���������� - https://metanit.com/cpp/c/2.2.php
    int Number; //Number � number - ��� ������ ���������� �� �� ����������� ����

    int number; //����������� ���������� number
    number = 2; //������������� ����������
    printf("number = %d \n", number);   // %d - ��� ������������ ������ �������� ����������� �������� ����������.

    /* ����������������� �������� ����� � ��:
    auto, break, case, char, const, continue, default, do, double, else, enum, extern, float, for, goto, if, int, long, 
    register, return, short, signed, sizeof, static, struct, switch, typedef, union, unsigned, void, volatile, while.
    */





    printf("\n\n\n/////////// ���� ������\n");
    // ���� ������ - https://metanit.com/cpp/c/2.3.php
    char c = 120;
    char ch = "#";   //??????????????????????????????????????????
    printf("c = %d \n", c);
    printf("ch = %d \n", ch);   //??????????????????????????????????????????

    printf("sizeof(c) = %d ����. \n", sizeof(c));
    printf("sizeof(number) = %d ����. \n", sizeof(number));

    printf("INT_MIN = %d \n", INT_MIN);  //��� ���������� ����������� �������� INT_MIN ���������� ��������� ������������� #include <limits.h>
    printf("INT_MAX = %d \n", INT_MAX);  //�������� INT_MIN � INT_MAX ���������� � ������������ ����� limits.h, ������� ��� ���������� ���������� � ������� ��������� include





    printf("\n\n\n/////////// ���������� �����\n");
    // ���������� �����. ������� printf - https://metanit.com/cpp/c/2.4.php
    /*
    ����� ������������ ������ �� ����� ���������� � ������ ����������� ������ ��������, ������� ���������� 
    ������������ ��������������������. �������� ���������������� �� ��� :
        \n : ������� �� ����� ������
        \t : ���������
        \r : ������� �������(�������) � ������ ������
        \\: �������� ����
        \': ��������� �������
        \": ������� �������
     */
    printf("The book \"The C Programming Language\"\nBrian Kernighan, Dennis Ritchie.");

    printf("\n\n");
    //������������ ��������������
    /*
    ������������ �������������� ��������� ������ ������ ������ ��������� ����� ������. ���������� ����������� 
    ������������ �������������� �������� ��������� �������:
        % ����� ������_����.�������� ����������� ������������

        �� ���� ����������� ������������� �������� ������ ��� % � ������������.

        ����� ������������� �� ����� ������������:
        %c : ��� ������ ��������� ��������(��� char)
        %s : ��� ������ �����
        %d : ��� ������ ����� ����� �� ������(��� int)
        %i : ��� ������ ����� ����� �� ������(��� int)
        %u : ��� ������ ����� ������������� �����(��� unsigned)
        %f : ��� ������ ����� � ��������� ������(float, double)
        %F : ��� ������ ����� � ��������� ������ � ������� ��������(float, double)
        %e : ��� ������ ����������������� ������������� ����� � ��������� ������(float, double)
        %E : ��� ������ ����������������� ������������� ����� � ��������� ������ � ������� ��������(float, double)
        %g : ��� ������ ����� ������������ ����� �������� �� �������� % e ��� % f
        %G : ��� ������ ����� ������������ ����� �������� �� �������� % E ��� % F
        %o : ��� ������ ������������ ����� ��� �����
        %x : ��� ������ ����������������� �����
        %X : ��� ������ ����������������� ����� � ������� ��������
        %% : ��� ������ ����� ��������
    */
    float r = 71.8986;
    printf("x = %f \n", r);
    printf("x = %e \n", r);

    char symbol = 'r';
    printf("symbol = %c \n", symbol);

    unsigned int number2 = 23;
    printf("number2 = %u \n", number2);

    printf("%s \n", "Hello Word 2013");


    // ����� ������������ �������������� ������������ ������ "%4.2f", ��� "4" - ������ ���� (��� ������ ����� ����� 
    // �������������� 4 �����), � "2" - �������� (2 ����� � ������� �����).
    printf("x = %4.8f \n", r);  // 71.90  


    printf("\n\n");
    /* ������������ ��������� ���������������� ��������� ��������. 
    ������������ ��������� ������������:
    h: ��� ������ �������� short int
    l: ��� ������ �������� long int
    L: ��� ������ �������� long double
    */
    short r2 = 7100;
    printf("x = %hd \n", r2);

    // ������������� ���������� �� ������ �������� ��� ������ � ������� printf. �� ����� ���������� ��������� ��������:
    printf("Name=%s \t Age=%d \t Weight=%3.2f", "Tom", 23, 63.3456);

    printf("\n\n");
    /*
    ������������� ����� ������������ �����, ������� ������������� ��������� ��������� ��������������� ������:
        +: ���� ��������� �������� ����� ���� (+ ��� -), �� ��� ���������. ��� ������� ����� ���� ��������� ������ � 
           ������ �������������� ��������.

        ������: ��������� ������ �� ����� ����� ����� �������������� �������.

        #: ��� ������������� �� ��������������� "o", "x", "X" �������� ����� ��������� � ��������������� 
           ��������� 0, 0x ��� 0X. ��� ������������� �� ��������������� "f", "g", "G" ���������� ����� ����� ����������, 
           ���� ���� � ����� ��� ������� �����.

    ������ ������������� ������:
*/
    printf("%d \n", 8);
    printf("% d \n", 8);
    printf("%+d \n", 8);
    printf("%#o \n", 28);
    printf("%#f \n", 8.);






    printf("\n\n\n/////////// ���������\n");
    // ��������� - https://metanit.com/cpp/c/2.5.php
    /*

     */



















    printf("\n\n\n\n\n");       //work from home
    return 0;                   // ������� �� �������
}                               
