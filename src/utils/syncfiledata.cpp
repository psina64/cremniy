#include "syncfiledata.h"

SyncFileData::SyncFileData(QCodeEditor* codeeditor, QHexView* hexview) {
    m_codeeditor = codeeditor;
    m_hexview = hexview;
}


void SyncFileData::setBuffer(QByteArray buffer){
    m_buffer = buffer;
}

void SyncFileData::syncBuffer(){
    m_codeeditor->toPlainText();
}

QByteArray SyncFileData::getBuffer(){

}