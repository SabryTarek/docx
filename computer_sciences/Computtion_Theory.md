(Computing | Computation | Computational) Theory == Formal Languages & Automata
===

Computational Models
State Diagram for machine
states: q0=s=0 (initial state | first sate represented by -> ), q1, q2, ...
alphabet = input alphabet
move from one state to another sate based on a given input
transition function:
- transition among different states = move from one state to another sate based on a given input
    - represented by
        - state diagram
        - transition table

|  state  | 0  | 1  |
|---------|----|----|
|  q0     | q0 | q1 |
| *q1     | q0 | q1 |

Deterministic machine
Design
machine analysis
input string: 1

in DFA there is one and only one initial sate



- Languages is a set of strings over an alphabet
    - Languages Regular recognized by:
        - Deterministic Finite Automata (DFA)
        - Non-Deterministic Finite Automat (NFA)
        - Regular Expressions (Regex)


Example 1: M1
What is the formal description of M1
• This DFA is a 5-tuple: (Q, å, d, q0, F)
1. Q = set of states = {q0, q1}
2. å = alphabet = {0, 1} 
3. d = transition function = (state 
diagram/table)
4. q0 = first state = q0
5. F = set of final states = {q1}.



### References
- Introduction to the Theory of Computation