/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:46:37 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PassKitCore/PKDiscoveryWebServiceResponse.h>

@class PKDiscoveryManifest;

@interface PKDiscoveryManifestResponse : PKDiscoveryWebServiceResponse {

	PKDiscoveryManifest* _manifest;

}

@property (nonatomic,readonly) PKDiscoveryManifest * manifest;              //@synthesize manifest=_manifest - In the implementation block
-(PKDiscoveryManifest *)manifest;
-(id)initWithManifest:(id)arg1 ;
-(id)initWithData:(id)arg1 ;
@end

