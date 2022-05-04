#include<stdio.h>
#include<dlfcn.h>
#include"dbg.h"

typedef int (*lib_function) (const char *data);
int main(int argc, char *argv[]){
	int rc = 0;
	check(argc == 4, "USAGE linkdemo libdemo.so function data");
	char *lib_file = argv[1];
	char *func_to_run = argv[2];
	char *data = argv[3];
	
	void *lib = dlopen(lib_file, RTLD_NOW);
	check(lib != NULL, "Failed to open the library!");
	lib_function func = dlsym(lib, func_to_run);
	check(func != NULL,"%s %s %s",func_to_run,lib_file,dlerror());
	rc = func(data);
	check(rc == 0, "Function returned with an error!");
	rc = dlclose(lib);
	check(rc == 0, "Failed to close the library!");
	return 0;
error:
	return -1;
}
