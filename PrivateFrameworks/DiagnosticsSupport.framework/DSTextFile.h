/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:42:33 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/DiagnosticsSupport.framework/DiagnosticsSupport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/DSTextFileEnumeratorControl.h>

@class NSFileHandle, NSMutableArray, NSData;

@interface DSTextFile : NSObject <DSTextFileEnumeratorControl> {

	BOOL _cancelEnumeration;
	BOOL _isEnumerating;
	NSFileHandle* _fileHandle;
	unsigned long long _bufferSize;
	NSMutableArray* _linePositions;
	NSData* _lineBreak;
	long long _skipCount;
	unsigned long long _currentLineIndex;

}

@property (nonatomic,retain) NSFileHandle * fileHandle;                        //@synthesize fileHandle=_fileHandle - In the implementation block
@property (assign,nonatomic) unsigned long long bufferSize;                    //@synthesize bufferSize=_bufferSize - In the implementation block
@property (nonatomic,retain) NSMutableArray * linePositions;                   //@synthesize linePositions=_linePositions - In the implementation block
@property (nonatomic,retain) NSData * lineBreak;                               //@synthesize lineBreak=_lineBreak - In the implementation block
@property (assign,nonatomic) BOOL cancelEnumeration;                           //@synthesize cancelEnumeration=_cancelEnumeration - In the implementation block
@property (assign,nonatomic) long long skipCount;                              //@synthesize skipCount=_skipCount - In the implementation block
@property (assign,nonatomic) BOOL isEnumerating;                               //@synthesize isEnumerating=_isEnumerating - In the implementation block
@property (assign,nonatomic) unsigned long long currentLineIndex;              //@synthesize currentLineIndex=_currentLineIndex - In the implementation block
+(id)textFileWithPath:(id)arg1 ;
-(void)end;
-(void)setFileHandle:(NSFileHandle *)arg1 ;
-(void)seekToOffset:(unsigned long long)arg1 ;
-(void)setSkipCount:(long long)arg1 ;
-(NSFileHandle *)fileHandle;
-(unsigned long long)bufferSize;
-(void)setBufferSize:(unsigned long long)arg1 ;
-(id)initWithFilePath:(id)arg1 ;
-(id)init;
-(id)readDataOfLength:(unsigned long long)arg1 ;
-(long long)skipCount;
-(unsigned long long)currentOffset;
-(void)setLineBreak:(NSData *)arg1 ;
-(NSData *)lineBreak;
-(id)initWithFilePath:(id)arg1 withBufferSize:(unsigned long long)arg2 ;
-(void)setIsEnumerating:(BOOL)arg1 ;
-(BOOL)advanceToNextLine:(id*)arg1 ;
-(unsigned long long)currentLineIndex;
-(BOOL)isEnumerating;
-(void)resetEnumerator;
-(void)setCurrentLineIndex:(unsigned long long)arg1 ;
-(NSMutableArray *)linePositions;
-(unsigned long long)getOffsetAtLineIndex:(unsigned long long)arg1 ;
-(id)extractLine:(unsigned long long)arg1 ;
-(BOOL)searchForNextLineFromCurrentPosition:(id*)arg1 ;
-(void)skipWithLines:(long long)arg1 ;
-(void)enumerateUsingBlock:(/*^block*/id)arg1 ;
-(void)seekToBeginning;
-(void)setLinePositions:(NSMutableArray *)arg1 ;
-(BOOL)cancelEnumeration;
-(void)setCancelEnumeration:(BOOL)arg1 ;
@end
