# COSC242-Assignment
This program can be used to process two groups of words. The first group will be
read from a file specified on the command line. The second group will be read from stdin.
If any word read from stdin is not contained in the file then it will get printed to stdout. A
moment of reflection will confirm that this program could be used as a rudimentary spellchecker.
Running the program with a command like this:
./asgn dictionary.txt < document.txt
should print out a list of every word from document.txt which is not found in dictionary.txt.
<<<<<<< HEAD
If there is no output then document.txt has no misspelled words (as defined in dictionary.txt).
=======
If there is no output then document.txt has no misspelled words (as defined in dictionary.txt).
>>>>>>> Add README.md
