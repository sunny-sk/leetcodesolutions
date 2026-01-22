/**
 
   *
  ***
 *****
*******

 */

const row = 4;
const col = 7;

if (col <= row) {
  console.log("pattern not possible");
  return;
}

if (col - row !== row - 1) {
  console.log("pattern not possible");
  return;
}

const HALF = Math.floor(col / 2);
const FULL = col - 1;

for (i = 0; i < row - 1; i++) {

  let MAX_SPACE = HALF - 1 - i;
  
  for (let j = 0; j <= MAX_SPACE; j++) {
    process.stdout.write(" ");
  }
  
  for (let j = MAX_SPACE; j < HALF; j++) {
    process.stdout.write("*");
  }
  for (let j = MAX_SPACE; j < FULL; j++) {
    process.stdout.write("");
  }


  for (let j = HALF + 1; j < HALF + 1 + i; j++) {
    process.stdout.write("*");
  }

  for (let j = HALF + i; j <= FULL; j++) {
    process.stdout.write(" ");
  }

  process.stdout.write("\n");
}

for (let k = 0; k < col; k++) {
  process.stdout.write("*");
}
process.stdout.write("\n");
