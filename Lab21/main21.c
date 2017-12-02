/*
 * main21.c
 *
 *  Created on: 2017年12月2日
 *      Author: Administrator
 */
#include <stdio.h>
int main(int argc, char **argv) {
	char username[5]; // 可以裝30個字元
	int age;

	printf("input username: ");
	fflush(stdout); // 先印出來
	scanf("%4s",username); // 29是因為最後的slash0也會佔一字元; &username 硬要傳(記憶體位置)也是可以

	printf("input age: ");
	fflush(stdout);
	scanf("%d",&age); // 因為是進去一個方法內，所以要傳記憶體位置進去，不然不會影響到宣告在外的int

	printf("%s is %d years old\n",username,age);

	return 0;
}


