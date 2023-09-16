========================
Interface structure
========================

package PackageName;

interface MyInterface#(type Int, numeric type T);

    method Bit#(16) someIdent(Integer a);

    method Bit#(16) someIdent;

    interface OtherInterface#(type ParamType) inner;

endinterface

endpackage

---

(source_file
  (package
    name: (capitalIdent)
    (packageStmt
        (interfaceDecl
          name: (typeDefType
            (capitalIdent)
            (typeFormals
              (capitalIdent)
              (capitalIdent)
            )
          )
          (interfaceMemberDecl
            (methodProto
              retType: (type
                (capitalIdent)
                (type)
              )
              name: (ident)
              args: (methodProtoFormal
                (type
                  (capitalIdent)
                )
                (ident)
              )
            )
          )
          (interfaceMemberDecl
            (methodProto
              retType: (type
                (capitalIdent)
                (type)
              )
              name: (ident)
            )
          )
          (interfaceMemberDecl
            (subinterfaceDecl
              (typeDefType
                (capitalIdent)
                (typeFormals
                  (capitalIdent)
                )
              )
              name: (ident)
            )
          )
        )
    )
  )
)
