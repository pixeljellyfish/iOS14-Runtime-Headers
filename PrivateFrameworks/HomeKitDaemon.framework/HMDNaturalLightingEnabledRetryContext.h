/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:41:13 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HomeKitDaemon/HomeKitDaemon-Structs.h>
#import <HMFoundation/HMFObject.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface HMDNaturalLightingEnabledRetryContext : HMFObject <NSCopying> {

	BOOL _naturalLightingEnabled;
	unsigned long long _retryCount;
	/*^block*/id _completion;

}

@property (assign) unsigned long long retryCount;              //@synthesize retryCount=_retryCount - In the implementation block
@property (readonly) BOOL naturalLightingEnabled;              //@synthesize naturalLightingEnabled=_naturalLightingEnabled - In the implementation block
@property (readonly) id completion;                            //@synthesize completion=_completion - In the implementation block
-(void)setRetryCount:(unsigned long long)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(unsigned long long)retryCount;
-(id)attributeDescriptions;
-(id)completion;
-(BOOL)naturalLightingEnabled;
-(id)initWithNaturalLightingEnabled:(BOOL)arg1 completion:(/*^block*/id)arg2 retryCount:(unsigned long long)arg3 ;
@end

