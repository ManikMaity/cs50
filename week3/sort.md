# Sort

### Selection Sort:
    for i from 0 to n-1
        find the smallest between i to n-1
        swap places numners with number[i]

#### Selection Sort Formula:
    (n-1)+(n-2)+(n-3)+(n-4)....+1
    = n(n-1)/2
    = (n^2 - n)/2   --(multiplied by 2)
    = n^2/2 - n/2   --multi by 2

    O(n^2) steps --- worst case sorting

    Ω(n^2) for best case sorting

### Bubble Sort:
    repeat n time
        fro i from 0 to n-2
            if number[i] and number[i+1] not odered
            swap them

#### Formula for bubble sort:
    (n-1)*(n-1)
    = n^2 - 1n- 1n +1
    = n^2 - 2n +1

     O(n^2) upper steps -- worst case

### Recursion:
It is the ability of function to call itself.

### Merge Sort:
    if only one number
        Quit
    else
        Sort left half of number
        sort right half of the number
        Merge the halves

O( n log n)  --> higher steps

### Website
[Sorting Visual Website](https://www.cs.usfca.edu/~galles/visualization/ComparisonSort.html)