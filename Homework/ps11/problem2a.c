void orderChildren(Graph G, vertex v)
    Q = queue.initialize()
    Q.enqueue(v)

    v.label = 'gray'
    while (!Q.isEmpty())
        v = Q.dequeue()
        for all edges from v to w in G.adjacentEdges(v)
            if (w.label == 'white')
                Q.enqueue(w)
                w.label = 'gray'
            endIf
            if (w.label == 'gray')
                // Cycle was found, breaks out
                return
        endFor
    endWhile
END orderChildren
