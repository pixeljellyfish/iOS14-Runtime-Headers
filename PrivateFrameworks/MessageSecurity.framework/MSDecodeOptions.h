/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:35:58 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/MessageSecurity.framework/MessageSecurity
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <MessageSecurity/MessageSecurity-Structs.h>
@class NSArray, NSDate, NSData;

@interface MSDecodeOptions : NSObject {

	BOOL _verifySignatures;
	BOOL _verifySigners;
	NSArray* _signerPolicies;
	NSDate* _verifyTime;
	SecIdentityRef _identity;
	NSData* _key;
	NSData* _LAContext;

}

@property (assign) BOOL verifySignatures;                 //@synthesize verifySignatures=_verifySignatures - In the implementation block
@property (assign) BOOL verifySigners;                    //@synthesize verifySigners=_verifySigners - In the implementation block
@property (retain) NSArray * signerPolicies;              //@synthesize signerPolicies=_signerPolicies - In the implementation block
@property (retain) NSDate * verifyTime;                   //@synthesize verifyTime=_verifyTime - In the implementation block
@property (assign) SecIdentityRef identity;               //@synthesize identity=_identity - In the implementation block
@property (retain) NSData * key;                          //@synthesize key=_key - In the implementation block
@property (retain) NSData * LAContext;                    //@synthesize LAContext=_LAContext - In the implementation block
-(NSData *)key;
-(void)setKey:(NSData *)arg1 ;
-(void)dealloc;
-(id)init;
-(void)setLAContext:(NSData *)arg1 ;
-(void)setIdentity:(SecIdentityRef)arg1 ;
-(SecIdentityRef)identity;
-(NSData *)LAContext;
-(BOOL)verifySigners;
-(NSArray *)signerPolicies;
-(NSDate *)verifyTime;
-(BOOL)verifySignatures;
-(id)initWithDecryptionIdentity:(SecIdentityRef)arg1 ;
-(id)initWithDecryptionKey:(id)arg1 ;
-(void)setVerifySignatures:(BOOL)arg1 ;
-(void)setVerifySigners:(BOOL)arg1 ;
-(void)setSignerPolicies:(NSArray *)arg1 ;
-(void)setVerifyTime:(NSDate *)arg1 ;
@end

