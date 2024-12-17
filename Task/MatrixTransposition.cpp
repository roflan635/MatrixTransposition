﻿// Task.cpp : Определяет функции для статической библиотеки.
//

#include "pch.h"
#include "Task.h"


/*
	Напишите функцию, которая транспонирует матрицу целых чисел произвольного размера, помещает результат
	в новую матрицу, которая должна быть создана и возвращает указатель на созданную матрицу.
	Транспонированная матрица — матрица, полученная из исходной матрицы заменой строк на столбцы.
	Если размеры матриц меньше или равны нулю хотя бы по одной размерности - функция также должна вернуть пустой
	указатель. Если в качестве исходной матрицы передан пустой указатель - функция долна вернуть пустой указатель.

	1. Функция должна иметь имя MatrixTransposition
	2. Функция в качестве параметров должна принимать следующее:
		- первый параметр - указатель на транпонируемую матрицу. Матрица должна представлять собой двумерный 
			динамический массив. Первый параметр указывает на массив указателей, каждый из которых указывает на 
			одномерный массив целых чисел
		- второй параметр - количество столбцов матриц
		- третий параметр - количество строк матриц

		порядок следования параметров изменять НЕЛЬЗЯ
	3. Функция должна возвращать указатель на результирующую матрицу. Ее размерность должна соответствовать 
	следующим принципам: если в исходной матрице C строк и R столюцов, то  в результирующей матрице должно быть
	R строк и C столбцов. Тип возвращаемого результата - int**. Ваша функция должна создавать результирующую
	матрицу и выделять для ее хранения место в динамической памяти. Возвращаемый указатель должен указывать на массив
	указателей, каждый из которых указывает на одномерный массив чисел, представляющих из себя одну строку матрицы.

	Например, имеем исходную матрицу:
	1  2  3  4  5
	6  7  8  9  10
	11 12 13 14 15

	тогда транспонированная будет:
	1  6  11
	2  7  12
	3  8  13
	4  9  14
	5  10 15

	!!!!! ВАЖНО !!!!!
	В данном файле разрешается разместить кроме кода требуемой функции - код любых других вспомогательных
	функций. Никакой функции main() в этом файле быть не должно.
	Если вы хотите испытать и отладить вашу функцию - пишите код в файле Example.cpp проекта Example данного решения
	Для этого задайте в качестве запускаемого проекта проект Example.

	ДЛЯ АВТОМАТИЧЕСКОГО ТЕСТИРОВАНИЯ  проверки правильности работы вашего задания - сделайте запукаемым проект
	Tests и запустите его. Если функция написана правильно - все тесты должны успешно выполниться
	(зеленый цвет в консоли). Если ваша функция работает некорректно - в консоли будут сообщения красным цветом
*/
