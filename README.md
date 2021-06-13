Sorting is a process of rearranging large number of items in the specified manner .The manner is basically either ascending or descending order.
Sorting came into existence when human came up with the urge to search things or data faster.So, basically sorting arranges data in a sequence that is already defined by the user .

Sorting things have been categorized or are given preferences over their applications on the basis of two factors :
1. Time complexity (time taken to sort the data)
2. Space complexity (space required to do so)

There are many sorting algorithms availble but some few major ones are as follows:
1. Selection Sort
2. Bubble Sort
3. Insertion Sort
4. Quick Sort
5. Merge Sort
6. Heap Sort

SELECTION SORT

It is the simplest sorting algorithm.The algorithm works ,as the entire array or the provided array is divided into 2 parts .
The first part is the sorted part of the  (lets say it as array) array , and the second part is the unsorted part of the array .
Initially , the sorted part of the array is empty and the entire array is counted under the unsorted part .
First of all , the minimum elements is found .also the sorted part is at the right side and the unsorted part is at the left of it .
As already stated , that the minimum element is found among the unsorted part and then is compared to the first element of the unsorted part.If found at the wrong index value or at the wrong if condition , it is swapped .Hereby , the boundary of the unsorted array is shifted to the right by one element.
The process involves 2 loops , the first one starts from 0 to n-1 , and the second one starts from i+1 to n.
Since the sorting process involves 2 for loops , so its time complexity is O(n^2).  And its space complexity is O(1), since an extra varible is used to swap the elements .
Selection sort is used for small sized array , because it has high time and space complexity.Also , it is preferred when the cost of swapping is not more .
