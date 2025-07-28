// ES6 Module = An external file that contains reusable code
//              that can be imported into other JavaScript files.
//          write reusable code for many different apps.
//          Can contain variables, classes, functions ... and more
//          Introduced as part of ECMAScript 2015 update.

// html file script tag must be type of "module"

import {PI, getCircumference, getArea, getVolume} from './MathUtil.js';

console.log(PI);

const circumference = getCircumference(10).toFixed(2);
const area = getArea(10);
const volume = getVolume(10);

console.log(`${circumference} cm`);
console.log(`${area} cm^2`);
console.log(`${volume} cm^3`);