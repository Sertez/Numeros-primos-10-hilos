#include<stdio.h>
#include<stdlib.h>
#include<pthread.h>

void primo(int num)
{
	int esprimo=0;
	int min=num;
	int max=min+4999;
	while(min<=max)
	{
		esprimo=0;
		int aux=2;
		while (aux<(min/2))
		{
			if (min % aux==0)
			{
				esprimo=1;
			}
			aux=aux+1;
		}
		if(esprimo==0)
		{
			printf("%i\n",min);
		}
		min=min+1;
	}
}
int main(void)
{
	pthread_t h1;
	pthread_t h2;
	pthread_t h3;
	pthread_t h4;
	pthread_t h5;
	pthread_t h6;
	pthread_t h7;
	pthread_t h8;
	pthread_t h9;
	pthread_t h10;
	pthread_create(&h1, NULL, &primo, 1);
	pthread_create(&h2, NULL, &primo, 5001);
	pthread_create(&h3, NULL, &primo, 10001);
	pthread_create(&h4, NULL, &primo, 15001);
	pthread_create(&h5, NULL, &primo, 20001);
	pthread_create(&h6, NULL, &primo, 25001);
	pthread_create(&h7, NULL, &primo, 30001);
	pthread_create(&h8, NULL, &primo, 35001);
	pthread_create(&h9, NULL, &primo, 40001);
	pthread_create(&h10, NULL, &primo, 45001);
	pthread_join(h1,NULL);
	pthread_join(h2,NULL);
	pthread_join(h3,NULL);
	pthread_join(h4,NULL);
	pthread_join(h5,NULL);
	pthread_join(h6,NULL);
	pthread_join(h7,NULL);
	pthread_join(h8,NULL);
	pthread_join(h9,NULL);
	pthread_join(h10,NULL);
}

