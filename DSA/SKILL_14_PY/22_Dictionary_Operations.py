""" CODE 22:
Repeatedly ask the user to enter a team name and the how many games the team won and how many they lost. Store this
information in a dictionary where the keys are the team names and the values are lists of the form [wins, losses].
(a) Using the dictionary created above, allow the user to enter a team name and print out the team’s winning percentage.
(b) Using the dictionary, create a list whose entries are the number of wins of each team.
(c) Using the dictionary, create a list of all those teams that have winning records

"""


def take_input(dictionary: dict[str, list[int]]) -> None:
    print("Press (.) to exit")
    while True:
        team_name = input("Team Name: ")
        if team_name == '.':
            print(dictionary)
            break
        if team_name in dictionary:
            print(f"Team already exists, {dictionary[team_name]}")
            retain = input("Want to retain value (y/n): ")
            if retain.lower() == 'y': continue
        wins = int(input("Wins: "))
        losses = int(input("Losses: "))
        dictionary[team_name] = [wins, losses]


def winning_percentage_of(team: str, scoreboard: dict[str, list[int]]) -> str | float:
    if team not in scoreboard:
        return "Team not found in dictionary"
    wins, loses = scoreboard[team]
    return wins / (wins + loses) * 100


SCOREBOARD: dict[str, list[int]] = dict()
take_input(SCOREBOARD)
# a)
result = winning_percentage_of(input("Enter Team name: "), SCOREBOARD)
print(result if isinstance(result, str) else f"The team has {result:.2f}% winning chances")
# b)
print([wins for wins, *_ in SCOREBOARD.values()])
# c)
print([team for team, (team_has_wins, *_) in SCOREBOARD.items() if team_has_wins])
