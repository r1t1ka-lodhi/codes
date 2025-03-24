#include <iostream>
using namespace std;
int main()
{
   int arr[5] = {};
   int arr1[5] = {};
   for (int i = 0; i < 5; i++)
   {
      int a;
      cin >> a;
      arr[i] = a;
   }
   for (int i = 0; i < 5; i++)
   {
      int a, first;
      first = arr[i];
      arr1[i] = arr[4 - i];
      arr1[4 - i] = first;
   }
   for (int i = 0; i < 5; i++)
   {
      cout << arr1[i];
   }

   return 0;
}
/*#include <iostream>

// Function to reverse an array
void reverseArray(int arr[], int start, int end) {
   while (start < end) {
      // Swap elements at start and end indices
      int temp = arr[start];
      arr[start] = arr[end];
      arr[end] = temp;
      // Move towards the center
      start++;
      end--;
   }
}
void printArray(int arr[], int size) {
   for (int i = 0; i < size; i++) {
      std::cout << arr[i] << " ";
   }
   std::cout << std::endl;
}

int main() {
   int arr[] = {1, 2, 3, 4, 5};
   int n = sizeof(arr) / sizeof(arr[0]);

   std::cout << "Original array: ";
   printArray(arr, n);

   reverseArray(arr, 0, n - 1);
   std::cout << "Reversed array: ";
   printArray(arr, n);

   return 0;
}*/