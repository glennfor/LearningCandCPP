 /*program using a two dimensional arayy to store the names and capitals of
  10 country from which it an randomly
chose a countryand request the capital from a user and then
prints whether the anser is right or wrong*/

#include <stdio.h>
#include <time.h>//for seeding the random number generator
#include <stdlib.h>//accss to the rand0m number generator

/*declare the array as a global variable*/

char country[][50]={
	"Cameroon",
	"Nigeria",
	"The People's Republic of China",
	"The United States(US)",
	"The United Kingdom(UK)",
	"France",
	"The Republic South Africa(RSA)",
	"Japan",
	"Switzerland",
	"Senegal",
	"Germany",
	"Greece",
	"Italy",
	"Brazil",
	"Argetina",
	"Cuba",
	"Chile",
	"Canada",
	"Russia(Union of Soviet Socialist Republics(USSR))",
	"Spain",
	"Portugal",
	"Norway",
	"The Netherlands",
	"India",
	"Belgium",
	"Australia",
	"Finland",
	"Kenya",
	"Zambia",
	"Morocco",
	"Egypt",
	"Ghana",
	"The United Arab Emirates(UAE)",
	"Israel",
	"Saudi Arabia",
	"Sweden",//----
	"North Korea",
	"South Korea",
	"Ethopia",
	"Denmark",
	"Czechoslovakia",
	"Yugoslavia",
	"Venezuela",
	"Libya",
	"Uganda",
	"Philippines",
	"Indonesia",
	"Mongolia",
	"New Zealand",
	"Peru",
	"Colombia",
	"Turkey",
	"Poland",
	"Ireland(The Irish Republic)",
	"Mozambique",
	"Tanzania",
	"The Democratic Republic of Congo(DRC)(Zaire)",
	"Congo",
	"Gabon",
	"Equatorial Guinea",
	"Guinea Bissau",
	"Ivory Coast(Cote D'Ivoire)",
	"Algeria",
	"Mali",
	"Chad",
	"Somalia",
	"Gambia","Niger",
	"Mauritania",
	"Iran"
	,"Iraq",
	"Pakistan",
	"Afghanistan",
	"Burma","Bangladesh",
	"Sri Lanka",
	"Madagascar","Bolivia"
	};
char capitals[][30]={
	"Yaounde",
	"Abuja",
	"Beijing",
	"New York", //maybe washington DC
	"London",
	"Paris",
	"Pretoria", //maybe johannesburg
	"Tokyo",
	"Geneva",
	"Dakar",
	"Berlin",
	"Athens",
	"Rome",
	"Rio De Janeiro",
	"Buenos Aires",
	"Havana", 
	"Santiago",
	"Ottawa",//not quite sure Quebec or Toronto?
	"Moscow",
	"Madrid", //maybe
	"Lisbon", //probably
	"Oslo",//probably
	"Amsterdam",
	"Delhi", //Bombay or Mumbai?
	"Brussels",
	"Canbera", //Melbourne, or Alice Springs, Brisbane, Sydney?
	"Helsinki",
	"Nairobi",
	"Lusaka", 
	"Rabat",//Tangier?
	"Cairo",
	"Accra",
	"Dubai",
	"Tel Aviv", //not yet, Jerusalem?
	"Riyadh",//Mecca, //Medina,?
	"Stockholm",
	"Pyongyang",
	"Seoul",
	"Addis Ababa",
	"Copenhagen",
	"Prague",
	"Belgrade", //Zagreb?
	"Caracas",
	"Tripoli",
	"Kampala",
	"Manila",
	"Jakarta",
	"Ulan Bator",
	"Wellington",
	"Lima",
	"Bogota",/*Medellin?*/
	"Ankara",
	"Warsaw",
	"Dublin",
	"Maputo",
	"Dodoma",
	"Kinshasa",
	"Brazzaville",
	"Gabon"//check?
	,"Malabo"
	,"bissau"///????
	,"Conakry",//????
	"Algiers",
	 "Bamako",
	  "N'Djamena",
	"Mogadishu",
	"Gambia",//???
	"Niamey",
	"Mauritania",/*????*/
	 "Tehran",
	  "Baghdad",
	"Islamabad",
	"Kabul",
	 "Burma" /*?????*/,
	  "Bangladesh",/**??*/
	  "Colombo",
	  "Antananarivo",
	   "La Paz"
};

main(){
	time_t seed;
	size_t choice;
	char ans[15];//answer enterd by the user
	//ans is not a pointer because pointers can,t be indexed
	//same reason why country and capitals are not arrays of pointers
	while(1){
        time(&seed);//get the current time
		srand(seed);//use it to seed the random number generator
		choice=rand()%78;//generate random number from 0 to 77

		printf("What is the capital of %s:\n", country[choice]);
		gets(ans);
		if (!stricmp(capitals[choice], ans))
			printf("You got it right\n");
		else printf("You got it wrong. The capital is: %s\n", capitals[choice]);
		printf("---------------------------------------------------------------\n");
	}
	getch();
}
