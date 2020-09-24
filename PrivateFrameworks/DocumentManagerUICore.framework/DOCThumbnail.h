/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:42:57 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/DocumentManagerUICore.framework/DocumentManagerUICore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class UIImage;


@protocol DOCThumbnail <NSObject>
@property (getter=isLoading,nonatomic,readonly) BOOL loading; 
@property (nonatomic,readonly) BOOL isRepresentativeIcon; 
@property (nonatomic,readonly) UIImage * thumbnail; 
@property (readonly) BOOL hasFinishedTryingToFetchCorrectThumbnail; 
@required
-(BOOL)isLoading;
-(void)addListener:(id)arg1;
-(UIImage *)thumbnail;
-(void)removeListener:(id)arg1;
-(BOOL)isRepresentativeIcon;
-(void)scheduleUpdateIfNeeded;
-(id)averageColorInRect:(CGRect)arg1;
-(BOOL)registerGenerationCompletionHandler:(/*^block*/id)arg1;
-(BOOL)hasFinishedTryingToFetchCorrectThumbnail;

@end
