// 헤더 가드의 시작 
#ifndef ADD_H 
#define ADD_H 
// .h 파일의 실제 내용: 선언 
int HelloWorld(void);
int SimpleAdder(void);
int StringIO(void);
int SumNumber(void);
int PracticePhoneNumer(void);
int PracticeGugudan(void);
void PracticeSalary(void);
void MyFunc(void);
void MyFunc(char c);
void MyFunc(int a, int b);
void PracticeSwap(int* num1, int* num2);
void PracticeSwap(char* char1, char* char2);
void PracticeSwap(double* double1, double* double2);
int Addr(int num1 = 1, int num2 = 2);
int BoxVolume(int length, int width = 1, int height = 1);

//inline int SQUARE(int x) {
//	return x * x;
//}
// 헤더 가드의 끝 
#endif
