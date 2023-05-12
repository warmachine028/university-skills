% CODE 1: Define the relation subset( Set, Subset) where Set and Subset are two lists representing two sets. We would like to be able to use this relation not only to check for the subset relation, but also to generate all possible subsets of a given set.


subset([],[]).

subset([X|L],[X|S]) :-
	subset(L,S).

subset(L, [_|S]) :-
	subset(L,S).
/*
 % Set is a Subset of we can recursively delete its head from the super set.
 subset(_, []).      % [] is an item of a set.
	 subset(Set, [Item|SubSet]) :-
		 delete(Item, Set, NewSet),
		 subset(NewSet, SubSet).

	 % to delete : an item can be deleted it its in the head or in the tail of a list
	 delete(I, [I|L], L).
 delete(I, [H|L], [H|NL]) :-
	 delete(I, L, NL).
 */


/*
 mergesort([],[]).    % covers special case
 mergesort([A],[A]).
mergesort([A,B|R],S) :-
	split([A,B|R],L1,L2),
	mergesort(L1,S1),
	mergesort(L2,S2),
	merge(S1,S2,S).

split([],[],[]).
split([A],[A],[]).
split([A,B|R],[A|Ra],[B|Rb]) :-
	split(R,Ra,Rb).
merge(A,[],A).
merge([],B,B).
merge([A|Ra],[B|Rb],[A|M]) :-
	A =< B, merge(Ra,[B|Rb],M).
merge([A|Ra],[B|Rb],[B|M]) :-
	A > B, merge([A|Ra],Rb,M).
*/

