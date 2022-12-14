#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

struct root
{
    int password;
    int number;
};

bool Rload(struct root n);

int main() {
    struct root num1;
    num1.password = 123456;
    num1.number = 114514;
    print(
        "   图书馆服务大厅 "
        "输入1即可跳转登录/注册界面"
        "输入2即可跳转查阅书籍界面"//可查书籍，书籍借阅排行榜
        "输入3即可跳转，借/还/续借/预约书籍界面"
        "输入4即可跳转个人中心"//（登录后）读者：可查还书期限，已借书籍，可修改密码；管理员：增减书籍，可修改密码
    );
    Rload(num1);
}

bool Rload(struct root n) {
    int num;
    int password = 0;
    printf("请输入手机号\n");
    scanf_s("%d", &num);
    printf("请输入密码\n");
    scanf_s("%d", &password);
    if (n.number != num) {
        printf("手机号未注册\n");
        return false;
    }
    else if (n.password != password) {
        printf("密码错误\n");
        return false;
    }
    printf("登录成功\n");
    return true;
}