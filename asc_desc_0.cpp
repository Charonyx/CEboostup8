#include <stdio.h>
int main()
{
  int n, s[1000], a = 1, d = 1, i;

  scanf("%d", &n);

  for (i = 0; i < n; i++)
    scanf("%d", &s[i]);

  i = 0;

  while ((a == 1 || d == 1) && i < n - 1) {
    if (s[i] < s[i+1])
      d = 0;
    else if (s[i] > s[i+1])
      a = 0;
    i++;
  }

  if (a == 1)
    printf("The array is sorted in ascending order.\n");
  else if (d == 1)
    printf("The array is sorted in descending order.\n");
  else
    printf("The array is not sorted.\n");

  return 0;
}

/*
#include<stdio.h>
main(){
	long i=0,j=0,a=1,d=1,n[1000] ;
	while(n[i] != 0){
		scanf("%ld",&n[i]);
		i++;
	} 
	
	while ((a == 1 || d == 1) && j < i - 1) {
		if (n[j] < n[j+1])
			d = 0;
		else if (n[j] > n[j+1])
			a = 0;
		j++;
}
	 
	if (a == 1)
		printf("Ascending Sort Order");
	else if (d == 1)
		printf("Descending Sort Order");
	else
		printf("Unsorted Order");
}
*/
