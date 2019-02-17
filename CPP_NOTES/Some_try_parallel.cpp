
 while(Thread.isInterupted) {
 	try {
 		sleep(0);
 		// some logic
 	} catch (InteruptedEcxeprion ex) {
 		// освоббождение ресурсов и т.д.
 	}
 }

// OpenMP
#include <stdio.h>
#include <omp.h>

int main () {
	int i;
	#pragma omp parallel
	{
		#pragma omp for
		for (int i = 0; i < 1000; ++i) 
			printf("%d", i)
		
	}
	return 0;
}

// ----------
int pthread_create(
	pthread_t `thread,
	const pthread_attr_t `attr,
	void '('start_routine)(void'),
	void `arg
	);
