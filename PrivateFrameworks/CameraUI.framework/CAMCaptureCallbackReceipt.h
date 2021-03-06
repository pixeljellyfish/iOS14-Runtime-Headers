/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:41:30 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/CameraUI.framework/CameraUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface CAMCaptureCallbackReceipt : NSObject {

	long long _callback;
	double _secondsSinceBegin;

}

@property (nonatomic,readonly) long long callback;                    //@synthesize callback=_callback - In the implementation block
@property (nonatomic,readonly) double secondsSinceBegin;              //@synthesize secondsSinceBegin=_secondsSinceBegin - In the implementation block
-(id)initWithCallback:(long long)arg1 duration:(double)arg2 ;
-(double)secondsSinceBegin;
-(long long)callback;
@end

