// �����硤���μǡ��汾��������
/* <SecCrypt CPL V3R05> */
 
// create by snowcat.c 12/8/1997

inherit ROOM;

void create ()
{
  set ("short", "�͵�");
  set ("long", @LONG

һ��ʮ�ֿ����Ŀ͵꣬���ܵ�ʯǽ����ˢ��ѩ�׸ɾ����ٽֵ�
��̨�Ϸ��Ų�ߣ�һ���ķ���ľ���������У��ı߷��ų�����
����������Ϣ��

LONG);

  set("exits", ([
        "east"   : __DIR__"jiedao21",
      ]));
  set("objects", ([
        __DIR__"npc/xin"   : 1,
      ]));
  set("valid_startroom",1);

  setup();
}

