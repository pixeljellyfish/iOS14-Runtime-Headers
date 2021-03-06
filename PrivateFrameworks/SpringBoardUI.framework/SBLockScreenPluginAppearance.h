/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:36:54 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/SpringBoardUI.framework/SpringBoardUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class NSArray, SBLockScreenLegibilitySettings;


@protocol SBLockScreenPluginAppearance <NSObject>
@property (getter=isHidden,nonatomic,readonly) BOOL hidden; 
@property (nonatomic,readonly) unsigned long long restrictedCapabilities; 
@property (nonatomic,readonly) long long backgroundStyle; 
@property (nonatomic,readonly) long long presentationStyle; 
@property (nonatomic,readonly) long long notificationBehavior; 
@property (nonatomic,copy,readonly) NSArray * elementOverrides; 
@property (nonatomic,retain,readonly) SBLockScreenLegibilitySettings * legibilitySettings; 
@property (nonatomic,readonly) CGRect presentationRegion; 
@required
-(long long)presentationStyle;
-(unsigned long long)restrictedCapabilities;
-(long long)notificationBehavior;
-(BOOL)isHidden;
-(long long)backgroundStyle;
-(SBLockScreenLegibilitySettings *)legibilitySettings;
-(CGRect)presentationRegion;
-(NSArray *)elementOverrides;

@end

