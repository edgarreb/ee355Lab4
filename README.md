## Name: Edgar Martinez
## Email: edgarmar@usc.edu
## Source Code: lab4.cpp

## Compiling:

I used the same source code file as in lab 3. I am using the -std=c++11 compiler option when I run my program, the reason that I am using this compiler option is due to the fact that I am using stoi() function to convert strings into integers when reading from the input file. I use the stoi() function call on lines (164-166, 172, 181).


## encoded_pancake_pile class: (line 61-71)

I created a class "encoded_pancake_pile" which inherits from the class "pancake_pile". Inside of the "encoded pancake_pile" class there is an integer value "secret_code" that holds the code value. There is also a pancake_bunrt_up() function that overides the pancake_burnt_up() function from the "pancake_pile" class. As arguments to the pancake_burnt_up() function inside of "encoded_pancake_pile" you must include an address to the array of pancakes that you wish to flip, as well as the X and Y values that you read in from the input file.


## m_pancake_piles: (line 118-123)

Inside of "m_pancake_piles" I added a method called rearrange_last_row(). As arguments to the method you must supply the X, Y, and Z values read from the input file. what this method does is turn all the pancakes down in the last row.


## encoding: (line 220-229)

Here we begin by making all the pancakes in the last row with the burnt side down (line 221). We then create an object of type "encoded_pancake_pile" and set "secret_code" value to the value we got from the input file (line 223-224). Lastly we get the adress of a single pile of pancakes in the last row and call our pancake_burnt_up() function that is inside of the encoded_pancake class. This encodes the pile, we keep doing this in a for loop for each pile in the last row until we are finished (line 226-229).
