#include<stdio.h>
#include<cuda.h>
__global__ void hwkernal(){
	printf("hello world\n");
}
int main(){
      hwkernal<<<1,5>>>();
      cudaThreadSynchronize();;
}
