// �����硤���μǡ��汾��������
/* <SecCrypt CPL V3R05> */
 
//changan city

inherit ROOM;

void create ()
{
  set ("short", "��ȸ���");
  set ("long", @LONG

��ȸ������̼��ڶ࣬���СС�ĵ��̱��ڶ��������������൱�ĺ�
�����㡣������ʯ��·ֱͨ�ϱ�����ͨ���ʹ��ĳ����ţ����Ͽ�ң
�������������ɽ��·���ǼҴ�Ŀ�ջ���������˲����������Ǽҵ�
�̣��������������ϲ���ǡ�
LONG);

  set("outdoors", "changan");
  set("exits", ([ /* sizeof() == 4 */
  "north" : __DIR__"center",
  "south" : __DIR__"zhuque-s2",
  "west" : __DIR__"dangpu",
  "east" : __DIR__"kezhan",
]));

  set("objects", ([
    __DIR__"npc/jieding" : 1,
  ]));
  setup();
}