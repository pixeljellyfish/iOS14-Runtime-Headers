/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:37:59 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/ProtocolBuffer.framework/ProtocolBuffer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <ProtocolBuffer/ProtocolBuffer-Structs.h>
@class NSData;

@interface PBDataReader : NSObject {

	unsigned long long _pos;
	BOOL _error;
	const char* _bytes;
	NSData* _data;
	unsigned long long _length;

}

@property (assign,nonatomic) unsigned long long length;                //@synthesize length=_length - In the implementation block
@property (assign,nonatomic) unsigned long long position;              //@synthesize pos=_pos - In the implementation block
-(void)setLength:(unsigned long long)arg1 ;
-(void)setPosition:(unsigned long long)arg1 ;
-(BOOL)readBOOL;
-(BOOL)skipValueWithTag:(unsigned short)arg1 andType:(unsigned char)arg2 ;
-(BOOL)seekToOffset:(unsigned long long)arg1 ;
-(id)data;
-(long long)readVarInt;
-(void)readTag:(unsigned short*)arg1 andType:(char*)arg2 ;
-(char)readInt8;
-(long long)readSint64;
-(double)readDouble;
-(long long)readSfixed64;
-(void)recall:(const SCD_Struct_PB0*)arg1 ;
-(void)dealloc;
-(unsigned long long)position;
-(unsigned long long)length;
-(BOOL)mark:(SCD_Struct_PB0*)arg1 ;
-(unsigned long long)offset;
-(unsigned long long)readFixed64;
-(long long)readInt64;
-(BOOL)hasError;
-(unsigned)readBigEndianFixed32;
-(unsigned long long)readBigEndianFixed64;
-(id)readData;
-(id)readBytes:(unsigned)arg1 ;
-(BOOL)skipValueWithTag:(unsigned)arg1 type:(unsigned char)arg2 ;
-(id)readString;
-(unsigned)readUint32;
-(BOOL)isAtEnd;
-(unsigned long long)readUint64;
-(id)initWithData:(id)arg1 ;
-(unsigned)readFixed32;
-(unsigned short)readBigEndianFixed16;
-(void)readTag:(unsigned*)arg1 type:(char*)arg2 ;
-(int)readInt32;
-(BOOL)hasMoreData;
-(id)readProtoBuffer;
-(void)updateData:(id)arg1 ;
-(int)readSfixed32;
-(int)readSint32;
-(id)readBigEndianShortThenString;
-(float)readFloat;
@end
