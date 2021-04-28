/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:39 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/UXKit.framework/Versions/A/UXKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UXKit/UXKit-Structs.h>
#import <UXKit/_UXSettingsGroupObserver.h>
#import <UXKit/_UXSettingsKeyPathObserver.h>
#import <libobjc.A.dylib/NSCopying.h>

@protocol OS_os_log;
@class NSHashTable, NSSet, NSDictionary, NSObject, NSString;

@interface _UXSettings : NSObject <_UXSettingsGroupObserver, _UXSettingsKeyPathObserver, NSCopying> {

	NSHashTable* _internal_keyObservers;
	NSHashTable* _internal_keyPathObservers;
	NSSet* _internal_childKeys;
	NSSet* _internal_leafKeys;
	NSDictionary* _internal_keyClasses;
	NSDictionary* _internal_keyStructs;
	char _internal_isObservingPropertiesAndChildren;
	NSObject*<OS_os_log> _log;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)settingsFromArchiveDictionary:(id)arg1 ;
+(char)ignoresKey:(id)arg1 ;
+(id)settingsFromArchiveFile:(id)arg1 error:(id*)arg2 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)dealloc;
-(id)init;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(id)_allKeys;
-(id)initWithDefaultValues;
-(void)restoreDefaultValues;
-(void)restoreFromArchiveDictionary:(id)arg1 ;
-(id)archiveDictionary;
-(void)removeKeyPathObserver:(id)arg1 ;
-(void)addKeyPathObserver:(id)arg1 ;
-(void)settings:(id)arg1 changedValueForKeyPath:(id)arg2 ;
-(void)setDefaultValues;
-(void)applyArchiveValue:(id)arg1 forKey:(id)arg2 ;
-(id)_initWithArchiveDictionary:(id)arg1 ;
-(id)archiveValueForKey:(id)arg1 ;
-(void)_startOrStopObservingPropertiesAndChildren;
-(void)_sendKeyChanged:(id)arg1 ;
-(void)_sendKeyPathChanged:(id)arg1 ;
-(char)_hasObservers;
-(id)_keyForChild:(id)arg1 ;
-(void)addKeyObserver:(id)arg1 ;
-(void)removeKeyObserver:(id)arg1 ;
-(void)setValuesFromModel:(id)arg1 ;
-(char)archiveToFile:(id)arg1 error:(id*)arg2 ;
-(char)restoreFromArchiveFile:(id)arg1 error:(id*)arg2 ;
-(void)settingsGroup:(id)arg1 didInsertSettings:(id)arg2 atIndex:(unsigned long long)arg3 ;
-(void)settingsGroup:(id)arg1 didRemoveSettings:(id)arg2 atIndex:(unsigned long long)arg3 ;
-(void)settingsGroup:(id)arg1 didMoveSettings:(id)arg2 fromIndex:(unsigned long long)arg3 toIndex:(unsigned long long)arg4 ;
-(id)_startInit;
-(void)_continueInitBySettingDefaultValues;
-(void)_completeInitByApplyingArchiveDictionary:(id)arg1 ;
-(void)_startObservingPropertiesAndChildren;
-(void)_stopObservingPropertiesAndChildren;
-(char)_isObservingPropertiesAndChildren;
-(void)_addInternalEntriesToArchiveDictionary:(id)arg1 ;
-(void)_startObservingChild:(id)arg1 ;
-(void)_stopObservingChild:(id)arg1 ;
-(id)_colorForKey:(id)arg1 fromDictionary:(id)arg2 ;
-(id)_dictionaryForColorKey:(id)arg1 ;
-(id)_fontForKey:(id)arg1 fromDictionary:(id)arg2 ;
-(id)_dictionaryForFontKey:(id)arg1 ;
-(id)_structValueForKey:(id)arg1 ofType:(id)arg2 fromDictionary:(id)arg3 ;
-(id)_dictionaryForStructKey:(id)arg1 ofType:(id)arg2 ;
-(void)_introspectKeys;
-(void)_handleChildGroupChange:(id)arg1 ;
-(void)_setAssociatedName:(id)arg1 ;
-(id)_associatedName;
-(id)_associatedNameOrNilIfDefault;
@end

