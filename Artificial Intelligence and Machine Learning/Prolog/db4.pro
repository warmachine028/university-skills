double_digit(X, Y) :-
	Y is X * 2.


is_even(X) :- Y is X // 2, X =:= 2 * Y.

% I/O session
say_hi :-
	write("What's your name?\n"),
	read(X),
	format("Hi ~w!", [X]).

% Prints ascii value of a character
favourite_character :-
	write("What's your favourite character?\n"),
	get(X),
	write("The ascii value of "), put(X),
	format(" is ~w.\n", [X]).

