int orderChildrenRows(Graph G, vertex v)
    Q = queue.initialize()
    Q.enqueue(v)
    rowArray [][] = ArrayList.initialize()
    maxSize = 0;

    v.label = 'gray'
    while (!Q.isEmpty())
        v = Q.dequeue()
        for all edges from v to w in G.adjacentEdges(v)
            if (w.label == 'white')
                Q.enqueue(w)
                w.label = 'gray'
                rowArray[i][0] = w
                if (maxSize == 0)
                    ++maxSize
            if (w.label == 'gray')
                rowArray[i][maxSize] = w
                ++maxSize
        endFor
    endWhile
    return maxSize
END orderChildrenRows
