#include <stdio.h>

/*08.A marketing company wants to keep record of its employees. Each record would have the following characteristics:
* First name
* Last name
*Age (0...100)
*Gender (m or f)
*Personal ID number (e.g. 8306112507)
*Unique employee number (27560000…27569999)
Declare the variables needed to keep the information for a single employee using appropriate primitive data types.
Use descriptive names. Print the data at the console.*/


int main()
{
    char firstName[] = "Amanda";
    char lastName[] = "Jonson";
    unsigned short age = 27;
    char gender[] = "f";
    char personalID[] = "8306112507";
    unsigned int employeeID = 27563571;
    

    printf("First name: %s\nLast name: %s\nAge: %d\nGender: %s\nPersonal ID: %s\nUnique Employee number: %d\n",
    firstName,
    lastName,
    age,
    gender,
    personalID,
    employeeID);
    
	return 0;
}

