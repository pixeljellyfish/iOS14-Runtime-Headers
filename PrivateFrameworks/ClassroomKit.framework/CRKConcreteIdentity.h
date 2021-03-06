/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:38:51 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/ClassroomKit.framework/ClassroomKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ClassroomKit/ClassroomKit-Structs.h>
#import <libobjc.A.dylib/CRKIdentity.h>

@class NSString;

@interface CRKConcreteIdentity : NSObject <CRKIdentity> {

	SecIdentityRef _underlyingIdentity;

}

@property (nonatomic,readonly) id<CRKCertificate> certificate; 
@property (nonatomic,readonly) id<CRKPrivateKey> privateKey; 
@property (nonatomic,readonly) SecIdentityRef underlyingIdentity;              //@synthesize underlyingIdentity=_underlyingIdentity - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)identityWithCertificate:(id)arg1 privateKey:(id)arg2 ;
+(id)identityWithConfiguration:(id)arg1 ;
-(id)initWithIdentity:(SecIdentityRef)arg1 ;
-(id<CRKCertificate>)certificate;
-(void)dealloc;
-(id<CRKPrivateKey>)privateKey;
-(NSString *)description;
-(SecIdentityRef)underlyingIdentity;
@end

