# class SUI

The class **SUI** has certain functions which can help you create a retro style menu.  
  
For Example:
>

	> [Start]  

	  [Settings]  

	  [Quit]  
  
  
### Step-by-Step Tutorial:  
  
_STEP 1:_  
While creating the object of class **SUI**, you have to pass in an **int** value as a parameter for constructor. This is the number of options the user can select from.  
>

	SUI OBJ(3);
  
_STEP 2:_  
Then, you can call the **feed()** method to enter the options the user gets to select from.
The options are given as a single **string** by grouping them together. Don't forget to seperate them with a space.  
>

	SUI OBJ(3);
	OBJ.feed("[Start] [Settings] [Quit]");

_STEP 3:_  
Now you have to call the **CLI()** method and the menu will be presented on the output screen.
>

	OBJ.CLI();

_STEP 4:_  
The options that are entered into the **feed()** method are enumerated from 1 to x (Where x is the number of options). To know which option the user has selected, **OBJ.output** is an **int** value which stores the serial number of the option selected.  
  
And that's it!
