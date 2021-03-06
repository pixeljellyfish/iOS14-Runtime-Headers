/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:38:53 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/ARKitCore.framework/ARKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ARKitCore/ARKitCore-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@interface ARHWFaceDetection : NSObject <NSSecureCoding> {

	long long _ID;
	double _rollAngleInDegrees;
	long long _detectionOrientation;
	SCD_Struct_AR57 _time;
	CGRect _boundingBox;

}

@property (assign,nonatomic) long long ID;                                //@synthesize ID=_ID - In the implementation block
@property (assign,nonatomic) double rollAngleInDegrees;                   //@synthesize rollAngleInDegrees=_rollAngleInDegrees - In the implementation block
@property (assign,nonatomic) CGRect boundingBox;                          //@synthesize boundingBox=_boundingBox - In the implementation block
@property (assign,nonatomic) long long detectionOrientation;              //@synthesize detectionOrientation=_detectionOrientation - In the implementation block
@property (assign,nonatomic) SCD_Struct_AR57 time;                        //@synthesize time=_time - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)faceDetectionFromDictionary:(id)arg1 ;
-(long long)ID;
-(SCD_Struct_AR57)time;
-(void)setTime:(SCD_Struct_AR57)arg1 ;
-(void)setID:(long long)arg1 ;
-(void)setBoundingBox:(CGRect)arg1 ;
-(CGRect)boundingBox;
-(BOOL)isEqual:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)setRollAngleInDegrees:(double)arg1 ;
-(void)setDetectionOrientation:(long long)arg1 ;
-(BOOL)isEqualToFaceDetection:(id)arg1 ;
-(double)rollAngleInDegrees;
-(long long)detectionOrientation;
@end

