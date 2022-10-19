SELECT P.name AS name, P2.name AS name, P.price AS price FROM products P 
JOIN providers P2 ON P2.id = P.id_providers 
JOIN categories C ON C.id = P.id_categories