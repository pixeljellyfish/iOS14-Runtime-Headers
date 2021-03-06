/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:50:55 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/Frameworks/WatchKit.framework/WatchKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <WatchKit/WatchKit-Structs.h>
@class NSString, NSDictionary;

@interface WKInterfaceDevice : NSObject {

	BOOL _batteryMonitoringEnabled;
	float _batteryLevel;
	double _screenScale;
	long long _batteryState;
	NSString* _preferredContentSizeCategory;
	long long _layoutDirection;
	long long _wristLocation;
	long long _crownOrientation;
	NSString* _deviceSystemVersion;
	NSString* _deviceName;
	NSString* _deviceModel;
	NSString* _deviceLocalizedModel;
	NSString* _deviceSystemName;
	CGRect _screenBounds;

}

@property (assign,nonatomic) CGRect screenBounds;                                                          //@synthesize screenBounds=_screenBounds - In the implementation block
@property (assign,nonatomic) double screenScale;                                                           //@synthesize screenScale=_screenScale - In the implementation block
@property (nonatomic,copy) NSString * preferredContentSizeCategory;                                        //@synthesize preferredContentSizeCategory=_preferredContentSizeCategory - In the implementation block
@property (nonatomic,copy) NSString * deviceSystemVersion;                                                 //@synthesize deviceSystemVersion=_deviceSystemVersion - In the implementation block
@property (nonatomic,copy) NSString * deviceName;                                                          //@synthesize deviceName=_deviceName - In the implementation block
@property (nonatomic,copy) NSString * deviceModel;                                                         //@synthesize deviceModel=_deviceModel - In the implementation block
@property (nonatomic,copy) NSString * deviceLocalizedModel;                                                //@synthesize deviceLocalizedModel=_deviceLocalizedModel - In the implementation block
@property (nonatomic,copy) NSString * deviceSystemName;                                                    //@synthesize deviceSystemName=_deviceSystemName - In the implementation block
@property (nonatomic,readonly) NSDictionary * cachedImages; 
@property (assign,getter=isBatteryMonitoringEnabled,nonatomic) BOOL batteryMonitoringEnabled;              //@synthesize batteryMonitoringEnabled=_batteryMonitoringEnabled - In the implementation block
@property (nonatomic,readonly) float batteryLevel;                                                         //@synthesize batteryLevel=_batteryLevel - In the implementation block
@property (nonatomic,readonly) long long batteryState;                                                     //@synthesize batteryState=_batteryState - In the implementation block
@property (nonatomic,readonly) long long layoutDirection;                                                  //@synthesize layoutDirection=_layoutDirection - In the implementation block
@property (nonatomic,readonly) long long wristLocation;                                                    //@synthesize wristLocation=_wristLocation - In the implementation block
@property (nonatomic,readonly) long long crownOrientation;                                                 //@synthesize crownOrientation=_crownOrientation - In the implementation block
@property (nonatomic,copy,readonly) NSString * systemVersion; 
@property (nonatomic,copy,readonly) NSString * name; 
@property (nonatomic,copy,readonly) NSString * model; 
@property (nonatomic,copy,readonly) NSString * localizedModel; 
@property (nonatomic,copy,readonly) NSString * systemName; 
+(id)currentDevice;
-(void)setDeviceModel:(NSString *)arg1 ;
-(NSString *)deviceName;
-(NSString *)deviceModel;
-(long long)layoutDirection;
-(NSString *)systemVersion;
-(float)batteryLevel;
-(NSString *)model;
-(NSString *)preferredContentSizeCategory;
-(double)screenScale;
-(void)setDeviceName:(NSString *)arg1 ;
-(void)setPreferredContentSizeCategory:(NSString *)arg1 ;
-(NSString *)localizedModel;
-(CGRect)screenBounds;
-(void)setScreenBounds:(CGRect)arg1 ;
-(BOOL)isBatteryMonitoringEnabled;
-(void)setScreenScale:(double)arg1 ;
-(void)setBatteryMonitoringEnabled:(BOOL)arg1 ;
-(NSString *)deviceLocalizedModel;
-(long long)batteryState;
-(NSString *)name;
-(NSString *)deviceSystemVersion;
-(NSString *)systemName;
-(NSString *)deviceSystemName;
-(NSDictionary *)cachedImages;
-(void)removeAllCachedImages;
-(long long)wristLocation;
-(long long)crownOrientation;
-(BOOL)addCachedImage:(id)arg1 name:(id)arg2 ;
-(BOOL)addCachedImageWithData:(id)arg1 name:(id)arg2 ;
-(void)removeCachedImageWithName:(id)arg1 ;
-(void)playHaptic:(long long)arg1 ;
-(void)setDeviceSystemVersion:(NSString *)arg1 ;
-(void)setDeviceLocalizedModel:(NSString *)arg1 ;
-(void)setDeviceSystemName:(NSString *)arg1 ;
@end

