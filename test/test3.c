// Test file

#include	<stdio.h>
#include	<stdlib.h>
#include	<string.h>

int main()
{
	FILE	*f;
	char	buf[1024], *s;
	int	first;

	first = 1;
	while(fgets(buf, sizeof(buf), stdin) != 0) {
		if(first == 0) {
			printf("\n");
		}
		s = buf;
		while(*s != '\0') {
			if(*s == '\n' || *s == '\r') {
				*s = '\0';
				break;
			}
			s++;
		}
		printf("%s", buf);
		first = 0;
	}
}

/* end with spaces and no \n or \r */

  meowlinter secureapp | less
  meowlinter --error-level=4 myproject
  meowlinter --patch=mypatch.patch myproject
  meowlinter --inputs myproject
  meowlinter --regex "CWE-120|CWE-126" myproject
  meowlinter --regex "CWE-120|CWE-126" myproject