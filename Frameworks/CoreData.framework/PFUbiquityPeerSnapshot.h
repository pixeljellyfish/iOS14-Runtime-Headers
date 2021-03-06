/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:50:44 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/Frameworks/CoreData.framework/CoreData
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSDictionary, NSMutableDictionary, PFUbiquityKnowledgeVector, NSNumber, NSDate, NSString;

@interface PFUbiquityPeerSnapshot : NSObject {

	NSDictionary* _logSnapshot;
	NSMutableDictionary* _diffFromPrevious;
	PFUbiquityKnowledgeVector* _kv;
	NSNumber* _transactionNumber;
	NSDate* _transactionDate;
	NSString* _exportingPeerID;

}

@property (nonatomic,readonly) NSDictionary * logSnapshot;                               //@synthesize logSnapshot=_logSnapshot - In the implementation block
@property (nonatomic,readonly) NSDictionary * diffFromPrevious;                          //@synthesize diffFromPrevious=_diffFromPrevious - In the implementation block
@property (nonatomic,readonly) PFUbiquityKnowledgeVector * knowledgeVector;              //@synthesize kv=_kv - In the implementation block
@property (nonatomic,readonly) NSNumber * transactionNumber;                             //@synthesize transactionNumber=_transactionNumber - In the implementation block
@property (nonatomic,readonly) NSDate * transactionDate;                                 //@synthesize transactionDate=_transactionDate - In the implementation block
@property (nonatomic,readonly) NSString * exportingPeerID;                               //@synthesize exportingPeerID=_exportingPeerID - In the implementation block
-(void)dealloc;
-(NSString *)exportingPeerID;
-(PFUbiquityKnowledgeVector *)knowledgeVector;
-(NSDate *)transactionDate;
-(NSDictionary *)logSnapshot;
-(long long)compare:(id)arg1 ;
-(id)initWithTranasctionEntry:(id)arg1 andLogSnapshot:(id)arg2 ;
-(NSDictionary *)diffFromPrevious;
-(BOOL)isEqual:(id)arg1 ;
-(id)initWithExportingPeerID:(id)arg1 logSnapshot:(id)arg2 transactionNumber:(id)arg3 transactionDate:(id)arg4 andKnowledgeVector:(id)arg5 ;
-(void)computeDiffToPreviousSnapshot:(id)arg1 ;
-(void)removeValuesChangedByPeerSnapshot:(id)arg1 ;
-(NSNumber *)transactionNumber;
-(id)description;
@end

