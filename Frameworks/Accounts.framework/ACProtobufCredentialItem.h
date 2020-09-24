/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:50:23 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/Frameworks/Accounts.framework/Accounts
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Accounts/Accounts-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, NSMutableArray, ACProtobufDate, ACProtobufURL;

@interface ACProtobufCredentialItem : PBCodable <NSCopying> {

	NSString* _accountIdentifier;
	NSMutableArray* _dirtyProperties;
	ACProtobufDate* _expirationDate;
	ACProtobufURL* _objectID;
	NSString* _serviceName;
	BOOL _isPersistent;
	SCD_Struct_AC4 _has;

}

@property (nonatomic,retain) NSString * accountIdentifier;                  //@synthesize accountIdentifier=_accountIdentifier - In the implementation block
@property (nonatomic,readonly) BOOL hasExpirationDate; 
@property (nonatomic,retain) ACProtobufDate * expirationDate;               //@synthesize expirationDate=_expirationDate - In the implementation block
@property (nonatomic,retain) NSString * serviceName;                        //@synthesize serviceName=_serviceName - In the implementation block
@property (assign,nonatomic) BOOL hasIsPersistent; 
@property (assign,nonatomic) BOOL isPersistent;                             //@synthesize isPersistent=_isPersistent - In the implementation block
@property (nonatomic,readonly) BOOL hasObjectID; 
@property (nonatomic,retain) ACProtobufURL * objectID;                      //@synthesize objectID=_objectID - In the implementation block
@property (nonatomic,retain) NSMutableArray * dirtyProperties;              //@synthesize dirtyProperties=_dirtyProperties - In the implementation block
+(Class)dirtyPropertiesType;
-(BOOL)isPersistent;
-(void)setExpirationDate:(ACProtobufDate *)arg1 ;
-(void)clearDirtyProperties;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)writeTo:(id)arg1 ;
-(BOOL)hasObjectID;
-(BOOL)readFrom:(id)arg1 ;
-(ACProtobufURL *)objectID;
-(ACProtobufDate *)expirationDate;
-(BOOL)hasExpirationDate;
-(BOOL)hasIsPersistent;
-(NSMutableArray *)dirtyProperties;
-(unsigned long long)dirtyPropertiesCount;
-(void)setObjectID:(ACProtobufURL *)arg1 ;
-(void)setServiceName:(NSString *)arg1 ;
-(NSString *)accountIdentifier;
-(void)setDirtyProperties:(NSMutableArray *)arg1 ;
-(void)addDirtyProperties:(id)arg1 ;
-(void)setHasIsPersistent:(BOOL)arg1 ;
-(id)dirtyPropertiesAtIndex:(unsigned long long)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)setIsPersistent:(BOOL)arg1 ;
-(void)copyTo:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(NSString *)serviceName;
-(id)description;
-(void)setAccountIdentifier:(NSString *)arg1 ;
-(id)dictionaryRepresentation;
@end
