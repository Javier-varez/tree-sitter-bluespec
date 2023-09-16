========================
Package structure
========================

package PackageName;

export MyPackage::*, MyOtherPackage, myThirdPackage;
export MyPackage::*;
export MyPackage;
export myPackage;

import MyPackage::*, MyOtherPackage::*, MyThirdPackage::*;

endpackage: PackageName

---

(source_file
  (package
    name: (capitalIdent)
    (exportDecl
      (capitalIdent)
      (capitalIdent)
      (ident))
    (exportDecl
      (capitalIdent))
    (exportDecl
      (capitalIdent))
    (exportDecl
      (ident))
    (importDecl
      (capitalIdent)
      (capitalIdent)
      (capitalIdent))
    (capitalIdent)))
