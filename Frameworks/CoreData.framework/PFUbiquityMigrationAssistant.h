/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:50:44 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/Frameworks/CoreData.framework/CoreData
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, PFUbiquityLocation, NSMutableDictionary, NSMutableArray;

@interface PFUbiquityMigrationAssistant : NSObject {

	NSString* _ubiquityName;
	NSString* _localPeerID;
	PFUbiquityLocation* _ubiquityRootLocation;
	NSMutableDictionary* _baselineLocationsByVersionHash;
	NSMutableDictionary* _logLocationsByVersionHash;
	NSMutableArray* _receiptLocations;
	NSMutableArray* _orderedReceipts;
	NSString* _previousModelVersionHash;
	NSString* _currentModelVersionHash;

}

@property (nonatomic,readonly) NSString * previousModelVersionHash;              //@synthesize previousModelVersionHash=_previousModelVersionHash - In the implementation block
@property (nonatomic,readonly) NSString * currentModelVersionHash;               //@synthesize currentModelVersionHash=_currentModelVersionHash - In the implementation block
-(void)dealloc;
-(id)initWithUbiquityRootLocation:(id)arg1 peerID:(id)arg2 ubiquityName:(id)arg3 modelVersionHash:(id)arg4 ;
-(id)transactionLogLocationsForModelVersionHash:(id)arg1 ;
-(id)transactionLogLocationsByModelVersionHash;
-(id)baselineLocationsByModelVersionHash;
-(id)latestBaselineLocationSkipModelVersionHash:(id)arg1 ;
-(void)_populateBaselineAndTransactionLogLocations;
-(id)receiptLocations;
-(BOOL)canUseReceipts;
-(id)orderedReceipts;
-(id)latestTransactionLogForModelVersionHash:(id)arg1 ;
-(NSString *)previousModelVersionHash;
-(BOOL)electPreviousModelVersionHashFromTransactionLogsError:(id*)arg1 ;
-(NSString *)currentModelVersionHash;
@end

