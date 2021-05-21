#pragma once
#include <curl/curl.h>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define _CRT_SECURE_NO_WARNINGS
#define N 20

typedef struct {
	int max;
	int min;
	char rname[20];
}rock;

void send_data(rock); #pragma once
