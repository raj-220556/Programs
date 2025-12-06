use company;

-- DCL Commands  ---

-- GRANT
# GRANT: It is used to give user access privileges to a database.
# Syntax : GRANT <privileges list> ON <tables/views> TO user(s);

# Displaying default user
select user();

# Displaying user,host
select user,host from mysql.user;

# Create a new user
# CREATE USER username IDENTIFIED BY password;
create user 'raj'@'localhost';
create user 'ram'@'localhost';

# Switching from one user to another user
SYSTEM MYSQL -u USERNAME -p ;  # workson only in bash

# Grant SELECT permissions to new user
grant select on company.* to 'ram'@'localhost';
SELECT fname FROM emp;
-- here we cant insert value by user ram
insert into workson values (102,304,7);

# Grant INSERT,UPDATE permissions to new user
grant insert,update on company.* to 'ram'@'localhost';

# Grant all privileges same as root
grant all privileges on *.* to 'raj'@'localhost' with grant option;

# To view grants of user
show grants for 'raj'@'localhost';
show grants for 'ram'@'localhost';



-- REVOKE
# REVOKE : used to remove granted permissions
#SYNTAX :-REVOKE <priviliges_list> ON <tables> FROM user(s);

# Revoking SELECT permisions from ram
revoke SELECT on company.* from 'ram'@'localhost';


-- TCL Commands ---

# 1. commit
# 2. savepoint
# 3. roolback

set autocommit = 0;

use sailor;
select * from sailor;

insert into sailor value(109,'raj',30,'hyd','M',40000,9);
delete from sailor where sid=112;

# commit : Manulaly saves into database
commit;
# rollback : Removes all the rows which are not commited
rollback;


insert into sailor value(110,'raj',30,'hyd','M',40000,9);
savepoint s1;
insert into sailor value(111,'raj',30,'hyd','M',40000,9);
savepoint s2;
insert into sailor value(112,'raj',30,'hyd','M',40000,9);
savepoint s3;

rollback to s3; # After all s2 will be removed


