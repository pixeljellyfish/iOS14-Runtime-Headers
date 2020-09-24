/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:42:16 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <iTunesStoreUI/SUScriptObject.h>

@class SUScriptNavigationItem, NSArray, SUScriptButton, NSString;

@interface SUScriptNavigationBar : SUScriptObject

@property (readonly) SUScriptNavigationItem * backNavigationItem; 
@property (assign) long long barStyle; 
@property (readonly) NSArray * navigationItems; 
@property (copy) id translucent; 
@property (readonly) SUScriptNavigationItem * topNavigationItem; 
@property (readonly) long long barStyleBlack; 
@property (readonly) long long barStyleDefault; 
@property (retain) SUScriptButton * leftButton; 
@property (retain) id<SUScriptNavigationItem> leftItem; 
@property (retain) NSString * prompt; 
@property (retain) SUScriptButton * rightButton; 
@property (retain) id<SUScriptNavigationItem> rightItem; 
+(void)initialize;
+(id)webScriptNameForSelector:(SEL)arg1 ;
+(id)webScriptNameForKeyName:(id)arg1 ;
-(void)setTranslucent:(id)arg1 ;
-(SUScriptButton *)leftButton;
-(NSString *)prompt;
-(long long)barStyle;
-(void)setBarStyle:(long long)arg1 ;
-(id<SUScriptNavigationItem>)rightItem;
-(id)attributeKeys;
-(id<SUScriptNavigationItem>)leftItem;
-(void)setPrompt:(NSString *)arg1 ;
-(SUScriptButton *)rightButton;
-(id)init;
-(void)setLeftItem:(id<SUScriptNavigationItem>)arg1 ;
-(void)setRightItem:(id<SUScriptNavigationItem>)arg1 ;
-(void)setNavigationItems:(NSArray *)arg1 ;
-(NSArray *)navigationItems;
-(id)_className;
-(void)setRightButton:(SUScriptButton *)arg1 ;
-(void)setLeftButton:(SUScriptButton *)arg1 ;
-(id)scriptAttributeKeys;
-(id)translucent;
-(void)setLeftButton:(id)arg1 animated:(BOOL)arg2 ;
-(void)setRightButton:(id)arg1 animated:(BOOL)arg2 ;
-(id)initWithNativeNavigationBar:(id)arg1 ;
-(id)_nativeNavigationBar;
-(void)tearDownUserInterface;
-(id)_topNavigationItem;
-(void)setLeftItem:(id)arg1 animated:(BOOL)arg2 ;
-(void)setRightItem:(id)arg1 animated:(BOOL)arg2 ;
-(id)_copyTopNavigationItem;
-(id)buttonWithTitle:(id)arg1 style:(id)arg2 target:(id)arg3 action:(id)arg4 ;
-(SUScriptNavigationItem *)backNavigationItem;
-(void)setBackNavigationItem:(SUScriptNavigationItem *)arg1 ;
-(void)setTopNavigationItem:(SUScriptNavigationItem *)arg1 ;
-(SUScriptNavigationItem *)topNavigationItem;
-(long long)barStyleBlack;
-(long long)barStyleDefault;
@end
