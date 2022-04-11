Prolog ([Pro]gramming in [Log]ic)
===
brief :-


prolog is just quite simply a collection of facts and rules that we can query.
 and Prolog is going to focus on describing facts and relationships about problems rather than creating a series of steps to solve that problem like you might see in another programming language.
  and these facts and rules are going to be stored in a file called either the database or knowledgebase



> properties:
    - Logic Programming paradigm
    - can be compiled and can be interpreted
    - file extension: .pl, .pro, .prolog

---
> compiler flavors:
    * open source:
        - [gnu-prolog](https://www.gprolog.org) (prolog)
    * commertial (enterprice):
        - SWI-prolog
        - visual prolog


/* This is a comment */
% This is also a comment
, and
; or

---
### The recursion in any language is a function that can call itself until the goal has been succeed.
---
User Interactions and Control Facilities
---
$ gprolog

[<database===knowledgebase>]


- Pattern Matching
- Backtracking

- 8 Lec % Lec 6 is revision before midterm
- 9 Sec

graph present in lec not a sec
from lec examples


list most of exam
graph memorization




- declarative language
---
- atoms: (lowercase) -> ahmed green salt
- variables: (uppercase) -> X Y _s
---
- facts: used with atoms -> father(ahmed, ali)
- rules: used with variables -> offspring(X, Y): parent(Y, X)
---
program consist of sections:
domain
predicates
nondeterm
clouses
goal
---
### operators:
- fail
- not()
- cutoff

### compound object
- like stract or class in C++





* read from user:
- readln for reading whole lines of characters,
- readchar for reading single characters/keystrokes,
- readint for reading integers,
- readreal for reading floating point numbers,
- file_str for reading a whole text file into a string

* write:
- nl -> new line
- write("abc")
- write(X)
- write(X, "is father of", Y)

bound variable
free variable