/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:50:11 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/Frameworks/HealthKit.framework/HealthKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HealthKit/HealthKit-Structs.h>
#import <HealthKit/HKMedicalRecord.h>
#import <libobjc.A.dylib/HKConceptIndexable.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class HKMedicalCoding, HKMedicalCodingCollection, NSString, NSArray, HKMedicalDate, HKConcept, NSUUID, NSLocale, HKCoverageRecordType;

@interface HKCoverageRecord : HKMedicalRecord <HKConceptIndexable, NSSecureCoding, NSCopying> {

	HKMedicalCoding* _statusCoding;
	HKMedicalCodingCollection* _coverageTypeCodingCollection;
	NSString* _subscriber;
	NSString* _subscriberId;
	NSString* _beneficiary;
	NSString* _policyHolder;
	NSArray* _payor;
	HKMedicalCodingCollection* _relationshipCodingCollection;
	NSArray* _classification;
	NSString* _network;
	HKMedicalDate* _periodStartDate;
	HKMedicalDate* _periodEndDate;
	HKConcept* _status;
	HKConcept* _coverageType;
	HKConcept* _relationship;

}

@property (readonly) NSUUID * UUID; 
@property (nonatomic,copy,readonly) NSLocale * locale; 
@property (nonatomic,copy,readonly) NSString * country; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (copy,readonly) HKCoverageRecordType * coverageRecordType; 
@property (copy,readonly) NSString * beneficiary; 
@property (copy,readonly) NSArray * classification; 
@property (copy,readonly) HKConcept * coverageType; 
@property (copy,readonly) HKMedicalCodingCollection * coverageTypeCodingCollection; 
@property (copy,readonly) NSString * network; 
@property (copy,readonly) NSArray * payor; 
@property (copy,readonly) HKMedicalDate * periodEndDate; 
@property (copy,readonly) HKMedicalDate * periodStartDate; 
@property (copy,readonly) NSString * policyHolder; 
@property (copy,readonly) HKConcept * relationship; 
@property (copy,readonly) HKMedicalCodingCollection * relationshipCodingCollection; 
@property (copy,readonly) HKConcept * status; 
@property (copy,readonly) HKMedicalCoding * statusCoding; 
@property (copy,readonly) NSString * subscriber; 
@property (copy,readonly) NSString * subscriberId; 
+(id)_newCoverageRecordWithType:(id)arg1 note:(id)arg2 enteredInError:(BOOL)arg3 modifiedDate:(id)arg4 FHIRIdentifier:(id)arg5 locale:(id)arg6 extractionVersion:(long long)arg7 device:(id)arg8 metadata:(id)arg9 sortDate:(id)arg10 country:(id)arg11 state:(unsigned long long)arg12 statusCoding:(id)arg13 coverageTypeCodingCollection:(id)arg14 subscriber:(id)arg15 subscriberId:(id)arg16 beneficiary:(id)arg17 policyHolder:(id)arg18 payor:(id)arg19 relationshipCodingCollection:(id)arg20 classification:(id)arg21 network:(id)arg22 periodStartDate:(id)arg23 periodEndDate:(id)arg24 config:(/*^block*/id)arg25 ;
+(BOOL)supportsSecureCoding;
+(id)coverageRecordWithType:(id)arg1 note:(id)arg2 enteredInError:(BOOL)arg3 modifiedDate:(id)arg4 FHIRIdentifier:(id)arg5 locale:(id)arg6 extractionVersion:(long long)arg7 device:(id)arg8 metadata:(id)arg9 country:(id)arg10 state:(unsigned long long)arg11 statusCoding:(id)arg12 coverageTypeCodingCollection:(id)arg13 subscriber:(id)arg14 subscriberId:(id)arg15 beneficiary:(id)arg16 policyHolder:(id)arg17 payor:(id)arg18 relationshipCodingCollection:(id)arg19 classification:(id)arg20 network:(id)arg21 periodStartDate:(id)arg22 periodEndDate:(id)arg23 ;
+(id)coverageRecordWithType:(id)arg1 note:(id)arg2 enteredInError:(BOOL)arg3 modifiedDate:(id)arg4 FHIRIdentifier:(id)arg5 locale:(id)arg6 extractionVersion:(long long)arg7 device:(id)arg8 metadata:(id)arg9 sortDate:(id)arg10 country:(id)arg11 state:(unsigned long long)arg12 statusCoding:(id)arg13 coverageTypeCodingCollection:(id)arg14 subscriber:(id)arg15 subscriberId:(id)arg16 beneficiary:(id)arg17 policyHolder:(id)arg18 payor:(id)arg19 relationshipCodingCollection:(id)arg20 classification:(id)arg21 network:(id)arg22 periodStartDate:(id)arg23 periodEndDate:(id)arg24 ;
+(BOOL)_isConcreteObjectClass;
+(BOOL)supportsEquivalence;
+(id)indexableConceptKeyPaths;
+(id)cachedConceptRelationshipKeyPaths;
+(id)defaultDisplayString;
-(NSString *)subscriber;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSArray *)payor;
-(BOOL)isEquivalent:(id)arg1 ;
-(NSArray *)classification;
-(HKConcept *)relationship;
-(HKConcept *)status;
-(void)_setStatus:(id)arg1 ;
-(NSString *)network;
-(id)init;
-(HKCoverageRecordType *)coverageRecordType;
-(HKConcept *)coverageType;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)_setPayor:(id)arg1 ;
-(NSString *)beneficiary;
-(HKMedicalDate *)periodStartDate;
-(void)_setCoverageTypeCodingCollection:(id)arg1 ;
-(NSString *)subscriberId;
-(NSString *)policyHolder;
-(HKMedicalDate *)periodEndDate;
-(void)_setSubscriber:(id)arg1 ;
-(void)_setSubscriberId:(id)arg1 ;
-(void)_setBeneficiary:(id)arg1 ;
-(void)_setNetwork:(id)arg1 ;
-(void)_setPolicyHolder:(id)arg1 ;
-(void)_setRelationshipCodingCollection:(id)arg1 ;
-(void)_setClassification:(id)arg1 ;
-(void)_setPeriodStartDate:(id)arg1 ;
-(void)_setPeriodEndDate:(id)arg1 ;
-(HKMedicalCoding *)statusCoding;
-(id)codingsForKeyPath:(id)arg1 error:(id*)arg2 ;
-(BOOL)applyConcepts:(id)arg1 forKeyPath:(id)arg2 error:(id*)arg3 ;
-(id)statusCodingCollection;
-(id)_validateWithConfiguration:(HKObjectValidationConfiguration)arg1 ;
-(void)_setStatusCoding:(id)arg1 ;
-(id)medicalRecordCodings;
-(HKMedicalCodingCollection *)coverageTypeCodingCollection;
-(void)_setCoverageType:(id)arg1 ;
-(void)_setRelationship:(id)arg1 ;
-(HKMedicalCodingCollection *)relationshipCodingCollection;
-(NSString *)description;
@end

