/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:43:53 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/ProVideo.framework/ProVideo
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ProVideo/ProVideo-Structs.h>
#import <libobjc.A.dylib/NSCoding.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/FxCustomParameterInterpolation.h>

@interface PAEColorWheelChannelData : NSObject <NSCoding, NSCopying, FxCustomParameterInterpolation> {

	PAEColorWheelData _value;

}
+(id)channelDataWithRadius:(double)arg1 theta:(double)arg2 saturation:(double)arg3 light:(double)arg4 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(double)theta;
-(void)setSaturation:(double)arg1 ;
-(double)light;
-(void)reset;
-(double)radius;
-(void)setRadius:(double)arg1 ;
-(double)saturation;
-(BOOL)isEqualTo:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)description;
-(void)setLight:(double)arg1 ;
-(void)setTheta:(double)arg1 ;
-(id)interpolateBetween:(id)arg1 withWeight:(float)arg2 ;
-(BOOL)isAtDefaults;
-(id)initWithRadius:(double)arg1 theta:(double)arg2 saturation:(double)arg3 light:(double)arg4 ;
@end
