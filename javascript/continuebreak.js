let datas = [1, 3, 4, 6, 12, 5, 4, 9];
function run(datas) {
  for (var x of datas) {
    if (x % 4 == 0 && x % 3 == 0) {
      break;
    }
    if (x % 4 == 0) {
      continue;
    }

    console.log(x);
  }
}
run(datas);
