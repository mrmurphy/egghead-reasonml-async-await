// Please note! This file uses the latest DEV release of Bucklescript with its external bindings. If you try to use any Bucklescript version less than 7.0.0 with this file, you will be sad.

type person = {
  name: string,
  homeworld: string,
};

type planet = {name: string};

type response('a) = {body: 'a};
type options = {responseType: string};

[@bs.module]
external got: (string, options) => Js.Promise.t(response('a)) = "got";

let getPerson = (): Js.Promise.t(person) => {
  got("https://swapi.co/api/people/1", {responseType: "json"})
  |> Js.Promise.then_(response => Js.Promise.resolve(response.body));
};

let getPlanetFromUrl = (url: string): Js.Promise.t(planet) => {
  got(url, {responseType: "json"})
  |> Js.Promise.then_(response => Js.Promise.resolve(response.body));
};