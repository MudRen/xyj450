// �����硤���μǡ��汾��������
/* <SecCrypt CPL V3R05> */
 
//changan city

inherit ROOM;

void create ()
{
        set ("short", "�������");
        set ("long", @LONG

����һ���¿��Ų��õ���֡��������������ط���һЩ�ֳ��ľ��ᡣ
���ӡˢ�鵽���Ƴ����������죬�������������Ҳ���Ų���ӡ��
����ͼ�Ĳ�ï��ͼ�顣
LONG);

        //set("item_desc", ([" *** " : " *** ", ]));

        set("exits", 
        ([ //sizeof() == 4
     "south" : __DIR__"baihu-w1",
        ]));

        set("objects", 
        ([ //sizeof() == 1
                __DIR__"npc/bookseller" : 1,
                "/d/obj/misc/tables" : 1,
                "/d/obj/misc/chairs" : 2,
        ]));


//        set("outdoors", "changan");
   set("no_clean_up", 0);
        setup();
   replace_program(ROOM);
}

