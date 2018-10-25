#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>



int main(){

  //Path to the file.
  char * address = "text.txt";

  //buffer
  char buf[28];
  
  //Open the file with read and write flags.
  int fd = open(address,O_RDWR);

  //Reading the file
  read(fd,buf,26);
  buf[27] = '\0';
  printf("reading \"text.txt\": \n%s\n", buf);
  close (fd);

  fd = open(address,O_RDWR);
  //Write into the file
  write(fd,"bepi",4);
  close (fd);

  fd = open(address,O_RDWR);
  //Read again to see changes
  read(fd,buf,30);
  buf[27] = 0;
  printf("wrote to \"test.txt\"\nupdated file:\n%s\n",buf);
  close (fd);
  fd = open(address,O_RDWR);
  write(fd,"bana",4);
 
  //Close the file
  close (fd);
  return 0;
  
}
