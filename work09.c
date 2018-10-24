#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>



int main(){

  //Path to the file.
  char * address = "../text.txt";

  //Open the file with read and write flags.
  int fd = open(address,O_RDWR);

  //Reading the file
  
  //Write into the file

  //Read again to see changes

  //Close the file
  close (fd);
  return 0;
  
}
