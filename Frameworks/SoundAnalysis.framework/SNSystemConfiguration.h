/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:47:10 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/Frameworks/SoundAnalysis.framework/SoundAnalysis
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <SoundAnalysis/SoundAnalysis-Structs.h>
@interface SNSystemConfiguration : NSObject {

	unsigned _channelCount;
	double _sampleRate;

}

@property (assign,nonatomic) double sampleRate;                  //@synthesize sampleRate=_sampleRate - In the implementation block
@property (assign,nonatomic) unsigned channelCount;              //@synthesize channelCount=_channelCount - In the implementation block
-(double)sampleRate;
-(unsigned)channelCount;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setSampleRate:(double)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(void)setChannelCount:(unsigned)arg1 ;
-(id)initWithSampleRate:(double)arg1 channelCount:(unsigned)arg2 ;
@end
