#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

struct root
{
    int password;
    int number;
};
struct user
{
    int password;
    int number;
};
struct root num1;
struct user num2;


bool Aload(struct user n);
bool Rload(struct root n);
void f1(void);

int main() {
    int state = 0;
    num1.password = 123456;
    num1.number = 114514;
    num2.password = 114514;
    num2.number = 123456;
    while (true) {
        printf(
            "   图书馆服务大厅 \n"
            "输入1即可跳转登录/注册界面\n"
            "输入2即可跳转查阅书籍界面\n"//可查书籍，书籍借阅排行榜
            "输入3即可跳转，借/还/续借/预约书籍界面\n"
            "输入4即可跳转个人中心\n"//（登录后）读者：可查还书期限，已借书籍，可修改密码；管理员：增减书籍，可修改密码
            "输入0退出系统\n"
        );
        scanf_s("%d", &state);
        switch (state) {
        case 1: f1();
        case 2:
        case 3:
        case 4:
        case 0:return 0;
        }
    }
    
}

bool Rload(struct root n) {
    int num;
    int password = 0;
    printf("请输入r手机号\n");
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

bool Aload(struct user n) {
    int num;
    int password = 0;
    printf("请输入a手机号\n");
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
void f1(void) {
    int n;
    printf(
        "输入1切换为管理员登录\n"
        "输入2切换为读者登录\n"
        "输入3切换为读者注册\n"
    );
    scanf_s("%d", &n);
    switch (n) {
    case 1:Rload(num1); break;
    case 2:Aload(num2); break;
   /* case 3:registered();*/
    }
}
