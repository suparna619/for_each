#include "../expr_assert.h"
#include "for_each.h"
#include <math.h>
#include <string.h>

void increment_by_one(int element,int index,int *array){
	array[index] = array[index]++;
}

void squar_root(int element,int index,int *array){
	array[index] = sqrt(array[index]);
}

void math_ceil(float element,int index,float *array){
	array[index] = ceil(array[index]);	
}

void math_floor(float element,int index,float *array){
	array[index] = floor(array[index]);	
}

void next_character(char element,int index,char *array){
	array[index]++;
}

void my_strlen(char *element,int index,char **array){
	array[index] = strlen(array[index]);
}

void test_to_increment_the_elements_of_an_array_by_one(){
	int array[5] = {1,2,3,4,5};
	void (*p)(int,int,int);
	p = &increment_by_one;
	assertEqual(for_each_int(array,5,p),1);
	assertEqual(array[0],2);
	assertEqual(array[1],3);
	assertEqual(array[2],4);
	assertEqual(array[3],5);
	assertEqual(array[4],6);
}

void test_to_find_the_square_root_of_each_element_of_an_array(){
	int array[5] = {1,4,9,16,25};
	void (*p)(int,int,int);
	p = &squar_root;
	assertEqual(for_each_int(array,5,p),1);
	assertEqual(array[0],1);
	assertEqual(array[1],2);
	assertEqual(array[2],3);
	assertEqual(array[3],4);
	assertEqual(array[4],5);
}


void test_to_find_the_MathCeil_of_each_element_of_an_array(){
	float array[5] = {2.4,-3.4,0.0,2.7,-3.9};
	void (*p)(float,int,float);
	p = &math_ceil;
	assertEqual(for_each_float(array,5,p),1);
	assertEqual(array[0],3.0);
	assertEqual(array[1],-3.0);
	assertEqual(array[2],0.0);
	assertEqual(array[3],3.0);
	assertEqual(array[4],-3.0);
}


void test_to_find_the_MathFloor_of_each_element_of_an_array(){
	float array[5] = {2.4,-3.4,0.0,2.7,-3.9};
	void (*p)(float,int,float);
	p = &math_floor;
	assertEqual(for_each_float(array,5,p),1);
	assertEqual(array[0],2.0);
	assertEqual(array[1],-4.0);
	assertEqual(array[2],0.0);
	assertEqual(array[3],2.0);
	assertEqual(array[4],-4.0);
}

void test_to_find_the_next_character_of_each_element_of_an_array(){
	char array[] = "abcdez";//{'a','b','c','d','e'};
	void (*p)(char,int,char);
	p = &next_character;
	assertEqual(for_each_character(array,strlen(array),p), 1);
	assertEqual(array[0],'b');
	assertEqual(array[1],'c');
	assertEqual(array[2],'d');
	assertEqual(array[3],'e');
	assertEqual(array[4],'f');
	assertEqual(array[5],'{');
}

void test_to_find_the_legth_of_each_string_element_of_an_array(){
	char *array[] = {"suparna","abir"};
	void (*p)(char*,int,char**);
	p = &my_strlen;
	assertEqual(for_each_string(array,2,p), 1);
	assertEqual(array[0],7);
	assertEqual(array[1],4);
}