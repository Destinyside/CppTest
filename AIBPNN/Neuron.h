#pragma once
#include<math.h>
#include<iostream>
using namespace std;
enum NodeType {
	Node_Input,
	Node_Hidden,
	Node_Output
};
class Neuron {
	//�������
	NodeType type;
	
	//�����ǰ���ֵ
	double forwardInputValue;
	double forwardOutputValue;
	//���������ֵ
	double backwardInputValue;
	double backwardOutputValue;
public:
	Neuron();
	Neuron(NodeType type);

	void setType(NodeType type);

	//get/set
	double getForwardInputValue();
	void setForwardInputValue(double inputValue);
	double getForwardOutputValue();
	
	double getBackwardInputValue();
	void setBackwardInputValue(double backwardInputValue);
	double getBackwardOutputValue();
	
private:
	void setForwardOutputValue(double inputValue);
	void setBackwardOutputValue(double backwardInputValue);

	double tanhS(double in);
	//sigmoid ����
	double forwardSigmoid(double in);

	double tanhSDerivative(double in);
	//���򴫲���������ĵ���
	double backwardPropagate(double in);


};