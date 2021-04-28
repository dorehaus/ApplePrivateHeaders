/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:05 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/ChronoServices.framework/Versions/A/ChronoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ChronoServices/ChronoServices-Structs.h>
#import <libobjc.A.dylib/CHSWidgetPersonality.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, NSData, INCWidgetIntentProvider, INIntent, NSMutableArray, CHSLocalizableString;

@interface CHSAvocadoDescriptor : NSObject <CHSWidgetPersonality, NSCopying, NSSecureCoding> {

	NSString* _extensionBundleIdentifier;
	NSString* _containerBundleIdentifier;
	NSString* _kind;
	NSString* _displayName;
	NSString* _intentType;
	NSString* _userActivityType;
	unsigned long long _supportedSizeClasses;
	NSString* _widgetDescription;
	long long _widgetVisibility;
	NSData* _localeToken;
	INCWidgetIntentProvider* _defaultIntentProvider;
	INIntent* _defaultIntent;
	NSMutableArray* _fetchDefaultIntentCompletions;

}

@property (nonatomic,retain) INCWidgetIntentProvider * defaultIntentProvider;                         //@synthesize defaultIntentProvider=_defaultIntentProvider - In the implementation block
@property (nonatomic,copy) INIntent * defaultIntent;                                                  //@synthesize defaultIntent=_defaultIntent - In the implementation block
@property (nonatomic,retain) NSMutableArray * fetchDefaultIntentCompletions;                          //@synthesize fetchDefaultIntentCompletions=_fetchDefaultIntentCompletions - In the implementation block
@property (nonatomic,copy,readonly) NSString * extensionBundleIdentifier;                             //@synthesize extensionBundleIdentifier=_extensionBundleIdentifier - In the implementation block
@property (nonatomic,copy,readonly) NSString * containerBundleIdentifier;                             //@synthesize containerBundleIdentifier=_containerBundleIdentifier - In the implementation block
@property (nonatomic,copy,readonly) NSString * kind;                                                  //@synthesize kind=_kind - In the implementation block
@property (nonatomic,copy,readonly) NSString * displayName;                                           //@synthesize displayName=_displayName - In the implementation block
@property (nonatomic,copy,readonly) NSString * intentType;                                            //@synthesize intentType=_intentType - In the implementation block
@property (nonatomic,copy,readonly) NSString * userActivityType;                                      //@synthesize userActivityType=_userActivityType - In the implementation block
@property (nonatomic,readonly) unsigned long long supportedSizeClasses;                               //@synthesize supportedSizeClasses=_supportedSizeClasses - In the implementation block
@property (nonatomic,copy,readonly) NSString * widgetDescription;                                     //@synthesize widgetDescription=_widgetDescription - In the implementation block
@property (nonatomic,readonly) long long widgetVisibility;                                            //@synthesize widgetVisibility=_widgetVisibility - In the implementation block
@property (getter=isInternal,nonatomic,readonly) char internal; 
@property (nonatomic,copy,readonly) NSData * localeToken;                                             //@synthesize localeToken=_localeToken - In the implementation block
@property (nonatomic,copy,readonly) CHSLocalizableString * localizableWidgetDescription; 
@property (nonatomic,copy,readonly) CHSLocalizableString * localizableDisplayName; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(char)supportsSecureCoding;
-(id)copyWithZone:(NSZone*)arg1 ;
-(char)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(NSString *)description;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)displayName;
-(NSString *)kind;
-(NSString *)userActivityType;
-(NSString *)intentType;
-(id)descriptionWithMultilinePrefix:(id)arg1 ;
-(id)succinctDescriptionBuilder;
-(id)descriptionBuilderWithMultilinePrefix:(id)arg1 ;
-(id)succinctDescription;
-(char)isInternal;
-(NSString *)extensionBundleIdentifier;
-(NSString *)containerBundleIdentifier;
-(char)matchesPersonality:(id)arg1 ;
-(id)initWithExtensionBundleIdentifier:(id)arg1 containerBundleIdentifier:(id)arg2 kind:(id)arg3 displayName:(id)arg4 intentType:(id)arg5 supportedSizeClasses:(unsigned long long)arg6 widgetDescription:(id)arg7 widgetVisibility:(long long)arg8 localeToken:(id)arg9 ;
-(id)initWithExtensionBundleIdentifier:(id)arg1 containerBundleIdentifier:(id)arg2 kind:(id)arg3 displayName:(id)arg4 intentType:(id)arg5 userActivityType:(id)arg6 supportedSizeClasses:(unsigned long long)arg7 widgetDescription:(id)arg8 ;
-(id)initWithExtensionBundleIdentifier:(id)arg1 containerBundleIdentifier:(id)arg2 kind:(id)arg3 displayName:(id)arg4 intentType:(id)arg5 supportedSizeClasses:(unsigned long long)arg6 widgetDescription:(id)arg7 widgetVisibility:(long long)arg8 ;
-(unsigned long long)supportedSizeClasses;
-(INIntent *)defaultIntent;
-(NSMutableArray *)fetchDefaultIntentCompletions;
-(void)setDefaultIntentProvider:(INCWidgetIntentProvider *)arg1 ;
-(void)setFetchDefaultIntentCompletions:(NSMutableArray *)arg1 ;
-(void)setDefaultIntent:(INIntent *)arg1 ;
-(NSString *)widgetDescription;
-(long long)widgetVisibility;
-(NSData *)localeToken;
-(id)initWithExtensionBundleIdentifier:(id)arg1 containerBundleIdentifier:(id)arg2 kind:(id)arg3 displayName:(id)arg4 supportedSizeClasses:(unsigned long long)arg5 widgetDescription:(id)arg6 ;
-(id)widgetForFamily:(long long)arg1 intent:(id)arg2 ;
-(void)loadDefaultIntent:(/*^block*/id)arg1 ;
-(char)_isValidSizeClass:(long long)arg1 ;
-(CHSLocalizableString *)localizableDisplayName;
-(CHSLocalizableString *)localizableWidgetDescription;
-(INCWidgetIntentProvider *)defaultIntentProvider;
@end

