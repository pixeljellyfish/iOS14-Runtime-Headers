/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:50:23 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/Frameworks/Accounts.framework/Accounts
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Accounts/Accounts-Structs.h>
#import <libobjc.A.dylib/ACProtobufCoding.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, NSURL, ACAccountStore, NSSet;

@interface ACAccountType : NSObject <ACProtobufCoding, NSCopying, NSSecureCoding> {

	NSString* _accountTypeDescription;
	NSString* _identifier;
	NSString* _credentialType;
	NSURL* _objectID;
	int _visibility;
	NSString* _credentialProtectionPolicy;
	ACAccountStore* _accountStore;
	int _supportsAuthentication;
	BOOL _supportsMultipleAccounts;
	BOOL _obsolete;
	NSSet* _supportedDataclasses;
	NSSet* _syncableDataclasses;
	NSSet* _accessKeys;
	NSString* _owningBundleID;

}

@property (nonatomic,retain) NSURL * objectID;                                  //@synthesize objectID=_objectID - In the implementation block
@property (assign,nonatomic) int visibility; 
@property (nonatomic,copy) id credentialProtectionPolicy; 
@property (nonatomic,retain) NSString * credentialType;                         //@synthesize credentialType=_credentialType - In the implementation block
@property (assign,nonatomic,__weak) ACAccountStore * accountStore;              //@synthesize accountStore=_accountStore - In the implementation block
@property (assign,nonatomic) int supportsAuthentication;                        //@synthesize supportsAuthentication=_supportsAuthentication - In the implementation block
@property (assign,nonatomic) BOOL supportsMultipleAccounts;                     //@synthesize supportsMultipleAccounts=_supportsMultipleAccounts - In the implementation block
@property (nonatomic,retain) NSString * owningBundleID;                         //@synthesize owningBundleID=_owningBundleID - In the implementation block
@property (assign,getter=isObsolete,nonatomic) BOOL obsolete;                   //@synthesize obsolete=_obsolete - In the implementation block
@property (nonatomic,readonly) NSSet * supportedDataclasses;                    //@synthesize supportedDataclasses=_supportedDataclasses - In the implementation block
@property (nonatomic,readonly) NSSet * syncableDataclasses;                     //@synthesize syncableDataclasses=_syncableDataclasses - In the implementation block
@property (nonatomic,readonly) NSSet * accessKeys;                              //@synthesize accessKeys=_accessKeys - In the implementation block
@property (nonatomic,readonly) NSString * fullDescription; 
@property (nonatomic,readonly) NSString * accountTypeDescription;               //@synthesize accountTypeDescription=_accountTypeDescription - In the implementation block
@property (nonatomic,readonly) NSString * identifier;                           //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,readonly) BOOL accessGranted; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)supportsSecureCoding;
+(id)allIdentifiers;
-(NSString *)identifier;
-(BOOL)isObsolete;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)fullDescription;
-(void)setCredentialProtectionPolicy:(id)arg1 ;
-(void)setVisibility:(int)arg1 ;
-(void)setAccountStore:(ACAccountStore *)arg1 ;
-(int)supportsAuthentication;
-(id)credentialProtectionPolicy;
-(NSURL *)objectID;
-(NSString *)accountTypeDescription;
-(void)setObsolete:(BOOL)arg1 ;
-(void)setSupportsAuthentication:(int)arg1 ;
-(id)_initWithProtobufData:(id)arg1 ;
-(void)setIdentifier:(NSString *)arg1 ;
-(int)visibility;
-(id)_encodeProtobuf;
-(ACAccountStore *)accountStore;
-(id)_initWithProtobuf:(id)arg1 ;
-(void)setObjectID:(NSURL *)arg1 ;
-(id)initWithIdentifier:(id)arg1 description:(id)arg2 ;
-(id)_encodeProtobufData;
-(id)initWithManagedAccountType:(id)arg1 accountStore:(id)arg2 ;
-(void)setCredentialType:(NSString *)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)credentialType;
-(BOOL)accessGranted;
-(void)encodeWithCoder:(id)arg1 ;
-(BOOL)supportsMultipleAccounts;
-(NSSet *)accessKeys;
-(NSSet *)syncableDataclasses;
-(NSSet *)supportedDataclasses;
-(void)setOwningBundleID:(NSString *)arg1 ;
-(void)setSupportsMultipleAccounts:(BOOL)arg1 ;
-(id)initWithManagedAccountType:(id)arg1 ;
-(unsigned long long)hash;
-(NSString *)owningBundleID;
-(void)setAccountTypeDescription:(NSString *)arg1 ;
-(NSString *)description;
@end

