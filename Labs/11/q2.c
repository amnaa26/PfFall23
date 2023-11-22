/*
 * Programmar: Amna(23K-0066)
 * Date: 21/11/2023
 *Desc: An automobile company has a serial number for engine parts starting from AA0 to FF9. The other characteristics of parts to be specified in a structure are: Year of manufacture, material and quantity
        manufactured.
        Specify a structure to store information corresponding to a part.
        Write a program to retrieve information on parts with serial numbers between BB1 and CC6.
*/

#include <stdio.h>
#include <string.h>

struct EnginePart {
	char serialNumber[50];
	int yearOfManufacture;
	char material[50];
	int quantityManufactured;
};    

int main(){
	int i;
	
	//sample data
	struct EnginePart parts[] = {
		{"AAO", 2020, "Steel", 100},
		{"BB1", 2021, "Aluminum", 64},
		{"CC6", 2019, "Copper", 120},
		{"DD5", 2022, "Plastic", 90},
		{"EE3", 2020, "Steel", 80}
	};
	
	int totalParts = sizeof(parts) / sizeof(parts[0]);
	printf("Information on parts with serial numbers between BB1 and CC6:\n");
	printf("Serial Number | Year of Manufacture | Material | Quantity Manufactured\n");
	for(i = 0; i < totalParts; ++i){
		if(strcmp(parts[i].serialNumber, "BB1") >= 0 && strcmp (parts[i].serialNumber, "CC6") <= 0) {
			printf("%-13s | %-19d | %-10s | %-20d\n", parts[i].serialNumber, parts[i].yearOfManufacture, parts[i].material, parts[i].quantityManufactured);
		}
	}
	
}    
