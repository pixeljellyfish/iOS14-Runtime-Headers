/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:51:02 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/Frameworks/HomeKit.framework/HomeKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HomeKit/HMCameraControl.h>

@class _HMCameraAudioControl, HMCharacteristic;

@interface HMCameraAudioControl : HMCameraControl {

	_HMCameraAudioControl* _audioControl;

}

@property (nonatomic,retain) _HMCameraAudioControl * audioControl;              //@synthesize audioControl=_audioControl - In the implementation block
@property (nonatomic,readonly) HMCharacteristic * mute; 
@property (nonatomic,readonly) HMCharacteristic * volume; 
-(_HMCameraAudioControl *)audioControl;
-(void)setAudioControl:(_HMCameraAudioControl *)arg1 ;
-(HMCharacteristic *)volume;
-(HMCharacteristic *)mute;
-(id)initWithAudioControl:(id)arg1 ;
@end

