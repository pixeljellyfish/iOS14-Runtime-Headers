/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:36:37 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/HKGraphSeriesChartData.h>

@class NSString;

@interface HKInteractiveChartHearingSensitivityData : NSObject <HKGraphSeriesChartData> {

	BOOL _isLeftEar;
	BOOL _isAverage;
	double _sensitivityDbHL;

}

@property (assign,nonatomic) double sensitivityDbHL;                //@synthesize sensitivityDbHL=_sensitivityDbHL - In the implementation block
@property (assign,nonatomic) BOOL isLeftEar;                        //@synthesize isLeftEar=_isLeftEar - In the implementation block
@property (assign,nonatomic) BOOL isAverage;                        //@synthesize isAverage=_isAverage - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setSensitivityDbHL:(double)arg1 ;
-(BOOL)isLeftEar;
-(void)setIsLeftEar:(BOOL)arg1 ;
-(BOOL)isAverage;
-(void)setIsAverage:(BOOL)arg1 ;
-(double)sensitivityDbHL;
@end

