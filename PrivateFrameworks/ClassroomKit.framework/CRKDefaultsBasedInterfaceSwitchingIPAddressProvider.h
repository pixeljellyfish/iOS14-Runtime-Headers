/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:38:50 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/ClassroomKit.framework/ClassroomKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/CRKIPAddressProviding.h>

@protocol CRKIPAddressProviding;
@class NSString;

@interface CRKDefaultsBasedInterfaceSwitchingIPAddressProvider : NSObject <CRKIPAddressProviding> {

	id<CRKIPAddressProviding> mBaseProvider;

}

@property (nonatomic,copy,readonly) NSString * IPAddress; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(NSString *)IPAddress;
-(void)makeProvider;
-(BOOL)prefersEthernet;
@end

