// 
// 

inherit ROOM;
void create()
{
        set("short", "Сé��");
        set("long", @LONG
é��ͨ�����ã��ɾ���ˬ���������ǵİ���С��Ͱ�����������ǽ�ߡ�
ÿ����Ͱ�ϻ���һ���ҹ��������ǿ��Թ��ڱⵣ�ϵġ�ǽ�Ϲ���һ������
ľˢ�����ڵ���ˮ��
LONG
        );
        set("exits", ([ /* sizeof() == 4 */
  "north" : __DIR__"backyard",
]));
        set("objects", ([
	__DIR__"obj/matong":2,
	__DIR__"obj/brush" : 1,
                        ]) );

        setup();
        replace_program(ROOM);
}