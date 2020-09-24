/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:41:02 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/WorkflowUI.framework/WorkflowUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/VCActionDonation.h>

@class NSString, NSDate, INShortcut, NSData;

@interface WFMockActionDonation : NSObject <VCActionDonation> {

	NSString* _sourceAppIdentifier;
	NSString* _title;
	NSString* _subtitle;
	NSString* _sourceAppIdentifierForLaunching;
	id _uniqueProperty;
	NSData* _actionData;

}

@property (nonatomic,copy,readonly) NSData * actionData;                                     //@synthesize actionData=_actionData - In the implementation block
@property (nonatomic,copy,readonly) NSString * identifier; 
@property (nonatomic,copy,readonly) NSDate * date; 
@property (nonatomic,copy,readonly) NSString * sourceAppIdentifier;                          //@synthesize sourceAppIdentifier=_sourceAppIdentifier - In the implementation block
@property (nonatomic,copy,readonly) NSString * sourceAppIdentifierForDisplay; 
@property (nonatomic,copy,readonly) NSString * sourceAppIdentifierForLaunching;              //@synthesize sourceAppIdentifierForLaunching=_sourceAppIdentifierForLaunching - In the implementation block
@property (nonatomic,readonly) NSString * title;                                             //@synthesize title=_title - In the implementation block
@property (nonatomic,readonly) NSString * subtitle;                                          //@synthesize subtitle=_subtitle - In the implementation block
@property (nonatomic,copy,readonly) NSString * fullDescription; 
@property (nonatomic,copy,readonly) NSString * suggestedPhrase; 
@property (nonatomic,readonly) id uniqueProperty;                                            //@synthesize uniqueProperty=_uniqueProperty - In the implementation block
@property (nonatomic,readonly) INShortcut * shortcut; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(NSString *)identifier;
-(NSString *)subtitle;
-(NSString *)fullDescription;
-(NSDate *)date;
-(NSString *)title;
-(NSString *)sourceAppIdentifierForDisplay;
-(NSString *)sourceAppIdentifierForLaunching;
-(NSString *)suggestedPhrase;
-(id)uniqueProperty;
-(NSString *)sourceAppIdentifier;
-(INShortcut *)shortcut;
-(NSData *)actionData;
-(id)initWithBundleIdentifier:(id)arg1 title:(id)arg2 subtitle:(id)arg3 actionData:(id)arg4 ;
@end
