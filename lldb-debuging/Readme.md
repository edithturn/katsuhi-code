# LLDB Debugger in C (Linux)

## Debug with lldb and GUI
```bash
gcc -g tmain.c -o test -w
```
* **gcc** compiler
* **-g** flag to include debugging information in the generated binary
* **-o** flag to put the output into a specific file ("test")
* **-w** flag to ignore all the warnings in our code

```bash
edith@edithcp:~/katsuhi-code/lldb-debuging$ lldb test 
(lldb) target create "test"
Current executable set to '/home/edith/katsuhi-code/lldb-debuging/test' (x86_64).
(lldb) b main
Breakpoint 1: where = test`main + 12 at main.c:19:6, address = 0x0000000000001188
(lldb) run
Process 251028 launched: '/home/edith/katsuhi-code/lldb-debuging/test' (x86_64)
Process 251028 stopped
* thread #1, name = 'test', stop reason = breakpoint 1.1
    frame #0: 0x0000555555555188 test`main at main.c:19:6
   16  		char *str;
   17  		int len;
   18  	
-> 19  		str = "Hello World";
   20  		len = ft_length(str);
   21  		printf("%d\n", len);
   22  		
(lldb) gui
```

* **lldb test** => with lldb and the name of the binary, we start the debug mode
* **b main**    => With b we are setting a breakpoint at the start of function "main"
* **run**       => Then  “run” the loaded program
* **gui**       => To open the Graphical User Interface window


## Basic keys to use the graphical user interface:

- **tab** : to move between the windows
- **s** :  to do a single step in the code.
- **directional key** : To move the text cursor to the right, left, previous line and, next line and navigate between the variables
- **h** : to show help window
- **ctrl + z** to leave of the lldb mode

### lldb - GUI
<img src="img/lldb-gui.png" width="500" height="250"/>



### Note:
**Greg Clayton** is the creator of the GUI mode in lldb.