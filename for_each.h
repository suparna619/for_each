int for_each_int(int *array, int length_of_array, void (*function_ptr)(int element,int index,int *array));

int for_each_float(float *array, int length_of_array, void (*function_ptr)(float element,int index,float *array));

int for_each_character(char *array, int length_of_array, void (*function_ptr)(char element,int index,char *array));

int for_each_string(char *array, int length_of_array, void (*function_ptr)(char *element,int index,char **array));
