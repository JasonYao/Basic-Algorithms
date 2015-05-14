map[] doctorPriorityDijkstra(Graph G, vertex source)
    distance [source] = 0
    map[source] = null
    Q = queue.initialize()

    for each vertex v in G
        if (v != source)
            distance[v] = infinity
            map[v] = null
        Q.enqueue(v)
    endFor

    while (!Q.isEmpty)
        u = Q.dequeue()
        for each adjacent vertex v from u
            temp = u.distance + distance(u, v)
            if (temp < distance[v])
                distance[v] = temp
                map[v] = u
    endWhile

    return map
END doctorPriorityDijkstra
