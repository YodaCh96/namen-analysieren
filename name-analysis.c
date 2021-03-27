#include <stdio.h>

int main()
{
	// Initialize helper variables
	int lowercaseAsciiOffset = 'a'; // Integer representation of lowercase letter 'a'
	int uppercaseLowercaseOffset = 'a' - 'A'; // Difference of lowercase and uppercase letters in ascii table
	char letters[26]; // Declaration of emtpy array for 26 characters (a-z)

	// Fill previously declared array with letters from 'a' through 'z'
	// Make use of implicit type conversion char <--> int
	for (char letter = 'a'; letter <= 'z'; letter++) {
		letters[letter - lowercaseAsciiOffset] = letter;
	}

	// Declare emtpy array which will contain the entered name.
	char name[100];
	printf("Geben Sie bitte Ihren Namen ein: "); // Prompt user to type a name
	// Read entered name with up to 99 characters. Automatically set name[99] = '\0'
	scanf_s("%99s", name, 100);

	// Loop over entered name until the string termination character (\0) is reached.
	for (int nameIndex = 0; name[nameIndex] != '\0'; nameIndex++)
	{
		char letter = name[nameIndex];

		// Convert letter to uppercase if the user entered name in lowercase.
		if (letter >= 'a') {
			letter -= uppercaseLowercaseOffset; // Actual lowercase-to-uppercase conversion
			name[nameIndex] = letter; // Substitution in name array
		}

		// Calculate position in letter array.
		int letterIndex = letter + uppercaseLowercaseOffset - lowercaseAsciiOffset;

		// Replace existing lowercase letter in letter array with uppercase variant. 
		letters[letterIndex] = letter;
	}

	// Loop over letter array to calculate the distinct letter count
	// by just counting all uppercase letters within the array.
	int distinctLetterCount = 0;
	for (int letterIndex = 0; letterIndex < sizeof(letters) / sizeof(char); letterIndex++)
	{
		if (letters[letterIndex] <= 'Z') {
			distinctLetterCount++;
		}
	}
	printf("Der Name '%s' enth\204lt %d verschiedene Buchstaben.\n", name, distinctLetterCount);

	// Declare and initialize a character array containing all vowels (lowercase).
	char vowels[] = { 'a', 'e', 'i', 'o', 'u' };

	// Loop over all items in vowels array to calculate the missing vowels within the given name.
	int missingVowelCount = 0;
	for (int vowelIndex = 0; vowelIndex < (sizeof(vowels) / sizeof(char)); vowelIndex++)
	{
		char vowel = vowels[vowelIndex];
		int letterIndex = vowel - lowercaseAsciiOffset;

		// If the character in the letters array is lowercase, it does not exist in the entered name.
		if (letters[letterIndex] == vowel) {
			missingVowelCount++;
			vowels[vowelIndex] = vowel - uppercaseLowercaseOffset;	// Convert missing vowel to uppercase.
		}
	}

	// Print the count and actual values of missing vowels.
	if (missingVowelCount > 0) {
		printf("Insgesamt fehlen %d Vokale im Namen '%s':", missingVowelCount, name);
		for (int vowelIndex = 0; vowelIndex < (sizeof(vowels) / sizeof(char)); vowelIndex++)
		{
			if (vowels[vowelIndex] < 'Z') {
				printf(" %c ", vowels[vowelIndex]);
			}
		}
	}
	else {
		printf("Der Name '%s' enth\204lt alle Vokale.", name);
	}

	printf("\n\n");
	return 0;
}