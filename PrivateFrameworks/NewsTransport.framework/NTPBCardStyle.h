/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:39:51 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/NewsTransport.framework/NewsTransport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <NewsTransport/NewsTransport-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NTPBColor, NTPBColorGradient;

@interface NTPBCardStyle : PBCodable <NSCopying> {

	NTPBColor* _callToActionBackgroundColor;
	NTPBColor* _callToActionForegroundColor;
	NTPBColor* _cardBackgroundColor;
	NTPBColor* _cardForegroundColor;
	NTPBColor* _eyebrowForegroundColor;
	NTPBColorGradient* _sauceGradient;
	NTPBColor* _titleForegroundColor;

}

@property (nonatomic,readonly) BOOL hasTitleForegroundColor; 
@property (nonatomic,retain) NTPBColor * titleForegroundColor;                     //@synthesize titleForegroundColor=_titleForegroundColor - In the implementation block
@property (nonatomic,readonly) BOOL hasEyebrowForegroundColor; 
@property (nonatomic,retain) NTPBColor * eyebrowForegroundColor;                   //@synthesize eyebrowForegroundColor=_eyebrowForegroundColor - In the implementation block
@property (nonatomic,readonly) BOOL hasCardBackgroundColor; 
@property (nonatomic,retain) NTPBColor * cardBackgroundColor;                      //@synthesize cardBackgroundColor=_cardBackgroundColor - In the implementation block
@property (nonatomic,readonly) BOOL hasCardForegroundColor; 
@property (nonatomic,retain) NTPBColor * cardForegroundColor;                      //@synthesize cardForegroundColor=_cardForegroundColor - In the implementation block
@property (nonatomic,readonly) BOOL hasSauceGradient; 
@property (nonatomic,retain) NTPBColorGradient * sauceGradient;                    //@synthesize sauceGradient=_sauceGradient - In the implementation block
@property (nonatomic,readonly) BOOL hasCallToActionBackgroundColor; 
@property (nonatomic,retain) NTPBColor * callToActionBackgroundColor;              //@synthesize callToActionBackgroundColor=_callToActionBackgroundColor - In the implementation block
@property (nonatomic,readonly) BOOL hasCallToActionForegroundColor; 
@property (nonatomic,retain) NTPBColor * callToActionForegroundColor;              //@synthesize callToActionForegroundColor=_callToActionForegroundColor - In the implementation block
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)writeTo:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(NTPBColor *)cardForegroundColor;
-(void)setCardForegroundColor:(NTPBColor *)arg1 ;
-(BOOL)hasTitleForegroundColor;
-(BOOL)hasEyebrowForegroundColor;
-(BOOL)hasCardBackgroundColor;
-(BOOL)hasCardForegroundColor;
-(BOOL)hasSauceGradient;
-(BOOL)hasCallToActionBackgroundColor;
-(BOOL)hasCallToActionForegroundColor;
-(void)dealloc;
-(NTPBColor *)cardBackgroundColor;
-(NTPBColorGradient *)sauceGradient;
-(void)mergeFrom:(id)arg1 ;
-(void)setCardBackgroundColor:(NTPBColor *)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(void)setSauceGradient:(NTPBColorGradient *)arg1 ;
-(NTPBColor *)eyebrowForegroundColor;
-(unsigned long long)hash;
-(NTPBColor *)titleForegroundColor;
-(NTPBColor *)callToActionBackgroundColor;
-(NTPBColor *)callToActionForegroundColor;
-(void)setCallToActionBackgroundColor:(NTPBColor *)arg1 ;
-(void)setCallToActionForegroundColor:(NTPBColor *)arg1 ;
-(id)description;
-(void)setEyebrowForegroundColor:(NTPBColor *)arg1 ;
-(id)dictionaryRepresentation;
-(void)setTitleForegroundColor:(NTPBColor *)arg1 ;
@end

