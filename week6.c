#include <stdio.h>
// void addTen(int arr[][n]], int n)
int addTen(int *number, int n) // pass by reference ส่ง pointer เข้าไป
{
    for (int i = 0; i < n; i++){
        printf("[%p] = %d\n",number + i, *(number+i));
        *(number + i)+=10; // บวกค่าทุกตัวใน array เพิ่ม 10
    }
    return 1;
}
void addTwenty(int *n) // ไม่จำเป็นต้อง return เพราะจะไปเปลี่ยนค่าโดยตรงเลย
{
    *n +=20;
}
int main()
{
    int numbers[] = {1,2,3,4,5};
    int n = 5;
    addTen(numbers,n); // 14 15 16 17 18
    for (int i = 0; i < n; i++){
        printf("main [%p] = %d\n",numbers + i, *(numbers +i));
    }
    addTwenty(&n); 
    printf("n = %d\n",n); // n = 25
}