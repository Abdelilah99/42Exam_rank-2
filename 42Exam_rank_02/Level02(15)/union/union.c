#include <unistd.h>

void ft_union(char *a,char *b){
	int tab[128]={0};
	int c;

	while (*a!='\0')
	{
		c=*a;
		if (tab[c]==0)
		{
			write(1,a,1);
			tab[c]=1;
		}
		++a;
	}
	while (*b!='\0')
	{
		c=*b;
		if (tab[c]==0)
		{
			write(1,b,1);
			tab[c]=1;
		}
		++b;
	}
	
}
int main(int argc,char **argv){
	if (argc == 3)
	{
		ft_union(argv[1],argv[2]);
	}
	write(1,"\n",1);
	return 0;
}