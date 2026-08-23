#include <stdio.h>
Ex. No: 6
 Semaphore Implementation
43
#include <stdlib.h>
#include <unistd.h>
#include <semaphore.h>
@@ -32,4 +29,4 @@ int main()
wait(NULL);
sem_destroy(sem);
return 0;
}
}
