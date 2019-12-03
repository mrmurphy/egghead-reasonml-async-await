// Generated by BUCKLESCRIPT, PLEASE EDIT WITH CARE
'use strict';

var Got = require("got");

function getPerson(param) {
  return Got("https://swapi.co/api/people/1", {
                responseType: "json"
              }).then((function (response) {
                return Promise.resolve(response.body);
              }));
}

function getPlanetFromUrl(url) {
  return Got(url, {
                responseType: "json"
              }).then((function (response) {
                return Promise.resolve(response.body);
              }));
}

exports.getPerson = getPerson;
exports.getPlanetFromUrl = getPlanetFromUrl;
/* got Not a pure module */