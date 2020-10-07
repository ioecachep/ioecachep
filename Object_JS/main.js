let a = "Phong";
let b = 2018;
function run(name, year_of_birth) {
  var d = new Date();
  var current_year = d.getFullYear();
  // define a object
  var obj = {
    name: name,
    year_of_birth: year_of_birth,
    address: "Ha Noi",
  };

  // Calculate age
  var age = 2019 - obj.year_of_birth;

  console.log(obj); // print object
  console.log(obj.name + " is " + age + " years old");
}
run(a, b);
