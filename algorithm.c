//
// Created by fyy on 2019/8/31.
//
#include <stdio.h>
#include <stdlib.h>
#define MAXSIZE 10
#define LISTOMCREMENT 10
#define STACK_INIT_SIZE 10
#define STACKINCRENTMENT 10


//各种数据结构、算法C语言实现
//1.向顺序表中的第i个位置插入元素
typedef struct SqList{
    int *elem;
    int length;
    int listsize;
    int incrementsize;
}SqList;
//2.实现在按值有序的单链表中插入结点
//3.将两个有序的单链表归并
//不带头结点
typedef struct node{
    int data;
    struct node *next;
}LNode,*LinkList;

//4.括号匹配问题
typedef struct sqStack{
    int *base;
    int *top;
    int stacksize;
}sqStack;


//1.向顺序表中的第i个位置插入元素
int InsertElem(SqList *L,int i,int item){
    int * base,*insertPtr,*p;
    if(i<1||i>L->length+1){
        return 0;
    }
    if(L->length>=L->listsize){
        base = (int *)realloc(L->elem,(L->listsize+L->incrementsize)* sizeof(int));
        if(base==NULL) return 0;
        L->elem = base;
        L->listsize = L->listsize+L->incrementsize;
    }
    insertPtr = &(L->elem[i-1]);
    for(p=&(L->elem[L->length-1]);p>=insertPtr;p--){
        *(p+1) = *p;
    }
    *insertPtr = item;
    L->length++;
    return 1;
}

//2.实现在按值有序的单链表中插入结点
void insertListInOrder(LinkList *list,int e){
    LinkList p,q,r;
    q = *list;
    p = (LinkList)malloc(sizeof(LNode));
    p->data = e;
    if(*list==NULL||e<(*list)->data){
        p->next = *list;
        *list = p;          //将p指向的新结点插入到链表的第一个位置
    } else{
        while(q!=NULL&&e>=q->data){
            r = q;
            q = q->next;
        }
        p->next = q;
        r->next = p;
    }
}

//3.将两个有序的单链表归并
LinkList MergeList(LinkList list1,LinkList list2){
    LinkList list3;
    LinkList p = list1,q= list2;
    LinkList r;
    if(list1->data<=list2->data){
        list3 = list1;      //list1的第一个元素最小，list3指向它
        r = list1;          //r指向list1的第一个元素
        p = list1->next;    //p指向list1的第二个元素
    } else{
        list3 = list2;
        r = list2;
        q = list2->next;
    }
    while (p!=NULL&&q!=NULL){
        if(p->data<=q->data) {
            r->next = p;    //插入
            r = p;          //指针后移
            p = p->next;
        } else{
            r->next = q;
            r = q;
            q = q->next;
        }
    }
    r->next = p?p:q;        //插入剩余结点
    return list3;
}

//4.括号匹配问题
int initStack(sqStack *s){
    s->base = (int *)malloc(STACK_INIT_SIZE* sizeof(int));
    if(!s->base) return 0;
    s->top = s->base;
    s->stacksize = STACK_INIT_SIZE;
    return 1;
}
int Push(sqStack *s,int e){
    if(s->top-s->base>=s->stacksize){
        s->base = (int *)realloc(s->base,(s->stacksize+STACKINCRENTMENT)* sizeof(int));
        if(!s->base) return 0;
        s->top = s->base + s->stacksize;
        s->stacksize = s->stacksize + STACKINCRENTMENT;
    }
    *(s->top) = e;
    s->top++;
    return 1;
}
int Pop(sqStack *s,int *e){
    if(s->top==s->base) return 0;
    *e = *--(s->top);
    return 1;
}
int match(char e,char c){
    if(e=='('&&c==')') return 1;
    if(e=='['&&c==']') return 1;
    return 0;
}
void MatchBracket(){
    sqStack s;
    char c,e;
    initStack(&s);
    scanf("%c",&c);
    while(c!='#'){
        if(s.top==s.base){
            Push(&s,c);
        } else{
            Pop(&s,&e);
            if(match(e,c)!=1){
                Push(&s,e);
                Push(&s,c);
            }
        }
        scanf("%c",&c);
    }
    if(s.top==s.base) {
        printf("匹配成功");
    } else{
        printf("匹配失败");
    }
}

//5.用两个栈实现一个队列
sqStack s1,s2;
int initQueue(){
    if(initStack(&s1)&&initStack(&s2)) {
        return 1;
    }
    return 0;
}

//入队操作
int EnQueue(int x){
    if(Push(&s1,x)){
        return 1;
    }
    return 0;
}

int Dequeue(int *x){
    int e;
    if(s2.base==s2.top){
        if(s1.base==s1.top) {
            return 0;
        } else{
            while(Pop(&s1,&e)){
                Push(&s2,e);
            }
        }
    }
    Pop(&s2,x);
    return 1;
}

//int main(){
//
//    return 0;
//
//}