'use strict';
function prepare() { return { ready: true, at: Date.now() }; }
function finalize(x) { return Object.assign({}, x, { done: true }); }
module.exports = { prepare, finalize };
