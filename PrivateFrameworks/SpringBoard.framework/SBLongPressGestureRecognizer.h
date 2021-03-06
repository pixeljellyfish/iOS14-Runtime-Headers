/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:44:03 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SpringBoard/SBClickGestureRecognizer.h>

@interface SBLongPressGestureRecognizer : SBClickGestureRecognizer {

	BOOL _firstEventAfterClicksWasReceived;
	double _minimumPressDuration;

}

@property (assign,nonatomic) unsigned long long numberOfClicksRequired; 
@property (assign,nonatomic) double minimumPressDuration;                            //@synthesize minimumPressDuration=_minimumPressDuration - In the implementation block
-(void)setMinimumPressDuration:(double)arg1 ;
-(double)minimumPressDuration;
-(void)reset;
-(id)gestureStateInfoForUnbalancedPressBeganCount:(long long)arg1 previousCount:(long long)arg2 ;
-(id)initWithTarget:(id)arg1 action:(SEL)arg2 ;
@end

