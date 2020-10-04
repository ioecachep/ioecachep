function run(n) {
  var output = "";
  var i = 1;
  while (i < n + 1) {
    if (i % 2 == 0) {
      output = output + "," + i;
    }
    i++;
  }
  console.log(output);
}
run(7);
