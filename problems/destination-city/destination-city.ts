interface City {
	nPaths: number;
}

function destCity(paths: string[][]): string {
	let cities: any = {};
	for (const p of paths) {
		if (!cities[p[0]]) {
			cities[p[0]] = {nPaths: 0} as City;
		}
		if (!cities[p[1]]) {
			cities[p[1]] = {nPaths: 0} as City;
		}
		cities[p[0]].nPaths += 1;
	}
	for (const k in cities) {
		if (cities[k].nPaths === 0) {
			return k;
		}
	}
};
