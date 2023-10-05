def insertion_sort(A):
    for j in range(1, len(A)):
        key = A[j]
        i = j - 1
        while i >= 0 and A[i] > key:
            A[i + 1] = A[i]
            i = i - 1
        A[i + 1] = key

# Example usage:
my_list = [12, 11, 13, 5, 6]
insertion_sort(my_list)
print(my_list)