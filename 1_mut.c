#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<pthread>

static int glob=0;

static void threadFunc1() {
	int loc,j;
