--- URI Online Judge SQL
--- Copyright URI Online Judge
--- www.urionlinejudge.com.br
--- Problem 3001

CREATE TABLE products (
id numeric PRIMARY KEY,
name varchar(50),
type char,
price numeric
);

GRANT SELECT ON products TO sql_user;

INSERT INTO products (id , name, type, price)
VALUES
(1, 'Monitor',  'B', 0),
(2, 'Headset',  'A', 0),
(3, 'PC Case',  'A', 0),
(4, 'Computer Desk', 'C', 0),
(5, 'Gaming Chair', 'C', 0),
(6, 'Mouse',  'A', 0);

/*  Execute this query to drop the tables */
-- DROP TABLE products;

/* Solution */
SELECT P.name,
	CASE WHEN P.type = 'A' THEN 20.0 ELSE 
    CASE WHEN P.type = 'B' THEN 70.0 ELSE 
    CASE WHEN P.type = 'C' THEN 530.5 ELSE 0 END END END
    AS price
FROM products AS P
ORDER BY P.type, P.id DESC