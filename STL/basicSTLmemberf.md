# C++ Reference Material:
# STL Container and Container Adaptor Classes
# Member Function Distribution Summary

This page contains five tables. The first gives a list of all member functions common to all first-class containers (vector, deque, list, map, multimap, set, multiset). The second gives a list of all additional member functions common to all sequential containers (vector, deque, list). The third ...

 ## Member functions common to all first-class STL containers
- default constructor	Constructs an empty container.
Containers will have other constructors as well.
- copy constructor	Construct a copy of an already existing container of the same type.
- destructor	     Clean up when container no longer needed.
- operator=	    Assign one container to another.
- operator==	Test for equality, lexicographically.
- operator!=	Test for inequality, lexicographically.
- operator<	    Test for less than, lexicographically.
- operator<=	Test for less than or equal to, lexicographically.
- operator>	    Test for greater than, lexicographically.
- operator>=	Test for greater than or equal to, lexicographically.
- empty	        Test if container is empty.
- max_size	    Return maximum number of components container can hold.
- size	        Return number of elements container currently holds.
- swap	        Exchange all components with those of another container.
- insert	    Insert one or more components into a container.
- erase	        Erases one or more components from a container.
- clear	        Erases all components from a container.
- begin	        Return an iterator or const_iterator pointing to the first component.
- end	        Return an iterator or const_iterator pointing to one-past-the-last component.
- rbegin	    Return a reverse_iterator or const_reverse_iterator pointing to the last component.
- rend	        Return a reverse_iterator or const_reverse_iterator pointing to one-before-the-first component.

## Member functions found only in sequential STL containers

- assign	Overwrite all components of current container.
- front	    Return a reference to a container's first component.
- back	    Return a reference to a container's last component.
- push_back	Add a value to the end of a container.
- pop_back	Remove the value at the end of a container.
- resize	Change the size of a container, adding or removing values.

## Member functions found only in associative STL containers
- count	Return number of key/value pairs in which the key matches a given key.
- find	        Find a key/value pair with a given key.
- lower_bound	Find first location where a key/value pair with a given key could be inserted.
- upper_bound	Find last location where a key/value pair with a given key could be inserted.
- key_comp	    Return comparison object used for comparing keys of key/value pairs.
- value_comp	Return comparison object used for comparing values of key/value pairs.

## Member functions found only in STL container adaptors
- push	Add a value to a container adaptor.
- pop	Remove a value from a container adaptor.

## Additional member functions found in various STL containers
## and container adaptors but not common to any group

### container or adaptor	member functions found in that container or adaptor

- vector	        at, operator[], reserve, capacity
- deque	            operator[], push_front, pop_front
- list	            push_front, pop_front, remove, unique, splice, merge, reverse, sort
- map	            equal_range, operator[]
- multimap	        equal_range
- set	            equal_range
- multiset	        equal_range
- stack	            top
- queue	            front, back
- priority_queue	top
