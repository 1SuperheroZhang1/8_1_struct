#include <stdio.h>
/*
 * 8.1 结构体的定义、初始化和结构体数组 结构体对齐
 *  Ⅰ、结构体的定义、初始化和结构体数组
 *      > C语言提供结构体来管理不同类型的数据组合。
 *      > 声明一个结构体类型的一般形式为：
 *          struct 结构体名
 *          {成员表列};
 *      > 结构体类型声明要放在main函数之前，这样main函数中才可以使用这个结构体。
 *      工作中，往往把结构体声明放在头文件中。
 *      > 结构体类型声明最后一定要加分号，否则会编译不通。
 *      > 采用”结构体变量名.成员名“的形式来访问结构体成员。
 *  Ⅱ、结构体对齐
 *     结构体本身的对齐规则有好几条，结构体的大小必须是其最大成员的整数倍!
 * */
//结构体类型声明要放在main函数之前，这样main函数中才可以使用这个结构体。工作中，往往把结构体声明放在头文件中。
//struct student{
//    int num;//学号
//    char name[20];//姓名
//    char sex;//性别
//    int age;//年龄
//    float score;//分数
//    char addr[30];//地址
//};//结构体类型声明，注意最后一定要加分号

////结构体的scanf读取和读出
//int main() {
//    //先声明结构体类型，再定义结构体变量
//    //结构体变量的定义和初始化
//    struct student s={1001,"lele",'M',20,85.4,"Shenzhen"};//定义和初始化
//    s.num=1003;//结构体变量已经定义，只能对它的每个成员单独赋值
//    //采用”结构体变量名.成员名“的形式访问结构体成员。
//    printf("%d %s %c %d %f %s\n",s.num,s.name,s.sex,s.age,s.score,s.addr);
//
//    //结构体数组的定义
//    struct student sarr[3];//sarr是结构体数组变量名
//    int i=0;
//    for(i=0;i<3;i++){
//        //整型数据(%d)、浮点型数据(%f)、字符串型数据(%s)都会忽略空格，但是字符型数据(%c)不会忽略空格
//        //如果要读取字符型数据，那么就要在待读取的字符数据与其他数据之间加入空格。
//        scanf("%d%s %c%d%f%s",&sarr[i].num,&sarr[i].name,&sarr[i].sex,&sarr[i].age,&sarr[i].score,&sarr[i].addr);
//    }
//
//    for(i=0;i<3;i++){
//        printf("%d %s %c %d %f %s\n",sarr[i].num,sarr[i].name,sarr[i].sex,sarr[i].age,sarr[i].score,sarr[i].addr);
//    }
//    return 0;
//}

struct student_type1{
    double score; //double是一种浮点型，8个字节，浮点分为float和double
    short age;//short为短整型，占2个字节
};

struct student_type2{
    double score;
    int height;
    short age;
};

struct student_type3{
    int height;
    char sex;
    short age;
};

//结构体对齐
int main(){
    struct student_type1 s1;
    struct student_type2 s2;
    struct student_type3 s3;

    printf("s1 size=%d\n",sizeof(s1));//16
    printf("s2 size=%d\n",sizeof(s2));//16
    printf("s3 size=%d\n",sizeof(s3));//8
    return 0;
}
