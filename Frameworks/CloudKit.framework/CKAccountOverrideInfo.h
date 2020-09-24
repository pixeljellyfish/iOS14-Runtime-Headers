/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:50:30 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/Frameworks/CloudKit.framework/CloudKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CloudKit/CloudKit-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, NSDictionary;

@interface CKAccountOverrideInfo : NSObject <NSCopying, NSSecureCoding> {

	BOOL _isUnitTestingAccount;
	BOOL _accountWantsPushRegistration;
	BOOL _accountWantsFlowControl;
	NSString* _accountID;
	NSString* _email;
	NSString* _password;
	NSString* _secondEmail;
	NSDictionary* _accountPropertyOverrides;
	NSDictionary* _overridesByDataclass;

}

@property (nonatomic,copy) NSString * accountID;                                 //@synthesize accountID=_accountID - In the implementation block
@property (nonatomic,readonly) NSString * email;                                 //@synthesize email=_email - In the implementation block
@property (nonatomic,readonly) NSString * password;                              //@synthesize password=_password - In the implementation block
@property (nonatomic,copy) NSString * secondEmail;                               //@synthesize secondEmail=_secondEmail - In the implementation block
@property (assign,nonatomic) BOOL isUnitTestingAccount;                          //@synthesize isUnitTestingAccount=_isUnitTestingAccount - In the implementation block
@property (assign,nonatomic) BOOL accountWantsPushRegistration;                  //@synthesize accountWantsPushRegistration=_accountWantsPushRegistration - In the implementation block
@property (assign,nonatomic) BOOL accountWantsFlowControl;                       //@synthesize accountWantsFlowControl=_accountWantsFlowControl - In the implementation block
@property (nonatomic,copy) NSDictionary * accountPropertyOverrides;              //@synthesize accountPropertyOverrides=_accountPropertyOverrides - In the implementation block
@property (nonatomic,copy) NSDictionary * overridesByDataclass;                  //@synthesize overridesByDataclass=_overridesByDataclass - In the implementation block
+(BOOL)supportsSecureCoding;
-(BOOL)isUnitTestingAccount;
-(id)initWithAccountID:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)CKPropertiesDescription;
-(void)setIsUnitTestingAccount:(BOOL)arg1 ;
-(void)setAccountID:(NSString *)arg1 ;
-(BOOL)accountWantsPushRegistration;
-(void)setAccountWantsFlowControl:(BOOL)arg1 ;
-(NSDictionary *)accountPropertyOverrides;
-(BOOL)isEqual:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(NSString *)accountID;
-(void)setAccountWantsPushRegistration:(BOOL)arg1 ;
-(NSString *)password;
-(BOOL)accountWantsFlowControl;
-(id)initAnonymousAccount;
-(unsigned long long)hash;
-(id)initWithEmail:(id)arg1 password:(id)arg2 ;
-(NSString *)secondEmail;
-(NSDictionary *)overridesByDataclass;
-(void)setSecondEmail:(NSString *)arg1 ;
-(void)setAccountPropertyOverrides:(NSDictionary *)arg1 ;
-(void)setOverridesByDataclass:(NSDictionary *)arg1 ;
-(id)description;
-(NSString *)email;
@end
