int weights[];
int done[];
int capacity = u;

int greedyPack()
{
	int max = done.length;
	for (i = 1 to n)
		if (i == max || i == 0)
			break;
		if (done[i] != 0)
			for (j = max to 1)
				if (weights[i] + weights[j] <= capacity)
					done[i], done[j] = 0;
					pack(weights[i], weights[j]);
					max = j - 1;
					break;
				endif
			endfor
		endif
	endfor
	for (k = 1 to n)
		if (done[k] != 0)
			pack(weights[k]);
		endif
	endfor
}
