/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:46:41 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PassKitCore/PKPaymentWebServiceRequest.h>

@class PKApplePayTrustKey;

@interface PKApplePayTrustRegistrationRequest : PKPaymentWebServiceRequest {

	PKApplePayTrustKey* _applePayTrustKey;

}

@property (nonatomic,retain) PKApplePayTrustKey * applePayTrustKey;              //@synthesize applePayTrustKey=_applePayTrustKey - In the implementation block
-(id)_urlRequestWithServiceURL:(id)arg1 deviceIdentifier:(id)arg2 appleAccountInformation:(id)arg3 ;
-(PKApplePayTrustKey *)applePayTrustKey;
-(void)setApplePayTrustKey:(PKApplePayTrustKey *)arg1 ;
@end

