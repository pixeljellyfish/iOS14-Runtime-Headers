/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:46:43 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSURL;

@interface PKDiscoveryMessagesMetadata : NSObject {

	long long _version;
	NSURL* _messagesBundleURL;

}

@property (nonatomic,readonly) long long version;                      //@synthesize version=_version - In the implementation block
@property (nonatomic,readonly) NSURL * messagesBundleURL;              //@synthesize messagesBundleURL=_messagesBundleURL - In the implementation block
+(BOOL)supportsSecureCoding;
-(long long)version;
-(NSURL *)messagesBundleURL;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithDictionary:(id)arg1 ;
@end
