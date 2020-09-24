/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:36:28 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/DifferentialPrivacy.framework/DifferentialPrivacy
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface _DPLaplaceNoiseGenerator : NSObject {

	double _b;

}

@property (b,nonatomic,readonly) double b;              //@synthesize b=_b - In the implementation block
+(id)zeroMeanLaplaceNoiseGenerator:(double)arg1 ;
-(double)sample;
-(id)initWithScale:(double)arg1 ;
-(id)init;
-(double)b;
-(id)description;
@end
