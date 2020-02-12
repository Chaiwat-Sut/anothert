#include <stdio.h>
int main()
{
    int x = 100;
    // int a = 0144; // 0 = เลขฐาน 8
    // int b = 0x64; // 0x = เลขฐาน 16
    // printf("x = %d",x);
    // printf("reference x = %lu\n", &x); // print address ฐาน 10
    // printf("reference x = %p\n", &x); // print address ฐาน 16
    // int number[] = {4,5,6,7,8}; // ถ้าใช้ [] ต้องใส่ข้อมูลด้วย
    // int number[100];
    // int number[100] = {4,5,6,7,8};
    // printf("index 1 = %d\n", number[1]);
    // printf("reference number[1] = %p\n", &number[1]); 
    // printf("reference number[0] = %p\n", &number[0]); // การบวก address จะบวกตามขนาดของตัวแปรเช่น int = 4 byte +1 จะเท่ากับ +4 byte
    // printf("reference number = %p\n", number); // address ของ number จะ = number[0]
    // printf("reference of number = %p\n", &number + 1); // บวก address +4 byte
    // printf("reference number[2000] = %p\n", &number[2000]); // index เริ่มเยอะจะเริ่มเอ๋อ
    // การบวก address จะเป็นการบวกเลขฐาน 16


    // Pointer

    // int number[] = {4,5,6,7,8}; 
    // int *ptr = &x; // pointer ใช่ * กำหนดเป็นตัวแปร pointer // & ดึง address ของตัวแปรออกมา
    // int *arrPtr;
    // arrPtr = number; // pointer ใช้เก็บ address ของตัวแปรอื่น
    // arrPtr += 2; // บวก address 
    // *arrPtr += 2 // บวกค่าตัวที่ pointer ชี้ 
    // *arrPtr = *arrPtr + 10; // ถ้าใช้ * ใส่ตัวแปรที่เก็บ address จะดึงค่าที่ address นั้นเก็บอยู่ออกมา
    // printf("arrptr = %p, *arrPtr = %d",arrPtr, *arrPtr); 
    

    // วิธีปริ้น array โดยใช้ pointer

    // วิธี 1

    // int number[] = {4,5,6,7,8};
    // for (int *ptr = number; ptr <= &number[4]; ptr++)
    // {
    //     printf("[%p] = %d\n",ptr, *ptr);
    // }

    // วิธี 2 
    
    // int *ptr2 = number;
    // for (int i = 0; i < 5; i++)
    // {
    //     printf("[%p] = %d\n",ptr2+i, *(ptr2+i));
    // }
    

    // char input[100];
    // int count = 0;
    // char c;
    // while ((c = getchar()) != '\n')
    // {
    //     input[count] = c;
    //     ++count;
    // }
    // input[count] = '\0';
    // for (char *cPtr = input;*cPtr != '\0' ; cPtr++)
    // {
    //     printf("%c\n", *cPtr);
    // }
    

    char c;
    int i;
    char s[100];
    scanf("%d-%c-%s",&i ,&c ,s); //scanf เวลาใส่ input ต้องพิมพ์ให้เหมือน form ที่ใส่ไว้
    printf("%d %c %s", i, c, s);
} 