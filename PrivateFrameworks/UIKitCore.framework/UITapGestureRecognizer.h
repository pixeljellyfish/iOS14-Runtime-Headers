/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:45:27 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/UIGestureRecognizer.h>
#import <UIKit/UITapRecognizerDelegate.h>

@class UITapRecognizer, NSArray, NSString;

@interface UITapGestureRecognizer : UIGestureRecognizer <UITapRecognizerDelegate> {

	CGPoint _locationInView;
	UITapRecognizer* _imp;
	unsigned _delaysRecognitionForGreaterTapCounts;
	BOOL _isSingleKeyPressGesture;
	long long _buttonType;

}

@property (readonly) unsigned long long akNumberOfTapsRequired; 
@property (assign,setter=_setButtonType:,nonatomic) long long _buttonType;              //@synthesize buttonType=_buttonType - In the implementation block
@property (nonatomic,readonly) CGPoint centroid; 
@property (nonatomic,readonly) CGPoint location; 
@property (nonatomic,readonly) NSArray * touches; 
@property (assign,nonatomic) double maximumTapDuration; 
@property (assign,nonatomic) BOOL isSingleKeyPressGesture;                              //@synthesize isSingleKeyPressGesture=_isSingleKeyPressGesture - In the implementation block
@property (assign,nonatomic) unsigned long long numberOfTapsRequired; 
@property (assign,nonatomic) unsigned long long numberOfTouchesRequired; 
@property (assign,nonatomic) long long buttonMaskRequired; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)supportsSecureCoding;
+(BOOL)_supportsTouchContinuation;
-(unsigned long long)akNumberOfTapsRequired;
-(void)setAllowedPressTypes:(id)arg1 ;
-(BOOL)_shouldReceivePress:(id)arg1 ;
-(CGPoint)centroid;
-(unsigned long long)numberOfTouchesRequired;
-(void)setNumberOfTapsRequired:(unsigned long long)arg1 ;
-(NSArray *)touches;
-(double)_touchSloppinessFactor;
-(void)pressesEnded:(id)arg1 withEvent:(id)arg2 ;
-(void)_appendSubclassDescription:(id)arg1 ;
-(void)setNumberOfTouchesRequired:(unsigned long long)arg1 ;
-(void)setButtonMaskRequired:(long long)arg1 ;
-(void)pressesBegan:(id)arg1 withEvent:(id)arg2 ;
-(void)pressesCancelled:(id)arg1 withEvent:(id)arg2 ;
-(long long)buttonMaskRequired;
-(CGPoint)location;
-(void)pressesChanged:(id)arg1 withEvent:(id)arg2 ;
-(void)dealloc;
-(BOOL)shouldRequireFailureOfGestureRecognizer:(id)arg1 ;
-(CGPoint)_digitizerLocation;
-(void)touchesEnded:(id)arg1 withEvent:(id)arg2 ;
-(void)tapRecognizerRecognizedTap:(id)arg1 ;
-(void)setMaximumSingleTapDuration:(double)arg1 ;
-(double)maximumSingleTapDuration;
-(long long)_buttonType;
-(double)_allowableSeparation;
-(double)allowableMovement;
-(long long)_finalStateForRecognition;
-(BOOL)_shouldFailInResponseToPresses:(id)arg1 withEvent:(id)arg2 ;
-(double)_allowableTouchTimeSeparation;
-(void)setAllowableMovement:(double)arg1 ;
-(void)touchesCancelled:(id)arg1 withEvent:(id)arg2 ;
-(unsigned long long)numberOfTouches;
-(void)_resetGestureRecognizer;
-(void)_setButtonType:(long long)arg1 ;
-(void)setMaximumTapDuration:(double)arg1 ;
-(void)_setAllowableTouchTimeSeparation:(double)arg1 ;
-(void)_setAllowableSeparation:(double)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(long long)_buttonMaskRequired;
-(void)_setButtonMaskRequired:(long long)arg1 ;
-(BOOL)isSingleKeyPressGesture;
-(BOOL)_delaysRecognitionForGreaterTapCounts;
-(void)_setDelaysRecognitionForGreaterTapCounts:(BOOL)arg1 ;
-(void)setIsSingleKeyPressGesture:(BOOL)arg1 ;
-(CGPoint)locationOfTouch:(unsigned long long)arg1 inView:(id)arg2 ;
-(void)tapRecognizerFailedToRecognizeTap:(id)arg1 ;
-(void)touchesMoved:(id)arg1 withEvent:(id)arg2 ;
-(void)encodeWithCoder:(id)arg1 ;
-(BOOL)_isGestureType:(long long)arg1 ;
-(void)touchesBegan:(id)arg1 withEvent:(id)arg2 ;
-(BOOL)tapIsPossibleForTapRecognizer:(id)arg1 ;
-(double)maximumTapDuration;
-(CGPoint)locationInView:(id)arg1 ;
-(void)setMaximumIntervalBetweenSuccessiveTaps:(double)arg1 ;
-(double)maximumIntervalBetweenSuccessiveTaps;
-(BOOL)canPreventGestureRecognizer:(id)arg1 ;
-(id)initWithTarget:(id)arg1 action:(SEL)arg2 ;
-(unsigned long long)numberOfTapsRequired;
@end
