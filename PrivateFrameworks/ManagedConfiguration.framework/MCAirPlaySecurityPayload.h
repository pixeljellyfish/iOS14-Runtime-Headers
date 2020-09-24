/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:36:07 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/ManagedConfiguration.framework/ManagedConfiguration
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ManagedConfiguration/MCPayload.h>

@class NSString;

@interface MCAirPlaySecurityPayload : MCPayload {

	NSString* _accessType;
	NSString* _securityType;
	NSString* _password;

}

@property (nonatomic,retain) NSString * accessType;                //@synthesize accessType=_accessType - In the implementation block
@property (nonatomic,retain) NSString * securityType;              //@synthesize securityType=_securityType - In the implementation block
@property (nonatomic,retain) NSString * password;                  //@synthesize password=_password - In the implementation block
+(id)typeStrings;
+(id)localizedPluralForm;
+(id)localizedSingularForm;
-(NSString *)securityType;
-(void)setSecurityType:(NSString *)arg1 ;
-(id)subtitle1Label;
-(id)subtitle1Description;
-(id)subtitle2Label;
-(id)subtitle2Description;
-(void)setAccessType:(NSString *)arg1 ;
-(NSString *)password;
-(id)verboseDescription;
-(void)setPassword:(NSString *)arg1 ;
-(NSString *)accessType;
-(id)stubDictionary;
-(id)initWithDictionary:(id)arg1 profile:(id)arg2 outError:(id*)arg3 ;
@end
