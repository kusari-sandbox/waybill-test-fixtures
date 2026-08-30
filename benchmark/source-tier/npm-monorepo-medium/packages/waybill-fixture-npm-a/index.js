'use strict';
const util = require('./lib/util');
const helpers = require('./lib/helpers');
const constants = require('./lib/constants');

module.exports = {
  name: "waybill-fixture-npm-a",
  run: () => util.compose(helpers.prepare(), constants.KIND),
};
