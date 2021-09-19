/*
A union allows to store different data types in the same memory location.
It is like a structure because it has members. However, a union variable uses the same memory location for all its member's and only one member at a time can occupy the memory location.

A union declaration uses the keyword union, a union tag, and curly braces { } with a list of members.

Union members can be of any data type, including basic types, strings, arrays, pointers, and structures.

union val{
    int x;
    float y;
    char s[20];
};
union val test;
test.x = 20;
test.y = 50.15;
strcpy(test.s, "hello");
The last assignment overrides previous assignments,
which is why str stores a value and accessing int_num and fl_num is meaningless.

- Unions are used for memory management.
- The largest member data type is used to determine the size of the memory to share and then all members use this one location.
- This process also helps limit memory fragmentation. Memory management is discussed in a later lesson.

* untions within structures
- Unions are often used within structures because a structure can have a member to keep track of which union member stores a value.

* Pointers to Unions

- A pointer to a union points to the memory location allocated to the union.
- A union pointer is declared by using the keyword union and the union tag along with * and the pointer name.

- A function can have union parameters that accept arguments by value when a copy of the union variable is all that is needed.

- An array can store elements of any data type, including unions.
- With unions, it is important to keep in mind that only one member of the union can store data for each array element.
- An array is a data structure that stores collection values that are all the same type. Arrays of unions allow storing values of different types.

*/