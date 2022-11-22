#ifndef ARRAYSORTERFUNCTIONS_H
#define ARRAYSORTERFUNCTIONS_H

#include <stdio.h>
#include <stdlib.h>

void selectionSort(int list[], int length);

void insertionSort(int list[], int length);

void quickSort(int list[] , int lo , int hi);

int partition(int list[], int lo , int hi);

void arrayPrinter(int list[] , int length);

#endif