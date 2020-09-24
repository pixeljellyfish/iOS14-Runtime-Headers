/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:41:04 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HMFoundation/HMFObject.h>

@class HMFPairingIdentity, NSMutableArray;

@interface __HMDRegisteredIdentity : HMFObject {

	HMFPairingIdentity* _identity;
	NSMutableArray* _registeredObjects;

}

@property (copy,readonly) HMFPairingIdentity * identity;              //@synthesize identity=_identity - In the implementation block
@property (readonly) NSMutableArray * registeredObjects;              //@synthesize registeredObjects=_registeredObjects - In the implementation block
-(id)initWithIdentity:(id)arg1 ;
-(id)debugDescription;
-(id)init;
-(HMFPairingIdentity *)identity;
-(NSMutableArray *)registeredObjects;
-(id)description;
@end
