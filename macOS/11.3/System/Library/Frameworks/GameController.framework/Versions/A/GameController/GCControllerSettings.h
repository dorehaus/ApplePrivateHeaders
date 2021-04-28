/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:34 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/GameController.framework/Versions/A/GameController
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@protocol NSCopyingNSObjectNSSecureCoding;
@class NSUserDefaults, NSDictionary, NSMutableDictionary, NSArray, GCController, NSUUID, NSMutableSet, NSString;

@interface GCControllerSettings : NSObject <NSSecureCoding> {

	NSUserDefaults* _defaults;
	NSDictionary* _elementMappingKeyToElement;
	NSMutableDictionary* _elementMappings;
	NSMutableDictionary* __elementMappingFromUserDefaults;
	NSArray* _customizedElementSettings;
	GCController* _controller;
	NSUUID* _customizedUUID;
	NSMutableDictionary* _elementSettings;
	NSMutableSet* _observedKeyPaths;
	char _hapticsEnabled;
	char _screenShotEnabled;
	char _videoRecordingEnabled;
	char _customizationsEnabled;
	char _serialized;
	char _customized;
	id<NSCopying><NSObject><NSSecureCoding> _uniqueIdentifier;
	NSString* _bundleIdentifier;
	/*^block*/id _settingsChangedHandler;
	unsigned long long _settingsID;

}

@property (assign,nonatomic) char customized;                                                         //@synthesize customized=_customized - In the implementation block
@property (assign,nonatomic) unsigned long long settingsID;                                           //@synthesize settingsID=_settingsID - In the implementation block
@property (nonatomic,readonly) id<NSCopying><NSObject><NSSecureCoding> uniqueIdentifier;              //@synthesize uniqueIdentifier=_uniqueIdentifier - In the implementation block
@property (nonatomic,readonly) NSString * bundleIdentifier;                                           //@synthesize bundleIdentifier=_bundleIdentifier - In the implementation block
@property (nonatomic,readonly) NSDictionary * elementMappings;                                        //@synthesize elementMappings=_elementMappings - In the implementation block
@property (assign,nonatomic) char hapticsEnabled;                                                     //@synthesize hapticsEnabled=_hapticsEnabled - In the implementation block
@property (assign,nonatomic) char screenShotEnabled;                                                  //@synthesize screenShotEnabled=_screenShotEnabled - In the implementation block
@property (assign,nonatomic) char videoRecordingEnabled;                                              //@synthesize videoRecordingEnabled=_videoRecordingEnabled - In the implementation block
@property (assign,nonatomic) char customizationsEnabled;                                              //@synthesize customizationsEnabled=_customizationsEnabled - In the implementation block
@property (assign,nonatomic) char serialized;                                                         //@synthesize serialized=_serialized - In the implementation block
@property (nonatomic,copy) id settingsChangedHandler;                                                 //@synthesize settingsChangedHandler=_settingsChangedHandler - In the implementation block
+(char)supportsSecureCoding;
+(id)settingsDispatchQueue;
+(id)settingsCustomizedChangedHandlers;
+(id)controllerSettingsCustomizedChangedHandlers;
+(id)metaDefaults;
+(char)settingsCustomizedForController:(id)arg1 forBundleIdentifier:(id)arg2 ;
+(void)unregisterSettingsCustomizedHandlerForController:(id)arg1 forKey:(id)arg2 ;
+(void)registerSettingsCustomizedHandler:(/*^block*/id)arg1 forController:(id)arg2 forKey:(id)arg3 ;
+(void)setSettingsExist:(char)arg1 forBundleIdentifier:(id)arg2 ;
+(void)setSettingsExist:(char)arg1 forController:(id)arg2 forBundleIdentifier:(id)arg3 ;
+(void)registerSettingsCustomizedHandler:(/*^block*/id)arg1 forKey:(id)arg2 ;
+(void)unregisterSettingsCustomizedHandlerForKey:(id)arg1 ;
-(void)dealloc;
-(id)description;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)bundleIdentifier;
-(id<NSCopying><NSObject><NSSecureCoding>)uniqueIdentifier;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(char)customized;
-(id)initWithBundleIdentifier:(id)arg1 forControllerIdentifier:(id)arg2 ;
-(void)_updateControllerReference:(id)arg1 ;
-(char)customizationsEnabled;
-(char)videoRecordingEnabled;
-(char)screenShotEnabled;
-(id)initWithBundleIdentifier:(id)arg1 forController:(id)arg2 ;
-(void)registerForSettingsCustomized;
-(void)initializeUserDefaults;
-(id)mappingKeyForElement:(id)arg1 ;
-(void)setCustomized:(char)arg1 ;
-(void)unregisterForSettingsCustomized;
-(void)initializeElementMappings;
-(void)saveBool:(char)arg1 forKey:(id)arg2 ;
-(id)staticDefaultValues;
-(id)suiteNameForBundleIdentifier:(id)arg1 ;
-(void)observeDefaultsKeyPaths:(id)arg1 ;
-(id)defaultValues;
-(void)populateElementSettings;
-(void)observeDefaultsKeyPath:(id)arg1 options:(unsigned long long)arg2 context:(void*)arg3 ;
-(id)mappingForElement:(id)arg1 ;
-(void)saveObject:(id)arg1 forKey:(id)arg2 ;
-(void)deleteObjectForKey:(id)arg1 ;
-(id)elementSettingForKey:(id)arg1 ;
-(void)refreshSettingsExist;
-(id)initForController:(id)arg1 ;
-(void)setHapticsEnabled:(char)arg1 ;
-(void)setScreenShotEnabled:(char)arg1 ;
-(void)setVideoRecordingEnabled:(char)arg1 ;
-(void)setCustomizationsEnabled:(char)arg1 ;
-(id)mappingForButton:(id)arg1 ;
-(id)mappingForDirectionPad:(id)arg1 ;
-(id)mappingForTouchpad:(id)arg1 ;
-(void)setMappingForElement:(id)arg1 toElement:(id)arg2 ;
-(id)settingsForElement:(id)arg1 ;
-(void)eraseAllSettings;
-(void)restoreElementMappingToDefault;
-(NSDictionary *)elementMappings;
-(char)hapticsEnabled;
-(char)serialized;
-(void)setSerialized:(char)arg1 ;
-(id)settingsChangedHandler;
-(void)setSettingsChangedHandler:(id)arg1 ;
-(unsigned long long)settingsID;
-(void)setSettingsID:(unsigned long long)arg1 ;
@end

