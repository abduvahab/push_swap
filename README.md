# push_swap (94/100)

# 🗣️ About

 	The aim of this project is to write an algorithm that sort numbers.
	
# !NOTE
Because of 42 School norm requirements:

	All variables are declared and aligned at the top of each function

	Each function can't have more then 25 lines of code

	C++ style code commenting is forbidden

	Project should be created just with allowed functions otherwise it's cheating.

# Game rules


Command				Description


	sa	swap a - swap the first 2 elements at the top of stack a. Do nothing if there is only one or no elements).
	
	sb	swap b - swap the first 2 elements at the top of stack b. Do nothing if there is only one or no elements).
	
	ss	sa and sb at the same time.
	
	pa	push a - take the first element at the top of b and put it at the top of a. Do nothing if b is empty.
	
	pb	push b - take the first element at the top of a and put it at the top of b. Do nothing if a is empty.
	
	ra	rotate a - shift up all elements of stack a by 1. The first element becomes the last one.
	
	rb	rotate b - shift up all elements of stack b by 1. The first element becomes the last one.
	
	rr	ra and rb at the same time.
	
	rra	reverse rotate a - shift down all elements of stack a by 1. The flast element becomes the first one.
	
	rrb	reverse rotate b - shift down all elements of stack b by 1. The flast element becomes the first one.
	
	rrr	rra and rrb at the same time.
	
# Pushswap Example
	
	$>./push_swap 2 1 3 6 5 8
	sa
	pb
	pb
	pb
	sa
	pa
	pa
	pa
	$>./push_swap 0 one 2 3
	Error
	$>
	
	
# useful links 

https://medium.com/@jamierobertdawson/push-swap-the-least-amount-of-moves-with-two-stacks-d1e76a71789a
