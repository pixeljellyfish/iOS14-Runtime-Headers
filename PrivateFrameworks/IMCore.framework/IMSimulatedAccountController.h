/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:39:56 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/IMCore.framework/IMCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <IMCore/IMAccountController.h>

@class NSMutableDictionary;

@interface IMSimulatedAccountController : IMAccountController {

	NSMutableDictionary* _simulatedAccountsPerService;

}
-(id)activeIMessageAccount;
-(void)setSimulatedAccounts:(id)arg1 forServiceNamed:(id)arg2 ;
-(id)init;
-(id)activeAccounts;
-(id)activeSMSAccount;
@end
