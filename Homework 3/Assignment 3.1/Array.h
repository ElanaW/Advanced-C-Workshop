#ifndef ARRAY_H_
#define ARRAY_H_

int Sum(int* arr, int size)
{
	int sum=0;

	for (int i = 0; i < size; i++)
	{
		sum += arr[i];
	}
	return sum;
}

#endif //ARRAY_H_
