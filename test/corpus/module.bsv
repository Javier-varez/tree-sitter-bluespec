========================
Module structure
========================

package PackageName;

module mkTwoPortMemory#(String file) (TwoPortMemory#(32));
    RegFile#(WordAddress, Word) mem_array <- mkRegFileLoad(file, 0, addrSize - 1);

endmodule

endpackage

---

(source_file
    (package
        name: (capitalIdent)
        (packageStmt
            (moduleDef
                (moduleProto
                    name: (ident)
                    formalParams: (moduleFormalParam
                        type: (type (capitalIdent))
                        ident: (ident)
                    )
                    formalArgs: (moduleFormalArgs
                        (type
                            (capitalIdent)
                            (type)
                        )
                    )
                )

                (moduleStmt
                    (moduleInst
                        moduleType: (type
                            (capitalIdent)
                            (type (capitalIdent))
                            (type (capitalIdent))
                        )
                        instanceIdent: (ident)
                        moduleIdent: (ident)
                        (moduleActualParamArg
                            (expression (ident))
                        )
                        (moduleActualParamArg
                            (expression (intLiteral))
                        )
                        (moduleActualParamArg
                            (expression
                                (binaryExpression
                                    left: (expression (ident))
                                    right: (expression (intLiteral))
                                )
                            )
                        )
                    )
                )
            )
        )
    )
)
