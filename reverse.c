// C Programs to Calculate 
// reverse of a number 
#include <stdio.h> 

// Iterative approach 
int reverse_iteration(int N) 
{ 
	int ans = 0; 
	while (N != 0) { 

		ans = ans * 10 + (N % 10); 
		N = N / 10; 
	} 

	return ans; 
} 

// recursive approach 
int reverse(int n, int ans) 
{ 
	if (n == 0) 
		return ans; 

	ans = ans * 10 + n % 10; 
	return reverse(n / 10, ans); 
} 

int main() 
{ 
	int N = 15942; 
	printf("Initial number:%d\n", N); 

	N = reverse_iteration(N); 
	printf("%d after reverse using iteration\n", N); 

	int ans = 0; 
	ans = reverse(N, ans); 
	printf("%d after again reverse using recursion", ans); 

	return 0; 
}





// reverse an array

#include <stdio.h> 

void reverse(int* arr, int n) 
{ 
	// Swapping front and back elements. 
	for (int i = 0, j = n - 1; i < j; i++, j--) { 
		int ele = arr[i]; 
		arr[i] = arr[j]; 
		arr[j] = ele; 
	} 
} 

int main() 
{ 

	int arr[] = { 1, 2, 3, 4, 5 }; 
	// Function Call 
	reverse(arr, 5); 

	// reverse array element printing 
	for (int i = 0; i < 5; i++) 
		printf("%d ", arr[i]); 

	return 0; 
}