/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:35:54 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/Silex.framework/Silex
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol SVVideoMetadata <NSObject>
@property (readonly,nonatomic) double duration; 
@property (readonly,nonatomic) double time; 
@property (readonly,nonatomic) double framerate; 
@property (readonly,nonatomic) double timePlayed; 
@property (readonly,nonatomic) BOOL muted; 
@property (readonly,nonatomic) double volume; 
@required
-(double)time;
-(BOOL)muted;
-(double)duration;
-(double)volume;
-(double)framerate;
-(double)timePlayed;

@end

