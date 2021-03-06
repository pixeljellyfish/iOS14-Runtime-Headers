/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:35:35 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/UserNotificationsServer.framework/UserNotificationsServer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UserNotificationsServer/UserNotificationsServer-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, NSData;

@interface UNSPushRegistration : NSObject <NSCopying> {

	NSString* _environment;
	NSData* _token;
	NSString* _tokenIdentifier;

}

@property (nonatomic,copy,readonly) NSString * environment;                  //@synthesize environment=_environment - In the implementation block
@property (nonatomic,copy,readonly) NSData * token;                          //@synthesize token=_token - In the implementation block
@property (nonatomic,copy,readonly) NSString * tokenIdentifier;              //@synthesize tokenIdentifier=_tokenIdentifier - In the implementation block
+(id)pushRegistrationWithEnvironment:(id)arg1 tokenIdentifier:(id)arg2 token:(id)arg3 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)initWithDictionaryRepresentation:(id)arg1 ;
-(NSData *)token;
-(BOOL)isEqual:(id)arg1 ;
-(NSString *)tokenIdentifier;
-(NSString *)environment;
-(unsigned long long)hash;
-(id)initWithEnvironment:(id)arg1 tokenIdentifier:(id)arg2 token:(id)arg3 ;
-(id)description;
-(id)dictionaryRepresentation;
@end

