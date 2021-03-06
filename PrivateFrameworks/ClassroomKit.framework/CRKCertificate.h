/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:38:51 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/ClassroomKit.framework/ClassroomKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class NSArray, NSString, NSData, NSDateInterval;


@protocol CRKCertificate <CRKKeychainItem>
@property (nonatomic,copy,readonly) NSArray * commonNames; 
@property (nonatomic,copy,readonly) NSString * fingerprint; 
@property (nonatomic,copy,readonly) NSData * dataRepresentation; 
@property (nonatomic,readonly) NSDateInterval * validityDateInterval; 
@property (getter=isTemporallyValid,nonatomic,readonly) BOOL temporallyValid; 
@property (getter=isCertificateAuthority,nonatomic,readonly) BOOL certificateAuthority; 
@property (nonatomic,readonly) unsigned hashingAlgorithm; 
@property (nonatomic,readonly) long long keySizeInBits; 
@property (nonatomic,readonly) SecCertificateRef underlyingCertificate; 
@required
-(NSData *)dataRepresentation;
-(NSString *)fingerprint;
-(long long)keySizeInBits;
-(unsigned)hashingAlgorithm;
-(NSDateInterval *)validityDateInterval;
-(BOOL)isTemporallyValid;
-(NSArray *)commonNames;
-(SecCertificateRef)underlyingCertificate;
-(BOOL)isCertificateAuthority;

@end

