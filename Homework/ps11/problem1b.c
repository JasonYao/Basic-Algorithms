boolean testGraphForCycle (Graph G, Vertex v)
    S = stack.initialize()
    printQueue = queue.initialize()

    S.push(v)
    printQueue.enqueue(v)
    while (!s.isEmpty())
        v = S.pop()
        if (v.label == 'white')
            v.label = 'gray'
            for all edges from v to w in G.adjacentEdges(v)
                if edge is not visited && vertex is gray
                    // Cycle is detected, so exits
                    return true
                else
                    S.push(w)
                    printQueue.enqueue(w)
            endFor
        endIf
    endWhile
    // No cycle is detected
    while (!printQueue.isEmpty())
    print(printQueue.pop())
    return false
END testGraph
