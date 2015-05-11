void testGraph (Graph G, Vertex v)
{
	Q = Queue.instantiate
	Q.enqueue(v)
	v.label = 'black'

	while (!Q.isEmpty())
	{
		v = Q.dequeue
		for (edges from v to w in G.adjacentEdges(v))
			if (w.label != 'black')
			{
				Q.enqueue(w)
				w.label = 'black'
			}
	}
}
