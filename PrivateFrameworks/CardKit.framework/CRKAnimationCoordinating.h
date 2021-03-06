/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:37:51 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/CardKit.framework/CardKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class UIView;


@protocol CRKAnimationCoordinating <NSObject>
@property (getter=isAnimated,nonatomic,readonly) BOOL animated; 
@property (nonatomic,readonly) UIView * containerView; 
@property (nonatomic,copy) id initialSetup; 
@property (nonatomic,copy) id finalSetup; 
@property (nonatomic,copy) id animations; 
@property (nonatomic,copy) id completion; 
@property (assign,nonatomic) double duration; 
@required
-(BOOL)isAnimated;
-(UIView *)containerView;
-(id)animations;
-(double)duration;
-(void)setDuration:(double)arg1;
-(void)setCompletion:(/*^block*/id)arg1;
-(void)setAnimations:(/*^block*/id)arg1;
-(id)completion;
-(id)initialSetup;
-(void)setInitialSetup:(/*^block*/id)arg1;
-(id)finalSetup;
-(void)setFinalSetup:(/*^block*/id)arg1;

@end

