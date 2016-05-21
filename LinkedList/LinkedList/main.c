//单链表的创建
#include <stdio.h>

//定义存储结构
struct node{
    int data;
    struct node *next;
};


int main(int argc, const char * argv[]) {
    struct node *head = NULL, *tail = NULL, *p;
    //循环创建链表
    for(int i = 0; i < 3; i++){
        //创建一个节点
        p = (struct node *)malloc(sizeof(struct node));
        //输入数据
        scanf("%d", &(p->data));
        p->next = NULL;
        
        //设置头指针和尾指针
        if (head == NULL) {
            head = p;
        }else{
            tail->next = p;
        }
        //与上一个节点相连
        tail = p;
    }
    
    //遍历链表中的各个节点
    p = head;
    while(p != NULL){
        printf("%p-----%p\n",&p->data, p->next);
        p = p->next;
    }
    
    return 0;
}
