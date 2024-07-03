// Learning C++ 
// Exercise 02_05
// Type inference with auto, by Eduardo Corpeño 

#include <iostream>
#include <typeinfo>

/*
` - Backtick or Grave Accent
! - Exclamation Mark or Bang
@ - At Sign or At
# - Hash, Pound Sign, Number Sign, or Octothorpe
$ - Dollar Sign
% - Percent Sign
^ - Caret or Circumflex
& - Ampersand
* - Asterisk or Star
( - Left Parenthesis or Open Parenthesis
) - Right Parenthesis or Close Parenthesis
- - Hyphen or Minus
_ - Underscore
= - Equals Sign
+ - Plus Sign
[ - Left Square Bracket or Open Square Bracket
] - Right Square Bracket or Close Square Bracket
{ - Left Curly Brace or Open Curly Brace
} - Right Curly Brace or Close Curly Brace
\ - Backslash
| - Vertical Bar or Pipe
; - Semicolon
: - Colon
' - Single Quote or Apostrophe
" - Double Quote
, - Comma
< - Less Than or Left Angle Bracket
. - Period or Dot
> - Greater Than or Right Angle Bracket
/ - Forward Slash or Slash
? - Question Mark
*/

int main(){
    auto a = 8;
    auto b = 12345678901;
    auto c = 3.14f;
    auto d = 3.14;
    auto e = true;
    auto f = 'd';
    auto g = "C++ rocks!";

    std::cout << "The type of a is " << typeid(a).name() << std::endl;
    std::cout << "The type of b is " << typeid(b).name() << std::endl;
    std::cout << "The type of c is " << typeid(c).name() << std::endl;
    std::cout << "The type of d is " << typeid(d).name() << std::endl;
    std::cout << "The type of e is " << typeid(e).name() << std::endl;
    std::cout << "The type of f is " << typeid(f).name() << std::endl;
    std::cout << "The type of g is " << typeid(g).name() << std::endl;

    std::cout << std::endl << std::endl;
    return (0);
}
