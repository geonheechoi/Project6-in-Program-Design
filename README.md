# Project6-in-Program-Design
Project 6, Program Design Problem – File suffix You are given N files as command-line arguments. Ex: ./a.out file1.txt file2.txt … fileN.txt Each file contains a list of words, with exactly one word per line (there is no limit to the number of words). Each word is composed of at most 20 lowercase letters. Ex: file1.txt file2.txt file3.txt dog cat rat woodpecker hippopotamus chimpanzee hippopotamus chimpanzee woodpecker Your task is to compute a suffix with at most M characters (M ≥ 20) for each file. The rules for creating the suffix are the following: 1) the suffix for each file starts as an empty string; 2) one by one, you must read a word from the file and concatenate it to the suffix if the length of the resulting string is below the limit of M characters; 3) every time a word cannot be concatenated to the suffix due to the lack of space, you must "reset" the suffix (set it to an empty string again) to open space for the new word. Below we exemplify these rules for the three files above with M = 20: Steps Suffix (length) Next word (length) Action 1 "" (0) "dog" (3) Concatenate 2 "dog" (3) "cat" (3) Concatenate 3 "dogcat" (6) "rat" (3) Concatenate 4 "dogcatrat" (9) Steps Suffix (length) Next word (length) Action 1 "" (0) "woodpecker" (10) Concatenate 2 "woodpecker" (10) "hippopotamus" (12) Reset &amp; Concatenate 3 "hippopotamus" (12) "chimpanzee" (10) Reset &amp; Concatenate 4 "chimpanzee" (10) Steps Suffix (length) Next word (length) Action 1 "" (0) "hippopotamus" (12) Concatenate 2 "hippopotamus" (12) "chimpanzee" (10) Reset &amp; Concatenate 3 "chimpanzee" (10) "woodpecker" (10) Concatenate 4 "chimpanzeewoodpecker" (20) For each input file, print one line with the file name followed by the computed suffix.
