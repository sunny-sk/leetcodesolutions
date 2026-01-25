/*

10987
456
32
1

*/

const ROW = 4;
const COL = 5;

// finding sum
let num = 0;

for (let i = ROW; i >= 1; i--) {
  for (let j = 1; j <= i; j++) {
    num++;
  }
}

// showing pattern
for (let i = ROW; i >= 1; i--) {
  for (let j = 1; j <= i; j++) {
    process.stdout.write(`${num}`);
    num--;
  }
  process.stdout.write("\n");
}
