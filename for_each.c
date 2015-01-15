#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int for_each_int(int *array, int length_of_array, void (*function_ptr)(int,int,int *)){
	int i;
	if(length_of_array == 0)
		return 0;
	for (i = 0; i < length_of_array; ++i)
	{
		function_ptr(array[i],i,array);
	}
	return 1;
}


int for_each_float(float *array, int length_of_array, void (*function_ptr)(float element,int index,float *array)){
	int i;
	if(length_of_array == 0)
		return 0;
	for (i = 0; i < length_of_array; ++i)
	{
		function_ptr(array[i],i,array);
	}
	return 1;
}


int for_each_character(char *array, int length_of_array, void (*function_ptr)(char element,int index,char *array)){
	int i;
	if(length_of_array == 0)
		return 0;
	for (i = 0; i < length_of_array; ++i)
	{
		function_ptr(array[i],i,array);
	}
	return 1;
}

int for_each_string(char *array, int length_of_array, void (*function_ptr)(char *element,int index,char **array)){
	int i;
	if(length_of_array == 0)
		return 0;
	for (i = 0; i < length_of_array; ++i)
	{
		function_ptr(array[i],i,array);
	}
	return 1;	
}