// Standard Traning.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include <iostream>

int main()
{
    std::cout << "Console Out" << std::endl;
    std::cout << "Hello" << "World~!" << std::endl;

    int a, b;
    std::cout << "숫자 2개입력 > ";
    std::cin >> a >> b;
    std::cout << a + b << std::endl;

    char str[100] = "배열 입출력 주의점";
    std::cout << "str 값 : " << str << std::endl;

    char temp[100];
    std::cout << "값 입력 > ";
    std::cin >> temp;  // "test test test" 를 입력할 예정
    std::cout << "입력한 값 출력 : " << temp << std::endl;
    
    const double dNum = 1234.56789;

    printf("%.0f\n", dNum);
    printf("%.1f\n", dNum);
    printf("%.2f\n", dNum);
    printf("%.3f\n", dNum);
    printf("%.4f\n", dNum);

    printf("%9.0f\n", dNum);
    printf("%9.1f\n", dNum);
    printf("%9.2f\n", dNum);
    printf("%9.3f\n", dNum);
    printf("%9.4f\n", dNum);

    return 0;
}