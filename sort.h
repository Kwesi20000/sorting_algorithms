#ifndef SORT_H
#define SORT_H

#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>

/* The comparison direction macros for bitonic sort */
#define UP 0
#define DOWN 1

/**
 * enum bool - Enumeration of Boolean values.
 * @false: This equals 0.
 * @true: This equals 1.
 */
typedef enum bool
{
	false = 0,
	true
} bool;

/**
 * struct listint_s - Doubly linked list node
 *
 * @n: Integer stored in the node
 * @prev: Pointer to the previous element of the list
 * @next: Pointer to the next element of the list
 */
typedef struct listint_s
{
	const int n;
	struct listint_s *prev;
	struct listint_s *next;
} listint_t;

/* Helper functions */
void print_array(const int *array, size_t size);
void print_list(const listint_t *list);

/* The sorting algoritms */
void bubble_sort(int *array, size_t size);
void insertion_sort_list(listint_t **list);
void selection_sort(int *array, size_t size);
void quick_sort(int *array, size_t size);
void shell_sort(int *array, size_t size);
void cocktail_sort_list(listint_t **list);

/* Other Prototypes */
void swap_int(int *a, int *b);
int our_partition(int *array, size_t size, int left, int right);
void our_sort(int *array, size_t size, int left, int right);
void swap_node_ahead(listint_t **list, listint_t **tail, listint_t **shake);
void swap_node_behind(listint_t **list, listint_t **tail, listint_t **shake);

#endif /* SORT_H */
