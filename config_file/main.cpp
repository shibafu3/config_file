// ��肽������
// �e�L�X�g�t�@�C������ݒ��1�s�������ǂݍ���

// ����
// �t�@�C���X�g���[���̃w�b�_���C���N���[�h
// �X�g�����O�̃w�b�_���C���N���[�h
// �t�@�C����ǂݍ���
// string�Ɉ�s����������
// �g�������^�ɕϊ�

// ���l
// ���̃v���O�����ł͎��s�t�@�C���Ɠ����K�w��config.txt��p�ӂ��Ȃ��Ƃ����Ȃ�
// ���ɂ����Ƃ����������肻��

// �Q�lURL
// http://kaworu.jpn.org/cpp/std::stoi
// http://nekko1119.hatenablog.com/entry/2013/08/17/144722


// �t�@�C���X�g���[���̃w�b�_���C���N���[�h
#include <fstream>
// �X�g�����O�̃w�b�_���C���N���[�h
#include <string>

using namespace std;

int main(){
	// �t�@�C����ǂݍ���
	ifstream ifs("config.txt");
	string config_string;
	// string�Ɉ�s����������
	ifs >> config_string;

	// int�ɒ��������Ȃ�
	stoi(config_string);
	// 16�i��int�ɒ��������Ȃ�
	stoi(config_string, nullptr, 16);
	// C����̕����z��ɒ��������Ȃ�
	config_string.c_str();

	return 0;
}
