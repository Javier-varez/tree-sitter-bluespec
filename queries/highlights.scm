; Identifier conventions
((ident) @variable.parameter)
((type) @type)

(line_comment) @comment
(block_comment) @comment

"(" @punctuation.bracket
")" @punctuation.bracket
"[" @punctuation.bracket
"]" @punctuation.bracket
"{" @punctuation.bracket
"}" @punctuation.bracket

"::" @punctuation.delimiter
":" @punctuation.delimiter
"." @punctuation.delimiter
"," @punctuation.delimiter
";" @punctuation.delimiter

"package" @keyword
"endpackage" @keyword
"export" @keyword
"import" @keyword
"matches" @keyword
"tagged" @keyword
"module" @keyword
"endmodule" @keyword

(stringLiteral) @string
(intLiteral) @constant.builtin
(realLiteral) @constant.builtin

"*" @operator
"&" @operator
