
/*read a file and return a char*, if any problem return NULL*/
char* readFromOneFile(char* path);

/*write at the end of a file, if it does not exist, create the file*/
int writeInFile(char* path, char* msg);

int exist(char*path);