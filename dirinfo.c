#import <stdio.h>
#import <stdlib.h>
#import <sys/types.h>
#import <string.h>
#import <time.h>
#import <dirent.h>

struct dirent buff;

int main() {
  DIR * foo = opendir( "foo" ); //ptr to directory stream
  buff = *readdir( foo );
  
  printf( "%c\n" , buff.d_type );
  return 0;
}
