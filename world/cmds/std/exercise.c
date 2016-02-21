// �����硤���μǡ��汾��������
/* <SecCrypt CPL V3R05> */
 
// exercise.c

#include <skill.h>

inherit F_CLEAN_UP;

int finish(object me, int kee_cost);

int main(object me, string arg)
{
   int kee_cost, busy_time;
   
   seteuid(getuid());
   
   if(environment(me)->query("no_fight")  ||
      environment(me)->query("no_magic") )
         return notify_fail("��ȫ���ڽ�ֹ������\n");
         
        if (me->is_busy() || me->query_temp("pending/exercising"))
                return notify_fail("��������æ���ء�\n");

   if( me->is_fighting() )
     return notify_fail("ս���в������ڹ������߻���ħ��\n");

   if( !stringp(me->query_skill_mapped("force")) )
     return notify_fail("��������� enable ѡ����Ҫ�õ��ڹ��ķ���\n");

   if( !arg
   ||   !sscanf(arg, "%d", kee_cost) )
     return notify_fail("��Ҫ��������������\n");

   if( kee_cost < 10 ) return notify_fail("������Ҫ�� 10 �㡸��������������\n");

   if( (int)me->query("kee") < kee_cost )
     return notify_fail("�����ڵ���̫���ˣ��޷�������Ϣ����ȫ��������\n");

   write("�������������ù���һ����Ϣ��ʼ������������\n");

   busy_time=kee_cost/20;
   me->start_busy(busy_time+1);
   
   call_out("finish",busy_time+1, me, kee_cost);
   return 1;
}

int finish(object me, int kee_cost)
{
   int force_gain;
   me->receive_damage("kee", kee_cost);

   // This function ranged from 1 to 15 when kee_cost = 30
   force_gain = kee_cost * ((int)me->query_skill("force", 1)/10
     + (int)me->query_con()/2+random(25)) / 30;

   if( force_gain < 1 ) {
     tell_object(me, "���ǵ����й���ϣ�ֻ����ȫ�����顣\n");
     me->start_busy(1);
     return 1;
   }


   me->add("force", force_gain );
   tell_object(me, "���й���ϣ���һ����������վ��������\n");

   if( (int)me->query("force") > (int)me->query("max_force") * 2) {
     if( (int)me->query("max_force") >= 
        (int)me->query_skill("force") * 10 ) {
        tell_object(me, "�������Ϣ�鲼ȫ������ʱȴû�й��������ļ����ƺ�������Ϊ�Ѿ�������ƿ����\n");
     } else {
        tell_object(me, "���������ǿ�ˣ�\n");
        me->add("max_force", 1);
     }
     me->set("force", me->query("max_force"));
   }   
   
   me->start_busy(1);
   return 1;
}

int help(object me)
{
        write(@HELP
ָ���ʽ : exercise|dazuo [<�ķѡ�����������Ԥ��ֵ 30>]

�����������������ڵ����ڸ�����������������ѵ�����弡���������
��������������������������ʽ����������������

��ο� help stats
HELP
        );
        return 1;
}