/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:50:31 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/Frameworks/CloudKit.framework/CloudKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CloudKit/CloudKit-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSDictionary;

@interface CKOperationGroupSystemImposedInfo : NSObject <NSSecureCoding, NSCopying> {

	NSDictionary* _networkServiceTypePerConfig;
	long long _expectedSendSize;
	long long _expectedReceiveSize;

}

@property (nonatomic,copy) NSDictionary * networkServiceTypePerConfig;              //@synthesize networkServiceTypePerConfig=_networkServiceTypePerConfig - In the implementation block
@property (assign,nonatomic) long long expectedSendSize;                            //@synthesize expectedSendSize=_expectedSendSize - In the implementation block
@property (assign,nonatomic) long long expectedReceiveSize;                         //@synthesize expectedReceiveSize=_expectedReceiveSize - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setExpectedSendSize:(long long)arg1 ;
-(long long)expectedSendSize;
-(NSDictionary *)networkServiceTypePerConfig;
-(void)setNetworkServiceTypePerConfig:(NSDictionary *)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(long long)expectedReceiveSize;
-(void)encodeWithCoder:(id)arg1 ;
-(void)setExpectedReceiveSize:(long long)arg1 ;
@end

