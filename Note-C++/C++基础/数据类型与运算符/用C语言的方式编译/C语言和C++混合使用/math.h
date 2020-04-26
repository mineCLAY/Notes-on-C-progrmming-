/*
 * #ifdef,#define,#endif
 * ���Է�ֹͷ�ļ������ݱ��ظ�����
 *
 * #pragma once
 * Ҳ���Է�ֹ�����ļ������ݱ��ظ�����
 *
 * ����
 * #ifndef,#define,#endif �� C\C++ ��׼��֧��
 * ���ܱ��������κ�����
 * ��Щ��������֧�� #pragma once
 * (���ϱ�������֧���� GCC 3.4 �汾֮ǰ)
 * �����Բ���
 * #ifndef,#define,#endif �������һ���ļ��еĲ��ִ���
 * �� #pragma once ֻ����������ļ�
 * ����ʹ�� #ifndef,#define,#endif
 */

// #pragma once ��������ļ�

// ��Բ��ִ���
#ifndef __MATH_H
#define __MATH_H

/*
 * ��������� __cplusplus ��
 * (C++ Դ�ļ��Զ�����)
 * ��ִ�� #ifdef �� #endif
 * ֮��Ĵ���
 */
#ifdef __cplusplus
// �� C ���Եķ�ʽ����
extern "C" {
// __cplusplus
#endif

  // �����ӷ�
  int sum(int temp , int t);
  // ����
  int delta(int temp , int t);
  // ����
  int divide(int temp , int t);

/*
 * ��������� __cplusplus ��
 * (C++ Դ�ļ��Զ�����)
 * ��ִ�� #ifdef �� #endif
 * ֮��Ĵ���
 */
#ifdef __cplusplus
}
// __cplusplus
#endif

// !MATH_H
#endif
