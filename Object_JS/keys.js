function run() {
  var person = {
    firstName: "Trung",
    lastName: "Vuong",
    age: 50,
    eyeColor: "blue",
  };
  let a = Object.keys(person);
  for (x of a) console.log(x);
}
run();
