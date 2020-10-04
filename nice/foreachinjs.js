let data = [1, 5, 30, 26];
function run(data) {
  data.forEach(function (element) {
    if (element % 5 == 0) console.log(element);
  });
}
run(data);
