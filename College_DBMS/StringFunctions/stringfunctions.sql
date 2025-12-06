create database stringfunctios;
use stringfunctions;

-- not a Case Sensivity

########   STRING FUNCTIONS   ##########

# CHAR_LENGTH(string) : Returns the no.of characters in a string.
SELECT char_length("hello") AS stringlength;

# CONCAT(str1,str2,str3,....) : Concatenates two or more strings.
SELECT concat("string1","string2","String3") AS concat;

# CONCAT_WS(separator, string1, string2, ...) : Concatenates two or more strings with a specified separator.
SELECT CONCAT_WS('@', 'Good ', 'Morning!') as Greetings;

# FIND_IN_SET(value, comma-separated-list) : Searches for a value within a comma-separated list of values.
SELECT FIND_IN_SET(",", "s,,,q,l") as Position;

# FIELD(value, value1, value2, ...) : Returns the index (position) of the first occurrence of a value in a list of values.
SELECT FIELD("q", "s", "q", "l") as Position;

# FORMAT(number, decimal-places) : Formats a number with a specified number of decimal places.
SELECT FORMAT(284943.983498, 2) as FormattedNumber;

# INSERT(string, position, length, substring) : Inserts a substring into a string at a specified position.
SELECT INSERT("mysqldbms.com", 1, 9, "Example") as Result;

# INSTR(string, substring) : Returns the position of the first occurrence of a substring in a string.
SELECT INSTR("mysqldbms.com", "d") as MatchPosition;

# LCASE(string) : Converts a string to lowercase.
SELECT LCASE("HELLO WORLD!") as LowercaseString;

# LEFT(string, number-of-characters) : Extracts a specified number of characters from the beginning of a string.
SELECT LEFT('Hello world', 5) AS ExtractedString;

# RIGHT(string, number-of-characters) : Extracts a specified number of characters from the end of a string.
SELECT RIGHT('Hello world', 5) as ExtractedString;