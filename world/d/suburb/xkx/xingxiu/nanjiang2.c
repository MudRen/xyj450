// /d/xingxiu/nanjiang.c
// Jay 3/17/96

inherit ROOM;

void create()
{
        set("short", "�Ͻ�ɳĮ");
        set("long", @LONG
����Ǻ�嫵����������ɴ�ɳĮ��һ�߽�������·���ʧ�˷���
��е�����ʮ�ֽ��ʣ����ǿ�Щ�뿪�ɡ�
LONG
        );

        set("exits", ([
        "northeast" : __DIR__"nanjiang",
        "southeast" : __DIR__"nanjiang3",
        "southwest" : __FILE__,
        "northwest" : __FILE__,
        "north" : __FILE__,
        "west" : __FILE__,
        "south" : __FILE__,
        "east" : __FILE__,
        ]));
        setup();
//        replace_program(ROOM);
}

int valid_leave(object me, string dir)
{
        int current_water;

        current_water = me->query("water");
        if (current_water==0) {
        }

        if (current_water>0 && current_water<20) {
            me->set("water",0);
        }

        if (current_water>20) {
            me->set("water",current_water-20);
        }
        if (dir=="east" || dir=="south" || dir=="west" || dir=="north") 
           return notify_fail("�����Ǳ���ȥ�������������ɳĮ�еĺ�����¥��\n");
        return ::valid_leave(me, dir);
}
