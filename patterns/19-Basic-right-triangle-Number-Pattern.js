/*

  1
  23
  456
  78910

*/

const ROW = 4;
const COL = ROW;
let num = 1;
for (let i = 1; i <= ROW; i++) {
  for (let j = 1; j <= i; j++) {
    process.stdout.write(`${num}`);
    num++;
  }
  process.stdout.write("\n");
}
