定义一个枚举类型: enum Hero_Type {SWORMAN , BOWMAN , MAGICAN , ROBBERS , CAVALRY};

定义一个枚举变量: enum Hero_Type abraham , esau , jacob;

定义一个枚举类型的时候同时定义一个枚举变量:

enum Hero_Type {SWORMAN , BOWMAN = 8, MAGICAN , ROBBERS = 64 , CAVALRY} abraham , esau , jacob; //SWORMAN 默认是 0 因为递增关系 , 所以 BOWMAN 是1 , 如果 BOWMAN 是 8 那么 MAGICAN 是 9. ROBBERS 是 64 那么 CAVALRY 是 65
