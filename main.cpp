#include <stdio.h>
#include <string>
#include <iostream>
#include <chrono>
#include <thread>  // �X���[�v���g�p���邽�߂ɃC���N���[�h

int main() {

    printf("100000�����̃f�[�^�̃R�s�[�ƈړ��̏������x���r\n");

    std::string a(1000000, 'a');

    std::string aCopy;

    std::string aMove;


    // �J�n�������擾
    auto startCopy = std::chrono::high_resolution_clock::now();

    aCopy = a;

    // �I���������擾
    auto endCopy = std::chrono::high_resolution_clock::now();

    // �o�ߎ��Ԃ��}�C�N���b�P�ʂŌv�Z
    auto durationCopy = std::chrono::duration_cast<std::chrono::microseconds>(endCopy - startCopy);

    // ���ʂ�\��
    std::cout << "�R�s�[����: " << durationCopy.count() << " ��s\n";

    ///�ړ�
    // �J�n�������擾
    auto startMove = std::chrono::high_resolution_clock::now();

    aMove = std::move(a);

    // �I���������擾
    auto endMove = std::chrono::high_resolution_clock::now();

    // �o�ߎ��Ԃ��}�C�N���b�P�ʂŌv�Z
    auto durationMove = std::chrono::duration_cast<std::chrono::microseconds>(endMove - startMove);

    // ���ʂ�\��
    std::cout << "�ړ�����: " << durationMove.count() << " ��s\n";

    return 0;
}