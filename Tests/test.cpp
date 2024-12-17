#include "pch.h"
#include "Task.h"
#include <iostream>
using namespace std;


bool isEqual(int** m1, int** m2, int cols, int rows)
{
	for (int i = 0; i < rows; i++)
		for (int j = 0; j < cols; j++)
			if (m1[i][j] != m2[i][j])
				return false;
	return true;
}

int** ConvertStaticArrayToPointers(int* in, int cols, int rows)
{
	int** result = new int* [rows];
	for (int i = 0; i < rows; i++)
		result[i] = in + (i * cols);
	return result;
}

void Destroy2DArray(int** a, int rows)
{
	if (a)
	{
		for (int i = 0; i < rows; i++)
			delete[] a[i];
		delete[] a;
	}
}

TEST(TestTask,TranspositionNullMatrix) {
	int** res;
	EXPECT_NO_THROW(res = MatrixTransposition(nullptr,1, 1));
	EXPECT_EQ(res, nullptr);
}

TEST(TestTask, TranspositionZeroMatrix) {
	int a[3][3]{
		{1,2,3},
		{4,5,6},
		{7,8,9},
	};
	int** res;
	EXPECT_NO_THROW(res = MatrixTransposition((int**)a, 0, -2));
	EXPECT_EQ(res, nullptr);
}

TEST(TestTask, Transposition3x3Matrix) {
	int a[3][3]{
		{1,2,3},
		{4,5,6},
		{7,8,9},
	};
	int r[3][3]{
		{1,4,7},
		{2,5,8},
		{3,6,9},
	};

	int** in1 = ConvertStaticArrayToPointers((int*)a,3,3);
	int** out = ConvertStaticArrayToPointers((int*)r, 3, 3);
	int** res;
	EXPECT_NO_THROW(res = MatrixTransposition(in1, 3, 3));
	EXPECT_FALSE(res == nullptr);
	EXPECT_TRUE(isEqual(out, res, 3, 3));
	delete[] in1;
	delete[] out;
	EXPECT_NO_THROW(Destroy2DArray(res, 3));
}

TEST(TestTask, Transposition1x1Matrix) {
	int a[1][1]{
		{1},
	};
	int r[1][1]{
		{1},
	};
	int** in1 = ConvertStaticArrayToPointers((int*)a, 1, 1);
	int** out = ConvertStaticArrayToPointers((int*)r, 1, 1);
	int** res;
	EXPECT_NO_THROW(res = MatrixTransposition(in1, 1, 1));
	EXPECT_FALSE(res == nullptr);
	EXPECT_TRUE(isEqual(out, res, 1, 1));
	delete[] in1;
	delete[] out;
	EXPECT_NO_THROW(Destroy2DArray(res, 1));
}

TEST(TestTask, Transposition3x2Matrix) {
	int a[2][3]{
		{1,2,3},
		{4,5,6},
	};

	int r[3][2]{
		{1,4},
		{2,5},
		{3,6}
	};
	int** in1 = ConvertStaticArrayToPointers((int*)a, 3, 2);
	int** out = ConvertStaticArrayToPointers((int*)r, 2, 3);
	int** res;
	EXPECT_NO_THROW(res = MatrixTransposition(in1, 3, 2));
	EXPECT_FALSE(res == nullptr);
	EXPECT_TRUE(isEqual(out, res, 2, 3));
	delete[] in1;
	delete[] out;
	EXPECT_NO_THROW(Destroy2DArray(res, 3));
}
