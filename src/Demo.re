module Async = {
  let let_ = (prom, cb) => Js.Promise.then_(cb, prom);
};

let go = () => {
  Js.log("Let's look at some Star Wars Stuff");
  let%Async person = Swapi.getPerson();
  Js.log2("Look at this person:", person);
  Js.log2("Let's get their planet using this URL:", person.homeworld);
  let%Async homeworld = Swapi.getPlanetFromUrl(person.homeworld);
  Js.log2("And here is their homeworld:", homeworld.name);
  Js.Promise.resolve();
};

go();