 #include <stdio.h>
  //double f; // ตัว global
  //char f = '\0' // "\0" = NULL  
  int main()
  {
      printf("Hello World!");
      unsigned long long a = 4000000000; // เก็บได้เยอะที่สุด
      char c = 'a'; // 1 byte
      char b = 97; // = 'a'
      float d = 0.1234; // 4 byte
      double e = 12.345; // สองเท่าของ float
      double f; 
      float g = 1/2; // จะได้เป็น 0 เพราะเอา int/int = int นับแค่ตัวหน้าจุด
      printf("%lf", f+500); //จะได้อะไรไม่รู้เพราะไม่กำหนดค้าของ f เอาไว้
  }