/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:50:13 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/Frameworks/CoreServices.framework/CoreServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <CoreServices/CoreServices-Structs.h>
@class NSString, NSMutableDictionary, _LSLazyPropertyList, NSArray;

@interface _LSStringLocalizer : NSObject {

	CFBundleRef _bundle;
	NSString* _stringsFile;
	NSMutableDictionary* _stringsFileContent;
	_LSLazyPropertyList* _unlocalizedInfoPlistStrings;
	NSArray* _bundleLocalizations;
	NSArray* _bundleLocalizationsWithDefaultPrefLocs;

}
+(id)coreTypesLocalizer;
+(id)missingLocalizationPlaceholder;
+(id)IOQueue;
+(void)setPreferredLocalizationsForXCTests:(id)arg1 ;
+(id)localizedStringForCanonicalString:(id)arg1 preferredLocalizations:(id)arg2 context:(LSContext*)arg3 ;
+(id)frameworkBundleLocalizer;
+(void)gatherLocalizedStringsForCFBundle:(CFBundleRef)arg1 infoDictionary:(id)arg2 nameOnly:(BOOL)arg3 ;
+(id)preferredLocalizationsForXCTests;
+(void)findKeysToLocalizeInInfoDictionary:(id)arg1 forArrayKey:(CFStringRef)arg2 stringKey:(CFStringRef)arg3 localizedKeys:(id)arg4 ;
-(id)initWithBundleURL:(id)arg1 stringsFile:(id)arg2 ;
-(id)localizedStringDictionaryWithString:(id)arg1 defaultValue:(id)arg2 ;
-(void)enumerateLocalizedStringsForKeys:(id)arg1 usingBlock:(/*^block*/id)arg2 ;
-(id)stringsFileContentInBundle:(CFBundleRef)arg1 withLocaleCode:(id)arg2 ;
-(id)initWithCFBundle:(CFBundleRef)arg1 stringsFile:(id)arg2 ;
-(id)debugDescription;
-(void)dealloc;
-(id)initWithDatabase:(id)arg1 pluginUnit:(unsigned)arg2 ;
-(id)init;
-(id)localizedStringsWithStrings:(id)arg1 preferredLocalizations:(id)arg2 ;
-(id)localizedStringWithString:(id)arg1 inBundle:(CFBundleRef)arg2 preferredLocalizations:(id)arg3 ;
-(id)initWithDatabase:(id)arg1 bundleUnit:(unsigned)arg2 delegate:(unsigned)arg3 ;
-(id)localizedStringWithString:(id)arg1 inBundle:(CFBundleRef)arg2 localeCode:(id)arg3 ;
-(id)localizedStringWithString:(id)arg1 preferredLocalizations:(id)arg2 ;
-(void)enumerateLocalizedStringsUsingBlock:(/*^block*/id)arg1 ;
@end

