/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:51:04 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/Frameworks/VideoSubscriberAccount.framework/VideoSubscriberAccount
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <VideoSubscriberAccount/VideoSubscriberAccount-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, NSSet, NSDictionary;

@interface VSAccountChannels : NSObject <NSCopying> {

	NSString* _providerID;
	NSString* _adamID;
	NSSet* _channelIDs;
	NSDictionary* _providerInfo;

}

@property (nonatomic,copy) NSString * providerID;                    //@synthesize providerID=_providerID - In the implementation block
@property (nonatomic,copy) NSString * adamID;                        //@synthesize adamID=_adamID - In the implementation block
@property (nonatomic,copy) NSSet * channelIDs;                       //@synthesize channelIDs=_channelIDs - In the implementation block
@property (nonatomic,copy) NSDictionary * providerInfo;              //@synthesize providerInfo=_providerInfo - In the implementation block
+(id)deserializationResultWithData:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSSet *)channelIDs;
-(void)setChannelIDs:(NSSet *)arg1 ;
-(void)setAdamID:(NSString *)arg1 ;
-(id)init;
-(void)setProviderID:(NSString *)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(NSString *)providerID;
-(unsigned long long)hash;
-(id)description;
-(NSString *)adamID;
-(NSDictionary *)providerInfo;
-(id)serializationResultWithFormat:(unsigned long long)arg1 ;
-(id)serializationResult;
-(void)setProviderInfo:(NSDictionary *)arg1 ;
@end
