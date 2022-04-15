@@ -44,8 +44,7 @@ Write a function that produces output according to a format.
Handle the following conversion specifiers:
-- ``d``
--``i``
### Man_3_printf.
![Man page](https://photos.app.goo.gl/pY1W7jWLFGHLPa3S6)
### [Man_3_printf.](https://photos.app.goo.gl/pY1W7jWLFGHLPa3S6)
## Functions we use.

````c
@@ -56,6 +55,7 @@ int print_string(va_list s);/*writes the character c to stdout */
int print_int(va_list i);/*function that prints an integer */
int print_dec(va_list d);/* function that prints an decimal*/
````
## [Flowchart.](https://photos.app.goo.gl/5SQMnxrmd7nkLr3a6)
## How to use.
### Complilation
All of the ``.c`` files along with a main.c file are to be compiled with ``gcc 4.8.4`` on Ubuntu 14.04 LTS with the flags ``-Wall Werror`` ``-Westra`` and ``-pedantic.``
