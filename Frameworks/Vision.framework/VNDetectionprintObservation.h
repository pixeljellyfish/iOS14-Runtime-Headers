/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:50:40 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/Frameworks/Vision.framework/Vision
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Vision/Vision-Structs.h>
#import <Vision/VNObservation.h>

@class VNDetectionprint;

@interface VNDetectionprintObservation : VNObservation {

	VNDetectionprint* _detectionprint;

}

@property (copy,readonly) VNDetectionprint * detectionprint;              //@synthesize detectionprint=_detectionprint - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(unsigned long long)hash;
-(id)initWithDetectionprint:(id)arg1 requestRevision:(unsigned long long)arg2 ;
-(VNDetectionprint *)detectionprint;
@end

