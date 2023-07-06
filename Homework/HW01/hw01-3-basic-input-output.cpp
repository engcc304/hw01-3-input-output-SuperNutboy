/*
    เขียนโปรแกรมรับ "ชื่อ" จากผู้ใช้ และแสดงผลบนหน้าจอดังผลลัพธ์ด้านล่างต่อไปนี้ 
    
    Test case:
        First Name: Aomsin
        Last Name: AomMoney
    Output:
        Aomsin AomMoneys TC, RMUTL, Chiang Mai, Thailand

    Test case:
        First Name: ABC
        Last Name: DEF
    Output:
        ABD DEFs TC, RMUTL, Chiang Mai, Thailand
*/

#include <stdio.h>

int main() {
    char FName[50] ;
    char LName[50] ;
    printf("Enter your Firstname : ");
    scanf("%s", FName);
    printf("Enter Your Lastname : ");
    scanf("%s", LName);
    printf("First Name : %s\n",FName);
    printf("Last Name : %s\n",LName);
return 0;
}