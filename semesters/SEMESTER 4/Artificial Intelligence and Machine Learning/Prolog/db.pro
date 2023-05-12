loves(romeo, juliet).

loves(juliet, romeo) :- loves(romeo, juliet).

male(albert).
male(bob).
male(bill).
male(carl).
male(charlie).
male(dan).
male(edward).

female(alice).
female(betsy).
female(diana).

parent(albert, bob).
parent(albert, betsy).
parent(albert, bill).

parent(alice, bob).
parent(alice, betsy).
parent(alice, bill).

parent(bob, carl).
parent(bob, charlie).

runs(albert) :-
	happy(albert).

happy(albert).
happy(alice).
happy(bob).
happy(bill).
with_albert(alice).

dances(alice) :-
	happy(alice),
	with_albert(alice).

does_alice_dance :-
	dances(alice),
	write('When Alice is Happy and with Albert, she fances').

swims(bill) :-
	happy(bill).

swims(bill) :-
	near_water(bill).

get_grandchild :-
	parent(albert, X),
	parent(X, Y),
	write('Alberts grandchild is '),
	write(Y), nl.

/*
 ~w  ->  any variable
 ~s  ->  string
 ~n  ->  newline character
 */
get_grandparent :-
	parent(X, carl),
	parent(X, charlie),
	format("~w ~s grandparent ~n",	[X, "is the"]).

brother(bob, bill).
brother(bill, bob).

grand_parent(X, Y) :-
	parent(Z, X),
	parent(Y, Z).

blushes(X) :- human(X).
human(derek).

hates(romeo, X) :- stabs(X, mercutio, sword).
stabs(tybalt, mercutio, sword).

related(X, Y) :-
	parent(X, Y).

related(X, Y) :-
	parent(X, Z),
	related(Z, Y).

