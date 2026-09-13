#include <stdio.h>
#include <time.h>

// int num = 0;
// int main(void)
// {
// 	// for (int i = 0; i < 101; i++) {
// 	// 	printf("%d\n", i);
// 	// }

// 	while (num < 101) {
// 	printf("%d\n", num);
// 	num++;
// }
// }




// // int num = 0;
// // while (num < 101) {
// // 	printf("%d\n", num);
// // 	num++;
// // }



int main() {
  const long N = 100000000;

  clock_t start, end;
  double time_taken;

  // for loop
  start = clock();

  long sum1 = 0;
  for (long i = 0; i < N; i++) {
    sum1 += i;
  }

  end = clock();
  time_taken = (double)(end - start) / CLOCKS_PER_SEC;

  printf("for loop: %f seconds\n", time_taken);

  // while loop
  start = clock();

  long sum2 = 0;
  long i = 0;

  while (i < N) {
    sum2 += i;
    i++;
  }

  end = clock();
  time_taken = (double)(end - start) / CLOCKS_PER_SEC;

  printf("while loop: %f seconds\n", time_taken);

  return 0;
}

// int main(void)
// {
// 	// for (int i = 1; i <= 20; i ++) {
// 	// 	if (i % 2 == 0){
// 	// 		printf("%d\n", i);
// 	// 	}

// 	// 	if (1 % 2 == 0 && i % 3 == 0){
// 	// 		printf("Numbers divisible by 2 and 3: %d\n", i);
// 	// 	}

// 	// }
// 	// return(0);

// 	for (int i = 0; i <= 20; i++) {
// 		if (i % 2 == 0) {
// 		printf("Even: %d\n", i);
//                 }
//         }

// 	// numbers divisible by 2 and 3
// 	for (int i = 0; i < 20; i++) {
// 		if (i % 2 == 0 && i % 3 == 0) {
// 		printf("Divisible by 2 and 3: %d\n", i);
// 	        }
// 	}

// 	return(0);
// }