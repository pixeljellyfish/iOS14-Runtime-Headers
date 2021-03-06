/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:37:50 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/ContactsDonation.framework/ContactsDonation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol CNDonationAgentAdapter <NSObject>
@required
-(id)donatedMeCardEither;
-(id)fetchDonatedMeCard;
-(id)removeDonatedMeCardValuesForIdentifiers:(id)arg1;
-(id)donateMeCardValues:(id)arg1;
-(id)changeFromAccount:(id)arg1 toAccount:(id)arg2;
-(id)meCardDonations;
-(id)rejectValueWithDonationIdentifier:(id)arg1;
-(id)removeAllRejections;
-(id)rejectValuesWithClusterIdentifier:(id)arg1;

@end

