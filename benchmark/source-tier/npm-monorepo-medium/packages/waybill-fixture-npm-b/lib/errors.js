'use strict';
class FixtureError extends Error {
  constructor(msg) { super(msg); this.name = 'FixtureError'; }
}
module.exports = { FixtureError };
