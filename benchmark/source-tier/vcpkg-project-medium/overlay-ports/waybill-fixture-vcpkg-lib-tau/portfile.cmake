# Fixture portfile for waybill-fixture-vcpkg-lib-tau.
set(VCPKG_POLICY_EMPTY_PACKAGE enabled)
file(WRITE
  "${CURRENT_PACKAGES_DIR}/share/waybill-fixture-vcpkg-lib-tau/copyright"
  "Synthetic fixture; no real code.\n")
file(INSTALL "${CURRENT_PORT_DIR}/vcpkg.json"
  DESTINATION "${CURRENT_PACKAGES_DIR}/share/waybill-fixture-vcpkg-lib-tau")
