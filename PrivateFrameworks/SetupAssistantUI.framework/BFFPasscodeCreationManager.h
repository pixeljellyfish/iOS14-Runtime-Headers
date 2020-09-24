/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:37:43 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/SetupAssistantUI.framework/SetupAssistantUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol BFFPasscodeCreationDelegate;
@class NSString;

@interface BFFPasscodeCreationManager : NSObject {

	BOOL _numericPasscodeEntry;
	BOOL _acceptedWeakPasscode;
	unsigned long long _passcodeState;
	NSString* _passcode;
	id<BFFPasscodeCreationDelegate> _delegate;
	long long _simplePasscodeEntryLength;
	NSString* _constraintFailedInstructions;

}

@property (nonatomic,copy) NSString * passcode;                                                    //@synthesize passcode=_passcode - In the implementation block
@property (assign,nonatomic) BOOL acceptedWeakPasscode;                                            //@synthesize acceptedWeakPasscode=_acceptedWeakPasscode - In the implementation block
@property (nonatomic,copy) NSString * constraintFailedInstructions;                                //@synthesize constraintFailedInstructions=_constraintFailedInstructions - In the implementation block
@property (assign,nonatomic) unsigned long long passcodeState;                                     //@synthesize passcodeState=_passcodeState - In the implementation block
@property (assign,nonatomic,__weak) id<BFFPasscodeCreationDelegate> delegate;                      //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) NSString * constraintInstructions; 
@property (assign,getter=isNumericPasscodeEntry,nonatomic) BOOL numericPasscodeEntry;              //@synthesize numericPasscodeEntry=_numericPasscodeEntry - In the implementation block
@property (assign,nonatomic) long long simplePasscodeEntryLength;                                  //@synthesize simplePasscodeEntryLength=_simplePasscodeEntryLength - In the implementation block
+(id)sharedPasscodeManager;
-(void)reset;
-(NSString *)passcode;
-(id)init;
-(void)setDelegate:(id<BFFPasscodeCreationDelegate>)arg1 ;
-(id<BFFPasscodeCreationDelegate>)delegate;
-(void)setPasscode:(NSString *)arg1 ;
-(void)_applyPasscode;
-(id)_mainQueue;
-(unsigned long long)passcodeState;
-(void)setPasscodeState:(unsigned long long)arg1 ;
-(void)setSimplePasscodeEntryLength:(long long)arg1 ;
-(void)setNumericPasscodeEntry:(BOOL)arg1 ;
-(void)transitionToNextPasscodeStateForInput:(id)arg1 ;
-(BOOL)isSimplePasscodeEntry;
-(long long)simplePasscodeEntryLength;
-(BOOL)isNumericPasscodeEntry;
-(NSString *)constraintInstructions;
-(void)acceptWeakPasscode:(BOOL)arg1 ;
-(void)setConstraintFailedInstructions:(NSString *)arg1 ;
-(NSString *)constraintFailedInstructions;
-(void)setAcceptedWeakPasscode:(BOOL)arg1 ;
-(BOOL)acceptedWeakPasscode;
@end
