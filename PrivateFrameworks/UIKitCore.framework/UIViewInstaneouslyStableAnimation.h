/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:45:47 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIIntervalAnimating.h>

@protocol UIVectorOperatable;
@class NSString;

@interface UIViewInstaneouslyStableAnimation : NSObject <UIIntervalAnimating> {

	id<UIVectorOperatable> _velocity;
	id<UIVectorOperatable> _targetValue;

}

@property (nonatomic,retain) id<UIVectorOperatable> targetValue;              //@synthesize targetValue=_targetValue - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithTargetValue:(id)arg1 velocity:(id)arg2 ;
-(id)stepWithDelta:(double)arg1 ;
-(void)setVelocity:(id)arg1 ;
-(id<UIVectorOperatable>)targetValue;
-(BOOL)isStable;
-(void)setTargetValue:(id<UIVectorOperatable>)arg1 ;
-(id)value;
-(id)velocity;
@end
