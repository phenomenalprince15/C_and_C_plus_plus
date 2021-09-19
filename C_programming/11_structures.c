/*
- A structure is a user-defined data type that groups related variables of different data types.
- A structure declaration includes the keyword struct,
  a structure tag for referencing the structure, and curly braces { } with a list of variable declarations called members.
struct course {
  int id;
  char title[40];
  float hours; 
};
struct course c1;
struct course c2 = {10,"maths",40};
struct course c3;
c3 = (struct course){10,"maths",40};
struct course c4 = {.id = 10, .titile = "maths", .hours = 40}; (dot operator to access members)

- A struct variable is stored in a contiguous block of memory.
- The sizeof operator must be used to get the number of bytes needed for a struct, just as with the basic data types.

* Using typedef keyword
- The typedef keyword creates a type definition that simplifies code and makes a program easier to read.
  typedef is commonly used with structures because it eliminates the need to use the keyword struct when declaring variables.
typedef struct {
  int id;
  char title[40];
  float hours; 
}course;
course c1;
course c2;

* structures with structures
typedef struct{
    int x;
    int y;
}point;
typedef struct{
    int radius;
    point center; //structure within structure
}circle;
circle c = {5,{1,2}};
printf("%d, %d, %d",c.radius,c.center.x,c.center.y);

* pointers to structures
- Just like pointers to variables, pointers to structures can also be defined.
- struct myStruct *struct_ptr;
defines a pointer to the myStruct structure.
- struct_ptr = &struct_var;
stores the address of the structure variable struct_var in the pointer struct_ptr.
- struct_ptr -> struct_mem;
accesses the value of the structure member struct_mem.
*/