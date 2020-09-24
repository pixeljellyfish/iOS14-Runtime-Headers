/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:41:43 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol GQZArchiveInputStream;
#import <iWorkImport/iWorkImport-Structs.h>
@interface GQZEntry : NSObject {

	id<GQZArchiveInputStream> mInput;
	int mCompressionMethod;
	unsigned long long mCompressedSize;
	unsigned long long mUncompressedSize;
	unsigned long long mOffset;
	unsigned mCrc;

}
-(id)initFromCentralFileHeader:(const char*)arg1 inputStream:(id)arg2 ;
-(void)dealloc;
-(id)inputStream;
-(id)data;
-(xmlDoc*)xmlDocument;
-(xmlDoc*)recoverXmlDocument;
-(xmlTextReaderRef)xmlReader:(BOOL)arg1 ;
-(void)readZip64ExtraField:(const char*)arg1 size:(unsigned long long)arg2 ;
@end
