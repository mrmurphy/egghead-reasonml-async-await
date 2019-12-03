let go = () => {
  Js.log("Let's look at some Star Wars Stuff");
  Swapi.getPerson()
  |> Js.Promise.then_((person: Swapi.person) => {
       Js.log2("Look at this person:", person);
       Js.log2("Let's get their planet using this URL:", person.homeworld);
       Swapi.getPlanetFromUrl(person.homeworld)
       |> Js.Promise.then_((homeworld: Swapi.planet) => {
            Js.log2("And here is their homeworld:", homeworld.name);
            Js.Promise.resolve();
          });
     });
};

go();