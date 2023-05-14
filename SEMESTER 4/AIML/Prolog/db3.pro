warm_blodded(penguin).
warm_blodded(human).

produce_milk(penguin).
produce_milk(human).

have_feathers(penguin).
have_hair(human).

mammal(X) :-
	warm_blodded(X),
	produce_milk(X),
	have_hair(X).


