/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:36:27 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/ConfigurationEngineModel.framework/ConfigurationEngineModel
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ConfigurationEngineModel/ConfigurationEngineModel-Structs.h>
#import <ConfigurationEngineModel/CEMPayloadBase.h>

@class NSNumber, NSString;

@interface CEMSecurityInformationCommand_StatusSecurityInfoFirewallSettingsApplicationsItem : CEMPayloadBase {

	NSNumber* _statusAllowed;
	NSString* _statusBundleID;
	NSString* _statusName;

}

@property (nonatomic,copy) NSNumber * statusAllowed;               //@synthesize statusAllowed=_statusAllowed - In the implementation block
@property (nonatomic,copy) NSString * statusBundleID;              //@synthesize statusBundleID=_statusBundleID - In the implementation block
@property (nonatomic,copy) NSString * statusName;                  //@synthesize statusName=_statusName - In the implementation block
+(id)allowedStatusKeys;
+(id)buildRequiredOnly;
+(id)buildWithAllowed:(id)arg1 withBundleID:(id)arg2 withName:(id)arg3 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)loadPayload:(id)arg1 error:(id*)arg2 ;
-(id)serializePayload;
-(void)setStatusName:(NSString *)arg1 ;
-(NSString *)statusName;
-(void)setStatusAllowed:(NSNumber *)arg1 ;
-(void)setStatusBundleID:(NSString *)arg1 ;
-(NSNumber *)statusAllowed;
-(NSString *)statusBundleID;
@end
