grammar DARIC;

main            : expr EOF;

expr            : expr ('*'|'/') expr
                | expr ('+'|'-') expr
                | INTEGER
                | '(' expr ')'
                ;

INTEGER         : [0-9]+ ;
STRING          : '"' .*? '"' ;