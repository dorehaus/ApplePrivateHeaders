/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:02 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/CoreData.framework/Versions/A/CoreData
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreData/CoreData-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSURL, NSBundle, NSString, NSDictionary;

@interface NSValidationErrorLocalizationPolicy : NSObject <NSCopying> {

	NSURL* _url;
	NSBundle* _localizationBundle;
	NSString* _modelStringsFileName;
	NSDictionary* _localizationDictionary;
	char _hasSetLocalizationDictionary;

}
-(id)localizedEntityNameForEntity:(id)arg1 ;
-(id)localizedPropertyNameForProperty:(id)arg1 ;
-(id)localizedModelStringForKey:(id)arg1 ;
-(void)_ensureFullLocalizationDictionaryIsLoaded;
-(void)setLocalizationDictionary:(id)arg1 ;
-(void)_ensureLocalizationDictionaryIsInitialized;
-(id)_localizedStringForKey:(id)arg1 value:(void*)arg2 ;
-(id)_cachedObjectForKey:(id)arg1 value:(void*)arg2 ;
-(id)_localizedPropertyNameForProperty:(id)arg1 entity:(id)arg2 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)dealloc;
-(id)initWithURL:(id)arg1 ;
-(id)localizationDictionary;
@end

