/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:36:03 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/NewsUI.framework/NewsUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NUVideoViewControllerQueueFactory.h>

@protocol NUVideoViewControllerQueueFactory
@required
-(id)createQueueWithVideoItems:(id)arg1;

@end


@protocol NUVideoProviderFactory, NUVideoAdProviderFactory;
@class NUVideoViewControllerAdConfiguration;

@interface NUVideoViewControllerQueueFactory : NSObject <NUVideoViewControllerQueueFactory> {

	NUVideoViewControllerAdConfiguration* _adConfiguration;
	id<NUVideoProviderFactory> _videoProviderFactory;
	id<NUVideoAdProviderFactory> _videoAdProviderFactory;

}

@property (nonatomic,readonly) NUVideoViewControllerAdConfiguration * adConfiguration;              //@synthesize adConfiguration=_adConfiguration - In the implementation block
@property (nonatomic,readonly) id<NUVideoProviderFactory> videoProviderFactory;                     //@synthesize videoProviderFactory=_videoProviderFactory - In the implementation block
@property (nonatomic,readonly) id<NUVideoAdProviderFactory> videoAdProviderFactory;                 //@synthesize videoAdProviderFactory=_videoAdProviderFactory - In the implementation block
-(id)init;
-(NUVideoViewControllerAdConfiguration *)adConfiguration;
-(id)createQueueWithVideoItems:(id)arg1 ;
-(id)initWithAdConfiguration:(id)arg1 videoProviderFactory:(id)arg2 videoAdProviderFactory:(id)arg3 ;
-(id<NUVideoProviderFactory>)videoProviderFactory;
-(id<NUVideoAdProviderFactory>)videoAdProviderFactory;
@end

