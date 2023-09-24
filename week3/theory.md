### Binary Search -

If no door left
    return false
if 50 is behind doors[middle]
    return true
else if 50 > door [middle]
    go through door[middle+1] to door[n-1]
else if 50 < door[middle]
    go through door[0] to door[midlle -1]

### Running Time -
- Linear Search: One by one search O(n).
- Linear Search: Two in one O(n).
- Binary Saerch: O(log n)

#### Formulas - slowest to fastest aglorithm
- O(n^2)
- O(n log n)
- O(n)
- O(log n)
- O(1)