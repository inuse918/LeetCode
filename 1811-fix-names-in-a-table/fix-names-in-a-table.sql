-- Select user_id, INITCAP(name) as name
-- from   Users
-- ;

Select user_id
     ,  UPPER(SUBSTR(name, 1, 1)) || LOWER(SUBSTR(name, 2)) as name  
from Users
order by user_id
;
