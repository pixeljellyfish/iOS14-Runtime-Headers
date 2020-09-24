/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:47:25 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/Frameworks/MapKit.framework/MapKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class _MKPlaceActionButtonController;


@protocol _MKPlaceActionControlledButton <NSObject>
@property (assign,nonatomic,__weak) _MKPlaceActionButtonController * buttonController; 
@required
-(_MKPlaceActionButtonController *)buttonController;
-(void)setPrimaryTitle:(id)arg1 subtitle:(id)arg2;
-(void)setPrimaryTitle:(id)arg1;
-(void)setButtonController:(id)arg1;
-(void)placeActionButtonControllerTextDidChange:(id)arg1;

@end
