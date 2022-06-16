#!/usr/bin/python3

def is_palindrome(text):
	'''
	Checks if a given string is a palindrome

	Parameters:
	text (str): The string to check

	Returns:
	True if the string is a palindrome, otherwise False
	'''
	text_len = len(text)
	mid_idx = text_len // 2
	offset = 0 if text_len % 2 == 0 else 1
	left = text[0:mid_idx]
	right = text[mid_idx + offset:]
	eql = True
	for i in range(mid_idx):
		if left[i] != right[0 - i - 1]:
			eql = False
			break
	return eql

def find_max_palindrome(start, end):
	'''
	Finds the maximum palindrome between a range of numbers

	Parameters:
	start (int): The start of the range
	end (int): The end of the range

	Returns:
	A 2-item tuple consisting of the maximum palindrome and another tuple
	, which consists of the 2 numbers whose product formed the maximum palindrome
	'''
	max_palindrome = 0
	nums = (0, 0)
	for i in range(start, end):
		for j in range(start, end):
			product = i * j
			if not is_palindrome(str(product)):
				continue
			if product > max_palindrome:
				max_palindrome = product
				nums = (i, j)
	res = [max_palindrome, nums]
	return tuple(res)

max_palindrome, nums = find_max_palindrome(100, 999)

print('{:d} = {:d} × {:d}'.format(max_palindrome, nums[0], nums[1]))
