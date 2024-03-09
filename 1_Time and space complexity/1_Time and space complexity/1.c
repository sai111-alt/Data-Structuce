#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>

void Func1(int N)
{
	int count = 0;
	for (int i = 0; i < N; ++i)
	{
		for (int j = 0; j < N; ++j)
		{
			++count;
		}
	}
	for (int k = 0; k < 2 * N; ++k)
	{
		++count;
	}
	int M = 10;
	while (M--)
	{
		++count;
	}
	printf("%d\n", count);
}

void Func2(int N)
{
	int count = 0;
	for (int k = 0; k < 2 * N; ++k)
	{
		++count;
	}
	int M = 10;
	while (M--)
	{
		++count;
	}
	printf("%d\n", count);
}

void Func3(int N, int M)
{
	int count = 0;
	int k = 0;
	for (k = 0; k < M; ++k)
	{
		++count;
	}
	for (int k = 0; k < N; ++k)
	{
		++count;
	}
	printf("%d\n", count);
}

void Fun4(int N)
{
	int count = 0;
	for (int k = 0; k < 100; ++k)
	{
		++count;
	}
	printf("%d\n", count);
}

const char* strchr(const char* str, char character)
{
	while (*str != '\0')
	{
		if (*str == character)
		{
			return str;
		}
		++str;
	}
	return NULL;
}

int main()
{
	Func1(2);
	Func2(2);
	Func3(2,2);
}
