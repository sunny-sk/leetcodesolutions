/**
 
1111
2222
3333
4444
 
 */

const ROW = 4;
const COL = 4;

for (let i = 1; i <= ROW; i++) {
  for (let j = 1; j <= COL; j++) {
    process.stdout.write(`${i}`);
  }
  process.stdout.write("\n");
}
