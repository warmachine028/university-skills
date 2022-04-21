import math

MATRIX = list[list[int]]

def minimum_distance(
    source: int,
    nodes: set, 
    adj_matrix: MATRIX,
    memo: dict
) -> int:
    if not nodes:
        return adj_matrix[source][0]

    # calculate the minimum cost
    costs = [
        (v, adj_matrix[source][v] + minimum_distance(
            v, nodes - {v},
            adj_matrix, memo
         )) for v in nodes
    ]
    node, min_dist = min(costs, key=lambda x: x[1])

    memo[(source, nodes)] = node
    return min_dist


def shortest_path(adj_matrix: MATRIX) -> list[int]:
    memo = dict()
    nodes = frozenset(range(len(adj_matrix)))
    minimum_distance(0, nodes, adj_matrix, memo)

    solution = []
    source = 0
    while nodes:
        source = memo[(source, nodes)]
        solution.append(source+1)
        nodes -= {source}
    return solution


def calculate_distances(cities: MATRIX) -> MATRIX:
    distances = [
        [
            math.dist((x1, y1), (x2, y2))
            for label, x2, y2 in cities 
         ] for label, x1, y1 in cities
    ]
    return distances


def main():
    #taking input
    cities = int(input())
    co_ordinates = [
        [*map(int, input().split())]
        for _ in range(cities)
    ]
    
    # distances = calculate_distances(co_ordinates)
    # print(shortest_path(distances))
    print(shortest_path(co_ordinates))

main()
