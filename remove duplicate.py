# Python3 implementation of above approach

# Function to remove duplicates
def removeDuplicatesFromString(str2):

	# keeps track of visited characters
	counter = 0;

	i = 0;
	size = len(str2);
	str1 = list(str2);

	# gets character value
	x = 0;

	# keeps track of length of resultant string
	length = 0;

	while (i < size):
		x = ord(str1[i]) - 97;

		# check if Xth bit of counter is unset
		if ((counter & (1 << x)) == 0):
			str1[length] = chr(97 + x);

			# mark current character as visited
			counter = counter | (1 << x);

			length += 1;
		i += 1;
		
	str2=''.join(str1);
	return str2[0:length];

# Driver code
str1 = "geeksforgeeks";
print(removeDuplicatesFromString(str1));

# This code is contributed by mits
