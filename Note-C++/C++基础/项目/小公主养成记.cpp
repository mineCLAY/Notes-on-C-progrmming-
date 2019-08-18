/*
 * Project:
 * Little princess
 * develop in mind
 *
 * Create god: mine
 *   Date: 2019/8/17
 * Modify: 2019/8/18
 *
 * Copyright: Mine
 * © 0000 - 0000
 */

#include <iostream>
#include <array>
#include <cstdio>
#include <cstdlib>
// #include <cwindows>
#include <ctime>

using namespace std;

int main(void) {

  // 标题名称
  // SetConsoleTitle("项目: 小公主养成记");

  // 定义公主默认名称
  string name;
  // 叫用户输入女主的名称
  cout << "Enter name:" << endl;
  // 将用户输入的名称赋给变量
  getline(cin , name , '\n');

  // 设置初始金钱
  int money = 500;
  // 定义用户选项的变量
  int choice;
  // 定义临时变量
  int temp1 , temp2 , temp3 , temp4 , temp5;

  /*
   * 用数组存储女主基本属性:
   * 体力、智力、魅力、道德、气质
   */
  // int baseinfo[5];
  array<int , 5> baseinfo;
  // string baseinfo_name[5]
  array<string , 5> baseinfo_name = {
    "体力" , "智力" , "魅力" , "道德" , "气质"
  };

  // 定义女主的体力
  // int p_strength = 0;
  // 定义女主的智力
  // int intelligence = 0;
  // 定义女主的魅力
  // int charm = 0;
  // 定义女主的道德
  // int moral = 0;
  // 定义女主的气质
  // int temperament = 0;
  // 定义星座
  string constell;

  // 定义默认女主生日
  int birth_year = 1648 , birth_month = 0000 , birth_day = 0000;
  // 叫用户输入女主生日
  cout << "Enter birthday(M/D)" << endl;
  // 将用户输入的生日赋给变量
  cin >> birth_month >> birth_day;

  // 定义存储星座的数组
  string constell_name[12][2] = {

    // 一月
    { "山羊座" , "水瓶座" } ,
    // 二月 
    { "水瓶座" , "双鱼座" } ,
    // 三月
    { "双鱼座" , "白羊座" } ,
    // 四月
    { "白羊座" , "金牛座" } ,
    // 五月
    { "金牛座" , "双子座" } ,
    // 六月
    { "双子座" , "巨蟹座" } ,
    // 七月
    { "巨蟹座" , "狮子座" } ,
    // 八月
    { "狮子座" , "处女座" } ,
    // 九月
    { "处女座" , "天秤座" } ,
    // 十月
    { "天秤座" , "天蝎座" } ,
    // 十一月
    { "天蝎座" , "射手座" } ,
    // 十二月
    { "射手座" , "山羊座" }

  };

  // 各月份跨星座日期
  int constell_date[] = { 20 , 19 , 21 , 20 , 21 , 22 , 23 , 23 , 23 , 24 , 23 , 22 };
  // 女儿的星座
  constell = constell_name[birth_month - 1][birth_day / constell_date[birth_month - 1]];

  // 判断女主是不是 山羊座
  if ("山羊座" == constell) {

    /*
     * 将此星座初始化
     * 属性赋给数组元素
     */

    // 体力
    baseinfo[0] = 80;
    // 智力
    baseinfo[1] = 15;
    // 魅力
    baseinfo[2] = 15;
    // 道德
    baseinfo[3] = 11;
    // 气质
    baseinfo[4] = 21;

  }
  // 判断女主是不是 水瓶座
  else if ("水瓶座" == constell) {

    /*
     * 将此星座初始化
     * 属性赋给数组元素
     */

    // 体力
    baseinfo[0] = 40;
    // 智力
    baseinfo[1] = 30;
    // 魅力
    baseinfo[2] = 28;
    // 道德
    baseinfo[3] = 20;
    // 气质
    baseinfo[4] = 29;

  }
  // 判断女主是不是 双鱼座
  else if ("双鱼座" == constell) {

    /*
     * 将此星座初始化
     * 属性赋给数组元素
     */

    // 体力
    baseinfo[0] = 50;
    // 智力
    baseinfo[1] = 35;
    // 魅力
    baseinfo[2] = 23;
    // 道德
    baseinfo[3] = 8;
    // 气质
    baseinfo[4] = 20;

  }
  // 判断女主是不是 白羊座
  else if ("白羊座" == constell) {

    /*
     * 将此星座初始化
     * 属性赋给数组元素
     */

    // 体力
    baseinfo[0] = 40;
    // 智力
    baseinfo[1] = 31;
    // 魅力
    baseinfo[2] = 33;
    // 道德
    baseinfo[3] = 17;
    // 气质
    baseinfo[4] = 33;

  }
  // 判断女主是不是 金牛座
  else if ("金牛座" == constell) {

    /*
     * 将此星座初始化
     * 属性赋给数组元素
     */

    // 体力
    baseinfo[0] = 85;
    // 智力
    baseinfo[1] = 9;
    // 魅力
    baseinfo[2] = 11;
    // 道德
    baseinfo[3] = 20;
    // 气质
    baseinfo[4] = 37;

  }
  // 判断女主是不是 双子座
  else if ("双子座" == constell) {

    /*
     * 将此星座初始化
     * 属性赋给数组元素
     */

    // 体力
    baseinfo[0] = 35;
    // 智力
    baseinfo[1] = 28;
    // 魅力
    baseinfo[2] = 36;
    // 道德
    baseinfo[3] = 18;
    // 气质
    baseinfo[4] = 40;

  }
  // 判断女主是不是 巨蟹座
  else if ("巨蟹座" == constell) {

    /*
     * 将此星座初始化
     * 属性赋给数组元素
     */

    // 体力
    baseinfo[0] = 42;
    // 智力
    baseinfo[1] = 33;
    // 魅力
    baseinfo[2] = 25;
    // 道德
    baseinfo[3] = 32;
    // 气质
    baseinfo[4] = 28;

  }
  // 判断女主是不是 狮子座
  else if ("狮子座" == constell) {

    /*
     * 将此星座初始化
     * 属性赋给数组元素
     */

    // 体力
    baseinfo[0] = 50;
    // 智力
    baseinfo[1] = 25;
    // 魅力
    baseinfo[2] = 40;
    // 道德
    baseinfo[3] = 18;
    // 气质
    baseinfo[4] = 17;

  }
  // 判断女主是不是 处女座
  else if ("处女座" == constell) {

    /*
     * 将此星座初始化
     * 属性赋给数组元素
     */

    // 体力
    baseinfo[0] = 57;
    // 智力
    baseinfo[1] = 31;
    // 魅力
    baseinfo[2] = 15;
    // 道德
    baseinfo[3] = 19;
    // 气质
    baseinfo[4] = 20;

  }
  // 判断女主是不是 天秤座
  else if ("天秤座" == constell) {

    /*
     * 将此星座初始化
     * 属性赋给数组元素
     */

    // 体力
    baseinfo[0] = 56;
    // 智力
    baseinfo[1] = 21;
    // 魅力
    baseinfo[2] = 16;
    // 道德
    baseinfo[3] = 25;
    // 气质
    baseinfo[4] = 23;

  }
  // 判断女主是不是 天蝎座
  else if ("天蝎座" == constell) {

    /*
     * 将此星座初始化
     * 属性赋给数组元素
     */

    // 体力
    baseinfo[0] = 43;
    // 智力
    baseinfo[1] = 43;
    // 魅力
    baseinfo[2] = 20;
    // 道德
    baseinfo[3] = 23;
    // 气质
    baseinfo[4] = 17;

  }

  /*
   * 游戏大循环
   *
   * 游戏从 1659 年 6 月开始
   */
  for (int year = 1659; year <= 1659 + 7; year++) {

    // 嵌套控制月
    for (int month = (1959 == year) ? 6:1; month <= 12; month++) {

      // 判断本月是否是女主生日
      if (month == birth_month) {

        // 打印
        cout << "This month is: " << birth_month << " birthday, or not to send gifts(20 $)?(yes or no)" << endl;
        // 定义变量储存 yes or no
        string yes_or_no;
        // 将用户输入的数据赋给变量
        cin >> yes_or_no;

        // 判断是否要送礼物
        if ("yes" == yes_or_no) {

            // 将女主的道德增加
            baseinfo[3] += 3;
            // 减少钱数
            money -= 20;

        }
        else if ("no" == yes_or_no)
          // 女主生气了
          cout << "heng!" << endl;
        else
          // 告诉用户输入错误
          cout << "Input error" << endl;

      }

      // do ...... while 循环控制选项 1
      do {
        // 告诉用户行程
        cout << "\n1. 查看状态\n2.  安排行程\n3. 谈话" << endl;
        // 叫用户选择
        cout << "What do you do: " << endl;
        // 将选择赋给变量 choice
        cin >> choice;

        // 判断用户的选择
        switch (choice) {

        // 查看状态
        case 1:
            // 打印日期
            cout << '\n' << "Date: " << year << " year " << month << " month " << endl;
          // 打印名称
          cout << "\nname: " << name << endl;
          // 打印金钱
          cout << "money: " << money << endl;
          // 打印生日
          cout << "birthday: " << birth_year << '/' << birth_month << '/' << birth_day
               << " age: " << year - birth_year << endl;
          // 打印星座
          cout << "constell: " << constell << endl;

          // 循环打印属性
          for (int i; i < 5; i++) {

            // 此语句下所有打印左对其
            cout << left;

            // 打印
            cout << baseinfo_name[i] << ": " << baseinfo[i] << endl;
            // 计算实心方框的数量
            int solid_count = baseinfo[i] / 100;
            // 嵌套循环输出方框
            for (int j = 0; j < 10; j++) {
              // 判断是否输出实心方框
              if (j < solid_count)
                // 打印实心方框
                cout << '■';
              else
                // 打印空心方框
                cout << '□';

            }

            // 打印换行
            cout << endl;

          }
          // 退出选择
          break;
        // 安排行程: 一个月最多三次
        case 2:
          // 循环选择
          for (int i = 0; i < 3; i++) {

            // 打印日期
            cout << '\n' << "Date: " << year << " year " << month << " month " << endl;
            // 告诉用户选择一个行程
            cout << "1. 学习武艺 (money > 30)\n2. 上私塾\n3. 学习礼法\n4. 出城修行\n5. 打工赚钱" << endl;
            cout << "What do you do: ";
            // 用户输入的选择赋给变量
            cin >> choice;

            // 随机取一个值
            srand(time(NULL));

            /*
             * 这里要判断没钱的情况
             * 没钱就强制打工
             */
            if ((1 == choice) && (money >= rand() % 50)) {

              /*
               * 女主
               * + 体力 + 魅力 - 金钱
               */
              baseinfo[0] += temp1 = rand() % 10;
              baseinfo[2] += temp2 = rand() % 10;
              money -= temp3 = rand() % 50;
              // 打印各属性加了多少
              cout << "\n体力 + " << temp1 + "  魅力 + " << temp2 << "  金钱 - " << temp3 << endl;

            } else if (2 == choice) {

              // 女主 + 魅力 + 气质
              baseinfo[0] += temp1 = rand() % 10;

            }

          }
            break;
        }
      // 如果用户选选项 1 开始循环
      } while (choice);

    }

  }

  // 定义存储属性总数的变量
  int sum = 0;
  // 循环计算属性总数
  for (int i = 0; i < 5; i++) {

    sum += baseinfo[i];

  }

  /*
   * 女王:   属性总数 2000 以上
   * 王妃:   属性总数 1800 - 2000
   * 将军:   属性总数 1600 - 1800
   * 皇家学园院长: 属性总数
   *     1200 - 1600
   *     智力最高 且气质 > 体力
   * 公主:       属性总数
   *     1200 - 1600
   *     气质最高 且魅力 > 体力
   * 近卫骑士团长: 属性总数
   *     1200 - 1600
   *     体力最高 且气质 > 魅力
   * 高级祭祀:    属性总数
   *     1200 - 1600
   *     道德最高 且魅力 > 气质
   * 国王的宠妃: 属性总数
   *     1200 - 1600
   *     魅力最高 且气质 > 道德
   */
  if (2000 < sum) {

    // 打印 成为女王
    cout << "\nGame over. You the become queen\n" << endl;

  } else if ((1800 <= sum) && (sum < 2000)) {

    // 打印 成为王妃
    cout << "\nGame ove. You become a king\n" << endl;

  } else if ((1600 <= sum) && (sum < 1800)) {

    // 打印 成为将军
    cout << "\nGame over. You become a general\n" << endl;

  } else if ((1200 <= sum) && (sum < 1600)) {

    // 判断是否符合皇家学院院长标准
    if (((baseinfo[1] > baseinfo[0]) && (baseinfo[1] > baseinfo[2]) && (baseinfo[1] > baseinfo[3]) && (baseinfo[1] > baseinfo[4])) && (baseinfo[4] > baseinfo[0])) {

      // 打印 成为皇家学院院长
      cout << "\nGame voer. You become the dean of the Royal Academy\n" << endl;

    }
    // 判断是否符合公主标准
    else if (((baseinfo[4] > baseinfo[0]) && (baseinfo[4] > baseinfo[1]) && (baseinfo[4] > baseinfo[2]) && (baseinfo[4] > baseinfo[3])) && (baseinfo[2] > baseinfo[0])) {

      // 打印 成为公主
      cout << "\nGame voer. You become a princess\n" << endl;

    }
    // 判断是否符合近卫骑士团长标准
    else if (((baseinfo[0] > baseinfo[1]) && (baseinfo[0] > baseinfo[2]) && (baseinfo[0] > baseinfo[3]) && (baseinfo[0] > baseinfo[4])) && (baseinfo[4] > baseinfo[2])) {

      // 打印 成为近卫骑士团长
      cout << "\nGame voer. You become the head of the Guard\n" << endl;

    }
    // 判断是否符合高级祭祀标准
    else if (((baseinfo[3] > baseinfo[0]) && (baseinfo[3] > baseinfo[1]) && (baseinfo[3] > baseinfo[2]) && (baseinfo[3] > baseinfo[4])) && (baseinfo[2] > baseinfo[4])) {

      // 打印 成为高级祭祀
      cout << "\nGame voer. You become a high sacrifice\n" << endl;

    }
    // 判断是否符合国王的宠妃标准
    else if (((baseinfo[2] > baseinfo[0]) && (baseinfo[2] > baseinfo[1]) && (baseinfo[2] > baseinfo[3]) && (baseinfo[2] > baseinfo[4])) && (baseinfo[4] > baseinfo[3])) {

      // 打印 成为国王的宠妃
      cout << "\nGame voer. You become the king's favorite\n" << endl;

    }

  } else {

    // 打印
    cout << "\Game over. You are loser\n" << endl;

  }

  // 告诉用户按回车键结束游戏
  cout << "\nPress enter to exit";
  // 让程序停一下不会自动退出
  cin.get();

  return 0;
}
