/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:36:40 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/VoiceTrigger.framework/VoiceTrigger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface VTSiriPHash : NSObject {

	unsigned char _signalFractional;
	short _signalEstimate;

}

@property (assign) short signalEstimate;                        //@synthesize signalEstimate=_signalEstimate - In the implementation block
@property (assign) unsigned char signalFractional;              //@synthesize signalFractional=_signalFractional - In the implementation block
+(id)sharedPhash;
+(unsigned long long)sampleSizeForSignalEstimate;
-(id)init;
-(unsigned short)pHash:(float*)arg1 length:(int)arg2 ;
-(short)signalEstimate;
-(unsigned char)signalFractional;
-(void)setSignalEstimate:(short)arg1 ;
-(void)setSignalFractional:(unsigned char)arg1 ;
@end

