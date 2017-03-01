#include "Model.h"

Model::checkMove(int startPosition, int endPosition) {
	if(moveMove(make_pair(startPosition, endPosition)) {
		return true;
	}
	else {
		cerr "Invalid Move, Please Select Another Move."
		return false;
	}
}

Model::makeMove(int startPosition, int endPosition, string board) {
	char alpha[15] = [A,B,C,D,E,F,G,H,I,J,K,I,L,M,N,O];
	if(checkMove(startPosition, endPosition)) {
		int middle = moveMap.at(make_pair(startPosition, endPosition));
		board[startPosition] = 0;
		board[endPosition] = alpha[endposition-1];
		board[middle] = 0;
		return board;
	}
	else {
		return board;
	}
}
