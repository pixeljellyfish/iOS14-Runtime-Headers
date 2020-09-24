/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:37:50 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/ContactsDonation.framework/ContactsDonation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol CNDonationExtensionLogger;
@class NSExtension;

@interface CNDDonorExtension : NSObject {

	NSExtension* _extension;
	id<CNDonationExtensionLogger> _logger;

}

@property (nonatomic,readonly) NSExtension * extension;                           //@synthesize extension=_extension - In the implementation block
@property (nonatomic,readonly) id<CNDonationExtensionLogger> logger;              //@synthesize logger=_logger - In the implementation block
-(id<CNDonationExtensionLogger>)logger;
-(id)initWithExtension:(id)arg1 ;
-(NSExtension *)extension;
-(id)description;
-(void)renewExpirationDateForDonatedValue:(id)arg1 acknowledgementHandler:(/*^block*/id)arg2 ;
-(void)redonateAllValuesWithReason:(unsigned long long)arg1 ;
-(id)initWithExtension:(id)arg1 logger:(id)arg2 ;
@end
