#include <stdio.h>
#define BUFFER_SIZE 100
/*
 * 02.A company has name, address, phone number, fax number, web site and manager. The manager has first name,
 * last name, age and a phone number. Write a program that reads the information about a company and its manager
 * and prints it back on the console.
 */
int main() 
{
    char companyName[BUFFER_SIZE];
    char companyAddress[BUFFER_SIZE];
    char phoneNumber[BUFFER_SIZE];
    char faxNumber[BUFFER_SIZE];
    char website[BUFFER_SIZE];
    char managerFirstName[BUFFER_SIZE];
    char managerLastName[BUFFER_SIZE];
    char managerAge[4];
    char managerPhoneNumber[BUFFER_SIZE];
    
    printf("Company Name:");
    fgets(companyName, BUFFER_SIZE, stdin);
    
    printf("Company Address:");
    fgets(companyAddress, BUFFER_SIZE, stdin);
    
    printf("Company Phone Number:");
    fgets(phoneNumber, BUFFER_SIZE, stdin);
    
    printf("Fax Number:");
    fgets(faxNumber, BUFFER_SIZE, stdin);
    
    printf("Web site:");
    fgets(website, BUFFER_SIZE, stdin);
    
    printf("Manger's First Name:");
    fgets(managerFirstName, BUFFER_SIZE, stdin);
    
    printf("Manger's Last Name:");
    fgets(managerLastName, BUFFER_SIZE, stdin);
    
    printf("Manger's Age:");
    fgets(managerAge, BUFFER_SIZE, stdin);
    
    printf("Manger's Phone Number:");
    fgets(managerPhoneNumber, BUFFER_SIZE, stdin);
    
    printf("%s\n", companyName);
    printf("%s\n", companyAddress);
    printf("Tel. %s\n", phoneNumber);
    printf("Fax: %s\n", (faxNumber[0] != '\0' ? faxNumber : "(no fax)"));
    printf("Web site: %s\n", website);
    printf("Manager: %s %s (age: %d, tel. %s)", managerFirstName, managerLastName, managerAge, managerPhoneNumber);
    
    
    return 0;
}
