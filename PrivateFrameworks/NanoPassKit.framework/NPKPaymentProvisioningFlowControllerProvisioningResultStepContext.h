/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:46:17 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/NanoPassKit.framework/NanoPassKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <NanoPassKit/NPKPaymentProvisioningFlowStepContext.h>

@class PKPaymentPass, NSError;

@interface NPKPaymentProvisioningFlowControllerProvisioningResultStepContext : NPKPaymentProvisioningFlowStepContext {

	BOOL _cardAdded;
	PKPaymentPass* _provisionedPass;
	NSError* _error;

}

@property (assign,nonatomic) BOOL cardAdded;                               //@synthesize cardAdded=_cardAdded - In the implementation block
@property (nonatomic,retain) PKPaymentPass * provisionedPass;              //@synthesize provisionedPass=_provisionedPass - In the implementation block
@property (nonatomic,retain) NSError * error;                              //@synthesize error=_error - In the implementation block
-(NSError *)error;
-(void)setError:(NSError *)arg1 ;
-(void)setProvisionedPass:(PKPaymentPass *)arg1 ;
-(PKPaymentPass *)provisionedPass;
-(id)initWithRequestContext:(id)arg1 ;
-(id)description;
-(void)setCardAdded:(BOOL)arg1 ;
-(BOOL)cardAdded;
@end
