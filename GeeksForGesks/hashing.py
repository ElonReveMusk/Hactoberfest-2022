# Python3 program to convert an array
# in reduced form
def convert(arr, n):
	# Create a temp array and copy contents
	# of arr[] to temp
	temp = [arr[i] for i in range (n) ]
	
	# Sort temp array
	temp.sort()
	
	# create a map
	umap = {}
	
	
	# One by one insert elements of sorted
	# temp[] and assign them values from 0
	# to n-1
	val = 0
	for i in range (n):
		umap[temp[i]] = val
		val += 1
	
	# Convert array by taking positions from umap
	for i in range (n):
		arr[i] = umap[arr[i]]
	
def printArr(arr, n):
	for i in range(n):
		print(arr[i], end = " ")

# Driver Code
if __name__ == "__main__":
	arr = [10, 20, 15, 12, 11, 50]
	n = len(arr)
	print("Given Array is ")
	printArr(arr, n)
	convert(arr , n)
	print("\n\nConverted Array is ")
	printArr(arr, n)
