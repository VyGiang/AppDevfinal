#pragma once
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<curl/curl.h>

// usually these are information are given in header file
// 1. Constant definition 
// 2. Data structure definitions 
// 3. funtion prototypes(a.k.a function decleration)

#define MAX 30

void input_scores(int[]);
void evaluation(int[], int[]);
void classification(int[], int[]);
void output_results(int[], int[]);