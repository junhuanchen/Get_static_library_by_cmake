#include "stdio.h"
#include "MyClassTest.h"

int main() {
	puts("test");

	auto tmp = MyClass();

	auto res = tmp.AddNumber(23, 41);

	printf("%d\r\n", res);

	return res;
}
