map[] overallPriorityDijkstra(Graph G, vertex source)
    gPrime = G
    gPrime2 = G
    gPrime3 = G
    map [] = Arraylist.initialize()
    map1 [] = Arraylist.initialize()
    map2 [] = Arraylist.initialize()
    overallMap [] = Arraylist.initialize()

    map = doctorPriorityDijkstra(gPrime, v)
    map2 = doctorPharmacyPriorityDijkstra(gPrime2, v)
    map3 = pharmacyHomePriorityDijkstra(gPrime2, v)

    overallMap = map + map2 + map3
    return overallMap

END overallPriorityDijkstra
