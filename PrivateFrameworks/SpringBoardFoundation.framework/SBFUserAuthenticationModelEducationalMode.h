/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:42:00 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/SpringBoardFoundation.framework/SpringBoardFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/SBFUserAuthenticationModel.h>

@protocol SBFUserAuthenticationModelDelegate;
@class SBFMobileKeyBag, NSString;

@interface SBFUserAuthenticationModelEducationalMode : NSObject <SBFUserAuthenticationModel> {

	SBFMobileKeyBag* _keybag;
	BOOL _pendingWipe;
	id<SBFUserAuthenticationModelDelegate> _delegate;

}

@property (assign,nonatomic) id<SBFUserAuthenticationModelDelegate> delegate;                    //@synthesize delegate=_delegate - In the implementation block
@property (getter=isTemporarilyBlocked,nonatomic,readonly) BOOL temporarilyBlocked; 
@property (getter=isPermanentlyBlocked,nonatomic,readonly) BOOL permanentlyBlocked; 
@property (nonatomic,readonly) double timeUntilUnblockedSinceReferenceDate; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(BOOL)isTemporarilyBlocked;
-(BOOL)isPermanentlyBlocked;
-(id)initWithKeyBag:(id)arg1 ;
-(id)_refreshStateAndNotify:(BOOL)arg1 ;
-(void)notePasscodeUnlockFailedWithError:(id)arg1 ;
-(void)notePasscodeUnlockSucceeded;
-(void)performPasswordTest:(/*^block*/id)arg1 ;
-(void)notePasscodeEntryCancelled;
-(void)setDelegate:(id<SBFUserAuthenticationModelDelegate>)arg1 ;
-(id<SBFUserAuthenticationModelDelegate>)delegate;
-(void)notePasscodeEntryBegan;
-(void)noteNewMkbDeviceLockState:(id)arg1 ;
-(void)synchronize;
-(void)_refreshStateForMkbState:(id)arg1 notify:(BOOL)arg2 ;
-(double)timeUntilUnblockedSinceReferenceDate;
@end
