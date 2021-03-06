/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:45:34 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/UIGestureRecognizer.h>
#import <UIKitCore/_UIGestureStudyParticipating.h>

@class UITouch, NSString;

@interface _UIGestureStudyMetricsGestureRecognizer : UIGestureRecognizer <_UIGestureStudyParticipating> {

	long long _observedTouchCount;
	double _startTimestamp;
	double _allowableMovement;
	UITouch* _primaryTouch;
	CGPoint _originalPosition;

}

@property (assign,nonatomic) double startTimestamp;                       //@synthesize startTimestamp=_startTimestamp - In the implementation block
@property (assign,nonatomic) CGPoint originalPosition;                    //@synthesize originalPosition=_originalPosition - In the implementation block
@property (assign,nonatomic) double allowableMovement;                    //@synthesize allowableMovement=_allowableMovement - In the implementation block
@property (nonatomic,retain) UITouch * primaryTouch;                      //@synthesize primaryTouch=_primaryTouch - In the implementation block
@property (nonatomic,readonly) long long observedTouchCount;              //@synthesize observedTouchCount=_observedTouchCount - In the implementation block
@property (nonatomic,readonly) NSString * eventName; 
@property (nonatomic,readonly) double duration; 
@property (nonatomic,readonly) double movement; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(BOOL)_affectedByGesture:(id)arg1 ;
-(CGPoint)locationInCoordinateSpace:(id)arg1 ;
-(double)movement;
-(double)duration;
-(double)startTimestamp;
-(void)touchesEnded:(id)arg1 withEvent:(id)arg2 ;
-(void)reset;
-(double)allowableMovement;
-(void)setAllowableMovement:(double)arg1 ;
-(void)touchesCancelled:(id)arg1 withEvent:(id)arg2 ;
-(NSString *)eventName;
-(void)touchesMoved:(id)arg1 withEvent:(id)arg2 ;
-(void)touchesBegan:(id)arg1 withEvent:(id)arg2 ;
-(void)setStartTimestamp:(double)arg1 ;
-(CGPoint)locationInView:(id)arg1 ;
-(UITouch *)primaryTouch;
-(id)initWithTarget:(id)arg1 action:(SEL)arg2 ;
-(void)setPrimaryTouch:(UITouch *)arg1 ;
-(void)setOriginalPosition:(CGPoint)arg1 ;
-(CGPoint)originalPosition;
-(long long)observedTouchCount;
@end

