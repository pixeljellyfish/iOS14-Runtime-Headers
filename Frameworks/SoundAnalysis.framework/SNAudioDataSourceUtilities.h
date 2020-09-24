/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:47:10 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/Frameworks/SoundAnalysis.framework/SoundAnalysis
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <SoundAnalysis/SoundAnalysis-Structs.h>
@interface SNAudioDataSourceUtilities : NSObject
+(void)enableAlwaysOnAudioRouting:(OpaqueAudioQueueRef)arg1 ;
+(void)setChannelAssignment:(unsigned)arg1 onQueue:(OpaqueAudioQueueRef)arg2 ;
+(id)createSiriAudioQueueConfigurationUsingChannelNumber:(unsigned)arg1 ;
+(id)createDefaultAudioQueueConfigurationUsingChannelNumber:(unsigned)arg1 ;
+(id)builtInMicrophoneDeviceUID;
+(id)audioQueueConfiguration;
@end
