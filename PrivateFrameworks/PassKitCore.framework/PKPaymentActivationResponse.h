/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:46:44 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PassKitCore/PKPaymentWebServiceResponse.h>

@class NSString, NSDictionary, NSArray, NSURL;

@interface PKPaymentActivationResponse : PKPaymentWebServiceResponse {

	NSString* _stepIdentifier;
	NSString* _previousStepIdentifier;
	long long _verificationStatus;
	NSDictionary* _requiredVerificationFieldData;
	NSArray* _verificationChannels;
	NSURL* _passURL;

}

@property (nonatomic,copy) NSArray * verificationChannels;                                     //@synthesize verificationChannels=_verificationChannels - In the implementation block
@property (assign,nonatomic) long long verificationStatus;                                     //@synthesize verificationStatus=_verificationStatus - In the implementation block
@property (nonatomic,copy,readonly) NSString * stepIdentifier;                                 //@synthesize stepIdentifier=_stepIdentifier - In the implementation block
@property (nonatomic,copy,readonly) NSString * previousStepIdentifier;                         //@synthesize previousStepIdentifier=_previousStepIdentifier - In the implementation block
@property (nonatomic,copy,readonly) NSDictionary * requiredVerificationFieldData;              //@synthesize requiredVerificationFieldData=_requiredVerificationFieldData - In the implementation block
@property (nonatomic,copy,readonly) NSURL * passURL;                                           //@synthesize passURL=_passURL - In the implementation block
+(id)responseWithData:(id)arg1 forPass:(id)arg2 ;
-(id)initWithData:(id)arg1 forPass:(id)arg2 ;
-(void)setVerificationChannels:(NSArray *)arg1 ;
-(NSURL *)passURL;
-(NSString *)stepIdentifier;
-(long long)verificationStatus;
-(void)setVerificationStatus:(long long)arg1 ;
-(NSString *)previousStepIdentifier;
-(NSDictionary *)requiredVerificationFieldData;
-(NSArray *)verificationChannels;
@end

