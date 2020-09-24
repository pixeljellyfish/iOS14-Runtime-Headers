/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:37:46 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/HealthToolbox.framework/HealthToolbox
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HealthUI/HKInteractiveChartViewController.h>

@class HKHorizontalSingleLineSeries;

@interface WDChartExperimentsDoctorAppointments : HKInteractiveChartViewController {

	HKHorizontalSingleLineSeries* _appointmentSeries;

}

@property (nonatomic,readonly) HKHorizontalSingleLineSeries * appointmentSeries;              //@synthesize appointmentSeries=_appointmentSeries - In the implementation block
-(void)setColor:(id)arg1 ;
-(id)_parseSpecifications:(id)arg1 ;
-(id)initWithAppointments:(id)arg1 profile:(id)arg2 color:(id)arg3 ;
-(id)initWithSpecifications:(id)arg1 profile:(id)arg2 color:(id)arg3 ;
-(HKHorizontalSingleLineSeries *)appointmentSeries;
@end
