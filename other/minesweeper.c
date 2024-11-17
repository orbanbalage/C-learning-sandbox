//

	int arr[7][7];

// 0..n
// plain, marked - then revealed / can be mine or not.

//the generation happens at the first click
//the first click is always an empty cell = 0
//let there be 8 mines (later both the dimensions and mine number/ratio can be abstracted)

//when the map is generated, all the tiles that are in continuum & neighbouring 0s, are to be revealed
//and all the numbers around the revealed tiles, including the corners, have to be revealed

//only 8 tiles are allowed to be marked

//the game ends, if there are no more unrevealed non-mines.


//main loop - while [mine not revealed OR no unrevealed non-mines]
		//if 1 => LOSS
		//if 2 => WIN
