/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:38:05 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/MetricsKit.framework/MetricsKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSDate;

@interface MTMediaTimeTracker : NSObject {

	float _playbackRate;
	NSDate* _date;
	unsigned long long _position;

}

@property (nonatomic,retain) NSDate * date;                            //@synthesize date=_date - In the implementation block
@property (assign,nonatomic) unsigned long long position;              //@synthesize position=_position - In the implementation block
@property (assign,nonatomic) float playbackRate;                       //@synthesize playbackRate=_playbackRate - In the implementation block
-(void)setPlaybackRate:(float)arg1 ;
-(float)playbackRate;
-(void)setPosition:(unsigned long long)arg1 ;
-(void)setDate:(NSDate *)arg1 ;
-(NSDate *)date;
-(unsigned long long)position;
-(void)updatePosition:(unsigned long long)arg1 ;
-(id)initWithPosition:(unsigned long long)arg1 playbackRate:(float)arg2 ;
-(id)estimatedTimeAtPastPosition:(unsigned long long)arg1 ;
-(void)updatePosition:(unsigned long long)arg1 playbackRate:(float)arg2 ;
-(id)estimatedTimeAtPosition:(unsigned long long)arg1 ;
@end
