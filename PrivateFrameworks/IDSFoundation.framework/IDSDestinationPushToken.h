/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:38:58 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/IDSFoundation.framework/IDSFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <IDSFoundation/IDSFoundation-Structs.h>
#import <IDSFoundation/IDSDestination.h>

@class NSString, NSData;

@interface IDSDestinationPushToken : IDSDestination {

	NSString* _alias;
	NSData* _pushToken;

}

@property (nonatomic,readonly) NSString * alias;                //@synthesize alias=_alias - In the implementation block
@property (nonatomic,readonly) NSData * pushToken;              //@synthesize pushToken=_pushToken - In the implementation block
+(BOOL)supportsSecureCoding;
-(NSData *)pushToken;
-(NSString *)alias;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)groupID;
-(id)initWithAlias:(id)arg1 pushToken:(id)arg2 ;
-(id)destinationURIs;
-(BOOL)isEqual:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
@end
