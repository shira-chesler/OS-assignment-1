# OS-assignment-1

# Project Instructions

## General Instructions

1. **Handling Arguments:**
   - For all questions, the program handles argument parsing. If too many arguments are provided, it uses only the first required number of arguments. If too few arguments are provided, it prints an error message and exits from the program.

2. **Error Handling:**
   - In cases where the program exits due to an error (e.g., malloc failure, obtaining nullptr), it may print a descriptive error message indicating the reason for the program's exit. Check the error message for more information.

## Question 2 Instructions

1. **Pythagorean Triple Check:**
   - The program assumes that the order of the given arguments is a, b, c when checking if they form a Pythagorean triple (a^2 + b^2 = c^2). Ensure the correct order when providing arguments.

## Question 3 Instructions

1. **Library Path Assumption:**
   - The program assumes that the line "export LD_LIBRARY_PATH=." has been manually written to the shell by the user executing the program. Please ensure this environment variable is set appropriately.

2. **Changing Key and Running with Desired File:**
   - To change the key used for coding, modify the "key" array in the "coding.c" file as desired.
   - To run the coding program with a specific file, enter the "coding.c" file and change the "SIZEOFMSG" parameter to the desired length of the soon-to-be-coded message.
   - Encoding was performed using the "original.txt" file, resulting in the "coded.txt" file. The decoding process used the "coded.txt" file, and the output was stored in the "decoded.txt" file.

## Quedtion 4 Instructions

1. **Creation Name**
   - Run the `./myzip` command to create an encrypted archive file. The resulting file will be named `x.tar.gz.gpg`
2. **gpg assumption**
   - When I ran ./myzip, I ran it with the flag "-c" and deleted it upon subbmitting (with the assumption that the one who runs it hat their own key). You may add it by deleting the comment mark (//) in row 77 and getting row 78 into being a comment.
